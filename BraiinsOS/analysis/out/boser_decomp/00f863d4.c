// FUN_00f863d4 @ 00f863d4 size=96 calls_out=6 calls_in=3
// strings: 

void FUN_00f863d4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == -0x80000000) {
    FUN_006b3868(param_1 + 0x10);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    FUN_006f6468(uVar2,*(undefined4 *)(param_1 + 0x10));
    FUN_0134aee0(iVar1,uVar2,8,0x70);
    FUN_00b96a8c(param_1 + 0x14);
    FUN_006b39d0(param_1 + 0x20);
  }
  FUN_006b3f70(param_1 + 0x38);
  return;
}

