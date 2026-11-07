// FUN_014eb970 @ 014eb970 size=500 calls_out=8 calls_in=1
// strings: thread not dropped yet | threads should not terminate unexpectedly

void FUN_014eb970(undefined4 *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  uint *puVar18;
  uint local_28;
  int local_24;
  undefined1 *local_20;
  code *local_1c;
  
  if (param_1[1] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("thread not dropped yet",0x16,&DAT_018a6b0c);
  }
  piVar10 = (int *)*param_1;
  *param_1 = 0;
  if (piVar10 != (int *)0x0) {
    FUN_0148f928(piVar10);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar10;
      bVar1 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar1);
    *piVar10 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014a44c0(piVar10);
    }
  }
  piVar12 = (int *)param_1[1];
  piVar10 = (int *)param_1[2];
  param_1[1] = 0;
  if (piVar12 != (int *)0x0) {
    iVar3 = FUN_016debbe(param_1[3],0);
    if (iVar3 != 0) {
      local_28 = local_28 & 0xffffff00;
      local_1c = FUN_015ef5b4;
      local_24 = iVar3;
      local_20 = (undefined1 *)&local_28;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0057902e,&local_20,&DAT_018aae1c);
    }
    piVar4 = piVar10 + 1;
    do {
      if (*piVar4 != 1) {
        ClearExclusiveLocal();
        goto LAB_014ebb54;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = -1;
    DataMemoryBarrier(0xb);
    DataMemoryBarrier(0xb);
    piVar10[1] = 1;
    if (*piVar10 != 1) {
LAB_014ebb54:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("threads should not terminate unexpectedly",0x29,&DAT_018acab0);
    }
    iVar3 = piVar10[4];
    puVar16 = (undefined4 *)piVar10[5];
    uVar5 = piVar10[3];
    piVar10[3] = 0;
    if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018acac0);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar12;
      bVar1 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar1);
    *piVar12 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015e92c0(piVar12);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar10;
      bVar1 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar1);
    *piVar10 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659070(piVar10);
    }
    if (iVar3 != 0) {
      pcVar7 = (code *)*puVar16;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(iVar3);
      }
      if (puVar16[1] != 0) {
        if (iVar3 == 0) {
          return;
        }
        iVar6 = FUN_016d3bc8();
        uVar5 = *(byte *)(iVar3 + -3) & 0x1f;
        if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
           (uVar13 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar13 - 0x10, uVar13 == 0)) {
          iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar13 = (uint)(*(byte *)(iVar3 + -3) >> 5);
        iVar17 = *(int *)(iVar6 + 8) + 0x10;
        iVar14 = iVar8 * uVar5 + iVar8 + -4;
        iVar8 = iVar17 + iVar14;
        if (4 < uVar13) {
          if (uVar13 != 5) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar7)();
          }
          uVar13 = *(uint *)(iVar8 + -4);
          if (uVar13 < 5) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar7)();
          }
          if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar7 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar7)();
          }
        }
        if ((uint)(iVar8 - iVar3) < uVar13) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar7)();
        }
        if (*(char *)(iVar8 - uVar13) != '\0') {
                    /* WARNING: Does not return */
          pcVar7 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar7)();
        }
        if (*(char *)(iVar17 + iVar14) != '\0') {
                    /* WARNING: Does not return */
          pcVar7 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar7)();
        }
        bVar2 = *(byte *)(iVar6 + 0x14);
        uVar13 = 1 << uVar5;
        *(undefined1 *)(iVar3 + -3) = 0xff;
        *(undefined2 *)(iVar3 + -2) = 0;
        do {
          uVar15 = *(uint *)(iVar6 + 0x10);
          uVar9 = *(uint *)(iVar6 + 0xc) | uVar15;
          if ((uVar13 & uVar9) != 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar7)();
          }
          if ((uVar15 == 0) || (uVar9 + uVar13 == (2 << (bVar2 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&local_28,iVar6,uVar5);
            FUN_016dddc0(&DAT_018ddd48);
            if (local_24 == 0) {
              return;
            }
            puVar16 = (undefined4 *)FUN_016d2bc8();
            uVar11 = *puVar16;
            FUN_016d6ac4(local_28,local_24);
            *puVar16 = uVar11;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar6 + 0x10) = uVar13 + uVar15;
            return;
          }
          puVar18 = (uint *)(iVar6 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar18);
            uVar9 = *puVar18;
            if (uVar15 != uVar9) goto LAB_016d409c;
            bVar1 = (bool)hasExclusiveAccess(puVar18);
          } while (!bVar1);
          *puVar18 = uVar13 + uVar15;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar15 == uVar9) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}

