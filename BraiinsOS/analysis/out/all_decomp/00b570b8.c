// FUN_00b570b8 @ 00b570b8 size=1864 calls_out=24 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

undefined8 FUN_00b570b8(undefined4 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 unaff_r7;
  char *pcVar11;
  uint *puVar12;
  int *piVar13;
  uint *puVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 extraout_s1;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 ***local_120;
  int local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined2 *local_cc;
  undefined4 local_c8;
  int local_c4;
  undefined1 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 **local_88;
  undefined4 local_84;
  undefined4 *local_80;
  undefined4 *local_7c;
  undefined **local_78;
  undefined *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined *local_58;
  uint **local_54;
  uint *local_50;
  code *local_4c;
  uint *local_48;
  code *local_44;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x55)) {
  case 0:
    piVar13 = (int *)(param_1[0x54] + 0x2c);
    if (*piVar13 == 0) {
      uVar16 = FUN_00c70f88(&DAT_0034e635,0x2b);
      param_1[6] = 1;
      param_1[7] = uVar16;
    }
    else {
      param_1[6] = 0;
      param_1[7] = piVar13;
      iVar15 = *piVar13;
      param_1[8] = *param_1;
      param_1[9] = param_1[1];
      param_1[10] = param_1[2];
      param_1[0xb] = param_1[3];
      param_1[0xc] = param_1[4];
      param_1[0xd] = param_1[5];
      *(undefined1 *)(param_1 + 0x17) = 0;
      iVar15 = iVar15 + 8;
      param_1[0x14] = iVar15;
LAB_00b57174:
      param_1[0x15] = iVar15;
      *(undefined1 *)((int)param_1 + 0x5d) = 0;
      param_1[0xe] = param_1[8];
      param_1[0xf] = param_1[9];
      param_1[0x10] = param_1[10];
      param_1[0x11] = param_1[0xb];
      param_1[0x12] = param_1[0xc];
      param_1[0x13] = param_1[0xd];
      uVar18 = *(undefined8 *)(iVar15 + 0x50);
      uVar17 = *(undefined8 *)(iVar15 + 0x268);
      uVar19 = *(undefined8 *)(iVar15 + 0x270);
      puVar4 = (undefined2 *)thunk_FUN_016d4a50(2);
      if (puVar4 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(1,2);
      }
      uVar16 = FUN_016d5298((int)uVar17);
      local_c4 = (uint)(0.0 < (double)CONCAT44(extraout_s1,uVar16)) *
                 (int)(longlong)(double)CONCAT44(extraout_s1,uVar16);
      local_c0 = *(undefined1 *)(iVar15 + 0x61);
      *puVar4 = 0x100;
      local_130 = *(undefined4 *)(iVar15 + 0x228);
      local_12c = *(undefined4 *)(iVar15 + 0x22c);
      uStack_128 = *(undefined4 *)(iVar15 + 0x230);
      local_124 = *(undefined4 *)(iVar15 + 0x234);
      local_120 = *(undefined4 ****)(iVar15 + 0x238);
      local_11c = *(int *)(iVar15 + 0x23c);
      local_118 = *(undefined4 *)(iVar15 + 0x240);
      uStack_114 = *(undefined4 *)(iVar15 + 0x244);
      uStack_110 = *(undefined4 *)(iVar15 + 0x248);
      uStack_10c = *(undefined4 *)(iVar15 + 0x24c);
      uStack_108 = *(undefined4 *)(iVar15 + 0x250);
      uStack_104 = *(undefined4 *)(iVar15 + 0x254);
      local_100 = *(undefined4 *)(iVar15 + 0x18);
      uStack_fc = *(undefined4 *)(iVar15 + 0x1c);
      uStack_f8 = *(undefined4 *)(iVar15 + 0x20);
      uStack_f4 = *(undefined4 *)(iVar15 + 0x24);
      uStack_f0 = *(undefined4 *)(iVar15 + 0x28);
      unaff_r7 = *(undefined4 *)(iVar15 + 0x2c);
      local_c8 = 2;
      local_d0 = 2;
      uStack_ec = unaff_r7;
      local_e8 = uVar17;
      local_e0 = uVar19;
      local_d8 = uVar18;
      local_cc = puVar4;
      FUN_008d57c0(&local_a0,param_1 + 0xe);
      if (local_a0 == 0x80000000) {
        thunk_FUN_016d3fb4(puVar4);
        param_1[0x18] = param_1[0x15] + 0x300;
        param_1[0x19] = 0xffffffff;
        goto switchD_00b57150_caseD_3;
      }
      uVar16 = FUN_00c7966c(&local_a0);
      thunk_FUN_016d3fb4(puVar4);
LAB_00b576e4:
      *(undefined1 *)(param_1 + 0x17) = 1;
      FUN_00b579fc(param_1 + 8);
    }
    *(undefined1 *)(param_1 + 0x55) = 1;
    uVar6 = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018706e0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018706e0);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x17)) {
    case 0:
      iVar15 = param_1[0x14];
      goto LAB_00b57174;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018701c0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018701c0);
    case 3:
switchD_00b57150_caseD_3:
      iVar15 = FUN_00c81384(param_1 + 0x18,param_2);
      if (iVar15 != 0) {
        param_1[0x16] = iVar15;
        *(undefined1 *)((int)param_1 + 0x5d) = 1;
        if (param_1[0x18] != 0) {
          FUN_00c81a4c(param_1[0x18],param_1[0x19],1);
          iVar15 = param_1[0x16];
        }
        puVar12 = param_1 + 0xe;
        iVar9 = 2;
        puVar14 = (uint *)(iVar15 + 0xd0);
        uVar7 = *puVar14;
        iVar5 = 2;
        if ((uint)(*puVar12 < 5) <= (uint)-param_1[0xf]) {
          iVar5 = *puVar12 - 5;
        }
        if ((uint)(uVar7 < 5) <= (uint)-*(int *)(iVar15 + 0xd4)) {
          iVar9 = uVar7 - 5;
        }
        if (iVar5 != iVar9) goto LAB_00b5737c;
        if (iVar5 != 0) {
          if (iVar5 == 1) {
            if (*(double *)(param_1 + 0x10) != *(double *)(iVar15 + 0xd8)) {
LAB_00b5737c:
              local_a0 = *puVar12;
              local_9c = param_1[0xf];
              local_98 = param_1[0x10];
              uStack_94 = param_1[0x11];
              uStack_90 = param_1[0x12];
              local_8c = param_1[0x13];
              uVar17 = FUN_00b353d8(iVar15 + 0x58);
              puVar10 = *(undefined4 **)(iVar15 + 0x154);
              uVar16 = *(undefined4 *)(iVar15 + 0x150);
              pcVar8 = (code *)*puVar10;
              if (pcVar8 != (code *)0x0) {
                (*pcVar8)(uVar16);
              }
              if (puVar10[1] != 0) {
                thunk_FUN_016d3fb4(uVar16);
              }
              *(undefined8 *)(iVar15 + 0x150) = uVar17;
              if ((DAT_018d9130 < 3) && (DAT_018d99b0 != '\0')) {
                if (DAT_018d99b0 == '\x01') {
LAB_00b57448:
                  DataMemoryBarrier(0xb);
                  pcVar11 = s_SetGloba_00414c05;
                  puVar1 = &DAT_018ae394;
                  if ((DAT_018dd984 == 2) &&
                     (pcVar11 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
                    pcVar11 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                  }
                  iVar5 = (**(code **)(puVar1 + 0x14))(pcVar11,DAT_018d99a8);
                  if (iVar5 == 0) goto LAB_00b575cc;
                }
                else if (DAT_018d99b0 != '\x02') {
                  cVar2 = FUN_0169ac90(&DAT_018d99a8);
                  if (cVar2 == '\0') goto LAB_00b575cc;
                  if (cVar2 != '\x02') goto LAB_00b57448;
                }
                if (*(int *)(DAT_018d99a8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186fa40);
                }
                local_6c = *(undefined4 *)(DAT_018d99a8 + 0x20);
                local_68 = *(undefined4 *)(DAT_018d99a8 + 0x24);
                local_64 = *(undefined4 *)(DAT_018d99a8 + 0x28);
                local_7c = &local_70;
                local_78 = &local_58;
                local_54 = &local_50;
                local_80 = (undefined4 *)(DAT_018d99a8 + 0x1c);
                local_70 = *local_80;
                local_48 = &local_a0;
                local_88 = &local_7c;
                local_120 = &local_88;
                local_60 = 0;
                local_74 = &DAT_018abb78;
                local_58 = &DAT_00579bdc;
                local_44 = FUN_008d5b00;
                local_4c = FUN_008d5b00;
                local_84 = 1;
                local_12c = 0;
                local_130 = 1;
                DataMemoryBarrier(0xb);
                pcVar11 = s_SetGloba_00414c05;
                puVar1 = &DAT_018ae394;
                if ((DAT_018dd984 == 2) &&
                   (pcVar11 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
                  pcVar11 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                }
                local_11c = DAT_018d99a8;
                local_50 = puVar14;
                iVar5 = (**(code **)(puVar1 + 0x28))(pcVar11,&local_130);
                if (iVar5 != 0) {
                  (**(code **)(puVar1 + 0x2c))(pcVar11,&local_130);
                }
              }
LAB_00b575cc:
              *(undefined4 *)(iVar15 + 0xe8) = 7;
              *(undefined4 *)(iVar15 + 0x20) = 4;
              *(undefined4 *)(iVar15 + 0xec) = 0;
              *(undefined4 *)(iVar15 + 0x24) = 0;
              *(undefined1 **)(iVar15 + 0x148) = &DAT_3b9aca00;
              iVar5 = 0;
              uVar7 = 5;
              if (local_a0 != 5 || local_9c != 0) {
                local_124 = local_8c;
                local_130 = local_98;
                local_12c = uStack_94;
                uStack_128 = uStack_90;
                iVar5 = local_9c;
                uVar7 = local_a0;
              }
              *puVar14 = uVar7;
              *(undefined4 *)(iVar15 + 0xd8) = local_130;
              *(undefined4 *)(iVar15 + 0xdc) = local_12c;
              *(undefined4 *)(iVar15 + 0xe0) = uStack_128;
              *(undefined4 *)(iVar15 + 0xe4) = local_124;
              *(int *)(iVar15 + 0xd4) = iVar5;
              (**(code **)(*(int *)(iVar15 + 0x154) + 0x10))
                        (&local_b8,*(undefined4 *)(iVar15 + 0x150),iVar15 + 0xb8);
              DataMemoryBarrier(0xb);
              if (DAT_018d7d14 == 0) {
                FUN_00a699b0(param_1[0x16] + 0xd0);
              }
              *(undefined1 *)((int)param_1 + 0x5d) = 0;
              param_1[0x18] = local_b8;
              param_1[0x19] = uStack_b4;
              param_1[0x1a] = uStack_b0;
              param_1[0x1b] = uStack_ac;
              param_1[0x1c] = uStack_a8;
              param_1[0x1d] = uStack_a4;
              param_1[0x51] = param_1[0x16];
              *(undefined1 *)(param_1 + 0x53) = 0;
              param_1[0x50] = param_1[0x15];
              unaff_r7 = uStack_a4;
              goto switchD_00b57150_caseD_4;
            }
          }
          else {
            iVar5 = FUN_010e15b8(puVar12,puVar14,-(*(int *)(iVar15 + 0xd4) + (uint)(uVar7 >= 5)));
            if (iVar5 == 0) goto LAB_00b5737c;
          }
        }
        FUN_00c822ec(iVar15);
        uVar16 = 0;
        *(undefined1 *)((int)param_1 + 0x5d) = 0;
        goto LAB_00b576e4;
      }
      uVar3 = 3;
      break;
    case 4:
switchD_00b57150_caseD_4:
      uVar20 = FUN_00b2f7a8(param_1 + 0x18,param_2);
      uVar16 = (undefined4)(uVar20 >> 0x20);
      if ((uVar20 & 1) == 0) {
        if (*(char *)(param_1 + 0x53) == '\x03') {
          if (*(char *)(param_1 + 0x33) == '\x04') {
            FUN_00b30fcc(param_1 + 0x38);
            *(undefined1 *)(param_1 + 0x34) = 0;
            *(undefined2 *)((int)param_1 + 0xcd) = 0;
LAB_00b57764:
            *(undefined1 *)((int)param_1 + 0xcf) = 0;
          }
          else if (*(char *)(param_1 + 0x33) == '\x03') {
            if (param_1[0x36] != 0) {
              FUN_00c8204c(param_1[0x36],param_1[0x37],1);
            }
            goto LAB_00b57764;
          }
          *(undefined1 *)((int)param_1 + 0x14d) = 0;
        }
        else if (*(char *)(param_1 + 0x53) == '\0') {
          FUN_00c822ec(param_1[0x51]);
        }
        *(undefined1 *)((int)param_1 + 0x5d) = 0;
        goto LAB_00b576e4;
      }
      uVar3 = 4;
    }
    *(undefined1 *)(param_1 + 0x17) = uVar3;
    *(undefined1 *)(param_1 + 0x55) = 3;
    uVar6 = 1;
    uVar16 = unaff_r7;
  }
  return CONCAT44(uVar16,uVar6);
}

