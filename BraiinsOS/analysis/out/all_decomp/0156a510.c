// FUN_0156a510 @ 0156a510 size=96 calls_out=3 calls_in=0
// strings: 

void FUN_0156a510(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = 0x80000023;
  FUN_01565f6c(param_2);
  iVar1 = *(int *)(param_2 + 0x1d4);
  for (iVar2 = *(int *)(param_2 + 0x1d8); iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_01505a78(iVar1);
    iVar1 = iVar1 + 0x24;
  }
  if (*(int *)(param_2 + 0x1d0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x1d4));
  }
  thunk_FUN_016d3fb4(param_2);
  return;
}

