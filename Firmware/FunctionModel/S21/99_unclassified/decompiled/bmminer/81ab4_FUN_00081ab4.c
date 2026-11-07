// FUN_00081ab4 @ 00081ab4  size=80  callers=1
// program: bmminer


undefined4 FUN_00081ab4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_000983e0(0x100);
  if (iVar1 != 0) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      FUN_00081a10(param_1,iVar3);
      iVar2 = iVar2 + 1;
      usleep(10000);
      iVar3 = iVar3 + param_2;
    } while (iVar2 != iVar1);
  }
  return 0;
}

