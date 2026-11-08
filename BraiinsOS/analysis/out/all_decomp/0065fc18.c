// FUN_0065fc18 @ 0065fc18 size=312 calls_out=4 calls_in=2
// strings: 

void FUN_0065fc18(int param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined8 uVar15;
  
  uVar15 = thunk_FUN_016de0ee(param_1,0x40);
  iVar13 = (int)uVar15 + (int)((ulonglong)uVar15 >> 0x20);
  iVar12 = *(int *)(param_1 + 8);
  uVar7 = *(undefined4 *)(param_1 + 0xc);
  if (*(char *)(iVar13 + 0x38) != '\x01') {
    uVar10 = 0;
    uVar11 = 0;
    if (*(char *)(iVar13 + 0x38) == '\x02') {
      iVar3 = *(int *)(param_1 + 0x10);
      goto joined_r0x0065fcb0;
    }
    FUN_015e8e6c(iVar13,FUN_01655ec4);
    *(undefined1 *)(iVar13 + 0x38) = 1;
  }
  uVar10 = *(undefined4 *)(iVar13 + 0x18);
  uVar11 = *(undefined4 *)(iVar13 + 0x1c);
  *(int *)(iVar13 + 0x18) = iVar12;
  *(undefined4 *)(iVar13 + 0x1c) = uVar7;
  iVar3 = *(int *)(param_1 + 0x10);
joined_r0x0065fcb0:
  if (iVar3 == 1) {
    bVar1 = *(int *)(param_1 + 0x18) == 0;
    bVar2 = *(int *)(param_1 + 0x1c) == 0;
    bVar14 = bVar1 && bVar2;
    if (!bVar1 || !bVar2) {
      iVar12 = *(int *)(param_1 + 0x20);
      bVar14 = iVar12 == 0;
    }
    if (!bVar14) {
      puVar9 = *(undefined4 **)(param_1 + 0x24);
      pcVar4 = (code *)*puVar9;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(iVar12);
      }
      if (puVar9[1] != 0) {
        thunk_FUN_016d3fb4(iVar12);
      }
    }
  }
  else if (iVar3 == 0) {
    FUN_00654860(param_1 + 0x18);
  }
  uVar7 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = uVar7;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  uVar7 = param_2[5];
  uVar5 = param_2[6];
  uVar6 = param_2[7];
  uVar8 = param_2[8];
  *(undefined4 *)(param_1 + 0x20) = param_2[4];
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 0x30) = uVar8;
  uVar7 = param_2[10];
  uVar5 = param_2[0xb];
  uVar6 = param_2[0xc];
  uVar8 = param_2[0xd];
  *(undefined4 *)(param_1 + 0x34) = param_2[9];
  *(undefined4 *)(param_1 + 0x38) = uVar7;
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  *(undefined4 *)(param_1 + 0x40) = uVar6;
  *(undefined4 *)(param_1 + 0x44) = uVar8;
  if (*(char *)(iVar13 + 0x38) != '\x01') {
    if (*(char *)(iVar13 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar13,FUN_01655ec4);
    *(undefined1 *)(iVar13 + 0x38) = 1;
  }
  *(undefined4 *)(iVar13 + 0x18) = uVar10;
  *(undefined4 *)(iVar13 + 0x1c) = uVar11;
  return;
}

