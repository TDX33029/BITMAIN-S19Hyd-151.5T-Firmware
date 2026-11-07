// FUN_0199b6d8 @ 0199b6d8 size=96 calls_out=3 calls_in=3
// strings: 

void FUN_0199b6d8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[1] != 0) {
    thunk_FUN_01be4678(*param_1);
  }
  iVar3 = param_1[2];
  iVar2 = param_1[3];
  iVar4 = iVar2 + 1;
  iVar1 = iVar3;
  while (iVar4 = iVar4 + -1, iVar4 != 0) {
    FUN_0199b894(iVar1);
    iVar1 = iVar1 + 0x160;
  }
  if (iVar2 == 0) {
    return;
  }
  thunk_FUN_01be4678(iVar3);
  return;
}

