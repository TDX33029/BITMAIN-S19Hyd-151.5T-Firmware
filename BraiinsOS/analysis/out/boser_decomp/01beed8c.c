// FUN_01beed8c @ 01beed8c size=14 calls_out=0 calls_in=2
// strings: 

undefined4 FUN_01beed8c(int param_1)

{
  int iVar1;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  iVar1 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  return *(undefined4 *)(*(int *)(iVar1 + -0x30) + param_1 * 4);
}

