// FUN_01036ca0 @ 01036ca0 size=416 calls_out=6 calls_in=20
// strings: 

void FUN_01036ca0(ushort *param_1)

{
  ushort uVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  undefined4 *puVar5;
  int *piVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  short *psVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar1 = *param_1;
  sVar7 = 7;
  if (1 < uVar1) {
    sVar7 = uVar1 - 2;
  }
  switch(sVar7) {
  case 7:
    iVar8 = 0;
    if (uVar1 != 0) {
      iVar8 = *(int *)(param_1 + 2);
    }
    if (uVar1 != 0 && iVar8 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 4));
    }
    iVar8 = 0;
    if (param_1[0x12] != 0) {
      iVar8 = *(int *)(param_1 + 0x14);
    }
    if (param_1[0x12] != 0 && iVar8 != 0) {
      puVar5 = *(undefined4 **)(param_1 + 0x16);
      goto LAB_014b47f4;
    }
    break;
  case 8:
    puVar5 = *(undefined4 **)(param_1 + 0xe);
    uVar15 = *puVar5;
    FUN_01036ca0(uVar15);
    thunk_FUN_016d3fb4(uVar15);
LAB_014b47f4:
    if (puVar5 == (undefined4 *)0x0) {
      return;
    }
    iVar8 = FUN_016d3bc8();
    uVar17 = *(byte *)((int)puVar5 + -3) & 0x1f;
    if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
       (uVar12 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar9 = uVar12 - 0x10, uVar12 == 0)) {
      iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar12 = (uint)(*(byte *)((int)puVar5 + -3) >> 5);
    iVar16 = *(int *)(iVar8 + 8) + 0x10;
    iVar13 = iVar9 * uVar17 + iVar9 + -4;
    iVar9 = iVar16 + iVar13;
    if (4 < uVar12) {
      if (uVar12 != 5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar3)();
      }
      uVar12 = *(uint *)(iVar9 + -4);
      if (uVar12 < 5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar3)();
      }
      if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar3)();
      }
    }
    if ((uint)(iVar9 - (int)puVar5) < uVar12) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar3)();
    }
    if (*(char *)(iVar9 - uVar12) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar3)();
    }
    if (*(char *)(iVar16 + iVar13) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar3)();
    }
    bVar4 = *(byte *)(iVar8 + 0x14);
    uVar12 = 1 << uVar17;
    *(undefined1 *)((int)puVar5 + -3) = 0xff;
    *(undefined2 *)((int)puVar5 + -2) = 0;
    do {
      uVar14 = *(uint *)(iVar8 + 0x10);
      uVar10 = *(uint *)(iVar8 + 0xc) | uVar14;
      if ((uVar12 & uVar10) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar3)();
      }
      if ((uVar14 == 0) || (uVar10 + uVar12 == (2 << (bVar4 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar8,uVar17);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar5 = (undefined4 *)FUN_016d2bc8();
        uVar15 = *puVar5;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar5 = uVar15;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar8 + 0x10) = uVar12 + uVar14;
        return;
      }
      puVar18 = (uint *)(iVar8 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar18);
        uVar10 = *puVar18;
        if (uVar14 != uVar10) goto LAB_016d409c;
        bVar2 = (bool)hasExclusiveAccess(puVar18);
      } while (!bVar2);
      *puVar18 = uVar12 + uVar14;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar14 == uVar10) {
        return;
      }
    } while( true );
  case 0xf:
  case 0x16:
  case 0x18:
  case 0x24:
    if (*(int *)(param_1 + 2) != 0) {
      puVar5 = *(undefined4 **)(param_1 + 4);
      goto LAB_014b47f4;
    }
    break;
  case 0x13:
    psVar11 = *(short **)(param_1 + 8);
    iVar8 = 0;
    if (*psVar11 != 0) {
      iVar8 = *(int *)(psVar11 + 2);
    }
    if (*psVar11 != 0 && iVar8 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(psVar11 + 4));
    }
    iVar8 = 0;
    if (psVar11[0x12] != 0) {
      iVar8 = *(int *)(psVar11 + 0x14);
    }
    if (psVar11[0x12] != 0 && iVar8 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(psVar11 + 0x16));
    }
    thunk_FUN_016d3fb4(psVar11);
    FUN_0064987c(*(undefined4 *)(param_1 + 10));
    piVar6 = *(int **)(param_1 + 0xc);
    if (piVar6 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01059abc(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0xe));
      }
    }
    piVar6 = *(int **)(param_1 + 0x10);
    if (piVar6 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01059b88(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x12));
        return;
      }
    }
    break;
  case 0x1d:
    piVar6 = *(int **)(param_1 + 2);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010599d0(*(undefined4 *)(param_1 + 2));
      return;
    }
    return;
  }
  return;
}

