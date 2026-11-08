// FUN_0094ac88 @ 0094ac88 size=56 calls_out=1 calls_in=0
// strings: 

void FUN_0094ac88(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = ((uint)(param_2 - param_1) >> 4) * -0x55555555 + 1;
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    FUN_00fe40e4(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}

