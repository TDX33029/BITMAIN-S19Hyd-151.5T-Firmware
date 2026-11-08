// FUN_00a93f24 @ 00a93f24 size=652 calls_out=5 calls_in=2
// strings: 

void FUN_00a93f24(int param_1)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  code *pcVar3;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  bool bVar10;
  uint local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c [2];
  int local_24;
  
  iVar2 = *(int *)(param_1 + 0x5c);
  **(undefined1 **)(param_1 + 0x58) = 0;
  if (iVar2 != 0) {
    thunk_FUN_016d3fb4();
  }
  puVar8 = *(undefined4 **)(param_1 + 0x34);
  iVar2 = *(int *)(param_1 + 0x38) + -1;
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,0xffffffff,0,&DAT_018aa9d4);
  }
  if (iVar2 != 0) {
    iVar2 = iVar2 * 4;
    puVar4 = puVar8;
    do {
      puVar5 = (undefined1 *)*puVar4;
      iVar1 = FUN_016dd8a2(puVar5);
      *puVar5 = 0;
      if (iVar1 != -1) {
        thunk_FUN_016d3fb4(puVar5);
      }
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 + -4;
    } while (iVar2 != 0);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    thunk_FUN_016d3fb4(puVar8);
  }
  iVar2 = *(int *)(param_1 + 0x48);
  if (iVar2 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = *(undefined4 *)(param_1 + 0x50);
    local_44 = *(undefined4 *)(param_1 + 0x4c);
    local_3c = 0;
    local_4c = 0;
    local_48 = iVar2;
    local_38 = iVar2;
    local_34 = local_44;
  }
  local_50 = (uint)(iVar2 != 0);
  local_40 = local_50;
  while (FUN_00a5bbe4(local_2c,&local_50), local_2c[0] != 0) {
    iVar2 = local_2c[0] + local_24 * 0xc;
    if (*(int *)(iVar2 + 4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 8));
    }
    if ((*(uint *)(iVar2 + 0x88) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 0x8c));
    }
  }
  iVar2 = extraout_r1;
  if (*(undefined1 **)(param_1 + 0x60) != (undefined1 *)0x0) {
    iVar1 = *(int *)(param_1 + 100);
    **(undefined1 **)(param_1 + 0x60) = 0;
    iVar2 = 0;
    if (iVar1 != 0) {
      thunk_FUN_016d3fb4();
      iVar2 = extraout_r1_00;
    }
  }
  if (*(undefined1 **)(param_1 + 0x68) != (undefined1 *)0x0) {
    iVar1 = *(int *)(param_1 + 0x6c);
    **(undefined1 **)(param_1 + 0x68) = 0;
    iVar2 = 0;
    if (iVar1 != 0) {
      thunk_FUN_016d3fb4();
      iVar2 = extraout_r1_01;
    }
  }
  iVar1 = *(int *)(param_1 + 0x40);
  iVar9 = *(int *)(param_1 + 0x44);
  if (iVar9 != 0) {
    iVar7 = 0;
    do {
      puVar8 = (undefined4 *)(iVar1 + iVar7 * 8);
      uVar6 = *puVar8;
      puVar8 = (undefined4 *)puVar8[1];
      pcVar3 = (code *)*puVar8;
      iVar2 = 0;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar6);
        iVar2 = extraout_r1_02;
      }
      if (puVar8[1] != 0) {
        thunk_FUN_016d3fb4(uVar6);
        iVar2 = extraout_r1_03;
      }
      iVar7 = iVar7 + 1;
    } while (iVar9 != iVar7);
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    thunk_FUN_016d3fb4(iVar1);
    iVar2 = extraout_r1_04;
  }
  bVar10 = *(int *)(param_1 + 0x70) != 0;
  if (bVar10) {
    iVar2 = *(int *)(param_1 + 0x74);
  }
  if (bVar10 && iVar2 != 0) {
    thunk_FUN_016d3fb4();
    iVar2 = *(int *)(param_1 + 0x18);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x18);
  }
  if (iVar2 == 3) {
    FUN_016dffb2(*(undefined4 *)(param_1 + 0x1c));
    iVar2 = *(int *)(param_1 + 0x20);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (iVar2 == 3) {
    FUN_016dffb2(*(undefined4 *)(param_1 + 0x24));
    iVar2 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x28);
  }
  if (iVar2 != 3) {
    return;
  }
  uVar6 = FUN_016dac50(*(undefined4 *)(param_1 + 0x2c));
  iVar2 = thunk_FUN_016dde14(6,uVar6,0);
  if (iVar2 == -4) {
    iVar2 = 0;
  }
  FUN_016d3496(iVar2);
  return;
}

