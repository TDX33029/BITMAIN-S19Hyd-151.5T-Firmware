// FUN_0002a4dc @ 0002a4dc  size=220  callers=2
// program: cgminer


undefined4 FUN_0002a4dc(int param_1,undefined4 param_2)

{
  char *__s1;
  int iVar1;
  char *__dest;
  
  __s1 = (char *)FUN_00020bbc(param_2,param_1);
  iVar1 = FUN_0002a4a8(param_1,__s1);
  if (iVar1 == 0) {
    FUN_0003e61c(__s1,param_1 + 0xa4);
    iVar1 = strncmp(__s1,"http://",7);
    if ((iVar1 != 0) && (iVar1 = strncmp(__s1,"https://",8), iVar1 != 0)) {
      __dest = (char *)FUN_0001f860(0x100,"cgminer.c","setup_url",0x431);
      builtin_strncpy(__dest,"stratum+tcp://",0xf);
      strncat(__dest,__s1,0xf2);
      FUN_0002a4a8(param_1,__dest);
    }
  }
  return *(undefined4 *)(param_1 + 0xa4);
}

