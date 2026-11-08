// FUN_016dacb0 @ 016dacb0 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_016dacb0(void)

{
  int *piVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  int iVar2;
  
  piVar1 = (int *)FUN_016db35c();
  for (iVar2 = *piVar1; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x38)) {
    FUN_016dac6c(iVar2);
  }
  FUN_016dac6c(DAT_018db6e8);
  FUN_016dac6c(DAT_018ddd64);
  FUN_016dac6c(&DAT_018db5c0,extraout_r1,extraout_r2,in_r3);
  return;
}

