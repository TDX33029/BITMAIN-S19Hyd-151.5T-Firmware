// FUN_01beee68 @ 01beee68 size=108 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_01beee68(uint *param_1,undefined *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  iVar1 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  if (*(int *)(iVar1 + -0x30) == 0) {
    *(undefined **)(iVar1 + -0x30) = &DAT_01d53c18;
  }
  if (param_2 == (undefined *)0x0) {
    param_2 = &UNK_01beee31;
  }
  FUN_01bef8ee(&DAT_01d53e18);
  uVar2 = DAT_01d54038;
  do {
    if (*(int *)(&DAT_01d53e38 + uVar2 * 4) == 0) {
      *param_1 = uVar2;
      *(undefined **)(&DAT_01d53e38 + uVar2 * 4) = param_2;
      DAT_01d54038 = uVar2;
      FUN_01bef86a(&DAT_01d53e18);
      return 0;
    }
    uVar2 = uVar2 + 1 & 0x7f;
  } while (DAT_01d54038 != uVar2);
  FUN_01bef86a(&DAT_01d53e18);
  return 0xb;
}

