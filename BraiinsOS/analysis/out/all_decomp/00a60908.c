// FUN_00a60908 @ 00a60908 size=520 calls_out=2 calls_in=6
// strings: 

void FUN_00a60908(int param_1)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  if ((*(uint *)(param_1 + 0xfc) & 0x7fffffff) == 0) {
    uVar1 = *(uint *)(param_1 + 0x108);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x100));
    uVar1 = *(uint *)(param_1 + 0x108);
  }
  if ((uVar1 & 0x7fffffff) == 0) {
    uVar1 = *(uint *)(param_1 + 0x28);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x10c));
    uVar1 = *(uint *)(param_1 + 0x28);
  }
  if ((uVar1 != 5) && (3 < uVar1)) {
    uVar4 = *(undefined4 *)(param_1 + 0x2c);
    puVar5 = *(undefined4 **)(param_1 + 0x30);
    pcVar2 = (code *)*puVar5;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar4);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_016d3fb4(uVar4);
    }
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x40));
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4c));
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x58));
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 100));
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x70));
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x7c));
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x88));
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x94));
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa0));
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xac));
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xb8));
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc4));
  }
  iVar6 = *(int *)(param_1 + 0xd4);
  iVar7 = *(int *)(param_1 + 0xd0);
  if (iVar6 != 0) {
    puVar3 = (uint *)(iVar7 + 0x10);
    do {
      if ((*puVar3 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(puVar3[1]);
      }
      puVar3 = puVar3 + 7;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (*(int *)(param_1 + 0xcc) != 0) {
    thunk_FUN_016d3fb4(iVar7);
  }
  if (*(int *)(param_1 + 0xd8) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xdc));
  }
  if (*(int *)(param_1 + 0xe4) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xe8));
  }
  FUN_007b7ba0(param_1 + 0xf0);
  return;
}

