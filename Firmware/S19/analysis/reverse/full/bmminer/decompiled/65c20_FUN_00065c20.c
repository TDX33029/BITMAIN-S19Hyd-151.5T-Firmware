// FUN_00065c20 @ 00065c20  size=584  callers=3
// program: bmminer


undefined4 FUN_00065c20(char *param_1,int param_2)

{
  size_t sVar1;
  char *pcVar2;
  uint __n;
  size_t sVar3;
  char *__dest;
  int iVar4;
  int *piVar5;
  int local_3038;
  char local_3034 [4100];
  char acStack_2030 [4100];
  char acStack_102c [4104];
  
  sVar1 = strlen(param_1);
  while( true ) {
    do {
      __dest = strchr(param_1,0x25);
      param_1 = __dest + 1;
      if (__dest == (char *)0x0) {
        return 0;
      }
      memset(local_3034,0,0x1001);
      memset(acStack_2030,0,0x1001);
      memset(acStack_102c,0,0x1001);
      local_3038 = 0;
      iVar4 = __isoc99_sscanf(param_1,"%[.0-9-]%n",local_3034 + 1,&local_3038);
      if (iVar4 == 1) {
        local_3034[0] = 0x25;
        param_1 = __dest + local_3038 + 1;
        local_3034[local_3038 + 1] = 's';
      }
      else {
        local_3038 = 0;
        local_3034[0] = '%';
        local_3034[1] = 's';
        local_3034[2] = 0;
      }
      iVar4 = __isoc99_sscanf(param_1,"E(%[^)])%n",acStack_2030,&local_3038);
    } while (iVar4 == 0);
    param_1 = param_1 + local_3038;
    if (param_1[-1] != ')') {
      FUN_000658a8(2,"src/zc_util.c",0x7c,"in string[%s] can\'t find match )",__dest);
      return 0xffffffff;
    }
    pcVar2 = getenv(acStack_2030);
    __n = snprintf(acStack_102c,0x1001,local_3034,pcVar2);
    if (0x1000 < __n) {
      piVar5 = __errno_location();
      FUN_000658a8(2,"src/zc_util.c",0x83,"snprintf fail, errno[%d], evn_value_len[%d]",*piVar5,__n)
      ;
      return 0xffffffff;
    }
    sVar1 = (sVar1 - ((int)param_1 - (int)__dest)) + __n;
    if (param_2 - 1U < sVar1) break;
    sVar3 = strlen(param_1);
    memmove(__dest + __n,param_1,sVar3 + 1);
    memcpy(__dest,acStack_102c,__n);
  }
  FUN_000658a8(2,"src/zc_util.c",0x89,"repalce env_value[%s] cause overlap",acStack_102c);
  return 0xffffffff;
}

