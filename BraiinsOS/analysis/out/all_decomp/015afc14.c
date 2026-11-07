// FUN_015afc14 @ 015afc14 size=2284 calls_out=14 calls_in=2
// strings: 

void FUN_015afc14(undefined4 *param_1,uint param_2,int param_3)

{
  code *pcVar1;
  uint *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  char cVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  int unaff_r4;
  uint uVar15;
  int iVar16;
  byte bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  undefined8 uVar23;
  int local_70;
  uint local_50;
  int local_4c;
  uint local_48;
  uint local_40;
  int local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar2 = (uint *)(param_3 + 0x2c);
  uVar8 = *puVar2;
  if (uVar8 == 9) {
    FUN_015ade58(&local_40,param_3);
    *puVar2 = local_40;
    *(int *)(param_3 + 0x30) = local_3c;
    *(uint *)(param_3 + 0x34) = local_38;
    *(undefined4 *)(param_3 + 0x38) = local_34;
    *(undefined4 *)(param_3 + 0x3c) = uStack_30;
    *(undefined4 *)(param_3 + 0x40) = uStack_2c;
    uVar8 = *(uint *)(param_3 + 0x2c);
  }
  bVar17 = *(byte *)(param_3 + 0x31);
  uVar5 = param_2;
  if ((uVar8 == 7 && *(char *)(param_3 + 0x30) == '\x02') && (bVar17 == 0)) {
    *(undefined4 *)(param_3 + 0x2c) = 9;
    iVar16 = *(int *)(param_3 + 0x34);
    uVar5 = *(uint *)(param_3 + 0x3c);
    FUN_015ade58(&local_40,param_3);
    *puVar2 = local_40;
    *(int *)(param_3 + 0x30) = local_3c;
    *(uint *)(param_3 + 0x34) = local_38;
    *(undefined4 *)(param_3 + 0x38) = local_34;
    *(undefined4 *)(param_3 + 0x3c) = uStack_30;
    *(undefined4 *)(param_3 + 0x40) = uStack_2c;
    bVar17 = *(byte *)(param_3 + 0x31);
    if (iVar16 == 0) {
      uVar5 = param_2;
    }
    if (*(int *)(param_3 + 0x2c) != 7 || *(char *)(param_3 + 0x30) != '\x02') goto LAB_015afd98;
  }
  else if (uVar8 != 7 || *(char *)(param_3 + 0x30) != '\x02') goto LAB_015afd98;
  if (bVar17 != 0) {
    iVar16 = *(int *)(param_3 + 0x38);
    uVar11 = *(undefined4 *)(param_3 + 0x40);
    piVar12 = *(int **)(param_3 + 0x34);
    uVar9 = *(undefined4 *)(param_3 + 0x3c);
    *(undefined4 *)(param_3 + 0x2c) = 9;
    if (piVar12 != (int *)0x0) {
      if (iVar16 == 5) {
        if (*piVar12 != 0x73726966 || (char)piVar12[1] != 't') goto LAB_015afe48;
        FUN_015ade58(&local_40,param_3);
        *puVar2 = local_40;
        *(int *)(param_3 + 0x30) = local_3c;
        *(uint *)(param_3 + 0x34) = local_38;
        *(undefined4 *)(param_3 + 0x38) = local_34;
        *(undefined4 *)(param_3 + 0x3c) = uStack_30;
        *(undefined4 *)(param_3 + 0x40) = uStack_2c;
        if (*(int *)(param_3 + 0x2c) == 7) {
          bVar17 = *(byte *)(param_3 + 0x30);
          bVar22 = bVar17 == 2;
          if (bVar22) {
            bVar17 = *(byte *)(param_3 + 0x31);
          }
          if (bVar22 && (bVar17 & 1) == 0) {
            uVar9 = *(undefined4 *)(param_3 + 0x40);
            *(undefined4 *)(param_3 + 0x2c) = 9;
            if (*(int *)(param_3 + 0x34) != 0) {
              uVar8 = 0;
              iVar16 = 4;
              local_48 = 0;
              local_4c = 4;
              local_50 = 0;
              while( true ) {
                FUN_015b055c(&local_40,uVar9,param_3);
                uVar5 = local_38;
                iVar4 = local_3c;
                if (local_40 != 7) break;
                if (uVar8 == local_50) {
                  FUN_015af858(&local_50);
                  iVar16 = local_4c;
                }
                piVar12 = (int *)(iVar16 + uVar8 * 8);
                *piVar12 = iVar4;
                uVar8 = uVar8 + 1;
                piVar12[1] = uVar5;
                local_48 = uVar8;
                if (local_40 != 7) {
                  FUN_015b0a4c(&local_40);
                }
              }
              FUN_015b0a4c(&local_40);
              uVar5 = *puVar2;
              if (uVar5 == 9) {
                FUN_015ade58(&local_40,param_3);
                *puVar2 = local_40;
                *(int *)(param_3 + 0x30) = local_3c;
                *(uint *)(param_3 + 0x34) = local_38;
                *(undefined4 *)(param_3 + 0x38) = local_34;
                *(undefined4 *)(param_3 + 0x3c) = uStack_30;
                *(undefined4 *)(param_3 + 0x40) = uStack_2c;
                uVar5 = *puVar2;
              }
              bVar22 = uVar5 == 7;
              if (bVar22) {
                uVar5 = (uint)*(byte *)(param_3 + 0x30);
              }
              if ((bVar22 && uVar5 == 1) && ((*(byte *)(param_3 + 0x31) & 1) != 0)) {
                *(undefined4 *)(param_3 + 0x2c) = 9;
                uVar9 = *(undefined4 *)(param_3 + 0x34);
                local_40 = local_50;
                local_3c = local_4c;
                local_38 = local_48;
                uVar23 = FUN_015ad954(&local_40);
                *param_1 = 4;
                param_1[1] = param_2;
                param_1[2] = uVar9;
                *(undefined8 *)(param_1 + 3) = uVar23;
                return;
              }
              param_1[1] = 0;
              *param_1 = 5;
              param_1[2] = param_2;
              FUN_015ada34(iVar16,uVar8);
              if (local_50 == 0) {
                return;
              }
              thunk_FUN_016d3fb4(iVar16);
              return;
            }
          }
        }
        uVar9 = 0x18;
        puVar3 = &DAT_0040f705;
      }
      else {
        if ((iVar16 != 8) || (*piVar12 != 0x6974706f || piVar12[1] != 0x6c616e6f)) {
LAB_015afe48:
          local_70 = 4;
          local_4c = 4;
          uVar5 = 0;
          uVar8 = 9;
          local_50 = 0;
          do {
            cVar10 = '\x02';
            local_48 = uVar5;
            if (uVar8 == 9) {
              FUN_015ade58(&local_40,param_3);
              *puVar2 = local_40;
              *(int *)(param_3 + 0x30) = local_3c;
              *(uint *)(param_3 + 0x34) = local_38;
              *(undefined4 *)(param_3 + 0x38) = local_34;
              *(undefined4 *)(param_3 + 0x3c) = uStack_30;
              *(undefined4 *)(param_3 + 0x40) = uStack_2c;
              bVar17 = *(byte *)(param_3 + 0x31);
              cVar10 = *(char *)(param_3 + 0x30);
              uVar8 = *(uint *)(param_3 + 0x2c);
            }
            if ((uVar8 != 7) || (cVar10 != '\x02' || (bVar17 & 1) != 0)) {
LAB_015afff4:
              if ((uVar8 == 7 && cVar10 == '\x01') && ((bVar17 & 1) != 0)) {
                *puVar2 = 9;
                if (uVar5 < local_50) {
                  if (uVar5 == 0) {
                    thunk_FUN_016d3fb4(local_4c);
                    iVar4 = 4;
                  }
                  else {
                    iVar4 = thunk_FUN_016d4ea4(local_4c,uVar5 << 5);
                    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00600af4(4,uVar5 << 5);
                    }
                  }
                }
                else {
                  iVar4 = local_4c;
                }
                param_1[5] = iVar4;
                *param_1 = 2;
                param_1[6] = uVar5;
                param_1[1] = piVar12;
                param_1[2] = iVar16;
                param_1[3] = uVar9;
                param_1[4] = uVar11;
                return;
              }
              param_1[1] = 0;
              iVar16 = 8;
              goto LAB_015b041c;
            }
            *(undefined4 *)(param_3 + 0x2c) = 9;
            if (*(int *)(param_3 + 0x34) == 0) {
LAB_015b029c:
              FUN_015ade58(&local_40,param_3);
              *puVar2 = local_40;
              *(int *)(param_3 + 0x30) = local_3c;
              *(uint *)(param_3 + 0x34) = local_38;
              *(undefined4 *)(param_3 + 0x38) = local_34;
              *(undefined4 *)(param_3 + 0x3c) = uStack_30;
              *(undefined4 *)(param_3 + 0x40) = uStack_2c;
              bVar17 = *(byte *)(param_3 + 0x31);
              cVar10 = *(char *)(param_3 + 0x30);
              uVar8 = *(uint *)(param_3 + 0x2c);
              goto LAB_015afff4;
            }
            FUN_015ade58(&local_40,param_3);
            *puVar2 = local_40;
            *(int *)(param_3 + 0x30) = local_3c;
            *(uint *)(param_3 + 0x34) = local_38;
            *(undefined4 *)(param_3 + 0x38) = local_34;
            *(undefined4 *)(param_3 + 0x3c) = uStack_30;
            *(undefined4 *)(param_3 + 0x40) = uStack_2c;
            uVar8 = *(uint *)(param_3 + 0x2c);
            bVar17 = *(byte *)(param_3 + 0x31);
            cVar10 = *(char *)(param_3 + 0x30);
            if ((uVar8 == 7) && (cVar10 == '\x01' && bVar17 == 0)) {
              uVar9 = *(undefined4 *)(param_3 + 0x34);
              *(undefined4 *)(param_3 + 0x2c) = 9;
              puVar6 = (undefined1 *)thunk_FUN_016d4a50(1);
              if (puVar6 == (undefined1 *)0x0) {
                local_38 = 1;
LAB_015b04c0:
                uVar9 = 1;
LAB_015b03bc:
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(uVar9,local_38);
              }
              *puVar6 = 0x5b;
              local_38 = 1;
              param_1[1] = 2;
              param_1[2] = uVar9;
              goto LAB_015b04b0;
            }
            if (((uVar8 != 7) || (cVar10 != '\x02')) || (bVar17 == 0)) goto LAB_015afff4;
            iVar19 = *(int *)(param_3 + 0x34);
            iVar4 = *(int *)(param_3 + 0x38);
            iVar20 = *(int *)(param_3 + 0x3c);
            iVar21 = *(int *)(param_3 + 0x40);
            *(undefined4 *)(param_3 + 0x2c) = 9;
            if (iVar19 == 0) goto LAB_015b029c;
            if (iVar4 == 0) {
              iVar4 = 0;
LAB_015b038c:
              FUN_006008c8(&local_40,iVar19,iVar4);
              if (local_40 == 0x80000000) {
                if ((int)local_38 < 0) {
                  uVar9 = 0;
                  goto LAB_015b03bc;
                }
                if (local_38 == 0) {
                  iVar16 = 1;
                  uVar8 = 0;
                }
                else {
                  iVar16 = thunk_FUN_016d4a50(local_38);
                  if (iVar16 == 0) goto LAB_015b04c0;
                  uVar8 = local_38;
                }
                FUN_016dd1aa(iVar16,local_3c,local_38);
                local_3c = iVar16;
                local_40 = uVar8;
              }
              param_1[3] = local_40;
              param_1[1] = 2;
              param_1[2] = iVar20;
              param_1[4] = local_3c;
              goto LAB_015b0418;
            }
            iVar18 = 0;
            while (*(char *)(iVar19 + iVar18) != ':') {
              iVar18 = iVar18 + 1;
              if (iVar4 == iVar18) goto LAB_015b038c;
            }
            if (iVar18 == 0) {
              puVar6 = &DAT_00000001;
              local_38 = 0;
              param_1[1] = 2;
              param_1[2] = iVar20;
              goto LAB_015b04b0;
            }
            iVar4 = iVar4 - (iVar18 + 1);
            if (iVar4 == 0) {
              puVar6 = &DAT_00000001;
              local_38 = 0;
              param_1[1] = 2;
              param_1[2] = iVar21;
LAB_015b04b0:
              param_1[3] = local_38;
              param_1[4] = puVar6;
LAB_015b0418:
              iVar16 = 0x14;
              param_2 = local_38;
LAB_015b041c:
              *(uint *)((int)param_1 + iVar16) = param_2;
              *param_1 = 5;
              if (local_50 == 0) {
                return;
              }
              thunk_FUN_016d3fb4(local_4c);
              return;
            }
            if (uVar5 == local_50) {
              FUN_015afa08(&local_50);
              local_70 = local_4c;
            }
            piVar13 = (int *)(local_70 + uVar5 * 0x20);
            *piVar13 = iVar19;
            uVar5 = uVar5 + 1;
            piVar13[1] = iVar18;
            piVar13[2] = iVar20;
            bVar17 = 1;
            piVar13[4] = iVar19 + iVar18 + 1;
            piVar13[3] = iVar18 + iVar20 + -1;
            piVar13[5] = iVar4;
            piVar13[6] = iVar18 + iVar20 + 1;
            piVar13[7] = iVar21;
            uVar8 = *puVar2;
          } while( true );
        }
        FUN_015ade58(&local_40,param_3);
        *puVar2 = local_40;
        *(int *)(param_3 + 0x30) = local_3c;
        *(uint *)(param_3 + 0x34) = local_38;
        *(undefined4 *)(param_3 + 0x38) = local_34;
        *(undefined4 *)(param_3 + 0x3c) = uStack_30;
        *(undefined4 *)(param_3 + 0x40) = uStack_2c;
        if (*(int *)(param_3 + 0x2c) == 7) {
          bVar17 = *(byte *)(param_3 + 0x30);
          bVar22 = bVar17 == 2;
          if (bVar22) {
            bVar17 = *(byte *)(param_3 + 0x31);
          }
          if (bVar22 && (bVar17 & 1) == 0) {
            *(undefined4 *)(param_3 + 0x2c) = 9;
            if (*(int *)(param_3 + 0x34) != 0) {
              FUN_015b055c(&local_40,*(undefined4 *)(param_3 + 0x40),param_3);
              uVar8 = local_38;
              iVar16 = local_3c;
              if (local_40 != 7) {
                param_1[1] = local_40;
                param_1[2] = local_3c;
                *param_1 = 5;
                param_1[3] = local_38;
                param_1[4] = local_34;
                param_1[5] = uStack_30;
                param_1[6] = uStack_2c;
                return;
              }
              uVar5 = *puVar2;
              if (uVar5 == 9) {
                FUN_015ade58(&local_40,param_3);
                *puVar2 = local_40;
                *(int *)(param_3 + 0x30) = local_3c;
                *(uint *)(param_3 + 0x34) = local_38;
                *(undefined4 *)(param_3 + 0x38) = local_34;
                *(undefined4 *)(param_3 + 0x3c) = uStack_30;
                *(undefined4 *)(param_3 + 0x40) = uStack_2c;
                uVar5 = *puVar2;
              }
              bVar22 = uVar5 == 7;
              if (bVar22) {
                uVar5 = (uint)*(byte *)(param_3 + 0x30);
              }
              if ((bVar22 && uVar5 == 1) && ((*(byte *)(param_3 + 0x31) & 1) != 0)) {
                *(undefined4 *)(param_3 + 0x2c) = 9;
                uVar9 = *(undefined4 *)(param_3 + 0x34);
                *param_1 = 3;
                param_1[1] = param_2;
                param_1[2] = uVar9;
                param_1[3] = iVar16;
                param_1[4] = uVar8;
                return;
              }
              param_1[1] = 0;
              *param_1 = 5;
              param_1[2] = param_2;
              iVar19 = uVar8 + 1;
              iVar4 = iVar16;
              while (iVar19 = iVar19 + -1, iVar19 != 0) {
                FUN_015b0af8(iVar4);
                iVar4 = iVar4 + 0x1c;
              }
              if (uVar8 == 0) {
                return;
              }
              if (iVar16 == 0) {
                return;
              }
              iVar4 = FUN_016d3bc8();
              uVar8 = *(byte *)(iVar16 + -3) & 0x1f;
              if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
                 (uVar5 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar19 = uVar5 - 0x10, uVar5 == 0))
              {
                iVar19 = (uint)*(ushort *)
                                (&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                         4;
              }
              uVar5 = (uint)(*(byte *)(iVar16 + -3) >> 5);
              iVar21 = *(int *)(iVar4 + 8) + 0x10;
              iVar20 = iVar19 * uVar8 + iVar19 + -4;
              iVar19 = iVar21 + iVar20;
              if (4 < uVar5) {
                if (uVar5 != 5) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)software_udf(0xff,0x16d4018);
                  (*pcVar1)();
                }
                uVar5 = *(uint *)(iVar19 + -4);
                if (uVar5 < 5) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)software_udf(0xff,0x16d4022);
                  (*pcVar1)();
                }
                if (*(char *)(iVar19 + -5) != '\0') {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)software_udf(0xff,0x16d402a);
                  (*pcVar1)();
                }
              }
              if ((uint)(iVar19 - iVar16) < uVar5) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xff,0x16d4032);
                (*pcVar1)();
              }
              if (*(char *)(iVar19 - uVar5) != '\0') {
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xff,0x16d403a);
                (*pcVar1)();
              }
              if (*(char *)(iVar21 + iVar20) != '\0') {
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xff,0x16d4040);
                (*pcVar1)();
              }
              bVar17 = *(byte *)(iVar4 + 0x14);
              uVar5 = 1 << uVar8;
              *(undefined1 *)(iVar16 + -3) = 0xff;
              *(undefined2 *)(iVar16 + -2) = 0;
              do {
                uVar15 = *(uint *)(iVar4 + 0x10);
                uVar14 = *(uint *)(iVar4 + 0xc) | uVar15;
                if ((uVar5 & uVar14) != 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)software_udf(0xff,0x16d4074);
                  (*pcVar1)();
                }
                if ((uVar15 == 0) || (uVar14 + uVar5 == (2 << (bVar17 & 0x1f)) + -1)) {
                  if (DAT_018ddb0b != '\0') {
                    FUN_016ddcc0(&DAT_018ddd48);
                  }
                  FUN_016d3ca8(&uStack_28,iVar4,uVar8);
                  FUN_016dddc0(&DAT_018ddd48);
                  if (unaff_r4 == 0) {
                    return;
                  }
                  puVar7 = (undefined4 *)FUN_016d2bc8();
                  uVar9 = *puVar7;
                  FUN_016d6ac4(uStack_28,unaff_r4);
                  *puVar7 = uVar9;
                  return;
                }
                if (DAT_018ddb0b == '\0') {
                  *(uint *)(iVar4 + 0x10) = uVar5 + uVar15;
                  return;
                }
                puVar2 = (uint *)(iVar4 + 0x10);
                DataMemoryBarrier(0x1b);
                do {
                  ExclusiveAccess(puVar2);
                  uVar14 = *puVar2;
                  if (uVar15 != uVar14) goto LAB_016d409c;
                  bVar22 = (bool)hasExclusiveAccess(puVar2);
                } while (!bVar22);
                *puVar2 = uVar5 + uVar15;
LAB_016d409c:
                DataMemoryBarrier(0x1b);
                if (uVar15 == uVar14) {
                  return;
                }
              } while( true );
            }
          }
        }
        uVar9 = 0x1b;
        puVar3 = &DAT_0040f6ea;
      }
      *param_1 = 5;
      param_1[1] = 5;
      param_1[2] = uVar11;
      param_1[3] = puVar3;
      param_1[4] = uVar9;
      return;
    }
  }
LAB_015afd98:
  param_1[1] = 3;
  param_1[2] = uVar5;
  *param_1 = 5;
  return;
}

