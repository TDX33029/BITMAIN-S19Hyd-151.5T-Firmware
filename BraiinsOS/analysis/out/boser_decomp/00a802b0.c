// FUN_00a802b0 @ 00a802b0 size=48 calls_out=2 calls_in=3
// strings: 

void FUN_00a802b0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == -0x80000000) {
    return;
  }
  FUN_009d5248();
  FUN_0132b958(iVar1,param_1[1],4,4);
  return;
}

