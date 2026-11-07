// FUN_0003f2d0 @ 0003f2d0  size=160
// callers: [FUN_000418fc]

undefined4 FUN_0003f2d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char acStack_808 [2048];
  
  if (4 < DAT_00087bbc) {
    snprintf(acStack_808,0x800,"[DEBUG] Board init, is_power_off = %d.\n",param_1);
    FUN_00032218(4,acStack_808,0);
  }
  uVar3 = 0;
  do {
    iVar1 = FUN_000201d8(uVar3);
    if (iVar1 != 0) {
      thunk_FUN_0005924c(uVar3 & 0xff);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 4);
  FUN_00037c98();
  uVar2 = FUN_000388ec();
  FUN_00034a5c(10);
  FUN_0002bb80();
  FUN_00034a5c(10);
  return uVar2;
}


