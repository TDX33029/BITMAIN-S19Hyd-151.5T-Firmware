// FUN_01113be4 @ 01113be4 size=3928 calls_out=23 calls_in=2
// strings: 

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffff4f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01113be4(char *param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint *extraout_r1;
  uint *extraout_r1_00;
  uint *extraout_r1_01;
  uint *extraout_r1_02;
  uint uVar12;
  uint *extraout_r2;
  uint *extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  int *piVar16;
  uint *puVar17;
  char cVar18;
  uint *puVar19;
  uint *unaff_r8;
  uint *unaff_r10;
  bool bVar20;
  uint *local_d8;
  uint *local_d4;
  char local_d0;
  char cStack_cf;
  ushort uStack_ce;
  uint *local_cc;
  uint *local_c8;
  uint *local_c4;
  uint *puStack_c0;
  uint *local_bc;
  char local_b8;
  char cStack_b7;
  undefined1 uStack_b6;
  uint *puStack_b5;
  uint *puStack_b1;
  uint *puStack_ad;
  undefined1 uStack_a9;
  uint *local_a8;
  uint *local_a4;
  uint *local_a0;
  int local_98;
  undefined1 local_94;
  uint *local_90;
  uint *puStack_8c;
  uint *local_88;
  uint *local_80;
  uint *local_7c;
  uint *local_78;
  uint *local_74;
  uint *puStack_70;
  uint *puStack_6c;
  uint *puStack_68;
  uint *local_64;
  uint *local_60;
  uint *local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  uint *local_3c;
  uint *local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar4 = *(uint *)(param_2 + 0x10);
  uVar11 = *(uint *)(param_2 + 0x14);
  if (uVar4 <= uVar11) {
LAB_01113cc8:
    local_b8 = '\x05';
LAB_01113ccc:
    cStack_b7 = 0;
    uStack_b6 = 0;
    puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
    uVar5 = FUN_008f9984(param_2,&local_b8);
LAB_01114384:
    *(undefined4 *)(param_1 + 4) = uVar5;
    *param_1 = '\x06';
    return;
  }
  puVar17 = (uint *)(param_2 + 0xc);
  uVar12 = *puVar17;
LAB_01113c08:
  uVar13 = (uint)*(byte *)(uVar12 + uVar11);
  switch(uVar13) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    goto switchD_01113c20_caseD_9;
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
switchD_01113c20_caseD_b:
    if (9 < uVar13 - 0x30) {
      local_b8 = '\n';
      cStack_b7 = '\0';
      uStack_b6 = 0;
      puStack_b5._0_1_ = 0;
      unaff_r10 = (uint *)FUN_008f9984(param_2,&local_b8);
      puVar8 = local_80;
      goto LAB_01114b8c;
    }
    FUN_008fa814(&local_80,param_2,1);
    uVar12 = (uint)local_80 ^ 3;
    if (!(uVar12 != 0 || local_7c != (uint *)0x0)) goto LAB_0111435c;
    local_b8 = '\x02';
    if (local_80 == (uint *)&SUB_00000002) {
      puVar15 = (uint *)((uint)local_74 >> 0x1f);
    }
    else {
      puVar15 = (uint *)0x0;
      if (local_80 != (uint *)&DAT_00000001) goto LAB_01114428;
    }
    break;
  case 0x22:
    *(undefined4 *)(param_2 + 8) = 0;
    *(uint *)(param_2 + 0x14) = uVar11 + 1;
    FUN_0157e384(&local_b8,puVar17,param_2);
    puVar17 = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
    if (CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8))) == 2) {
      *(uint **)(param_1 + 4) = puVar17;
      *param_1 = '\x06';
      return;
    }
    puVar19 = (uint *)CONCAT13((char)puStack_ad,puStack_b1._1_3_);
    if ((char)puStack_ad < '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,puVar19);
    }
    if (puVar19 == (uint *)0x0) {
      unaff_r10 = (uint *)0x0;
      puVar15 = (uint *)0x1;
    }
    else {
      puVar15 = (uint *)thunk_FUN_016d4a50(puVar19);
      if (puVar15 == (uint *)0x0) {
LAB_01114d4c:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,puVar19);
      }
      unaff_r10 = puVar19;
    }
    FUN_016dd1aa(puVar15,puVar17,puVar19);
    local_b8 = '\x03';
    local_80 = extraout_r1_02;
    uVar12 = extraout_r2_02;
    goto LAB_011144e8;
  case 0x2d:
    *(uint *)(param_2 + 0x14) = uVar11 + 1;
    puVar15 = (uint *)0x0;
    FUN_008fa814(&local_80,param_2,0);
    uVar12 = (uint)local_80 ^ 3;
    if (!(uVar12 != 0 || local_7c != (uint *)0x0)) goto LAB_0111435c;
    if (local_80 == (uint *)0x0) {
LAB_01114428:
      local_80 = (uint *)((uint)local_74 & 0x7fffffff);
      local_b8 = '\0';
      uVar12 = 0x7fefffff;
      if (local_80 < (uint *)0x7ff00000) {
        local_b8 = '\0';
        FUN_01111ad8(&local_b8);
        local_b8 = '\x02';
        local_80 = extraout_r1_01;
        uVar12 = extraout_r2_01;
      }
      puVar15 = (uint *)0x2;
    }
    else {
      local_b8 = '\x02';
      if (local_80 != (uint *)&DAT_00000001) {
        puVar15 = (uint *)((uint)local_74 >> 0x1f);
      }
    }
    break;
  default:
    puVar15 = &switchD_01113cf4::switchdataD_01113cf8;
    switch(uVar13) {
    case 0x5b:
      cVar18 = *(char *)(param_2 + 0x24);
      *(char *)(param_2 + 0x24) = cVar18 + -1;
      if (cVar18 != '\x01') {
        uVar11 = uVar11 + 1;
        bVar20 = true;
        *(uint *)(param_2 + 0x14) = uVar11;
        local_38 = (uint *)0x0;
        local_d4 = (uint *)&DAT_00000008;
        local_3c = (uint *)&DAT_00000008;
        local_40 = (uint *)0x0;
        if (uVar4 <= uVar11) goto LAB_01113f58;
        goto LAB_01113e04;
      }
      break;
    default:
      goto switchD_01113c20_caseD_b;
    case 0x66:
      uVar14 = uVar11 + 1;
      *(uint *)(param_2 + 0x14) = uVar14;
      uVar13 = uVar4;
      if (uVar4 < uVar14) {
        uVar13 = uVar14;
      }
      if (uVar4 <= uVar14) goto LAB_01114370;
      cVar18 = *(char *)(uVar12 + uVar14);
      uVar4 = uVar11 + 2;
      *(uint *)(param_2 + 0x14) = uVar4;
      if (cVar18 == 'a') {
        if (uVar4 == uVar13) goto LAB_01114370;
        cVar18 = *(char *)(uVar12 + uVar4);
        uVar4 = uVar11 + 3;
        *(uint *)(param_2 + 0x14) = uVar4;
        if (cVar18 == 'l') {
          if (uVar4 == uVar13) goto LAB_01114370;
          cVar18 = *(char *)(uVar12 + uVar4);
          uVar4 = uVar11 + 4;
          *(uint *)(param_2 + 0x14) = uVar4;
          if (cVar18 == 's') {
            if (uVar4 == uVar13) goto LAB_01114370;
            cVar18 = *(char *)(uVar12 + uVar4);
            local_80 = (uint *)(uVar11 + 5);
            *(uint **)(param_2 + 0x14) = local_80;
            if (cVar18 == 'e') {
              local_b8 = '\x01';
              cStack_b7 = '\0';
              puVar19 = (uint *)0x73;
              goto LAB_0111473c;
            }
          }
        }
      }
      goto LAB_01114b34;
    case 0x6e:
      uVar14 = uVar11 + 1;
      *(uint *)(param_2 + 0x14) = uVar14;
      uVar13 = uVar4;
      if (uVar14 >= uVar4 && uVar14 != uVar4) {
        uVar13 = uVar14;
      }
      if (uVar14 < uVar4) {
        cVar18 = *(char *)(uVar12 + uVar14);
        uVar4 = uVar11 + 2;
        *(uint *)(param_2 + 0x14) = uVar4;
        if (cVar18 == 'u') {
          if (uVar4 == uVar13) goto LAB_01114370;
          cVar18 = *(char *)(uVar12 + uVar4);
          uVar4 = uVar11 + 3;
          *(uint *)(param_2 + 0x14) = uVar4;
          if (cVar18 == 'l') {
            if (uVar4 == uVar13) goto LAB_01114370;
            cVar18 = *(char *)(uVar12 + uVar4);
            local_80 = (uint *)(uVar11 + 4);
            *(uint **)(param_2 + 0x14) = local_80;
            if (cVar18 == 'l') {
              local_b8 = '\0';
              puVar19 = (uint *)&DAT_0000006c;
              goto LAB_011144e8;
            }
          }
        }
        goto LAB_01114b34;
      }
      goto LAB_01114370;
    case 0x74:
      uVar14 = uVar11 + 1;
      *(uint *)(param_2 + 0x14) = uVar14;
      uVar13 = uVar4;
      if (uVar4 < uVar14) {
        uVar13 = uVar14;
      }
      if (uVar4 <= uVar14) {
LAB_01114370:
        local_b8 = '\x05';
LAB_01114374:
        cStack_b7 = 0;
        uStack_b6 = 0;
        puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
        uVar5 = FUN_005b8c9c(param_2,&local_b8);
        goto LAB_01114384;
      }
      cVar18 = *(char *)(uVar12 + uVar14);
      uVar4 = uVar11 + 2;
      *(uint *)(param_2 + 0x14) = uVar4;
      if (cVar18 != 'r') goto LAB_01114b34;
      if (uVar4 == uVar13) goto LAB_01114370;
      cVar18 = *(char *)(uVar12 + uVar4);
      uVar4 = uVar11 + 3;
      *(uint *)(param_2 + 0x14) = uVar4;
      if (cVar18 == 'u') {
        if (uVar4 == uVar13) goto LAB_01114370;
        cVar18 = *(char *)(uVar12 + uVar4);
        local_80 = (uint *)(uVar11 + 4);
        *(uint **)(param_2 + 0x14) = local_80;
        if (cVar18 == 'e') {
          cStack_b7 = '\x01';
          local_b8 = '\x01';
          puVar19 = (uint *)0x75;
          goto LAB_0111473c;
        }
      }
LAB_01114b34:
      local_b8 = '\t';
      goto LAB_01114374;
    case 0x7b:
      cVar18 = *(char *)(param_2 + 0x24) + -1;
      *(char *)(param_2 + 0x24) = cVar18;
      if (cVar18 != '\0') {
        *(uint *)(param_2 + 0x14) = uVar11 + 1;
        local_94 = 1;
        local_98 = param_2;
        FUN_008fa450(&local_b8,&local_98);
        iVar3 = local_98;
        if (local_b8 == '\x01') {
          puVar15 = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
LAB_0111427c:
          local_d0 = '\x06';
          local_cc = puVar15;
          goto LAB_011145c4;
        }
        if (cStack_b7 != '\x01') {
LAB_011145b0:
          local_c4 = (uint *)0x0;
          local_cc = (uint *)0x0;
          local_d0 = '\x05';
          goto LAB_011145c4;
        }
        piVar16 = (int *)(local_98 + 0xc);
        *(undefined4 *)(local_98 + 8) = 0;
        *(int *)(local_98 + 0x14) = *(int *)(local_98 + 0x14) + 1;
        FUN_0157e384(&local_b8,piVar16,local_98);
        puVar8 = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
        if (CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8))) == 2) {
          puVar15 = puVar8;
          goto LAB_0111427c;
        }
        puVar19 = (uint *)CONCAT13((char)puStack_ad,puStack_b1._1_3_);
        if (puVar19 == (uint *)&DAT_0000001e) {
          iVar6 = thunk_FUN_016dd50a(puVar8,&DAT_003c519d,0x1e);
          if (iVar6 == 0) {
LAB_0111478c:
            local_cc = (uint *)FUN_01114eb4(iVar3);
            if (local_cc != (uint *)0x0) goto LAB_011147a0;
            uVar4 = *(uint *)(iVar3 + 0x14);
            if (*(uint *)(iVar3 + 0x10) <= uVar4) goto LAB_011148a0;
            iVar6 = *piVar16;
            goto LAB_01114878;
          }
          puVar15 = (uint *)thunk_FUN_016d4a50(0x1e);
          if (puVar15 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,0x1e);
          }
          puVar7 = (uint *)&DAT_0000001e;
LAB_011147d4:
          FUN_016dd1aa(puVar15,puVar8,puVar19);
        }
        else {
          if ((char)puStack_ad < '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(0,puVar19);
          }
          if (puVar19 == (uint *)0x0) {
            puVar7 = (uint *)0x0;
            puVar15 = (uint *)&DAT_00000001;
            goto LAB_011147d4;
          }
          puVar15 = (uint *)thunk_FUN_016d4a50(puVar19);
          if (puVar15 == (uint *)0x0) goto LAB_01114d4c;
          FUN_016dd1aa(puVar15,puVar8,puVar19);
          if (puVar19 == (uint *)&DAT_80000000) goto LAB_0111478c;
          if (puVar19 == (uint *)0x80000001) goto LAB_011145b0;
          puVar7 = puVar19;
          if (puVar19 == (uint *)0x80000002) goto LAB_0111427c;
        }
        local_88 = (uint *)0x0;
        local_90 = (uint *)0x0;
        local_80 = puVar7;
        local_7c = puVar15;
        local_78 = puVar19;
        puVar8 = (uint *)FUN_01114eb4(iVar3);
        if (puVar8 == (uint *)0x0) {
          FUN_01113be4(&local_d0,iVar3);
          if (local_d0 != '\x06') {
            FUN_01122a78(&local_b8,&local_90,&local_80,&local_d0);
            if (local_b8 != '\x06') {
              FUN_01111ad8(&local_b8);
            }
            puVar9 = (undefined4 *)((uint)&local_80 | 4);
            puVar10 = (undefined4 *)((uint)&local_b8 | 4);
            goto LAB_01114904;
          }
        }
        else {
          local_d0 = '\x06';
          local_cc = puVar8;
        }
        if (puVar7 != (uint *)0x0) {
          thunk_FUN_016d3fb4(puVar15);
        }
        goto LAB_0111484c;
      }
    }
    local_b8 = '\x18';
    goto LAB_01113ccc;
  }
  puVar19 = (uint *)0x0;
  puVar17 = local_74;
  unaff_r8 = local_78;
LAB_011144e8:
  cStack_b7 = (char)uVar12;
  goto LAB_0111473c;
  while( true ) {
    uVar4 = uVar4 + 1;
    *(uint *)(iVar3 + 0x14) = uVar4;
    if (*(uint *)(iVar3 + 0x10) == uVar4) break;
LAB_01114878:
    uVar11 = *(byte *)(iVar6 + uVar4) - 9;
    if ((0x17 < uVar11) || ((1 << (uVar11 & 0xff) & 0x800013U) == 0)) {
      if (*(byte *)(iVar6 + uVar4) == 0x22) {
        *(undefined4 *)(iVar3 + 8) = 0;
        *(uint *)(iVar3 + 0x14) = uVar4 + 1;
        FUN_0157e384(&local_b8,piVar16,iVar3);
        local_cc = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
        if (CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8))) == 2)
        goto LAB_011147a0;
        FUN_0112691c(&local_80,local_cc,CONCAT13((char)puStack_ad,puStack_b1._1_3_));
        puVar8 = local_7c;
        puVar15 = local_80;
        if (local_80 != (uint *)0x0) {
          FUN_01113abc(&local_b8,local_80,local_7c);
          if (local_b8 == '\x06') {
            local_cc = (uint *)FUN_011258d0(CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_));
            local_d0 = '\x06';
          }
          else {
            uStack_ce = CONCAT11(puStack_b5._0_1_,uStack_b6);
            local_cc = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
            local_c8 = (uint *)CONCAT13((char)puStack_ad,puStack_b1._1_3_);
            local_c4 = (uint *)CONCAT13(uStack_a9,puStack_ad._1_3_);
            local_d0 = local_b8;
            cStack_cf = cStack_b7;
            puStack_c0 = local_a8;
            local_bc = local_a4;
          }
          if (puVar8 != (uint *)0x0) {
            thunk_FUN_016d3fb4(puVar15);
          }
          goto LAB_011145c4;
        }
        puVar15 = local_7c;
      }
      else {
        puVar15 = (uint *)FUN_01114ff8(iVar3,&local_40);
      }
      local_cc = (uint *)FUN_00e959bc(puVar15,iVar3);
      goto LAB_011147a0;
    }
  }
LAB_011148a0:
  local_b8 = '\x05';
  cStack_b7 = '\0';
  uStack_b6 = 0;
  puStack_b5 = (uint *)((uint)puStack_b5 & 0xffffff00);
  local_cc = (uint *)FUN_008f9984(iVar3,&local_b8);
LAB_011147a0:
  local_d0 = '\x06';
  goto LAB_011145c4;
LAB_01114904:
  FUN_008fa450(&local_40,&local_98);
  iVar3 = local_98;
  if ((char)local_40 != '\x01') {
    if (local_40._1_1_ != '\x01') {
LAB_01114b9c:
      local_d0 = '\x05';
      puStack_ad = local_88;
      puStack_b1 = puStack_8c;
      puStack_b5 = local_90;
      cStack_cf = local_b8;
      uStack_ce = (ushort)(CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8)) >> 8);
      local_cc = local_90;
      local_c8 = puStack_8c;
      local_c4 = local_88;
      goto LAB_011145c4;
    }
    *(undefined4 *)(local_98 + 8) = 0;
    *(int *)(local_98 + 0x14) = *(int *)(local_98 + 0x14) + 1;
    FUN_0157e384(&local_40,local_98 + 0xc,local_98);
    puVar8 = local_38;
    puVar15 = local_3c;
    local_cc = local_3c;
    if (local_40 == (uint *)&SUB_00000002) goto LAB_01114c9c;
    uVar5 = 0;
    if ((int)local_38 < 0) {
LAB_01114d6c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar5,local_d8);
    }
    if (local_38 == (uint *)0x0) {
      local_d8 = (uint *)&DAT_00000001;
      FUN_016dd1aa(1,local_3c,0);
      puVar15 = (uint *)0x0;
    }
    else {
      local_d8 = (uint *)thunk_FUN_016d4a50(local_38);
      if (local_d8 == (uint *)0x0) {
        uVar5 = 1;
        local_d8 = puVar8;
        goto LAB_01114d6c;
      }
      FUN_016dd1aa(local_d8,puVar15,puVar8);
      if (puVar8 == (uint *)0x80000001) {
        local_cc = local_d8;
        goto LAB_01114c9c;
      }
      puVar15 = puVar8;
      if (puVar8 == (uint *)&DAT_80000000) goto LAB_01114b9c;
    }
    puVar19 = (uint *)FUN_01114eb4(iVar3);
    if (puVar19 != (uint *)0x0) {
      local_3c = puVar19;
LAB_01114c1c:
      local_cc = local_3c;
      if (puVar15 != (uint *)0x0) {
        thunk_FUN_016d3fb4(local_d8);
      }
      goto LAB_01114c9c;
    }
    FUN_01113be4(&local_40,iVar3);
    if ((char)local_40 == '\x06') {
      goto LAB_01114c1c;
    }
    *puVar10 = local_40;
    puVar10[1] = local_3c;
    puVar10[2] = local_38;
    puVar10[3] = uStack_34;
    puVar10[4] = uStack_30;
    puVar10[5] = uStack_2c;
    local_80 = (uint *)CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8)));
    local_7c = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
    local_78 = (uint *)CONCAT13((char)puStack_ad,puStack_b1._1_3_);
    local_74 = (uint *)CONCAT13(uStack_a9,puStack_ad._1_3_);
    puStack_70 = local_a8;
    puStack_6c = local_a4;
    puStack_68 = local_a0;
    if (puVar15 == (uint *)&DAT_80000000) goto LAB_01114b9c;
    if (puVar15 == (uint *)0x80000001) {
      local_cc = local_d8;
      goto LAB_01114c9c;
    }
    local_5c = puVar8;
    local_60 = local_d8;
    local_58 = *puVar9;
    uStack_54 = puVar9[1];
    uStack_50 = puVar9[2];
    uStack_4c = puVar9[3];
    uStack_48 = puVar9[4];
    uStack_44 = puVar9[5];
    local_64 = puVar15;
    FUN_01122a78(&local_b8,&local_90,&local_64);
    if (local_b8 != '\x06') {
      FUN_01111ad8(&local_b8);
    }
    goto LAB_01114904;
  }
  local_cc = local_3c;
LAB_01114c9c:
  local_d0 = '\x06';
LAB_0111484c:
  FUN_011240dc(&local_90);
LAB_011145c4:
  *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
  uVar4 = *(uint *)(param_2 + 0x14);
  if (uVar4 < *(uint *)(param_2 + 0x10)) {
LAB_011145e0:
    switch(*(char *)(*puVar17 + uVar4)) {
    case '\t':
    case '\n':
    case '\r':
    case ' ':
      goto switchD_011145f8_caseD_9;
    case '\v':
    case '\f':
    case '\x0e':
    case '\x0f':
    case '\x10':
    case '\x11':
    case '\x12':
    case '\x13':
    case '\x14':
    case '\x15':
    case '\x16':
    case '\x17':
    case '\x18':
    case '\x19':
    case '\x1a':
    case '\x1b':
    case '\x1c':
    case '\x1d':
    case '\x1e':
    case '\x1f':
    case '!':
    case '\"':
    case '#':
    case '$':
    case '%':
    case '&':
    case '\'':
    case '(':
    case ')':
    case '*':
    case '+':
      goto switchD_011145f8_caseD_b;
    case ',':
      local_80 = (uint *)&DAT_00000015;
      puVar17 = (uint *)FUN_008f9984(param_2,&local_80);
      goto LAB_011146b0;
    default:
      if (*(char *)(*puVar17 + uVar4) == '}') {
        *(uint *)(param_2 + 0x14) = uVar4 + 1;
        local_b8 = local_d0;
        cStack_b7 = cStack_cf;
        uStack_b6 = (undefined1)uStack_ce;
        puStack_b5._0_1_ = (undefined1)(uStack_ce >> 8);
        puStack_b5._1_3_ = (uint3)local_cc;
        puStack_b1._0_1_ = (undefined1)((uint)local_cc >> 0x18);
        puStack_b1._1_3_ = SUB43(local_c8,0);
        puStack_ad._0_1_ = (char)((uint)local_c8 >> 0x18);
        puStack_ad._1_3_ = SUB43(local_c4,0);
        uStack_a9 = (undefined1)((uint)local_c4 >> 0x18);
        local_a8 = puStack_c0;
        local_a4 = local_bc;
        if (local_d0 == '\x06') goto LAB_0111472c;
        puVar7 = (uint *)(uint)uStack_ce;
        unaff_r8 = puStack_c0;
        puVar17 = local_bc;
        local_b8 = local_d0;
        unaff_r10 = local_cc;
        puVar15 = local_c8;
        puVar19 = local_c4;
        puVar8 = local_80;
        goto joined_r0x01114780;
      }
switchD_011145f8_caseD_b:
      local_80 = (uint *)&DAT_00000016;
      puVar17 = (uint *)FUN_008f9984(param_2,&local_80);
      goto LAB_011146b0;
    }
  }
LAB_0111469c:
  local_80 = (uint *)0x3;
  puVar17 = (uint *)FUN_008f9984(param_2,&local_80);
LAB_011146b0:
  unaff_r10 = local_cc;
  local_b8 = local_d0;
  cStack_b7 = cStack_cf;
  uStack_b6 = (undefined1)uStack_ce;
  puStack_b5._0_1_ = (undefined1)(uStack_ce >> 8);
  puStack_b5._1_3_ = (uint3)local_cc;
  puStack_b1._0_1_ = (undefined1)((uint)local_cc >> 0x18);
  puStack_b1._1_3_ = SUB43(local_c8,0);
  puStack_ad._0_1_ = (char)((uint)local_c8 >> 0x18);
  puStack_ad._1_3_ = SUB43(local_c4,0);
  uStack_a9 = (undefined1)((uint)local_c4 >> 0x18);
  local_a8 = puStack_c0;
  local_a4 = local_bc;
  local_a0 = puVar17;
  if (local_d0 == '\x06') {
    FUN_005c3974(puVar17);
    goto LAB_011146dc;
  }
  goto LAB_011146f8;
switchD_011145f8_caseD_9:
  uVar4 = uVar4 + 1;
  *(uint *)(param_2 + 0x14) = uVar4;
  if (*(uint *)(param_2 + 0x10) == uVar4) goto LAB_0111469c;
  goto LAB_011145e0;
LAB_01113e04:
  do {
    puVar15 = local_38;
    while( true ) {
      uVar12 = (uint)*(byte *)(*puVar17 + uVar11);
      if ((0x17 < uVar12 - 9) || ((1 << (uVar12 - 9 & 0xff) & 0x800013U) == 0)) break;
      uVar11 = uVar11 + 1;
      *(uint *)(param_2 + 0x14) = uVar11;
      if (uVar4 == uVar11) goto LAB_01113f58;
    }
    if (uVar12 == 0x5d) {
      cVar18 = '\x04';
      local_74 = local_38;
      local_78 = local_3c;
      local_7c = local_40;
      goto LAB_01113fa4;
    }
    if (!bVar20) {
      if (uVar12 != 0x2c) {
        local_b8 = '\a';
        cStack_b7 = '\0';
        uStack_b6 = 0;
        puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
        puVar8 = (uint *)FUN_008f9984(param_2,&local_b8);
        goto LAB_01113f78;
      }
      uVar11 = uVar11 + 1;
      *(uint *)(param_2 + 0x14) = uVar11;
      if (uVar4 <= uVar11) {
LAB_011147ac:
        local_b8 = '\x05';
        cStack_b7 = '\0';
        uStack_b6 = 0;
        puStack_b5 = (uint *)((uint)puStack_b5 & 0xffffff00);
        puVar8 = (uint *)FUN_008f9984(param_2,&local_b8);
        goto LAB_01113f78;
      }
      while( true ) {
        uVar12 = (uint)*(byte *)(*puVar17 + uVar11);
        uVar13 = uVar12 - 9;
        if ((0x17 < uVar13) || ((1 << (uVar13 & 0xff) & 0x800013U) == 0)) break;
        uVar11 = uVar11 + 1;
        *(uint *)(param_2 + 0x14) = uVar11;
        if (uVar4 == uVar11) goto LAB_011147ac;
      }
      if (uVar12 == 0x5d) {
        local_b8 = '\x15';
        cStack_b7 = '\0';
        uStack_b6 = 0;
        puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
        puVar8 = (uint *)FUN_008f9984(param_2,&local_b8);
        goto LAB_01113f78;
      }
    }
    FUN_01113be4(&local_b8,param_2);
    if (local_b8 == '\x06') {
      puVar8 = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
      goto LAB_01113f78;
    }
    local_7c = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
    uVar2 = *(undefined2 *)((uint)&local_b8 | 1);
    local_80 = (uint *)CONCAT31(local_80._1_3_,local_b8);
    local_78 = (uint *)CONCAT13((char)puStack_ad,puStack_b1._1_3_);
    local_74 = (uint *)CONCAT13(uStack_a9,puStack_ad._1_3_);
    *(undefined1 *)((undefined2 *)((uint)&local_80 | 1) + 1) =
         *(undefined1 *)((undefined2 *)((uint)&local_b8 | 1) + 1);
    *(undefined2 *)((uint)&local_80 | 1) = uVar2;
    puStack_70 = local_a8;
    puStack_6c = local_a4;
    if (puVar15 == local_40) {
      FUN_0157eb1c(&local_40);
      local_d4 = local_3c;
    }
    puVar8 = local_d4 + (int)puVar15 * 6;
    *puVar8 = (uint)local_80;
    puVar8[1] = (uint)local_7c;
    puVar8[2] = (uint)local_78;
    puVar8[3] = (uint)local_74;
    puVar8[4] = (uint)puStack_70;
    puVar8[5] = (uint)puStack_6c;
    local_38 = (uint *)((int)puVar15 + 1);
    uVar4 = *(uint *)(param_2 + 0x10);
    uVar11 = *(uint *)(param_2 + 0x14);
    bVar20 = false;
  } while (uVar11 < uVar4);
LAB_01113f58:
  puVar15 = local_38;
  local_b8 = '\x02';
  cStack_b7 = '\0';
  uStack_b6 = 0;
  puStack_b5 = (uint *)((uint)puStack_b5 & 0xffffff00);
  puVar8 = (uint *)FUN_008f9984(param_2,&local_b8);
LAB_01113f78:
  FUN_01127284(local_d4,puVar15);
  cVar18 = '\x06';
  local_74 = extraout_r1;
  local_78 = extraout_r2;
  if (local_40 != (uint *)0x0) {
    thunk_FUN_016d3fb4(local_d4);
    local_74 = extraout_r1_00;
    local_78 = extraout_r2_00;
  }
  local_7c = puVar8;
LAB_01113fa4:
  puVar8 = local_80;
  uVar11 = *(uint *)(param_2 + 0x14);
  *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
  uVar4 = *(uint *)(param_2 + 0x10);
  local_80 = (uint *)CONCAT31(local_80._1_3_,cVar18);
  if (uVar11 < uVar4) {
LAB_01113fd4:
    cVar1 = *(char *)(*puVar17 + uVar11);
    switch(cVar1) {
    case '\t':
    case '\n':
    case '\r':
    case ' ':
      goto switchD_01113fec_caseD_9;
    case ',':
      uVar11 = uVar11 + 1;
      *(uint *)(param_2 + 0x14) = uVar11;
      if (uVar4 <= uVar11) goto LAB_01114d0c;
      goto LAB_01114c4c;
    default:
      if (cVar1 == ']') {
        *(uint *)(param_2 + 0x14) = uVar11 + 1;
        cStack_b7 = (char)((uint)puVar8 >> 8);
        uStack_b6 = (undefined1)((uint)puVar8 >> 0x10);
        puStack_b5._0_1_ = (undefined1)((uint)puVar8 >> 0x18);
        puStack_b1._0_1_ = (undefined1)((uint)local_7c >> 0x18);
        puStack_ad._0_1_ = (char)((uint)local_78 >> 0x18);
        uStack_a9 = (undefined1)((uint)local_74 >> 0x18);
        local_a8 = puStack_70;
        local_a4 = puStack_6c;
        local_b8 = cVar18;
        if (cVar18 == '\x06') {
LAB_0111472c:
          unaff_r10 = (uint *)(uint)puStack_b5._1_3_;
          puVar8 = local_80;
        }
        else {
          unaff_r10 = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
          puVar15 = (uint *)CONCAT13((char)puStack_ad,puStack_b1._1_3_);
          puVar19 = (uint *)CONCAT13(uStack_a9,puStack_ad._1_3_);
          puVar7 = (uint *)((uint)puVar8 >> 0x10);
          unaff_r8 = puStack_70;
          puVar17 = puStack_6c;
          puVar8 = local_80;
joined_r0x01114780:
          local_80 = puVar7;
          local_a8 = unaff_r8;
          local_a4 = puVar17;
          if (local_b8 != '\x06') {
LAB_0111473c:
            *param_1 = local_b8;
            *(short *)(param_1 + 2) = (short)local_80;
            param_1[1] = cStack_b7;
            *(uint **)(param_1 + 4) = unaff_r10;
            *(uint **)(param_1 + 8) = puVar15;
            *(uint **)(param_1 + 0xc) = puVar19;
            *(uint **)(param_1 + 0x10) = unaff_r8;
            *(uint **)(param_1 + 0x14) = puVar17;
            return;
          }
        }
        goto LAB_01114b8c;
      }
    case '\v':
    case '\f':
    case '\x0e':
    case '\x0f':
    case '\x10':
    case '\x11':
    case '\x12':
    case '\x13':
    case '\x14':
    case '\x15':
    case '\x16':
    case '\x17':
    case '\x18':
    case '\x19':
    case '\x1a':
    case '\x1b':
    case '\x1c':
    case '\x1d':
    case '\x1e':
    case '\x1f':
    case '!':
    case '\"':
    case '#':
    case '$':
    case '%':
    case '&':
    case '\'':
    case '(':
    case ')':
    case '*':
    case '+':
      local_40 = (uint *)&DAT_00000016;
      puVar17 = (uint *)FUN_008f9984(param_2,&local_40);
    }
    goto LAB_011140ac;
  }
LAB_01114090:
  local_40 = (uint *)&SUB_00000002;
  puVar17 = (uint *)FUN_008f9984(param_2,&local_40);
  goto LAB_011140ac;
switchD_01113fec_caseD_9:
  uVar11 = uVar11 + 1;
  *(uint *)(param_2 + 0x14) = uVar11;
  if (uVar4 == uVar11) goto LAB_01114090;
  goto LAB_01113fd4;
switchD_01113c20_caseD_9:
  uVar11 = uVar11 + 1;
  *(uint *)(param_2 + 0x14) = uVar11;
  if (uVar4 == uVar11) goto LAB_01113cc8;
  goto LAB_01113c08;
  while( true ) {
    uVar11 = uVar11 + 1;
    *(uint *)(param_2 + 0x14) = uVar11;
    if (uVar4 == uVar11) break;
LAB_01114c4c:
    uVar13 = (uint)*(byte *)(*puVar17 + uVar11);
    uVar12 = uVar13 - 9;
    if ((0x17 < uVar12) || ((1 << (uVar12 & 0xff) & 0x800013U) == 0)) {
      if (uVar13 == 0x5d) {
        local_40 = (uint *)&DAT_00000015;
        puVar17 = (uint *)FUN_008f9984(param_2,&local_40);
        goto LAB_011140ac;
      }
      break;
    }
  }
LAB_01114d0c:
  local_40 = (uint *)&DAT_00000016;
  puVar17 = (uint *)FUN_008f9984(param_2,&local_40);
LAB_011140ac:
  local_b8 = (char)local_80;
  cStack_b7 = (char)((uint)local_80 >> 8);
  uStack_b6 = (undefined1)((uint)local_80 >> 0x10);
  puStack_b5._0_1_ = (undefined1)((uint)local_80 >> 0x18);
  puStack_b1._0_1_ = (undefined1)((uint)local_7c >> 0x18);
  puStack_ad._0_1_ = (char)((uint)local_78 >> 0x18);
  uStack_a9 = (undefined1)((uint)local_74 >> 0x18);
  local_a8 = puStack_70;
  local_a4 = puStack_6c;
  local_a0 = puVar17;
  if (local_b8 == '\x06') {
    unaff_r10 = (uint *)CONCAT13(puStack_b1._0_1_,puStack_b5._1_3_);
    FUN_005c3974(puVar17);
LAB_011146dc:
    thunk_FUN_016d3fb4(puVar17);
    puVar8 = local_80;
  }
  else {
LAB_011146f8:
    unaff_r10 = local_a0;
    FUN_01111ad8(&local_b8);
    puVar8 = local_80;
  }
LAB_01114b8c:
  local_80 = puVar8;
  local_78 = (uint *)FUN_00e959bc(unaff_r10,param_2);
LAB_0111435c:
  *(uint **)(param_1 + 4) = local_78;
  *param_1 = '\x06';
  return;
}

