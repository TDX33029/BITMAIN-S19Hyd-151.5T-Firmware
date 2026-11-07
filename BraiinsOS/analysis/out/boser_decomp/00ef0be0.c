// FUN_00ef0be0 @ 00ef0be0 size=6164 calls_out=25 calls_in=0
// strings: day_of_week | day_of_week | day_of_month | day_of_month | day_of_week | day_of_month

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ef0be0(undefined4 *param_1,int *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined3 uVar3;
  int *****pppppiVar4;
  int *****pppppiVar5;
  undefined4 uVar6;
  int *****pppppiVar7;
  int ***pppiVar8;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r1_05;
  undefined4 extraout_r1_06;
  undefined4 extraout_r1_07;
  int *****extraout_r1_08;
  undefined4 extraout_r1_09;
  undefined4 extraout_r1_10;
  undefined4 extraout_r1_11;
  undefined4 extraout_r1_12;
  undefined4 extraout_r1_13;
  undefined4 extraout_r1_14;
  int *****extraout_r2;
  int *****extraout_r3;
  int *****pppppiVar9;
  uint uVar10;
  int *****pppppiVar11;
  int ****ppppiVar12;
  int iVar13;
  int *****pppppiVar14;
  undefined8 uVar15;
  int *****local_e8;
  int *****local_e4;
  int *****local_e0;
  int *****local_dc;
  int *****local_d8;
  int *****local_d4;
  int *****local_d0;
  int *****local_cc;
  int *****local_c8;
  int *****local_c4;
  int *****local_c0;
  int *****local_bc;
  int *****local_b8;
  int ****local_ac;
  int local_a8;
  int *****local_a4;
  int *****local_a0;
  int *****pppppiStack_9c;
  undefined4 local_98;
  int *****local_94;
  int *****local_90;
  int *****local_8c;
  int *****local_88;
  int *****local_84;
  int ****local_80;
  int *****pppppiStack_7c;
  int *****local_78;
  int *****local_74;
  int *****pppppiStack_70;
  int *****local_68;
  int *****local_64;
  undefined4 local_60;
  int *****local_5c;
  int *****local_58;
  int *****local_54;
  int *****local_50;
  int *****local_4c;
  int *****local_48;
  int *****local_44;
  int *****local_40;
  int *****local_3c;
  int *****local_38;
  int *****local_34;
  int *****local_30;
  int ****local_2c;
  undefined4 local_28;
  
  ppppiVar12 = (int ****)*param_2;
  iVar13 = param_2[1];
  pppppiVar4 = (int *****)param_2[2];
  local_60 = (int *****)&DAT_80000000;
  pppiVar8 = ppppiVar12[5];
  if (pppiVar8 < ppppiVar12[4]) {
    pppppiVar9 = (int *****)&DAT_00800013;
    do {
      uVar10 = (uint)*(byte *)((int)ppppiVar12[3] + (int)pppiVar8);
      if ((0x17 < uVar10 - 9) || ((1 << (uVar10 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar10 != 0x22) {
          if (uVar10 == 0x7d) {
            local_48 = (int *****)0xa;
            pppppiVar5 = (int *****)FUN_012c6b30(ppppiVar12,&local_48);
          }
          else {
            local_48 = (int *****)0x11;
            pppppiVar5 = (int *****)FUN_012c6b30(ppppiVar12,&local_48);
          }
          goto LAB_00ef0c5c;
        }
        ppppiVar12[2] = (int ***)0x0;
        ppppiVar12[5] = (int ***)((int)pppiVar8 + 1);
        pppppiVar11 = (int *****)&local_48;
        FUN_01968828(pppppiVar11,ppppiVar12 + 3,ppppiVar12);
        if (local_48 == (int *****)0x2) {
          local_94 = local_44;
          local_98 = (int *****)CONCAT31(local_98._1_3_,1);
        }
        else {
          FUN_00e60e70(&local_98,&local_60,local_44,local_40);
        }
        if ((char)local_98 != '\0') {
          pppppiVar5 = (int *****)FUN_0127dee8(local_94,ppppiVar12);
          goto LAB_00ef0c5c;
        }
        pppppiVar14 = (int *****)((uint)local_98 >> 8 & 0xff);
        pppppiVar5 = (int *****)FUN_0167459c(ppppiVar12);
        if (pppppiVar5 != (int *****)0x0) goto LAB_00ef0c60;
        local_ac = (int ****)0x4;
        if (local_60 == (int *****)&DAT_80000000) {
          local_ac = (int ****)0x8;
        }
        if (local_ac == (int ****)0x9) goto LAB_00ef0c84;
        local_a8 = iVar13;
        local_64 = pppppiVar4;
        if (pppppiVar14 == (int *****)0x0) {
          pppppiStack_7c = &local_ac;
          local_a4 = local_60;
          local_a0 = local_5c;
          pppppiStack_9c = local_58;
          local_60 = (int *****)0x7;
          local_68 = &local_80;
          local_48 = (int *****)&DAT_00000007;
          local_40 = local_58;
          local_3c = local_54;
          local_38 = local_50;
          pppppiVar9 = local_38;
          local_80 = (int ****)0x7;
          local_78 = local_58;
          local_74 = local_54;
          pppppiStack_70 = local_50;
          pppiVar8 = ppppiVar12[5];
          pppppiVar5 = local_54;
          pppppiVar11 = local_50;
          local_5c = pppppiStack_7c;
          local_4c = pppppiVar4;
          local_44 = pppppiStack_7c;
          if (ppppiVar12[4] <= pppiVar8) goto LAB_00ef0f44;
          pppppiVar11 = (int *****)&DAT_00000001;
          goto LAB_00ef0f1c;
        }
        local_38._1_3_ = (undefined3)((uint)local_88 >> 8);
        uVar3 = local_38._1_3_;
        local_84 = pppppiVar4;
        if (pppppiVar14 == (int *****)&DAT_00000001) {
          local_94 = &local_ac;
          local_a4 = local_60;
          local_a0 = local_5c;
          pppppiStack_9c = local_58;
          local_98 = (int *****)0x7;
          local_68 = &local_80;
          local_48 = (int *****)&DAT_00000007;
          local_40 = local_90;
          local_3c = local_8c;
          local_38 = local_88;
          local_80 = (int ****)0x7;
          local_78 = local_90;
          local_74 = local_8c;
          pppppiStack_70 = local_88;
          pppiVar8 = ppppiVar12[5];
          pppppiVar5 = local_88;
          pppppiStack_7c = local_94;
          local_44 = local_94;
          if (ppppiVar12[4] <= pppiVar8) goto LAB_00ef0de8;
          pppppiVar5 = (int *****)&DAT_00000001;
          goto LAB_00ef0dc0;
        }
        local_94 = &local_ac;
        local_a4 = local_60;
        local_a0 = local_5c;
        pppppiStack_9c = local_58;
        local_98 = (int *****)0x7;
        local_68 = &local_80;
        local_48 = (int *****)&DAT_00000007;
        local_40 = local_90;
        local_3c = local_8c;
        local_38 = local_88;
        local_80 = (int ****)0x7;
        local_78 = local_90;
        local_74 = local_8c;
        pppppiStack_70 = local_88;
        pppiVar8 = ppppiVar12[5];
        pppppiVar5 = local_8c;
        pppppiVar11 = local_88;
        pppppiStack_7c = local_94;
        local_44 = local_94;
        if (ppppiVar12[4] <= pppiVar8) goto LAB_00ef1088;
        pppppiVar11 = (int *****)&DAT_00000001;
        goto LAB_00ef1060;
      }
      pppiVar8 = (int ***)((int)pppiVar8 + 1);
      ppppiVar12[5] = pppiVar8;
    } while (ppppiVar12[4] != pppiVar8);
  }
  local_48 = (int *****)0x3;
  pppppiVar5 = (int *****)FUN_012c6b30(ppppiVar12,&local_48);
LAB_00ef0c5c:
LAB_00ef0c60:
  pppppiVar14 = pppppiVar5;
  local_48 = pppppiVar14;
  FUN_0196bf0c(pppppiVar4,iVar13);
  if (local_60 != (int *****)&DAT_80000000) {
    FUN_019bb7e0(local_60,local_5c);
  }
  goto LAB_00ef0c84;
  while( true ) {
    pppiVar8 = (int ***)((int)pppiVar8 + 1);
    ppppiVar12[5] = pppiVar8;
    if (ppppiVar12[4] == pppiVar8) break;
LAB_00ef0f1c:
    pppppiVar5 = (int *****)(uint)*(byte *)((int)ppppiVar12[3] + (int)pppiVar8);
    if (((undefined1 *)0x17 < (undefined1 *)((int)pppppiVar5 + -9)) ||
       ((1 << ((uint)((int)pppppiVar5 + -9) & 0xff) & 0x800013U) == 0)) {
      local_38._1_3_ = (undefined3)((uint)local_50 >> 8);
      local_38 = pppppiVar9;
      if (pppppiVar5 != (int *****)0x5b) {
        if (pppppiVar5 != (int *****)0x7b) {
          pppppiVar9 = (int *****)FUN_012c7788(ppppiVar12,&local_68,&DAT_01c1cd78);
          goto LAB_00ef218c;
        }
        cVar1 = *(char *)(ppppiVar12 + 7);
        *(char *)(ppppiVar12 + 7) = cVar1 + -1;
        if ((char)(cVar1 + -1) != '\0') {
          ppppiVar12[5] = (int ***)((int)pppiVar8 + 1);
          local_38 = (int *****)CONCAT31(local_38._1_3_,1);
          local_48 = (int *****)&DAT_80000000;
          pppppiVar5 = (int *****)&DAT_00000003;
          local_3c = (int *****)ppppiVar12;
          local_34 = local_68;
          local_30 = pppppiVar4;
          goto LAB_00ef14b8;
        }
        local_48 = (int *****)&DAT_00000018;
        pppppiVar9 = (int *****)FUN_012c6b30(ppppiVar12,&local_48);
        local_d0 = pppppiVar5;
        local_d8 = pppppiVar11;
        goto LAB_00ef0f58;
      }
      cVar1 = *(char *)(ppppiVar12 + 7);
      *(char *)(ppppiVar12 + 7) = cVar1 + -1;
      if ((char)(cVar1 + -1) == '\0') {
        local_48 = (int *****)&DAT_00000018;
        pppppiVar9 = (int *****)FUN_012c6b30(ppppiVar12,&local_48);
        local_d0 = pppppiVar5;
        local_d8 = pppppiVar11;
        goto LAB_00ef0f58;
      }
      ppppiVar12[5] = (int ***)((int)pppiVar8 + 1);
      local_38 = (int *****)CONCAT31(local_38._1_3_,1);
      local_48 = (int *****)0x0;
      local_44 = local_68;
      local_40 = pppppiVar4;
      local_3c = (int *****)ppppiVar12;
      FUN_00e62b64(&local_98,&local_48);
      local_d4 = local_94;
      if (local_98 == (int *****)&SUB_00000004) {
LAB_00ef1a0c:
        local_48 = local_d4;
        FUN_0196bf0c(pppppiVar4,&local_80);
        local_d0 = pppppiVar5;
        local_d8 = pppppiVar11;
        pppppiVar5 = (int *****)&DAT_00000003;
      }
      else {
        if (local_98 == (int *****)&DAT_00000003) {
          local_d4 = (int *****)FUN_012cc2c0(0,&DAT_01c16774,&DAT_01d064b8);
          goto LAB_00ef1a0c;
        }
        local_d0 = local_90;
        local_d8 = local_8c;
        pppppiVar5 = local_98;
      }
      *(char *)(ppppiVar12 + 7) = *(char *)(ppppiVar12 + 7) + '\x01';
      local_98 = pppppiVar5;
      local_94 = local_d4;
      local_90 = local_d0;
      local_8c = local_d8;
      local_38 = (int *****)FUN_014d9568(ppppiVar12);
      uVar15 = CONCAT44(&local_44,local_38);
      local_48 = pppppiVar5;
      local_44 = local_d4;
      local_40 = local_d0;
      local_3c = local_d8;
      if (pppppiVar5 == (int *****)&DAT_00000003) {
        pppppiVar9 = local_d0;
        pppppiVar5 = local_d8;
        if (local_38 != (int *****)0x0) {
          FUN_00f80260(&local_38);
          uVar15 = CONCAT44(extraout_r1_09,local_38);
        }
        goto LAB_00ef1b58;
      }
      pppppiVar9 = local_d4;
      uVar2 = CONCAT44(&local_44,local_38);
      if (local_38 != (int *****)0x0) {
        pppppiVar5 = (int *****)&DAT_00000003;
        pppppiVar9 = local_38;
        uVar2 = uVar15;
      }
      goto LAB_00ef1b68;
    }
  }
LAB_00ef0f44:
  local_48 = (int *****)&DAT_00000005;
  pppppiVar9 = (int *****)FUN_012c6b30(ppppiVar12,&local_48);
  local_d0 = pppppiVar5;
  local_d8 = pppppiVar11;
LAB_00ef0f58:
  FUN_0196bf0c(pppppiVar4,&local_80);
  uVar2 = CONCAT44(extraout_r1_02,local_38);
  pppppiVar5 = (int *****)&DAT_00000003;
  goto LAB_00ef0f6c;
  while( true ) {
    pppppiVar7 = (int *****)&local_98;
    pppppiVar9 = (int *****)FUN_00e620c0(&local_48);
    if (pppppiVar9 != (int *****)0x0) break;
LAB_00ef14b8:
    pppppiVar11 = local_30;
    pppppiVar9 = local_34;
    FUN_01278730(&local_98,&local_3c);
    if ((char)local_98 == '\x01') {
LAB_00ef1d48:
      pppppiVar5 = local_44;
      pppppiVar7 = local_48;
      local_d4 = local_94;
      local_48 = (int *****)&DAT_80000000;
      if (pppppiVar7 == (int *****)&DAT_80000000) {
        local_98 = (int *****)&DAT_00000008;
      }
      else {
        local_98 = (int *****)0x2;
        local_90 = pppppiVar7;
        local_8c = local_44;
        local_88 = local_40;
      }
      local_94 = pppppiVar9;
      FUN_0196bf0c(pppppiVar11,&local_98);
      if (pppppiVar7 != (int *****)&DAT_80000000) {
        FUN_019bb7e0(pppppiVar7,pppppiVar5);
      }
      goto LAB_00ef1e64;
    }
    if (local_98._1_1_ != '\x01') {
      if (pppppiVar5 == (int *****)&DAT_00000003) {
        pppppiVar5 = (int *****)0x2;
      }
      if (local_48 != (int *****)&DAT_80000000) {
        FUN_019bb7e0(local_48,local_44);
      }
      goto LAB_00ef1ef0;
    }
    local_3c[2] = (int ****)0x0;
    local_3c[5] = (int ****)((int)local_3c[5] + 1);
    FUN_01968828(&local_98,local_3c + 3);
    pppppiVar7 = local_90;
    pppppiVar14 = local_94;
    if (local_98 == (int *****)0x2) goto LAB_00ef1d48;
    uVar6 = 0;
    if (((uint)local_98 & 1) == 0) {
      pppppiVar9 = local_bc;
      if ((int)local_90 < 0) goto LAB_00ef23fc;
      if (local_90 == (int *****)0x0) {
        pppppiVar9 = (int *****)&DAT_00000001;
        local_b8 = (int *****)0x0;
      }
      else {
        pppppiVar9 = (int *****)FUN_01298504(local_90,1);
        if (pppppiVar9 == (int *****)0x0) goto LAB_00ef23f8;
        local_b8 = pppppiVar7;
      }
      FUN_01bed4e2(pppppiVar9,pppppiVar14,pppppiVar7);
      local_bc = pppppiVar9;
    }
    else {
      pppppiVar9 = local_c0;
      if ((int)local_90 < 0) goto LAB_00ef23fc;
      if (local_90 == (int *****)0x0) {
        pppppiVar9 = (int *****)&DAT_00000001;
        local_b8 = (int *****)0x0;
      }
      else {
        pppppiVar9 = (int *****)FUN_01298504(local_90,1);
        if (pppppiVar9 == (int *****)0x0) {
LAB_00ef23f8:
          uVar6 = 1;
          pppppiVar9 = pppppiVar7;
LAB_00ef23fc:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar6,pppppiVar9);
        }
        local_b8 = pppppiVar7;
      }
      FUN_01bed4e2(pppppiVar9,pppppiVar14,pppppiVar7);
      local_c0 = pppppiVar9;
    }
    if (local_48 != (int *****)&DAT_80000000) {
      FUN_019bb7e0(local_48,local_44);
    }
    local_40 = pppppiVar7;
    local_48 = local_b8;
    local_44 = pppppiVar9;
    if ((pppppiVar7 == (int *****)&SUB_00000004) &&
       (pppppiVar7 = (int *****)&local_98, *pppppiVar14 == (int ****)0x656d6974)) {
      if (pppppiVar5 == (int *****)&DAT_00000003) {
        FUN_00e61ac4(&local_98,&local_48);
        local_d4 = local_94;
        if (local_98 != (int *****)&DAT_00000003) {
          local_d0 = local_90;
          local_d8 = local_8c;
          pppppiVar5 = local_98;
          goto LAB_00ef14b8;
        }
      }
      else {
        local_94 = (int *****)&DAT_0132b6a0;
        local_98 = &local_2c;
        local_28 = 4;
        local_2c = (int ****)&DAT_0056d018;
        local_d4 = (int *****)FUN_019676ac(&DAT_005ab34f,&local_98);
      }
      goto LAB_00ef1e64;
    }
  }
  local_d4 = pppppiVar9;
LAB_00ef1e64:
  if (local_48 != (int *****)&DAT_80000000) {
    FUN_019bb7e0(local_48,local_44);
  }
  local_48 = local_d4;
  FUN_0196bf0c(pppppiVar4,&local_80);
  pppppiVar5 = (int *****)&DAT_00000003;
  local_d8 = pppppiVar7;
LAB_00ef1ef0:
  *(char *)(ppppiVar12 + 7) = *(char *)(ppppiVar12 + 7) + '\x01';
  local_90 = local_d0;
  local_98 = pppppiVar5;
  local_94 = local_d4;
  local_8c = local_d8;
  uVar15 = FUN_012c7b64(ppppiVar12);
  local_38 = (int *****)uVar15;
  local_40 = local_d0;
  local_48 = pppppiVar5;
  local_44 = local_d4;
  local_3c = local_d8;
  if (pppppiVar5 == (int *****)&DAT_00000003) {
    pppppiVar9 = local_d8;
    pppppiVar5 = local_d0;
    if (local_38 != (int *****)0x0) {
      FUN_00f80260(&local_38);
      uVar15 = CONCAT44(extraout_r1_12,local_38);
      pppppiVar9 = local_d8;
      pppppiVar5 = local_d0;
    }
LAB_00ef1b58:
    local_d8 = pppppiVar5;
    local_d0 = pppppiVar9;
    pppppiVar9 = local_d4;
    pppppiVar5 = (int *****)&DAT_00000003;
    uVar2 = uVar15;
  }
  else {
    pppppiVar9 = local_d4;
    if (local_38 != (int *****)0x0) {
      pppppiVar5 = (int *****)&DAT_00000003;
      pppppiVar9 = local_38;
    }
    uVar2 = uVar15;
  }
LAB_00ef1b68:
  local_38 = (int *****)uVar2;
  if (pppppiVar5 == (int *****)&DAT_00000003) {
    pppppiVar5 = local_d0;
    pppppiVar11 = local_d8;
LAB_00ef218c:
    pppppiVar9 = (int *****)FUN_0127dee8(pppppiVar9,ppppiVar12);
    local_d0 = pppppiVar5;
    local_d8 = pppppiVar11;
    goto LAB_00ef0f58;
  }
LAB_00ef0f6c:
  local_38 = (int *****)uVar2;
  if (local_80 == (int ****)0x4 || local_80 == (int ****)0x2) {
    FUN_019bb7e0(local_78,local_74);
    uVar2 = CONCAT44(extraout_r1_03,local_38);
  }
  local_38 = (int *****)uVar2;
  if (pppppiVar5 == (int *****)&DAT_00000003) {
    FUN_0196bf0c(pppppiVar4,&local_60);
    uVar2 = CONCAT44(extraout_r1_04,local_38);
    pppppiVar5 = (int *****)&DAT_00000003;
  }
  local_38 = (int *****)uVar2;
  if (local_60 == (int *****)0x4 || local_60 == (int *****)0x2) {
    FUN_019bb7e0(local_60,(int)((ulonglong)uVar2 >> 0x20));
  }
  if (pppppiVar5 == (int *****)&DAT_00000003) {
    local_48 = pppppiVar9;
    FUN_0196bf0c(pppppiVar4,&local_ac);
    pppppiVar5 = (int *****)&DAT_00000003;
  }
  if (local_ac == (int ****)0x4 || local_ac == (int ****)0x2) {
    FUN_019bb7e0(local_a4,local_a0);
  }
  if (pppppiVar5 != (int *****)&DAT_00000003) {
    param_1[1] = pppppiVar5;
    param_1[3] = local_d0;
    param_1[4] = local_d8;
    uVar6 = 0;
    param_1[2] = pppppiVar9;
    goto LAB_00ef0c8c;
  }
  param_1[1] = pppppiVar9;
  goto LAB_00ef0c88;
  while( true ) {
    pppiVar8 = (int ***)((int)pppiVar8 + 1);
    ppppiVar12[5] = pppiVar8;
    if (ppppiVar12[4] == pppiVar8) break;
LAB_00ef1060:
    pppppiVar5 = (int *****)(uint)*(byte *)((int)ppppiVar12[3] + (int)pppiVar8);
    if (((undefined1 *)0x17 < (undefined1 *)((int)pppppiVar5 + -9)) ||
       ((1 << ((uint)((int)pppppiVar5 + -9) & 0xff) & 0x800013U) == 0)) {
      if (pppppiVar5 != (int *****)0x5b) {
        if (pppppiVar5 != (int *****)0x7b) {
          pppppiVar14 = (int *****)FUN_012c7788(ppppiVar12,&local_68,&DAT_01c1cd08);
          goto LAB_00ef21b0;
        }
        cVar1 = *(char *)(ppppiVar12 + 7);
        *(char *)(ppppiVar12 + 7) = cVar1 + -1;
        if ((char)(cVar1 + -1) != '\0') {
          ppppiVar12[5] = (int ***)((int)pppiVar8 + 1);
          local_38 = (int *****)CONCAT31(uVar3,1);
          local_48 = (int *****)&DAT_80000000;
          local_d4 = (int *****)0x2;
          local_dc = (int *****)0x4a0046;
          local_3c = (int *****)ppppiVar12;
          local_34 = local_68;
          local_30 = pppppiVar4;
          pppppiVar5 = (int *****)&DAT_00000003;
          goto LAB_00ef172c;
        }
        local_48 = (int *****)&DAT_00000018;
        pppppiVar14 = (int *****)FUN_012c6b30(ppppiVar12,&local_48);
        local_e4 = pppppiVar9;
        local_bc = pppppiVar11;
        goto LAB_00ef109c;
      }
      cVar1 = *(char *)(ppppiVar12 + 7);
      *(char *)(ppppiVar12 + 7) = cVar1 + -1;
      if ((char)(cVar1 + -1) == '\0') {
        local_48 = (int *****)&DAT_00000018;
        pppppiVar14 = (int *****)FUN_012c6b30(ppppiVar12,&local_48);
        local_e4 = pppppiVar9;
        local_bc = pppppiVar11;
        goto LAB_00ef109c;
      }
      ppppiVar12[5] = (int ***)((int)pppiVar8 + 1);
      local_e4 = (int *****)0x0;
      local_38 = (int *****)CONCAT31(uVar3,1);
      local_48 = (int *****)0x0;
      local_44 = local_68;
      local_40 = pppppiVar4;
      local_3c = (int *****)ppppiVar12;
      FUN_00e633f4(&local_60,&local_48);
      local_e0 = local_5c;
      pppppiVar7 = local_60;
      if (local_60 == (int *****)&DAT_00000003) {
LAB_00ef1aa0:
        local_48 = local_e0;
        FUN_0196bf0c(pppppiVar4,&local_80);
        pppppiVar7 = (int *****)0x2;
        local_bc = extraout_r1_08;
        local_b8 = pppppiVar9;
        pppppiVar5 = pppppiVar11;
      }
      else {
        if (local_60 == (int *****)0x2) {
LAB_00ef22d4:
          local_e0 = (int *****)FUN_012cc2c0(local_e4,&DAT_01c167a4,&DAT_01d064b8);
          goto LAB_00ef1aa0;
        }
        FUN_00e62b64(&local_60,&local_48);
        pppppiVar9 = local_5c;
        if (local_60 == (int *****)&SUB_00000004) {
          local_e0 = local_5c;
          goto LAB_00ef1aa0;
        }
        if (local_60 == (int *****)&DAT_00000003) {
          local_e4 = (int *****)&DAT_00000001;
          goto LAB_00ef22d4;
        }
        local_bc = local_54;
        local_b8 = local_5c;
        local_e4 = local_58;
        pppppiVar5 = local_60;
      }
      *(char *)(ppppiVar12 + 7) = *(char *)(ppppiVar12 + 7) + '\x01';
      local_60 = pppppiVar7;
      local_5c = local_e0;
      local_58 = pppppiVar5;
      local_54 = local_b8;
      local_50 = local_e4;
      local_4c = local_bc;
      local_30 = (int *****)FUN_014d9568(ppppiVar12);
      uVar15 = CONCAT44(local_e4,local_30);
      local_48 = pppppiVar7;
      local_44 = local_e0;
      local_40 = pppppiVar5;
      local_3c = local_b8;
      local_38 = local_e4;
      local_34 = local_bc;
      if (pppppiVar7 == (int *****)0x2) {
        pppppiVar9 = local_b8;
        pppppiVar11 = local_bc;
        if (local_30 != (int *****)0x0) {
          FUN_00f80260(&local_30);
          uVar15 = CONCAT44(extraout_r1_11,local_30);
        }
        goto LAB_00ef1cd8;
      }
      pppppiVar14 = local_e0;
      uVar2 = CONCAT44(local_e4,local_30);
      if (local_30 != (int *****)0x0) {
        pppppiVar7 = (int *****)0x2;
        pppppiVar14 = local_30;
        uVar2 = uVar15;
      }
      goto LAB_00ef1cec;
    }
  }
LAB_00ef1088:
  local_48 = (int *****)&DAT_00000005;
  pppppiVar14 = (int *****)FUN_012c6b30(ppppiVar12,&local_48);
  local_e4 = pppppiVar9;
  local_bc = pppppiVar11;
LAB_00ef109c:
  FUN_0196bf0c(pppppiVar4,&local_80);
  uVar2 = CONCAT44(extraout_r1_05,local_30);
  pppppiVar7 = (int *****)0x2;
  goto LAB_00ef10b0;
  while( true ) {
    if (pppppiVar7 != (int *****)&DAT_0000000c) goto LAB_00ef18ec;
    iVar13 = thunk_FUN_01bed842(pppppiVar14,"day_of_month",0xc);
    if (iVar13 != 0) goto LAB_00ef18ec;
    if (local_d4 != (int *****)0x2) {
      local_28 = 0xc;
      goto LAB_00ef23a0;
    }
    FUN_00e61db0(&local_60,&local_48);
    local_e0 = local_5c;
    local_d4 = local_60;
    pppppiVar14 = local_5c;
    if (local_60 == (int *****)0x2) break;
LAB_00ef172c:
    pppppiVar11 = local_30;
    pppppiVar9 = local_34;
    FUN_01278730(&local_60,&local_3c);
    if ((char)local_60 == '\x01') {
LAB_00ef1d78:
      pppppiVar5 = local_48;
      pppppiVar14 = local_5c;
      local_48 = (int *****)&DAT_80000000;
      local_60 = (int *****)&DAT_00000008;
      if (pppppiVar5 != (int *****)&DAT_80000000) {
        local_60 = (int *****)0x2;
        local_58 = pppppiVar5;
        local_54 = local_44;
        local_50 = local_40;
      }
      local_5c = pppppiVar9;
      FUN_0196bf0c(pppppiVar11,&local_60);
      if (pppppiVar5 != (int *****)&DAT_80000000) {
        FUN_019bb7e0(pppppiVar5,local_54);
      }
      break;
    }
    if (local_60._1_1_ != '\x01') {
      pppppiVar7 = (int *****)0x0;
      if (local_d4 != (int *****)0x2) {
        pppppiVar7 = local_d4;
      }
      if (pppppiVar5 == (int *****)&DAT_00000003) {
        pppppiVar5 = (int *****)0x2;
      }
      if (local_48 != (int *****)&DAT_80000000) {
        FUN_019bb7e0(local_48,local_44);
      }
      goto LAB_00ef1fa8;
    }
    local_3c[2] = (int ****)0x0;
    local_3c[5] = (int ****)((int)local_3c[5] + 1);
    FUN_01968828(&local_60,local_3c + 3);
    pppppiVar7 = local_58;
    pppppiVar14 = local_5c;
    if (local_60 == (int *****)0x2) goto LAB_00ef1d78;
    pppppiVar11 = (int *****)0x0;
    if (((uint)local_60 & 1) == 0) {
      pppppiVar9 = local_cc;
      if ((int)local_58 < 0) goto LAB_00ef23dc;
      if (local_58 == (int *****)0x0) {
        pppppiVar9 = (int *****)&DAT_00000001;
      }
      else {
        pppppiVar9 = (int *****)FUN_01298504(local_58,1);
        if (pppppiVar9 == (int *****)0x0) goto LAB_00ef23d8;
        pppppiVar11 = pppppiVar7;
      }
      FUN_01bed4e2(pppppiVar9,pppppiVar14,pppppiVar7);
      local_cc = pppppiVar9;
    }
    else {
      pppppiVar9 = local_c8;
      if ((int)local_58 < 0) goto LAB_00ef23dc;
      if (local_58 == (int *****)0x0) {
        pppppiVar9 = (int *****)&DAT_00000001;
      }
      else {
        pppppiVar9 = (int *****)FUN_01298504(local_58,1);
        if (pppppiVar9 == (int *****)0x0) {
LAB_00ef23d8:
          pppppiVar11 = (int *****)&DAT_00000001;
          pppppiVar9 = pppppiVar7;
LAB_00ef23dc:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(pppppiVar11,pppppiVar9);
        }
        pppppiVar11 = pppppiVar7;
      }
      FUN_01bed4e2(pppppiVar9,pppppiVar14,pppppiVar7);
      local_c8 = pppppiVar9;
    }
    if (local_48 != (int *****)&DAT_80000000) {
      FUN_019bb7e0(local_48,local_44);
    }
    local_40 = pppppiVar7;
    local_48 = pppppiVar11;
    local_44 = pppppiVar9;
    if (pppppiVar7 == (int *****)&SUB_00000004) {
      if (*pppppiVar14 == (int ****)0x656d6974) {
        if (pppppiVar5 != (int *****)&DAT_00000003) {
          local_28 = 4;
          local_dc = (int *****)&DAT_0056d018;
LAB_00ef23a0:
          local_2c = (int ****)local_dc;
          local_60 = &local_2c;
          local_5c = (int *****)&DAT_0132b6a0;
          pppppiVar14 = (int *****)FUN_019676ac(&DAT_005ab34f,&local_60);
          break;
        }
        FUN_00e61ac4(&local_60,&local_48);
        local_b8 = local_5c;
        pppppiVar14 = local_5c;
        if (local_60 == (int *****)&DAT_00000003) break;
        local_e4 = local_58;
        local_bc = local_54;
        pppppiVar5 = local_60;
      }
      else {
LAB_00ef18ec:
        pppppiVar14 = (int *****)FUN_00e620c0(&local_48);
        if (pppppiVar14 != (int *****)0x0) break;
      }
      goto LAB_00ef172c;
    }
  }
  local_e0 = pppppiVar14;
  local_e4 = pppppiVar9;
  if (local_48 != (int *****)&DAT_80000000) {
    FUN_019bb7e0(local_48,local_44);
  }
  local_48 = local_e0;
  FUN_0196bf0c(pppppiVar4,&local_80);
  pppppiVar7 = (int *****)0x2;
  pppppiVar5 = local_e0;
  local_bc = (int *****)&local_3c;
LAB_00ef1fa8:
  *(char *)(ppppiVar12 + 7) = *(char *)(ppppiVar12 + 7) + '\x01';
  local_54 = local_b8;
  local_60 = pppppiVar7;
  local_5c = local_e0;
  local_58 = pppppiVar5;
  local_50 = local_e4;
  local_4c = local_bc;
  uVar15 = FUN_012c7b64(ppppiVar12);
  local_30 = (int *****)uVar15;
  local_3c = local_b8;
  local_48 = pppppiVar7;
  local_44 = local_e0;
  local_40 = pppppiVar5;
  local_38 = local_e4;
  local_34 = local_bc;
  if (pppppiVar7 == (int *****)0x2) {
    pppppiVar9 = local_e4;
    pppppiVar11 = local_b8;
    if (local_30 != (int *****)0x0) {
      FUN_00f80260(&local_30);
      uVar15 = CONCAT44(extraout_r1_13,local_30);
      pppppiVar11 = local_b8;
    }
LAB_00ef1cd8:
    local_bc = pppppiVar11;
    local_e4 = pppppiVar9;
    pppppiVar14 = local_e0;
    pppppiVar7 = (int *****)0x2;
    uVar2 = uVar15;
  }
  else {
    pppppiVar14 = local_e0;
    if (local_30 != (int *****)0x0) {
      pppppiVar7 = (int *****)0x2;
      pppppiVar14 = local_30;
    }
    uVar2 = uVar15;
  }
LAB_00ef1cec:
  local_30 = (int *****)uVar2;
  if (pppppiVar7 == (int *****)0x2) {
    pppppiVar9 = local_e4;
    pppppiVar11 = local_bc;
LAB_00ef21b0:
    pppppiVar14 = (int *****)FUN_0127dee8(pppppiVar14,ppppiVar12);
    local_e4 = pppppiVar9;
    local_bc = pppppiVar11;
    goto LAB_00ef109c;
  }
LAB_00ef10b0:
  local_30 = (int *****)uVar2;
  if (local_80 == (int ****)0x4 || local_80 == (int ****)0x2) {
    FUN_019bb7e0(local_78,local_74);
    uVar2 = CONCAT44(extraout_r1_06,local_30);
  }
  local_30 = (int *****)uVar2;
  if (pppppiVar7 == (int *****)0x2) {
    FUN_0196bf0c(pppppiVar4,&local_98);
    uVar2 = CONCAT44(extraout_r1_07,local_30);
    pppppiVar7 = (int *****)0x2;
  }
  local_30 = (int *****)uVar2;
  if (local_98 == (int *****)0x4 || local_98 == (int *****)0x2) {
    FUN_019bb7e0(local_98,(int)((ulonglong)uVar2 >> 0x20));
  }
  if (pppppiVar7 == (int *****)0x2) {
    local_48 = pppppiVar14;
    FUN_0196bf0c(pppppiVar4,&local_ac);
    pppppiVar7 = (int *****)0x2;
  }
  if (local_ac == (int ****)0x4 || local_ac == (int ****)0x2) {
    FUN_019bb7e0(local_a4,local_a0);
  }
  if (pppppiVar7 != (int *****)0x2) {
    param_1[4] = local_b8;
    param_1[1] = pppppiVar7;
    param_1[2] = pppppiVar14;
    param_1[5] = local_e4;
    param_1[6] = local_bc;
    uVar6 = 2;
    param_1[3] = pppppiVar5;
    goto LAB_00ef0c8c;
  }
  param_1[1] = pppppiVar14;
  goto LAB_00ef0c88;
  while( true ) {
    pppiVar8 = (int ***)((int)pppiVar8 + 1);
    ppppiVar12[5] = pppiVar8;
    if (ppppiVar12[4] == pppiVar8) break;
LAB_00ef0dc0:
    uVar10 = (uint)*(byte *)((int)ppppiVar12[3] + (int)pppiVar8);
    if ((0x17 < uVar10 - 9) || ((1 << (uVar10 - 9 & 0xff) & 0x800013U) == 0)) {
      if (uVar10 != 0x5b) {
        if (uVar10 != 0x7b) {
          pppppiVar14 = (int *****)FUN_012c7788(ppppiVar12,&local_68,&DAT_01c1cce8);
          goto LAB_00ef2168;
        }
        cVar1 = *(char *)(ppppiVar12 + 7);
        *(char *)(ppppiVar12 + 7) = cVar1 + -1;
        if ((char)(cVar1 + -1) != '\0') {
          ppppiVar12[5] = (int ***)((int)pppiVar8 + 1);
          local_38 = (int *****)CONCAT31(uVar3,1);
          local_48 = (int *****)&DAT_80000000;
          local_d0 = (int *****)0x2;
          local_b8 = (int *****)&DAT_00000003;
          local_d8 = (int *****)0x49f914;
          local_3c = (int *****)ppppiVar12;
          local_34 = local_68;
          local_30 = pppppiVar4;
          goto LAB_00ef11f8;
        }
        local_48 = (int *****)&DAT_00000018;
        pppppiVar14 = (int *****)FUN_012c6b30(ppppiVar12,&local_48);
        local_dc = pppppiVar9;
        local_e4 = pppppiVar11;
        goto LAB_00ef0dfc;
      }
      cVar1 = *(char *)(ppppiVar12 + 7);
      *(char *)(ppppiVar12 + 7) = cVar1 + -1;
      if ((char)(cVar1 + -1) == '\0') {
        local_48 = (int *****)&DAT_00000018;
        pppppiVar14 = (int *****)FUN_012c6b30(ppppiVar12,&local_48);
        local_dc = pppppiVar9;
        local_e4 = pppppiVar11;
        goto LAB_00ef0dfc;
      }
      ppppiVar12[5] = (int ***)((int)pppiVar8 + 1);
      uVar6 = 0;
      local_38 = (int *****)CONCAT31(uVar3,1);
      local_48 = (int *****)0x0;
      local_44 = local_68;
      local_40 = pppppiVar4;
      local_3c = (int *****)ppppiVar12;
      FUN_00e63264(&local_60,&local_48);
      local_e0 = local_5c;
      pppppiVar9 = local_60;
      if (local_60 == (int *****)&DAT_00000003) {
        pppppiVar7 = local_5c;
LAB_00ef1adc:
        local_48 = pppppiVar7;
        FUN_0196bf0c(pppppiVar4,&local_80);
        pppppiVar9 = (int *****)0x2;
        pppppiVar14 = local_e0;
        local_e0 = pppppiVar7;
        local_e4 = pppppiVar4;
      }
      else {
        if (local_60 == (int *****)0x2) {
LAB_00ef22b0:
          pppppiVar7 = (int *****)FUN_012cc2c0(uVar6,&DAT_01c16784,&DAT_01d064b8);
          goto LAB_00ef1adc;
        }
        FUN_00e62b64(&local_60,&local_48);
        pppppiVar7 = local_5c;
        if (local_60 == (int *****)&SUB_00000004) goto LAB_00ef1adc;
        if (local_60 == (int *****)&DAT_00000003) {
          uVar6 = 1;
          goto LAB_00ef22b0;
        }
        pppppiVar14 = local_5c;
        pppppiVar11 = local_60;
        pppppiVar5 = local_54;
        local_e4 = local_58;
      }
      *(char *)(ppppiVar12 + 7) = *(char *)(ppppiVar12 + 7) + '\x01';
      local_60 = pppppiVar9;
      local_5c = local_e0;
      local_58 = pppppiVar11;
      local_54 = pppppiVar14;
      local_50 = local_e4;
      local_4c = pppppiVar5;
      uVar15 = FUN_014d9568(ppppiVar12);
      local_30 = (int *****)uVar15;
      local_b8 = pppppiVar11;
      local_48 = pppppiVar9;
      local_44 = local_e0;
      local_40 = pppppiVar11;
      local_3c = pppppiVar14;
      local_38 = local_e4;
      local_34 = pppppiVar5;
      if (pppppiVar9 == (int *****)0x2) {
        if (local_30 != (int *****)0x0) {
          FUN_00f80260(&local_30);
          uVar15 = CONCAT44(extraout_r1_10,local_30);
        }
        goto LAB_00ef1c14;
      }
      local_dc = pppppiVar14;
      pppppiVar14 = local_e0;
      if (local_30 != (int *****)0x0) {
        pppppiVar14 = local_30;
        pppppiVar9 = (int *****)0x2;
      }
      goto LAB_00ef1c2c;
    }
  }
LAB_00ef0de8:
  local_48 = (int *****)&DAT_00000005;
  pppppiVar14 = (int *****)FUN_012c6b30(ppppiVar12,&local_48);
  local_dc = pppppiVar9;
  local_e4 = pppppiVar11;
LAB_00ef0dfc:
  FUN_0196bf0c(pppppiVar4,&local_80);
  uVar15 = CONCAT44(extraout_r1,local_30);
  pppppiVar9 = (int *****)0x2;
  goto LAB_00ef0e10;
  while (pppppiVar9 = (int *****)FUN_00e620c0(&local_48), pppppiVar9 == (int *****)0x0) {
LAB_00ef11f8:
    pppppiVar5 = local_30;
    pppppiVar9 = local_34;
    FUN_01278730(&local_60,&local_3c);
    if ((char)local_60 == '\x01') {
LAB_00ef1e00:
      pppppiVar14 = local_44;
      pppppiVar11 = local_48;
      local_e0 = local_5c;
      local_48 = (int *****)&DAT_80000000;
      if (pppppiVar11 == (int *****)&DAT_80000000) {
        local_60 = (int *****)&DAT_00000008;
      }
      else {
        local_60 = (int *****)0x2;
        local_58 = pppppiVar11;
        local_54 = local_44;
        local_50 = local_40;
      }
      local_5c = pppppiVar9;
      FUN_0196bf0c(pppppiVar5,&local_60);
      if (pppppiVar11 != (int *****)&DAT_80000000) {
        FUN_019bb7e0(pppppiVar11,pppppiVar14);
      }
      goto LAB_00ef2090;
    }
    if (local_60._1_1_ != '\x01') {
      pppppiVar9 = (int *****)0x0;
      if (local_d0 != (int *****)0x2) {
        pppppiVar9 = local_d0;
      }
      if (local_b8 == (int *****)&DAT_00000003) {
        local_b8 = (int *****)0x2;
      }
      if (local_48 != (int *****)&DAT_80000000) {
        FUN_019bb7e0(local_48,local_44);
      }
      pppppiVar5 = local_e8;
      goto LAB_00ef20b8;
    }
    local_3c[2] = (int ****)0x0;
    local_3c[5] = (int ****)((int)local_3c[5] + 1);
    FUN_01968828(&local_60,local_3c + 3);
    pppppiVar14 = local_58;
    pppppiVar11 = local_5c;
    if (local_60 == (int *****)0x2) goto LAB_00ef1e00;
    uVar6 = 0;
    if (((uint)local_60 & 1) == 0) {
      pppppiVar9 = local_c8;
      if ((int)local_58 < 0) goto LAB_00ef23ec;
      if (local_58 == (int *****)0x0) {
        pppppiVar9 = (int *****)&DAT_00000001;
        local_c0 = (int *****)0x0;
      }
      else {
        pppppiVar9 = (int *****)FUN_01298504(local_58,1);
        if (pppppiVar9 == (int *****)0x0) goto LAB_00ef23e8;
        local_c0 = pppppiVar14;
      }
      FUN_01bed4e2(pppppiVar9,pppppiVar11,pppppiVar14);
      local_c8 = pppppiVar9;
    }
    else {
      pppppiVar9 = local_c4;
      if ((int)local_58 < 0) goto LAB_00ef23ec;
      if (local_58 == (int *****)0x0) {
        pppppiVar9 = (int *****)&DAT_00000001;
        local_c0 = (int *****)0x0;
      }
      else {
        pppppiVar9 = (int *****)FUN_01298504(local_58,1);
        if (pppppiVar9 == (int *****)0x0) {
LAB_00ef23e8:
          uVar6 = 1;
          pppppiVar9 = pppppiVar14;
LAB_00ef23ec:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar6,pppppiVar9);
        }
        local_c0 = pppppiVar14;
      }
      FUN_01bed4e2(pppppiVar9,pppppiVar11,pppppiVar14);
      local_c4 = pppppiVar9;
    }
    if (local_48 != (int *****)&DAT_80000000) {
      FUN_019bb7e0(local_48,local_44);
    }
    local_40 = pppppiVar14;
    local_48 = local_c0;
    local_44 = pppppiVar9;
    if (pppppiVar14 == (int *****)&SUB_00000004) {
      if (*pppppiVar11 == (int ****)0x656d6974) {
        if (local_b8 == (int *****)&DAT_00000003) {
          FUN_00e61ac4(&local_60,&local_48);
          local_dc = local_5c;
          local_b8 = local_60;
          if (local_60 != (int *****)&DAT_00000003) {
            local_e4 = local_58;
            local_e8 = local_54;
            goto LAB_00ef11f8;
          }
          local_e0 = local_5c;
        }
        else {
          local_28 = 4;
          local_d8 = (int *****)&DAT_0056d018;
LAB_00ef2364:
          local_2c = (int ****)local_d8;
          local_60 = &local_2c;
          local_5c = (int *****)&DAT_0132b6a0;
          local_e0 = (int *****)FUN_019676ac(&DAT_005ab34f,&local_60);
        }
LAB_00ef2274:
        goto LAB_00ef2090;
      }
    }
    else if (pppppiVar14 == (int *****)&DAT_0000000b) {
      iVar13 = thunk_FUN_01bed842(pppppiVar11,"day_of_week",0xb);
      if (iVar13 == 0) {
        if (local_d0 != (int *****)0x2) {
          local_28 = 0xb;
          goto LAB_00ef2364;
        }
        FUN_00e62a6c(&local_60,&local_48);
        local_e0 = local_5c;
        local_d0 = local_60;
        if (local_60 == (int *****)0x2) {
          goto LAB_00ef2274;
        }
        goto LAB_00ef11f8;
      }
    }
  }
  local_e0 = pppppiVar9;
LAB_00ef2090:
  if (local_48 != (int *****)&DAT_80000000) {
    FUN_019bb7e0(local_48,local_44);
  }
  local_48 = local_e0;
  FUN_0196bf0c(pppppiVar4,&local_80);
  pppppiVar9 = (int *****)0x2;
  local_dc = extraout_r2;
  local_e4 = extraout_r3;
  pppppiVar5 = pppppiVar4;
LAB_00ef20b8:
  *(char *)(ppppiVar12 + 7) = *(char *)(ppppiVar12 + 7) + '\x01';
  local_58 = local_b8;
  local_60 = pppppiVar9;
  local_5c = local_e0;
  local_54 = local_dc;
  local_50 = local_e4;
  local_4c = pppppiVar5;
  local_30 = (int *****)FUN_012c7b64(ppppiVar12);
  uVar15 = CONCAT44(&local_40,local_30);
  local_40 = local_b8;
  local_48 = pppppiVar9;
  local_44 = local_e0;
  local_3c = local_dc;
  local_38 = local_e4;
  local_34 = pppppiVar5;
  if (pppppiVar9 == (int *****)0x2) {
    pppppiVar14 = local_b8;
    pppppiVar11 = local_dc;
    pppppiVar5 = local_e4;
    if (local_30 != (int *****)0x0) {
      FUN_00f80260(&local_30);
      uVar15 = CONCAT44(extraout_r1_14,local_30);
    }
LAB_00ef1c14:
    local_dc = pppppiVar14;
    pppppiVar14 = local_e0;
    local_e4 = pppppiVar11;
    pppppiVar9 = (int *****)0x2;
  }
  else {
    pppppiVar14 = local_e0;
    if (local_30 != (int *****)0x0) {
      pppppiVar9 = (int *****)0x2;
      pppppiVar14 = local_30;
    }
  }
LAB_00ef1c2c:
  local_30 = (int *****)uVar15;
  if (pppppiVar9 == (int *****)0x2) {
    pppppiVar9 = local_dc;
    pppppiVar11 = local_e4;
LAB_00ef2168:
    pppppiVar14 = (int *****)FUN_0127dee8(pppppiVar14,ppppiVar12);
    local_dc = pppppiVar9;
    local_e4 = pppppiVar11;
    goto LAB_00ef0dfc;
  }
LAB_00ef0e10:
  local_30 = (int *****)uVar15;
  if (local_80 == (int ****)0x4 || local_80 == (int ****)0x2) {
    FUN_019bb7e0(local_78,local_74);
    uVar15 = CONCAT44(extraout_r1_00,local_30);
  }
  local_30 = (int *****)uVar15;
  if (pppppiVar9 == (int *****)0x2) {
    FUN_0196bf0c(pppppiVar4,&local_98);
    uVar15 = CONCAT44(extraout_r1_01,local_30);
    pppppiVar9 = (int *****)0x2;
  }
  local_30 = (int *****)uVar15;
  if (local_98 == (int *****)0x4 || local_98 == (int *****)0x2) {
    FUN_019bb7e0(local_98,(int)((ulonglong)uVar15 >> 0x20));
  }
  if (pppppiVar9 == (int *****)0x2) {
    local_48 = pppppiVar14;
    FUN_0196bf0c(pppppiVar4,&local_ac);
    pppppiVar9 = (int *****)0x2;
  }
  if (local_ac == (int ****)0x4 || local_ac == (int ****)0x2) {
    FUN_019bb7e0(local_a4,local_a0);
  }
  if (pppppiVar9 == (int *****)0x2) {
LAB_00ef0c84:
    param_1[1] = pppppiVar14;
LAB_00ef0c88:
    uVar6 = 3;
  }
  else {
    param_1[3] = local_b8;
    param_1[1] = pppppiVar9;
    param_1[2] = pppppiVar14;
    param_1[5] = local_e4;
    param_1[6] = pppppiVar5;
    uVar6 = 1;
    param_1[4] = local_dc;
  }
LAB_00ef0c8c:
  *param_1 = uVar6;
  return;
}

