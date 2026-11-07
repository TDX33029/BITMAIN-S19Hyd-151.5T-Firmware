// FUN_007c044c @ 007c044c size=1308 calls_out=13 calls_in=2
// strings: 

void FUN_007c044c(int *param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return;
    }
    puVar16 = (undefined4 *)param_1[4];
    if (param_1[2] == 0 && param_1[3] == 0) {
      if (puVar16 == (undefined4 *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x007c0574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar16)(puVar16);
      return;
    }
    if (puVar16 == (undefined4 *)0x0) {
      return;
    }
    puVar11 = (undefined4 *)param_1[5];
    pcVar5 = (code *)*puVar11;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(puVar16);
    }
    if (puVar11[1] == 0) {
      return;
    }
    if (puVar16 == (undefined4 *)0x0) {
      return;
    }
    iVar4 = FUN_016d3bc8();
    uVar9 = *(byte *)((int)puVar16 + -3) & 0x1f;
    if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
       (uVar13 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar13 - 0x10, uVar13 == 0)) {
      iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar13 = (uint)(*(byte *)((int)puVar16 + -3) >> 5);
    iVar17 = *(int *)(iVar4 + 8) + 0x10;
    iVar14 = iVar6 * uVar9 + iVar6 + -4;
    iVar6 = iVar17 + iVar14;
    if (4 < uVar13) {
      if (uVar13 != 5) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar5)();
      }
      uVar13 = *(uint *)(iVar6 + -4);
      if (uVar13 < 5) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar5)();
      }
      if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar5)();
      }
    }
    if ((uint)(iVar6 - (int)puVar16) < uVar13) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar5)();
    }
    if (*(char *)(iVar6 - uVar13) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar5)();
    }
    if (*(char *)(iVar17 + iVar14) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar5)();
    }
    bVar2 = *(byte *)(iVar4 + 0x14);
    uVar13 = 1 << uVar9;
    *(undefined1 *)((int)puVar16 + -3) = 0xff;
    *(undefined2 *)((int)puVar16 + -2) = 0;
    do {
      uVar15 = *(uint *)(iVar4 + 0x10);
      uVar10 = *(uint *)(iVar4 + 0xc) | uVar15;
      if ((uVar13 & uVar10) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar5)();
      }
      if ((uVar15 == 0) || (uVar10 + uVar13 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar4,uVar9);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar16 = (undefined4 *)FUN_016d2bc8();
        uVar12 = *puVar16;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar16 = uVar12;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar4 + 0x10) = uVar13 + uVar15;
        return;
      }
      puVar7 = (uint *)(iVar4 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar7);
        uVar10 = *puVar7;
        if (uVar15 != uVar10) goto LAB_016d409c;
        bVar1 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar1);
      *puVar7 = uVar13 + uVar15;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar15 == uVar10) {
        return;
      }
    } while( true );
  }
  if ((char)param_1[0x34] == '\0') {
    piVar8 = (int *)param_1[0x32];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(param_1[0x32]);
    }
    piVar8 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(param_1[2]);
    }
    iVar4 = param_1[0x33];
    if (iVar4 == 0) {
      return;
    }
    piVar8 = (int *)(iVar4 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar6 + -1;
    DataMemoryBarrier(0xb);
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar4 + 0x10)) {
        puVar7 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar1);
        *puVar7 = *puVar7 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar7 = (uint *)(iVar4 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar9 = *puVar7;
        bVar1 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar1);
      *puVar7 = uVar9 | 2;
      DataMemoryBarrier(0xb);
      if (uVar9 == 0) {
        iVar6 = *(int *)(iVar4 + 0x18);
        *(undefined4 *)(iVar4 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar1);
        *puVar7 = *puVar7 & 0xfffffffd;
        if (iVar6 != 0) {
          (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar4 + 0x1c));
        }
      }
    }
    piVar8 = (int *)param_1[0x33];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar4 + -1;
    goto LAB_007c095c;
  }
  if ((char)param_1[0x34] != '\x03') {
    return;
  }
  switch((char)param_1[0xc]) {
  case '\0':
    piVar8 = (int *)param_1[6];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(param_1[6]);
    }
    piVar8 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(param_1[4]);
    }
  default:
    goto switchD_007c04d8_caseD_1;
  case '\x03':
    if (param_1[0xd] != 0) {
      FUN_008b4d34(param_1[0xd],param_1[0xe],1);
    }
    goto LAB_007c081c;
  case '\x04':
    FUN_00a07b4c(param_1 + 0x14);
    piVar8 = param_1 + 0x12;
    iVar4 = *piVar8;
    if (iVar4 != 0) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar4 + 0x10)) {
        puVar7 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar1);
        *puVar7 = *puVar7 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      if (*piVar8 != 0) {
        do {
          while (bVar2 = FUN_00cefe20(piVar8), bVar2 == 2) {
            if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_0187bde8);
            }
            DataMemoryBarrier(0xb);
            if (*(int *)(*piVar8 + 0x10) == 0) goto LAB_007c07cc;
            FUN_016da3a8();
          }
        } while ((bVar2 & 1) != 0);
LAB_007c07cc:
        piVar3 = (int *)*piVar8;
        if (piVar3 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar3;
            bVar1 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar1);
          *piVar3 = iVar4 + -1;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0078cf4c(*piVar8);
          }
        }
      }
    }
    FUN_007bf390(param_1 + 0x2e);
    FUN_007f6344(param_1 + 0xd);
    break;
  case '\x05':
    if (param_1[0xd] != 0) {
      FUN_008b4d34(param_1[0xd],param_1[0xe],1);
    }
    break;
  case '\x06':
    iVar4 = param_1[0x14];
    puVar16 = (undefined4 *)param_1[0x15];
    pcVar5 = (code *)*puVar16;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(iVar4);
    }
    if (puVar16[1] != 0) {
      thunk_FUN_016d3fb4(iVar4);
    }
    FUN_00badb28(param_1 + 0xd);
    FUN_008b4548(param_1[0xb]);
  }
  FUN_008b4548(param_1[10]);
LAB_007c081c:
  piVar8 = (int *)param_1[8];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar8;
    bVar1 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar1);
  *piVar8 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0155edc8(param_1[8]);
  }
  piVar8 = (int *)param_1[7];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar8;
    bVar1 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar1);
  *piVar8 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(param_1[7]);
  }
switchD_007c04d8_caseD_1:
  iVar4 = param_1[0x33];
  if (iVar4 != 0) {
    piVar8 = (int *)(iVar4 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar6 + -1;
    DataMemoryBarrier(0xb);
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar4 + 0x10)) {
        puVar7 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar1);
        *puVar7 = *puVar7 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar7 = (uint *)(iVar4 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar9 = *puVar7;
        bVar1 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar1);
      *puVar7 = uVar9 | 2;
      DataMemoryBarrier(0xb);
      if (uVar9 == 0) {
        iVar6 = *(int *)(iVar4 + 0x18);
        *(undefined4 *)(iVar4 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar1);
        *puVar7 = *puVar7 & 0xfffffffd;
        if (iVar6 != 0) {
          (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar4 + 0x1c));
        }
      }
    }
    piVar8 = (int *)param_1[0x33];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar4 + -1;
LAB_007c095c:
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078cf4c(param_1[0x33]);
      return;
    }
  }
  return;
}

