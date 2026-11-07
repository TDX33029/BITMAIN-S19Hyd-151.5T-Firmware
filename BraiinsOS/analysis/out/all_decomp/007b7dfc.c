// FUN_007b7dfc @ 007b7dfc size=844 calls_out=4 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_007b7dfc(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x7fffffff) == 0) {
    uVar1 = *(uint *)(param_1 + 0x98);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x90));
    uVar1 = *(uint *)(param_1 + 0x98);
  }
  if ((uVar1 & 0x7fffffff) == 0) {
    uVar1 = *(uint *)(param_1 + 0xa4);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x9c));
    uVar1 = *(uint *)(param_1 + 0xa4);
  }
  if ((uVar1 & 0x7fffffff) == 0) {
    uVar1 = *(uint *)(param_1 + 0xb0);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa8));
    uVar1 = *(uint *)(param_1 + 0xb0);
  }
  if ((uVar1 & 0x7fffffff) == 0) {
    uVar1 = *(uint *)(param_1 + 0xbc);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xb4));
    uVar1 = *(uint *)(param_1 + 0xbc);
  }
  if ((uVar1 & 0x7fffffff) == 0) {
    uVar1 = *(uint *)(param_1 + 200);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc0));
    uVar1 = *(uint *)(param_1 + 200);
  }
  if ((uVar1 & 0x7fffffff) == 0) {
    uVar1 = *(uint *)(param_1 + 0xd4);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xcc));
    uVar1 = *(uint *)(param_1 + 0xd4);
  }
  if ((uVar1 & 0x7fffffff) == 0) {
    uVar1 = *(uint *)(param_1 + 0xe0);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd8));
    uVar1 = *(uint *)(param_1 + 0xe0);
  }
  if ((uVar1 & 0x7fffffff) == 0) {
    iVar2 = *(int *)(param_1 + 0x20);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xe4));
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (iVar2 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3c));
  }
  if ((*(uint *)(param_1 + 0xec) & 0x7fffffff) == 0) {
    uVar1 = *(uint *)(param_1 + 0xf8);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf0));
    uVar1 = *(uint *)(param_1 + 0xf8);
  }
  if ((uVar1 & 0x7fffffff) == 0) {
    uVar1 = *(uint *)(param_1 + 0x104);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xfc));
    uVar1 = *(uint *)(param_1 + 0x104);
  }
  if ((uVar1 & 0x7fffffff) == 0) {
    uVar1 = *(uint *)(param_1 + 0x110);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x108));
    uVar1 = *(uint *)(param_1 + 0x110);
  }
  if ((uVar1 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x114));
  }
  iVar8 = *(int *)(param_1 + 0x48);
  iVar6 = *(int *)(param_1 + 0x4c) + 1;
  iVar2 = iVar8;
  while (iVar6 = iVar6 + -1, iVar6 != 0) {
    FUN_00a60908(iVar2);
    iVar2 = iVar2 + 0x134;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    thunk_FUN_016d3fb4(iVar8);
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x54));
  }
  iVar8 = *(int *)(param_1 + 0x60);
  iVar6 = *(int *)(param_1 + 100) + 1;
  iVar2 = iVar8;
  while (iVar6 = iVar6 + -1, iVar6 != 0) {
    FUN_007b7dfc(iVar2);
    iVar2 = iVar2 + 0x16c;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    thunk_FUN_016d3fb4(iVar8);
  }
  iVar6 = *(int *)(param_1 + 0x6c);
  iVar2 = 0;
  for (iVar8 = *(int *)(param_1 + 0x70); iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*(int *)(iVar6 - iVar2) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)((iVar6 - iVar2) + 4));
    }
    iVar4 = iVar6 - iVar2;
    if (*(int *)(iVar4 + 0xc) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x10));
    }
    if (*(int *)(iVar4 + 0x18) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x1c));
    }
    iVar2 = iVar2 + -0x30;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    thunk_FUN_016d3fb4(iVar6);
  }
  if ((*(uint *)(param_1 + 0x10) != 5) && (3 < *(uint *)(param_1 + 0x10))) {
    uVar5 = *(undefined4 *)(param_1 + 0x14);
    puVar7 = *(undefined4 **)(param_1 + 0x18);
    pcVar3 = (code *)*puVar7;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x78));
  }
  FUN_007b7ba0(param_1 + 0x80);
  return;
}

