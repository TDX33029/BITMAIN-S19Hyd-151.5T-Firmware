// FUN_00f1a2a8 @ 00f1a2a8 size=524 calls_out=2 calls_in=1
// strings: 

void FUN_00f1a2a8(int param_1)

{
  uint uVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0xfc) == -0x80000000 || *(int *)(param_1 + 0xfc) == 0) {
    if (*(int *)(param_1 + 0x108) == -0x80000000 || *(int *)(param_1 + 0x108) == 0) {
LAB_00f1a2d0:
      uVar1 = *(uint *)(param_1 + 0x28);
      goto joined_r0x00f1a33c;
    }
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x100));
    if (*(int *)(param_1 + 0x108) == -0x80000000 || *(int *)(param_1 + 0x108) == 0)
    goto LAB_00f1a2d0;
  }
  thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x10c));
  uVar1 = *(uint *)(param_1 + 0x28);
joined_r0x00f1a33c:
  if ((uVar1 != 5) && (3 < uVar1)) {
    uVar4 = *(undefined4 *)(param_1 + 0x2c);
    puVar6 = *(undefined4 **)(param_1 + 0x30);
    pcVar2 = (code *)*puVar6;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar4);
    }
    if (puVar6[1] != 0) {
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
  iVar5 = *(int *)(param_1 + 0xd0);
  iVar7 = *(int *)(param_1 + 0xd4);
  if (iVar7 != 0) {
    piVar3 = (int *)(iVar5 + 0x10);
    do {
      if (*piVar3 != -0x80000000 && *piVar3 != 0) {
        thunk_FUN_016d3fb4(piVar3[1]);
      }
      piVar3 = piVar3 + 7;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (*(int *)(param_1 + 0xcc) != 0) {
    thunk_FUN_016d3fb4(iVar5);
  }
  if (*(int *)(param_1 + 0xd8) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xdc));
  }
  if (*(int *)(param_1 + 0xe4) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xe8));
  }
  FUN_00f19f14(param_1 + 0xf0);
  return;
}

