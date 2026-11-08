// FUN_0165cc74 @ 0165cc74 size=128 calls_out=2 calls_in=1
// strings: 

void FUN_0165cc74(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x34);
  iVar4 = *(int *)(param_1 + 0x38);
  for (iVar2 = 0; iVar4 != iVar2; iVar2 = iVar2 + 1) {
    puVar1 = (undefined4 *)(iVar3 + iVar2 * 0x10);
    FUN_0134bd64(*puVar1,puVar1[1]);
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x30),iVar3,4,0x10);
  if (*(int *)(param_1 + 0x3c) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
  }
  if (*(int *)(param_1 + 0x48) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  }
  if (*(int *)(param_1 + 0x54) == -0x80000000) {
    return;
  }
  FUN_0134bd64(*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  return;
}

