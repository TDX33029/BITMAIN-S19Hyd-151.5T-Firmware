// FUN_007b3d98 @ 007b3d98 size=356 calls_out=2 calls_in=1
// strings: 

void FUN_007b3d98(char *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa4));
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xb0));
  }
  FUN_007b3cd4(param_1 + 0x30);
  if (*param_1 != '\x06') {
    FUN_007b3cd4(param_1);
  }
  if (param_1[0x18] != '\x06') {
    FUN_007b3cd4();
  }
  iVar3 = *(int *)(param_1 + 0xbc);
  puVar2 = (undefined4 *)(iVar3 + 4);
  for (iVar4 = *(int *)(param_1 + 0xc0); iVar4 != 0; iVar4 = iVar4 + -1) {
    if (puVar2[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar2);
    }
    puVar2 = puVar2 + 3;
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  if ((*(uint *)(param_1 + 0x70) & 0x7fffffff) == 0) {
    uVar1 = *(uint *)(param_1 + 0x7c);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x74));
    uVar1 = *(uint *)(param_1 + 0x7c);
  }
  if ((uVar1 & 0x7fffffff) == 0) {
    uVar1 = *(uint *)(param_1 + 0x88);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x80));
    uVar1 = *(uint *)(param_1 + 0x88);
  }
  if ((uVar1 & 0x7fffffff) == 0) {
    uVar1 = *(uint *)(param_1 + 0x94);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8c));
    uVar1 = *(uint *)(param_1 + 0x94);
  }
  if ((uVar1 & 0x7fffffff) == 0) {
    iVar3 = *(int *)(param_1 + 0x60);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x98));
    iVar3 = *(int *)(param_1 + 0x60);
  }
  if (iVar3 == -0x80000000) {
    return;
  }
  if (iVar3 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 100));
  }
  FUN_007b3cd4(param_1 + 0x48);
  return;
}

