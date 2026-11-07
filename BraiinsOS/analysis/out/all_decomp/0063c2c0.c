// FUN_0063c2c0 @ 0063c2c0 size=632 calls_out=2 calls_in=1
// strings: 

void FUN_0063c2c0(int *param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  int unaff_r4;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint *puVar18;
  bool bVar19;
  int *local_28;
  int local_24;
  
  if (*param_1 == 0) {
    if ((char)param_1[1] != '\x03') {
      return;
    }
    puVar5 = (undefined4 *)param_1[2];
    uVar13 = *puVar5;
    puVar16 = (undefined4 *)puVar5[1];
    pcVar8 = (code *)*puVar16;
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(uVar13);
    }
    if (puVar16[1] != 0) {
      thunk_FUN_016d3fb4(uVar13);
    }
LAB_014b47f4:
    if (puVar5 == (undefined4 *)0x0) {
      return;
    }
    iVar6 = FUN_016d3bc8();
    uVar17 = *(byte *)((int)puVar5 + -3) & 0x1f;
    if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
       (uVar3 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar12 = uVar3 - 0x10, uVar3 == 0)) {
      iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) <<
               4;
    }
    uVar3 = (uint)(*(byte *)((int)puVar5 + -3) >> 5);
    iVar14 = *(int *)(iVar6 + 8) + 0x10;
    iVar7 = iVar12 * uVar17 + iVar12 + -4;
    iVar12 = iVar14 + iVar7;
    if (4 < uVar3) {
      if (uVar3 != 5) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar8)();
      }
      uVar3 = *(uint *)(iVar12 + -4);
      if (uVar3 < 5) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar8)();
      }
      if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar8 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar8)();
      }
    }
    if ((uint)(iVar12 - (int)puVar5) < uVar3) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar8)();
    }
    if (*(char *)(iVar12 - uVar3) != '\0') {
                    /* WARNING: Does not return */
      pcVar8 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar8)();
    }
    if (*(char *)(iVar14 + iVar7) != '\0') {
                    /* WARNING: Does not return */
      pcVar8 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar8)();
    }
    bVar1 = *(byte *)(iVar6 + 0x14);
    uVar3 = 1 << uVar17;
    *(undefined1 *)((int)puVar5 + -3) = 0xff;
    *(undefined2 *)((int)puVar5 + -2) = 0;
    do {
      uVar11 = *(uint *)(iVar6 + 0x10);
      uVar9 = *(uint *)(iVar6 + 0xc) | uVar11;
      if ((uVar3 & uVar9) != 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar8)();
      }
      if ((uVar11 == 0) || (uVar9 + uVar3 == (2 << (bVar1 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&local_28,iVar6,uVar17);
        FUN_016dddc0(&DAT_018ddd48);
        if (local_24 == 0) {
          return;
        }
        puVar5 = (undefined4 *)FUN_016d2bc8();
        uVar13 = *puVar5;
        FUN_016d6ac4(local_28,local_24);
        *puVar5 = uVar13;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar6 + 0x10) = uVar3 + uVar11;
        return;
      }
      puVar18 = (uint *)(iVar6 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar18);
        uVar9 = *puVar18;
        if (uVar11 != uVar9) goto LAB_016d409c;
        bVar19 = (bool)hasExclusiveAccess(puVar18);
      } while (!bVar19);
      *puVar18 = uVar3 + uVar11;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar11 == uVar9) {
        return;
      }
    } while( true );
  }
  iVar6 = param_1[1];
  if (iVar6 != 0) {
    iVar12 = param_1[3];
    local_28 = param_1;
    local_24 = unaff_r4;
    if (iVar12 != 0) {
      puVar15 = (uint *)*param_1;
      puVar18 = puVar15 + 1;
      uVar17 = ~*puVar15 & 0x80808080;
      do {
        puVar10 = puVar18;
        if (uVar17 == 0) {
          do {
            puVar18 = puVar10 + 1;
            uVar17 = *puVar10;
            puVar15 = puVar15 + -0x118;
            puVar10 = puVar18;
          } while ((uVar17 & 0x80808080) == 0x80808080);
          uVar17 = uVar17 & 0x80808080 ^ 0x80808080;
        }
        sVar2 = (short)((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                      (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3);
        bVar19 = (short)puVar15[-sVar2 * 0x46 + -0x46] != 0;
        uVar3 = 0;
        if (bVar19) {
          uVar3 = puVar15[-sVar2 * 0x46 + -0x45];
        }
        if (bVar19 && uVar3 != 0) {
          thunk_FUN_016d3fb4(puVar15[-sVar2 * 0x46 + -0x44]);
        }
        bVar19 = (short)puVar15[-sVar2 * 0x46 + -0x3d] != 0;
        uVar3 = 0;
        if (bVar19) {
          uVar3 = puVar15[-sVar2 * 0x46 + -0x3c];
        }
        if (bVar19 && uVar3 != 0) {
          thunk_FUN_016d3fb4(puVar15[-sVar2 * 0x46 + -0x3b]);
          if ((undefined1 *)puVar15[-sVar2 * 0x46 + -0x32] != &DAT_3b9aca00) goto LAB_006399d8;
        }
        else if ((undefined1 *)puVar15[-sVar2 * 0x46 + -0x32] != &DAT_3b9aca00) {
LAB_006399d8:
          bVar19 = (short)puVar15[-sVar2 * 0x46 + -0x2e] != 0;
          uVar3 = 0;
          if (bVar19) {
            uVar3 = puVar15[-sVar2 * 0x46 + -0x2d];
          }
          if (bVar19 && uVar3 != 0) {
            thunk_FUN_016d3fb4(puVar15[-sVar2 * 0x46 + -0x2c]);
          }
          bVar19 = (short)puVar15[-sVar2 * 0x46 + -0x25] != 0;
          uVar3 = 0;
          if (bVar19) {
            uVar3 = puVar15[-sVar2 * 0x46 + -0x24];
          }
          if (bVar19 && uVar3 != 0) {
            thunk_FUN_016d3fb4(puVar15[-sVar2 * 0x46 + -0x23]);
          }
          piVar4 = (int *)puVar15[-sVar2 * 0x46 + -0x30];
          DataMemoryBarrier(0xb);
          do {
            iVar7 = *piVar4;
            bVar19 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar19);
          *piVar4 = iVar7 + -1;
          if (iVar7 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01059b88(puVar15[-sVar2 * 0x46 + -0x30],puVar15[-sVar2 * 0x46 + -0x2f]);
          }
        }
        if ((undefined1 *)puVar15[-sVar2 * 0x46 + -0x18] != &DAT_3b9aca00) {
          bVar19 = (short)puVar15[-sVar2 * 0x46 + -0x14] != 0;
          uVar3 = 0;
          if (bVar19) {
            uVar3 = puVar15[-sVar2 * 0x46 + -0x13];
          }
          if (bVar19 && uVar3 != 0) {
            thunk_FUN_016d3fb4(puVar15[-sVar2 * 0x46 + -0x12]);
          }
          bVar19 = (short)puVar15[-sVar2 * 0x46 + -0xb] != 0;
          uVar3 = 0;
          if (bVar19) {
            uVar3 = puVar15[-sVar2 * 0x46 + -10];
          }
          if (bVar19 && uVar3 != 0) {
            thunk_FUN_016d3fb4(puVar15[-sVar2 * 0x46 + -9]);
          }
          piVar4 = (int *)puVar15[-sVar2 * 0x46 + -0x16];
          DataMemoryBarrier(0xb);
          do {
            iVar7 = *piVar4;
            bVar19 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar19);
          *piVar4 = iVar7 + -1;
          if (iVar7 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01059b88(puVar15[-sVar2 * 0x46 + -0x16],puVar15[-sVar2 * 0x46 + -0x15]);
          }
        }
        iVar12 = iVar12 + -1;
        uVar17 = uVar17 - 1 & uVar17;
      } while (iVar12 != 0);
    }
    if (iVar6 * 0x119 != -0x11d) {
      puVar5 = (undefined4 *)(*local_28 + iVar6 * -0x118 + -0x118);
      goto LAB_014b47f4;
    }
  }
  return;
}

