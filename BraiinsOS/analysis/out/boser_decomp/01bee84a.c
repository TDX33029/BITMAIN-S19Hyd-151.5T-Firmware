// FUN_01bee84a @ 01bee84a size=12 calls_out=0 calls_in=1
// strings: 

void FUN_01bee84a(int param_1)

{
  int iVar1;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  iVar1 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  *(undefined4 *)(iVar1 + -0x34) = *(undefined4 *)(param_1 + 8);
  return;
}

