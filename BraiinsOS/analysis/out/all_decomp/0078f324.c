// FUN_0078f324 @ 0078f324 size=600 calls_out=9 calls_in=25
// strings: 

void FUN_0078f324(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  FUN_0076ee14(param_1 + 8);
  piVar4 = *(int **)(param_1 + 0x50);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078d010(*(undefined4 *)(param_1 + 0x50));
  }
  piVar4 = *(int **)(param_1 + 0x54);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078e200(*(undefined4 *)(param_1 + 0x54));
  }
  piVar4 = *(int **)(param_1 + 0x58);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078dfac(*(undefined4 *)(param_1 + 0x58));
  }
  FUN_008e1498(param_1 + 0x5c);
  iVar6 = *(int *)(param_1 + 0x78);
  if (iVar6 != 0) {
    piVar4 = (int *)(iVar6 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar7 + -1;
    DataMemoryBarrier(0xb);
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar6 + 0x10)) {
        puVar8 = (uint *)(iVar6 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar8);
        } while (!bVar1);
        *puVar8 = *puVar8 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar8 = (uint *)(iVar6 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar9 = *puVar8;
        bVar1 = (bool)hasExclusiveAccess(puVar8);
      } while (!bVar1);
      *puVar8 = uVar9 | 2;
      DataMemoryBarrier(0xb);
      if (uVar9 == 0) {
        iVar7 = *(int *)(iVar6 + 0x18);
        *(undefined4 *)(iVar6 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar8);
        } while (!bVar1);
        *puVar8 = *puVar8 & 0xfffffffd;
        if (iVar7 != 0) {
          (**(code **)(iVar7 + 4))(*(undefined4 *)(iVar6 + 0x1c));
        }
      }
    }
    piVar4 = *(int **)(param_1 + 0x78);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078459c(*(undefined4 *)(param_1 + 0x78));
    }
  }
  iVar6 = *(int *)(param_1 + 0x90);
  if (iVar6 != 0) {
    piVar4 = *(int **)(param_1 + 0x8c);
    do {
      iVar6 = iVar6 + -1;
      iVar7 = 0;
      if (*piVar4 != 0) {
        iVar7 = piVar4[1];
      }
      if (*piVar4 != 0 && iVar7 != 0) {
        (**(code **)(iVar7 + 0xc))(piVar4[2]);
      }
      piVar4 = piVar4 + 3;
    } while (iVar6 != 0);
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8c));
  }
  FUN_0078f810(param_1 + 0x9c);
  FUN_00b40204(param_1 + 0x6c);
  if (param_1 != -1) {
    piVar4 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar6 = FUN_016d3bc8();
      uVar9 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
         (uVar12 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar7 = uVar12 - 0x10, uVar12 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar12 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar15 = *(int *)(iVar6 + 8) + 0x10;
      iVar13 = iVar7 * uVar9 + iVar7 + -4;
      iVar7 = iVar15 + iVar13;
      if (4 < uVar12) {
        if (uVar12 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar12 = *(uint *)(iVar7 + -4);
        if (uVar12 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar7 - param_1) < uVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar7 - uVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar6 + 0x14);
      uVar12 = 1 << uVar9;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar14 = *(uint *)(iVar6 + 0x10);
        uVar10 = *(uint *)(iVar6 + 0xc) | uVar14;
        if ((uVar12 & uVar10) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar14 == 0) || (uVar10 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar6,uVar9);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar11 = *puVar5;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar5 = uVar11;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar6 + 0x10) = uVar12 + uVar14;
          return;
        }
        puVar8 = (uint *)(iVar6 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar8);
          uVar10 = *puVar8;
          if (uVar14 != uVar10) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar8);
        } while (!bVar1);
        *puVar8 = uVar12 + uVar14;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar14 == uVar10) {
          return;
        }
      } while( true );
    }
  }
  return;
}

