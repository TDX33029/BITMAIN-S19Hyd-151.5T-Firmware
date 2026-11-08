// FUN_00d2ba50 @ 00d2ba50 size=844 calls_out=7 calls_in=2
// strings: 

void FUN_00d2ba50(int *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int unaff_r6;
  int iVar14;
  int iVar15;
  bool bVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 1) {
    bVar16 = param_1[2] == 0 && param_1[3] == 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      unaff_r6 = param_1[4];
      bVar16 = unaff_r6 == 0;
    }
    if (!bVar16) {
      puVar9 = (undefined4 *)param_1[5];
      pcVar4 = (code *)*puVar9;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(unaff_r6);
      }
      if (puVar9[1] != 0) {
        if (unaff_r6 == 0) {
          return;
        }
        iVar3 = FUN_016d3bc8();
        uVar7 = *(byte *)(unaff_r6 + -3) & 0x1f;
        if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
           (uVar11 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar15 = uVar11 - 0x10, uVar11 == 0)) {
          iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2)
                   << 4;
        }
        uVar11 = (uint)(*(byte *)(unaff_r6 + -3) >> 5);
        iVar14 = *(int *)(iVar3 + 8) + 0x10;
        iVar12 = iVar15 * uVar7 + iVar15 + -4;
        iVar15 = iVar14 + iVar12;
        if (4 < uVar11) {
          if (uVar11 != 5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar4)();
          }
          uVar11 = *(uint *)(iVar15 + -4);
          if (uVar11 < 5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar4)();
          }
          if (*(char *)(iVar15 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar4)();
          }
        }
        if ((uint)(iVar15 - unaff_r6) < uVar11) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar4)();
        }
        if (*(char *)(iVar15 - uVar11) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar4)();
        }
        if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar4)();
        }
        bVar2 = *(byte *)(iVar3 + 0x14);
        uVar11 = 1 << uVar7;
        *(undefined1 *)(unaff_r6 + -3) = 0xff;
        *(undefined2 *)(unaff_r6 + -2) = 0;
        do {
          uVar13 = *(uint *)(iVar3 + 0x10);
          uVar8 = *(uint *)(iVar3 + 0xc) | uVar13;
          if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar4)();
          }
          if ((uVar13 == 0) || (uVar8 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar3,uVar7);
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
            *(uint *)(iVar3 + 0x10) = uVar11 + uVar13;
            return;
          }
          puVar5 = (uint *)(iVar3 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar5);
            uVar8 = *puVar5;
            if (uVar13 != uVar8) goto LAB_016d409c;
            bVar16 = (bool)hasExclusiveAccess(puVar5);
          } while (!bVar16);
          *puVar5 = uVar11 + uVar13;
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
  if ((char)param_1[0x29] == '\x03') {
    FUN_00887914(param_1 + 0x22);
    return;
  }
  if ((char)param_1[0x29] != '\0') {
    return;
  }
  cVar1 = (char)param_1[0xd];
  if (cVar1 == '\x04') {
    FUN_00a07b4c(param_1 + 0xe);
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 == '\0') {
        iVar15 = param_1[4] + 1;
        iVar3 = param_1[3];
        while (iVar15 = iVar15 + -1, iVar15 != 0) {
          FUN_00ce1b8c(iVar3);
          iVar3 = iVar3 + 0xe0;
        }
        if (param_1[2] != 0) {
          thunk_FUN_016d3fb4(param_1[3]);
        }
        iVar3 = param_1[5];
        if (iVar3 != 0) {
          piVar6 = (int *)(iVar3 + 0x14);
          DataMemoryBarrier(0xb);
          do {
            iVar15 = *piVar6;
            bVar16 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar16);
          *piVar6 = iVar15 + -1;
          DataMemoryBarrier(0xb);
          if (iVar15 == 1) {
            DataMemoryBarrier(0xb);
            if (0x7fffffff < *(uint *)(iVar3 + 0x10)) {
              puVar5 = (uint *)(iVar3 + 0x10);
              DataMemoryBarrier(0xb);
              do {
                bVar16 = (bool)hasExclusiveAccess(puVar5);
              } while (!bVar16);
              *puVar5 = *puVar5 & 0x7fffffff;
              DataMemoryBarrier(0xb);
            }
            puVar5 = (uint *)(iVar3 + 0x20);
            DataMemoryBarrier(0xb);
            do {
              uVar7 = *puVar5;
              bVar16 = (bool)hasExclusiveAccess(puVar5);
            } while (!bVar16);
            *puVar5 = uVar7 | 2;
            DataMemoryBarrier(0xb);
            if (uVar7 == 0) {
              iVar15 = *(int *)(iVar3 + 0x18);
              *(undefined4 *)(iVar3 + 0x18) = 0;
              DataMemoryBarrier(0xb);
              do {
                bVar16 = (bool)hasExclusiveAccess(puVar5);
              } while (!bVar16);
              *puVar5 = *puVar5 & 0xfffffffd;
              if (iVar15 != 0) {
                (**(code **)(iVar15 + 4))(*(undefined4 *)(iVar3 + 0x1c));
              }
            }
          }
          piVar6 = (int *)param_1[5];
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar6;
            bVar16 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar16);
          *piVar6 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_008f23b4(param_1[5]);
          }
        }
      }
      goto LAB_00d2bd90;
    }
    if ((char)param_1[0x18] == '\x03') {
      FUN_00ad7070(param_1 + 0x13);
    }
  }
  bVar16 = *(char *)((int)param_1 + 0x35) != '\0';
  iVar3 = 0;
  if (bVar16) {
    iVar3 = param_1[10];
  }
  if (bVar16 && iVar3 != 0) {
    thunk_FUN_016d3fb4(param_1[0xb]);
  }
  iVar3 = param_1[9];
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  if (iVar3 != 0) {
    piVar6 = (int *)(iVar3 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar6;
      bVar16 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar16);
    *piVar6 = iVar15 + -1;
    DataMemoryBarrier(0xb);
    if (iVar15 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar3 + 0x10)) {
        puVar5 = (uint *)(iVar3 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar16 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar16);
        *puVar5 = *puVar5 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar5 = (uint *)(iVar3 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar7 = *puVar5;
        bVar16 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar16);
      *puVar5 = uVar7 | 2;
      DataMemoryBarrier(0xb);
      if (uVar7 == 0) {
        iVar15 = *(int *)(iVar3 + 0x18);
        *(undefined4 *)(iVar3 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar16 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar16);
        *puVar5 = *puVar5 & 0xfffffffd;
        if (iVar15 != 0) {
          (**(code **)(iVar15 + 4))(*(undefined4 *)(iVar3 + 0x1c));
        }
      }
    }
    piVar6 = (int *)param_1[9];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar6;
      bVar16 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar16);
    *piVar6 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f23b4(param_1[9]);
    }
  }
  iVar15 = param_1[8] + 1;
  iVar3 = param_1[7];
  while (iVar15 = iVar15 + -1, iVar15 != 0) {
    FUN_00ce1b8c(iVar3);
    iVar3 = iVar3 + 0xe0;
  }
  if (param_1[6] != 0) {
    thunk_FUN_016d3fb4(param_1[7]);
    FUN_00ac9c30(param_1 + 0x26);
    return;
  }
LAB_00d2bd90:
  FUN_00ac9c30(param_1 + 0x26);
  return;
}

