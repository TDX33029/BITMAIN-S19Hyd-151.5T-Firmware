// FUN_00669134 @ 00669134 size=304 calls_out=4 calls_in=2
// strings: 

void FUN_00669134(int param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  
  uVar14 = thunk_FUN_016de0ee(param_1,0x40);
  iVar8 = (int)uVar14 + (int)((ulonglong)uVar14 >> 0x20);
  iVar12 = *(int *)(param_1 + 8);
  uVar9 = *(undefined4 *)(param_1 + 0xc);
  if (*(char *)(iVar8 + 0x38) != '\x01') {
    uVar10 = 0;
    uVar11 = 0;
    if (*(char *)(iVar8 + 0x38) == '\x02') {
      iVar3 = *(int *)(param_1 + 0x10);
      goto joined_r0x006691cc;
    }
    FUN_015e8e6c(iVar8,FUN_01655ec4);
    *(undefined1 *)(iVar8 + 0x38) = 1;
  }
  uVar10 = *(undefined4 *)(iVar8 + 0x18);
  uVar11 = *(undefined4 *)(iVar8 + 0x1c);
  *(int *)(iVar8 + 0x18) = iVar12;
  *(undefined4 *)(iVar8 + 0x1c) = uVar9;
  iVar3 = *(int *)(param_1 + 0x10);
joined_r0x006691cc:
  if (iVar3 == 1) {
    bVar1 = *(int *)(param_1 + 0x18) == 0;
    bVar2 = *(int *)(param_1 + 0x1c) == 0;
    bVar13 = bVar1 && bVar2;
    if (!bVar1 || !bVar2) {
      iVar12 = *(int *)(param_1 + 0x20);
      bVar13 = iVar12 == 0;
    }
    if (!bVar13) {
      puVar7 = *(undefined4 **)(param_1 + 0x24);
      pcVar4 = (code *)*puVar7;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(iVar12);
      }
      if (puVar7[1] != 0) {
        thunk_FUN_016d3fb4(iVar12);
      }
    }
  }
  else if (iVar3 == 0) {
    FUN_0064e73c(param_1 + 0x18);
  }
  uVar9 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = uVar9;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  uVar9 = param_2[5];
  uVar5 = param_2[6];
  uVar6 = param_2[7];
  *(undefined4 *)(param_1 + 0x20) = param_2[4];
  *(undefined4 *)(param_1 + 0x24) = uVar9;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  if (*(char *)(iVar8 + 0x38) != '\x01') {
    if (*(char *)(iVar8 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar8,FUN_01655ec4);
    *(undefined1 *)(iVar8 + 0x38) = 1;
  }
  *(undefined4 *)(iVar8 + 0x18) = uVar10;
  *(undefined4 *)(iVar8 + 0x1c) = uVar11;
  return;
}

