clc;
I=imread('monkey.jpg');
E=rgb2gray(I);

h=zeros(1,256);
A=double(E);
[n,m]=size(A);
for i=1:n
    for j=1:m
        temp=A(i,j);
        h(temp+1)=h(temp+1)+1;
    end
end

for i=1:256
    disp(h(i));
end


subplot(2,2,1);
image(I);
title('RGB Image');
subplot(2,2,2);
imshow(E);
title('Grey Image');
subplot(2,2,3);
imhist(E);
title('Hist image');
subplot(2,2,4);
bar(h);
title('Bar image');
