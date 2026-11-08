// FUN_016debfc @ 016debfc size=108 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_016debfc(uint *param_1,undefined *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  iVar1 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  if (*(int *)(iVar1 + -0x30) == 0) {
    *(undefined **)(iVar1 + -0x30) = &DAT_018de1b0;
  }
  if (param_2 == (undefined *)0x0) {
    param_2 = &UNK_016debc5;
  }
  FUN_016df682(&DAT_018de3b0);
  uVar2 = DAT_018de5d0;
  do {
    if (*(int *)(&DAT_018de3d0 + uVar2 * 4) == 0) {
      *param_1 = uVar2;
      *(undefined **)(&DAT_018de3d0 + uVar2 * 4) = param_2;
      DAT_018de5d0 = uVar2;
      FUN_016df5fe(&DAT_018de3b0);
      return 0;
    }
    uVar2 = uVar2 + 1 & 0x7f;
  } while (DAT_018de5d0 != uVar2);
  FUN_016df5fe(&DAT_018de3b0);
  return 0xb;
}

