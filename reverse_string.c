void lol_this_func_will_reverse_a_string(const char *str){
  char* buf = (char*)malloc(strlen(str)+1);
  char* tmp_str = str;  // 保存字符串头
  while(*str)  // 找到字符串末尾
    str++;
  while(tmp_str != --str)
    *buf++ = *str;
  *buf++ = *str;
  *buf = '\0';
  strcpy(str,buf);
  free(buf);
}
