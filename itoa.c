void _itoa?_(int i,char* buf){
  int p = i%10;
  int q = i/10;
  if(q)  _itoa?_(q,buf); // 递归
  char buff[2];
  sprintf(buff , "%d" , p);
  strcat(buf,buff);
} // 为何会崩溃
