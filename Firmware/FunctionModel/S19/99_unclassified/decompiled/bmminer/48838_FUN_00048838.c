// FUN_00048838 @ 00048838  size=124  callers=0
// program: bmminer


undefined4 FUN_00048838(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_808 [2048];
  
  if (DAT_0050f978 == 0) {
    return 0;
  }
  iVar1 = close(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    builtin_strncpy(local_808,"lcd close failed!!!\n",0x15);
    FUN_00032218(0,local_808);
    uVar2 = 0xffffffff;
  }
  DAT_0050f978 = 0;
  return uVar2;
}

