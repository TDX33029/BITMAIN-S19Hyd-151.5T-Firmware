// FUN_01623208 @ 01623208 size=184 calls_out=2 calls_in=1
// strings: 

void FUN_01623208(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x58);
  if (uVar3 == 0x80000001) {
    return;
  }
  if ((*(uint *)(param_1 + 0x40) & 0x7fffffff) == 0) {
    uVar1 = *(uint *)(param_1 + 0x4c);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x44));
    uVar1 = *(uint *)(param_1 + 0x4c);
  }
  if ((uVar1 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x50));
  }
  if ((uVar3 & 0x7fffffff) == 0) {
    iVar2 = *(int *)(param_1 + 0x28);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
    iVar2 = *(int *)(param_1 + 0x28);
  }
  if (iVar2 != -0x80000000) {
    if (iVar2 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2c));
    }
    if (*(int *)(param_1 + 8) != 0) {
      FUN_0161b2f0((int *)(param_1 + 8));
      return;
    }
  }
  return;
}

