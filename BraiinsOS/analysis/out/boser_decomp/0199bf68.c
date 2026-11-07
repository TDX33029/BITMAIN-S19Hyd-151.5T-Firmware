// FUN_0199bf68 @ 0199bf68 size=76 calls_out=2 calls_in=0
// strings: 

void FUN_0199bf68(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  iVar2 = param_1[2] + 1;
  iVar1 = iVar3;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_0199b894(iVar1);
    iVar1 = iVar1 + 0x160;
  }
  if (*param_1 == 0) {
    return;
  }
  thunk_FUN_01be4678(iVar3);
  return;
}

