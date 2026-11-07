// FUN_016d9ab0 @ 016d9ab0 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_016d9ab0(int param_1)

{
  int iVar1;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  if (param_1 != 0) {
    FUN_016dddc0(&DAT_018ddafc);
    return;
  }
  iVar1 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  software_interrupt(0);
  *(undefined4 *)(iVar1 + -0x24) = 0;
  DAT_018dda28 = param_1;
  *(int *)(iVar1 + -0x6c) = iVar1 + -0x70;
  *(int **)(iVar1 + -0x60) = &DAT_018dda28;
  *(undefined4 *)(iVar1 + -0x28) = 0;
  *(int *)(iVar1 + -0x68) = iVar1 + -0x70;
  if (DAT_018ddb0b != '\0') {
    DAT_018ddb0b = -1;
  }
  DAT_018ddb0c = param_1;
  FUN_016dddc0(&DAT_018ddafc);
  FUN_016d9aac(1);
  return;
}

