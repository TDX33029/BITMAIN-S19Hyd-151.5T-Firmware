// FUN_00781b88 @ 00781b88 size=364 calls_out=5 calls_in=6
// strings: 

void FUN_00781b88(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar9 = *(int *)(param_1 + 0x1c);
  if (iVar9 != 0) {
    piVar6 = *(int **)(param_1 + 0x18);
    do {
      iVar9 = iVar9 + -1;
      iVar4 = 0;
      if (*piVar6 != 0) {
        iVar4 = piVar6[1];
      }
      if (*piVar6 != 0 && iVar4 != 0) {
        (**(code **)(iVar4 + 0xc))(piVar6[2]);
      }
      piVar6 = piVar6 + 3;
    } while (iVar9 != 0);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x18));
  }
  iVar9 = *(int *)(param_1 + 0x28);
  if (iVar9 == 0) goto LAB_00781cac;
  piVar6 = (int *)(iVar9 + 0x44);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar4 + -1;
  DataMemoryBarrier(0xb);
  if (iVar4 == 1) {
    pcVar10 = (char *)(iVar9 + 0x10);
    if (*pcVar10 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar10);
      if (!bVar1) goto LAB_00781c58;
      *pcVar10 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_00781c58:
      FUN_01280da8(pcVar10);
    }
    FUN_0128236c(pcVar10);
    *(undefined1 *)(iVar9 + 0x2c) = 1;
    FUN_0072a978(iVar9 + 8,pcVar10);
  }
  piVar6 = *(int **)(param_1 + 0x28);
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar9 + -1;
  if (iVar9 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(*(undefined4 *)(param_1 + 0x28));
  }
LAB_00781cac:
  if (param_1 != -1) {
    piVar6 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar9 + -1;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar9 = FUN_016d3bc8();
      uVar15 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar4 = uVar11 - 0x10, uVar11 == 0)) {
        iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar11 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar14 = *(int *)(iVar9 + 8) + 0x10;
      iVar12 = iVar4 * uVar15 + iVar4 + -4;
      iVar4 = iVar14 + iVar12;
      if (4 < uVar11) {
        if (uVar11 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar11 = *(uint *)(iVar4 + -4);
        if (uVar11 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar4 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar4 - param_1) < uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar4 - uVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar9 + 0x14);
      uVar11 = 1 << uVar15;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar13 = *(uint *)(iVar9 + 0x10);
        uVar7 = *(uint *)(iVar9 + 0xc) | uVar13;
        if ((uVar11 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar13 == 0) || (uVar7 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar9,uVar15);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar5;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar5 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar9 + 0x10) = uVar11 + uVar13;
          return;
        }
        puVar16 = (uint *)(iVar9 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar7 = *puVar16;
          if (uVar13 != uVar7) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar1);
        *puVar16 = uVar11 + uVar13;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar13 == uVar7) {
          return;
        }
      } while( true );
    }
  }
  return;
}

