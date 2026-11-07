// FUN_011be3c0 @ 011be3c0 size=5540 calls_out=31 calls_in=3
// strings: 

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffff18 */
/* WARNING: Removing unreachable block (ram,0x011be448) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011be3c0(uint *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  undefined3 uVar4;
  longlong lVar5;
  uint *puVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined3 *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  uint *puVar15;
  uint extraout_r1;
  int *piVar16;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined1 uVar17;
  uint uVar18;
  undefined1 *puVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  bool bVar24;
  undefined8 uVar25;
  uint local_100;
  uint *local_fc;
  uint local_e8;
  uint *local_e4;
  uint local_e0;
  uint uStack_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint *local_cc;
  uint uStack_c8;
  uint local_c4;
  uint uStack_c0;
  uint uStack_bc;
  byte local_b8;
  byte bStack_b7;
  undefined1 uStack_b6;
  uint *puStack_b5;
  uint uStack_b1;
  uint uStack_ad;
  undefined1 uStack_a9;
  uint local_a8;
  uint local_a4;
  uint *local_a0;
  int local_98;
  undefined1 local_94;
  uint *local_90;
  uint uStack_8c;
  uint local_88;
  uint local_80;
  uint *local_7c;
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  uint *puStack_68;
  undefined4 local_64;
  uint *local_60;
  uint *local_5c;
  uint *local_58;
  int local_54;
  uint *local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  uint *local_3c;
  uint *local_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  
  iVar8 = param_2 + 0x18;
  iVar9 = param_2 + 0xc;
  local_fc = &local_e0;
  uVar23 = 0;
  while (*(char *)(param_2 + 0x28) == '\x01') {
    uVar23 = (uint)*(byte *)(param_2 + 0x29);
    bVar24 = false;
LAB_011be498:
    bVar2 = true;
    bVar1 = true;
    if (bVar24) goto LAB_011be504;
    if ((0x17 < uVar23 - 9) || ((1 << (uVar23 - 9 & 0xff) & 0x800013U) == 0)) goto LAB_011be530;
    uVar17 = *(undefined1 *)(param_2 + 0x29);
    cVar7 = *(char *)(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x28) = 0;
    if ((cVar7 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
      iVar22 = *(int *)(param_2 + 0x14);
      if (iVar22 == *(int *)(param_2 + 0xc)) {
        FUN_006029c0(iVar9);
      }
      *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar22) = uVar17;
      *(int *)(param_2 + 0x14) = iVar22 + 1;
    }
  }
  FUN_011ef738(&local_b8,iVar8);
  bVar1 = false;
  if (local_b8 != 5) {
    if (local_b8 == 4) {
      uVar23 = (uint)bStack_b7;
      *(byte *)(param_2 + 0x29) = bStack_b7;
      *(undefined1 *)(param_2 + 0x28) = 1;
      bVar24 = bVar1;
    }
    else {
      local_100 = FUN_0157c4a0(CONCAT13(puStack_b5._0_1_,
                                        CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8))),
                               CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_));
      bVar24 = true;
    }
    goto LAB_011be498;
  }
  bVar2 = false;
LAB_011be504:
  if (bVar1) {
LAB_011be50c:
    *(undefined1 *)param_1 = 6;
    param_1[1] = local_100;
    return;
  }
  if (!bVar2) {
    local_b8 = 5;
    bStack_b7 = 0;
    uStack_b6 = 0;
    puStack_b5 = (uint *)((uint)puStack_b5 & 0xffffff00);
    local_100 = FUN_0157c50c(&local_b8,*(undefined4 *)(param_2 + 0x1c),
                             *(undefined4 *)(param_2 + 0x20));
    goto LAB_011be50c;
  }
LAB_011be530:
  switch(uVar23) {
  case 0x5b:
    cVar7 = *(char *)(param_2 + 0x2c) + -1;
    *(char *)(param_2 + 0x2c) = cVar7;
    if (cVar7 == '\0') {
LAB_011bf72c:
      local_b8 = 0x18;
      bStack_b7 = 0;
      uStack_b6 = 0;
      puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
      uVar23 = FUN_0157c50c(&local_b8,*(undefined4 *)(param_2 + 0x1c),
                            *(undefined4 *)(param_2 + 0x20));
      *(undefined1 *)param_1 = 6;
      param_1[1] = uVar23;
      return;
    }
    uVar17 = *(undefined1 *)(param_2 + 0x29);
    cVar7 = *(char *)(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x28) = 0;
    if ((cVar7 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
      iVar22 = *(int *)(param_2 + 0x14);
      if (iVar22 == *(int *)(param_2 + 0xc)) {
        FUN_006029c0(iVar9);
      }
      *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar22) = uVar17;
      *(int *)(param_2 + 0x14) = iVar22 + 1;
    }
    local_54 = 8;
    puVar10 = (undefined2 *)((uint)&local_80 | 1);
    puVar11 = (undefined3 *)((uint)&local_b8 | 1);
    local_50 = (uint *)0x0;
    local_58 = (uint *)0x0;
    while( true ) {
      if (*(char *)(param_2 + 0x28) == '\0') {
        FUN_011ef738(&local_b8,iVar8);
        if (local_b8 == 5) {
          iVar22 = 8;
          puVar15 = (uint *)0x0;
          goto LAB_011be9ec;
        }
        if (local_b8 != 4) {
          uVar25 = FUN_0157c4a0(CONCAT13(puStack_b5._0_1_,
                                         CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8))),
                                CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_));
          iVar22 = 8;
          puVar15 = (uint *)0x0;
          goto LAB_011bea0c;
        }
        *(byte *)(param_2 + 0x29) = bStack_b7;
        *(undefined1 *)(param_2 + 0x28) = 1;
        bVar3 = bStack_b7;
      }
      else {
        bVar3 = *(byte *)(param_2 + 0x29);
      }
      uVar23 = bVar3 - 9;
      if ((0x17 < uVar23) || ((1 << (uVar23 & 0xff) & 0x800013U) == 0)) break;
      uVar17 = *(undefined1 *)(param_2 + 0x29);
      cVar7 = *(char *)(param_2 + 0x28);
      *(undefined1 *)(param_2 + 0x28) = 0;
      if ((cVar7 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
        iVar22 = *(int *)(param_2 + 0x14);
        if (iVar22 == *(int *)(param_2 + 0xc)) {
          FUN_006029c0(iVar9);
        }
        *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar22) = uVar17;
        *(int *)(param_2 + 0x14) = iVar22 + 1;
      }
    }
    puVar12 = (uint *)0x0;
    if (bVar3 != 0x5d) {
      FUN_011be3c0(&local_b8,param_2);
      if (local_b8 == 6) {
        iVar22 = 8;
        puVar15 = (uint *)0x0;
        uVar25 = CONCAT44(extraout_r1_00,CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_));
      }
      else {
        local_80 = CONCAT31(local_80._1_3_,local_b8);
        local_78._0_4_ = CONCAT13((char)uStack_ad,uStack_b1._1_3_);
        local_78._4_4_ = (uint *)CONCAT13(uStack_a9,uStack_ad._1_3_);
        uVar17 = *(undefined1 *)((int)puVar11 + 2);
        uVar4 = *puVar11;
        *puVar10 = *(undefined2 *)puVar11;
        *(undefined1 *)(puVar10 + 1) = uVar17;
        local_90 = (uint *)CONCAT13(local_90._3_1_,uVar4);
        local_7c = (uint *)CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_);
        uStack_70 = local_a8;
        uStack_6c = local_a4;
        local_40 = (uint)local_78;
        local_3c = local_78._4_4_;
        FUN_0157eb1c(&local_58);
        puVar15 = (uint *)&DAT_00000001;
        iVar20 = 0;
        while( true ) {
          iVar22 = local_54;
          puVar12 = (uint *)(local_54 + iVar20);
          *puVar12 = local_80;
          puVar12[1] = (uint)local_7c;
          puVar12[2] = (uint)local_78;
          puVar12[3] = (uint)local_78._4_4_;
          puVar12[4] = uStack_70;
          puVar12[5] = uStack_6c;
          local_50 = puVar15;
          FUN_011bd868(&local_64,param_2);
          uVar14 = extraout_r1_01;
          if ((char)local_64 == '\x01') break;
          if (local_64._1_1_ != '\x01') goto LAB_011be9ec;
          if (local_64._2_1_ == ']') {
            puVar12 = local_58;
            goto LAB_011bf668;
          }
          if (local_64._2_1_ != ',') {
            local_b8 = 7;
            bStack_b7 = 0;
            uStack_b6 = 0;
            puStack_b5 = (uint *)((uint)puStack_b5 & 0xffffff00);
            uVar25 = FUN_0157c50c(&local_b8,*(undefined4 *)(param_2 + 0x1c),
                                  *(undefined4 *)(param_2 + 0x20));
            goto LAB_011bea0c;
          }
          uVar17 = *(undefined1 *)(param_2 + 0x29);
          cVar7 = *(char *)(param_2 + 0x28);
          *(undefined1 *)(param_2 + 0x28) = 0;
          if ((cVar7 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
            iVar21 = *(int *)(param_2 + 0x14);
            if (iVar21 == *(int *)(param_2 + 0xc)) {
              FUN_006029c0(iVar9);
            }
            *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar21) = uVar17;
            *(int *)(param_2 + 0x14) = iVar21 + 1;
          }
          FUN_011bd868(&local_64,param_2);
          uVar14 = extraout_r1_02;
          if ((char)local_64 != '\0') break;
          if (local_64._1_1_ != '\x01') {
            local_b8 = 5;
            bStack_b7 = 0;
            uStack_b6 = 0;
            puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
            uVar25 = FUN_0157c50c(&local_b8,*(undefined4 *)(param_2 + 0x1c),
                                  *(undefined4 *)(param_2 + 0x20));
            goto LAB_011bea0c;
          }
          if (local_64._2_1_ == ']') {
            local_b8 = 0x15;
            bStack_b7 = 0;
            uStack_b6 = 0;
            puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
            uVar25 = FUN_0157c50c(&local_b8,*(undefined4 *)(param_2 + 0x1c),
                                  *(undefined4 *)(param_2 + 0x20));
            goto LAB_011bea0c;
          }
          FUN_011be3c0(&local_b8,param_2);
          if (local_b8 == 6) {
            uVar25 = CONCAT44(extraout_r1_03,CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_));
            goto LAB_011bea0c;
          }
          local_80 = CONCAT31(local_80._1_3_,local_b8);
          local_78._0_4_ = CONCAT13((char)uStack_ad,uStack_b1._1_3_);
          local_78._4_4_ = (uint *)CONCAT13(uStack_a9,uStack_ad._1_3_);
          uVar17 = *(undefined1 *)((int)puVar11 + 2);
          uVar4 = *puVar11;
          *puVar10 = *(undefined2 *)puVar11;
          *(undefined1 *)(puVar10 + 1) = uVar17;
          local_90 = (uint *)CONCAT13(local_90._3_1_,uVar4);
          local_7c = (uint *)CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_);
          uStack_70 = local_a8;
          uStack_6c = local_a4;
          local_40 = (uint)local_78;
          local_3c = local_78._4_4_;
          if (puVar15 == local_58) {
            FUN_0157eb1c(&local_58);
          }
          iVar20 = iVar20 + 0x18;
          puVar15 = (uint *)((int)puVar15 + 1);
        }
        uVar25 = CONCAT44(uVar14,local_60);
      }
      goto LAB_011bea0c;
    }
LAB_011bf668:
    local_78 = CONCAT44(local_50,local_54);
    uVar17 = 4;
    goto LAB_011bea44;
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
switchD_011be544_caseD_5c:
    if (9 < uVar23 - 0x30) {
      local_b8 = 10;
      bStack_b7 = 0;
      uStack_b6 = 0;
      puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
      puVar15 = (uint *)FUN_0157c50c(&local_b8,*(undefined4 *)(param_2 + 0x1c),
                                     *(undefined4 *)(param_2 + 0x20));
      lVar5 = CONCAT44(local_78._4_4_,(uint)local_78);
      goto LAB_011bf708;
    }
    FUN_011bfde4(&local_80,param_2,1);
    local_d8 = (uint)local_78;
    if (local_80 == 3 && local_7c == (uint *)0x0) {
LAB_011be7f8:
      param_1[1] = (uint)local_78;
      *(undefined1 *)param_1 = 6;
      return;
    }
    uVar17 = 2;
    if (local_80 == 2) {
      local_e0 = (uint)local_78._4_4_ >> 0x1f;
    }
    else {
      local_e0 = 0;
      if (local_80 != 1) {
        uVar17 = 0;
        if (((uint)local_78._4_4_ & 0x7fffffff) < 0x7ff00000) {
          local_b8 = 0;
          FUN_01164f34(&local_b8);
          uVar17 = 2;
        }
        local_e0 = 2;
      }
    }
    goto LAB_011beda0;
  case 0x66:
    uVar17 = *(undefined1 *)(param_2 + 0x29);
    cVar7 = *(char *)(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x28) = 0;
    if ((cVar7 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
      iVar8 = *(int *)(param_2 + 0x14);
      if (iVar8 == *(int *)(param_2 + 0xc)) {
        FUN_006029c0(iVar9);
      }
      *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar8) = uVar17;
      *(int *)(param_2 + 0x14) = iVar8 + 1;
    }
    uVar23 = FUN_011bfb38(param_2,&DAT_00568edc,4);
    if (uVar23 != 0) {
LAB_011be948:
      param_1[1] = uVar23;
      *(undefined1 *)param_1 = 6;
      return;
    }
    local_e8 = CONCAT22(local_e8._2_2_,1);
    break;
  case 0x6e:
    uVar17 = *(undefined1 *)(param_2 + 0x29);
    cVar7 = *(char *)(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x28) = 0;
    if ((cVar7 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
      iVar8 = *(int *)(param_2 + 0x14);
      if (iVar8 == *(int *)(param_2 + 0xc)) {
        FUN_006029c0(iVar9);
      }
      *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar8) = uVar17;
      *(int *)(param_2 + 0x14) = iVar8 + 1;
    }
    uVar23 = FUN_011bfb38(param_2,&DAT_003b6412,3);
    if (uVar23 != 0) goto LAB_011be948;
    local_e8 = local_e8 & 0xffffff00;
    break;
  case 0x74:
    uVar17 = *(undefined1 *)(param_2 + 0x29);
    cVar7 = *(char *)(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x28) = 0;
    if ((cVar7 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
      iVar8 = *(int *)(param_2 + 0x14);
      if (iVar8 == *(int *)(param_2 + 0xc)) {
        FUN_006029c0(iVar9);
      }
      *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar8) = uVar17;
      *(int *)(param_2 + 0x14) = iVar8 + 1;
    }
    uVar23 = FUN_011bfb38(param_2,&DAT_0038bd26,3);
    if (uVar23 != 0) goto LAB_011be948;
    local_e8 = CONCAT22(local_e8._2_2_,0x101);
    break;
  case 0x7b:
    cVar7 = *(char *)(param_2 + 0x2c) + -1;
    *(char *)(param_2 + 0x2c) = cVar7;
    if (cVar7 == '\0') goto LAB_011bf72c;
    uVar17 = *(undefined1 *)(param_2 + 0x29);
    cVar7 = *(char *)(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x28) = 0;
    if ((cVar7 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
      iVar22 = *(int *)(param_2 + 0x14);
      if (iVar22 == *(int *)(param_2 + 0xc)) {
        FUN_006029c0(iVar9);
      }
      *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar22) = uVar17;
      *(int *)(param_2 + 0x14) = iVar22 + 1;
    }
    local_94 = 1;
    local_98 = param_2;
    FUN_011bd49c(&local_b8,&local_98);
    iVar22 = local_98;
    if (local_b8 == 1) {
      puVar12 = (uint *)CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_);
LAB_011be9d8:
      uVar17 = 6;
      local_cc = puVar12;
LAB_011bee60:
      local_d0 = CONCAT31(local_d0._1_3_,uVar17);
    }
    else {
      if (bStack_b7 != 1) {
LAB_011bee50:
        local_c4 = 0;
        local_cc = (uint *)0x0;
        uVar17 = 5;
        goto LAB_011bee60;
      }
      uVar17 = *(undefined1 *)(local_98 + 0x29);
      piVar16 = (int *)(local_98 + 0xc);
      cVar7 = *(char *)(local_98 + 0x28);
      *(undefined1 *)(local_98 + 0x28) = 0;
      if ((cVar7 == '\x01') && (*piVar16 != -0x80000000)) {
        iVar20 = *(int *)(local_98 + 0x14);
        if (iVar20 == *piVar16) {
          FUN_006029c0(piVar16);
        }
        *(undefined1 *)(*(int *)(iVar22 + 0x10) + iVar20) = uVar17;
        *(int *)(iVar22 + 0x14) = iVar20 + 1;
      }
      *(undefined4 *)(iVar22 + 8) = 0;
      FUN_011bca9c(&local_b8,piVar16,iVar22);
      puVar15 = (uint *)CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_);
      if (CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8))) == 2) {
        puVar12 = puVar15;
        goto LAB_011be9d8;
      }
      uVar23 = CONCAT13((char)uStack_ad,uStack_b1._1_3_);
      if (uVar23 == 0x1e) {
        iVar20 = thunk_FUN_016dd50a(puVar15,&DAT_003c519d,0x1e);
        if (iVar20 != 0) {
          puVar12 = (uint *)thunk_FUN_016d4a50(0x1e);
          if (puVar12 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,0x1e);
          }
          uVar18 = 0x1e;
          goto LAB_011bf1d0;
        }
LAB_011bf05c:
        FUN_011bdd3c(&local_b8,iVar22);
        uVar23 = CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8)));
        if (uVar23 == 0) {
          local_cc = (uint *)CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_);
          uVar17 = 6;
          goto LAB_011bee60;
        }
        uVar18 = CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_);
        uStack_a9 = 0;
        uStack_ad = 0;
        uStack_b1 = uStack_b1 & 0xff;
        local_a8 = uVar23;
        local_a4 = uVar18;
        FUN_011b3794(&local_80,&local_b8);
        if ((char)local_80 == '\x06') {
          local_cc = (uint *)FUN_011e19c8(local_7c);
          local_d0 = CONCAT31(local_d0._1_3_,6);
        }
        else {
          local_d0 = local_80;
          local_cc = local_7c;
          uStack_c8 = (uint)local_78;
          local_c4 = (uint)local_78._4_4_;
          uStack_c0 = uStack_70;
          uStack_bc = uStack_6c;
        }
        if (uVar18 != 0) {
          thunk_FUN_016d3fb4(uVar23);
        }
      }
      else {
        if ((char)uStack_ad < '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(0,uVar23);
        }
        if (uVar23 == 0) {
          uVar18 = 0;
          puVar12 = (uint *)&DAT_00000001;
LAB_011bf1d0:
          FUN_016dd1aa(puVar12,puVar15,uVar23);
        }
        else {
          puVar12 = (uint *)thunk_FUN_016d4a50(uVar23);
          if (puVar12 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,uVar23);
          }
          FUN_016dd1aa(puVar12,puVar15,uVar23);
          if (uVar23 == 0x80000000) goto LAB_011bf05c;
          if (uVar23 == 0x80000001) goto LAB_011bee50;
          uVar18 = uVar23;
          if (uVar23 == 0x80000002) goto LAB_011be9d8;
        }
        local_88 = 0;
        local_90 = (uint *)0x0;
        local_80 = uVar18;
        local_7c = puVar12;
        local_78._0_4_ = uVar23;
        FUN_011be384(&local_d0,&local_98);
        if ((char)local_d0 == '\x06') {
          if (uVar18 != 0) {
            thunk_FUN_016d3fb4(puVar12);
          }
        }
        else {
          FUN_0120e850(&local_b8,&local_90,&local_80,&local_d0);
          if (local_b8 != 6) {
            FUN_01164f34(&local_b8);
          }
          puVar13 = (undefined4 *)((uint)&local_80 | 4);
          puVar15 = (uint *)((uint)&local_b8 | 4);
          while( true ) {
            FUN_011bd49c(&local_40,&local_98);
            iVar22 = local_98;
            if ((char)local_40 == '\x01') break;
            if (local_40._1_1_ != '\x01') {
LAB_011bf69c:
              uStack_ad = local_88;
              uStack_b1 = uStack_8c;
              puStack_b5 = local_90;
              local_d0 = CONCAT31(CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8)),5);
              local_cc = local_90;
              uStack_c8 = uStack_8c;
              local_c4 = local_88;
              goto LAB_011bee64;
            }
            uVar17 = *(undefined1 *)(local_98 + 0x29);
            piVar16 = (int *)(local_98 + 0xc);
            cVar7 = *(char *)(local_98 + 0x28);
            *(undefined1 *)(local_98 + 0x28) = 0;
            if ((cVar7 == '\x01') && (*piVar16 != -0x80000000)) {
              iVar20 = *(int *)(local_98 + 0x14);
              if (iVar20 == *piVar16) {
                FUN_006029c0(piVar16);
              }
              *(undefined1 *)(*(int *)(iVar22 + 0x10) + iVar20) = uVar17;
              *(int *)(iVar22 + 0x14) = iVar20 + 1;
            }
            *(undefined4 *)(iVar22 + 8) = 0;
            FUN_011bca9c(&local_40,piVar16,iVar22);
            puVar6 = local_38;
            puVar12 = local_3c;
            local_cc = local_3c;
            if (local_40 == 2) goto LAB_011bf7f0;
            uVar14 = 0;
            if ((int)local_38 < 0) {
LAB_011bf9ec:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(uVar14,local_fc);
            }
            if (local_38 == (uint *)0x0) {
              local_fc = (uint *)&DAT_00000001;
              FUN_016dd1aa(1,local_3c,0);
              puVar12 = (uint *)0x0;
            }
            else {
              local_fc = (uint *)thunk_FUN_016d4a50(local_38);
              if (local_fc == (uint *)0x0) {
                uVar14 = 1;
                local_fc = puVar6;
                goto LAB_011bf9ec;
              }
              FUN_016dd1aa(local_fc,puVar12,puVar6);
              if (puVar6 == (uint *)0x80000001) {
                local_cc = local_fc;
                goto LAB_011bf7f0;
              }
              if (puVar6 == (uint *)&DAT_80000000) goto LAB_011bf69c;
              puVar12 = puVar6;
            }
            local_cc = (uint *)FUN_011bdfc0(iVar22);
            if (local_cc != (uint *)0x0) {
LAB_011bf764:
              if (puVar12 != (uint *)0x0) {
                thunk_FUN_016d3fb4(local_fc);
              }
              goto LAB_011bf7f0;
            }
            FUN_011be3c0(&local_40,iVar22);
            if ((char)local_40 == '\x06') {
              local_cc = local_3c;
              goto LAB_011bf764;
            }
            *puVar15 = local_40;
            puVar15[1] = (uint)local_3c;
            puVar15[2] = (uint)local_38;
            puVar15[3] = local_34;
            puVar15[4] = uStack_30;
            puVar15[5] = uStack_2c;
            local_80 = CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8)));
            local_7c = (uint *)CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_);
            local_78._0_4_ = CONCAT13((char)uStack_ad,uStack_b1._1_3_);
            local_78._4_4_ = (uint *)CONCAT13(uStack_a9,uStack_ad._1_3_);
            uStack_70 = local_a8;
            uStack_6c = local_a4;
            puStack_68 = local_a0;
            if (puVar12 == (uint *)&DAT_80000000) goto LAB_011bf69c;
            if (puVar12 == (uint *)0x80000001) {
              local_cc = local_fc;
              goto LAB_011bf7f0;
            }
            local_5c = puVar6;
            local_60 = local_fc;
            local_58 = (uint *)*puVar13;
            local_54 = puVar13[1];
            local_50 = (uint *)puVar13[2];
            uStack_4c = puVar13[3];
            uStack_48 = puVar13[4];
            uStack_44 = puVar13[5];
            local_64 = puVar12;
            FUN_0120e850(&local_b8,&local_90,&local_64);
            if (local_b8 != 6) {
              FUN_01164f34(&local_b8);
            }
          }
          local_cc = local_3c;
LAB_011bf7f0:
          local_d0 = CONCAT31(local_d0._1_3_,6);
        }
        FUN_01210ef0(&local_90);
      }
    }
LAB_011bee64:
    *(char *)(param_2 + 0x2c) = *(char *)(param_2 + 0x2c) + '\x01';
    while( true ) {
      if (*(char *)(param_2 + 0x28) == '\0') {
        FUN_011ef738(&local_b8,iVar8);
        if (local_b8 == 5) {
          local_b8 = 3;
          bStack_b7 = 0;
          uStack_b6 = 0;
          puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
          puVar15 = (uint *)FUN_0157c50c(&local_b8,*(undefined4 *)(param_2 + 0x1c),
                                         *(undefined4 *)(param_2 + 0x20));
          goto LAB_011bef58;
        }
        if (local_b8 != 4) {
          puVar15 = (uint *)FUN_0157c4a0(CONCAT13(puStack_b5._0_1_,
                                                  CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8))),
                                         CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_));
          goto LAB_011bef58;
        }
        *(byte *)(param_2 + 0x29) = bStack_b7;
        *(undefined1 *)(param_2 + 0x28) = 1;
        bVar3 = bStack_b7;
      }
      else {
        bVar3 = *(byte *)(param_2 + 0x29);
      }
      uVar23 = (uint)bVar3;
      if ((0x17 < uVar23 - 9) || ((1 << (uVar23 - 9 & 0xff) & 0x800013U) == 0)) break;
      uVar17 = *(undefined1 *)(param_2 + 0x29);
      cVar7 = *(char *)(param_2 + 0x28);
      *(undefined1 *)(param_2 + 0x28) = 0;
      if ((cVar7 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
        iVar22 = *(int *)(param_2 + 0x14);
        if (iVar22 == *(int *)(param_2 + 0xc)) {
          FUN_006029c0(iVar9);
        }
        *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar22) = uVar17;
        *(int *)(param_2 + 0x14) = iVar22 + 1;
      }
    }
    if (uVar23 == 0x7d) {
      puVar15 = (uint *)0x0;
      uVar17 = *(undefined1 *)(param_2 + 0x29);
      cVar7 = *(char *)(param_2 + 0x28);
      *(undefined1 *)(param_2 + 0x28) = 0;
      if ((cVar7 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
        iVar8 = *(int *)(param_2 + 0x14);
        if (iVar8 == *(int *)(param_2 + 0xc)) {
          FUN_006029c0(iVar9);
        }
        *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar8) = uVar17;
        *(int *)(param_2 + 0x14) = iVar8 + 1;
      }
    }
    else if (uVar23 == 0x2c) {
      local_b8 = 0x15;
      bStack_b7 = 0;
      uStack_b6 = 0;
      puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
      puVar15 = (uint *)FUN_0157c50c(&local_b8,*(undefined4 *)(param_2 + 0x1c),
                                     *(undefined4 *)(param_2 + 0x20));
    }
    else {
      local_b8 = 0x16;
      bStack_b7 = 0;
      uStack_b6 = 0;
      puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
      puVar15 = (uint *)FUN_0157c50c(&local_b8,*(undefined4 *)(param_2 + 0x1c),
                                     *(undefined4 *)(param_2 + 0x20));
    }
LAB_011bef58:
    local_b8 = (byte)local_d0;
    bStack_b7 = (byte)(local_d0 >> 8);
    uStack_b6 = (undefined1)(local_d0 >> 0x10);
    puStack_b5._0_1_ = (undefined1)(local_d0 >> 0x18);
    puStack_b5._1_3_ = (uint3)local_cc;
    uStack_b1._0_1_ = (undefined1)((uint)local_cc >> 0x18);
    uStack_b1._1_3_ = (undefined3)uStack_c8;
    uStack_ad._0_1_ = (char)(uStack_c8 >> 0x18);
    uStack_ad._1_3_ = (undefined3)local_c4;
    uStack_a9 = (undefined1)(local_c4 >> 0x18);
    local_a8 = uStack_c0;
    local_a4 = uStack_bc;
    local_a0 = puVar15;
    if (local_b8 == 6) {
      local_e4 = local_cc;
      local_e8 = CONCAT31(local_e8._1_3_,6);
      lVar5 = CONCAT44(local_78._4_4_,(uint)local_78);
      if (puVar15 == (uint *)0x0) goto LAB_011beffc;
      uVar23 = *puVar15;
      lVar5 = CONCAT44(local_78._4_4_,(uint)local_78);
      if (uVar23 != 1) goto LAB_011bef9c;
      FUN_009b8520(puVar15 + 1);
      goto LAB_011beff4;
    }
    if (puVar15 == (uint *)0x0) {
      local_e8 = local_d0;
      local_e4 = local_cc;
      local_e0 = uStack_c8;
      uStack_dc = local_c4;
      local_d8 = uStack_c0;
      local_d4 = uStack_bc;
      lVar5 = CONCAT44(local_78._4_4_,(uint)local_78);
    }
    else {
      local_e8 = CONCAT31(local_e8._1_3_,6);
      local_e4 = puVar15;
      FUN_01164f34(&local_b8);
      lVar5 = CONCAT44(local_78._4_4_,(uint)local_78);
    }
    goto LAB_011beffc;
  default:
    if (uVar23 == 0x22) {
      uVar17 = *(undefined1 *)(param_2 + 0x29);
      cVar7 = *(char *)(param_2 + 0x28);
      *(undefined1 *)(param_2 + 0x28) = 0;
      if ((cVar7 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
        iVar8 = *(int *)(param_2 + 0x14);
        if (iVar8 == *(int *)(param_2 + 0xc)) {
          FUN_006029c0(iVar9);
        }
        *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar8) = uVar17;
        *(int *)(param_2 + 0x14) = iVar8 + 1;
      }
      *(undefined4 *)(param_2 + 8) = 0;
      FUN_011bca9c(&local_b8,iVar9,param_2);
      if (CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8))) == 2) {
        param_1[1] = CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_);
        *(undefined1 *)param_1 = 6;
        return;
      }
      if ((local_b8 & 1) == 0) {
        FUN_011c0130(&local_e8,CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_),
                     CONCAT13((char)uStack_ad,uStack_b1._1_3_));
        lVar5 = CONCAT44(local_78._4_4_,(uint)local_78);
      }
      else {
        FUN_005bc420(&local_e8);
        lVar5 = CONCAT44(local_78._4_4_,(uint)local_78);
      }
      goto LAB_011beffc;
    }
    if (uVar23 != 0x2d) goto switchD_011be544_caseD_5c;
    uVar17 = *(undefined1 *)(param_2 + 0x29);
    cVar7 = *(char *)(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x28) = 0;
    if ((cVar7 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
      iVar8 = *(int *)(param_2 + 0x14);
      if (iVar8 == *(int *)(param_2 + 0xc)) {
        FUN_006029c0(iVar9);
      }
      *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar8) = uVar17;
      *(int *)(param_2 + 0x14) = iVar8 + 1;
    }
    FUN_011bfde4(&local_80,param_2,0);
    local_d8 = (uint)local_78;
    if (local_80 == 3 && local_7c == (uint *)0x0) goto LAB_011be7f8;
    if (local_80 == 0) {
      uVar17 = 0;
      if (((uint)local_78._4_4_ & 0x7fffffff) < 0x7ff00000) {
        local_b8 = 0;
        FUN_01164f34(&local_b8);
        uVar17 = 2;
      }
      local_e0 = 2;
    }
    else {
      uVar17 = 2;
      if (local_80 == 1) {
        local_e0 = 0;
      }
      else {
        local_e0 = (uint)local_78._4_4_ >> 0x1f;
      }
    }
LAB_011beda0:
    uStack_dc = 0;
    local_e8 = CONCAT31(local_e8._1_3_,uVar17);
    lVar5 = CONCAT44(local_78._4_4_,(uint)local_78);
LAB_011beffc:
    if ((char)local_e8 == '\x06') {
      puVar15 = local_e4;
LAB_011bf708:
      local_78 = lVar5;
      uVar23 = FUN_011da120(puVar15,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20))
      ;
      param_1[1] = uVar23;
      *(undefined1 *)param_1 = 6;
      return;
    }
  }
  *param_1 = local_e8;
  param_1[1] = (uint)local_e4;
  param_1[2] = local_e0;
  param_1[3] = uStack_dc;
  param_1[4] = local_d8;
  param_1[5] = local_d4;
  return;
LAB_011be9ec:
  local_b8 = 2;
  bStack_b7 = 0;
  uStack_b6 = 0;
  puStack_b5 = (uint *)((uint)puStack_b5 & 0xffffff00);
  uVar25 = FUN_0157c50c(&local_b8,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
LAB_011bea0c:
  uVar23 = (uint)((ulonglong)uVar25 >> 0x20);
  puVar12 = (uint *)uVar25;
  puVar19 = (undefined1 *)((int)puVar15 + 1);
  iVar20 = iVar22;
  while (puVar19 = puVar19 + -1, puVar19 != (undefined1 *)0x0) {
    FUN_01157e90(iVar20);
    iVar20 = iVar20 + 0x18;
    uVar23 = extraout_r1;
  }
  uVar17 = 6;
  local_78 = (ulonglong)uVar23 << 0x20;
  if (local_58 != (uint *)0x0) {
    local_78 = thunk_FUN_016d3fb4(iVar22);
  }
LAB_011bea44:
  *(char *)(param_2 + 0x2c) = *(char *)(param_2 + 0x2c) + '\x01';
  local_80 = CONCAT31(local_80._1_3_,uVar17);
  local_7c = puVar12;
  while( true ) {
    if (*(char *)(param_2 + 0x28) == '\0') {
      FUN_011ef738(&local_b8,iVar8);
      if (local_b8 == 5) {
        local_b8 = 2;
        bStack_b7 = 0;
        uStack_b6 = 0;
        puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
        puVar15 = (uint *)FUN_0157c50c(&local_b8,*(undefined4 *)(param_2 + 0x1c),
                                       *(undefined4 *)(param_2 + 0x20));
        goto LAB_011beb40;
      }
      if (local_b8 != 4) {
        puVar15 = (uint *)FUN_0157c4a0(CONCAT13(puStack_b5._0_1_,
                                                CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8))),
                                       CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_));
        lVar5 = local_78;
        goto LAB_011beb44;
      }
      *(byte *)(param_2 + 0x29) = bStack_b7;
      *(undefined1 *)(param_2 + 0x28) = 1;
      bVar3 = bStack_b7;
    }
    else {
      bVar3 = *(byte *)(param_2 + 0x29);
    }
    uVar23 = (uint)bVar3;
    if ((0x17 < uVar23 - 9) || ((1 << (uVar23 - 9 & 0xff) & 0x800013U) == 0)) break;
    uVar17 = *(undefined1 *)(param_2 + 0x29);
    cVar7 = *(char *)(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x28) = 0;
    if ((cVar7 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
      iVar22 = *(int *)(param_2 + 0x14);
      if (iVar22 == *(int *)(param_2 + 0xc)) {
        FUN_006029c0(iVar9);
      }
      *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar22) = uVar17;
      *(int *)(param_2 + 0x14) = iVar22 + 1;
    }
  }
  if (uVar23 == 0x5d) {
    puVar15 = (uint *)0x0;
    uVar17 = *(undefined1 *)(param_2 + 0x29);
    cVar7 = *(char *)(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x28) = 0;
    if ((cVar7 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
      iVar8 = *(int *)(param_2 + 0x14);
      if (iVar8 == *(int *)(param_2 + 0xc)) {
        FUN_006029c0(iVar9);
      }
      *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar8) = uVar17;
      *(int *)(param_2 + 0x14) = iVar8 + 1;
      lVar5 = local_78;
    }
    else {
LAB_011beb40:
      lVar5 = local_78;
    }
  }
  else if (uVar23 == 0x2c) {
    FUN_011bca44(iVar9);
    FUN_011bd868(&local_40,param_2);
    uVar23 = local_40 & 0xff;
    if (uVar23 == 1) {
LAB_011bf868:
      local_b8 = 0x16;
      bStack_b7 = 0;
      uStack_b6 = 0;
      puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
      puVar15 = (uint *)FUN_0157c50c(&local_b8,*(undefined4 *)(param_2 + 0x1c),
                                     *(undefined4 *)(param_2 + 0x20));
    }
    else {
      uVar18 = local_40 >> 8 & 0xff;
      bVar24 = uVar18 == 1;
      if (bVar24) {
        uVar18 = local_40 >> 0x10 & 0xff;
      }
      if (!bVar24 || uVar18 != 0x5d) goto LAB_011bf868;
      local_b8 = 0x15;
      bStack_b7 = 0;
      uStack_b6 = 0;
      puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
      puVar15 = (uint *)FUN_0157c50c(&local_b8,*(undefined4 *)(param_2 + 0x1c),
                                     *(undefined4 *)(param_2 + 0x20));
    }
    FUN_011c01ac(uVar23,local_3c);
    lVar5 = local_78;
  }
  else {
    local_b8 = 0x16;
    bStack_b7 = 0;
    uStack_b6 = 0;
    puStack_b5 = (uint *)((uint)puStack_b5 & 0xffffff00);
    puVar15 = (uint *)FUN_0157c50c(&local_b8,*(undefined4 *)(param_2 + 0x1c),
                                   *(undefined4 *)(param_2 + 0x20));
    lVar5 = local_78;
  }
LAB_011beb44:
  local_78._4_4_ = (uint *)((ulonglong)lVar5 >> 0x20);
  local_78._0_4_ = (uint)lVar5;
  local_b8 = (byte)local_80;
  bStack_b7 = (byte)(local_80 >> 8);
  uStack_b6 = (undefined1)(local_80 >> 0x10);
  puStack_b5._0_1_ = (undefined1)(local_80 >> 0x18);
  puStack_b5._1_3_ = (uint3)local_7c;
  uStack_b1._0_1_ = (undefined1)((uint)local_7c >> 0x18);
  uStack_b1._1_3_ = (undefined3)lVar5;
  uStack_ad = (uint)((ulonglong)lVar5 >> 0x18);
  uStack_a9 = (undefined1)((ulonglong)lVar5 >> 0x38);
  local_a8 = uStack_70;
  local_a4 = uStack_6c;
  local_e4 = local_7c;
  local_a0 = puVar15;
  local_78 = lVar5;
  if (local_b8 == 6) {
    local_e8 = CONCAT31(local_e8._1_3_,6);
    if (puVar15 != (uint *)0x0) {
      uVar23 = *puVar15;
      if (uVar23 == 1) {
        FUN_009b8520(puVar15 + 1);
      }
      else {
LAB_011bef9c:
        puVar15 = local_a0;
        local_78 = lVar5;
        if ((uVar23 == 0) && (local_a0[2] != 0)) {
          thunk_FUN_016d3fb4(local_a0[1]);
        }
      }
LAB_011beff4:
      thunk_FUN_016d3fb4(puVar15);
      lVar5 = local_78;
    }
  }
  else if (puVar15 == (uint *)0x0) {
    local_e8 = local_80;
    local_e0 = (uint)local_78;
    uStack_dc = (uint)local_78._4_4_;
    local_d8 = uStack_70;
    local_d4 = uStack_6c;
  }
  else {
    local_e8 = CONCAT31(local_e8._1_3_,6);
    local_e4 = puVar15;
    FUN_01164f34(&local_b8);
    lVar5 = local_78;
  }
  goto LAB_011beffc;
}

