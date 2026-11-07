// FUN_00015c30 @ 00015c30  size=64  callers=1
// program: bmminer


int FUN_00015c30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 8;
  do {
    iVar1 = FUN_0002fa34(0x1c,param_1,param_2);
    if (iVar1 != 0) {
      return iVar1;
    }
    usleep(1000);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

