// FUN_00c62018 @ 00c62018 size=2144 calls_out=17 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x00c62874) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c62018(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int **ppiVar12;
  int *extraout_r12;
  int *extraout_r12_00;
  int *extraout_r12_01;
  int *extraout_r12_02;
  int *extraout_r12_03;
  int *extraout_r12_04;
  int *extraout_r12_05;
  int *extraout_r12_06;
  int *extraout_r12_07;
  int *piVar13;
  int *extraout_r12_08;
  int *extraout_r12_09;
  ulonglong uVar14;
  int *local_128;
  int *local_124;
  int *local_11c;
  int **local_10c;
  int *local_108;
  int **local_104;
  int local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  uint local_f0;
  uint local_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  char local_dc;
  int *local_d8;
  int *piStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int *piStack_c0;
  undefined4 uStack_bc;
  int *local_b8;
  int *local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  int *local_9c;
  int *local_98;
  int *piStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int *piStack_80;
  undefined4 uStack_7c;
  int *local_78;
  int **local_70;
  int *local_6c;
  int *local_68;
  int *piStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int *local_50;
  undefined4 uStack_4c;
  int *local_48;
  undefined1 local_44;
  int *local_40;
  int *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_25;
  
  local_f4 = *param_2;
  local_f0 = param_2[1];
  local_ec = param_2[2];
  iStack_e8 = param_2[3];
  iStack_e4 = param_2[4];
  iStack_e0 = param_2[5];
  local_dc = -0x80;
  local_f8 = 0;
  local_fc = 1;
  local_100 = 0;
  if (local_ec < local_f0) {
    do {
      uVar8 = (uint)*(byte *)(local_f4 + local_ec);
      if ((0x17 < uVar8 - 9) || ((1 << (uVar8 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar8 != 0x5b) {
          if (uVar8 == 0x7b) {
            local_ec = local_ec + 1;
            local_dc = '\x7f';
            local_44 = 1;
            local_70 = (int **)0x0;
            local_108 = local_6c;
            local_11c = (int *)&DAT_00410ff9;
            bVar1 = false;
            local_10c = (int **)0x0;
            local_104 = (int **)0x0;
            local_48 = &local_100;
            goto LAB_00c62150;
          }
          piVar6 = (int *)FUN_00c7f220(&local_100,&uStack_25,&DAT_01875808);
          goto LAB_00c62804;
        }
        local_ec = local_ec + 1;
        local_dc = '\x7f';
        local_b4 = (int *)CONCAT31(local_b4._1_3_,1);
        piVar6 = (int *)0xc62314;
        local_b8 = &local_100;
        FUN_00c63a28(&local_a0,&local_b8);
        if ((char)local_a0 == '\x01') {
LAB_00c62320:
          ppiVar12 = (int **)0x0;
          local_6c = local_9c;
        }
        else if (local_a0._1_1_ == '\x01') {
          piVar6 = (int *)0xc62348;
          FUN_00c49938(&local_a0,local_b8);
          ppiVar12 = local_a0;
          if (local_a0 == (int **)0x0) goto LAB_00c62320;
          puVar7 = (undefined4 *)((uint)&local_a0 | 4);
          puVar11 = (undefined4 *)((uint)&local_70 | 4);
          uVar3 = puVar7[1];
          uVar9 = puVar7[2];
          *puVar11 = *puVar7;
          puVar11[1] = uVar3;
          puVar11[2] = uVar9;
          uVar3 = puVar7[4];
          uVar9 = puVar7[5];
          uVar10 = puVar7[6];
          puVar11[3] = puVar7[3];
          puVar11[4] = uVar3;
          puVar11[5] = uVar9;
          puVar11[6] = uVar10;
          local_70 = local_a0;
          FUN_00c63a28(&local_a0,&local_b8);
          if ((char)local_a0 == '\x01') {
            piVar6 = local_9c;
          }
          else if (local_a0._1_1_ == '\x01') {
            uVar14 = FUN_00c8031c(local_b8);
            piVar6 = (int *)(uVar14 >> 0x20);
            if ((uVar14 & 1) == 0) {
              local_40 = local_68;
              local_3c = piStack_64;
              uStack_38 = uStack_60;
              uStack_34 = local_5c;
              uStack_30 = uStack_58;
              uStack_2c = uStack_54;
              goto LAB_00c625f8;
            }
          }
          else {
            piVar6 = (int *)FUN_00f2c2f0(1,&DAT_01874560,&DAT_018ab990);
          }
          FUN_00c541f4(&local_70);
          ppiVar12 = (int **)0x0;
          local_6c = piVar6;
          piVar6 = (int *)0xc625f0;
        }
        else {
          ppiVar12 = (int **)0x0;
          local_6c = (int *)FUN_00f2c2f0(0,&DAT_01874560,&DAT_018ab990);
          piVar6 = (int *)0xc623b0;
        }
LAB_00c625f8:
        local_dc = local_dc + '\x01';
        local_68 = local_40;
        piStack_64 = local_3c;
        uStack_60 = uStack_38;
        local_5c = uStack_34;
        uStack_58 = uStack_30;
        uStack_54 = uStack_2c;
        local_70 = ppiVar12;
        local_50 = piVar6;
        piVar5 = (int *)FUN_00c63be8(&local_100);
        piVar6 = local_6c;
        local_a0 = local_70;
        local_9c = local_6c;
        local_98 = local_68;
        piStack_94 = piStack_64;
        uStack_90 = uStack_60;
        local_8c = local_5c;
        local_88 = uStack_58;
        uStack_84 = uStack_54;
        piStack_80 = local_50;
        uStack_7c = uStack_4c;
        local_78 = piVar5;
        if (local_70 != (int **)0x0) {
          if (piVar5 != (int *)0x0) goto LAB_00c6265c;
          local_d8 = local_68;
          piStack_d4 = piStack_64;
          uStack_d0 = uStack_60;
          uStack_cc = local_5c;
          local_c8 = uStack_58;
          uStack_c4 = uStack_54;
          piStack_c0 = local_50;
          uStack_bc = uStack_4c;
          ppiVar12 = local_70;
          goto LAB_00c62718;
        }
        ppiVar12 = (int **)0x0;
        if (piVar5 == (int *)0x0) goto LAB_00c62718;
        iVar4 = *piVar5;
        if (iVar4 != 1) goto LAB_00c6268c;
        if ((char)piVar5[1] != '\x03') goto LAB_00c62710;
        puVar11 = (undefined4 *)piVar5[2];
        puVar7 = (undefined4 *)puVar11[1];
        uVar3 = *puVar11;
        if ((code *)*puVar7 != (code *)0x0) {
          (*(code *)*puVar7)(uVar3);
        }
        goto LAB_00c626f4;
      }
      local_ec = local_ec + 1;
    } while (local_f0 != local_ec);
  }
  local_a0 = (int **)&DAT_00000005;
  uVar3 = FUN_00c629ac(&local_100,&local_a0);
  goto LAB_00c620ac;
  while( true ) {
    piVar5 = (int *)FUN_011be240(piVar6);
    piVar13 = extraout_r12_03;
    if (piVar5 != (int *)0x0) break;
    piVar5 = (int *)FUN_00c64134(piVar6);
    piVar13 = extraout_r12_04;
    if (piVar5 != (int *)0x0) break;
LAB_00c62150:
    FUN_011bd334(&local_a0,&local_48);
    piVar6 = local_48;
    if ((char)local_a0 == '\x01') {
      piVar5 = local_9c;
      piVar13 = extraout_r12;
      break;
    }
    if (local_a0._1_1_ != '\x01') {
      local_6c = local_108;
      local_70 = local_10c;
      if (local_104 == (int **)0x0) {
        local_3c = (int *)&DAT_00000005;
        local_40 = (int *)&DAT_00355bd5;
        local_9c = &DAT_0157d360;
        local_a0 = &local_40;
        local_128 = (int *)FUN_00f56780(&DAT_0057a25d,&local_a0);
        piVar13 = extraout_r12_08;
        goto LAB_00c623ec;
      }
      if (bVar1) {
        local_b8 = local_68;
        local_b4 = piStack_64;
        uStack_b0 = uStack_60;
        uStack_ac = local_5c;
        uStack_a8 = uStack_58;
        uStack_a4 = uStack_54;
        goto LAB_00c623f0;
      }
      local_3c = (int *)&DAT_00000007;
      local_40 = (int *)&DAT_00410ff9;
      local_9c = &DAT_0157d360;
      local_a0 = &local_40;
      piVar5 = (int *)FUN_00f56780(&DAT_0057a25d,&local_a0);
      goto LAB_00c623e4;
    }
    piVar5 = local_48 + 5;
    local_48[2] = 0;
    piVar6[5] = *piVar5 + 1;
    FUN_0157e384(&local_a0,piVar6 + 3,piVar6);
    piVar2 = local_98;
    piVar5 = local_9c;
    piVar13 = extraout_r12_00;
    if (local_a0 == (int **)&SUB_00000002) break;
    if (local_98 == (int *)&DAT_00000007) {
      iVar4 = thunk_FUN_016dd50a(local_9c,&DAT_00410ff9,7);
      if (iVar4 == 0) {
        if (bVar1) goto LAB_00c62824;
        iVar4 = FUN_011be240(piVar6);
        if (iVar4 == 0) {
          uVar14 = FUN_00c8031c(piVar6);
          piVar13 = extraout_r12_06;
        }
        else {
          uVar14 = CONCAT44(iVar4,1);
          piVar13 = extraout_r12_05;
        }
        piVar5 = (int *)(uVar14 >> 0x20);
        if ((uVar14 & 1) != 0) break;
        bVar1 = true;
        local_124 = piVar5;
        goto LAB_00c62150;
      }
    }
    else if ((local_98 == (int *)&DAT_00000005) &&
            (iVar4 = thunk_FUN_016dd50a(local_9c,&DAT_00355bd5,5), iVar4 == 0)) {
      if (local_104 != (int **)0x0) {
        local_11c = (int *)&DAT_00355bd5;
LAB_00c62824:
        local_6c = local_108;
        local_70 = local_10c;
        local_3c = piVar2;
        local_40 = local_11c;
        local_9c = &DAT_0157d360;
        local_a0 = &local_40;
        piVar5 = (int *)FUN_00f56780(&DAT_00582dbd,&local_a0);
        piVar13 = extraout_r12_09;
        goto LAB_00c623dc;
      }
      local_128 = (int *)FUN_011be240(piVar6);
      piVar13 = extraout_r12_01;
      if (local_128 != (int *)0x0) goto LAB_00c623ec;
      FUN_00c49938(&local_a0,piVar6);
      local_128 = local_9c;
      piVar13 = extraout_r12_02;
      if (local_a0 == (int **)0x0) goto LAB_00c623ec;
      local_40 = local_98;
      local_3c = piStack_94;
      uStack_38 = uStack_90;
      uStack_34 = local_8c;
      uStack_30 = local_88;
      uStack_2c = uStack_84;
      local_68 = local_98;
      piStack_64 = piStack_94;
      uStack_60 = uStack_90;
      local_5c = local_8c;
      uStack_58 = local_88;
      uStack_54 = uStack_84;
      local_108 = local_9c;
      local_104 = local_a0;
      local_10c = local_a0;
      goto LAB_00c62150;
    }
  }
  local_70 = local_10c;
  local_6c = local_108;
LAB_00c623dc:
  local_128 = piVar5;
  if (local_104 != (int **)0x0) {
LAB_00c623e4:
    FUN_00c541f4(&local_70);
    local_128 = piVar5;
    piVar13 = extraout_r12_07;
  }
LAB_00c623ec:
  local_104 = (int **)0x0;
  local_124 = piVar13;
LAB_00c623f0:
  local_dc = local_dc + '\x01';
  local_68 = local_b8;
  piStack_64 = local_b4;
  uStack_60 = uStack_b0;
  local_5c = uStack_ac;
  uStack_58 = uStack_a8;
  uStack_54 = uStack_a4;
  local_70 = local_104;
  local_6c = local_128;
  local_50 = local_124;
  piVar5 = (int *)FUN_00c63e14(&local_100);
  piVar6 = local_6c;
  local_a0 = local_70;
  local_9c = local_6c;
  local_98 = local_68;
  piStack_94 = piStack_64;
  uStack_90 = uStack_60;
  local_8c = local_5c;
  local_88 = uStack_58;
  uStack_84 = uStack_54;
  piStack_80 = local_50;
  uStack_7c = uStack_4c;
  local_78 = piVar5;
  if (local_70 == (int **)0x0) {
    ppiVar12 = (int **)0x0;
    if (piVar5 != (int *)0x0) {
      iVar4 = *piVar5;
      if (iVar4 == 1) {
        if ((char)piVar5[1] == '\x03') {
          puVar11 = (undefined4 *)piVar5[2];
          puVar7 = (undefined4 *)puVar11[1];
          uVar3 = *puVar11;
          if ((code *)*puVar7 != (code *)0x0) {
            (*(code *)*puVar7)(uVar3);
          }
LAB_00c626f4:
          if (puVar7[1] != 0) {
            thunk_FUN_016d3fb4(uVar3);
          }
          goto LAB_00c62708;
        }
      }
      else {
LAB_00c6268c:
        piVar5 = local_78;
        piVar6 = local_6c;
        local_a0 = local_70;
        local_9c = local_6c;
        local_98 = local_68;
        piStack_94 = piStack_64;
        uStack_90 = uStack_60;
        local_8c = local_5c;
        local_88 = uStack_58;
        uStack_84 = uStack_54;
        piStack_80 = local_50;
        uStack_7c = uStack_4c;
        if ((iVar4 == 0) && (local_78[2] != 0)) {
          puVar11 = (undefined4 *)local_78[1];
LAB_00c62708:
          thunk_FUN_016d3fb4(puVar11);
        }
      }
LAB_00c62710:
      thunk_FUN_016d3fb4(piVar5);
      ppiVar12 = (int **)0x0;
    }
  }
  else if (piVar5 == (int *)0x0) {
    local_d8 = local_68;
    piStack_d4 = piStack_64;
    uStack_d0 = uStack_60;
    uStack_cc = local_5c;
    local_c8 = uStack_58;
    uStack_c4 = uStack_54;
    piStack_c0 = local_50;
    uStack_bc = uStack_4c;
    ppiVar12 = local_70;
  }
  else {
LAB_00c6265c:
    piVar6 = local_78;
    local_a0 = local_70;
    local_9c = local_6c;
    local_98 = local_68;
    piStack_94 = piStack_64;
    uStack_90 = uStack_60;
    local_8c = local_5c;
    local_88 = uStack_58;
    uStack_84 = uStack_54;
    piStack_80 = local_50;
    uStack_7c = uStack_4c;
    FUN_00c541f4(&local_a0);
    ppiVar12 = (int **)0x0;
  }
LAB_00c62718:
  if (ppiVar12 != (int **)0x0) {
    param_1[2] = local_d8;
    param_1[3] = piStack_d4;
    param_1[4] = uStack_d0;
    param_1[5] = uStack_cc;
    param_1[6] = local_c8;
    param_1[7] = uStack_c4;
    param_1[8] = piStack_c0;
    param_1[9] = uStack_bc;
    *param_1 = ppiVar12;
    param_1[1] = piVar6;
    local_a0 = (int **)*param_1;
    local_9c = (int *)param_1[1];
    local_98 = (int *)param_1[2];
    piStack_94 = (int *)param_1[3];
    uStack_90 = param_1[4];
    local_8c = param_1[5];
    local_88 = param_1[6];
    uStack_84 = param_1[7];
    piStack_80 = (int *)param_1[8];
    uStack_7c = param_1[9];
    if (local_ec < local_f0) {
      do {
        uVar8 = *(byte *)(local_f4 + local_ec) - 9;
        if ((0x17 < uVar8) || ((1 << (uVar8 & 0xff) & 0x800013U) == 0)) {
          local_70 = (int **)&DAT_00000016;
          uVar3 = FUN_00c629ac(&local_100,&local_70);
          *param_1 = 0;
          param_1[1] = uVar3;
          FUN_00c541f4(&local_a0);
          break;
        }
        local_ec = local_ec + 1;
      } while (local_f0 != local_ec);
    }
    goto LAB_00c620b4;
  }
LAB_00c62804:
  uVar3 = FUN_011da0d4(piVar6,&local_100);
LAB_00c620ac:
  *param_1 = 0;
  param_1[1] = uVar3;
LAB_00c620b4:
  if (local_100 != 0) {
    thunk_FUN_016d3fb4(local_fc);
  }
  return;
}

