// FUN_0068d308 @ 0068d308 size=92 calls_out=3 calls_in=1
// strings: 

void FUN_0068d308(int param_1)

{
  int iVar1;
  int local_34 [9];
  
  while (FUN_0069b77c(local_34,param_1 + 0x50,param_1), -0x7fffffff < local_34[0]) {
    FUN_00949bc0(local_34);
  }
  iVar1 = *(int *)(param_1 + 0x54);
  do {
    iVar1 = *(int *)(iVar1 + 0x244);
    thunk_FUN_01be4678();
  } while (iVar1 != 0);
  return;
}

