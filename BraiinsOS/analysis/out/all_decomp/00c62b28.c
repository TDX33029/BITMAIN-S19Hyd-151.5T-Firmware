// FUN_00c62b28 @ 00c62b28 size=3320 calls_out=28 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c62b28(undefined1 *param_1,int *param_2)

{
  byte *pbVar1;
  undefined3 uVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  int **ppiVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint uVar12;
  uint extraout_r1;
  int extraout_r1_00;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  uint *puVar18;
  byte *pbVar19;
  int **ppiVar20;
  int **unaff_r9;
  byte *unaff_r11;
  longlong lVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  int **local_e8;
  int **local_d4;
  byte local_d0;
  byte bStack_cf;
  ushort uStack_ce;
  int **local_cc;
  int *local_c8;
  byte *local_c4;
  int *local_c0;
  byte *local_bc;
  byte local_b8;
  byte bStack_b7;
  undefined1 uStack_b6;
  int **ppiStack_b5;
  undefined4 uStack_b1;
  byte *pbStack_ad;
  undefined1 uStack_a9;
  int *local_a8;
  byte *local_a4;
  int **local_a0;
  int *local_98;
  undefined1 local_94;
  int **local_90;
  int *piStack_8c;
  byte *local_88;
  int *local_80;
  int **local_7c;
  undefined8 local_78;
  int *piStack_70;
  byte *pbStack_6c;
  int **ppiStack_68;
  int **local_64;
  int **ppiStack_60;
  int **ppiStack_5c;
  int *local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  int **local_3c;
  int **local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar13 = param_2[4];
  uVar15 = param_2[5];
  if (uVar13 <= uVar15) {
LAB_00c62c0c:
    local_b8 = 5;
LAB_00c62c10:
    bStack_b7 = 0;
    uStack_b6 = 0;
    ppiStack_b5 = (int **)((uint)ppiStack_b5._1_3_ << 8);
    uVar6 = FUN_00c629ac(param_2,&local_b8);
LAB_00c630cc:
    *(undefined4 *)(param_1 + 4) = uVar6;
    *param_1 = 6;
    return;
  }
  iVar5 = param_2[3];
LAB_00c62b4c:
  ppiVar20 = (int **)(uint)*(byte *)(iVar5 + uVar15);
  switch(ppiVar20) {
  case (int **)0x9:
  case (int **)0xa:
  case (int **)0xd:
  case (int **)0x20:
    goto switchD_00c62b64_caseD_9;
  case (int **)0xb:
  case (int **)0xc:
  case (int **)0xe:
  case (int **)0xf:
  case (int **)0x10:
  case (int **)0x11:
  case (int **)0x12:
  case (int **)0x13:
  case (int **)0x14:
  case (int **)0x15:
  case (int **)0x16:
  case (int **)0x17:
  case (int **)0x18:
  case (int **)0x19:
  case (int **)0x1a:
  case (int **)0x1b:
  case (int **)0x1c:
  case (int **)0x1d:
  case (int **)0x1e:
  case (int **)0x1f:
  case (int **)0x21:
  case (int **)0x23:
  case (int **)0x24:
  case (int **)0x25:
  case (int **)0x26:
  case (int **)0x27:
  case (int **)0x28:
  case (int **)0x29:
  case (int **)0x2a:
  case (int **)0x2b:
  case (int **)0x2c:
switchD_00c62b64_caseD_b:
    if (&DAT_00000009 < ppiVar20 + -0xc) {
      local_b8 = 10;
      bStack_b7 = 0;
      uStack_b6 = 0;
      ppiStack_b5 = (int **)((uint)ppiStack_b5._1_3_ << 8);
      ppiVar20 = (int **)FUN_00c629ac(param_2,&local_b8);
      goto LAB_00c63828;
    }
    FUN_011b4dc8(&local_80,param_2,1);
    if (local_80 != (int *)0x3 || local_7c != (int **)0x0) {
      uVar17 = 2;
      if (local_80 == (int *)&SUB_00000002) {
        puVar18 = (uint *)((uint)local_78._4_4_ >> 0x1f);
        uVar22 = CONCAT44(&local_78,local_80);
      }
      else {
        puVar18 = (uint *)0x0;
        uVar22 = CONCAT44(&local_78,local_80);
        if (local_80 != (int *)&DAT_00000001) goto LAB_00c6316c;
      }
      goto LAB_00c63274;
    }
    break;
  case (int **)0x22:
    param_2[2] = 0;
    param_2[5] = uVar15 + 1;
    FUN_0157e384(&local_b8,param_2 + 3,param_2);
    if (CONCAT13(ppiStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8))) == 2) {
      *(uint *)(param_1 + 4) = CONCAT13((undefined1)uStack_b1,ppiStack_b5._1_3_);
      *param_1 = 6;
      return;
    }
    unaff_r9 = (int **)CONCAT13((char)pbStack_ad,uStack_b1._1_3_);
    if ((char)pbStack_ad < '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,unaff_r9);
    }
    if (unaff_r9 == (int **)0x0) {
      ppiVar20 = (int **)0x0;
      puVar18 = (uint *)&DAT_00000001;
    }
    else {
      puVar18 = (uint *)thunk_FUN_016d4a50(unaff_r9);
      if (puVar18 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,unaff_r9);
      }
      ppiVar20 = unaff_r9;
    }
    uVar4 = FUN_016dd1aa(puVar18,CONCAT13((undefined1)uStack_b1,ppiStack_b5._1_3_),unaff_r9);
    uVar17 = 3;
    iVar5 = extraout_r1_00;
    local_78._0_4_ = param_2;
LAB_00c63278:
    uVar16 = (undefined1)iVar5;
    piVar11 = (int *)local_78;
    goto LAB_00c633c4;
  case (int **)0x2d:
    param_2[5] = uVar15 + 1;
    puVar18 = (uint *)0x0;
    FUN_011b4dc8(&local_80,param_2,0);
    if (local_80 != (int *)0x3 || local_7c != (int **)0x0) {
      if (local_80 == (int *)0x0) {
LAB_00c6316c:
        uVar17 = 0;
        uVar22 = CONCAT44(0x7fefffff,(uint)local_78._4_4_ & 0x7fffffff);
        if (((uint)local_78._4_4_ & 0x7fffffff) < 0x7ff00000) {
          local_b8 = 0;
          uVar22 = FUN_00c01f94(&local_b8);
          uVar17 = 2;
        }
        puVar18 = (uint *)&SUB_00000002;
      }
      else {
        uVar17 = 2;
        uVar22 = CONCAT44(&local_78,local_80);
        if (local_80 != (int *)&DAT_00000001) {
          puVar18 = (uint *)((uint)local_78._4_4_ >> 0x1f);
          uVar22 = CONCAT44(&local_78,local_80);
        }
      }
LAB_00c63274:
      iVar5 = (int)((ulonglong)uVar22 >> 0x20);
      uVar4 = (undefined2)uVar22;
      unaff_r9 = (int **)0x0;
      unaff_r11 = local_78._4_4_;
      goto LAB_00c63278;
    }
    break;
  default:
    puVar18 = &switchD_00c62c38::switchdataD_00c62c3c;
    piVar11 = param_2;
    switch(ppiVar20) {
    case (int **)0x5b:
      cVar3 = (char)param_2[9] + -1;
      *(char *)(param_2 + 9) = cVar3;
      if (cVar3 == '\0') {
        local_b8 = 0x18;
        bStack_b7 = 0;
        uStack_b6 = 0;
        ppiStack_b5 = (int **)((uint)ppiStack_b5._1_3_ << 8);
        uVar6 = FUN_00c629ac(param_2,&local_b8);
        *param_1 = 6;
        *(undefined4 *)(param_1 + 4) = uVar6;
        return;
      }
      param_2[5] = uVar15 + 1;
      local_54 = CONCAT31(local_54._1_3_,1);
      local_d4 = (int **)&DAT_00000008;
      unaff_r11 = (byte *)((int)&uStack_b1 + 1);
      iVar5 = 0;
      local_38 = (int **)0x0;
      local_3c = (int **)&DAT_00000008;
      local_40 = (int **)0x0;
      local_58 = param_2;
      goto LAB_00c62d68;
    default:
      goto switchD_00c62b64_caseD_b;
    case (int **)0x66:
      uVar12 = uVar15 + 1;
      param_2[5] = uVar12;
      uVar14 = uVar13;
      if (uVar13 < uVar12) {
        uVar14 = uVar12;
      }
      if (uVar13 <= uVar12) goto LAB_00c630b8;
      cVar3 = *(char *)(iVar5 + uVar12);
      uVar13 = uVar15 + 2;
      param_2[5] = uVar13;
      if (cVar3 == 'a') {
        if (uVar13 == uVar14) goto LAB_00c630b8;
        cVar3 = *(char *)(iVar5 + uVar13);
        uVar13 = uVar15 + 3;
        param_2[5] = uVar13;
        if (cVar3 == 'l') {
          if (uVar13 == uVar14) goto LAB_00c630b8;
          cVar3 = *(char *)(iVar5 + uVar13);
          uVar13 = uVar15 + 4;
          param_2[5] = uVar13;
          if (cVar3 == 's') {
            if (uVar13 == uVar14) goto LAB_00c630b8;
            cVar3 = *(char *)(iVar5 + uVar13);
            param_2[5] = uVar15 + 5;
            if (cVar3 == 'e') {
              uVar17 = 1;
              uVar16 = 0;
              ppiVar20 = (int **)0x73;
              uVar4 = 0x65;
              goto LAB_00c633c4;
            }
          }
        }
      }
      break;
    case (int **)0x6e:
      uVar12 = uVar15 + 1;
      param_2[5] = uVar12;
      uVar14 = uVar13;
      if (uVar12 >= uVar13 && uVar12 != uVar13) {
        uVar14 = uVar12;
      }
      if (uVar12 < uVar13) {
        cVar3 = *(char *)(iVar5 + uVar12);
        uVar13 = uVar15 + 2;
        param_2[5] = uVar13;
        if (cVar3 == 'u') {
          if (uVar13 == uVar14) goto LAB_00c630b8;
          cVar3 = *(char *)(iVar5 + uVar13);
          uVar13 = uVar15 + 3;
          param_2[5] = uVar13;
          if (cVar3 == 'l') {
            if (uVar13 == uVar14) goto LAB_00c630b8;
            cVar3 = *(char *)(iVar5 + uVar13);
            iVar5 = uVar15 + 4;
            param_2[5] = iVar5;
            if (cVar3 == 'l') {
              uVar17 = 0;
              ppiVar20 = (int **)&DAT_0000006c;
              uVar4 = 0x6c;
              local_78._0_4_ = param_2;
              goto LAB_00c63278;
            }
          }
        }
        break;
      }
LAB_00c630b8:
      local_b8 = 5;
LAB_00c630bc:
      bStack_b7 = 0;
      uStack_b6 = 0;
      ppiStack_b5 = (int **)((uint)ppiStack_b5._1_3_ << 8);
      uVar6 = FUN_011b4d78(param_2,&local_b8);
      goto LAB_00c630cc;
    case (int **)0x74:
      uVar12 = uVar15 + 1;
      param_2[5] = uVar12;
      uVar14 = uVar13;
      if (uVar13 < uVar12) {
        uVar14 = uVar12;
      }
      if (uVar13 <= uVar12) goto LAB_00c630b8;
      cVar3 = *(char *)(iVar5 + uVar12);
      uVar13 = uVar15 + 2;
      param_2[5] = uVar13;
      if (cVar3 == 'r') {
        if (uVar13 == uVar14) goto LAB_00c630b8;
        cVar3 = *(char *)(iVar5 + uVar13);
        uVar13 = uVar15 + 3;
        param_2[5] = uVar13;
        if (cVar3 != 'u') break;
        if (uVar13 == uVar14) goto LAB_00c630b8;
        cVar3 = *(char *)(iVar5 + uVar13);
        param_2[5] = uVar15 + 4;
        if (cVar3 == 'e') {
          uVar16 = 1;
          uVar17 = 1;
          ppiVar20 = (int **)0x75;
          uVar4 = 0x65;
          goto LAB_00c633c4;
        }
      }
      break;
    case (int **)0x7b:
      cVar3 = (char)param_2[9] + -1;
      *(char *)(param_2 + 9) = cVar3;
      if (cVar3 == '\0') {
        local_b8 = 0x18;
        goto LAB_00c62c10;
      }
      unaff_r11 = &local_b8;
      param_2[5] = uVar15 + 1;
      local_94 = 1;
      local_98 = param_2;
      FUN_011bd334(unaff_r11,&local_98);
      piVar11 = local_98;
      if (local_b8 == 1) {
        ppiVar7 = (int **)CONCAT13((undefined1)uStack_b1,ppiStack_b5._1_3_);
LAB_00c62f98:
        local_d0 = 6;
        local_cc = ppiVar7;
      }
      else {
        if (bStack_b7 == '\x01') {
          unaff_r9 = (int **)(local_98 + 3);
          local_98[2] = 0;
          local_98[5] = local_98[5] + 1;
          FUN_0157e384(&local_b8,unaff_r9,local_98);
          ppiVar20 = (int **)CONCAT13((undefined1)uStack_b1,ppiStack_b5._1_3_);
          if (CONCAT13(ppiStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8))) == 2) {
            ppiVar7 = ppiVar20;
            goto LAB_00c62f98;
          }
          piVar8 = (int *)CONCAT13((char)pbStack_ad,uStack_b1._1_3_);
          if (piVar8 == (int *)&DAT_0000001e) {
            iVar5 = thunk_FUN_016dd50a(ppiVar20,&DAT_003c519d,0x1e);
            if (iVar5 != 0) {
              ppiVar7 = (int **)thunk_FUN_016d4a50(0x1e);
              goto joined_r0x00c634e8;
            }
LAB_00c63418:
            ppiVar20 = (int **)FUN_011be240(piVar11);
            if (ppiVar20 != (int **)0x0) goto LAB_00c634bc;
            uVar13 = piVar11[5];
            if ((uint)piVar11[4] <= uVar13) goto LAB_00c6346c;
            piVar8 = *unaff_r9;
            goto LAB_00c63444;
          }
          if ((int *)0x7fffffff < piVar8) goto LAB_00c63414;
          if (piVar8 == (int *)0x0) {
            ppiVar7 = (int **)&DAT_00000001;
            FUN_016dd1aa(1,ppiVar20,0);
          }
          else {
            ppiVar7 = (int **)FUN_0063f47c(piVar8,1);
joined_r0x00c634e8:
            if (ppiVar7 == (int **)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,piVar8);
            }
            FUN_016dd1aa(ppiVar7,ppiVar20,piVar8);
            if (piVar8 == (int *)&DAT_80000000) goto LAB_00c63418;
            if (piVar8 == (int *)0x80000001) goto LAB_00c632e8;
            if (piVar8 == (int *)0x80000002) goto LAB_00c62f98;
          }
          local_88 = (byte *)0x0;
          local_90 = (int **)0x0;
          local_80 = piVar8;
          local_7c = ppiVar7;
          local_78._0_4_ = piVar8;
          ppiVar20 = (int **)FUN_011be240(piVar11);
          if (ppiVar20 == (int **)0x0) {
            FUN_00c62b28(&local_d0,piVar11);
            if (local_d0 != 6) {
              unaff_r9 = &local_80;
              FUN_00c42960(&local_b8,&local_90,unaff_r9,&local_d0);
              if (local_b8 != 6) {
                FUN_00d4fc54(&local_b8);
              }
              puVar9 = (undefined4 *)((uint)unaff_r9 | 4);
              puVar10 = (undefined4 *)((uint)&local_b8 | 4);
              goto LAB_00c63600;
            }
          }
          else {
            local_d0 = 6;
            local_cc = ppiVar20;
          }
          if (piVar8 != (int *)0x0) {
            thunk_FUN_016d3fb4(ppiVar7);
          }
          FUN_00c48644(&local_90);
          goto LAB_00c632fc;
        }
LAB_00c632e8:
        local_c4 = (byte *)0x0;
        local_cc = (int **)0x0;
        local_d0 = 5;
      }
      goto LAB_00c632fc;
    }
    local_b8 = 9;
    goto LAB_00c630bc;
  }
  piVar11 = (int *)local_78;
  goto LAB_00c63070;
  while( true ) {
    uVar13 = uVar13 + 1;
    piVar11[5] = uVar13;
    if (piVar11[4] == uVar13) break;
LAB_00c63444:
    uVar15 = *(byte *)((int)piVar8 + uVar13) - 9;
    if (0x19 < uVar15) {
LAB_00c638f0:
      uVar6 = FUN_00c7f220(piVar11,&local_80,&DAT_018757e8);
      ppiVar20 = (int **)FUN_011da0d4(uVar6,piVar11);
      goto LAB_00c634bc;
    }
    if ((1 << (uVar15 & 0xff) & 0x800013U) == 0) {
      if (uVar15 != 0x19) goto LAB_00c638f0;
      piVar11[2] = 0;
      piVar11[5] = uVar13 + 1;
      FUN_0157e384(&local_b8,unaff_r9,piVar11);
      pbVar19 = pbStack_ad;
      ppiVar20 = (int **)CONCAT13((undefined1)uStack_b1,ppiStack_b5._1_3_);
      if (CONCAT13(ppiStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8))) == 2)
      goto LAB_00c634bc;
      uVar2 = uStack_b1._1_3_;
      pbVar1 = (byte *)CONCAT13((char)pbStack_ad,uStack_b1._1_3_);
      if ((char)pbStack_ad < '\0') {
LAB_00c63414:
                    /* WARNING: Subroutine does not return */
        FUN_00600c10();
      }
      if (pbVar1 == (byte *)0x0) {
        piVar11 = (int *)&DAT_00000001;
      }
      else {
        piVar11 = (int *)thunk_FUN_016d4a50(pbVar1);
        if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,pbVar1);
        }
      }
      FUN_016dd1aa(piVar11,ppiVar20,pbVar1);
      uStack_a9 = 0;
      pbStack_ad = (byte *)0x0;
      uStack_b1 = (int *)((uint)pbVar19 & 0xff);
      local_b8 = (byte)piVar11;
      bStack_b7 = (byte)((uint)piVar11 >> 8);
      uStack_b6 = (undefined1)((uint)piVar11 >> 0x10);
      ppiStack_b5._0_1_ = (undefined1)((uint)piVar11 >> 0x18);
      ppiStack_b5 = (int **)CONCAT31(uVar2,ppiStack_b5._0_1_);
      unaff_r9 = &local_80;
      local_a8 = piVar11;
      local_a4 = pbVar1;
      FUN_00c62a08(unaff_r9,&local_b8);
      if ((byte)local_80 == 6) {
        local_cc = (int **)FUN_00c5afc4(local_7c);
        local_d0 = 6;
      }
      else {
        bStack_cf = (byte)((uint)local_80 >> 8);
        uStack_ce = (ushort)((uint)local_80 >> 0x10);
        local_cc = local_7c;
        local_c8 = (int *)local_78;
        local_c4 = local_78._4_4_;
        local_c0 = piStack_70;
        local_bc = pbStack_6c;
        local_d0 = (byte)local_80;
      }
      if (pbVar1 != (byte *)0x0) {
        thunk_FUN_016d3fb4(piVar11);
      }
      goto LAB_00c632fc;
    }
  }
LAB_00c6346c:
  local_b8 = 5;
  bStack_b7 = '\0';
  uStack_b6 = 0;
  ppiStack_b5 = (int **)((uint)ppiStack_b5 & 0xffffff00);
  ppiVar20 = (int **)FUN_00c629ac(piVar11,&local_b8);
LAB_00c634bc:
  local_d0 = 6;
  local_cc = ppiVar20;
  goto LAB_00c632fc;
LAB_00c62d68:
  unaff_r9 = local_38;
  FUN_00c63a28(&local_b8,&local_58);
  lVar21 = CONCAT44(local_38,local_3c);
  if (local_b8 == 1) goto LAB_00c63084;
  if (bStack_b7 != '\x01') {
    uVar16 = 4;
    ppiVar20 = local_40;
    goto LAB_00c631b8;
  }
  FUN_00c62b28(&local_b8,local_58);
  if (local_b8 == 6) goto LAB_00c63084;
  local_78._0_4_ = (int *)CONCAT13((char)pbStack_ad,uStack_b1._1_3_);
  local_78._4_4_ = (byte *)CONCAT13(uStack_a9,pbStack_ad._1_3_);
  uVar4 = *(undefined2 *)((uint)&local_b8 | 1);
  local_7c = (int **)CONCAT13((undefined1)uStack_b1,ppiStack_b5._1_3_);
  piStack_70 = local_a8;
  pbStack_6c = local_a4;
  *(undefined1 *)((undefined2 *)((uint)&local_80 | 1) + 1) =
       *(undefined1 *)((undefined2 *)((uint)&local_b8 | 1) + 1);
  *(undefined2 *)((uint)&local_80 | 1) = uVar4;
  local_80 = (int *)CONCAT31(local_80._1_3_,local_b8);
  if (unaff_r9 == local_40) {
    FUN_0157eb1c(&local_40);
    local_d4 = local_3c;
  }
  local_38 = (int **)((int)unaff_r9 + 1);
  puVar9 = (undefined4 *)((int)local_d4 + iVar5);
  iVar5 = iVar5 + 0x18;
  *puVar9 = local_80;
  puVar9[1] = local_7c;
  puVar9[2] = (int *)local_78;
  puVar9[3] = local_78._4_4_;
  puVar9[4] = piStack_70;
  puVar9[5] = pbStack_6c;
  goto LAB_00c62d68;
LAB_00c63084:
  ppiVar20 = (int **)CONCAT13((undefined1)uStack_b1,ppiStack_b5._1_3_);
  FUN_00ce0380(local_d4,unaff_r9);
  uVar16 = 6;
  lVar21 = (ulonglong)extraout_r1 << 0x20;
  if (local_40 != (int **)0x0) {
    lVar21 = thunk_FUN_016d3fb4(local_d4);
  }
LAB_00c631b8:
  *(char *)(param_2 + 9) = (char)param_2[9] + '\x01';
  local_80 = (int *)CONCAT31(local_80._1_3_,uVar16);
  local_7c = ppiVar20;
  local_78 = lVar21;
  ppiVar7 = (int **)FUN_00c63be8(param_2);
  pbVar19 = pbStack_6c;
  piVar11 = piStack_70;
  ppiVar20 = local_7c;
  uVar23 = CONCAT44(local_7c,local_80);
  local_a8 = piStack_70;
  local_a4 = pbStack_6c;
  local_b8 = (byte)local_80;
  bStack_b7 = (byte)((uint)local_80 >> 8);
  uStack_b6 = (undefined1)((uint)local_80 >> 0x10);
  ppiStack_b5._0_1_ = (undefined1)((uint)local_80 >> 0x18);
  ppiStack_b5._1_3_ = (uint3)local_7c;
  uStack_b1._0_1_ = (undefined1)((uint)local_7c >> 0x18);
  uStack_b1._1_3_ = (undefined3)local_78;
  pbStack_ad = (byte *)((ulonglong)local_78 >> 0x18);
  uStack_a9 = (undefined1)((ulonglong)local_78 >> 0x38);
  uVar13 = (uint)local_80 & 0xff;
  local_a0 = ppiVar7;
  if (uVar13 != 6) {
    if (ppiVar7 == (int **)0x0) {
      uVar23 = (ulonglong)CONCAT14(bStack_b7,(uint)local_80 >> 0x10);
      unaff_r11 = pbStack_6c;
      lVar21 = local_78;
      goto LAB_00c633bc;
    }
    goto LAB_00c63374;
  }
  uVar13 = 6;
  lVar21 = CONCAT44(unaff_r9,pbStack_6c);
  if (ppiVar7 == (int **)0x0) goto LAB_00c633bc;
  piVar8 = *ppiVar7;
  if (piVar8 != (int *)0x1) goto LAB_00c6334c;
  FUN_009b8520(ppiVar7 + 1);
  goto LAB_00c633b4;
switchD_00c62b64_caseD_9:
  uVar15 = uVar15 + 1;
  param_2[5] = uVar15;
  if (uVar13 == uVar15) goto LAB_00c62c0c;
  goto LAB_00c62b4c;
LAB_00c63600:
  FUN_011bd334(&local_40,&local_98);
  piVar11 = local_98;
  if ((char)local_40 != '\x01') {
    if (local_40._1_1_ != '\x01') {
LAB_00c6386c:
      local_d0 = 5;
      pbStack_ad = local_88;
      uStack_b1 = piStack_8c;
      ppiStack_b5 = local_90;
      bStack_cf = local_b8;
      uStack_ce = (ushort)(CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8)) >> 8);
      local_cc = local_90;
      local_c8 = piStack_8c;
      local_c4 = local_88;
      goto LAB_00c632fc;
    }
    local_98[2] = 0;
    local_98[5] = local_98[5] + 1;
    FUN_0157e384(&local_40,local_98 + 3,local_98);
    ppiVar7 = local_38;
    ppiVar20 = local_3c;
    local_cc = local_3c;
    if (local_40 == (int **)&SUB_00000002) goto LAB_00c638d4;
    uVar6 = 0;
    if ((int)local_38 < 0) {
LAB_00c63930:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar6,local_d4);
    }
    if (local_38 == (int **)0x0) {
      local_d4 = (int **)&DAT_00000001;
      FUN_016dd1aa(1,local_3c,0);
      local_e8 = (int **)0x0;
    }
    else {
      local_d4 = (int **)thunk_FUN_016d4a50(local_38);
      if (local_d4 == (int **)0x0) {
        uVar6 = 1;
        local_d4 = ppiVar7;
        goto LAB_00c63930;
      }
      FUN_016dd1aa(local_d4,ppiVar20,ppiVar7);
      if (ppiVar7 == (int **)0x80000001) {
        local_cc = local_d4;
        goto LAB_00c638d4;
      }
      if (ppiVar7 == (int **)&DAT_80000000) goto LAB_00c6386c;
      local_e8 = ppiVar7;
    }
    local_cc = (int **)FUN_011be240(piVar11);
    if (local_cc != (int **)0x0) {
LAB_00c638b8:
      if (local_e8 != (int **)0x0) {
        thunk_FUN_016d3fb4(local_d4);
      }
      goto LAB_00c638d4;
    }
    FUN_00c62b28(&local_40,piVar11);
    if ((char)local_40 == '\x06') {
      local_cc = local_3c;
      goto LAB_00c638b8;
    }
    *puVar10 = local_40;
    puVar10[1] = local_3c;
    puVar10[2] = local_38;
    puVar10[3] = uStack_34;
    puVar10[4] = uStack_30;
    puVar10[5] = uStack_2c;
    local_80 = (int *)CONCAT13(ppiStack_b5._0_1_,CONCAT12(uStack_b6,CONCAT11(bStack_b7,local_b8)));
    local_7c = (int **)CONCAT13((undefined1)uStack_b1,ppiStack_b5._1_3_);
    local_78._0_4_ = (int *)CONCAT13((char)pbStack_ad,uStack_b1._1_3_);
    local_78._4_4_ = (byte *)CONCAT13(uStack_a9,pbStack_ad._1_3_);
    piStack_70 = local_a8;
    pbStack_6c = local_a4;
    ppiStack_68 = local_a0;
    if (local_e8 == (int **)&DAT_80000000) goto LAB_00c6386c;
    local_cc = local_d4;
    if (local_e8 == (int **)0x80000001) goto LAB_00c638d4;
    local_64 = local_e8;
    ppiStack_60 = local_d4;
    ppiStack_5c = ppiVar7;
    local_58 = (int *)*puVar9;
    local_54 = puVar9[1];
    uStack_50 = puVar9[2];
    uStack_4c = puVar9[3];
    uStack_48 = puVar9[4];
    uStack_44 = puVar9[5];
    FUN_00c42960(&local_b8,&local_90,&local_64);
    if (local_b8 != 6) {
      FUN_00d4fc54(&local_b8);
    }
    goto LAB_00c63600;
  }
  local_cc = local_3c;
LAB_00c638d4:
  local_d0 = 6;
  FUN_00c48644(&local_90);
LAB_00c632fc:
  *(char *)(param_2 + 9) = (char)param_2[9] + '\x01';
  ppiVar7 = (int **)FUN_00c63e14();
  pbVar19 = local_bc;
  piVar11 = local_c0;
  ppiVar20 = local_cc;
  local_b8 = local_d0;
  bStack_b7 = bStack_cf;
  uStack_b6 = (undefined1)uStack_ce;
  ppiStack_b5._0_1_ = (undefined1)(uStack_ce >> 8);
  ppiStack_b5._1_3_ = (uint3)local_cc;
  uStack_b1._0_1_ = (undefined1)((uint)local_cc >> 0x18);
  uStack_b1._1_3_ = SUB43(local_c8,0);
  pbStack_ad._0_1_ = (char)((uint)local_c8 >> 0x18);
  pbStack_ad._1_3_ = SUB43(local_c4,0);
  uStack_a9 = (undefined1)((uint)local_c4 >> 0x18);
  local_a8 = local_c0;
  local_a4 = local_bc;
  local_a0 = ppiVar7;
  if (local_d0 == 6) {
    uVar13 = 6;
    uVar23 = CONCAT44(CONCAT22(uStack_ce,CONCAT11(bStack_cf,local_d0)),&DAT_00000006);
    lVar21 = CONCAT44(unaff_r9,local_bc);
    if (ppiVar7 != (int **)0x0) {
      piVar8 = *ppiVar7;
      if (piVar8 == (int *)0x1) {
        FUN_009b8520(ppiVar7 + 1);
      }
      else {
LAB_00c6334c:
        ppiVar7 = local_a0;
        pbVar19 = local_a4;
        piVar11 = local_a8;
        if ((piVar8 == (int *)0x0) && (local_a0[2] != (int *)0x0)) {
          thunk_FUN_016d3fb4(local_a0[1]);
        }
      }
LAB_00c633b4:
      uVar13 = 6;
      uVar23 = thunk_FUN_016d3fb4(ppiVar7);
      lVar21 = CONCAT44(unaff_r9,pbVar19);
    }
  }
  else if (ppiVar7 == (int **)0x0) {
    uVar13 = (uint)local_d0;
    uVar23 = (ulonglong)CONCAT14(bStack_cf,(uint)uStack_ce);
    unaff_r11 = local_bc;
    lVar21 = CONCAT44(local_c4,local_c8);
  }
  else {
LAB_00c63374:
    ppiVar20 = local_a0;
    piVar11 = local_a8;
    lVar21 = CONCAT44(unaff_r9,local_a4);
    uVar23 = FUN_00c01f94(&local_b8);
    uVar13 = 6;
  }
LAB_00c633bc:
  unaff_r9 = (int **)((ulonglong)lVar21 >> 0x20);
  puVar18 = (uint *)lVar21;
  uVar17 = (undefined1)uVar13;
  uVar4 = (undefined2)uVar23;
  uVar16 = (undefined1)(uVar23 >> 0x20);
  if (uVar13 == 6) {
LAB_00c63828:
    piVar11 = (int *)FUN_011da0d4(ppiVar20,param_2);
LAB_00c63070:
    *(int **)(param_1 + 4) = piVar11;
    *param_1 = 6;
    return;
  }
LAB_00c633c4:
  *(undefined2 *)(param_1 + 2) = uVar4;
  param_1[1] = uVar16;
  *param_1 = uVar17;
  *(int ***)(param_1 + 4) = ppiVar20;
  *(uint **)(param_1 + 8) = puVar18;
  *(int ***)(param_1 + 0xc) = unaff_r9;
  *(int **)(param_1 + 0x10) = piVar11;
  *(byte **)(param_1 + 0x14) = unaff_r11;
  return;
}

