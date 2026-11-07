// FUN_00dde9f4 @ 00dde9f4 size=484 calls_out=1 calls_in=2
// strings: 

void FUN_00dde9f4(int *param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int unaff_r6;
  int iVar12;
  uint uVar13;
  uint *puVar14;
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
      puVar7 = (undefined4 *)param_1[5];
      pcVar4 = (code *)*puVar7;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(unaff_r6);
      }
      if (puVar7[1] != 0) {
        thunk_FUN_016d3fb4(unaff_r6);
      }
    }
  }
  else if (*param_1 == 0) {
    piVar2 = (int *)param_1[2];
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar15 = (bool)hasExclusiveAccess(piVar2);
      if (bVar15) {
        *piVar2 = 0x84;
        goto LAB_00ddea90;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
  }
LAB_00ddea90:
  if (param_1[6] == 1) {
    bVar15 = param_1[8] == 0 && param_1[9] == 0;
    if (param_1[8] != 0 || param_1[9] != 0) {
      unaff_r6 = param_1[10];
      bVar15 = unaff_r6 == 0;
    }
    if (!bVar15) {
      puVar7 = (undefined4 *)param_1[0xb];
      pcVar4 = (code *)*puVar7;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(unaff_r6);
      }
      if (puVar7[1] != 0) {
        thunk_FUN_016d3fb4(unaff_r6);
      }
    }
  }
  else if (param_1[6] == 0) {
    piVar2 = (int *)param_1[8];
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar15 = (bool)hasExclusiveAccess(piVar2);
      if (bVar15) {
        *piVar2 = 0x84;
        goto LAB_00ddeb20;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
  }
LAB_00ddeb20:
  if (param_1[0xc] == 1) {
    if (param_1[0xe] != 0 || param_1[0xf] != 0) {
      bVar15 = param_1[0x10] == 0 && param_1[0x11] == 0;
      if (param_1[0x10] != 0 || param_1[0x11] != 0) {
        unaff_r6 = param_1[0x12];
        bVar15 = unaff_r6 == 0;
      }
      if (!bVar15) {
        puVar7 = (undefined4 *)param_1[0x13];
        pcVar4 = (code *)*puVar7;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(unaff_r6);
        }
        if (puVar7[1] != 0) {
          if (unaff_r6 == 0) {
            return;
          }
          iVar3 = FUN_016d3bc8();
          uVar13 = *(byte *)(unaff_r6 + -3) & 0x1f;
          if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
             (uVar9 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar5 = uVar9 - 0x10, uVar9 == 0)) {
            iVar5 = (uint)*(ushort *)
                           (&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar9 = (uint)(*(byte *)(unaff_r6 + -3) >> 5);
          iVar12 = *(int *)(iVar3 + 8) + 0x10;
          iVar10 = iVar5 * uVar13 + iVar5 + -4;
          iVar5 = iVar12 + iVar10;
          if (4 < uVar9) {
            if (uVar9 != 5) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar4)();
            }
            uVar9 = *(uint *)(iVar5 + -4);
            if (uVar9 < 5) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)software_udf(0xff,0x16d4022);
              (*pcVar4)();
            }
            if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
              pcVar4 = (code *)software_udf(0xff,0x16d402a);
              (*pcVar4)();
            }
          }
          if ((uint)(iVar5 - unaff_r6) < uVar9) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar4)();
          }
          if (*(char *)(iVar5 - uVar9) != '\0') {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar4)();
          }
          if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar4)();
          }
          bVar1 = *(byte *)(iVar3 + 0x14);
          uVar9 = 1 << uVar13;
          *(undefined1 *)(unaff_r6 + -3) = 0xff;
          *(undefined2 *)(unaff_r6 + -2) = 0;
          do {
            uVar11 = *(uint *)(iVar3 + 0x10);
            uVar6 = *(uint *)(iVar3 + 0xc) | uVar11;
            if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar4)();
            }
            if ((uVar11 == 0) || (uVar6 + uVar9 == (2 << (bVar1 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&uStack_28,iVar3,uVar13);
              FUN_016dddc0(&DAT_018ddd48);
              if (iStack_24 == 0) {
                return;
              }
              puVar7 = (undefined4 *)FUN_016d2bc8();
              uVar8 = *puVar7;
              FUN_016d6ac4(uStack_28,iStack_24);
              *puVar7 = uVar8;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar3 + 0x10) = uVar9 + uVar11;
              return;
            }
            puVar14 = (uint *)(iVar3 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar14);
              uVar6 = *puVar14;
              if (uVar11 != uVar6) goto LAB_016d409c;
              bVar15 = (bool)hasExclusiveAccess(puVar14);
            } while (!bVar15);
            *puVar14 = uVar9 + uVar11;
LAB_016d409c:
            DataMemoryBarrier(0x1b);
            if (uVar11 == uVar6) {
              return;
            }
          } while( true );
        }
      }
    }
  }
  else if ((param_1[0xc] == 0) && (piVar2 = (int *)param_1[0xe], piVar2 != (int *)0x0)) {
    if (*piVar2 != 0xcc) {
      ClearExclusiveLocal();
                    /* WARNING: Could not recover jumptable at 0x00ddeba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(piVar2[2] + 0x10))();
      return;
    }
    DataMemoryBarrier(0xb);
    bVar15 = (bool)hasExclusiveAccess(piVar2);
    if (!bVar15) {
                    /* WARNING: Could not recover jumptable at 0x00ddeb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(piVar2[2] + 0x10))();
      return;
    }
    *piVar2 = 0x84;
  }
  return;
}

