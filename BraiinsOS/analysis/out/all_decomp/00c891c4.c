// FUN_00c891c4 @ 00c891c4 size=732 calls_out=4 calls_in=1
// strings: 

void FUN_00c891c4(int *param_1)

{
  bool bVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 0) {
    if ((char)param_1[0x34] == '\0') {
      piVar6 = (int *)param_1[0x32];
      DataMemoryBarrier(0xb);
      do {
        iVar15 = *piVar6;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar15 + -1;
      if (iVar15 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(param_1[0x32]);
      }
      piVar6 = (int *)param_1[2];
      DataMemoryBarrier(0xb);
      do {
        iVar15 = *piVar6;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar15 + -1;
      if (iVar15 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(param_1[2]);
      }
      iVar15 = param_1[0x33];
      if (iVar15 != 0) {
        piVar6 = (int *)(iVar15 + 0x14);
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar6;
          bVar1 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar1);
        *piVar6 = iVar4 + -1;
        DataMemoryBarrier(0xb);
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          if (0x7fffffff < *(uint *)(iVar15 + 0x10)) {
            puVar5 = (uint *)(iVar15 + 0x10);
            DataMemoryBarrier(0xb);
            do {
              bVar1 = (bool)hasExclusiveAccess(puVar5);
            } while (!bVar1);
            *puVar5 = *puVar5 & 0x7fffffff;
            DataMemoryBarrier(0xb);
          }
          puVar5 = (uint *)(iVar15 + 0x20);
          DataMemoryBarrier(0xb);
          do {
            uVar7 = *puVar5;
            bVar1 = (bool)hasExclusiveAccess(puVar5);
          } while (!bVar1);
          *puVar5 = uVar7 | 2;
          DataMemoryBarrier(0xb);
          if (uVar7 == 0) {
            iVar4 = *(int *)(iVar15 + 0x18);
            *(undefined4 *)(iVar15 + 0x18) = 0;
            DataMemoryBarrier(0xb);
            do {
              bVar1 = (bool)hasExclusiveAccess(puVar5);
            } while (!bVar1);
            *puVar5 = *puVar5 & 0xfffffffd;
            if (iVar4 != 0) {
              (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar15 + 0x1c));
            }
          }
        }
        piVar6 = (int *)param_1[0x33];
        DataMemoryBarrier(0xb);
        do {
          iVar15 = *piVar6;
          bVar1 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar1);
        *piVar6 = iVar15 + -1;
LAB_00c89484:
        if (iVar15 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078cf4c(param_1[0x33]);
          return;
        }
        return;
      }
    }
    else if ((char)param_1[0x34] == '\x03') {
      FUN_00c89590(param_1 + 4);
      iVar15 = param_1[0x33];
      if (iVar15 != 0) {
        piVar6 = (int *)(iVar15 + 0x14);
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar6;
          bVar1 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar1);
        *piVar6 = iVar4 + -1;
        DataMemoryBarrier(0xb);
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          if (0x7fffffff < *(uint *)(iVar15 + 0x10)) {
            puVar5 = (uint *)(iVar15 + 0x10);
            DataMemoryBarrier(0xb);
            do {
              bVar1 = (bool)hasExclusiveAccess(puVar5);
            } while (!bVar1);
            *puVar5 = *puVar5 & 0x7fffffff;
            DataMemoryBarrier(0xb);
          }
          puVar5 = (uint *)(iVar15 + 0x20);
          DataMemoryBarrier(0xb);
          do {
            uVar7 = *puVar5;
            bVar1 = (bool)hasExclusiveAccess(puVar5);
          } while (!bVar1);
          *puVar5 = uVar7 | 2;
          DataMemoryBarrier(0xb);
          if (uVar7 == 0) {
            iVar4 = *(int *)(iVar15 + 0x18);
            *(undefined4 *)(iVar15 + 0x18) = 0;
            DataMemoryBarrier(0xb);
            do {
              bVar1 = (bool)hasExclusiveAccess(puVar5);
            } while (!bVar1);
            *puVar5 = *puVar5 & 0xfffffffd;
            if (iVar4 != 0) {
              (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar15 + 0x1c));
            }
          }
        }
        piVar6 = (int *)param_1[0x33];
        DataMemoryBarrier(0xb);
        do {
          iVar15 = *piVar6;
          bVar1 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar1);
        *piVar6 = iVar15 + -1;
        goto LAB_00c89484;
      }
    }
  }
  else if (*param_1 == 1) {
    if (param_1[2] == 0 && param_1[3] == 0) {
      if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c89340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined4 **)param_1[4])();
        return;
      }
    }
    else {
      iVar15 = param_1[4];
      if (iVar15 != 0) {
        puVar10 = (undefined4 *)param_1[5];
        pcVar3 = (code *)*puVar10;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(iVar15);
        }
        if (puVar10[1] != 0) {
          if (iVar15 == 0) {
            return;
          }
          iVar4 = FUN_016d3bc8();
          uVar7 = *(byte *)(iVar15 + -3) & 0x1f;
          if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
             (uVar12 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar8 = uVar12 - 0x10, uVar12 == 0)) {
            iVar8 = (uint)*(ushort *)
                           (&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar12 = (uint)(*(byte *)(iVar15 + -3) >> 5);
          iVar16 = *(int *)(iVar4 + 8) + 0x10;
          iVar13 = iVar8 * uVar7 + iVar8 + -4;
          iVar8 = iVar16 + iVar13;
          if (4 < uVar12) {
            if (uVar12 != 5) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar3)();
            }
            uVar12 = *(uint *)(iVar8 + -4);
            if (uVar12 < 5) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0xff,0x16d4022);
              (*pcVar3)();
            }
            if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0xff,0x16d402a);
              (*pcVar3)();
            }
          }
          if ((uint)(iVar8 - iVar15) < uVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar3)();
          }
          if (*(char *)(iVar8 - uVar12) != '\0') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar3)();
          }
          if (*(char *)(iVar16 + iVar13) != '\0') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar3)();
          }
          bVar2 = *(byte *)(iVar4 + 0x14);
          uVar12 = 1 << uVar7;
          *(undefined1 *)(iVar15 + -3) = 0xff;
          *(undefined2 *)(iVar15 + -2) = 0;
          do {
            uVar14 = *(uint *)(iVar4 + 0x10);
            uVar9 = *(uint *)(iVar4 + 0xc) | uVar14;
            if ((uVar12 & uVar9) != 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar3)();
            }
            if ((uVar14 == 0) || (uVar9 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&uStack_28,iVar4,uVar7);
              FUN_016dddc0(&DAT_018ddd48);
              if (iStack_24 == 0) {
                return;
              }
              puVar10 = (undefined4 *)FUN_016d2bc8();
              uVar11 = *puVar10;
              FUN_016d6ac4(uStack_28,iStack_24);
              *puVar10 = uVar11;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar4 + 0x10) = uVar12 + uVar14;
              return;
            }
            puVar5 = (uint *)(iVar4 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar5);
              uVar9 = *puVar5;
              if (uVar14 != uVar9) goto LAB_016d409c;
              bVar1 = (bool)hasExclusiveAccess(puVar5);
            } while (!bVar1);
            *puVar5 = uVar12 + uVar14;
LAB_016d409c:
            DataMemoryBarrier(0x1b);
            if (uVar14 == uVar9) {
              return;
            }
          } while( true );
        }
      }
    }
  }
  return;
}

