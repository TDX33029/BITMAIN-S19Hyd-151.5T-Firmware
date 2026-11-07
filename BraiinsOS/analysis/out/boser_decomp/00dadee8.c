// FUN_00dadee8 @ 00dadee8 size=2400 calls_out=17 calls_in=0
// strings: filled must not become larger than initialized | internal error: entered unreachable code

void FUN_00dadee8(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  uint ***pppuVar1;
  uint ***pppuVar2;
  bool bVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint ****ppppuVar8;
  int iVar9;
  uint ***pppuVar10;
  uint ***unaff_r5;
  undefined4 ****ppppuVar11;
  uint ***unaff_r8;
  uint ***pppuVar12;
  uint ***local_138;
  uint ***local_134;
  uint ***local_130;
  uint ***local_12c;
  uint ***pppuStack_128;
  uint ***local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint ***local_f8;
  uint ***local_f4;
  uint ***local_f0;
  uint ***local_ec;
  uint ***pppuStack_e8;
  uint ***local_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  uint ***local_b8;
  uint ***local_b4;
  uint ***local_b0;
  uint ***local_ac;
  uint ***local_a8;
  uint ***local_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int local_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 ****local_78;
  uint ***local_74;
  undefined4 ****local_70;
  uint ***local_6c;
  uint ***local_68;
  uint ***pppuStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  uint ***local_38;
  uint ***local_34;
  uint ***local_30;
  uint ***pppuStack_2c;
  uint ***local_28;
  
  if (*param_2 != 5 || param_2[1] != 0) {
    if ((char)param_2[0x36] != '\0') goto LAB_00dae010;
    piVar4 = param_2 + 0x32;
    if ((param_2[0x34] == 0) && (param_2[0x33] + 0xfffU >> 0xc == 0)) {
      FUN_01283c9c(piVar4,0x1000);
    }
    iVar9 = param_2[0x33];
    if (iVar9 != 0x7fffffff) {
      iVar7 = param_2[0x34];
      if (iVar7 == iVar9) {
        FUN_01283c9c(piVar4,0x40);
        iVar9 = param_2[0x33];
        iVar7 = param_2[0x34];
      }
      pppuVar10 = (uint ***)(iVar7 - iVar9);
      if (pppuVar10 != (uint ***)0x0) {
        local_b8 = (uint ***)(*piVar4 + iVar9);
        local_ac = (uint ***)0x0;
        local_b0 = (uint ***)0x0;
        local_b4 = pppuVar10;
        FUN_006a0a74(&local_78,param_2 + 0x30,&local_b8,param_2 + 0x1c,0);
        if ((char)local_78 == '\x05') {
LAB_00dae130:
          bVar3 = param_2[0x18] == 0;
          while( true ) {
            if ((!bVar3) && (pppuVar12 = (uint ***)param_2[0x1a], pppuVar12 != (uint ***)0x0)) {
              local_f0 = (uint ***)0x0;
              local_f8 = (uint ***)param_2[0x19];
              ppppuVar11 = (undefined4 ****)0x0;
              local_f4 = pppuVar12;
              if (local_f8 != (uint ***)0x0) {
                ppppuVar11 = &local_f8;
              }
              goto LAB_00dae214;
            }
            FUN_00f86bdc(&local_78,param_2,param_3);
            pppuVar2 = local_68;
            pppuVar1 = local_6c;
            ppppuVar11 = local_70;
            pppuVar12 = local_74;
            if (local_78 == (undefined4 ****)0x2) {
              local_f8 = (uint ***)0x0;
              ppppuVar11 = (undefined4 ****)0x0;
              goto LAB_00dae214;
            }
            if (((uint)local_78 & 1) == 0) goto LAB_00dae1d8;
            unaff_r5 = pppuVar1;
            if (local_74 == (uint ***)0x0) break;
            *(undefined1 *)(param_2 + 0x16) = 1;
            if (param_2[0x18] != 0) {
              (**(code **)(param_2[0x18] + 0x10))(param_2 + 0x1b,param_2[0x19],param_2[0x1a]);
            }
            param_2[0x18] = (int)pppuVar12;
            param_2[0x19] = (int)ppppuVar11;
            param_2[0x1a] = (int)pppuVar1;
            param_2[0x1b] = (int)pppuVar2;
            bVar3 = false;
            unaff_r8 = pppuVar2;
          }
          if (param_2[0x14] != 0) {
            FUN_00f80320(param_2[0x14],param_2[0x15]);
          }
          param_2[0x14] = (int)ppppuVar11;
          param_2[0x15] = (int)pppuVar1;
          uVar5 = 0;
          unaff_r8 = (uint ***)0xce156226;
          ppppuVar11 = (undefined4 ****)0x0;
          goto LAB_00dae490;
        }
        ppppuVar11 = local_78;
        unaff_r8 = local_74;
        goto LAB_00dae3ac;
      }
    }
    goto LAB_00dae008;
  }
  (**(code **)(param_2[3] + 0xc))(&local_b8,param_2[2],param_3);
  if (local_b8 == (uint ***)0x6 && local_b4 == (uint ***)0x0) goto LAB_00dae2e0;
  if (((uint)local_b8 & 7) == 4) {
    local_130 = (uint ***)FUN_00715ebc();
    local_12c = (uint ***)&DAT_01c07620;
LAB_00dae0bc:
    local_134 = (uint ***)0x0;
    local_138 = (uint ***)0x4;
    goto LAB_00dae5c0;
  }
  if (local_b8 != (uint ***)0x5) {
    local_6c = local_ac;
    local_78 = (undefined4 ****)local_b8;
    ppppuVar8 = (uint ****)&local_78;
    local_74 = local_b4;
    local_70 = (undefined4 ****)local_b0;
    local_68 = local_a8;
    pppuStack_64 = local_a4;
    local_60 = local_a0;
    iStack_5c = iStack_9c;
    iStack_58 = iStack_98;
    iStack_54 = iStack_94;
    local_50 = local_90;
    local_4c = local_8c;
    iStack_48 = iStack_88;
    iStack_44 = iStack_84;
    iStack_40 = iStack_80;
    iStack_3c = iStack_7c;
LAB_00dae33c:
    FUN_011e5e98(&local_138,ppppuVar8);
    goto LAB_00dae5c0;
  }
LAB_00dae5b0:
  local_138 = (uint ***)0x5;
  goto LAB_00dae5bc;
LAB_00dae1d8:
  local_f0 = (uint ***)0x0;
  local_f4 = (uint ***)0x0;
  local_f8 = (uint ***)0x1;
  ppppuVar11 = &local_f8;
LAB_00dae214:
  FUN_006a0a74(&local_138,param_2 + 0x30,&local_b8,param_2 + 0x1c,ppppuVar11);
  if (local_f8 == (uint ***)0x0) {
    if ((char)local_138 == '\x05') {
      if (local_b4 < local_b0) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,local_b0,local_b4,&DAT_01ce2a88);
      }
      ppppuVar11 = (undefined4 ****)0x4;
      if (local_b0 == (uint ***)0x0) {
        ppppuVar11 = (undefined4 ****)0x5;
      }
      uVar5 = 0;
      goto LAB_00dae490;
    }
    goto LAB_00dae73c;
  }
  if (local_f4 < local_f0) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,local_f0,local_f4,&DAT_01ce29cc);
  }
  if (local_f0 != (uint ***)0x0) {
    if (param_2[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_00567698,0x10,&DAT_01d1cf04);
    }
    pppuVar12 = (uint ***)param_2[0x1a];
    local_28 = local_f0;
    if (pppuVar12 < local_f0) {
      local_70 = &local_38;
      local_6c = (uint ***)&LAB_01a6a304;
      local_74 = (uint ***)&LAB_01a6a304;
      local_78 = &local_28;
      local_38 = pppuVar12;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ac267,&local_78,&DAT_01d2e534);
    }
    param_2[0x19] = param_2[0x19] + (int)local_f0;
    param_2[0x1a] = (int)pppuVar12 - (int)local_f0;
  }
  if ((char)local_138 != '\x05') goto LAB_00dae73c;
  goto LAB_00dae130;
LAB_00dae73c:
  ppppuVar11 = (undefined4 ****)local_138;
  unaff_r8 = local_134;
LAB_00dae3ac:
  uVar5 = (uint)ppppuVar11 & 0xffffff00;
LAB_00dae490:
  if (local_ac < local_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("filled must not become larger than initialized",0x5d,&DAT_01d1cf14);
  }
  if (((uint)ppppuVar11 & 0xff) == 4) {
    if (pppuVar10 < local_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_b0,pppuVar10,&DAT_01d2e4e0);
    }
    pppuVar10 = (uint ***)(param_2[0x34] - param_2[0x33]);
    if (pppuVar10 < local_b0) {
      local_78 = (undefined4 ****)local_b0;
      local_74 = pppuVar10;
                    /* WARNING: Subroutine does not return */
      FUN_01284540(&local_78);
    }
    param_2[0x33] = param_2[0x33] + (int)local_b0;
    if (local_b0 != (uint ***)0x0) {
      FUN_01283fd8(&local_f8,piVar4,param_2[0x33]);
      if (((uint)local_ec & 1) == 0) {
        local_b8 = (uint ***)&DAT_01d2e520;
      }
      else {
        local_30 = (uint ***)((int)local_f4 + ((uint)local_ec >> 5));
        local_34 = (uint ***)((int)local_f8 - ((uint)local_ec >> 5));
        local_38 = (uint ***)((int)local_f0 + ((uint)local_ec >> 5));
        FUN_01283524(&local_b8,&local_38);
        local_28 = (uint ***)((uint)local_ec >> 5);
        if (local_b0 < (uint ***)((uint)local_ec >> 5)) {
          local_70 = &local_138;
          local_138 = local_b0;
          local_6c = (uint ***)&LAB_01a6a304;
          local_74 = (uint ***)&LAB_01a6a304;
          local_78 = &local_28;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_78,&DAT_01d2e534);
        }
        local_f4 = (uint ***)((int)local_b0 - (int)local_28);
        local_f8 = (uint ***)((int)local_b4 + (int)local_28);
        local_ec = local_ac;
      }
      local_134 = (uint ***)0x0;
      local_138 = (uint ***)0x3;
      local_130 = local_b8;
      local_12c = local_f8;
      pppuStack_128 = local_f4;
      local_124 = local_ec;
      goto LAB_00dae5c0;
    }
LAB_00dae008:
    *(undefined1 *)(param_2 + 0x36) = 1;
LAB_00dae010:
    FUN_00f86bdc(&local_78,param_2,param_3);
    if (local_78 == (undefined4 ****)0x2) {
      pppuVar10 = (uint ***)0x0;
      pppuVar12 = (uint ***)0x6;
LAB_00dae038:
      local_b8 = pppuVar12;
      local_b4 = pppuVar10;
    }
    else if (((uint)local_78 & 1) == 0) {
      pppuVar12 = (uint ***)*param_2;
      pppuVar10 = (uint ***)param_2[1];
      *param_2 = 4;
      param_2[1] = 0;
      if (pppuVar12 != (uint ***)0x4 || pppuVar10 != (uint ***)0x0) {
        local_b0 = (uint ***)param_2[2];
        local_ac = (uint ***)param_2[3];
        local_a8 = (uint ***)param_2[4];
        local_a4 = (uint ***)param_2[5];
        local_a0 = param_2[6];
        iStack_9c = param_2[7];
        iStack_98 = param_2[8];
        iStack_94 = param_2[9];
        local_90 = param_2[10];
        local_8c = param_2[0xb];
        iStack_88 = param_2[0xc];
        iStack_84 = param_2[0xd];
        iStack_80 = param_2[0xe];
        iStack_7c = param_2[0xf];
        goto LAB_00dae038;
      }
      (**(code **)(param_2[0x11] + 0xc))(&local_b8,param_2[0x10],param_3);
    }
    else {
      if (local_74 == (uint ***)0x0) {
        local_b8 = (uint ***)0x4;
        local_b0 = (uint ***)local_70;
        local_ac = local_6c;
        local_a4 = unaff_r5;
      }
      else {
        local_b8 = (uint ***)0x3;
        local_b0 = local_74;
        local_ac = (uint ***)local_70;
        local_a4 = local_68;
      }
      local_a8 = local_6c;
      local_b4 = (uint ***)0x0;
    }
    if (local_b8 != (uint ***)0x6 || local_b4 != (uint ***)0x0) {
      local_f8 = local_b8;
      local_f4 = local_b4;
      local_f0 = local_b0;
      local_ec = local_ac;
      pppuStack_e8 = local_a8;
      local_e4 = local_a4;
      iStack_e0 = local_a0;
      iStack_dc = iStack_9c;
      iStack_d8 = iStack_98;
      iStack_d4 = iStack_94;
      local_d0 = local_90;
      iStack_cc = local_8c;
      iStack_c8 = iStack_88;
      iStack_c4 = iStack_84;
      iStack_c0 = iStack_80;
      iStack_bc = iStack_7c;
      if (((uint)local_b8 & 7) != 3) {
        if (local_b8 == (uint ***)0x4) {
          local_130 = (uint ***)FUN_00715ebc(local_b0,local_ac);
          local_134 = (uint ***)0x0;
          local_138 = (uint ***)0x4;
          local_12c = (uint ***)&DAT_01c07620;
          goto LAB_00dae5c0;
        }
        if (local_b8 != (uint ***)0x5) {
          ppppuVar8 = &local_b8;
          goto LAB_00dae33c;
        }
        goto LAB_00dae5b0;
      }
      if (local_b8 == (uint ***)0x3 && local_b4 == (uint ***)0x0) {
        local_74 = (uint ***)0x0;
        local_78 = (undefined4 ****)0x4;
LAB_00dae3ec:
        pppuStack_64 = local_a4;
        local_68 = local_a8;
        local_6c = local_ac;
        local_70 = (undefined4 ****)local_b0;
        local_38 = local_b0;
        local_34 = local_ac;
        local_30 = local_a8;
        pppuStack_2c = local_a4;
        if (local_a8 != (uint ***)0x0) {
          local_130 = (uint ***)FUN_00fc8ee8();
          local_134 = (uint ***)0x0;
          local_138 = (uint ***)0x4;
          local_12c = (uint ***)&DAT_01c1b0b8;
          (*(code *)local_38[4])(&pppuStack_2c,local_34,local_30);
          if (local_78 != (undefined4 ****)0x4 || local_74 != (uint ***)0x0) {
            FUN_00fc8f64(&local_78);
          }
          goto LAB_00dae5c0;
        }
        (*(code *)local_b0[4])(&pppuStack_2c,local_ac,0);
        if (local_78 == (undefined4 ****)0x4 && local_74 == (uint ***)0x0) goto LAB_00dae5b0;
      }
      else {
        local_70 = (undefined4 ****)local_b0;
        local_6c = local_ac;
        local_68 = local_a8;
        pppuStack_64 = local_a4;
        local_60 = local_a0;
        iStack_5c = iStack_9c;
        iStack_58 = iStack_98;
        iStack_54 = iStack_94;
        local_50 = local_90;
        local_4c = local_8c;
        iStack_48 = iStack_88;
        iStack_44 = iStack_84;
        iStack_40 = iStack_80;
        iStack_3c = iStack_7c;
        local_78 = (undefined4 ****)local_b8;
        local_74 = local_b4;
        if (local_b8 == (uint ***)0x4 && local_b4 == (uint ***)0x0) goto LAB_00dae3ec;
      }
      FUN_00fc8f64(&local_78);
      goto LAB_00dae5b0;
    }
  }
  else if (((uint)ppppuVar11 & 0xff) != 5) {
    iVar9 = param_2[0x14];
    param_2[0x14] = 0;
    local_b8 = (uint ***)
               CONCAT13((char)(uVar5 >> 0x18),CONCAT21((short)(uVar5 >> 8),(char)ppppuVar11));
    local_b4 = unaff_r8;
    if (iVar9 != 0) {
      local_130 = (uint ***)FUN_00715ebc(iVar9);
      local_134 = (uint ***)0x0;
      local_138 = (uint ***)0x4;
      local_12c = (uint ***)&DAT_01c07620;
      FUN_0183a528(&local_b8);
      goto LAB_00dae5c0;
    }
    if ((((uint)ppppuVar11 & 0xff) == 0) && (unaff_r8 == (uint ***)0xce156226)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1ca58);
    }
    if ((char)param_2[0x16] != '\0') {
      local_78 = (undefined4 ****)local_b8;
      local_74 = unaff_r8;
      local_130 = (uint ***)FUN_014333d0(&local_78);
      local_12c = (uint ***)&DAT_01cf5e1c;
      goto LAB_00dae0bc;
    }
    FUN_0183a528(&local_b8,param_2[0x15]);
    goto LAB_00dae010;
  }
LAB_00dae2e0:
  local_138 = (uint ***)0x6;
LAB_00dae5bc:
  local_134 = (uint ***)0x0;
LAB_00dae5c0:
  if (((uint)local_138 & 7) == 4) {
    *param_1 = 4;
    param_1[1] = 0;
    param_1[2] = local_130;
    param_1[3] = local_12c;
  }
  else {
    if (local_138 == (uint ***)0x5) {
      uVar6 = 5;
    }
    else {
      if (local_138 != (uint ***)0x6) {
        *param_1 = local_138;
        param_1[1] = local_134;
        param_1[2] = local_130;
        param_1[3] = local_12c;
        param_1[4] = pppuStack_128;
        param_1[5] = local_124;
        param_1[6] = uStack_120;
        param_1[7] = uStack_11c;
        param_1[8] = uStack_118;
        param_1[9] = uStack_114;
        param_1[10] = local_110;
        param_1[0xb] = uStack_10c;
        param_1[0xc] = uStack_108;
        param_1[0xd] = uStack_104;
        param_1[0xe] = uStack_100;
        param_1[0xf] = uStack_fc;
        return;
      }
      uVar6 = 6;
    }
    *param_1 = uVar6;
    param_1[1] = 0;
  }
  return;
}

