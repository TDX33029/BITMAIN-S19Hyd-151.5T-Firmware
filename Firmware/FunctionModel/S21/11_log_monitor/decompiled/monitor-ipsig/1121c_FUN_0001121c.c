// FUN_0001121c @ 0001121c  size=88  callers=1
// program: monitor-ipsig


void FUN_0001121c(void *param_1)

{
  ssize_t sVar1;
  char *__format;
  
  sVar1 = sendto(DAT_000220a4,param_1,10,0,(sockaddr *)&DAT_000220e4,0x10);
  if (sVar1 < 0) {
    __format = "send error....";
  }
  else {
    __format = "send ack OK!\n ";
  }
  printf(__format);
  return;
}

