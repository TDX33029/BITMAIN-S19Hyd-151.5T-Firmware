// FUN_00bd0750 @ 00bd0750 size=1848 calls_out=19 calls_in=1
// strings: 

longlong FUN_00bd0750(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4
                     )

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  uint *puVar8;
  code *pcVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *unaff_r5;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  undefined4 *unaff_r8;
  int *piVar18;
  undefined4 *puVar20;
  undefined4 *puVar19;
  undefined4 *puVar21;
  undefined4 uVar22;
  bool bVar23;
  bool bVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  undefined4 *local_d8;
  undefined4 *local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined4 *local_78;
  int *local_74;
  undefined4 *local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 7)) {
  case 0:
    param_1[4] = *param_1;
    param_1[5] = param_1[1];
    param_1[6] = param_1[2];
    iVar3 = *(int *)(param_1[3] + 0x3c0);
    piVar18 = *(int **)(param_1[3] + 0x3bc);
    param_1[0x16] = piVar18;
    param_1[0x17] = piVar18 + iVar3;
    if (piVar18 != piVar18 + iVar3) {
      do {
        param_1[8] = piVar18;
        param_1[0x16] = piVar18 + 1;
        if (param_1[4] == -0x80000000) {
          piVar18 = (int *)thunk_FUN_016d4a50(8);
          if (piVar18 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,8);
          }
          unaff_r5 = (undefined4 *)&DAT_00000001;
          *piVar18 = 0;
          puVar6 = (undefined4 *)&DAT_00000001;
        }
        else {
          iVar3 = param_1[6];
          unaff_r5 = (undefined4 *)0x0;
          if (iVar3 != 0) {
            piVar17 = (int *)param_1[5] + iVar3 * 3;
            iVar3 = iVar3 * 0xc;
            piVar5 = (int *)param_1[5];
LAB_00bd09d8:
            piVar14 = piVar5 + 3;
            if (*piVar5 != *(int *)(*piVar18 + 0x38c)) goto code_r0x00bd09e4;
            iVar3 = piVar5[1];
            iVar12 = piVar5[2];
            piVar5 = (int *)thunk_FUN_016d4a50(0x20);
            if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(4,0x20);
            }
            unaff_r5 = (undefined4 *)&DAT_00000001;
            *piVar5 = iVar3;
            piVar5[1] = iVar12;
            local_78 = (undefined4 *)&DAT_00000004;
            local_74 = piVar5;
            while (local_70 = unaff_r5, piVar14 != piVar17) {
              piVar15 = piVar14;
              while (piVar14 = piVar15 + 3, *piVar15 != *(int *)(*piVar18 + 0x38c)) {
                piVar15 = piVar14;
                if (piVar14 == piVar17) goto LAB_00bd0aac;
              }
              iVar3 = piVar15[1];
              iVar12 = piVar15[2];
              if (unaff_r5 == local_78) {
                FUN_00d653ec(&local_78,unaff_r5,1,4,8);
                piVar5 = local_74;
              }
              iVar16 = (int)unaff_r5 * 2;
              piVar5[iVar16] = iVar3;
              unaff_r5 = (undefined4 *)((int)unaff_r5 + 1);
              (piVar5 + iVar16)[1] = iVar12;
            }
LAB_00bd0aac:
            piVar18 = local_74;
            puVar6 = local_78;
            goto LAB_00bd0ab4;
          }
LAB_00bd09f0:
          piVar18 = (int *)&DAT_00000004;
          puVar6 = (undefined4 *)0x0;
        }
LAB_00bd0ab4:
        param_1[0x18] = piVar18;
        param_1[0x19] = piVar18;
        param_1[0x1a] = puVar6;
        param_1[0x1b] = piVar18 + (int)unaff_r5 * 2;
        if (piVar18 != piVar18 + (int)unaff_r5 * 2) {
          do {
            iVar12 = *piVar18;
            iVar16 = piVar18[1];
            param_1[0x19] = piVar18 + 2;
            iVar3 = *(int *)param_1[8];
            param_1[9] = iVar12;
            iVar3 = iVar3 + 0x10;
            param_1[10] = iVar16;
            param_1[0xb] = iVar3;
            *(undefined1 *)(param_1 + 0xf) = 0;
LAB_00bd0b8c:
            param_1[0xc] = iVar12;
            param_1[0x10] = iVar3 + 900;
            param_1[0x11] = 0xffffffff;
            param_1[0xd] = iVar16;
switchD_00bd0834_caseD_3:
            iVar12 = FUN_00c8101c(param_1 + 0x10,param_2);
            if (iVar12 == 0) {
              *(undefined1 *)(param_1 + 0xf) = 3;
LAB_00bd0da8:
              uVar2 = 3;
              goto LAB_00bd0dac;
            }
            param_1[0xe] = iVar12;
            if (param_1[0x10] != 0) {
              FUN_00c8204c(param_1[0x10],param_1[0x11],1);
              iVar12 = param_1[0xe];
            }
            iVar3 = *(int *)(iVar12 + 0x20);
            if (iVar3 == 0) {
LAB_00bd0e18:
              uVar13 = 0;
              FUN_00c822ec(iVar12);
            }
            else {
              param_4 = param_1 + 0x15;
              *(undefined1 *)param_4 = 0;
              iVar3 = iVar3 + 8;
              iVar12 = param_1[0xc];
              uVar11 = param_1[0xd];
              param_1[0x10] = iVar12;
              param_1[0x11] = uVar11;
              param_1[0x12] = iVar3;
LAB_00bd0c14:
              puVar1 = DAT_018d7ef8;
              DataMemoryBarrier(0xb);
              if (DAT_018d8068 == 0) {
                uVar22 = *(undefined4 *)(iVar3 + 0x19c);
                if (iVar12 == 0) {
                  puVar7 = (undefined1 *)0x0;
                  bVar24 = (undefined1 *)0x3ffffffe < DAT_018d7ef8;
                  bVar23 = DAT_018d7ef8 == (undefined1 *)0x3fffffff;
                  if (DAT_018d7ef8 < (undefined1 *)0x40000000) {
                    param_4 = (undefined4 *)((int)DAT_018d7ef8 << 2);
                    bVar24 = (undefined4 *)0x7ffffffb < param_4;
                    bVar23 = param_4 == (undefined4 *)0x7ffffffc;
                  }
                  if (bVar24 && !bVar23) {
LAB_00bd0ec0:
                    /* WARNING: Subroutine does not return */
                    FUN_00600af4(puVar7,local_cc);
                  }
                  if (param_4 == (undefined4 *)0x0) {
                    local_cc = (undefined4 *)&DAT_00000004;
                  }
                  else {
                    local_cc = (undefined4 *)thunk_FUN_016d4a50(param_4);
                    puVar7 = puVar1;
                    if (local_cc == (undefined4 *)0x0) {
                      puVar7 = &DAT_00000004;
                      local_cc = param_4;
                      goto LAB_00bd0ec0;
                    }
                  }
                  unaff_r5 = (undefined4 *)0x0;
                  if (puVar1 == (undefined1 *)0x0) goto LAB_00bd0d54;
                  puVar10 = (undefined1 *)0x0;
                  do {
                    local_cc[(int)puVar10] = puVar10;
                    puVar10 = puVar10 + 1;
                  } while (puVar1 != puVar10);
                  puVar21 = local_cc + (int)puVar1;
                  bVar23 = puVar7 == (undefined1 *)0x0;
                  puVar6 = local_cc;
                }
                else {
                  puVar6 = (undefined4 *)thunk_FUN_016d4a50(4);
                  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600874(4,4);
                  }
                  puVar21 = puVar6 + 1;
                  *puVar6 = uVar11;
                  bVar23 = false;
                }
                puVar19 = puVar6;
                do {
                  puVar20 = puVar19 + 1;
                  FUN_009b0238(&local_c8,uVar22,*puVar19);
                  local_5c = *(undefined4 *)(local_c8 + 0x34);
                  uStack_68 = *(undefined4 *)(local_c8 + 0x24);
                  uStack_64 = *(undefined4 *)(local_c8 + 0x28);
                  local_78 = *(undefined4 **)(local_c8 + 0xc);
                  local_74 = *(int **)(local_c8 + 0x10);
                  local_70 = *(undefined4 **)(local_c8 + 0x18);
                  uStack_6c = *(undefined4 *)(local_c8 + 0x1c);
                  local_60 = *(undefined4 *)(local_c8 + 0x30);
                  piVar18 = (int *)FUN_009b4588(DAT_018d7fdc,&local_78,4);
                  puVar8 = (uint *)(piVar18 + 2);
                  do {
                    unaff_r5 = (undefined4 *)(piVar18[3] + (uint)(0xfffffffe < *puVar8));
                    bVar24 = (bool)hasExclusiveAccess(puVar8);
                  } while (!bVar24);
                  *puVar8 = *puVar8 + 1;
                  piVar18[3] = (int)unaff_r5;
                  DataMemoryBarrier(0xb);
                  do {
                    iVar16 = *piVar18;
                    bVar24 = (bool)hasExclusiveAccess(piVar18);
                  } while (!bVar24);
                  *piVar18 = iVar16 + -1;
                  if (iVar16 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_012c0df4();
                  }
                  FUN_009ccc20(local_c4);
                  puVar19 = puVar20;
                } while (puVar20 != puVar21);
                if (!bVar23) {
                  thunk_FUN_016d3fb4(puVar6);
                }
              }
LAB_00bd0d54:
              uVar25 = (**(code **)(*(int *)(iVar3 + 0x15c) + 0x24))
                                 (*(undefined4 *)(iVar3 + 0x158),iVar12,uVar11);
              *(undefined8 *)(param_1 + 0x13) = uVar25;
LAB_00bd0d74:
              local_d8 = param_1 + 0x15;
              uVar26 = (**(code **)((int)((ulonglong)uVar25 >> 0x20) + 0xc))((int)uVar25,param_2);
              uVar13 = (uint)(uVar26 >> 0x20);
              if ((uVar26 & 1) != 0) {
                *(undefined1 *)local_d8 = 3;
                *(undefined1 *)(param_1 + 0xf) = 4;
                goto LAB_00bd0da8;
              }
              puVar6 = (undefined4 *)param_1[0x14];
              uVar11 = param_1[0x13];
              pcVar9 = (code *)*puVar6;
              if (pcVar9 != (code *)0x0) {
                (*pcVar9)(uVar11);
              }
              if (puVar6[1] != 0) {
                thunk_FUN_016d3fb4(uVar11);
              }
              *(undefined1 *)(param_1 + 0x15) = 1;
              iVar12 = param_1[0xe];
              if (uVar13 == 0) goto LAB_00bd0e18;
              FUN_00c822ec(iVar12);
            }
            *(undefined1 *)(param_1 + 0xf) = 1;
            FUN_00bd3370(param_1 + 9);
            if (uVar13 != 0) {
              if (param_1[0x1a] != 0) {
                thunk_FUN_016d3fb4(param_1[0x18]);
              }
              uVar4 = param_1[4];
              goto joined_r0x00bd0f2c;
            }
            piVar18 = (int *)param_1[0x19];
            unaff_r5 = (undefined4 *)0x0;
          } while (piVar18 != (int *)param_1[0x1b]);
        }
        if (param_1[0x1a] != 0) {
          thunk_FUN_016d3fb4(param_1[0x18]);
        }
        piVar18 = (int *)param_1[0x16];
      } while (piVar18 != (int *)param_1[0x17]);
    }
    FUN_01656eb8(&local_78,&DAT_01871590,10,0,0,&DAT_01871590);
    FUN_016dd1aa(&local_c8,&local_78,0x50);
    FUN_016dd1aa(param_1 + 8,&local_c8,0x50);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01871580);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01871580);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xf)) {
    case 0:
      iVar12 = param_1[9];
      iVar16 = param_1[10];
      iVar3 = param_1[0xb];
      goto LAB_00bd0b8c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01871720);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01871720);
    case 3:
      goto switchD_00bd0834_caseD_3;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x15)) {
    case 0:
      iVar12 = param_1[0x10];
      uVar11 = param_1[0x11];
      iVar3 = param_1[0x12];
      local_cc = unaff_r8;
      goto LAB_00bd0c14;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018717e0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018717e0);
    case 3:
      uVar25 = *(undefined8 *)(param_1 + 0x13);
      goto LAB_00bd0d74;
    }
  }
  unaff_r5 = param_1 + 8;
  iVar3 = FUN_01657fc4(unaff_r5,*param_2);
  if (iVar3 != 0) {
    uVar2 = 4;
LAB_00bd0dac:
    *(undefined1 *)(param_1 + 7) = uVar2;
    return CONCAT44(unaff_r5,1);
  }
  FUN_00a07b4c(unaff_r5);
  uVar4 = param_1[4];
  uVar13 = 0;
joined_r0x00bd0f2c:
  if ((uVar4 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(param_1[5]);
  }
  *(undefined1 *)(param_1 + 7) = 1;
  return (ulonglong)uVar13 << 0x20;
code_r0x00bd09e4:
  iVar3 = iVar3 + -0xc;
  piVar5 = piVar14;
  if (iVar3 == 0) goto LAB_00bd09f0;
  goto LAB_00bd09d8;
}

