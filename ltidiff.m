%% Finding the response of LTI System by difference equation

%Let y(n)-y(n-1)+0.9y(n-2) = x(n)

function [x,n]= ltidiff(st,lo,hi)    %% (0,-30,100)
n = [lo:hi];
x = [(n-st)==0 ];

subplot(2,1,1);
stem(n,x);
xlabel('time index n --->');
ylabel('impulse signal(n-st)--->');
title('Impulse signal position');

b=[1];
a=[1,-1,0.9];
h=filter(b,a,x);


subplot(2,1,2);
stem(n,h);
xlabel('time index n--->');
ylabel('Impulse response h(n)--->');
title('Impulse response of LTI system');
disp('Impulse response');

end