// FUN_016d2b2c @ 016d2b2c size=68 calls_out=1 calls_in=1
// strings: 

void FUN_016d2b2c(int param_1)

{
  int iVar1;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  if (param_1 == 0) {
    DAT_018ddaf8 = 0x35edcb98;
    iVar1 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
    *(undefined4 *)(iVar1 + -8) = 0x35edcb98;
    return;
  }
  FUN_016dd1aa(&DAT_018ddaf8,param_1,4);
  iVar1 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  *(undefined4 *)(iVar1 + -8) = DAT_018ddaf8;
  return;
}

