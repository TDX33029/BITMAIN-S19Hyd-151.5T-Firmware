// FUN_016ddfac @ 016ddfac size=20 calls_out=0 calls_in=1
// strings: 

int FUN_016ddfac(int *param_1)

{
  int iVar1;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  iVar1 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  return *(int *)(*(int *)(iVar1 + -4) + *param_1 * 4) + param_1[1];
}

