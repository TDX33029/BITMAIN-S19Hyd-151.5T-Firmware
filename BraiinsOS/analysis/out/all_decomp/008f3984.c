// FUN_008f3984 @ 008f3984 size=976 calls_out=11 calls_in=17
// strings: 

void FUN_008f3984(int param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar3 = *(int **)(param_1 + 0x180);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f305c(*(undefined4 *)(param_1 + 0x180));
  }
  iVar5 = *(int *)(param_1 + 0x16c);
  if (iVar5 != 0) {
    piVar3 = (int *)(iVar5 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar6 + -1;
    DataMemoryBarrier(0xb);
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar5 + 0x10)) {
        puVar7 = (uint *)(iVar5 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar1);
        *puVar7 = *puVar7 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar7 = (uint *)(iVar5 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar9 = *puVar7;
        bVar1 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar1);
      *puVar7 = uVar9 | 2;
      DataMemoryBarrier(0xb);
      if (uVar9 == 0) {
        iVar6 = *(int *)(iVar5 + 0x18);
        *(undefined4 *)(iVar5 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar1);
        *puVar7 = *puVar7 & 0xfffffffd;
        if (iVar6 != 0) {
          (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar5 + 0x1c));
        }
      }
    }
    piVar3 = *(int **)(param_1 + 0x16c);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f23b4(*(undefined4 *)(param_1 + 0x16c));
    }
  }
  piVar3 = *(int **)(param_1 + 0x184);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1a50(*(undefined4 *)(param_1 + 0x184));
  }
  piVar3 = *(int **)(param_1 + 0x188);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_009ba6ec(*(undefined4 *)(param_1 + 0x188));
  }
  piVar3 = *(int **)(param_1 + 0x18c);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x18c));
  }
  piVar3 = *(int **)(param_1 + 400);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 400));
  }
  FUN_008f400c(param_1 + 0x1a8);
  if (*(int *)(param_1 + 0xa8) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xac));
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x44));
  }
  if ((*(uint *)(param_1 + 0x28) & 0x7fffffff) == 0) {
    iVar5 = *(int *)(param_1 + 0x128);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2c));
    iVar5 = *(int *)(param_1 + 0x128);
  }
  if (iVar5 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 300));
  }
  piVar3 = *(int **)(param_1 + 0x194);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f2e10(*(undefined4 *)(param_1 + 0x194));
  }
  piVar3 = (int *)(param_1 + 0x178);
  if (*piVar3 != 0) {
    FUN_016af0b0(piVar3);
    piVar4 = (int *)*piVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*piVar3);
    }
  }
  puVar16 = *(undefined4 **)(param_1 + 0x15c);
  uVar14 = *(undefined4 *)(param_1 + 0x158);
  pcVar8 = (code *)*puVar16;
  if (pcVar8 != (code *)0x0) {
    (*pcVar8)(uVar14);
  }
  if (puVar16[1] != 0) {
    thunk_FUN_016d3fb4(uVar14);
  }
  puVar16 = *(undefined4 **)(param_1 + 0x164);
  uVar14 = *(undefined4 *)(param_1 + 0x160);
  pcVar8 = (code *)*puVar16;
  if (pcVar8 != (code *)0x0) {
    (*pcVar8)(uVar14);
  }
  if (puVar16[1] != 0) {
    thunk_FUN_016d3fb4(uVar14);
  }
  piVar3 = *(int **)(param_1 + 0x198);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x198));
  }
  piVar3 = *(int **)(param_1 + 0x19c);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x19c));
  }
  if (param_1 != -1) {
    piVar3 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar5 = FUN_016d3bc8();
      uVar9 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar11 - 0x10, uVar11 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar11 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar15 = *(int *)(iVar5 + 8) + 0x10;
      iVar12 = iVar6 * uVar9 + iVar6 + -4;
      iVar6 = iVar15 + iVar12;
      if (4 < uVar11) {
        if (uVar11 != 5) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar8)();
        }
        uVar11 = *(uint *)(iVar6 + -4);
        if (uVar11 < 5) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar8)();
        }
        if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar8 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar8)();
        }
      }
      if ((uint)(iVar6 - param_1) < uVar11) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar8)();
      }
      if (*(char *)(iVar6 - uVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar8 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar8)();
      }
      if (*(char *)(iVar15 + iVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar8 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar8)();
      }
      bVar2 = *(byte *)(iVar5 + 0x14);
      uVar11 = 1 << uVar9;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar13 = *(uint *)(iVar5 + 0x10);
        uVar10 = *(uint *)(iVar5 + 0xc) | uVar13;
        if ((uVar11 & uVar10) != 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar8)();
        }
        if ((uVar13 == 0) || (uVar10 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar5,uVar9);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar16 = (undefined4 *)FUN_016d2bc8();
          uVar14 = *puVar16;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar16 = uVar14;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar5 + 0x10) = uVar11 + uVar13;
          return;
        }
        puVar7 = (uint *)(iVar5 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar7);
          uVar10 = *puVar7;
          if (uVar13 != uVar10) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar1);
        *puVar7 = uVar11 + uVar13;
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

