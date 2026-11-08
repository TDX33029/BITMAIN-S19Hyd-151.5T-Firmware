// FUN_00d34304 @ 00d34304 size=956 calls_out=10 calls_in=2
// strings: 

void FUN_00d34304(int *param_1)

{
  byte bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int unaff_r6;
  int iVar14;
  bool bVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 1) {
    bVar15 = param_1[2] == 0 && param_1[3] == 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      unaff_r6 = param_1[4];
      bVar15 = unaff_r6 == 0;
    }
    if (!bVar15) {
      puVar9 = (undefined4 *)param_1[5];
      pcVar3 = (code *)*puVar9;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(unaff_r6);
      }
      if (puVar9[1] != 0) {
        if (unaff_r6 == 0) {
          return;
        }
        iVar4 = FUN_016d3bc8();
        uVar7 = *(byte *)(unaff_r6 + -3) & 0x1f;
        if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
           (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar5 = uVar11 - 0x10, uVar11 == 0)) {
          iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar11 = (uint)(*(byte *)(unaff_r6 + -3) >> 5);
        iVar14 = *(int *)(iVar4 + 8) + 0x10;
        iVar12 = iVar5 * uVar7 + iVar5 + -4;
        iVar5 = iVar14 + iVar12;
        if (4 < uVar11) {
          if (uVar11 != 5) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar3)();
          }
          uVar11 = *(uint *)(iVar5 + -4);
          if (uVar11 < 5) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar3)();
          }
          if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar3)();
          }
        }
        if ((uint)(iVar5 - unaff_r6) < uVar11) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar3)();
        }
        if (*(char *)(iVar5 - uVar11) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar3)();
        }
        if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar3)();
        }
        bVar1 = *(byte *)(iVar4 + 0x14);
        uVar11 = 1 << uVar7;
        *(undefined1 *)(unaff_r6 + -3) = 0xff;
        *(undefined2 *)(unaff_r6 + -2) = 0;
        do {
          uVar13 = *(uint *)(iVar4 + 0x10);
          uVar8 = *(uint *)(iVar4 + 0xc) | uVar13;
          if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar3)();
          }
          if ((uVar13 == 0) || (uVar8 + uVar11 == (2 << (bVar1 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar4,uVar7);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar9 = (undefined4 *)FUN_016d2bc8();
            uVar10 = *puVar9;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar9 = uVar10;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar4 + 0x10) = uVar11 + uVar13;
            return;
          }
          puVar6 = (uint *)(iVar4 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar6);
            uVar8 = *puVar6;
            if (uVar13 != uVar8) goto LAB_016d409c;
            bVar15 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar15);
          *puVar6 = uVar11 + uVar13;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar13 == uVar8) {
            return;
          }
        } while( true );
      }
    }
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if ((char)param_1[0x27] == '\x03') {
    FUN_00887914(param_1 + 0x20);
    return;
  }
  if ((char)param_1[0x27] != '\0') {
    return;
  }
  switch(*(undefined1 *)((int)param_1 + 0x2d)) {
  case 0:
    piVar2 = (int *)param_1[9];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar15 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar15);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00d0668c(param_1[9]);
    }
    iVar4 = param_1[3];
    if (iVar4 != 0) {
      piVar2 = (int *)(iVar4 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar2;
        bVar15 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar15);
      *piVar2 = iVar5 + -1;
      DataMemoryBarrier(0xb);
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        if (0x7fffffff < *(uint *)(iVar4 + 0x10)) {
          puVar6 = (uint *)(iVar4 + 0x10);
          DataMemoryBarrier(0xb);
          do {
            bVar15 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar15);
          *puVar6 = *puVar6 & 0x7fffffff;
          DataMemoryBarrier(0xb);
        }
        puVar6 = (uint *)(iVar4 + 0x20);
        DataMemoryBarrier(0xb);
        do {
          uVar7 = *puVar6;
          bVar15 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar15);
        *puVar6 = uVar7 | 2;
        DataMemoryBarrier(0xb);
        if (uVar7 == 0) {
          iVar5 = *(int *)(iVar4 + 0x18);
          *(undefined4 *)(iVar4 + 0x18) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar15 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar15);
          *puVar6 = *puVar6 & 0xfffffffd;
          if (iVar5 != 0) {
            (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar4 + 0x1c));
          }
        }
      }
      piVar2 = (int *)param_1[3];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar15 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar15);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f23b4(param_1[3]);
      }
    }
    piVar2 = (int *)param_1[10];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar15 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar15);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00784894(param_1[10]);
      FUN_00ac9c30(param_1 + 0x24);
      return;
    }
  default:
    goto switchD_00d34348_caseD_1;
  case 3:
    if (param_1[0xc] != 0) {
      FUN_00c8204c(param_1[0xc],param_1[0xd],1);
    }
    break;
  case 4:
    if (*(byte *)((int)param_1 + 0x59) - 3 < 2) {
      FUN_00ad7070(param_1 + 0x17);
    }
    if (param_1[0xc] != 0) {
      thunk_FUN_016d3fb4(param_1[0xd]);
    }
    FUN_00c822ec(param_1[8]);
    break;
  case 5:
    FUN_00a07b4c(param_1 + 0xc);
  }
  piVar2 = (int *)param_1[7];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar15 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar15);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(param_1[7]);
  }
  iVar4 = param_1[5];
  if (iVar4 != 0) {
    piVar2 = (int *)(iVar4 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar2;
      bVar15 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar15);
    *piVar2 = iVar5 + -1;
    DataMemoryBarrier(0xb);
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar4 + 0x10)) {
        puVar6 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar15 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar15);
        *puVar6 = *puVar6 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar6 = (uint *)(iVar4 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar7 = *puVar6;
        bVar15 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar15);
      *puVar6 = uVar7 | 2;
      DataMemoryBarrier(0xb);
      if (uVar7 == 0) {
        iVar5 = *(int *)(iVar4 + 0x18);
        *(undefined4 *)(iVar4 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar15 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar15);
        *puVar6 = *puVar6 & 0xfffffffd;
        if (iVar5 != 0) {
          (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar4 + 0x1c));
        }
      }
    }
    piVar2 = (int *)param_1[5];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar15 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar15);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f23b4(param_1[5]);
    }
  }
  piVar2 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar15 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar15);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d0668c(param_1[6]);
  }
switchD_00d34348_caseD_1:
  FUN_00ac9c30(param_1 + 0x24);
  return;
}

