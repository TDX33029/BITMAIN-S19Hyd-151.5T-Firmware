// FUN_008931dc @ 008931dc size=296 calls_out=4 calls_in=2
// strings: 

void FUN_008931dc(int param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  bool bVar15;
  undefined8 uVar16;
  
  uVar16 = thunk_FUN_016de0ee(param_1,0x40);
  iVar9 = (int)uVar16 + (int)((ulonglong)uVar16 >> 0x20);
  iVar14 = *(int *)(param_1 + 8);
  uVar10 = *(undefined4 *)(param_1 + 0xc);
  if (*(char *)(iVar9 + 0x38) != '\x01') {
    uVar12 = 0;
    uVar13 = 0;
    if (*(char *)(iVar9 + 0x38) == '\x02') {
      iVar3 = *(int *)(param_1 + 0x10);
      goto joined_r0x00893274;
    }
    FUN_015e8e6c(iVar9,FUN_01655ec4);
    *(undefined1 *)(iVar9 + 0x38) = 1;
  }
  uVar12 = *(undefined4 *)(iVar9 + 0x18);
  uVar13 = *(undefined4 *)(iVar9 + 0x1c);
  *(int *)(iVar9 + 0x18) = iVar14;
  *(undefined4 *)(iVar9 + 0x1c) = uVar10;
  iVar3 = *(int *)(param_1 + 0x10);
joined_r0x00893274:
  if (iVar3 == 1) {
    bVar1 = *(int *)(param_1 + 0x18) == 0;
    bVar2 = *(int *)(param_1 + 0x1c) == 0;
    bVar15 = bVar1 && bVar2;
    if (!bVar1 || !bVar2) {
      iVar14 = *(int *)(param_1 + 0x20);
      bVar15 = iVar14 == 0;
    }
    if (!bVar15) {
      puVar8 = *(undefined4 **)(param_1 + 0x24);
      pcVar4 = (code *)*puVar8;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(iVar14);
      }
      if (puVar8[1] != 0) {
        thunk_FUN_016d3fb4(iVar14);
      }
    }
  }
  else if (iVar3 == 0) {
    FUN_007bf844(param_1 + 0x18);
  }
  uVar10 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar11 = param_2[5];
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = uVar10;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar11;
  if (*(char *)(iVar9 + 0x38) != '\x01') {
    if (*(char *)(iVar9 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar9,FUN_01655ec4);
    *(undefined1 *)(iVar9 + 0x38) = 1;
  }
  *(undefined4 *)(iVar9 + 0x18) = uVar12;
  *(undefined4 *)(iVar9 + 0x1c) = uVar13;
  return;
}

