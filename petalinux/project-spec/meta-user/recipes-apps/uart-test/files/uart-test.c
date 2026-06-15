
int main() {
    int fd;
    // Abrimos UART1 (ttyPS1) en modo lectura/escritura
    fd = open("/dev/ttyPS1", O_RDWR | O_NOCTTY);
    
    if (fd < 0) {
        perror("Error al abrir UART1");
        return -1;
    }

    // Configuración básica: 115200 baudios, 8N1
    struct termios options;
    tcgetattr(fd, &options);
    cfsetispeed(&options, B115200);
    cfsetospeed(&options, B115200);
    options.c_cflag |= (CLOCAL | CREAD);
    options.c_cflag &= ~PARENB; // Sin paridad
    options.c_cflag &= ~CSTOPB; // 1 bit de parada
    options.c_cflag &= ~CSIZE;
    options.c_cflag |= CS8;     // 8 bits
    tcsetattr(fd, TCSANOW, &options);

    char *msg = "Hola desde la App en C de Gradiant\n";
    write(fd, msg, strlen(msg));

    printf("Mensaje enviado a UART1. Revisa tu archivo log en el host.\n");

    close(fd);
    return 0;
}
