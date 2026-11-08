// FUN_0066c7b0 @ 0066c7b0 size=4760 calls_out=40 calls_in=1
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers. | failed to write frame to transport | failed to write frame to transport | failed to write frame to transport | V1 send timeout

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0066c7b0(int param_1,int *param_2)

{
  code *pcVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  byte bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  byte *pbVar17;
  int *piVar18;
  int *piVar19;
  uint uVar20;
  int *piVar21;
  int iVar22;
  byte bVar23;
  ulonglong *puVar24;
  bool bVar25;
  undefined8 uVar26;
  int *local_2e0;
  int *local_2d4;
  undefined1 *local_2d0;
  int local_2c8;
  int *local_200;
  undefined4 uStack_1fc;
  int *piStack_1f8;
  int iStack_1f4;
  undefined4 uStack_1f0;
  undefined8 local_198;
  int *local_190;
  int iStack_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  int *local_180;
  int *piStack_17c;
  int *piStack_178;
  undefined4 local_148;
  int *local_130;
  int iStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  int *piStack_120;
  int *piStack_11c;
  int *piStack_118;
  int *local_110;
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  int *piStack_100;
  int *piStack_fc;
  int *piStack_f8;
  char local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  int *local_dc;
  int *local_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  int *piStack_b0;
  int *piStack_ac;
  int *piStack_a8;
  int *local_a0;
  int *local_9c;
  int *local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  int *piStack_88;
  int *piStack_84;
  int *piStack_80;
  int *local_78;
  int *local_74;
  int *local_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x970)) {
  case 0:
    FUN_016dd1aa(param_1 + 600,param_1,600);
    *(undefined1 *)(param_1 + 0x7b0) = 0;
switchD_0066c98c_caseD_0:
    local_2c8 = param_1 + 600;
    *(undefined4 *)(param_1 + 0x7b2) = 0x1000000;
    FUN_016dd1aa(param_1 + 0x4b0,local_2c8,600);
    *(undefined1 *)(param_1 + 0x7b5) = 0;
    FUN_016dd1aa(&iStack_18c,param_1 + 0x6b8,0x44);
    local_148 = 0;
    local_190 = (int *)&DAT_00000001;
    local_198._4_4_ = (int *)0x1;
    local_198._0_4_ = (int *)0x1;
    local_200 = (int *)thunk_FUN_016d4a50(0x54);
    if (local_200 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x54);
    }
    FUN_016dd1aa(local_200,&local_198,0x54);
    do {
      iVar10 = *local_200;
      bVar25 = (bool)hasExclusiveAccess(local_200);
    } while (!bVar25);
    *local_200 = iVar10 + 1;
    if (iVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x66cae8);
      (*pcVar1)();
    }
    *(int **)(param_1 + 0x71c) = local_200;
    *(undefined4 *)(param_1 + 0x708) = 0;
    *(undefined1 *)(param_1 + 0x7b4) = 0;
    FUN_0165a798(&local_198);
    piVar19 = local_190;
    iVar10 = (int)(int *)local_198 + 0x96;
    uVar20 = (int)local_198._4_4_ + (uint)(0xffffff69 < (int *)local_198);
    if ((int)(((uint)local_198._4_4_ ^ uVar20) & ~(uint)local_198._4_4_) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
    }
    local_198 = FUN_0164ec90(&DAT_01858de0);
    iVar22 = (int)(local_198 >> 0x20);
    iVar15 = 0x180;
    if ((local_198 & 1) != 0) {
      iVar15 = 0xb8;
    }
    if (*(undefined1 **)(iVar22 + iVar15 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                   ,0x73,&DAT_01858de0);
    }
    *(int *)(param_1 + 0x758) = iVar10;
    *(undefined4 *)(param_1 + 0x720) = 0;
    *(undefined4 *)(param_1 + 0x724) = 0;
    *(int *)(param_1 + 0x750) = (int)local_198;
    *(undefined1 *)(param_1 + 0x784) = 1;
    *(uint *)(param_1 + 0x75c) = uVar20;
    *(undefined4 *)(param_1 + 0x770) = 0x96;
    *(undefined4 *)(param_1 + 0x774) = 0;
    *(int *)(param_1 + 0x754) = iVar22;
    *(undefined1 *)(param_1 + 0x768) = 0;
    *(int **)(param_1 + 0x760) = piVar19;
    *(undefined4 **)(param_1 + 0x788) = (undefined4 *)(param_1 + 0x720);
    *(int **)(param_1 + 0x780) = local_200;
    *(undefined4 *)(param_1 + 0x778) = 0;
    goto LAB_0066d540;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018584fc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018584fc);
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_1 + 0x7b0)) {
  case 0:
    goto switchD_0066c98c_caseD_0;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018584bc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018584bc);
  case 3:
    pbVar17 = *(byte **)(param_1 + 0x7c4);
    piVar19 = *(int **)(param_1 + 0x7c8);
    iVar10 = param_1;
    goto LAB_0066d568;
  case 4:
    FUN_0066e72c(&local_198,param_1 + 0x7e0);
    piVar7 = piStack_178;
    piVar6 = piStack_17c;
    piVar5 = local_180;
    uVar12 = uStack_188;
    iVar10 = iStack_18c;
    piVar18 = local_190;
    piVar21 = local_198._4_4_;
    piVar19 = (int *)local_198;
    if ((int *)local_198 != (int *)&DAT_00000012) {
      FUN_00658560(param_1 + 0x7e0);
      if (piVar19 == (int *)&DAT_00000011) {
        *(undefined1 *)(param_1 + 0x7b3) = 0;
        if (*(int *)(param_1 + 0x7b8) != -0x7ffffff2) {
          *(undefined1 *)(param_1 + 0x7b2) = 0;
        }
        *(undefined1 *)(param_1 + 0x7b2) = 0;
        break;
      }
      local_198._0_4_ = piVar19;
      local_198._4_4_ = piVar21;
      local_190 = piVar18;
      iStack_18c = iVar10;
      uStack_188 = uVar12;
      local_180 = piVar5;
      piStack_17c = piVar6;
      piStack_178 = piVar7;
      puVar16 = (undefined4 *)FUN_00733468(&local_198);
      *(undefined1 *)(param_1 + 0x7b3) = 0;
      if (*(int *)(param_1 + 0x7b8) != -0x7ffffff2) {
        *(undefined1 *)(param_1 + 0x7b2) = 0;
      }
      *(undefined1 *)(param_1 + 0x7b2) = 0;
LAB_0066ded0:
      piVar19 = *(int **)(param_1 + 0x780);
      if (piVar19 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar19;
          bVar25 = (bool)hasExclusiveAccess(piVar19);
        } while (!bVar25);
        *piVar19 = iVar10 + -1;
        if (iVar10 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078da6c();
        }
      }
      FUN_00a07b4c(param_1 + 0x720);
      *(undefined1 *)(param_1 + 0x7b4) = 0;
      piVar19 = *(int **)(param_1 + 0x71c);
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar19;
        bVar25 = (bool)hasExclusiveAccess(piVar19);
      } while (!bVar25);
      *piVar19 = iVar10 + -1;
      if (iVar10 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078da6c();
      }
      if (*(int *)(param_1 + 0x708) != 0) {
        if (*(int *)(param_1 + 0x70c) == 0) {
          piVar19 = *(int **)(param_1 + 0x710);
          DataMemoryBarrier(0xb);
          do {
            iVar10 = *piVar19;
            bVar25 = (bool)hasExclusiveAccess(piVar19);
          } while (!bVar25);
          *piVar19 = iVar10 + -1;
          if (iVar10 == 1) {
            DataMemoryBarrier(0xb);
            FUN_015614d8(*(undefined4 *)(param_1 + 0x710),*(undefined4 *)(param_1 + 0x714));
          }
        }
        else {
          piVar19 = *(int **)(param_1 + 0x718);
          if (((uint)piVar19 & 1) == 0) {
            piVar21 = piVar19 + 4;
            DataMemoryBarrier(0xb);
            do {
              iVar10 = *piVar21;
              bVar25 = (bool)hasExclusiveAccess(piVar21);
            } while (!bVar25);
            *piVar21 = iVar10 + -1;
            if (iVar10 == 1) {
              DataMemoryBarrier(0xb);
              if (*piVar19 != 0) {
                thunk_FUN_016d3fb4(piVar19[1]);
              }
              goto LAB_0066e024;
            }
          }
          else if (*(int *)(param_1 + 0x714) + ((uint)piVar19 >> 5) != 0) {
            piVar19 = (int *)(*(int *)(param_1 + 0x70c) - ((uint)piVar19 >> 5));
LAB_0066e024:
            thunk_FUN_016d3fb4(piVar19);
          }
        }
      }
      FUN_006588d4(param_1 + 0x4b0);
      piVar21 = (int *)(param_1 + 0x6fc);
      FUN_006bf9f0(piVar21);
      piVar19 = (int *)*piVar21;
      if (piVar19 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar19;
          bVar25 = (bool)hasExclusiveAccess(piVar19);
        } while (!bVar25);
        *piVar19 = iVar10 + -1;
        if (iVar10 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0113b314(*piVar21);
        }
      }
      piVar21 = (int *)(param_1 + 0x700);
      FUN_006c0a90(piVar21);
      piVar19 = (int *)*piVar21;
      if (piVar19 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar19;
          bVar25 = (bool)hasExclusiveAccess(piVar19);
        } while (!bVar25);
        *piVar19 = iVar10 + -1;
        if (iVar10 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0113b19c(*piVar21);
        }
      }
      *(undefined1 *)(param_1 + 0x7b0) = 1;
      *(undefined1 *)(param_1 + 0x7b5) = 0;
      uVar12 = 0;
      FUN_0065809c(param_1 + 600);
      uVar9 = 1;
      if (puVar16 != (undefined4 *)0x0) {
        (**(code **)*puVar16)(puVar16);
      }
      goto LAB_0066e114;
    }
    uVar9 = 4;
    goto LAB_0066d518;
  case 5:
    FUN_006750e0(&local_198,param_1 + 2000);
    piVar7 = piStack_178;
    piVar6 = piStack_17c;
    piVar5 = local_180;
    uVar12 = uStack_188;
    iVar10 = iStack_18c;
    piVar18 = local_190;
    piVar21 = local_198._4_4_;
    piVar19 = (int *)local_198;
    if ((int *)local_198 == (int *)&DAT_00000012) {
      uVar9 = 5;
      goto LAB_0066d518;
    }
    FUN_00658798(param_1 + 2000);
    if (piVar19 != (int *)&DAT_00000011) {
      local_198._0_4_ = piVar19;
      local_198._4_4_ = piVar21;
      local_190 = piVar18;
      iStack_18c = iVar10;
      uStack_188 = uVar12;
      local_180 = piVar5;
      piStack_17c = piVar6;
      piStack_178 = piVar7;
      puVar16 = (undefined4 *)FUN_00733468(&local_198);
      goto LAB_0066ded0;
    }
    break;
  case 6:
    uVar26 = thunk_FUN_016de0ee((&switchD_0066c98c::switchdataD_0066c990)
                                [*(byte *)(param_1 + 0x7b0)],0x40);
    iVar10 = (int)uVar26 + (int)((ulonglong)uVar26 >> 0x20);
    if (*(char *)(iVar10 + 0x38) == '\x01') {
LAB_0066cc08:
      bVar25 = *(char *)(iVar10 + 0x31) != '\0';
      bVar8 = ~*(byte *)(iVar10 + 0x30) & 1 | bVar25;
      bVar23 = ~*(byte *)(iVar10 + 0x30) & 1 | bVar25;
      iVar10 = *(int *)(param_1 + 0x820);
    }
    else {
      if (*(char *)(iVar10 + 0x38) != '\x02') {
        FUN_015e8e6c(iVar10,FUN_009948a0);
        *(undefined1 *)(iVar10 + 0x38) = 1;
        goto LAB_0066cc08;
      }
      iVar10 = *(int *)(param_1 + 0x820);
      bVar8 = 2;
      bVar23 = 0;
    }
    if (iVar10 != 0) {
      piVar19 = *(int **)(param_1 + 0x834);
      if (*piVar19 == 0) {
        *(undefined4 *)(param_1 + 0x820) = 0;
      }
      else {
        iVar10 = *param_2;
        puVar16 = (undefined4 *)((uint)&local_78 | 4);
        do {
          piVar21 = (int *)FUN_00bdee68(piVar19 + 5,iVar10);
          if (piVar21 == (int *)0x0) {
            piVar18 = (int *)&DAT_8000000d;
            goto LAB_0066d1d0;
          }
          iVar22 = *piVar21;
          if (*(int *)(iVar22 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_01871438);
          }
          if (*(uint *)(iVar22 + 0x2c) < *(uint *)(iVar22 + 0x38)) {
LAB_0066cccc:
            local_198._0_4_ = (int *)piVar19[1];
            local_198._4_4_ = (int *)piVar19[2];
            local_190 = (int *)piVar19[3];
            iStack_18c = piVar19[4];
            *piVar19 = 0;
            FUN_007b2ea8(&local_78,iVar22 + 0xc,&local_198);
            piVar18 = local_78;
          }
          else {
            do {
              if (*(int *)(iVar22 + 0x2c) == 0) goto LAB_0066cccc;
              FUN_00754020(&local_a0,iVar22 + 0xc,param_2,iVar22 + 0x28);
              if (((uint)local_a0 & 0xff) == 5) {
                piVar18 = (int *)&DAT_8000000d;
                goto LAB_0066cda0;
              }
              if (((uint)local_a0 & 0xff) != 4) {
                local_198._4_4_ =
                     (int *)CONCAT31(*(undefined3 *)((uint)&local_a0 | 1),local_a0._0_1_);
                local_190 = local_9c;
                local_198._0_4_ = (int *)&DAT_80000000;
                goto LAB_0066cd84;
              }
            } while (local_9c != (int *)0x0);
            FUN_015e79d4((int)&local_198 + 4,0x17,"failed to write frame to transport",0x22);
LAB_0066cd84:
            *puVar16 = local_198._4_4_;
            puVar16[1] = local_190;
            puVar16[2] = iStack_18c;
            puVar16[3] = uStack_188;
            puVar16[4] = local_184;
            puVar16[5] = local_180;
            puVar16[6] = piStack_17c;
            puVar16[7] = piStack_178;
            piVar18 = (int *)&DAT_80000000;
          }
LAB_0066cda0:
          DataMemoryBarrier(0xb);
          puVar11 = (undefined4 *)(*piVar21 + 0x50);
          do {
            piVar21 = (int *)*puVar11;
            bVar25 = (bool)hasExclusiveAccess(puVar11);
          } while (!bVar25);
          *puVar11 = 0;
          DataMemoryBarrier(0xb);
          if (piVar21 != (int *)&DAT_00000001) {
            if (piVar21 == (int *)0x0) goto LAB_0066d444;
            (**(code **)(*piVar21 + 4))(piVar21[1]);
            thunk_FUN_016d3fb4(piVar21);
          }
          if (piVar18 != (int *)&DAT_8000000c) {
            if (piVar18 != (int *)&DAT_8000000d) {
              local_2d4 = local_74;
              local_c0 = local_70;
              iStack_bc = iStack_6c;
              uStack_b8 = uStack_68;
              local_b4 = local_64;
              piStack_b0 = piStack_60;
              piStack_ac = piStack_5c;
              piStack_a8 = piStack_58;
            }
            goto LAB_0066d1d0;
          }
        } while (*piVar19 != 0);
        uVar20 = *(uint *)(param_1 + 0x820);
        *(undefined4 *)(param_1 + 0x820) = 0;
        if ((uVar20 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_004090e8,0x1c,&DAT_018a5da0);
        }
        if (*piVar19 != 0) {
          if (piVar19[1] == 0) {
            piVar21 = (int *)piVar19[2];
            DataMemoryBarrier(0xb);
            do {
              iVar10 = *piVar21;
              bVar25 = (bool)hasExclusiveAccess(piVar21);
            } while (!bVar25);
            *piVar21 = iVar10 + -1;
            if (iVar10 == 1) {
              DataMemoryBarrier(0xb);
              FUN_015614d8(piVar19[2],piVar19[3]);
            }
          }
          else {
            piVar21 = (int *)piVar19[4];
            if (((uint)piVar21 & 1) == 0) {
              piVar18 = piVar21 + 4;
              DataMemoryBarrier(0xb);
              do {
                iVar10 = *piVar18;
                bVar25 = (bool)hasExclusiveAccess(piVar18);
              } while (!bVar25);
              *piVar18 = iVar10 + -1;
              if (iVar10 == 1) {
                DataMemoryBarrier(0xb);
                if (*piVar21 != 0) {
                  thunk_FUN_016d3fb4(piVar21[1]);
                }
                goto LAB_0066d42c;
              }
            }
            else if (piVar19[3] + ((uint)piVar21 >> 5) != 0) {
              piVar21 = (int *)(piVar19[1] - ((uint)piVar21 >> 5));
LAB_0066d42c:
              thunk_FUN_016d3fb4(piVar21);
            }
          }
        }
      }
      *piVar19 = 1;
      iVar10 = *(int *)(param_1 + 0x828);
      iVar22 = *(int *)(param_1 + 0x82c);
      iVar15 = *(int *)(param_1 + 0x830);
      piVar19[1] = *(int *)(param_1 + 0x824);
      piVar19[2] = iVar10;
      piVar19[3] = iVar22;
      piVar19[4] = iVar15;
    }
    piVar21 = *(int **)(param_1 + 0x834);
    piVar19 = (int *)FUN_00bdee68(piVar21 + 5,*param_2);
    piVar18 = (int *)&DAT_8000000d;
    if (piVar19 == (int *)0x0) {
LAB_0066d1d0:
      if (piVar18 == (int *)&DAT_8000000d) {
        iVar10 = FUN_016540e8(bVar8 == 2 | bVar23,param_1 + 2000,*param_2);
        piVar18 = (int *)&DAT_8000000d;
        if (iVar10 != 0) goto LAB_0066d238;
      }
      else {
        local_130 = local_c0;
        iStack_12c = iStack_bc;
        uStack_128 = uStack_b8;
        local_124 = local_b4;
        piStack_120 = piStack_b0;
        piStack_11c = piStack_ac;
        piStack_118 = piStack_a8;
        local_2e0 = local_2d4;
        if (piVar18 == (int *)0x8000000e) {
LAB_0066d238:
          uVar9 = 6;
          goto LAB_0066d518;
        }
      }
    }
    else {
      iVar10 = *piVar19;
      if (*(int *)(iVar10 + 8) != 1) goto LAB_0066d460;
      if (*piVar21 == 0) {
LAB_0066d090:
        iVar10 = *piVar19;
        if (*(int *)(iVar10 + 8) == 0) {
LAB_0066d460:
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01871438);
        }
        do {
          if (*(int *)(iVar10 + 0x2c) == 0) {
            local_a0 = (int *)&DAT_8000000c;
            goto LAB_0066d14c;
          }
          FUN_00754020(&local_198,iVar10 + 0xc,param_2,iVar10 + 0x28);
          if (((uint)(int *)local_198 & 0xff) == 5) {
            local_a0 = (int *)&DAT_8000000d;
            goto LAB_0066d14c;
          }
          if (((uint)(int *)local_198 & 0xff) != 4) {
            local_98 = local_198._4_4_;
            local_a0 = (int *)&DAT_80000000;
            local_9c = (int *)local_198;
            goto LAB_0066d14c;
          }
        } while (local_198._4_4_ != (int *)0x0);
        FUN_015e79d4((uint)&local_a0 | 4,0x17,"failed to write frame to transport",0x22);
        local_a0 = (int *)&DAT_80000000;
LAB_0066d14c:
        DataMemoryBarrier(0xb);
        puVar16 = (undefined4 *)(*piVar19 + 0x50);
        do {
          piVar19 = (int *)*puVar16;
          bVar25 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar25);
        *puVar16 = 0;
        DataMemoryBarrier(0xb);
        if (piVar19 != (int *)&DAT_00000001) {
          if (piVar19 == (int *)0x0) {
LAB_0066d444:
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_00350078,0x16,&DAT_01871418);
          }
          (**(code **)(*piVar19 + 4))(piVar19[1]);
          goto LAB_0066d190;
        }
      }
      else {
        if (*(uint *)(iVar10 + 0x2c) < *(uint *)(iVar10 + 0x38)) {
LAB_0066cee4:
          local_198._0_4_ = (int *)piVar21[1];
          local_198._4_4_ = (int *)piVar21[2];
          local_190 = (int *)piVar21[3];
          iStack_18c = piVar21[4];
          *piVar21 = 0;
          FUN_007b2ea8(&local_78,iVar10 + 0xc,&local_198);
          local_a0 = local_78;
        }
        else {
          do {
            if (*(int *)(iVar10 + 0x2c) == 0) goto LAB_0066cee4;
            FUN_00754020(&local_e0,iVar10 + 0xc,param_2,iVar10 + 0x28);
            if (local_e0 == '\x05') {
              local_a0 = (int *)&DAT_8000000d;
              goto LAB_0066d014;
            }
            if (local_e0 != '\x04') {
              local_190 = local_dc;
              local_198._0_4_ = (int *)&DAT_80000000;
              local_198._4_4_ = (int *)CONCAT31(CONCAT12(local_dd,local_df),local_e0);
              goto LAB_0066cff0;
            }
          } while (local_dc != (int *)0x0);
          FUN_015e79d4((int)&local_198 + 4,0x17,"failed to write frame to transport",0x22);
LAB_0066cff0:
          local_74 = local_198._4_4_;
          local_70 = local_190;
          iStack_6c = iStack_18c;
          uStack_68 = uStack_188;
          local_a0 = (int *)&DAT_80000000;
          local_64 = local_184;
          piStack_60 = local_180;
          piStack_5c = piStack_17c;
          piStack_58 = piStack_178;
        }
LAB_0066d014:
        if (local_a0 == (int *)&DAT_8000000c) goto LAB_0066d090;
        if (local_a0 != (int *)&DAT_8000000d) {
          puVar16 = (undefined4 *)((uint)&local_a0 | 4);
          *puVar16 = local_74;
          puVar16[1] = local_70;
          puVar16[2] = iStack_6c;
          puVar16[3] = uStack_68;
          puVar16[4] = local_64;
          puVar16[5] = piStack_60;
          puVar16[6] = piStack_5c;
          puVar16[7] = piStack_58;
        }
        DataMemoryBarrier(0xb);
        puVar16 = (undefined4 *)(*piVar19 + 0x50);
        do {
          piVar19 = (int *)*puVar16;
          bVar25 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar25);
        *puVar16 = 0;
        DataMemoryBarrier(0xb);
        if (piVar19 != (int *)&DAT_00000001) {
          if (piVar19 == (int *)0x0) goto LAB_0066d444;
          (**(code **)(*piVar19 + 4))(piVar19[1]);
LAB_0066d190:
          thunk_FUN_016d3fb4(piVar19);
        }
      }
      if (local_a0 != (int *)&DAT_8000000c) {
        piVar18 = local_a0;
        if (local_a0 != (int *)&DAT_8000000d) {
          local_2d4 = local_9c;
          local_c0 = local_98;
          iStack_bc = iStack_94;
          uStack_b8 = uStack_90;
          local_b4 = local_8c;
          piStack_b0 = piStack_88;
          piStack_ac = piStack_84;
          piStack_a8 = piStack_80;
        }
        goto LAB_0066d1d0;
      }
      local_130 = local_c0;
      iStack_12c = iStack_bc;
      uStack_128 = uStack_b8;
      local_124 = local_b4;
      piStack_120 = piStack_b0;
      piStack_11c = piStack_ac;
      piStack_118 = piStack_a8;
      piVar18 = (int *)&DAT_8000000c;
      local_2e0 = local_2d4;
    }
    local_110 = local_130;
    iStack_10c = iStack_12c;
    uStack_108 = uStack_128;
    local_104 = local_124;
    piStack_100 = piStack_120;
    piStack_fc = piStack_11c;
    piStack_f8 = piStack_118;
    if (*(int *)(param_1 + 0x820) != 0) {
      if (*(int *)(param_1 + 0x824) == 0) {
        piVar19 = *(int **)(param_1 + 0x828);
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar19;
          bVar25 = (bool)hasExclusiveAccess(piVar19);
        } while (!bVar25);
        *piVar19 = iVar10 + -1;
        if (iVar10 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015614d8(*(undefined4 *)(param_1 + 0x828),*(undefined4 *)(param_1 + 0x82c));
        }
      }
      else {
        piVar19 = *(int **)(param_1 + 0x830);
        if (((uint)piVar19 & 1) == 0) {
          piVar21 = piVar19 + 4;
          DataMemoryBarrier(0xb);
          do {
            iVar10 = *piVar21;
            bVar25 = (bool)hasExclusiveAccess(piVar21);
          } while (!bVar25);
          *piVar21 = iVar10 + -1;
          if (iVar10 == 1) {
            DataMemoryBarrier(0xb);
            if (*piVar19 != 0) {
              thunk_FUN_016d3fb4(piVar19[1]);
            }
            goto LAB_0066d350;
          }
        }
        else if (*(int *)(param_1 + 0x82c) + ((uint)piVar19 >> 5) != 0) {
          piVar19 = (int *)(*(int *)(param_1 + 0x824) - ((uint)piVar19 >> 5));
LAB_0066d350:
          thunk_FUN_016d3fb4(piVar19);
        }
      }
    }
    FUN_00a07b4c(param_1 + 2000);
    if (piVar18 != (int *)&DAT_8000000c) {
      if (piVar18 == (int *)&DAT_8000000d) {
        puVar16 = (undefined4 *)FUN_0072f9b8("V1 send timeout",0xf);
      }
      else {
        local_190 = local_110;
        iStack_18c = iStack_10c;
        uStack_188 = uStack_108;
        local_184 = local_104;
        local_180 = piStack_100;
        piStack_17c = piStack_fc;
        piStack_178 = piStack_f8;
        local_198._4_4_ = local_2e0;
        local_198._0_4_ = piVar18;
        puVar16 = (undefined4 *)FUN_0072fbb0();
      }
      goto LAB_0066ded0;
    }
  }
LAB_0066d540:
  pbVar17 = (byte *)(param_1 + 0x7b1);
  *pbVar17 = 0;
  *(int *)(param_1 + 0x7bc) = param_1 + 0x700;
  piVar19 = (int *)(param_1 + 0x7b8);
  *piVar19 = param_1 + 0x788;
  *(int *)(param_1 + 0x7c0) = param_1 + 0x6fc;
  *(byte **)(param_1 + 0x7c4) = pbVar17;
  *(int **)(param_1 + 0x7c8) = piVar19;
  iVar10 = param_1 + 0x6fc;
LAB_0066d568:
  uVar26 = thunk_FUN_016de0ee(iVar10,0x40);
  iVar10 = (int)uVar26 + (int)((ulonglong)uVar26 >> 0x20);
  if (*(char *)(iVar10 + 0x38) != '\x01') {
    if (*(char *)(iVar10 + 0x38) == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ae900);
    }
    FUN_015e8e6c(iVar10,FUN_009948a0);
    *(undefined1 *)(iVar10 + 0x38) = 1;
  }
  cVar2 = *(char *)(iVar10 + 0x30);
  bVar25 = cVar2 == '\x01';
  if (bVar25) {
    cVar2 = *(char *)(iVar10 + 0x31);
  }
  if (bVar25 && cVar2 == '\0') {
    FUN_016455a4(*(undefined4 *)*param_2,((undefined4 *)*param_2)[1]);
    goto LAB_0066e138;
  }
  if ((*(uint *)(iVar10 + 0x24) & 1) == 0) {
    uVar26 = FUN_0164e918();
    if ((uint)uVar26 < 2) {
      uVar26 = CONCAT44((int)((ulonglong)uVar26 >> 0x20),1);
    }
  }
  else {
    uVar26 = CONCAT44(*(undefined4 *)(iVar10 + 0x28),*(undefined4 *)(iVar10 + 0x2c));
  }
  uVar20 = (uint)((ulonglong)uVar26 >> 0x20);
  uVar13 = (uint)uVar26;
  uVar20 = uVar20 ^ uVar20 << 0x11;
  *(uint *)(iVar10 + 0x28) = uVar13;
  uVar20 = uVar13 >> 0x10 ^ uVar20 >> 7 ^ uVar13 ^ uVar20;
  *(uint *)(iVar10 + 0x2c) = uVar20;
  uVar20 = (uint)((ulonglong)(uVar20 + uVar13) * 3 >> 0x20);
  *(undefined4 *)(iVar10 + 0x24) = 1;
  iVar10 = uVar20 - (uVar20 / 3 | uVar20 / 3 << 1);
  if (iVar10 == 2) {
    bVar25 = false;
    if ((*pbVar17 & 4) != 0) goto LAB_0066d6dc;
    FUN_006c1b64(&local_198,piVar19[2],*param_2);
    uVar3 = local_198;
    if ((int *)local_198 == (int *)&SUB_00000002) goto LAB_0066d6d8;
LAB_0066d874:
    local_198._0_4_ = (int *)&DAT_80000010;
    piStack_1f8 = local_190;
    iStack_1f4 = iStack_18c;
    uStack_1f0 = uStack_188;
    bVar8 = 4;
    uVar4 = uVar3;
  }
  else if (iVar10 == 1) {
    bVar25 = false;
    if ((*pbVar17 & 2) != 0) goto LAB_0066d6dc;
    FUN_006c1d9c(&local_198,piVar19[1],*param_2);
    uVar3 = local_198;
    if ((int *)local_198 == (int *)0x80000001) goto LAB_0066d6d8;
LAB_0066d7d0:
    local_198._0_4_ = (int *)&DAT_8000000f;
    piStack_1f8 = local_190;
    iStack_1f4 = iStack_18c;
    uStack_1f0 = uStack_188;
    bVar8 = 2;
    uVar4 = uVar3;
  }
  else {
    bVar25 = false;
    if ((*pbVar17 & 1) == 0) {
      FUN_00680858(&local_198,*(undefined4 *)*piVar19,param_2);
      uVar3 = local_198;
      if ((int *)local_198 == (int *)&DAT_8000000f) {
LAB_0066d6d8:
        bVar25 = true;
        goto LAB_0066d6dc;
      }
    }
    else {
LAB_0066d6dc:
      uVar13 = (uVar20 + 1) % 3;
      uVar3 = local_198;
      if (uVar13 == 0) {
        if ((*pbVar17 & 1) != 0) goto LAB_0066d788;
        FUN_00680858(&local_198,*(undefined4 *)*piVar19,param_2);
        uVar3 = local_198;
        if ((int *)local_198 == (int *)&DAT_8000000f) goto LAB_0066d784;
      }
      else {
        if (uVar13 == 1) {
          if ((*pbVar17 & 2) == 0) {
            FUN_006c1d9c(&local_198,piVar19[1],*param_2);
            uVar3 = local_198;
            if ((int *)local_198 != (int *)0x80000001) goto LAB_0066d7d0;
            goto LAB_0066d784;
          }
        }
        else if ((*pbVar17 & 4) == 0) {
          FUN_006c1b64(&local_198,piVar19[2],*param_2);
          uVar3 = local_198;
          if ((int *)local_198 != (int *)&SUB_00000002) goto LAB_0066d874;
LAB_0066d784:
          bVar25 = true;
          uVar3 = local_198;
        }
LAB_0066d788:
        uVar20 = (uVar20 + 2) % 3;
        local_198 = uVar3;
        if (uVar20 != 0) {
          if (uVar20 == 1) {
            if ((*pbVar17 & 2) != 0) goto LAB_0066d89c;
            FUN_006c1d9c(&local_198,piVar19[1],*param_2);
            uVar3 = local_198;
            if ((int *)local_198 != (int *)0x80000001) goto LAB_0066d7d0;
          }
          else if ((*pbVar17 & 4) == 0) {
            FUN_006c1b64(&local_198,piVar19[2],*param_2);
            uVar3 = local_198;
            if ((int *)local_198 != (int *)&SUB_00000002) goto LAB_0066d874;
          }
          else {
LAB_0066d89c:
            local_198._0_4_ = (int *)0x80000011;
            if (!bVar25) goto LAB_0066d8a8;
          }
LAB_0066e138:
          uVar9 = 3;
LAB_0066d518:
          local_2d0 = (undefined1 *)(param_1 + 0x7b0);
          uVar12 = 1;
          *local_2d0 = uVar9;
          uVar9 = 3;
LAB_0066e114:
          *(undefined1 *)(param_1 + 0x970) = uVar9;
          return uVar12;
        }
        if ((*pbVar17 & 1) != 0) goto LAB_0066d89c;
        FUN_00680858(&local_198,*(undefined4 *)*piVar19,param_2);
        uVar3 = local_198;
        if ((int *)local_198 == (int *)&DAT_8000000f) goto LAB_0066e138;
      }
    }
    local_198._0_4_ = (int *)uVar3;
    puVar24 = (ulonglong *)((uint)&local_198 | 4);
    uVar4 = *puVar24;
    piStack_1f8 = *(int **)(puVar24 + 1);
    iStack_1f4 = *(int *)((int)puVar24 + 0xc);
    uStack_1f0 = (undefined4)puVar24[2];
    local_78 = local_180;
    local_74 = piStack_17c;
    local_70 = piStack_178;
    bVar8 = 1;
  }
  uStack_1fc = (undefined4)(uVar4 >> 0x20);
  local_200 = (int *)uVar4;
  *pbVar17 = *pbVar17 | bVar8;
LAB_0066d8a8:
  *(int **)(param_1 + 0x78c) = (int *)local_198;
  *(int **)(param_1 + 0x790) = local_200;
  *(undefined4 *)(param_1 + 0x794) = uStack_1fc;
  *(int **)(param_1 + 0x798) = piStack_1f8;
  *(int *)(param_1 + 0x79c) = iStack_1f4;
  *(undefined4 *)(param_1 + 0x7a0) = uStack_1f0;
  *(int **)(param_1 + 0x7a4) = local_78;
  *(int **)(param_1 + 0x7a8) = local_74;
  *(int **)(param_1 + 0x7ac) = local_70;
  puVar14 = (undefined1 *)((int)(int *)local_198 + 0x7ffffff2);
  if ((int *)local_198 < (undefined1 *)0x8000000e) {
    puVar14 = (undefined1 *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0066d8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  local_198 = uVar3;
  uVar12 = (*(code *)((int)&DAT_0066d8ec + (&DAT_0066d8ec)[(int)puVar14]))();
  return uVar12;
}

