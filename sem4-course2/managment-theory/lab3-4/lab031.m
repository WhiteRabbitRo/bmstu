w=[0.03, 0.05, 0.1, 0.3, 0.5, 1, 3, 5, 10];
Aw=[2.509, 2.53, 2.621, 3.658, 2.403, 0.4515, 0.0449, 0.016, 0.0039];
dt=[-1,	-1.7, -1.9, -2.9, -4.3, -2.76, -1.02, -0.62, -0.3];
Tw=2*pi./w;
phi=dt./Tw*360
L=20*log10(Aw)

figure();
plot(w, Aw, 'LineWidth',2);
grid on;
title('������ ���');
ylabel('A(\omega)');
xlabel('\omega, ��');

figure();
plot(w, phi, 'LineWidth',2);
grid on;
title('������ ���');
ylabel('\phi(\omega), ����.');
xlabel('\omega, ��');

figure();
semilogx(w, L, 'LineWidth',2);
grid on
title('������ ��������������� ���');
ylabel('L(\omega), ��');
xlabel('\omega, ������ ��');

k=2.5;
T=2.5;
xi=0.35;
W=tf([k],[T^2,2*T*xi,1]);
figure();
bode(W);

figure();
nyquist(W);
hold on;
polar(phi*pi/180, Aw, 'r-');
title('�������� ����');

