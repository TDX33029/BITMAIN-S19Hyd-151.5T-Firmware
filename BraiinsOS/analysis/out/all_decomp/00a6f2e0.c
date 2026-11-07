// FUN_00a6f2e0 @ 00a6f2e0 size=2892 calls_out=28 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a6f2e0(byte *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint *puVar8;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar9;
  uint extraout_r1_01;
  undefined1 *extraout_r1_02;
  uint uVar10;
  uint uVar11;
  undefined1 uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 unaff_r9;
  uint unaff_r10;
  uint uVar16;
  bool bVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  uint local_d4;
  byte local_d0;
  byte bStack_cf;
  undefined2 uStack_ce;
  uint *local_cc;
  int local_c8;
  undefined4 local_c4;
  uint local_c0;
  uint local_bc;
  byte local_b8;
  byte bStack_b7;
  undefined1 uStack_b6;
  uint *puStack_b5;
  int iStack_b1;
  undefined4 uStack_ad;
  undefined1 uStack_a9;
  uint local_a8;
  uint local_a4;
  uint *local_a0;
  uint local_98;
  undefined1 local_94;
  uint *local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  uint uStack_70;
  uint uStack_6c;
  uint *puStack_68;
  uint local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint *local_58;
  uint local_54;
  uint *local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint *local_3c;
  undefined8 local_38;
  uint uStack_30;
  uint local_2c;
  
  uVar10 = *(uint *)(param_2 + 0x10);
  uVar11 = *(uint *)(param_2 + 0x14);
  if (uVar10 <= uVar11) {
LAB_00a6f3c4:
    local_b8 = 5;
LAB_00a6f3c8:
    bStack_b7 = 0;
    uStack_b6 = 0;
    puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
    uVar6 = FUN_01143ab8(param_2,&local_b8);
LAB_00a6f8ac:
    *(undefined4 *)(param_1 + 4) = uVar6;
    *param_1 = 6;
    return;
  }
  iVar5 = *(int *)(param_2 + 0xc);
LAB_00a6f304:
  uVar15 = (uint)*(byte *)(iVar5 + uVar11);
  puVar13 = (undefined1 *)(uVar15 - 9);
  uVar16 = param_2;
  if (puVar13 < &DAT_00000025) {
    puVar14 = (uint *)(&switchD_00a6f31c::switchdataD_00a6f320)[(int)puVar13];
    switch(puVar13) {
    case (undefined1 *)0x0:
    case (undefined1 *)0x1:
    case (undefined1 *)0x4:
    case (undefined1 *)0x17:
      goto switchD_00a6f31c_caseD_0;
    default:
      goto switchD_00a6f31c_caseD_2;
    case (undefined1 *)0x19:
      *(undefined4 *)(param_2 + 8) = 0;
      *(uint *)(param_2 + 0x14) = uVar11 + 1;
      FUN_0157e5fc(&local_b8,(int *)(param_2 + 0xc),param_2);
      if (CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8))) == 2) {
        *(uint *)(param_1 + 4) = CONCAT13((undefined1)iStack_b1,puStack_b5._1_3_);
        *param_1 = 6;
        return;
      }
      puVar7 = (uint *)CONCAT13((char)uStack_ad,iStack_b1._1_3_);
      if ((char)uStack_ad < '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,puVar7);
      }
      if (puVar7 == (uint *)0x0) {
        puVar14 = (uint *)0x0;
        iVar5 = 1;
      }
      else {
        iVar5 = thunk_FUN_016d4a50(puVar7);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,puVar7);
        }
        puVar14 = puVar7;
      }
      uVar4 = FUN_016dd1aa(iVar5,CONCAT13((undefined1)iStack_b1,puStack_b5._1_3_),puVar7);
      puVar13 = extraout_r1_02;
      local_b8 = 3;
      uVar18 = CONCAT44(puVar7,iVar5);
      goto LAB_00a6fb5c;
    case (undefined1 *)0x24:
      *(uint *)(param_2 + 0x14) = uVar11 + 1;
      uVar10 = 0;
      FUN_00a6cf18(&local_40,param_2,0);
      if (local_40 != 3 || local_3c != (uint *)0x0) {
        unaff_r10 = local_38._4_4_;
        if (local_40 == 0) {
          local_b8 = 0;
          uVar19 = CONCAT44(0x7fefffff,local_38._4_4_ & 0x7fffffff);
          if ((local_38._4_4_ & 0x7fffffff) < 0x7ff00000) {
            local_b8 = 0;
            uVar19 = FUN_00a358c8(&local_b8);
            local_b8 = 2;
          }
          uVar10 = 2;
        }
        else {
          local_b8 = 2;
          uVar19 = CONCAT44(&local_38,local_40);
          if (local_40 != 1) {
            uVar10 = local_38._4_4_ >> 0x1f;
            uVar19 = CONCAT44(&local_38,local_40);
          }
        }
        goto LAB_00a6fb58;
      }
LAB_00a6f840:
      uVar10 = (uint)local_38;
      goto LAB_00a6f844;
    }
  }
  puVar14 = &switchD_00a6f3f0::switchdataD_00a6f3f4;
  switch(uVar15) {
  case 0x5b:
    cVar3 = *(char *)(param_2 + 0x1c) + -1;
    *(char *)(param_2 + 0x1c) = cVar3;
    if (cVar3 == '\0') {
      local_b8 = 0x18;
      bStack_b7 = 0;
      uStack_b6 = 0;
      puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
      uVar6 = FUN_01143ab8(param_2,&local_b8);
      *param_1 = 6;
      *(undefined4 *)(param_1 + 4) = uVar6;
      return;
    }
    *(uint *)(param_2 + 0x14) = uVar11 + 1;
    local_60 = CONCAT31(local_60._1_3_,1);
    local_d4 = 8;
    iVar5 = 0;
    local_50 = (uint *)0x0;
    local_54 = 8;
    local_58 = (uint *)0x0;
    local_64 = param_2;
    goto LAB_00a6f520;
  default:
switchD_00a6f31c_caseD_2:
    if (9 < uVar15 - 0x30) {
      local_b8 = 10;
      bStack_b7 = 0;
      uStack_b6 = 0;
      puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
      puVar14 = (uint *)FUN_01143ab8(param_2,&local_b8);
      goto LAB_00a6fef4;
    }
    FUN_00a6cf18(&local_40,param_2,1);
    if (local_40 == 3 && local_3c == (uint *)0x0) goto LAB_00a6f840;
    uVar19 = CONCAT44(&local_38,local_40);
    local_b8 = 2;
    if (local_40 == 2) {
      uVar10 = local_38._4_4_ >> 0x1f;
    }
    else {
      uVar10 = 0;
      uVar19 = CONCAT44(&local_38,local_40);
      if (local_40 != 1) {
        local_b8 = 0;
        uVar19 = CONCAT44(0x7fefffff,local_38._4_4_ & 0x7fffffff);
        if ((local_38._4_4_ & 0x7fffffff) < 0x7ff00000) {
          local_b8 = 0;
          uVar19 = FUN_00a358c8(&local_b8);
          local_b8 = 2;
        }
        uVar10 = 2;
      }
    }
    unaff_r10 = local_38._4_4_;
LAB_00a6fb58:
    puVar13 = (undefined1 *)((ulonglong)uVar19 >> 0x20);
    uVar16 = (uint)local_38;
    uVar4 = (short)uVar19;
    uVar18 = (ulonglong)uVar10;
    goto LAB_00a6fb5c;
  case 0x66:
    uVar9 = uVar11 + 1;
    *(uint *)(param_2 + 0x14) = uVar9;
    uVar15 = uVar10;
    if (uVar10 < uVar9) {
      uVar15 = uVar9;
    }
    if (uVar10 <= uVar9) goto LAB_00a6f898;
    cVar3 = *(char *)(iVar5 + uVar9);
    uVar10 = uVar11 + 2;
    *(uint *)(param_2 + 0x14) = uVar10;
    if (cVar3 == 'a') {
      if (uVar10 == uVar15) goto LAB_00a6f898;
      cVar3 = *(char *)(iVar5 + uVar10);
      uVar10 = uVar11 + 3;
      *(uint *)(param_2 + 0x14) = uVar10;
      if (cVar3 == 'l') {
        if (uVar10 == uVar15) goto LAB_00a6f898;
        cVar3 = *(char *)(iVar5 + uVar10);
        uVar10 = uVar11 + 4;
        *(uint *)(param_2 + 0x14) = uVar10;
        if (cVar3 == 's') {
          if (uVar10 == uVar15) goto LAB_00a6f898;
          cVar3 = *(char *)(iVar5 + uVar10);
          *(uint *)(param_2 + 0x14) = uVar11 + 5;
          if (cVar3 == 'e') {
            local_b8 = 1;
            puVar13 = (undefined1 *)0x0;
            uVar4 = 0x65;
            uVar18 = CONCAT44(param_1,unaff_r9);
            goto LAB_00a6fb5c;
          }
        }
      }
    }
    break;
  case 0x6e:
    uVar9 = uVar11 + 1;
    *(uint *)(param_2 + 0x14) = uVar9;
    uVar15 = uVar10;
    if (uVar10 < uVar9) {
      uVar15 = uVar9;
    }
    if (uVar10 <= uVar9) {
LAB_00a6f898:
      local_b8 = 5;
LAB_00a6f89c:
      bStack_b7 = 0;
      uStack_b6 = 0;
      puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
      uVar6 = FUN_00f4c908(param_2,&local_b8);
      goto LAB_00a6f8ac;
    }
    cVar3 = *(char *)(iVar5 + uVar9);
    uVar10 = uVar11 + 2;
    *(uint *)(param_2 + 0x14) = uVar10;
    if (cVar3 == 'u') {
      if (uVar10 == uVar15) goto LAB_00a6f898;
      cVar3 = *(char *)(iVar5 + uVar10);
      uVar10 = uVar11 + 3;
      *(uint *)(param_2 + 0x14) = uVar10;
      if (cVar3 != 'l') break;
      if (uVar10 == uVar15) goto LAB_00a6f898;
      cVar3 = *(char *)(iVar5 + uVar10);
      puVar13 = (undefined1 *)(uVar11 + 4);
      *(undefined1 **)(param_2 + 0x14) = puVar13;
      if (cVar3 == 'l') {
        local_b8 = 0;
        uVar4 = 0x6c;
        uVar18 = CONCAT44(param_1,unaff_r9);
        goto LAB_00a6fb5c;
      }
    }
    break;
  case 0x74:
    uVar9 = uVar11 + 1;
    *(uint *)(param_2 + 0x14) = uVar9;
    uVar15 = uVar10;
    if (uVar10 < uVar9) {
      uVar15 = uVar9;
    }
    if (uVar10 <= uVar9) goto LAB_00a6f898;
    cVar3 = *(char *)(iVar5 + uVar9);
    uVar10 = uVar11 + 2;
    *(uint *)(param_2 + 0x14) = uVar10;
    if (cVar3 == 'r') {
      if (uVar10 == uVar15) goto LAB_00a6f898;
      cVar3 = *(char *)(iVar5 + uVar10);
      uVar10 = uVar11 + 3;
      *(uint *)(param_2 + 0x14) = uVar10;
      if (cVar3 != 'u') break;
      if (uVar10 == uVar15) goto LAB_00a6f898;
      cVar3 = *(char *)(iVar5 + uVar10);
      *(uint *)(param_2 + 0x14) = uVar11 + 4;
      if (cVar3 == 'e') {
        puVar13 = &DAT_00000001;
        local_b8 = 1;
        uVar4 = 0x65;
        uVar18 = CONCAT44(param_1,unaff_r9);
        goto LAB_00a6fb5c;
      }
    }
    break;
  case 0x7b:
    cVar3 = *(char *)(param_2 + 0x1c) + -1;
    *(char *)(param_2 + 0x1c) = cVar3;
    if (cVar3 == '\0') {
      local_b8 = 0x18;
      goto LAB_00a6f3c8;
    }
    *(uint *)(param_2 + 0x14) = uVar11 + 1;
    local_94 = 1;
    local_98 = param_2;
    FUN_0134da08(&local_b8,&local_98);
    uVar10 = local_98;
    if (local_b8 == 1) {
      puVar14 = (uint *)CONCAT13((undefined1)iStack_b1,puStack_b5._1_3_);
    }
    else {
      if (bStack_b7 != 1) {
        local_c4 = 0;
        local_cc = (uint *)0x0;
        local_d0 = 5;
        goto LAB_00a6fa3c;
      }
      *(undefined4 *)(local_98 + 8) = 0;
      *(int *)(local_98 + 0x14) = *(int *)(local_98 + 0x14) + 1;
      FUN_0157e5fc(&local_40,local_98 + 0xc,local_98);
      uVar11 = (uint)local_38;
      puVar14 = local_3c;
      if (local_40 != 2) {
        if ((uint)local_38 == 0x1e) {
          uVar16 = 0x1e;
          iVar5 = thunk_FUN_016dd50a(local_3c,&DAT_003c519d,0x1e);
          if (iVar5 != 0) {
            iStack_b1 = thunk_FUN_016d4a50(0x1e);
            bVar17 = iStack_b1 == 0;
            if (bVar17) {
              uVar16 = 1;
              iStack_b1 = 0x1e;
            }
            uStack_ad._0_1_ = (char)((uint)iStack_b1 >> 0x18);
            puStack_b5._1_3_ = (uint3)uVar16;
            iStack_b1 = iStack_b1 << 8;
            if (bVar17) goto LAB_00a6fbd4;
            goto LAB_00a6fc2c;
          }
        }
        else {
          FUN_00a8a700(&local_b8,(uint)local_38,0,1,1);
          uVar16 = CONCAT13((undefined1)iStack_b1,puStack_b5._1_3_);
          if (CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8))) == 1) {
LAB_00a6fbd4:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar16,CONCAT13((char)uStack_ad,iStack_b1._1_3_));
          }
LAB_00a6fc2c:
          puVar7 = (uint *)CONCAT13((char)uStack_ad,iStack_b1._1_3_);
          FUN_016dd1aa(puVar7,puVar14,uVar11);
          if (uVar16 != 0x80000000) {
            local_88 = 0;
            local_90 = (uint *)0x0;
            local_40 = uVar16;
            local_3c = puVar7;
            local_38._0_4_ = uVar11;
            FUN_00a70208(&local_d0,&local_98);
            if (local_d0 == 6) {
              if (uVar16 != 0) {
                thunk_FUN_016d3fb4(puVar7);
              }
              goto LAB_00a6fec8;
            }
            FUN_00a40030(&local_b8,&local_90,&local_40,&local_d0);
            if (local_b8 != 6) {
              FUN_00a358c8(&local_b8);
            }
            puVar14 = (uint *)((uint)&local_80 | 4);
            puVar7 = (uint *)((uint)&local_b8 | 4);
            goto LAB_00a6fd38;
          }
        }
        FUN_00a700dc(&local_b8,uVar10);
        iVar5 = CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8)));
        if (iVar5 == 0) {
          local_cc = (uint *)CONCAT13((undefined1)iStack_b1,puStack_b5._1_3_);
          local_d0 = 6;
        }
        else {
          iVar1 = CONCAT13((undefined1)iStack_b1,puStack_b5._1_3_);
          FUN_00a70244(&local_b8,iVar5,iVar1);
          if (local_b8 == 6) {
            local_cc = (uint *)FUN_00a7036c(CONCAT13((undefined1)iStack_b1,puStack_b5._1_3_));
            local_d0 = 6;
          }
          else {
            uStack_ce = CONCAT11(puStack_b5._0_1_,uStack_b6);
            local_cc = (uint *)CONCAT13((undefined1)iStack_b1,puStack_b5._1_3_);
            local_c8 = CONCAT13((char)uStack_ad,iStack_b1._1_3_);
            local_c4 = CONCAT13(uStack_a9,uStack_ad._1_3_);
            local_d0 = local_b8;
            bStack_cf = bStack_b7;
            local_c0 = local_a8;
            local_bc = local_a4;
          }
          if (iVar1 != 0) {
            thunk_FUN_016d3fb4(iVar5);
          }
        }
        goto LAB_00a6fa3c;
      }
    }
    local_d0 = 6;
    local_cc = puVar14;
    goto LAB_00a6fa3c;
  }
  local_b8 = 9;
  goto LAB_00a6f89c;
switchD_00a6f31c_caseD_0:
  uVar11 = uVar11 + 1;
  *(uint *)(param_2 + 0x14) = uVar11;
  if (uVar10 == uVar11) goto LAB_00a6f3c4;
  goto LAB_00a6f304;
LAB_00a6fd38:
  FUN_0134da08(&local_b8,&local_98);
  uVar10 = local_98;
  if (local_b8 != 1) {
    if (bStack_b7 != 1) {
      local_d0 = 5;
      uStack_ad = local_88;
      iStack_b1 = iStack_8c;
      puStack_b5 = local_90;
      bStack_cf = local_b8;
      uStack_ce = (undefined2)(CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8)) >> 8);
      local_cc = local_90;
      local_c8 = iStack_8c;
      local_c4 = local_88;
      goto LAB_00a6fa3c;
    }
    FUN_00a7f374(&local_b8,local_98);
    uVar11 = CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8)));
    if (uVar11 == 0x80000000) goto LAB_00a6fe60;
    uVar6 = CONCAT13((undefined1)iStack_b1,puStack_b5._1_3_);
    uVar2 = CONCAT13((char)uStack_ad,iStack_b1._1_3_);
    puVar8 = (uint *)FUN_0114576c(uVar10);
    if (puVar8 != (uint *)0x0) {
LAB_00a6feac:
      if (uVar11 != 0) {
        thunk_FUN_016d3fb4(uVar6);
      }
      goto LAB_00a6febc;
    }
    FUN_00a6f2e0(&local_b8,uVar10);
    if (local_b8 == 6) {
      puVar8 = (uint *)CONCAT13((undefined1)iStack_b1,puStack_b5._1_3_);
      goto LAB_00a6feac;
    }
    local_40 = CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8)));
    local_3c = (uint *)CONCAT13((undefined1)iStack_b1,puStack_b5._1_3_);
    local_38._0_4_ = CONCAT13((char)uStack_ad,iStack_b1._1_3_);
    local_38._4_4_ = CONCAT13(uStack_a9,uStack_ad._1_3_);
    uStack_30 = local_a8;
    local_2c = local_a4;
    *puVar7 = local_40;
    puVar7[1] = (uint)local_3c;
    puVar7[2] = (uint)local_38;
    puVar7[3] = local_38._4_4_;
    puVar7[4] = local_a8;
    puVar7[5] = local_a4;
    local_80 = CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8)));
    uStack_7c = CONCAT13((undefined1)iStack_b1,puStack_b5._1_3_);
    uStack_78 = CONCAT13((char)uStack_ad,iStack_b1._1_3_);
    local_74 = CONCAT13(uStack_a9,uStack_ad._1_3_);
    uStack_70 = local_a8;
    uStack_6c = local_a4;
    puStack_68 = local_a0;
    local_58 = (uint *)*puVar14;
    local_54 = puVar14[1];
    local_50 = (uint *)puVar14[2];
    uStack_4c = puVar14[3];
    uStack_48 = puVar14[4];
    uStack_44 = puVar14[5];
    local_64 = uVar11;
    local_60 = uVar6;
    uStack_5c = uVar2;
    FUN_00a40030(&local_b8,&local_90,&local_64);
    if (local_b8 != 6) {
      FUN_00a358c8(&local_b8);
    }
    goto LAB_00a6fd38;
  }
LAB_00a6fe60:
  puVar8 = (uint *)CONCAT13((undefined1)iStack_b1,puStack_b5._1_3_);
LAB_00a6febc:
  local_d0 = 6;
  local_cc = puVar8;
LAB_00a6fec8:
  FUN_00a5be54(&local_90);
LAB_00a6fa3c:
  *(char *)(param_2 + 0x1c) = *(char *)(param_2 + 0x1c) + '\x01';
  puVar7 = (uint *)FUN_00a6ef8c(param_2);
  puVar14 = local_cc;
  local_b8 = local_d0;
  bStack_b7 = bStack_cf;
  uStack_b6 = (undefined1)uStack_ce;
  puStack_b5._0_1_ = (undefined1)((ushort)uStack_ce >> 8);
  puStack_b5._1_3_ = (uint3)local_cc;
  iStack_b1._0_1_ = (undefined1)((uint)local_cc >> 0x18);
  iStack_b1._1_3_ = (undefined3)local_c8;
  uStack_ad._0_1_ = (char)((uint)local_c8 >> 0x18);
  uStack_ad._1_3_ = (undefined3)local_c4;
  uStack_a9 = (undefined1)((uint)local_c4 >> 0x18);
  local_a8 = local_c0;
  local_a4 = local_bc;
  local_a0 = puVar7;
  if (local_d0 != 6) {
    if (puVar7 == (uint *)0x0) {
      puVar13 = (undefined1 *)(uint)bStack_cf;
      uVar16 = local_c0;
      unaff_r10 = local_bc;
      uVar4 = uStack_ce;
      uVar18 = CONCAT44(local_c4,local_c8);
      if (local_d0 != 6) goto LAB_00a6fb5c;
      goto LAB_00a6fef4;
    }
    goto LAB_00a6faac;
  }
  if (puVar7 == (uint *)0x0) goto LAB_00a6fef4;
  FUN_005c3974(puVar7);
  goto LAB_00a6fa90;
LAB_00a6f520:
  puVar14 = local_50;
  FUN_00a6bf5c(&local_b8,&local_64);
  uVar18 = CONCAT44(local_50,local_54);
  uVar10 = extraout_r1;
  if (local_b8 == 1) goto LAB_00a6f858;
  if (bStack_b7 != 1) {
    uVar12 = 4;
    puVar7 = local_58;
    goto LAB_00a6f990;
  }
  FUN_00a6f2e0(&local_b8,local_64);
  uVar10 = extraout_r1_00;
  if (local_b8 == 6) goto LAB_00a6f858;
  local_38._0_4_ = CONCAT13((char)uStack_ad,iStack_b1._1_3_);
  local_38._4_4_ = CONCAT13(uStack_a9,uStack_ad._1_3_);
  uVar4 = *(undefined2 *)((uint)&local_b8 | 1);
  local_3c = (uint *)CONCAT13((undefined1)iStack_b1,puStack_b5._1_3_);
  *(undefined1 *)((undefined2 *)((uint)&local_40 | 1) + 1) =
       *(undefined1 *)((undefined2 *)((uint)&local_b8 | 1) + 1);
  *(undefined2 *)((uint)&local_40 | 1) = uVar4;
  uStack_30 = local_a8;
  local_2c = local_a4;
  local_40 = CONCAT31(local_40._1_3_,local_b8);
  if (puVar14 == local_58) {
    FUN_0157eb1c(&local_58);
    local_d4 = local_54;
  }
  local_50 = (uint *)((int)puVar14 + 1);
  puVar14 = (uint *)(local_d4 + iVar5);
  iVar5 = iVar5 + 0x18;
  *puVar14 = local_40;
  puVar14[1] = (uint)local_3c;
  puVar14[2] = (uint)local_38;
  puVar14[3] = local_38._4_4_;
  puVar14[4] = uStack_30;
  puVar14[5] = local_2c;
  goto LAB_00a6f520;
LAB_00a6f858:
  puVar7 = (uint *)CONCAT13((undefined1)iStack_b1,puStack_b5._1_3_);
  iVar5 = (int)puVar14 + 1;
  uVar11 = local_d4;
  while (iVar5 = iVar5 + -1, iVar5 != 0) {
    FUN_00a5ed8c(uVar11);
    uVar11 = uVar11 + 0x18;
    uVar10 = extraout_r1_01;
  }
  uVar12 = 6;
  uVar18 = (ulonglong)uVar10 << 0x20;
  if (local_58 != (uint *)0x0) {
    uVar18 = thunk_FUN_016d3fb4(local_d4);
  }
LAB_00a6f990:
  *(char *)(param_2 + 0x1c) = *(char *)(param_2 + 0x1c) + '\x01';
  local_40 = CONCAT31(local_40._1_3_,uVar12);
  local_3c = puVar7;
  local_38 = uVar18;
  puVar7 = (uint *)FUN_00a6cce8(param_2);
  puVar14 = local_3c;
  local_a8 = uStack_30;
  local_a4 = local_2c;
  local_b8 = (byte)local_40;
  bStack_b7 = (byte)(local_40 >> 8);
  uStack_b6 = (undefined1)(local_40 >> 0x10);
  puStack_b5._0_1_ = (undefined1)(local_40 >> 0x18);
  puStack_b5._1_3_ = (uint3)local_3c;
  iStack_b1._0_1_ = (undefined1)((uint)local_3c >> 0x18);
  iStack_b1._1_3_ = (undefined3)local_38;
  uStack_ad = (undefined4)(local_38 >> 0x18);
  uStack_a9 = (undefined1)(local_38 >> 0x38);
  local_a0 = puVar7;
  if ((local_40 & 0xff) != 6) {
    if (puVar7 == (uint *)0x0) {
      uVar4 = (undefined2)(local_40 >> 0x10);
      puVar13 = (undefined1 *)(uint)bStack_b7;
      uVar16 = uStack_30;
      unaff_r10 = local_2c;
      uVar18 = local_38;
      if ((local_40 & 0xff) != 6) {
LAB_00a6fb5c:
        *(uint **)(param_1 + 4) = puVar14;
        *(int *)(param_1 + 8) = (int)uVar18;
        *(undefined2 *)(param_1 + 2) = uVar4;
        param_1[1] = (byte)puVar13;
        *param_1 = local_b8;
        *(int *)(param_1 + 0xc) = (int)(uVar18 >> 0x20);
        *(uint *)(param_1 + 0x10) = uVar16;
        *(uint *)(param_1 + 0x14) = unaff_r10;
        return;
      }
      goto LAB_00a6fef4;
    }
LAB_00a6faac:
    puVar14 = local_a0;
    FUN_00a358c8(&local_b8);
    goto LAB_00a6fef4;
  }
  if (puVar7 == (uint *)0x0) goto LAB_00a6fef4;
  FUN_005c3974(puVar7);
LAB_00a6fa90:
  thunk_FUN_016d3fb4(puVar7);
LAB_00a6fef4:
  uVar10 = FUN_00a6cecc(puVar14,param_2);
LAB_00a6f844:
  *(uint *)(param_1 + 4) = uVar10;
  *param_1 = 6;
  return;
}

