// FUN_01963710 @ 01963710 size=116 calls_out=3 calls_in=0
// strings: 

void FUN_01963710(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 != 0) && (iVar2 = iVar1 * 4 + 4, iVar1 + iVar2 != -5)) {
    thunk_FUN_01be4678(*(int *)(param_1 + 0x1c) - iVar2);
  }
  iVar2 = *(int *)(param_1 + 0x14);
  iVar1 = iVar2;
  for (iVar3 = *(int *)(param_1 + 0x18); iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_01963828(iVar1);
    iVar1 = iVar1 + 0x20;
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x10),iVar2,4,0x20);
  return;
}

