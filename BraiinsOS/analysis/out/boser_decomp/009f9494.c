// FUN_009f9494 @ 009f9494 size=64 calls_out=2 calls_in=1
// strings: 

void FUN_009f9494(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 + 1;
  iVar1 = param_1;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_009f9508(iVar1);
    iVar1 = iVar1 + 0x150;
  }
  if (param_2 == 0) {
    return;
  }
  thunk_FUN_01be4678(param_1);
  return;
}

