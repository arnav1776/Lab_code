clc;

I =imread ('monkey.jpg'); 
G = rgb2gray (I);

figure

B = im2bw(G); 
subplot (2,2,1); imshow (I); title('Original Image');

subplot (2,2,2);

imshow (G);

title('GreyScale Image');

subplot (2,2,3);

imshow (B);

title('Black & White Image');

subplot (2,2, 4);

image (I);

title('Scaled Image');