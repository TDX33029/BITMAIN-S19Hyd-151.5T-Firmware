// FUN_00a69220 @ 00a69220 size=400 calls_out=5 calls_in=0
// strings: 

void FUN_00a69220(undefined4 *param_1)

{
  uint uVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 unaff_r4;
  undefined4 uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piVar6 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c0f04(*param_1);
  }
  piVar6 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar8 + -1;
  if (iVar8 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar8 = param_1[1];
  iVar17 = *(int *)(iVar8 + 0x14);
  uStack_20 = unaff_r4;
  if (iVar17 != 0) {
    iVar18 = *(int *)(iVar8 + 0x1c);
    if (iVar18 != 0) {
      puVar16 = *(uint **)(iVar8 + 0x10);
      puVar19 = puVar16 + 1;
      uVar14 = ~*puVar16 & 0x80808080;
      do {
        puVar12 = puVar19;
        if (uVar14 == 0) {
          do {
            puVar19 = puVar12 + 1;
            uVar14 = *puVar12;
            puVar16 = puVar16 + -0x10;
            puVar12 = puVar19;
          } while ((uVar14 & 0x80808080) == 0x80808080);
          uVar14 = uVar14 & 0x80808080 ^ 0x80808080;
        }
        uVar5 = uVar14 >> 8;
        uVar10 = uVar14 >> 0x10;
        uVar13 = uVar14 >> 0x18;
        uVar1 = uVar14 << 0x18;
        uVar14 = uVar14 - 1 & uVar14;
        uVar5 = LZCOUNT(uVar1 | (uVar5 & 0xff) << 0x10 | (uVar10 & 0xff) << 8 | uVar13) & 0x38;
        iVar18 = iVar18 + -1;
        piVar6 = *(int **)((int)puVar16 + uVar5 * -2 + -8);
        DataMemoryBarrier(0xb);
        do {
          iVar9 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar9 + -1;
        if (iVar9 == 1) {
          DataMemoryBarrier(0xb);
          FUN_012c0df4(*(undefined4 *)((int)puVar16 + uVar5 * -2 + -8));
        }
      } while (iVar18 != 0);
    }
    if (iVar17 * 0x11 != -0x15) {
      thunk_FUN_016d3fb4(*(int *)(iVar8 + 0x10) + iVar17 * -0x10 + -0x10);
    }
  }
  FUN_00782a5c(iVar8 + 0x90);
  FUN_0078297c(iVar8 + 0x30);
  if (iVar8 != -1) {
    piVar6 = (int *)(iVar8 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar17 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar17 + -1;
    if (iVar17 == 1) {
      DataMemoryBarrier(0xb);
      if (iVar8 == 0) {
        return;
      }
      uStack_1c = uStack_20;
      iVar17 = FUN_016d3bc8();
      uVar14 = *(byte *)(iVar8 + -3) & 0x1f;
      if (((*(byte *)(iVar17 + 0x14) & 0x1f) != 0) ||
         (uVar5 = *(uint *)(iVar17 + 0x14) & 0xfffff000, iVar18 = uVar5 - 0x10, uVar5 == 0)) {
        iVar18 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar17 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar5 = (uint)(*(byte *)(iVar8 + -3) >> 5);
      iVar15 = *(int *)(iVar17 + 8) + 0x10;
      iVar9 = iVar18 * uVar14 + iVar18 + -4;
      iVar18 = iVar15 + iVar9;
      if (4 < uVar5) {
        if (uVar5 != 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar3)();
        }
        uVar5 = *(uint *)(iVar18 + -4);
        if (uVar5 < 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar3)();
        }
        if (*(char *)(iVar18 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar3)();
        }
      }
      if ((uint)(iVar18 - iVar8) < uVar5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar3)();
      }
      if (*(char *)(iVar18 - uVar5) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar3)();
      }
      if (*(char *)(iVar15 + iVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar3)();
      }
      bVar4 = *(byte *)(iVar17 + 0x14);
      uVar5 = 1 << uVar14;
      *(undefined1 *)(iVar8 + -3) = 0xff;
      *(undefined2 *)(iVar8 + -2) = 0;
      do {
        uVar13 = *(uint *)(iVar17 + 0x10);
        uVar10 = *(uint *)(iVar17 + 0xc) | uVar13;
        if ((uVar5 & uVar10) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar3)();
        }
        if ((uVar13 == 0) || (uVar10 + uVar5 == (2 << (bVar4 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar17,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar7 = (undefined4 *)FUN_016d2bc8();
          uVar11 = *puVar7;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar7 = uVar11;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar17 + 0x10) = uVar5 + uVar13;
          return;
        }
        puVar19 = (uint *)(iVar17 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar19);
          uVar10 = *puVar19;
          if (uVar13 != uVar10) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar19);
        } while (!bVar2);
        *puVar19 = uVar5 + uVar13;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar13 == uVar10) {
          return;
        }
      } while( true );
    }
  }
  return;
}

