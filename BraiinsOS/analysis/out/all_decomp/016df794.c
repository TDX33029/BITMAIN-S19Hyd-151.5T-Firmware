// FUN_016df794 @ 016df794 size=44 calls_out=0 calls_in=2
// strings: 

undefined4 FUN_016df794(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  iVar1 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  if (*(int *)(*(int *)(iVar1 + -0x30) + param_1 * 4) != param_2) {
    *(int *)(*(int *)(iVar1 + -0x30) + param_1 * 4) = param_2;
    *(byte *)(iVar1 + -0x4e) = *(byte *)(iVar1 + -0x4e) | 1;
  }
  return 0;
}

