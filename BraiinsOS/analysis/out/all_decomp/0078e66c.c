// FUN_0078e66c @ 0078e66c size=660 calls_out=7 calls_in=43
// strings: 

void FUN_0078e66c(int param_1)

{
  code *pcVar1;
  bool bVar2;
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
  int *piStack_54;
  undefined4 uStack_50;
  undefined4 uStack_28;
  int iStack_24;
  
  piStack_54 = *(int **)(param_1 + 0x10);
  do {
    iVar6 = *piStack_54;
    bVar2 = (bool)hasExclusiveAccess(piStack_54);
  } while (!bVar2);
  *piStack_54 = iVar6 + 1;
  if (iVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x78e8fc);
    (*pcVar1)();
  }
  uStack_50 = *(undefined4 *)(param_1 + 0x14);
  piVar4 = (int *)FUN_00767950(&piStack_54);
  if (*piVar4 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar4);
    if (bVar2) {
      *piVar4 = 0x84;
      goto LAB_0078e6e4;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(piVar4[2] + 0x10))();
LAB_0078e6e4:
  if (*(int *)(param_1 + 0x58) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
  }
  piVar4 = *(int **)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  }
  piVar4 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  }
  piVar4 = *(int **)(param_1 + 0x50);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x50));
  }
  FUN_00a0a4f0(param_1 + 0x20);
  piVar4 = *(int **)(param_1 + 0x54);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007843c4(*(undefined4 *)(param_1 + 0x54));
  }
  iVar6 = *(int *)(param_1 + 0x4c);
  if (iVar6 != 0) {
    piVar4 = (int *)(iVar6 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    DataMemoryBarrier(0xb);
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar6 + 0x10)) {
        puVar8 = (uint *)(iVar6 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(puVar8);
        } while (!bVar2);
        *puVar8 = *puVar8 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar8 = (uint *)(iVar6 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar9 = *puVar8;
        bVar2 = (bool)hasExclusiveAccess(puVar8);
      } while (!bVar2);
      *puVar8 = uVar9 | 2;
      DataMemoryBarrier(0xb);
      if (uVar9 == 0) {
        iVar7 = *(int *)(iVar6 + 0x18);
        *(undefined4 *)(iVar6 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(puVar8);
        } while (!bVar2);
        *puVar8 = *puVar8 & 0xfffffffd;
        if (iVar7 != 0) {
          (**(code **)(iVar7 + 4))(*(undefined4 *)(iVar6 + 0x1c));
        }
      }
    }
    piVar4 = *(int **)(param_1 + 0x4c);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078459c(*(undefined4 *)(param_1 + 0x4c));
    }
  }
  if (param_1 != -1) {
    piVar4 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
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
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar12 = *(uint *)(iVar7 + -4);
        if (uVar12 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar7 - param_1) < uVar12) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar7 - uVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
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
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
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
          bVar2 = (bool)hasExclusiveAccess(puVar8);
        } while (!bVar2);
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

