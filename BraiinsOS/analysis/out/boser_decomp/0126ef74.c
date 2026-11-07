// FUN_0126ef74 @ 0126ef74 size=120 calls_out=4 calls_in=1
// strings: 

void FUN_0126ef74(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == -0x80000000) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 != 0) && (iVar2 = iVar1 * 4 + 4, iVar1 + iVar2 != -5)) {
    thunk_FUN_01be4678(*(int *)(param_1 + 0x1c) - iVar2);
  }
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  FUN_01a4c9d8(uVar4,*(undefined4 *)(param_1 + 0x18));
  FUN_0134aee0(iVar3,uVar4,8,0xc0);
  FUN_00a4241c(param_1 + 0x30);
  return;
}

