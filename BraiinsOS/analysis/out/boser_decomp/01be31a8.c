// FUN_01be31a8 @ 01be31a8 size=68 calls_out=1 calls_in=1
// strings: 

void FUN_01be31a8(int param_1)

{
  int iVar1;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  if (param_1 == 0) {
    DAT_01d53560 = 0x664af9e0;
    iVar1 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
    *(undefined4 *)(iVar1 + -8) = 0x664af9e0;
    return;
  }
  FUN_01bed4e2(&DAT_01d53560,param_1,4);
  iVar1 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  *(undefined4 *)(iVar1 + -8) = DAT_01d53560;
  return;
}

