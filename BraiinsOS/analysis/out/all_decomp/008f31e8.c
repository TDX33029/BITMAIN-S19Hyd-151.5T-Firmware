// FUN_008f31e8 @ 008f31e8 size=1176 calls_out=10 calls_in=91
// strings: 

void FUN_008f31e8(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  code *pcVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar13 = *(int *)(param_1 + 0x1c4);
  if (iVar13 != 0) {
    piVar6 = *(int **)(param_1 + 0x1c0);
    do {
      iVar13 = iVar13 + -1;
      iVar3 = 0;
      if (*piVar6 != 0) {
        iVar3 = piVar6[1];
      }
      if (*piVar6 != 0 && iVar3 != 0) {
        (**(code **)(iVar3 + 0xc))(piVar6[2]);
      }
      piVar6 = piVar6 + 3;
    } while (iVar13 != 0);
  }
  if (*(int *)(param_1 + 0x1bc) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1c0));
  }
  iVar13 = *(int *)(param_1 + 0x184);
  if (iVar13 != 0) {
    piVar6 = *(int **)(param_1 + 0x180);
    do {
      iVar13 = iVar13 + -1;
      iVar3 = 0;
      if (*piVar6 != 0) {
        iVar3 = piVar6[1];
      }
      if (*piVar6 != 0 && iVar3 != 0) {
        (**(code **)(iVar3 + 0xc))(piVar6[2]);
      }
      piVar6 = piVar6 + 3;
    } while (iVar13 != 0);
  }
  if (*(int *)(param_1 + 0x17c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x180));
  }
  FUN_009829c4(param_1 + 0x200);
  FUN_009829c4(param_1 + 0x248);
  FUN_009829c4(param_1 + 0x290);
  FUN_009829c4(param_1 + 0x2d8);
  FUN_007c50c4(param_1 + 0x330);
  iVar13 = *(int *)(param_1 + 0x390);
  if (iVar13 != 0) {
    piVar6 = (int *)(iVar13 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar3 + -1;
    DataMemoryBarrier(0xb);
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar13 + 0x10)) {
        puVar4 = (uint *)(iVar13 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar1);
        *puVar4 = *puVar4 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar4 = (uint *)(iVar13 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar7 = *puVar4;
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = uVar7 | 2;
      DataMemoryBarrier(0xb);
      if (uVar7 == 0) {
        iVar3 = *(int *)(iVar13 + 0x18);
        *(undefined4 *)(iVar13 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar1);
        *puVar4 = *puVar4 & 0xfffffffd;
        if (iVar3 != 0) {
          (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar13 + 0x1c));
        }
      }
    }
    piVar6 = *(int **)(param_1 + 0x390);
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078459c(*(undefined4 *)(param_1 + 0x390));
    }
  }
  iVar13 = *(int *)(param_1 + 0x37c);
  if (iVar13 != 0) {
    piVar6 = (int *)(iVar13 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar3 + -1;
    DataMemoryBarrier(0xb);
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar13 + 0x10)) {
        puVar4 = (uint *)(iVar13 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar1);
        *puVar4 = *puVar4 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar4 = (uint *)(iVar13 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar7 = *puVar4;
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = uVar7 | 2;
      DataMemoryBarrier(0xb);
      if (uVar7 == 0) {
        iVar3 = *(int *)(iVar13 + 0x18);
        *(undefined4 *)(iVar13 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar1);
        *puVar4 = *puVar4 & 0xfffffffd;
        if (iVar3 != 0) {
          (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar13 + 0x1c));
        }
      }
    }
    piVar6 = *(int **)(param_1 + 0x37c);
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f23b4(*(undefined4 *)(param_1 + 0x37c));
    }
  }
  piVar6 = *(int **)(param_1 + 0x380);
  DataMemoryBarrier(0xb);
  do {
    iVar13 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar13 + -1;
  if (iVar13 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1a50(*(undefined4 *)(param_1 + 0x380));
  }
  FUN_008e1028(param_1 + 0x394);
  if (*(int *)(param_1 + 0xb0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xb4));
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4c));
  }
  if ((*(uint *)(param_1 + 0x30) & 0x7fffffff) == 0) {
    iVar13 = *(int *)(param_1 + 0x130);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x34));
    iVar13 = *(int *)(param_1 + 0x130);
  }
  if (iVar13 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x134));
  }
  piVar6 = *(int **)(param_1 + 900);
  DataMemoryBarrier(0xb);
  do {
    iVar13 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar13 + -1;
  if (iVar13 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 900));
  }
  piVar6 = *(int **)(param_1 + 0x388);
  DataMemoryBarrier(0xb);
  do {
    iVar13 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar13 + -1;
  if (iVar13 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f2e10(*(undefined4 *)(param_1 + 0x388));
  }
  puVar9 = *(undefined4 **)(param_1 + 0x374);
  uVar14 = *(undefined4 *)(param_1 + 0x370);
  pcVar5 = (code *)*puVar9;
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(uVar14);
  }
  if (puVar9[1] != 0) {
    thunk_FUN_016d3fb4(uVar14);
  }
  piVar6 = *(int **)(param_1 + 0x3c8);
  if (piVar6 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0x3c8));
    }
  }
  if (param_1 != -1) {
    piVar6 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar13 = FUN_016d3bc8();
      uVar7 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar3 = uVar10 - 0x10, uVar10 == 0)) {
        iVar3 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar10 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar15 = *(int *)(iVar13 + 8) + 0x10;
      iVar11 = iVar3 * uVar7 + iVar3 + -4;
      iVar3 = iVar15 + iVar11;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar5)();
        }
        uVar10 = *(uint *)(iVar3 + -4);
        if (uVar10 < 5) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar5)();
        }
        if (*(char *)(iVar3 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar5)();
        }
      }
      if ((uint)(iVar3 - param_1) < uVar10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar5)();
      }
      if (*(char *)(iVar3 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar5)();
      }
      if (*(char *)(iVar15 + iVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar5)();
      }
      bVar2 = *(byte *)(iVar13 + 0x14);
      uVar10 = 1 << uVar7;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar12 = *(uint *)(iVar13 + 0x10);
        uVar8 = *(uint *)(iVar13 + 0xc) | uVar12;
        if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar5)();
        }
        if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar13,uVar7);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar9 = (undefined4 *)FUN_016d2bc8();
          uVar14 = *puVar9;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar9 = uVar14;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar13 + 0x10) = uVar10 + uVar12;
          return;
        }
        puVar4 = (uint *)(iVar13 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar4);
          uVar8 = *puVar4;
          if (uVar12 != uVar8) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar1);
        *puVar4 = uVar10 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar8) {
          return;
        }
      } while( true );
    }
  }
  return;
}

