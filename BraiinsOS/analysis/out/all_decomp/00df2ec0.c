// FUN_00df2ec0 @ 00df2ec0 size=3320 calls_out=22 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage

undefined4 FUN_00df2ec0(int param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  code *pcVar13;
  undefined4 *extraout_r2;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined4 *puVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  undefined1 *puVar33;
  bool bVar34;
  bool bVar35;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double dVar36;
  undefined8 uVar37;
  ulonglong uVar38;
  undefined4 local_e4;
  undefined4 local_e0;
  int *local_c0;
  uint local_a0 [12];
  undefined4 **local_70;
  undefined1 *local_6c;
  undefined1 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  int local_50;
  undefined1 *local_40;
  undefined4 *local_34;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: unexpected stage",0x75,&DAT_018ace94);
  }
  uVar37 = thunk_FUN_016de0ee(0,0x40,param_1 + 8);
  iVar32 = (int)uVar37 + (int)((ulonglong)uVar37 >> 0x20);
  uVar18 = *extraout_r2;
  uVar24 = extraout_r2[1];
  if (*(char *)(iVar32 + 0x38) != '\x01') {
    local_e0 = 0;
    local_e4 = 0;
    if (*(char *)(iVar32 + 0x38) == '\x02') goto LAB_00df2f48;
    FUN_015e8e6c(iVar32,FUN_01655ec4);
    *(undefined1 *)(iVar32 + 0x38) = 1;
  }
  local_e0 = *(undefined4 *)(iVar32 + 0x18);
  local_e4 = *(undefined4 *)(iVar32 + 0x1c);
  *(undefined4 *)(iVar32 + 0x18) = uVar18;
  *(undefined4 *)(iVar32 + 0x1c) = uVar24;
LAB_00df2f48:
  puVar6 = extraout_r2 + 4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x84)) {
  case 0:
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
    DataMemoryBarrier(0xb);
    if (DAT_018daee8 != 0) {
      local_70 = &local_34;
      local_34 = &DAT_018daed8;
      FUN_015eedc4(&DAT_018daee8,1,&local_70,&DAT_018790b8,&DAT_018ac9b8);
    }
    uVar24 = DAT_018daee0;
    uVar18 = DAT_018daedc;
    *puVar6 = DAT_018daed8;
    extraout_r2[5] = uVar18;
    *(undefined4 *)(param_1 + 0x20) = uVar24;
    FUN_01651a54(param_1 + 0x28,&DAT_018799ac,1,0,0,&DAT_018799ac);
    *(undefined1 *)(param_1 + 0x3c) = 1;
    break;
  case 1:
switchD_00df2f68_caseD_1:
                    /* WARNING: Does not return */
    pcVar13 = (code *)software_udf(0xfdee,0xdf3d70);
    (*pcVar13)();
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018799bc);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x90)) {
    case 0:
      iVar30 = *(int *)(param_1 + 0x88);
      *(int *)(param_1 + 0x8c) = iVar30;
      goto LAB_00df36e8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01879154);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01879154);
    case 3:
      iVar30 = *(int *)(param_1 + 0x8c);
      goto LAB_00df36e8;
    }
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x94)) {
    case 0:
      goto switchD_00df3030_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01879b0c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01879b0c);
    case 3:
      goto switchD_00df3030_caseD_3;
    }
  case 5:
    goto switchD_00df2f68_caseD_5;
  case 6:
    goto switchD_00df2f68_caseD_6;
  }
LAB_00df36d0:
  do {
    *(undefined1 *)(param_1 + 0x90) = 0;
    iVar30 = param_1 + 0x28;
    *(int *)(param_1 + 0x8c) = iVar30;
    *(int *)(param_1 + 0x88) = iVar30;
LAB_00df36e8:
    FUN_016510c8(&local_70,iVar30,*param_2);
    uVar9 = 1;
    if (local_68 == &DAT_3b9aca00) {
      uVar9 = 3;
    }
    *(undefined1 *)(param_1 + 0x90) = uVar9;
    if (local_68 == &DAT_3b9aca00) {
      uVar9 = 3;
LAB_00df360c:
      cVar1 = *(char *)(iVar32 + 0x38);
      *(undefined1 *)(param_1 + 0x84) = uVar9;
      if (cVar1 != '\x01') {
        if (cVar1 == '\x02') {
          return 1;
        }
        FUN_015e8e6c(iVar32,FUN_01655ec4);
        *(undefined1 *)(iVar32 + 0x38) = 1;
      }
      *(undefined4 *)(iVar32 + 0x18) = local_e0;
      *(undefined4 *)(iVar32 + 0x1c) = local_e4;
      return 1;
    }
    DataMemoryBarrier(0xb);
    if (DAT_018d7c7c == 0) {
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(undefined4 **)(param_1 + 0x78) = &DAT_018d7c80;
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x74) + 8;
switchD_00df3030_caseD_0:
      *(int *)(param_1 + 0x8c) = **(int **)(param_1 + 0x88) + 8;
      *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
switchD_00df3030_caseD_3:
      piVar8 = (int *)(param_1 + 0x8c);
      iVar30 = FUN_00e442f8(piVar8,param_2);
      if (iVar30 == 0) {
        *(undefined1 *)(param_1 + 0x94) = 3;
        uVar9 = 4;
      }
      else {
        if (*piVar8 != 0) {
          FUN_00e44660(*piVar8,*(undefined4 *)(param_1 + 0x90),1);
        }
        uVar11 = *(uint *)(iVar30 + 0x34);
        uVar18 = 0;
        bVar35 = 0x3ffffffe < uVar11;
        bVar34 = uVar11 == 0x3fffffff;
        if (uVar11 < 0x40000000) {
          piVar8 = (int *)(uVar11 << 2);
          bVar35 = (int *)0x7ffffffb < piVar8;
          bVar34 = piVar8 == (int *)0x7ffffffc;
        }
        if (bVar35 && !bVar34) {
LAB_00df37b0:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar18,local_c0);
        }
        local_c0 = (int *)&DAT_00000004;
        uVar27 = 0;
        if (piVar8 != (int *)0x0) {
          piVar21 = *(int **)(iVar30 + 0x30);
          local_c0 = (int *)thunk_FUN_016d4a50(piVar8);
          if (local_c0 == (int *)0x0) {
            uVar18 = 4;
            local_c0 = piVar8;
            goto LAB_00df37b0;
          }
          uVar27 = uVar11;
          if (uVar11 != 0) {
            piVar8 = piVar21 + uVar11;
            iVar15 = 0;
            uVar29 = uVar11;
            do {
              if (piVar21 == piVar8) break;
              piVar17 = (int *)*piVar21;
              uVar29 = uVar29 - 1;
              do {
                iVar28 = *piVar17;
                bVar34 = (bool)hasExclusiveAccess(piVar17);
              } while (!bVar34);
              *piVar17 = iVar28 + 1;
              if (iVar28 < 0) goto switchD_00df2f68_caseD_1;
              piVar21 = piVar21 + 1;
              local_c0[iVar15] = (int)piVar17;
              iVar15 = iVar15 + 1;
            } while (uVar29 != 0);
          }
        }
        FUN_00e44900(iVar30);
        *(int **)(param_1 + 0x4c) = local_c0 + uVar11;
        *(int **)(param_1 + 0x40) = local_c0;
        *(int **)(param_1 + 0x44) = local_c0;
        *(uint *)(param_1 + 0x48) = uVar27;
        *(undefined1 *)(param_1 + 0x94) = 1;
        while( true ) {
          puVar26 = *(undefined4 **)(param_1 + 0x4c);
          puVar22 = *(undefined4 **)(param_1 + 0x44);
          while( true ) {
            if (puVar22 == puVar26) {
              *(undefined4 *)(param_1 + 0x54) = 0;
              FUN_00ef99cc(param_1 + 0x40);
              goto LAB_00df36d0;
            }
            puVar23 = puVar22 + 1;
            piVar8 = (int *)*puVar22;
            iVar30 = piVar8[2];
            iVar15 = *(int *)(piVar8[3] + 8);
            pcVar13 = *(code **)(piVar8[3] + 0x30);
            *(undefined4 **)(param_1 + 0x44) = puVar23;
            uVar38 = (*pcVar13)(iVar30 + (iVar15 - 1U & 0xfffffff8) + 8);
            uVar18 = (undefined4)(uVar38 >> 0x20);
            if ((uVar38 & 1) != 0) break;
            DataMemoryBarrier(0xb);
            do {
              iVar30 = *piVar8;
              bVar34 = (bool)hasExclusiveAccess(piVar8);
            } while (!bVar34);
            *piVar8 = iVar30 + -1;
            puVar22 = puVar23;
            if (iVar30 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0078d444(piVar8);
            }
          }
          *(undefined4 *)(param_1 + 0x7c) = uVar18;
          *(undefined4 *)(param_1 + 0x50) = uVar18;
          *(int **)(param_1 + 0x80) = piVar8;
          *(int **)(param_1 + 0x54) = piVar8;
          uVar37 = (**(code **)(piVar8[3] + 0x20))
                             (piVar8[2] + (*(int *)(piVar8[3] + 8) - 1U & 0xfffffff8) + 8);
          *(undefined8 *)(param_1 + 0x58) = uVar37;
          FUN_015f3b0c(&local_70,1);
          uVar18 = *(undefined4 *)(param_1 + 0x58);
          pcVar13 = *(code **)(*(int *)(param_1 + 0x5c) + 0x20);
          extraout_r2[0x16] = local_70;
          extraout_r2[0x17] = local_6c;
          *(undefined1 **)(param_1 + 0x68) = local_68;
          uVar18 = (*pcVar13)(uVar18);
          *(undefined4 *)(param_1 + 0x88) = uVar18;
          *(undefined1 *)(param_1 + 0x94) = 0;
switchD_00df2f68_caseD_5:
          FUN_00de925c(&local_70,param_1 + 0x88,param_2);
          iVar30 = local_50;
          if (local_40 == &DAT_3b9aca00) break;
          iVar15 = (int)local_58;
          iVar28 = local_58._4_4_;
          if ((*(char *)(param_1 + 0x94) == '\x03') && (*(int *)(param_1 + 0x8c) != 0)) {
            FUN_00e43e74(*(int *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90),1);
          }
          iVar30 = iVar30 * 0x28;
          iVar7 = iVar28 + -0x28;
          do {
            if (iVar30 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_0033fa48,0x24,&DAT_01859714);
            }
            dVar36 = *(double *)(iVar7 + 0x28);
            if (dVar36 < 0.0) {
              uVar9 = 0;
LAB_00df3d40:
              local_34 = (undefined4 *)CONCAT31(local_34._1_3_,uVar9);
              local_70 = &local_34;
              local_6c = &LAB_00fba54c;
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_00590e71,&local_70,&DAT_018868b4);
            }
            uVar11 = (uint)((ulonglong)dVar36 >> 0x20);
            uVar29 = SUB84(dVar36,0);
            puVar33 = (undefined1 *)0x0;
            uVar27 = (uVar11 & 0x7fffffff) >> 0x14;
            if (uVar27 < 0x3e0) {
              uVar11 = 0;
              uVar27 = 0;
            }
            else {
              uVar31 = uVar11 & 0xfffff | 0x100000;
              uVar14 = uVar27 - 0x3ff;
              if (uVar27 < 0x3ff) {
                local_a0[10] = 0;
                local_a0[0xb] = 0;
                local_a0[7] = 0;
                local_a0[6] = 0;
                uVar11 = uVar27 - 0x3d3 & 0x1f;
                local_a0[5] = 0;
                uVar16 = uVar11 ^ 0x1f;
                local_a0[4] = 0;
                iVar5 = -(uVar27 - 0x3d3 >> 3 & 0xc);
                uVar19 = *(uint *)((int)local_a0 + iVar5 + 0x20);
                uVar27 = *(uint *)((int)local_a0 + iVar5 + 0x28);
                uVar14 = *(uint *)((int)local_a0 + iVar5 + 0x24);
                lVar2 = (ulonglong)(uVar19 << uVar11) * 1000000000;
                uVar25 = (uint)((ulonglong)lVar2 >> 0x20);
                lVar3 = (ulonglong)(uVar14 << uVar11 | (uVar19 >> 1) >> uVar16) * 1000000000;
                uVar19 = (uint)((ulonglong)lVar3 >> 0x20);
                lVar4 = (ulonglong)(uVar27 << uVar11 | (uVar14 >> 1) >> uVar16) * 1000000000;
                uVar14 = (uint)lVar4;
                uVar38 = lVar3 + CONCAT44(uVar14,uVar25);
                uVar20 = 0;
                uVar11 = (int)((ulonglong)lVar4 >> 0x20) +
                         (*(int *)((int)local_a0 + iVar5 + 0x2c) << uVar11 | (uVar27 >> 1) >> uVar16
                         ) * 1000000000 +
                         (uint)(CARRY4(uVar14,uVar19) ||
                               CARRY4(uVar14 + uVar19,(uint)CARRY4((uint)lVar3,uVar25)));
                if ((uVar38 & 0x8000000000000000) != 0) {
                  uVar20 = (uint)(((int)lVar2 != 0 || (int)(uVar38 >> 0x20) != -0x80000000) ||
                                 (int)uVar38 != 0) | uVar11 & 1;
                }
                puVar12 = (undefined1 *)(uVar20 + uVar11);
                puVar33 = (undefined1 *)0x0;
                if (puVar12 != &DAT_3b9aca00) {
                  puVar33 = puVar12;
                }
                uVar11 = (uint)(puVar12 == &DAT_3b9aca00);
                uVar27 = 0;
                local_a0[8] = uVar29;
                local_a0[9] = uVar31;
              }
              else if (uVar27 < 0x433) {
                uVar16 = uVar29 >> (0x20 - uVar14 & 0xff) | uVar11 << (uVar14 & 0xff);
                uVar11 = uVar29 << (uVar14 & 0xff);
                if (-1 < (int)(uVar27 - 0x41f)) {
                  uVar11 = 0;
                  uVar16 = uVar29 << (uVar27 - 0x41f & 0xff);
                }
                uVar38 = (ulonglong)(uVar16 & 0xfffff) * 1000000000 +
                         ((ulonglong)uVar11 * 1000000000 >> 0x20);
                uVar19 = 0;
                uVar14 = (uint)uVar38 >> 0x14;
                uVar27 = 0x433 - uVar27;
                uVar29 = uVar29 >> (uVar27 & 0xff) | uVar31 << (0x20 - (uVar27 & 0xffff) & 0xff);
                uVar16 = (uVar27 & 0xffff) - 0x20;
                if (-1 < (int)uVar16) {
                  uVar29 = uVar31 >> (uVar16 & 0xff);
                }
                uVar31 = uVar31 >> (uVar27 & 0xff);
                if (-1 < (int)uVar16) {
                  uVar31 = 0;
                }
                if ((uVar38 & 0x80000) != 0) {
                  uVar19 = (uint)((int)((ulonglong)uVar11 * 1000000000) != 0 ||
                                 ((uint)uVar38 & 0xfffff) != 0x80000) | uVar14 & 1;
                }
                puVar12 = (undefined1 *)(uVar19 + (uVar14 | (int)(uVar38 >> 0x20) << 0xc));
                puVar33 = (undefined1 *)0x0;
                if (puVar12 != &DAT_3b9aca00) {
                  puVar33 = puVar12;
                }
                uVar11 = uVar29 + 1;
                uVar27 = uVar31 + (0xfffffffe < uVar29);
                if (puVar12 != &DAT_3b9aca00) {
                  uVar11 = uVar29;
                  uVar27 = uVar31;
                }
              }
              else {
                if (0x43e < uVar27) {
                  uVar9 = 1;
                  goto LAB_00df3d40;
                }
                uVar27 = uVar27 - 0x433;
                uVar14 = (uVar27 & 0xffff) - 0x20;
                uVar11 = uVar29 << (uVar27 & 0xff);
                uVar27 = uVar29 >> (0x20 - (uVar27 & 0xffff) & 0xff) | uVar31 << (uVar27 & 0xff);
                if (-1 < (int)uVar14) {
                  uVar11 = 0;
                  uVar27 = uVar29 << (uVar14 & 0xff);
                }
              }
            }
            puVar10 = (undefined1 *)(uVar11 ^ *puVar6 | uVar27 ^ extraout_r2[5]);
            iVar30 = iVar30 + -0x28;
            puVar12 = puVar10;
            if (puVar10 == (undefined1 *)0x0) {
              puVar12 = *(undefined1 **)(param_1 + 0x20);
            }
            iVar7 = iVar7 + 0x28;
          } while (puVar10 != (undefined1 *)0x0 || puVar33 != puVar12);
          uVar18 = FUN_011119a8();
          if (iVar15 != 0) {
            thunk_FUN_016d3fb4(iVar28);
          }
          local_5c = 0;
          local_70 = (undefined4 **)*puVar6;
          local_6c = (undefined1 *)extraout_r2[5];
          local_68 = *(undefined1 **)(param_1 + 0x20);
          local_60 = 4;
          local_58 = (double)CONCAT44(extraout_s1_00,uVar18) * 1e-09;
          FUN_0077efb8(*(undefined4 *)(*(int *)(param_1 + 0x78) + 0x90),
                       *(undefined4 *)(param_1 + 0x7c),0,&local_70);
          uVar18 = (**(code **)(*(int *)(param_1 + 0x5c) + 0x24))(*(undefined4 *)(param_1 + 0x58));
          *(undefined4 *)(param_1 + 0x88) = uVar18;
          *(undefined1 *)(param_1 + 0x94) = 0;
switchD_00df2f68_caseD_6:
          FUN_00de925c(&local_70,param_1 + 0x88,param_2);
          iVar30 = local_50;
          if (local_40 == &DAT_3b9aca00) {
            uVar9 = 6;
            goto LAB_00df360c;
          }
          iVar15 = (int)local_58;
          iVar28 = local_58._4_4_;
          if ((*(char *)(param_1 + 0x94) == '\x03') && (*(int *)(param_1 + 0x8c) != 0)) {
            FUN_00e43e74(*(int *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90),1);
          }
          iVar30 = iVar30 * 0x28;
          iVar7 = iVar28 + -0x28;
          do {
            if (iVar30 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_0033fa48,0x24,&DAT_01859714);
            }
            dVar36 = *(double *)(iVar7 + 0x28);
            if (dVar36 < 0.0) {
              uVar9 = 0;
LAB_00df35a8:
              local_34 = (undefined4 *)CONCAT31(local_34._1_3_,uVar9);
              local_70 = &local_34;
              local_6c = &LAB_00fba54c;
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_00590e71,&local_70,&DAT_018868b4);
            }
            uVar11 = (uint)((ulonglong)dVar36 >> 0x20);
            uVar29 = SUB84(dVar36,0);
            puVar33 = (undefined1 *)0x0;
            uVar27 = (uVar11 & 0x7fffffff) >> 0x14;
            if (uVar27 < 0x3e0) {
              uVar11 = 0;
              uVar27 = 0;
            }
            else {
              uVar31 = uVar11 & 0xfffff | 0x100000;
              uVar14 = uVar27 - 0x3ff;
              if (uVar27 < 0x3ff) {
                local_a0[3] = 0;
                local_a0[2] = 0;
                uVar11 = uVar27 - 0x3d3 & 0x1f;
                uVar16 = uVar11 ^ 0x1f;
                iVar5 = -(uVar27 - 0x3d3 >> 3 & 0xc);
                uVar27 = *(uint *)((int)local_a0 + iVar5 + 8);
                uVar14 = *(uint *)((int)local_a0 + iVar5 + 4);
                lVar2 = (ulonglong)(*(uint *)((int)local_a0 + iVar5) << uVar11) * 1000000000;
                uVar25 = (uint)((ulonglong)lVar2 >> 0x20);
                lVar3 = (ulonglong)
                        (uVar14 << uVar11 | (*(uint *)((int)local_a0 + iVar5) >> 1) >> uVar16) *
                        1000000000;
                uVar19 = (uint)((ulonglong)lVar3 >> 0x20);
                lVar4 = (ulonglong)(uVar27 << uVar11 | (uVar14 >> 1) >> uVar16) * 1000000000;
                uVar14 = (uint)lVar4;
                uVar38 = lVar3 + CONCAT44(uVar14,uVar25);
                uVar20 = 0;
                uVar11 = (int)((ulonglong)lVar4 >> 0x20) +
                         (*(int *)((int)local_a0 + iVar5 + 0xc) << uVar11 | (uVar27 >> 1) >> uVar16)
                         * 1000000000 +
                         (uint)(CARRY4(uVar14,uVar19) ||
                               CARRY4(uVar14 + uVar19,(uint)CARRY4((uint)lVar3,uVar25)));
                if ((uVar38 & 0x8000000000000000) != 0) {
                  uVar20 = (uint)(((int)lVar2 != 0 || (int)(uVar38 >> 0x20) != -0x80000000) ||
                                 (int)uVar38 != 0) | uVar11 & 1;
                }
                puVar12 = (undefined1 *)(uVar20 + uVar11);
                puVar33 = (undefined1 *)0x0;
                if (puVar12 != &DAT_3b9aca00) {
                  puVar33 = puVar12;
                }
                uVar11 = (uint)(puVar12 == &DAT_3b9aca00);
                uVar27 = 0;
                local_a0[0] = uVar29;
                local_a0[1] = uVar31;
              }
              else if (uVar27 < 0x433) {
                uVar16 = uVar29 >> (0x20 - uVar14 & 0xff) | uVar11 << (uVar14 & 0xff);
                uVar11 = uVar29 << (uVar14 & 0xff);
                if (-1 < (int)(uVar27 - 0x41f)) {
                  uVar11 = 0;
                  uVar16 = uVar29 << (uVar27 - 0x41f & 0xff);
                }
                uVar38 = (ulonglong)(uVar16 & 0xfffff) * 1000000000 +
                         ((ulonglong)uVar11 * 1000000000 >> 0x20);
                uVar19 = 0;
                uVar14 = (uint)uVar38 >> 0x14;
                uVar27 = 0x433 - uVar27;
                uVar29 = uVar29 >> (uVar27 & 0xff) | uVar31 << (0x20 - (uVar27 & 0xffff) & 0xff);
                uVar16 = (uVar27 & 0xffff) - 0x20;
                if (-1 < (int)uVar16) {
                  uVar29 = uVar31 >> (uVar16 & 0xff);
                }
                uVar31 = uVar31 >> (uVar27 & 0xff);
                if (-1 < (int)uVar16) {
                  uVar31 = 0;
                }
                if ((uVar38 & 0x80000) != 0) {
                  uVar19 = (uint)((int)((ulonglong)uVar11 * 1000000000) != 0 ||
                                 ((uint)uVar38 & 0xfffff) != 0x80000) | uVar14 & 1;
                }
                puVar12 = (undefined1 *)(uVar19 + (uVar14 | (int)(uVar38 >> 0x20) << 0xc));
                puVar33 = (undefined1 *)0x0;
                if (puVar12 != &DAT_3b9aca00) {
                  puVar33 = puVar12;
                }
                uVar11 = uVar29 + 1;
                uVar27 = uVar31 + (0xfffffffe < uVar29);
                if (puVar12 != &DAT_3b9aca00) {
                  uVar11 = uVar29;
                  uVar27 = uVar31;
                }
              }
              else {
                if (0x43e < uVar27) {
                  uVar9 = 1;
                  goto LAB_00df35a8;
                }
                uVar27 = uVar27 - 0x433;
                uVar14 = (uVar27 & 0xffff) - 0x20;
                uVar11 = uVar29 << (uVar27 & 0xff);
                uVar27 = uVar29 >> (0x20 - (uVar27 & 0xffff) & 0xff) | uVar31 << (uVar27 & 0xff);
                if (-1 < (int)uVar14) {
                  uVar11 = 0;
                  uVar27 = uVar29 << (uVar14 & 0xff);
                }
              }
            }
            puVar10 = (undefined1 *)(uVar11 ^ *puVar6 | uVar27 ^ extraout_r2[5]);
            iVar30 = iVar30 + -0x28;
            puVar12 = puVar10;
            if (puVar10 == (undefined1 *)0x0) {
              puVar12 = *(undefined1 **)(param_1 + 0x20);
            }
            iVar7 = iVar7 + 0x28;
          } while (puVar10 != (undefined1 *)0x0 || puVar33 != puVar12);
          uVar18 = FUN_011119a8();
          if (iVar15 != 0) {
            thunk_FUN_016d3fb4(iVar28);
          }
          local_5c = 0;
          local_70 = (undefined4 **)*puVar6;
          local_6c = (undefined1 *)extraout_r2[5];
          local_68 = *(undefined1 **)(param_1 + 0x20);
          local_60 = 4;
          local_58 = (double)CONCAT44(extraout_s1,uVar18) * 1e-09;
          FUN_0077efb8(*(undefined4 *)(*(int *)(param_1 + 0x78) + 0x90),
                       *(undefined4 *)(param_1 + 0x7c),1,&local_70);
          piVar8 = *(int **)(param_1 + 0x80);
          DataMemoryBarrier(0xb);
          do {
            iVar30 = *piVar8;
            bVar34 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar34);
          *piVar8 = iVar30 + -1;
          if (iVar30 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0078d444(*(undefined4 *)(param_1 + 0x80));
          }
        }
        uVar9 = 5;
      }
      goto LAB_00df360c;
    }
  } while( true );
}

