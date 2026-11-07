// FUN_0001db64 @ 0001db64  size=196  callers=1
// program: bmminer


undefined4 FUN_0001db64(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_200c;
  char acStack_2008 [8192];
  
  local_200c = param_3;
  if ((DAT_000c0410 == 0) || (*(char *)(DAT_000c0410 + 0x1c) == '\0')) {
    if (4 < DAT_000be63c) {
      snprintf(acStack_2008,0x2000,"No board name, chain = %d\n",param_1);
      FUN_0004948c(4,acStack_2008,0);
      return 0xffffffff;
    }
  }
  else if (param_2 != 0) {
    iVar1 = *(int *)(DAT_000c0410 + param_1 * 4);
    (**(code **)(iVar1 + 0x80))(iVar1,param_2,&local_200c);
    if (local_200c == param_3) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffe;
    }
    return uVar2;
  }
  return 0xffffffff;
}

