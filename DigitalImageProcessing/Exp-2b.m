I=imread('monkey.jpg');
E=rgb2gray(I);
h=zeros(1,256);
A=double(E);
[n,m]=size(A);
c=n*m;
h=zeros(1,256);

for i=1:n
    for j=1:m
        temp=A(i,j);
        h(temp+1)=h(temp+1)+1;
    end
end

pdf=h/c;
cdf(1)=pdf(1);
for i=2:256
    cdf(i)=cdf(i-1)+pdf(i);
end
new=round(cdf*256);
new=new+1;

z=zeros(1,300);
b=zeros(1,256);
for p=1:n
    for q=1:m
        temp=E(p,q);
        b(p,q)=new(temp+1);
        t=b(p,q);
        z(t)=z(t)+1;
    end
end
b=b-1;
subplot(2,2,1);
imshow(uint8(E));
title('Grey Image');
subplot(2,2,2);
bar(h);
title('Histogram')
subplot(2,2,3);
imshow(uint8(b));
title('Enhanced Image');
subplot(2,2,4);
bar(z);
title('Histogram Enhanced Image');