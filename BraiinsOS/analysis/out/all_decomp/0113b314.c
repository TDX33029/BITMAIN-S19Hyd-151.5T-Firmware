// FUN_0113b314 @ 0113b314 size=420 calls_out=3 calls_in=8
// strings: 

void FUN_0113b314(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar5 = *(int **)(param_1 + 0xc);
  do {
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)*(int *)(param_1 + 0x14);
      while (piVar5 != (int *)0x0) {
        iVar9 = *piVar5;
        piVar15 = (int *)piVar5[1];
        if (piVar15 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar15;
            bVar1 = (bool)hasExclusiveAccess(piVar15);
          } while (!bVar1);
          *piVar15 = iVar8 + -1;
          if (iVar8 == 1) {
            DataMemoryBarrier(0xb);
            FUN_010b4e7c(piVar5[1]);
          }
        }
        thunk_FUN_016d3fb4(piVar5);
        piVar5 = (int *)iVar9;
      }
      if (*(int *)(param_1 + 0x24) != 0) {
        (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(*(undefined4 *)(param_1 + 0x28));
      }
      if (param_1 != -1) {
        piVar5 = (int *)(param_1 + 4);
        DataMemoryBarrier(0xb);
        do {
          iVar9 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar9 + -1;
        if (iVar9 == 1) {
          DataMemoryBarrier(0xb);
          if (param_1 == 0) {
            return;
          }
          iVar9 = FUN_016d3bc8();
          uVar17 = *(byte *)(param_1 + -3) & 0x1f;
          if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
             (uVar12 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar8 = uVar12 - 0x10, uVar12 == 0)) {
            iVar8 = (uint)*(ushort *)
                           (&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar12 = (uint)(*(byte *)(param_1 + -3) >> 5);
          iVar16 = *(int *)(iVar9 + 8) + 0x10;
          iVar13 = iVar8 * uVar17 + iVar8 + -4;
          iVar8 = iVar16 + iVar13;
          if (4 < uVar12) {
            if (uVar12 != 5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar2)();
            }
            uVar12 = *(uint *)(iVar8 + -4);
            if (uVar12 < 5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d4022);
              (*pcVar2)();
            }
            if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d402a);
              (*pcVar2)();
            }
          }
          if ((uint)(iVar8 - param_1) < uVar12) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar2)();
          }
          if (*(char *)(iVar8 - uVar12) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar2)();
          }
          if (*(char *)(iVar16 + iVar13) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar2)();
          }
          bVar3 = *(byte *)(iVar9 + 0x14);
          uVar12 = 1 << uVar17;
          *(undefined1 *)(param_1 + -3) = 0xff;
          *(undefined2 *)(param_1 + -2) = 0;
          do {
            uVar14 = *(uint *)(iVar9 + 0x10);
            uVar10 = *(uint *)(iVar9 + 0xc) | uVar14;
            if ((uVar12 & uVar10) != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar2)();
            }
            if ((uVar14 == 0) || (uVar10 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&uStack_28,iVar9,uVar17);
              FUN_016dddc0(&DAT_018ddd48);
              if (iStack_24 == 0) {
                return;
              }
              puVar6 = (undefined4 *)FUN_016d2bc8();
              uVar11 = *puVar6;
              FUN_016d6ac4(uStack_28,iStack_24);
              *puVar6 = uVar11;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar9 + 0x10) = uVar12 + uVar14;
              return;
            }
            puVar18 = (uint *)(iVar9 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar18);
              uVar10 = *puVar18;
              if (uVar14 != uVar10) goto LAB_016d409c;
              bVar1 = (bool)hasExclusiveAccess(puVar18);
            } while (!bVar1);
            *puVar18 = uVar12 + uVar14;
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
    piVar15 = (int *)piVar5[5];
    if (*piVar5 != 0) {
      if (piVar5[1] == 0) {
        piVar4 = (int *)piVar5[2];
        DataMemoryBarrier(0xb);
        do {
          iVar9 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = iVar9 + -1;
        if (iVar9 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015614d8(piVar5[2],piVar5[3]);
        }
      }
      else {
        piVar4 = (int *)piVar5[4];
        if (((uint)piVar4 & 1) == 0) {
          piVar7 = piVar4 + 4;
          DataMemoryBarrier(0xb);
          do {
            iVar9 = *piVar7;
            bVar1 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar1);
          *piVar7 = iVar9 + -1;
          if (iVar9 == 1) {
            DataMemoryBarrier(0xb);
            if (*piVar4 != 0) {
              thunk_FUN_016d3fb4(piVar4[1]);
            }
            goto LAB_0113b324;
          }
        }
        else if (piVar5[3] + ((uint)piVar4 >> 5) != 0) {
          piVar4 = (int *)(piVar5[1] - ((uint)piVar4 >> 5));
LAB_0113b324:
          thunk_FUN_016d3fb4(piVar4);
        }
      }
    }
    thunk_FUN_016d3fb4(piVar5);
    piVar5 = piVar15;
  } while( true );
}

