// FUN_014c4e40 @ 014c4e40 size=336 calls_out=3 calls_in=0
// strings: 

void FUN_014c4e40(char *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = param_1[0x154];
  if (cVar1 != '\0') {
    if (cVar1 == '\x03') {
      if (param_1[0x290] == '\x03') {
        pcVar6 = param_1 + 500;
      }
      else {
        if (param_1[0x290] != '\0') goto LAB_014c4ee0;
        pcVar6 = param_1 + 0x158;
      }
      FUN_014c5278(pcVar6);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_014c53b8(param_1 + 0x160);
      piVar5 = *(int **)(param_1 + 0x158);
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01561b24(*(undefined4 *)(param_1 + 0x158));
      }
    }
LAB_014c4ee0:
    if (param_1[0x156] != '\0') {
      piVar5 = *(int **)(param_1 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01561b24(*(undefined4 *)(param_1 + 0x14));
      }
    }
    if (param_1[0x155] == '\0') {
      return;
    }
    goto LAB_014c4f64;
  }
  if (param_1[0x150] == '\x03') {
    pcVar6 = param_1 + 0xb4;
LAB_014c4f30:
    FUN_014c5278(pcVar6);
  }
  else if (param_1[0x150] == '\0') {
    pcVar6 = param_1 + 0x18;
    goto LAB_014c4f30;
  }
  piVar5 = *(int **)(param_1 + 0x14);
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar9 + -1;
  if (iVar9 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01561b24(*(undefined4 *)(param_1 + 0x14));
  }
LAB_014c4f64:
  if ((*param_1 != '\0') || (*(int *)(param_1 + 4) == -0x80000000 || *(int *)(param_1 + 4) == 0)) {
    return;
  }
  iVar9 = *(int *)(param_1 + 8);
  if (iVar9 == 0) {
    return;
  }
  iVar7 = FUN_016d3bc8();
  uVar17 = *(byte *)(iVar9 + -3) & 0x1f;
  if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar10 = uVar13 - 0x10, uVar13 == 0)) {
    iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar13 = (uint)(*(byte *)(iVar9 + -3) >> 5);
  iVar16 = *(int *)(iVar7 + 8) + 0x10;
  iVar14 = iVar10 * uVar17 + iVar10 + -4;
  iVar10 = iVar16 + iVar14;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar13 = *(uint *)(iVar10 + -4);
    if (uVar13 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar10 - iVar9) < uVar13) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar10 - uVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar16 + iVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar4 = *(byte *)(iVar7 + 0x14);
  uVar13 = 1 << uVar17;
  *(undefined1 *)(iVar9 + -3) = 0xff;
  *(undefined2 *)(iVar9 + -2) = 0;
  do {
    uVar15 = *(uint *)(iVar7 + 0x10);
    uVar11 = *(uint *)(iVar7 + 0xc) | uVar15;
    if ((uVar13 & uVar11) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar15 == 0) || (uVar11 + uVar13 == (2 << (bVar4 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar7,uVar17);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar12 = *puVar8;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar8 = uVar12;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar7 + 0x10) = uVar13 + uVar15;
      return;
    }
    puVar18 = (uint *)(iVar7 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar11 = *puVar18;
      if (uVar15 != uVar11) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar2);
    *puVar18 = uVar13 + uVar15;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar15 == uVar11) {
      return;
    }
  } while( true );
}

