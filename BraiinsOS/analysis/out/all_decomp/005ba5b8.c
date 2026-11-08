// FUN_005ba5b8 @ 005ba5b8 size=3224 calls_out=26 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_005ba5b8(char *param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint extraout_r1;
  int extraout_r1_00;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  uint *unaff_r5;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint *unaff_r8;
  uint unaff_r9;
  int *piVar14;
  longlong lVar15;
  undefined8 uVar16;
  uint *local_d4;
  char local_d0;
  char cStack_cf;
  undefined2 uStack_ce;
  uint *local_cc;
  uint local_c8;
  uint *local_c4;
  uint *local_c0;
  uint local_bc;
  char local_b8;
  char cStack_b7;
  undefined1 uStack_b6;
  uint *puStack_b5;
  uint uStack_b1;
  uint *puStack_ad;
  undefined1 uStack_a9;
  uint *local_a8;
  uint local_a4;
  uint *local_a0;
  int local_98;
  undefined1 local_94;
  uint *local_90;
  uint uStack_8c;
  uint *local_88;
  uint *local_80;
  uint *local_7c;
  undefined8 local_78;
  uint *puStack_70;
  uint uStack_6c;
  uint *puStack_68;
  uint *local_64;
  uint *local_60;
  uint *local_5c;
  int local_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 local_40;
  uint *local_3c;
  uint *local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar7 = *(uint *)(param_2 + 0x10);
  uVar8 = *(uint *)(param_2 + 0x14);
  if (uVar7 <= uVar8) {
LAB_005ba69c:
    local_b8 = '\x05';
LAB_005ba6a0:
    cStack_b7 = 0;
    uStack_b6 = 0;
    puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
    uVar4 = FUN_008f9984(param_2,&local_b8);
LAB_005bab60:
    *(undefined4 *)(param_1 + 4) = uVar4;
    *param_1 = '\x06';
    return;
  }
  iVar3 = *(int *)(param_2 + 0xc);
LAB_005ba5dc:
  uVar13 = (uint)*(byte *)(iVar3 + uVar8);
  uVar11 = uVar13 - 9;
  if (uVar11 < 0x25) {
    unaff_r5 = &switchD_005ba5f4::switchdataD_005ba5f8;
    puVar12 = (uint *)(&switchD_005ba5f4::switchdataD_005ba5f8)[uVar11];
    switch(uVar11) {
    case 0:
    case 1:
    case 4:
    case 0x17:
      goto switchD_005ba5f4_caseD_0;
    default:
      goto switchD_005ba5f4_caseD_2;
    case 0x19:
      *(undefined4 *)(param_2 + 8) = 0;
      *(uint *)(param_2 + 0x14) = uVar8 + 1;
      FUN_0157e384(&local_b8,(int *)(param_2 + 0xc),param_2);
      if (CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8))) == 2) {
        *(uint *)(param_1 + 4) = CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_);
        *param_1 = '\x06';
        return;
      }
      unaff_r8 = (uint *)CONCAT13((char)puStack_ad,uStack_b1._1_3_);
      if ((char)puStack_ad < '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,unaff_r8);
      }
      if (unaff_r8 == (uint *)0x0) {
        puVar12 = (uint *)0x0;
        unaff_r9 = 1;
      }
      else {
        unaff_r9 = thunk_FUN_016d4a50(unaff_r8);
        if (unaff_r9 == 0) {
LAB_005bb340:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,unaff_r8);
        }
        puVar12 = unaff_r8;
      }
      uVar2 = FUN_016dd1aa(unaff_r9,CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_),unaff_r8);
      local_b8 = '\x03';
      iVar3 = extraout_r1_00;
      break;
    case 0x24:
      *(uint *)(param_2 + 0x14) = uVar8 + 1;
      unaff_r9 = 0;
      FUN_008fa814(&local_80,param_2,0);
      if (local_80 == (uint *)0x3 && local_7c == (uint *)0x0) goto LAB_005bab00;
      if (local_80 == (uint *)0x0) {
LAB_005bac00:
        local_b8 = '\0';
        uVar16 = CONCAT44(0x7fefffff,local_78._4_4_ & 0x7fffffff);
        if ((local_78._4_4_ & 0x7fffffff) < 0x7ff00000) {
          local_b8 = '\0';
          uVar16 = FUN_005c37bc(&local_b8);
          local_b8 = '\x02';
        }
        unaff_r9 = 2;
        uVar13 = local_78._4_4_;
      }
      else {
        local_b8 = '\x02';
        uVar13 = local_78._4_4_;
        uVar16 = CONCAT44(&local_78,local_80);
        if (local_80 != (uint *)0x1) {
          unaff_r9 = local_78._4_4_ >> 0x1f;
          uVar16 = CONCAT44(&local_78,local_80);
        }
      }
LAB_005bad04:
      iVar3 = (int)((ulonglong)uVar16 >> 0x20);
      uVar2 = (undefined2)uVar16;
      unaff_r8 = (uint *)0x0;
      unaff_r5 = (uint *)local_78;
    }
LAB_005bad08:
    cStack_cf = (char)iVar3;
    goto LAB_005bae3c;
  }
  puVar12 = &switchD_005ba6c8::switchdataD_005ba6cc;
  switch(uVar13) {
  case 0x5b:
    cVar1 = *(char *)(param_2 + 0x24) + -1;
    *(char *)(param_2 + 0x24) = cVar1;
    if (cVar1 == '\0') {
      local_b8 = '\x18';
      cStack_b7 = 0;
      uStack_b6 = 0;
      puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
      uVar4 = FUN_008f9984(param_2,&local_b8);
      *param_1 = '\x06';
      *(undefined4 *)(param_1 + 4) = uVar4;
      return;
    }
    *(uint *)(param_2 + 0x14) = uVar8 + 1;
    local_54 = CONCAT31(local_54._1_3_,1);
    local_d4 = (uint *)0x8;
    iVar3 = 0;
    local_38 = (uint *)0x0;
    local_3c = (uint *)0x8;
    local_40 = (uint *)0x0;
    local_58 = param_2;
    goto LAB_005ba7fc;
  default:
switchD_005ba5f4_caseD_2:
    if (9 < uVar13 - 0x30) {
      local_b8 = '\n';
      cStack_b7 = '\0';
      uStack_b6 = 0;
      puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
      puVar12 = (uint *)FUN_008f9984(param_2,&local_b8);
      goto LAB_005bb254;
    }
    FUN_008fa814(&local_80,param_2,1);
    if (local_80 != (uint *)0x3 || local_7c != (uint *)0x0) {
      local_b8 = '\x02';
      uVar13 = local_78._4_4_;
      if (local_80 == (uint *)0x2) {
        unaff_r9 = local_78._4_4_ >> 0x1f;
        uVar16 = CONCAT44(&local_78,local_80);
      }
      else {
        unaff_r9 = 0;
        uVar16 = CONCAT44(&local_78,local_80);
        if (local_80 != (uint *)0x1) goto LAB_005bac00;
      }
      goto LAB_005bad04;
    }
LAB_005bab00:
    puVar12 = (uint *)local_78;
    goto LAB_005bab04;
  case 0x66:
    uVar11 = uVar8 + 1;
    *(uint *)(param_2 + 0x14) = uVar11;
    uVar13 = uVar7;
    if (uVar7 < uVar11) {
      uVar13 = uVar11;
    }
    if (uVar7 <= uVar11) goto LAB_005bab4c;
    cVar1 = *(char *)(iVar3 + uVar11);
    uVar7 = uVar8 + 2;
    *(uint *)(param_2 + 0x14) = uVar7;
    if (cVar1 == 'a') {
      if (uVar7 == uVar13) goto LAB_005bab4c;
      cVar1 = *(char *)(iVar3 + uVar7);
      uVar7 = uVar8 + 3;
      *(uint *)(param_2 + 0x14) = uVar7;
      if (cVar1 == 'l') {
        if (uVar7 == uVar13) goto LAB_005bab4c;
        cVar1 = *(char *)(iVar3 + uVar7);
        uVar7 = uVar8 + 4;
        *(uint *)(param_2 + 0x14) = uVar7;
        if (cVar1 == 's') {
          if (uVar7 == uVar13) goto LAB_005bab4c;
          cVar1 = *(char *)(iVar3 + uVar7);
          *(uint *)(param_2 + 0x14) = uVar8 + 5;
          if (cVar1 == 'e') {
            local_b8 = '\x01';
            cStack_cf = '\0';
            uVar13 = 0x73;
            uVar2 = 0x65;
            goto LAB_005bae3c;
          }
        }
      }
    }
    break;
  case 0x6e:
    uVar11 = uVar8 + 1;
    *(uint *)(param_2 + 0x14) = uVar11;
    uVar13 = uVar7;
    if (uVar11 >= uVar7 && uVar11 != uVar7) {
      uVar13 = uVar11;
    }
    if (uVar11 < uVar7) {
      cVar1 = *(char *)(iVar3 + uVar11);
      uVar7 = uVar8 + 2;
      *(uint *)(param_2 + 0x14) = uVar7;
      if (cVar1 == 'u') {
        if (uVar7 == uVar13) goto LAB_005bab4c;
        cVar1 = *(char *)(iVar3 + uVar7);
        uVar7 = uVar8 + 3;
        *(uint *)(param_2 + 0x14) = uVar7;
        if (cVar1 == 'l') {
          if (uVar7 == uVar13) goto LAB_005bab4c;
          cVar1 = *(char *)(iVar3 + uVar7);
          iVar3 = uVar8 + 4;
          *(int *)(param_2 + 0x14) = iVar3;
          if (cVar1 == 'l') {
            local_b8 = '\0';
            uVar13 = 0x6c;
            uVar2 = 0x6c;
            goto LAB_005bad08;
          }
        }
      }
      break;
    }
LAB_005bab4c:
    local_b8 = '\x05';
LAB_005bab50:
    cStack_b7 = 0;
    uStack_b6 = 0;
    puStack_b5 = (uint *)((uint)puStack_b5._1_3_ << 8);
    uVar4 = FUN_005b8c9c(param_2,&local_b8);
    goto LAB_005bab60;
  case 0x74:
    uVar11 = uVar8 + 1;
    *(uint *)(param_2 + 0x14) = uVar11;
    uVar13 = uVar7;
    if (uVar7 < uVar11) {
      uVar13 = uVar11;
    }
    if (uVar7 <= uVar11) goto LAB_005bab4c;
    cVar1 = *(char *)(iVar3 + uVar11);
    uVar7 = uVar8 + 2;
    *(uint *)(param_2 + 0x14) = uVar7;
    if (cVar1 == 'r') {
      if (uVar7 == uVar13) goto LAB_005bab4c;
      cVar1 = *(char *)(iVar3 + uVar7);
      uVar7 = uVar8 + 3;
      *(uint *)(param_2 + 0x14) = uVar7;
      if (cVar1 != 'u') break;
      if (uVar7 == uVar13) goto LAB_005bab4c;
      cVar1 = *(char *)(iVar3 + uVar7);
      *(uint *)(param_2 + 0x14) = uVar8 + 4;
      if (cVar1 == 'e') {
        cStack_cf = '\x01';
        local_b8 = '\x01';
        uVar13 = 0x75;
        uVar2 = 0x65;
        goto LAB_005bae3c;
      }
    }
    break;
  case 0x7b:
    cVar1 = *(char *)(param_2 + 0x24) + -1;
    *(char *)(param_2 + 0x24) = cVar1;
    if (cVar1 == '\0') {
      local_b8 = '\x18';
      goto LAB_005ba6a0;
    }
    *(uint *)(param_2 + 0x14) = uVar8 + 1;
    local_94 = 1;
    local_98 = param_2;
    FUN_008fa450(&local_b8,&local_98);
    iVar3 = local_98;
    if (local_b8 == '\x01') {
      puVar12 = (uint *)CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_);
LAB_005baa2c:
      local_d0 = '\x06';
      local_cc = puVar12;
      goto LAB_005bade0;
    }
    if (cStack_b7 != '\x01') {
LAB_005badcc:
      local_c4 = (uint *)0x0;
      local_cc = (uint *)0x0;
      local_d0 = '\x05';
      goto LAB_005bade0;
    }
    piVar14 = (int *)(local_98 + 0xc);
    *(undefined4 *)(local_98 + 8) = 0;
    *(int *)(local_98 + 0x14) = *(int *)(local_98 + 0x14) + 1;
    FUN_0157e384(&local_b8,piVar14,local_98);
    puVar6 = (uint *)CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_);
    if (CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8))) == 2) {
      puVar12 = puVar6;
      goto LAB_005baa2c;
    }
    unaff_r8 = (uint *)CONCAT13((char)puStack_ad,uStack_b1._1_3_);
    if (unaff_r8 == (uint *)0x1e) {
      iVar5 = thunk_FUN_016dd50a(puVar6,&DAT_003c519d,0x1e);
      if (iVar5 == 0) {
LAB_005baeb4:
        local_cc = (uint *)FUN_01114eb4(iVar3);
        if (local_cc != (uint *)0x0) goto LAB_005baec8;
        uVar7 = *(uint *)(iVar3 + 0x14);
        if (*(uint *)(iVar3 + 0x10) <= uVar7) goto LAB_005baf98;
        iVar5 = *piVar14;
        goto LAB_005baf70;
      }
      puVar12 = (uint *)thunk_FUN_016d4a50(0x1e);
      if (puVar12 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x1e);
      }
      puVar10 = (uint *)0x1e;
LAB_005baedc:
      FUN_016dd1aa(puVar12,puVar6,unaff_r8);
    }
    else {
      if ((char)puStack_ad < '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,unaff_r8);
      }
      if (unaff_r8 == (uint *)0x0) {
        puVar10 = (uint *)0x0;
        puVar12 = (uint *)0x1;
        goto LAB_005baedc;
      }
      puVar12 = (uint *)thunk_FUN_016d4a50(unaff_r8);
      if (puVar12 == (uint *)0x0) goto LAB_005bb340;
      FUN_016dd1aa(puVar12,puVar6,unaff_r8);
      if (unaff_r8 == (uint *)0x80000000) goto LAB_005baeb4;
      if (unaff_r8 == (uint *)0x80000001) goto LAB_005badcc;
      puVar10 = unaff_r8;
      if (unaff_r8 == (uint *)0x80000002) goto LAB_005baa2c;
    }
    local_88 = (uint *)0x0;
    local_90 = (uint *)0x0;
    local_80 = puVar10;
    local_7c = puVar12;
    local_78._0_4_ = unaff_r8;
    puVar6 = (uint *)FUN_01114eb4(iVar3);
    if (puVar6 == (uint *)0x0) {
      FUN_005ba5b8(&local_d0,iVar3);
      if (local_d0 != '\x06') {
        FUN_00e9dc08(&local_b8,&local_90,&local_80,&local_d0);
        if (local_b8 != '\x06') {
          FUN_005c37bc(&local_b8);
        }
        piVar14 = (int *)((uint)&local_80 | 4);
        puVar12 = (uint *)((uint)&local_b8 | 4);
        goto LAB_005bb004;
      }
    }
    else {
      local_d0 = '\x06';
      local_cc = puVar6;
    }
    if (puVar10 != (uint *)0x0) {
      thunk_FUN_016d3fb4(puVar12);
    }
    goto LAB_005baf48;
  }
  local_b8 = '\t';
  goto LAB_005bab50;
switchD_005ba5f4_caseD_0:
  uVar8 = uVar8 + 1;
  *(uint *)(param_2 + 0x14) = uVar8;
  if (uVar7 == uVar8) goto LAB_005ba69c;
  goto LAB_005ba5dc;
  while( true ) {
    uVar7 = uVar7 + 1;
    *(uint *)(iVar3 + 0x14) = uVar7;
    if (*(uint *)(iVar3 + 0x10) == uVar7) break;
LAB_005baf70:
    uVar8 = *(byte *)(iVar5 + uVar7) - 9;
    if ((0x17 < uVar8) || ((1 << (uVar8 & 0xff) & 0x800013U) == 0)) {
      if (*(byte *)(iVar5 + uVar7) == 0x22) {
        *(undefined4 *)(iVar3 + 8) = 0;
        *(uint *)(iVar3 + 0x14) = uVar7 + 1;
        FUN_0157e384(&local_b8,piVar14,iVar3);
        local_cc = (uint *)CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_);
        if (CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8))) == 2)
        goto LAB_005baec8;
        FUN_0112691c(&local_80,local_cc,CONCAT13((char)puStack_ad,uStack_b1._1_3_));
        puVar6 = local_7c;
        puVar12 = local_80;
        if (local_80 != (uint *)0x0) {
          FUN_005b91fc(&local_b8,local_80,local_7c);
          if (local_b8 == '\x06') {
            local_cc = (uint *)FUN_00ea05e4(CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_));
            local_d0 = '\x06';
          }
          else {
            uStack_ce = CONCAT11(puStack_b5._0_1_,uStack_b6);
            local_cc = (uint *)CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_);
            local_c8 = CONCAT13((char)puStack_ad,uStack_b1._1_3_);
            local_c4 = (uint *)CONCAT13(uStack_a9,puStack_ad._1_3_);
            local_d0 = local_b8;
            cStack_cf = cStack_b7;
            local_c0 = local_a8;
            local_bc = local_a4;
          }
          if (puVar6 != (uint *)0x0) {
            thunk_FUN_016d3fb4(puVar12);
          }
          goto LAB_005bade0;
        }
        puVar12 = local_7c;
      }
      else {
        puVar12 = (uint *)FUN_005b8238(iVar3,&local_40,&DAT_0187beb8);
      }
      local_cc = (uint *)FUN_00e959bc(puVar12,iVar3);
      goto LAB_005baec8;
    }
  }
LAB_005baf98:
  local_b8 = '\x05';
  cStack_b7 = '\0';
  uStack_b6 = 0;
  puStack_b5 = (uint *)((uint)puStack_b5 & 0xffffff00);
  local_cc = (uint *)FUN_008f9984(iVar3,&local_b8);
LAB_005baec8:
  local_d0 = '\x06';
  goto LAB_005bade0;
LAB_005ba7fc:
  puVar12 = local_38;
  FUN_005e5d80(&local_b8,&local_58);
  lVar15 = CONCAT44(local_38,local_3c);
  if (local_b8 == '\x01') goto LAB_005bab18;
  if (cStack_b7 != '\x01') {
    uVar9 = 4;
    puVar6 = local_40;
    goto LAB_005bac4c;
  }
  FUN_005ba5b8(&local_b8,local_58);
  if (local_b8 == '\x06') goto LAB_005bab18;
  local_78._0_4_ = (uint *)CONCAT13((char)puStack_ad,uStack_b1._1_3_);
  local_78._4_4_ = CONCAT13(uStack_a9,puStack_ad._1_3_);
  uVar2 = *(undefined2 *)((uint)&local_b8 | 1);
  local_7c = (uint *)CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_);
  puStack_70 = local_a8;
  uStack_6c = local_a4;
  *(undefined1 *)((undefined2 *)((uint)&local_80 | 1) + 1) =
       *(undefined1 *)((undefined2 *)((uint)&local_b8 | 1) + 1);
  *(undefined2 *)((uint)&local_80 | 1) = uVar2;
  local_80 = (uint *)CONCAT31(local_80._1_3_,local_b8);
  if (puVar12 == local_40) {
    FUN_0157eb1c(&local_40);
    local_d4 = local_3c;
  }
  local_38 = (uint *)((int)puVar12 + 1);
  puVar12 = (uint *)((int)local_d4 + iVar3);
  iVar3 = iVar3 + 0x18;
  *puVar12 = (uint)local_80;
  puVar12[1] = (uint)local_7c;
  puVar12[2] = (uint)(uint *)local_78;
  puVar12[3] = local_78._4_4_;
  puVar12[4] = (uint)puStack_70;
  puVar12[5] = uStack_6c;
  goto LAB_005ba7fc;
LAB_005bab18:
  puVar6 = (uint *)CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_);
  FUN_00f2036c(local_d4,puVar12);
  uVar9 = 6;
  lVar15 = (ulonglong)extraout_r1 << 0x20;
  if (local_40 != (uint *)0x0) {
    lVar15 = thunk_FUN_016d3fb4(local_3c);
  }
LAB_005bac4c:
  *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
  local_80 = (uint *)CONCAT31(local_80._1_3_,uVar9);
  local_7c = puVar6;
  local_78 = lVar15;
  puVar6 = (uint *)FUN_008fad50(param_2);
  local_b8 = (char)local_80;
  cStack_b7 = (char)((uint)local_80 >> 8);
  uStack_b6 = (undefined1)((uint)local_80 >> 0x10);
  puStack_b5._0_1_ = (undefined1)((uint)local_80 >> 0x18);
  uStack_b1._0_1_ = (undefined1)((uint)local_7c >> 0x18);
  puStack_ad._0_1_ = (char)((ulonglong)local_78 >> 0x18);
  uStack_a9 = (undefined1)((ulonglong)local_78 >> 0x38);
  local_a8 = puStack_70;
  local_a4 = uStack_6c;
  local_a0 = puVar6;
  if (local_b8 != '\x06') {
    if (puVar6 == (uint *)0x0) {
      unaff_r8 = (uint *)CONCAT13(uStack_a9,puStack_ad._1_3_);
      unaff_r9 = CONCAT13((char)puStack_ad,uStack_b1._1_3_);
      puVar12 = (uint *)CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_);
      uVar2 = (undefined2)((uint)local_80 >> 0x10);
      unaff_r5 = puStack_70;
      uVar13 = uStack_6c;
      cStack_cf = cStack_b7;
      if (local_b8 == '\x06') goto LAB_005bb254;
      goto LAB_005bae3c;
    }
    goto LAB_005bae68;
  }
  puVar12 = (uint *)CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_);
  if (puVar6 == (uint *)0x0) goto LAB_005bb254;
  FUN_005c3974(puVar6);
  goto LAB_005bae2c;
LAB_005bb004:
  FUN_008fa450(&local_40,&local_98);
  iVar3 = local_98;
  if ((char)local_40 != '\x01') {
    if (local_40._1_1_ != '\x01') {
LAB_005bb264:
      local_d0 = '\x05';
      puStack_ad = local_88;
      uStack_b1 = uStack_8c;
      puStack_b5 = local_90;
      cStack_cf = local_b8;
      uStack_ce = (undefined2)(CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8)) >> 8);
      local_cc = local_90;
      local_c8 = uStack_8c;
      local_c4 = local_88;
      goto LAB_005bade0;
    }
    *(undefined4 *)(local_98 + 8) = 0;
    *(int *)(local_98 + 0x14) = *(int *)(local_98 + 0x14) + 1;
    FUN_0157e384(&local_40,local_98 + 0xc,local_98);
    puVar10 = local_38;
    puVar6 = local_3c;
    local_cc = local_3c;
    if (local_40 == (uint *)0x2) goto LAB_005bb304;
    uVar4 = 0;
    if ((int)local_38 < 0) {
LAB_005bb360:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar4,local_d4);
    }
    if (local_38 == (uint *)0x0) {
      local_d4 = (uint *)0x1;
      FUN_016dd1aa(1,local_3c,0);
      puVar6 = (uint *)0x0;
    }
    else {
      local_d4 = (uint *)thunk_FUN_016d4a50(local_38);
      if (local_d4 == (uint *)0x0) {
        uVar4 = 1;
        local_d4 = puVar10;
        goto LAB_005bb360;
      }
      FUN_016dd1aa(local_d4,puVar6,puVar10);
      if (puVar10 == (uint *)0x80000001) {
        local_cc = local_d4;
        goto LAB_005bb304;
      }
      if (puVar10 == (uint *)0x80000000) goto LAB_005bb264;
      puVar6 = puVar10;
    }
    local_cc = (uint *)FUN_01114eb4(iVar3);
    if (local_cc != (uint *)0x0) {
LAB_005bb2ec:
      if (puVar6 != (uint *)0x0) {
        thunk_FUN_016d3fb4(local_d4);
      }
      goto LAB_005bb304;
    }
    FUN_005ba5b8(&local_40,iVar3);
    if ((char)local_40 == '\x06') {
      local_cc = local_3c;
      goto LAB_005bb2ec;
    }
    *puVar12 = (uint)local_40;
    puVar12[1] = (uint)local_3c;
    puVar12[2] = (uint)local_38;
    puVar12[3] = uStack_34;
    puVar12[4] = uStack_30;
    puVar12[5] = uStack_2c;
    local_80 = (uint *)CONCAT13(puStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(cStack_b7,local_b8)));
    local_7c = (uint *)CONCAT13((undefined1)uStack_b1,puStack_b5._1_3_);
    local_78._0_4_ = (uint *)CONCAT13((char)puStack_ad,uStack_b1._1_3_);
    local_78._4_4_ = CONCAT13(uStack_a9,puStack_ad._1_3_);
    puStack_70 = local_a8;
    uStack_6c = local_a4;
    puStack_68 = local_a0;
    if (puVar6 == (uint *)0x80000000) goto LAB_005bb264;
    local_cc = local_d4;
    if (puVar6 == (uint *)0x80000001) goto LAB_005bb304;
    local_5c = puVar10;
    local_60 = local_d4;
    local_58 = *piVar14;
    local_54 = piVar14[1];
    iStack_50 = piVar14[2];
    iStack_4c = piVar14[3];
    iStack_48 = piVar14[4];
    iStack_44 = piVar14[5];
    local_64 = puVar6;
    FUN_00e9dc08(&local_b8,&local_90,&local_64);
    if (local_b8 != '\x06') {
      FUN_005c37bc(&local_b8);
    }
    goto LAB_005bb004;
  }
  local_cc = local_3c;
LAB_005bb304:
  local_d0 = '\x06';
LAB_005baf48:
  FUN_00ea8964(&local_90);
LAB_005bade0:
  *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
  puVar6 = (uint *)FUN_008fb5ec();
  puVar12 = local_cc;
  local_b8 = local_d0;
  cStack_b7 = cStack_cf;
  uStack_b6 = (undefined1)uStack_ce;
  puStack_b5._0_1_ = (undefined1)((ushort)uStack_ce >> 8);
  puStack_b5._1_3_ = (uint3)local_cc;
  uStack_b1._0_1_ = (undefined1)((uint)local_cc >> 0x18);
  uStack_b1._1_3_ = (undefined3)local_c8;
  puStack_ad._0_1_ = (char)(local_c8 >> 0x18);
  puStack_ad._1_3_ = SUB43(local_c4,0);
  uStack_a9 = (undefined1)((uint)local_c4 >> 0x18);
  local_a8 = local_c0;
  local_a4 = local_bc;
  local_a0 = puVar6;
  if (local_d0 == '\x06') {
    if (puVar6 != (uint *)0x0) {
      FUN_005c3974(puVar6);
LAB_005bae2c:
      thunk_FUN_016d3fb4(puVar6);
    }
  }
  else if (puVar6 == (uint *)0x0) {
    unaff_r5 = local_c0;
    uVar13 = local_bc;
    unaff_r8 = local_c4;
    unaff_r9 = local_c8;
    uVar2 = uStack_ce;
    if (local_d0 != '\x06') {
LAB_005bae3c:
      *(undefined2 *)(param_1 + 2) = uVar2;
      param_1[1] = cStack_cf;
      *param_1 = local_b8;
      *(uint **)(param_1 + 4) = puVar12;
      *(uint *)(param_1 + 8) = unaff_r9;
      *(uint **)(param_1 + 0xc) = unaff_r8;
      *(uint **)(param_1 + 0x10) = unaff_r5;
      *(uint *)(param_1 + 0x14) = uVar13;
      return;
    }
  }
  else {
LAB_005bae68:
    puVar12 = local_a0;
    FUN_005c37bc(&local_b8);
  }
LAB_005bb254:
  puVar12 = (uint *)FUN_00e959bc(puVar12,param_2);
LAB_005bab04:
  *(uint **)(param_1 + 4) = puVar12;
  *param_1 = '\x06';
  return;
}

