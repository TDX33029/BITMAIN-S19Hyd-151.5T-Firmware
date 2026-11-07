// FUN_019cd1e8 @ 019cd1e8 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_019cd1e8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1[1];
  iVar3 = *param_1;
  iVar4 = iVar2 + 1;
  iVar1 = iVar3;
  while (iVar4 = iVar4 + -1, iVar4 != 0) {
    FUN_019cd154(iVar1);
    iVar1 = iVar1 + 0x14;
  }
  if (iVar2 == 0) {
    return;
  }
  thunk_FUN_01be4678(iVar3);
  return;
}

