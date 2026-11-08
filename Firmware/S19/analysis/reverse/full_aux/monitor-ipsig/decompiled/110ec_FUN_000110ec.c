// FUN_000110ec @ 000110ec  size=304  callers=0
// program: monitor-ipsig


undefined4 FUN_000110ec(void)

{
  int iVar1;
  size_t __n;
  char *pcVar2;
  ssize_t sVar3;
  char acStack_bc [32];
  char acStack_9c [40];
  char acStack_74 [100];
  
  memset(acStack_bc,0,0x1e);
  memset(acStack_9c,0,0x28);
  memset(acStack_74,0,100);
  iVar1 = FUN_00010afc(&DAT_000116e4,acStack_9c);
  if (iVar1 == 0) {
    puts("get IP error");
  }
  FUN_00010cc0(acStack_bc,&DAT_000116e4);
  __n = strlen(acStack_bc);
  strncpy(&DAT_000220ac,acStack_bc,__n);
  pcVar2 = stpcpy(acStack_74,acStack_9c);
  *pcVar2 = ',';
  memcpy(pcVar2 + 1,acStack_bc,__n + 1);
  sVar3 = sendto(DAT_000220a4,acStack_74,(size_t)(pcVar2 + (__n - (int)acStack_74) + 1),0,
                 (sockaddr *)&DAT_000220e4,0x10);
  if (sVar3 < 0) {
    printf("send error....");
    return 1;
  }
  printf("send ipmac:\n%s\n",acStack_74);
  return 1;
}

