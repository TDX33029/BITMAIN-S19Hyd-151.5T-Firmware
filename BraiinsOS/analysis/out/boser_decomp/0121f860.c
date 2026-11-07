// FUN_0121f860 @ 0121f860 size=76 calls_out=1 calls_in=2
// strings: 

void FUN_0121f860(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == -1) {
    FUN_0132b898(param_1,0xffffffff,1,1,0);
    iVar1 = *(int *)(param_1 + 8);
  }
  *(int *)(param_1 + 8) = iVar1 + 1;
  return;
}

