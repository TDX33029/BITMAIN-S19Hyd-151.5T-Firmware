// FUN_00b51a0c @ 00b51a0c size=60 calls_out=2 calls_in=1
// strings: 

void FUN_00b51a0c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 == -0x80000000) {
    return;
  }
  iVar2 = param_1[1];
  FUN_0124f968(iVar2,param_1[2]);
  FUN_0132b958(iVar1,iVar2,4,0x28);
  return;
}

