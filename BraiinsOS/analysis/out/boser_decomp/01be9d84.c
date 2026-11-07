// FUN_01be9d84 @ 01be9d84 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_01be9d84(int param_1)

{
  int iVar1;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  if (param_1 != 0) {
    FUN_01bee02c(&DAT_01d53564);
    return;
  }
  iVar1 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  software_interrupt(0);
  *(undefined4 *)(iVar1 + -0x24) = 0;
  DAT_01d53490 = param_1;
  *(int *)(iVar1 + -0x6c) = iVar1 + -0x70;
  *(int **)(iVar1 + -0x60) = &DAT_01d53490;
  *(undefined4 *)(iVar1 + -0x28) = 0;
  *(int *)(iVar1 + -0x68) = iVar1 + -0x70;
  if (DAT_01d53573 != '\0') {
    DAT_01d53573 = -1;
  }
  DAT_01d53574 = param_1;
  FUN_01bee02c(&DAT_01d53564);
  FUN_01be9d80(1);
  return;
}

