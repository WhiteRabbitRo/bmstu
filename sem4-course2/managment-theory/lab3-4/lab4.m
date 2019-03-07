T1 = 1.2;
T = 5;
%k = 5.82;
k = 0;
A = [T*T1, (T1+T), 1, k];
B=[k];
w=0.001:0.001:0.5;
GM=freqs(A, 1, w);
U=real(GM);
V=imag(GM);
plot(U,V, 'Linewidth', 2); 
%title('�=�_{��}')

title('�=0')
hold on
plot(0,0,'r+', 'Linewidth', 2);
grid
hold off

% W=tf(B,A)

T=[0.1, 0.2,0.3,0.5,1,1.5,2,2.5,3,4, 5];
K_cr=[10.83, 5.82, 4.18, 2.28, 1.83, 1.50, 1.33, 1.23, 1.15, 1.08, 1.03];
figure();
plot(T,K_cr,'b-','LineWidth',2);
title('������� ������������ �������')
xlabel('T')
ylabel('k')
grid on;
hold on;

k = 1;
T = 1;
plot(T,k, 'g*', 'Linewidth', 2);



k = 1.5;
T = 1.5;
plot(T,k, 'r*', 'Linewidth', 2);



k = 2;
T = 2;
plot(T,k, 'b*', 'Linewidth', 2);
W1=tf([k],[T*T1,T+T1,1,k]);
ltiview({'step';'impulse';'bode';'nyquist';'pzmap'},W1);

