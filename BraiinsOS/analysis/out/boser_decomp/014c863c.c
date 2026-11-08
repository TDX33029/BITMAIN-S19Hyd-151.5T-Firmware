// FUN_014c863c @ 014c863c size=2768 calls_out=15 calls_in=0
// strings: size_bytes | size_bytes | MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements | size_bytes | size_bytes | mime_type

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014c863c(int *param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  bool bVar15;
  char *pcVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  char *local_11c;
  char *local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_fc;
  undefined4 local_f4;
  uint *local_e8;
  char *local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined2 local_c8;
  uint *local_c0;
  uint *local_bc;
  uint *local_b8;
  char *local_b4;
  byte local_b0;
  byte bStack_af;
  undefined1 uStack_ae;
  undefined4 uStack_ad;
  undefined1 uStack_a9;
  char *local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90;
  char *local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  char *local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined2 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined1 auStack_29 [5];
  
  puVar6 = *(uint **)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                 ,0x2c,&DAT_01cf9c14);
  }
  uVar9 = 0x15;
  if ((int)*puVar6 < 0) {
    uVar9 = *puVar6 ^ 0x80000000;
  }
  if (uVar9 == 0x14) {
    uVar9 = puVar6[3];
    if (uVar9 == 0) {
      uVar7 = 0;
LAB_014c8e00:
      iVar11 = FUN_014dee0c(uVar7,&DAT_01cf9ff4,&DAT_01d064b8);
    }
    else {
      uVar14 = puVar6[2];
      FUN_014f412c(&local_b0,uVar14);
      uVar7 = uStack_ad;
      if (local_b0 == 0) {
        uVar2 = CONCAT11(uStack_ae,bStack_af);
        FUN_01bed4e2(&local_48,&uStack_a9,0x1a);
        local_e0 = local_48;
        uStack_dc = local_44;
        uStack_d8 = uStack_40;
        uStack_d4 = uStack_3c;
        uStack_d0 = uStack_38;
        uStack_cc = uStack_34;
        local_c8 = local_30;
        if (uVar9 == 1) {
          iVar11 = FUN_014dee0c(1,&DAT_01cf9ff4,&DAT_01d064b8);
          *param_1 = 2;
          param_1[1] = iVar11;
          return;
        }
        uVar18 = FUN_014c93b8(uVar14 + 0x10);
        iVar11 = (int)((ulonglong)uVar18 >> 0x20);
        if ((int)uVar18 == 1) {
          *param_1 = 2;
          param_1[1] = iVar11;
          return;
        }
        if (uVar9 == 2) {
          iVar11 = FUN_014dee0c(2,&DAT_01cf9ff4,&DAT_01d064b8);
          *param_1 = 2;
          param_1[1] = iVar11;
          return;
        }
        FUN_014ef364(&local_b0,uVar14 + 0x20);
        iVar8 = CONCAT13((undefined1)uStack_ad,CONCAT12(uStack_ae,CONCAT11(bStack_af,local_b0)));
        iVar3 = CONCAT13(uStack_a9,uStack_ad._1_3_);
        if (iVar8 == 2) {
          *param_1 = 2;
          param_1[1] = iVar3;
          return;
        }
        if (uVar9 == 3) {
          uVar7 = 3;
          goto LAB_014c8e00;
        }
        FUN_014ef5f4(&local_b0,uVar14 + 0x30);
        pcVar16 = local_a8;
        local_fc = CONCAT13((undefined1)uStack_ad,CONCAT12(uStack_ae,CONCAT11(bStack_af,local_b0)));
        if (local_fc != -0x7fffffff) {
          local_10c = CONCAT13(uStack_a9,uStack_ad._1_3_);
          if (uVar9 == 4) {
            iVar11 = FUN_014dee0c(4,&DAT_01cf9ff4,&DAT_01d064b8);
          }
          else {
            FUN_014ef5f4(&local_b0,uVar14 + 0x40);
            iVar1 = CONCAT13((undefined1)uStack_ad,CONCAT12(uStack_ae,CONCAT11(bStack_af,local_b0)))
            ;
            if (iVar1 != -0x7fffffff) {
              iVar4 = CONCAT13(uStack_a9,uStack_ad._1_3_);
              param_1[2] = local_fc;
              param_1[3] = local_10c;
              param_1[4] = (int)pcVar16;
              FUN_01bed4e2((int)param_1 + 0x26,&local_e0,0x1a);
              param_1[6] = iVar4;
              param_1[7] = (int)local_a8;
              *param_1 = iVar8;
              param_1[0x10] = iVar11;
              *(undefined4 *)((int)param_1 + 0x22) = uVar7;
              *(undefined2 *)(param_1 + 8) = uVar2;
              param_1[5] = iVar1;
              param_1[1] = iVar3;
              FUN_01bed4e2(&local_b0,param_1,0x44);
              if (uVar9 == 5) {
                return;
              }
              local_48 = (char *)0x5;
              iVar11 = FUN_014dee0c((uVar9 + 0xffffffb & 0xfffffff) + 5,&local_48,&DAT_01cfa01c);
              goto LAB_014c8c90;
            }
            iVar11 = CONCAT13(uStack_a9,uStack_ad._1_3_);
          }
          *param_1 = 2;
          param_1[1] = iVar11;
          if (local_fc == -0x80000000) {
            return;
          }
          goto LAB_014c8d8c;
        }
      }
      iVar11 = CONCAT13(uStack_a9,uStack_ad._1_3_);
    }
LAB_014c8a90:
    *param_1 = 2;
    param_1[1] = iVar11;
    return;
  }
  if (uVar9 != 0x15) {
    iVar11 = FUN_014c82dc(puVar6,auStack_29,&DAT_01cf9f34);
    goto LAB_014c8a90;
  }
  local_c0 = (uint *)puVar6[1];
  local_bc = local_c0 + puVar6[2] * 8;
  local_b4 = (char *)0x0;
  if (puVar6[2] != 0) {
    local_104 = 2;
    iVar11 = -0x7fffffff;
    bVar10 = false;
    bVar15 = false;
    local_fc = -0x7fffffff;
    bVar5 = false;
LAB_014c86e0:
    local_e8 = local_bc;
    pcVar16 = local_b4;
    puVar6 = local_c0;
    do {
      uVar9 = 0x15;
      puVar12 = puVar6 + 4;
      puVar13 = puVar6 + 8;
      if ((int)*puVar6 < 0) {
        uVar9 = *puVar6 ^ 0x80000000;
      }
      local_c0 = puVar13;
      switch(uVar9) {
      case 1:
        bStack_af = (byte)puVar6[1];
        if (4 < bStack_af) {
          bStack_af = 5;
        }
        break;
      default:
        uVar7 = FUN_014c82dc(puVar6,auStack_29,&DAT_01cf9f64);
        uStack_ad._1_3_ = (undefined3)uVar7;
        uStack_a9 = (undefined1)((uint)uVar7 >> 0x18);
        local_b0 = 1;
        goto LAB_014c87dc;
      case 4:
        uVar9 = puVar6[2];
        if (4 < uVar9) {
          uVar9 = 5;
        }
        bStack_af = (byte)uVar9;
        if (puVar6[3] != 0) {
          bStack_af = 5;
        }
        break;
      case 0xc:
        uVar9 = puVar6[2];
        uVar14 = puVar6[3];
        goto LAB_014c87cc;
      case 0xd:
        uVar9 = puVar6[1];
        uVar14 = puVar6[2];
LAB_014c87cc:
        FUN_014eed90(&local_b0,uVar9,uVar14);
        goto LAB_014c87dc;
      case 0xe:
        uVar9 = puVar6[2];
        uVar14 = puVar6[3];
        goto LAB_014c878c;
      case 0xf:
        uVar9 = puVar6[1];
        uVar14 = puVar6[2];
LAB_014c878c:
        FUN_014c8314(&local_b0,uVar9,uVar14);
        goto LAB_014c87dc;
      }
      local_b0 = 0;
LAB_014c87dc:
      pcVar16 = pcVar16 + 1;
      if (local_b0 != 0) {
        iVar8 = CONCAT13(uStack_a9,uStack_ad._1_3_);
        local_b8 = puVar12;
LAB_014c8cbc:
        *param_1 = 2;
        param_1[1] = iVar8;
        local_b4 = pcVar16;
        goto LAB_014c8d68;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bStack_af) {
      case 1:
        goto switchD_014c88c8_caseD_1;
      case 2:
        if (local_104 != 2) {
          uStack_a9 = 1;
          local_44 = 0x13;
          local_48 = "size_bytes_unpacked";
          local_b0 = (byte)&local_48;
          bStack_af = (byte)((uint)&local_48 >> 8);
          uStack_ae = (undefined1)((uint)&local_48 >> 0x10);
          uStack_ad._0_1_ = (undefined1)((uint)&local_48 >> 0x18);
          uStack_ad = CONCAT31(0x32b6a0,(undefined1)uStack_ad);
          local_b8 = puVar12;
          local_b4 = pcVar16;
          iVar8 = FUN_019676ac(&DAT_005ab34f,&local_b0);
          goto LAB_014c8d60;
        }
        local_b8 = (uint *)0x0;
        local_b4 = pcVar16;
        FUN_014ef364(&local_b0,puVar12);
        iVar8 = CONCAT13(uStack_a9,uStack_ad._1_3_);
        local_104 = CONCAT13((undefined1)uStack_ad,CONCAT12(uStack_ae,CONCAT11(bStack_af,local_b0)))
        ;
        if (local_104 == 2) goto LAB_014c8f90;
        local_110 = iVar8;
        goto LAB_014c8a0c;
      case 3:
        if (local_fc != -0x7fffffff) {
          uStack_a9 = 1;
          local_44 = 9;
          local_48 = "file_type";
          local_b0 = (byte)&local_48;
          bStack_af = (byte)((uint)&local_48 >> 8);
          uStack_ae = (undefined1)((uint)&local_48 >> 0x10);
          uStack_ad._0_1_ = (undefined1)((uint)&local_48 >> 0x18);
          uStack_ad = CONCAT31(0x32b6a0,(undefined1)uStack_ad);
          local_b8 = puVar12;
          local_b4 = pcVar16;
          iVar8 = FUN_019676ac(&DAT_005ab34f,&local_b0);
          goto LAB_014c8d60;
        }
        local_b8 = puVar12;
        local_b4 = pcVar16;
        FUN_014c92c0(&local_b0,&local_c0);
        local_fc = CONCAT13((undefined1)uStack_ad,CONCAT12(uStack_ae,CONCAT11(bStack_af,local_b0)));
        if (local_fc == -0x7fffffff) {
          *param_1 = 2;
          param_1[1] = CONCAT13(uStack_a9,uStack_ad._1_3_);
          local_fc = -0x7fffffff;
          goto LAB_014c8d68;
        }
        local_11c = local_a8;
        local_10c = CONCAT13(uStack_a9,uStack_ad._1_3_);
        goto LAB_014c8a0c;
      case 4:
        if (iVar11 != -0x7fffffff) {
          uStack_a9 = 1;
          local_44 = 9;
          local_48 = "mime_type";
          local_b0 = (byte)&local_48;
          bStack_af = (byte)((uint)&local_48 >> 8);
          uStack_ae = (undefined1)((uint)&local_48 >> 0x10);
          uStack_ad._0_1_ = (undefined1)((uint)&local_48 >> 0x18);
          uStack_ad = CONCAT31(0x32b6a0,(undefined1)uStack_ad);
          local_b8 = puVar12;
          local_b4 = pcVar16;
          iVar8 = FUN_019676ac(&DAT_005ab34f,&local_b0);
          goto LAB_014c8d60;
        }
        local_b8 = puVar12;
        local_b4 = pcVar16;
        FUN_014c92c0(&local_b0,&local_c0);
        iVar11 = CONCAT13((undefined1)uStack_ad,CONCAT12(uStack_ae,CONCAT11(bStack_af,local_b0)));
        local_108 = CONCAT13(uStack_a9,uStack_ad._1_3_);
        if (iVar11 == -0x7fffffff) {
          *param_1 = 2;
          param_1[1] = local_108;
          goto LAB_014c8d7c;
        }
        local_118 = local_a8;
        goto LAB_014c8a0c;
      case 5:
        local_b8 = (uint *)0x0;
        local_b4 = pcVar16;
        goto LAB_014c8a0c;
      default:
        if (bVar15) {
          uStack_a9 = 1;
          local_44 = 8;
          local_48 = &DAT_00571158;
          local_b0 = (byte)&local_48;
          bStack_af = (byte)((uint)&local_48 >> 8);
          uStack_ae = (undefined1)((uint)&local_48 >> 0x10);
          uStack_ad._0_1_ = (undefined1)((uint)&local_48 >> 0x18);
          uStack_ad = CONCAT31(0x32b6a0,(undefined1)uStack_ad);
          local_b8 = puVar12;
          local_b4 = pcVar16;
          iVar8 = FUN_019676ac(&DAT_005ab34f,&local_b0);
          goto LAB_014c8d60;
        }
        FUN_014f412c(&local_b0,puVar12);
        if ((local_b0 & 1) != 0) {
          iVar8 = CONCAT13(uStack_a9,uStack_ad._1_3_);
          local_b8 = (uint *)0x0;
          goto LAB_014c8cbc;
        }
        local_f4 = CONCAT13(uStack_a9,uStack_ad._1_3_);
        bVar15 = true;
        local_4a = *(undefined1 *)((undefined2 *)((uint)&local_b0 | 1) + 1);
        local_4c = *(undefined2 *)((uint)&local_b0 | 1);
        local_68 = local_a8;
        uStack_64 = uStack_a4;
        uStack_60 = uStack_a0;
        uStack_5c = uStack_9c;
        uStack_58 = uStack_98;
        uStack_54 = uStack_94;
        local_50 = local_90;
        local_30 = CONCAT11(local_30._1_1_,local_90);
        bVar10 = true;
        puVar6 = puVar13;
        local_48 = local_68;
        local_44 = uStack_64;
        if (puVar13 == local_e8) {
          local_b8 = (uint *)0x0;
          local_c8 = CONCAT11(local_c8._1_1_,local_90);
          local_b4 = pcVar16;
          local_2c = local_4c;
          local_2a = local_4a;
          goto LAB_014c8d10;
        }
      }
    } while( true );
  }
  bVar5 = false;
  local_104 = 2;
  iVar11 = -0x7fffffff;
  local_fc = -0x7fffffff;
  local_e8 = local_bc;
LAB_014c8b10:
  puVar6 = local_c0;
  FUN_014f41e0(&local_b0);
  if ((local_b0 & 1) == 0) {
    local_2c = CONCAT11(uStack_ae,bStack_af);
    local_f4 = CONCAT13(uStack_a9,uStack_ad._1_3_);
    local_30 = CONCAT11(local_30._1_1_,local_90);
    local_c8 = CONCAT11(local_c8._1_1_,local_90);
    local_2a = (undefined1)uStack_ad;
    local_e0 = local_a8;
    uStack_dc = uStack_a4;
    uStack_d8 = uStack_a0;
    uStack_d4 = uStack_9c;
    uStack_d0 = uStack_98;
    uStack_cc = uStack_94;
    goto joined_r0x014c8bd4;
  }
  *param_1 = 2;
  param_1[1] = CONCAT13(uStack_a9,uStack_ad._1_3_);
LAB_014c8d68:
  if (-0x7fffffff < iVar11) {
    FUN_019bb7e0(iVar11,local_108);
  }
LAB_014c8d7c:
  if (local_fc < -0x7ffffffe) {
    return;
  }
LAB_014c8d8c:
  FUN_019bb7e0(local_fc,local_10c);
  return;
switchD_014c88c8_caseD_1:
  if (bVar5) {
    uStack_a9 = 1;
    local_44 = 10;
    local_48 = "size_bytes";
    local_b0 = (byte)&local_48;
    bStack_af = (byte)((uint)&local_48 >> 8);
    uStack_ae = (undefined1)((uint)&local_48 >> 0x10);
    uStack_ad._0_1_ = (undefined1)((uint)&local_48 >> 0x18);
    uStack_ad = CONCAT31(0x32b6a0,(undefined1)uStack_ad);
    local_b8 = puVar12;
    local_b4 = pcVar16;
    iVar8 = FUN_019676ac(&DAT_005ab34f,&local_b0);
    goto LAB_014c8d60;
  }
  local_b8 = (uint *)0x0;
  local_b4 = pcVar16;
  uVar17 = FUN_014c93b8(puVar12);
  iVar8 = (int)(uVar17 >> 0x20);
  if ((uVar17 & 1) != 0) {
LAB_014c8f90:
    *param_1 = 2;
    param_1[1] = iVar8;
    goto LAB_014c8d68;
  }
  bVar5 = true;
  local_114 = iVar8;
LAB_014c8a0c:
  if (local_c0 == local_bc) goto code_r0x014c8a1c;
  goto LAB_014c86e0;
code_r0x014c8a1c:
  if (!bVar10) {
    local_e8 = local_c0;
    goto LAB_014c8b10;
  }
  local_2a = local_4a;
  local_2c = local_4c;
  local_c8 = CONCAT11(local_c8._1_1_,local_50);
  local_e8 = local_c0;
LAB_014c8d10:
  local_e0 = local_68;
  uStack_dc = uStack_64;
  uStack_d8 = uStack_60;
  uStack_d4 = uStack_5c;
  uStack_d0 = uStack_58;
  uStack_cc = uStack_54;
  puVar6 = local_e8;
  local_4c = local_2c;
  local_4a = local_2a;
joined_r0x014c8bd4:
  if (bVar5) {
    *(undefined1 *)((int)param_1 + 0x22) = local_2a;
    *(undefined2 *)(param_1 + 8) = local_2c;
    if (local_fc == -0x7fffffff) {
      local_fc = -0x80000000;
    }
    param_1[2] = local_fc;
    param_1[3] = local_10c;
    param_1[4] = (int)local_11c;
    FUN_01bed4e2((int)param_1 + 0x27,&local_e0,0x19);
    param_1[0x10] = local_114;
    if (iVar11 == -0x7fffffff) {
      iVar11 = -0x80000000;
    }
    param_1[6] = local_108;
    param_1[7] = (int)local_118;
    iVar8 = 0;
    if (local_104 != 2) {
      iVar8 = local_104;
    }
    *(undefined4 *)((int)param_1 + 0x23) = local_f4;
    *param_1 = iVar8;
    param_1[1] = local_110;
    param_1[5] = iVar11;
    FUN_01bed4e2(&local_b0,param_1,0x44);
    if (local_e8 == puVar6) {
      return;
    }
    local_48 = local_b4;
    iVar11 = FUN_014dee0c(local_b4 + ((uint)((int)local_e8 - (int)puVar6) >> 5),&local_48,
                          &DAT_01cfa00c);
LAB_014c8c90:
    *param_1 = 2;
    param_1[1] = iVar11;
    FUN_014c9d78(&local_b0);
    return;
  }
  uStack_a9 = 1;
  local_44 = 10;
  local_48 = "size_bytes";
  local_b0 = (byte)&local_48;
  bStack_af = (byte)((uint)&local_48 >> 8);
  uStack_ae = (undefined1)((uint)&local_48 >> 0x10);
  uStack_ad._0_1_ = (undefined1)((uint)&local_48 >> 0x18);
  uStack_ad = CONCAT31(0x32b6a0,(undefined1)uStack_ad);
  iVar8 = FUN_019676ac(&DAT_0057cd64,&local_b0);
LAB_014c8d60:
  *param_1 = 2;
  param_1[1] = iVar8;
  goto LAB_014c8d68;
}

