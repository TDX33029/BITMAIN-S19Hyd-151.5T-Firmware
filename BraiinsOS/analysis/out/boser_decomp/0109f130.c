// FUN_0109f130 @ 0109f130 size=4452 calls_out=30 calls_in=2
// strings: internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0109f130(uint *******param_1,undefined4 *param_2,uint param_3,undefined4 param_4,
                 int *param_5)

{
  undefined1 uVar1;
  uint *******pppppppuVar2;
  uint *******pppppppuVar3;
  uint *******pppppppuVar4;
  uint *******pppppppuVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  uint *******pppppppuVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint ******ppppppuVar14;
  byte *pbVar15;
  int iVar16;
  uint *******pppppppuVar17;
  uint *******pppppppuVar18;
  uint *******pppppppuVar19;
  int iVar20;
  uint uVar21;
  uint *******pppppppuVar22;
  undefined1 *puVar23;
  uint *******pppppppuVar24;
  uint uVar25;
  uint uVar26;
  uint *******pppppppuVar27;
  uint ******ppppppuVar28;
  uint uVar29;
  uint *******unaff_r7;
  uint *******pppppppuVar30;
  uint uVar31;
  uint *******pppppppuVar32;
  byte bVar33;
  byte bVar34;
  bool bVar35;
  bool bVar36;
  undefined8 uVar37;
  uint ******local_e44;
  uint ******local_e40;
  undefined *local_e3c;
  uint local_e38;
  bool local_e30;
  byte local_e2c;
  byte local_e28;
  uint ******local_e24;
  uint ******local_e20;
  uint *******local_df0;
  uint ******local_dd8 [4];
  undefined4 uStack_dc8;
  undefined4 local_dc4;
  undefined4 uStack_dc0;
  undefined4 uStack_dbc;
  undefined4 uStack_db8;
  undefined4 uStack_db4;
  undefined4 local_db0;
  undefined4 local_dac;
  uint *******local_da8;
  uint *******local_da4;
  uint ******local_da0;
  uint local_d9c;
  undefined2 local_d94;
  undefined1 local_d92;
  undefined4 local_d90;
  uint *******local_d8c;
  uint *******local_d88;
  uint *******local_74c;
  uint *******local_748;
  uint *******local_744;
  uint *******local_740;
  uint ******local_73c;
  undefined4 *local_738;
  undefined *local_734;
  undefined4 *local_730;
  code *local_72c;
  undefined4 uStack_728;
  undefined4 uStack_724;
  undefined4 local_720;
  undefined4 uStack_71c;
  undefined4 uStack_718;
  undefined4 uStack_714;
  uint ******ppppppuStack_710;
  undefined4 *puStack_70c;
  uint ******local_708;
  undefined4 uStack_704;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 local_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined4 local_6e0;
  uint uStack_6dc;
  uint *******pppppppuStack_6d8;
  uint *******pppppppuStack_6d4;
  uint ******ppppppuStack_6d0;
  uint uStack_6cc;
  uint *******local_104;
  uint *******local_100;
  uint *******local_fc;
  uint *******local_f8;
  uint ******local_f4;
  uint *******local_f0;
  uint *******pppppppuStack_ec;
  uint *******pppppppuStack_e8;
  uint ******ppppppuStack_e4;
  int local_e0;
  int local_dc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined2 local_a8;
  undefined4 local_a0;
  uint *******local_9c;
  uint *******local_98;
  uint ******local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint ******local_68;
  undefined4 *puStack_64;
  uint *******local_60;
  uint *******local_5c;
  uint ******local_58;
  undefined4 *puStack_54;
  uint *******local_50;
  uint *******local_4c;
  uint *******local_48;
  uint ******local_44;
  undefined4 *local_40;
  undefined4 local_38;
  uint *******local_34;
  uint ******local_30;
  undefined4 *puStack_2c;
  
  iVar20 = param_2[1];
  if ((iVar20 == 0) ||
     (((param_3 & 1) != 0 && (iVar8 = FUN_01417e0c(*param_2,iVar20,param_4), iVar8 == 0)))) {
    *param_1 = (uint ******)0x3;
    param_1[1] = (uint ******)0x0;
    return;
  }
  if (*param_5 == 0) {
    local_d90 = 0;
    local_74c = (uint *******)&DAT_00000064;
    pppppppuVar32 = (uint *******)*param_2;
    local_748 = (uint *******)0x0;
    local_104 = (uint *******)&DAT_00000064;
    pppppppuVar24 = param_1;
LAB_0109f204:
    local_38 = (uint *******)&local_744;
    local_34 = local_104;
  }
  else {
    iVar8 = param_5[1];
    FUN_01426640(&local_d90,&local_748,iVar8);
    pppppppuVar24 = (uint *******)0x0;
    FUN_01426640(&local_748,&local_a0,iVar8);
    pppppppuVar32 = (uint *******)*param_2;
    if (local_104 < &DAT_00000065) goto LAB_0109f204;
    local_34 = local_744;
    local_38 = local_740;
  }
  local_9c = (uint *******)((int)pppppppuVar32 + iVar20);
  pppppppuVar27 = pppppppuVar32;
  do {
    uVar12 = (uint)*(byte *)pppppppuVar27;
    pppppppuVar17 = local_98;
    if (uVar12 == 10) {
      pppppppuVar27 = (uint *******)((int)pppppppuVar27 + 1);
    }
    else {
      if (uVar12 != 0xd) {
        if (3 < (uint)((int)local_9c - (int)pppppppuVar27)) {
          ppppppuVar14 = *pppppppuVar27;
          uVar12 = (uint)ppppppuVar14 & 0xff;
          if (uVar12 == 0x47) {
            uVar12 = 0x47;
            if ((undefined *)((uint)ppppppuVar14 >> 8) == &UNK_00205445) {
              iVar8 = 3;
              local_98 = pppppppuVar27 + 1;
              goto LAB_0109f444;
            }
          }
          else if ((((uVar12 == 0x50) &&
                    (uVar12 = 0x50, (undefined *)((uint)ppppppuVar14 >> 8) == &DAT_0054534f)) &&
                   (pppppppuVar27 + 1 < local_9c)) && (*(byte *)(pppppppuVar27 + 1) == 0x20)) {
            local_98 = (uint *******)((int)pppppppuVar27 + 5);
            iVar8 = 4;
            goto LAB_0109f444;
          }
        }
        if (pppppppuVar27 < local_9c) {
          unaff_r7 = (uint *******)&SUB_00000004;
          if (0x5e < uVar12 - 0x20) goto LAB_0109f358;
          if ((uint *******)((int)pppppppuVar27 + 1) < local_9c) {
            pbVar15 = (byte *)(~(uint)pppppppuVar27 + (int)local_9c);
            pppppppuVar30 = (uint *******)((int)pppppppuVar27 + 1);
            goto LAB_0109f334;
          }
        }
        break;
      }
      if (local_9c <= (uint *******)((int)pppppppuVar27 + 1)) break;
      if (*(byte *)((int)pppppppuVar27 + 1) != 10) {
        bVar33 = 4;
        goto LAB_0109f2d8;
      }
      pppppppuVar27 = (uint *******)((int)pppppppuVar27 + 2);
    }
  } while (pppppppuVar27 < local_9c);
LAB_0109f264:
  local_98 = pppppppuVar17;
  ppppppuVar14 = (uint ******)0x3;
  pppppppuVar27 = unaff_r7;
LAB_0109f3b4:
  uVar21 = 0;
  bVar35 = false;
LAB_0109f3bc:
  *param_1 = ppppppuVar14;
  param_1[1] = (uint ******)0x0;
  if (&DAT_00000064 < local_104) {
    FUN_0134c054(local_104,local_740,4,0x10);
  }
  bVar36 = false;
LAB_0109f3e4:
  if (&DAT_00000064 < local_74c) {
    FUN_0134c054(local_74c,local_d88,4,0x10);
  }
  if (((bVar35) && (9 < uVar21)) && (pppppppuVar27 != (uint *******)0x0)) {
    thunk_FUN_01be4678(pppppppuVar24);
  }
  if (bVar36) {
    FUN_0141a94c(local_dd8);
  }
  return;
LAB_0109f334:
  if (*(byte *)pppppppuVar30 == 0x20) {
    local_98 = (uint *******)((int)pppppppuVar30 + 1);
    iVar8 = (int)pppppppuVar30 - (int)pppppppuVar27;
LAB_0109f444:
    pppppppuVar30 = local_98;
    local_a0 = local_98;
    pppppppuVar24 = local_98;
LAB_0109f460:
    do {
      if ((uint)((int)local_9c - (int)pppppppuVar24) < 4) {
        pppppppuVar19 = pppppppuVar24;
      }
      else {
        ppppppuVar14 = *pppppppuVar24;
        unaff_r7 = (uint *******)0xfcfcfcfd;
        ppppppuVar14 = (uint ******)
                       (((int)ppppppuVar14 + 0xdedededfU | (int)ppppppuVar14 + 0x1010101U |
                         ((uint)ppppppuVar14 ^ 0x3e3e3e3e) + 0xfcfcfcfd | (uint)ppppppuVar14) &
                       0x80808080);
        if (ppppppuVar14 == (uint ******)0x0) {
          pppppppuVar24 = pppppppuVar24 + 1;
          goto LAB_0109f460;
        }
        unaff_r7 = local_dd8;
        local_dd8[0] = ppppppuVar14;
        iVar6 = 0;
        do {
          iVar16 = iVar6;
          if (iVar16 == 4) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf4354);
          }
          iVar6 = iVar16 + 1;
        } while (*(byte *)((int)unaff_r7 + iVar16) == 0);
        pppppppuVar19 = (uint *******)((int)pppppppuVar24 + iVar16);
      }
      pppppppuVar17 = local_98;
      if (local_9c <= pppppppuVar19) goto LAB_0109f264;
      pppppppuVar24 = (uint *******)((int)pppppppuVar19 + 1);
    } while ((&DAT_0047793d)[*(byte *)pppppppuVar19] != '\0');
    bVar33 = 7;
    unaff_r7 = (uint *******)&SUB_00000004;
    bVar35 = pppppppuVar19 == local_98;
    local_98 = pppppppuVar24;
    if ((bVar35) || (*(byte *)pppppppuVar19 != 0x20)) goto LAB_0109f35c;
    local_a0 = pppppppuVar24;
    uVar12 = FUN_014163bc(&local_a0);
    pppppppuVar22 = local_9c;
    unaff_r7 = (uint *******)((uVar12 & 0xffff) >> 8);
    if ((uVar12 & 0xff) == 2) goto LAB_0109f35c;
    pppppppuVar17 = local_98;
    if (((uVar12 & 1) != 0) || (pppppppuVar24 = pppppppuVar22, local_9c <= local_98))
    goto LAB_0109f264;
    pppppppuVar17 = (uint *******)((int)local_98 + 1);
    if (*(byte *)local_98 != 10) {
      if (*(byte *)local_98 != 0xd) {
LAB_0109f2d8:
        local_98 = pppppppuVar17;
        unaff_r7 = (uint *******)0x2;
        goto LAB_0109f35c;
      }
      if (local_9c <= pppppppuVar17) goto LAB_0109f264;
      pbVar15 = (byte *)((int)local_98 + 1);
      local_98 = (uint *******)((int)local_98 + 2);
      pppppppuVar17 = local_98;
      if (*pbVar15 == 10) goto LAB_0109f5a0;
      bVar7 = 0;
LAB_0109f60c:
      goto switchD_0109f36c_caseD_0;
    }
LAB_0109f5a0:
    local_98 = pppppppuVar17;
    pppppppuVar2 = local_98;
    local_60 = (uint *******)0x0;
    local_a0 = local_98;
    FUN_01416510(&local_50,&local_38,&local_a0,&local_60);
    pppppppuVar5 = local_34;
    pppppppuVar4 = local_38;
    pppppppuVar3 = local_4c;
    if (local_50 == (uint *******)0x2) {
      unaff_r7 = (uint *******)((uint)local_4c & 0xff);
      goto LAB_0109f35c;
    }
    pppppppuVar17 = local_98;
    if (((uint)local_50 & 1) != 0) goto LAB_0109f264;
    pppppppuVar17 = (uint *******)((int)pppppppuVar19 - (int)pppppppuVar30);
    if ((uint *******)0xfffe < pppppppuVar17) {
      bVar7 = 8;
      goto LAB_0109f60c;
    }
    local_df0 = local_34;
    FUN_014124a8(&local_a0,pppppppuVar27,iVar8);
    uVar12 = local_90;
    ppppppuVar14 = local_94;
    pppppppuVar27 = local_98;
    pppppppuVar24 = local_9c;
    uVar1 = (undefined1)local_a0;
    uVar21 = (uint)local_a0 & 0xff;
    if (uVar21 == 0xb) {
      ppppppuVar14 = (uint ******)0x4;
      *(byte *)(param_1 + 2) = 4;
      pppppppuVar24 = pppppppuVar22;
      pppppppuVar27 = pppppppuVar4;
      goto LAB_0109f3b4;
    }
    local_d92 = local_a0._3_1_;
    bVar33 = 1;
    local_d94 = local_a0._1_2_;
    if (unaff_r7 == (uint *******)&DAT_00000001) {
      bVar33 = 2;
    }
    if (local_74c < &DAT_00000065) {
      pppppppuVar18 = (uint *******)&local_d8c;
      pppppppuVar9 = local_74c;
    }
    else {
      pppppppuVar9 = local_d8c;
      pppppppuVar18 = local_d88;
    }
    bVar7 = FUN_014194e8(pppppppuVar32,pppppppuVar4,pppppppuVar5,pppppppuVar18,pppppppuVar9);
    if (bVar7 != 0xd) {
      ppppppuVar14 = (uint ******)0x4;
      bVar35 = true;
      *(byte *)(param_1 + 2) = bVar7;
      goto LAB_0109f3bc;
    }
    if (&DAT_00000064 < local_104) {
      FUN_0134c054(local_104,local_740,4,0x10);
    }
    FUN_01283fd8(&local_50,param_2,
                 (byte *)((iVar20 - (int)pppppppuVar22) + (int)pppppppuVar2) + (int)pppppppuVar3);
    if (((uint)local_44 & 1) == 0) {
      local_f4 = local_44;
      local_f8 = local_4c;
      local_fc = local_50;
      local_100 = (uint *******)&DAT_01d2e520;
    }
    else {
      local_34 = (uint *******)((int)local_50 - ((uint)local_44 >> 5));
      local_30 = (uint ******)((int)local_4c + ((uint)local_44 >> 5));
      local_38 = (uint *******)((int)local_48 + ((uint)local_44 >> 5));
      FUN_01283524(&local_a0,&local_38);
      local_f0 = (uint *******)((uint)local_44 >> 5);
      if (local_98 < local_f0) {
        local_740 = (uint *******)&local_60;
        local_60 = local_98;
        local_73c = (uint ******)&LAB_01a6a304;
        local_744 = (uint *******)&LAB_01a6a304;
        local_748 = (uint *******)&local_f0;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005ac267,&local_748,&DAT_01d2e534);
      }
      local_f8 = (uint *******)((int)local_98 - (int)local_f0);
      local_fc = (uint *******)((int)local_9c + (int)local_f0);
      local_100 = local_a0;
      local_f4 = local_94;
      local_9c = local_fc;
      local_98 = local_f8;
    }
    pppppppuVar30 = (uint *******)((int)pppppppuVar30 - (int)pppppppuVar32);
    pppppppuVar19 = (uint *******)((int)pppppppuVar19 - (int)pppppppuVar32);
    if ((pppppppuVar19 < pppppppuVar30) || (local_f8 < pppppppuVar19)) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(pppppppuVar30,pppppppuVar19,local_f8,&DAT_01cf4520);
    }
    local_38 = pppppppuVar17;
    local_60 = local_f8;
    if ((byte *)((int)local_f8 + (int)local_fc) <
        (byte *)((int)pppppppuVar17 + (int)local_fc + (int)pppppppuVar30)) {
      local_50 = local_fc;
      local_730 = &local_38;
      local_738 = &local_a0;
      local_740 = (uint *******)&local_60;
      local_748 = (uint *******)&local_50;
      local_72c = FUN_012fd02c;
      local_734 = &DAT_01abe704;
      local_73c = (uint ******)FUN_012fd02c;
      local_744 = (uint *******)&DAT_01abe704;
      local_a0 = (uint *******)((int)local_fc + (int)pppppppuVar30);
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0057e087,&local_748,&DAT_01c25b48);
    }
    ppppppuVar28 = (uint ******)&DAT_00000001;
    FUN_01283604(&local_f0,&local_100,pppppppuVar30);
    local_4c = pppppppuStack_ec;
    local_48 = pppppppuStack_e8;
    local_44 = ppppppuStack_e4;
    local_50 = (uint *******)0x0;
    if (local_f0 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01cf47ac);
    }
    local_a0 = local_f0;
    puVar10 = (undefined4 *)((uint)&local_f0 | 4);
    local_9c = (uint *******)*puVar10;
    local_98 = (uint *******)puVar10[1];
    local_94 = (uint ******)puVar10[2];
    FUN_01414f00(&local_748);
    if (local_50 != (uint *******)0x0) {
      (*(code *)local_50[4])(&local_44,local_4c,local_48);
    }
    pppppppuVar32 = local_748;
    uVar11 = (uint)local_748 & 0xff;
    if (uVar11 == 3) {
      *param_1 = (uint ******)0x4;
      param_1[1] = (uint ******)0x0;
      *(byte *)(param_1 + 2) = 7;
LAB_010a0188:
      bVar36 = uVar11 != 3;
      bVar35 = uVar11 == 3;
      (*(code *)local_100[4])(&local_f4,local_fc,local_f8);
      goto LAB_0109f3e4;
    }
    FUN_01bed4e2((uint)local_dd8 | 2,(uint)&local_748 | 2,0x2a);
    iVar8 = 3;
    local_d9c = uVar12;
    iVar20 = 0;
    local_da0 = ppppppuVar14;
    local_da4 = pppppppuVar27;
    local_da8 = pppppppuVar24;
    local_dac = CONCAT13(local_d92,CONCAT21(local_d94,uVar1));
    local_dd8[0]._0_2_ = SUB42(pppppppuVar32,0);
    if (*(char *)((int)param_5 + 0x1b) == '\x01') {
      iVar8 = 0;
      local_ac = 0;
      local_b4 = 0;
      local_a8 = 0;
      local_b0 = 4;
      local_bc = 4;
      local_b8 = 0;
      local_c0 = 0;
      local_c4 = 0;
      local_c8 = 2;
    }
    local_dc = 0;
    puVar10 = (undefined4 *)param_5[2];
    local_a0 = (uint *******)*puVar10;
    local_9c = (uint *******)puVar10[1];
    *puVar10 = 3;
    puVar10[1] = 0;
    if (local_a0 == (uint *******)&DAT_00000003 && local_9c == (uint *******)0x0) {
      local_a0 = (uint *******)0x0;
      local_9c = (uint *******)0x0;
      local_6c = 0;
      local_68 = (uint ******)((uint)local_68 & 0xffff0000);
      local_70 = 4;
      local_7c = 4;
      local_74 = 0;
      local_78 = 0;
      local_80 = 0;
      local_84 = 0;
      local_88 = 2;
    }
    else {
      local_98 = (uint *******)puVar10[2];
      local_94 = (uint ******)puVar10[3];
      local_90 = puVar10[4];
      local_8c = puVar10[5];
      local_88 = puVar10[6];
      local_84 = puVar10[7];
      local_80 = puVar10[8];
      local_7c = puVar10[9];
      local_78 = puVar10[10];
      local_74 = puVar10[0xb];
      local_70 = puVar10[0xc];
      local_6c = puVar10[0xd];
      ppppppuVar28 = (uint ******)puVar10[0xe];
      puVar10 = (undefined4 *)puVar10[0xf];
      local_68 = ppppppuVar28;
      puStack_64 = puVar10;
    }
    local_e0 = iVar8;
    FUN_0141e28c(&local_a0,pppppppuVar5);
    pppppppuVar32 = local_74c;
    if (local_74c < &DAT_00000065) {
      pppppppuVar17 = (uint *******)&local_d8c;
      local_d8c = local_74c;
    }
    else {
      pppppppuVar17 = local_d88;
    }
    if (local_d8c < pppppppuVar5) {
      local_e3c = &DAT_01cf4530;
      pppppppuVar17 = (uint *******)0x0;
LAB_010a02b4:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(pppppppuVar17,local_df0,local_d8c,local_e3c);
    }
    local_e28 = unaff_r7 == (uint *******)&DAT_00000001;
    local_e30 = uVar21 == 7;
    if (pppppppuVar5 == (uint *******)0x0) {
      local_e20 = (uint ******)0x0;
      local_e24 = (uint ******)0x0;
      local_e2c = 0;
      goto LAB_0109fef4;
    }
    pppppppuVar19 = pppppppuVar17 + (int)pppppppuVar5 * 4;
    puVar13 = (undefined4 *)((uint)&local_50 | 4);
    local_e3c = &DAT_01cf4540;
    bVar35 = false;
    local_e38 = 0;
    local_e20 = (uint ******)0x0;
    local_e24 = (uint ******)0x0;
    bVar36 = false;
    local_e2c = 0;
    pppppppuVar30 = pppppppuVar17;
    bVar7 = local_e28;
    while( true ) {
      pppppppuVar17 = (uint *******)*pppppppuVar30;
      local_df0 = (uint *******)pppppppuVar30[1];
      local_d8c = local_f8;
      if ((local_df0 < pppppppuVar17) || (local_f8 < local_df0)) goto LAB_010a02b4;
      FUN_01413248(&local_748,(byte *)((int)local_fc + (int)pppppppuVar17),
                   (int)local_df0 - (int)pppppppuVar17);
      if (local_748 == (uint *******)&DAT_00000001) break;
      local_60 = local_744;
      local_5c = local_740;
      local_58 = local_73c;
      puStack_54 = local_738;
      FUN_01283604(&local_748,&local_100,pppppppuVar30[2],pppppppuVar30[3]);
      if (local_748 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01cf4c0c);
      }
      pppppppuVar17 = pppppppuVar30 + 4;
      *puVar13 = local_744;
      puVar13[1] = local_740;
      puVar13[2] = local_73c;
      local_40 = (undefined4 *)((uint)local_40 & 0xffffff00);
      local_50 = local_748;
      if (local_60 == (uint *******)0x0) {
        uVar12 = (uint)local_5c & 0xff;
        if (uVar12 != 0x18) {
          if (uVar12 < 0x45) {
            if (uVar12 == 0x14) {
              if ((bVar7 & 1) == 0) {
                bVar7 = FUN_01429a28(local_4c,local_48,"k",10);
              }
              else {
                bVar7 = FUN_01429a28(local_4c,local_48,&DAT_005319a4,5);
                bVar7 = bVar7 ^ 1;
              }
            }
            else if (uVar12 == 0x22) {
              iVar20 = 0;
              local_e2c = 0;
              if (local_48 == (uint *******)&DAT_0000000c) {
                do {
                  if (iVar20 == 0xc) {
                    local_e2c = 1;
                    goto LAB_0109fde8;
                  }
                  uVar12 = (uint)*(byte *)((int)local_4c + iVar20);
                  uVar25 = (uint)(byte)(&DAT_00477bdd)[iVar20];
                  if (uVar12 - 0x41 < 0x1a) {
                    uVar12 = uVar12 | 0x20;
                  }
                  iVar20 = iVar20 + 1;
                  if (uVar25 - 0x41 < 0x1a) {
                    uVar25 = uVar25 | 0x20;
                  }
                } while (uVar12 == uVar25);
                local_e2c = 0;
LAB_0109fde8:
              }
            }
          }
          else if (uVar12 == 0x45) {
            if (unaff_r7 != (uint *******)&DAT_00000001) {
              bVar34 = 3;
              goto LAB_010a011c;
            }
            local_e38 = FUN_0142994c(local_4c,local_48);
            if (local_e38 != 0) {
              local_e24 = (uint ******)0xffffffff;
              local_e20 = (uint ******)0xfffffffe;
            }
            bVar35 = true;
          }
          else if (uVar12 == 0x47) {
            local_e30 = (bool)local_e28;
          }
          goto LAB_0109fe24;
        }
        ppppppuVar28 = local_73c;
        if (bVar35) {
LAB_0109fc90:
          (*(code *)local_748[4])(&local_44);
          if (local_60 != (uint *******)0x0) {
            (*(code *)local_60[4])(&puStack_54,local_5c,local_58);
          }
          goto LAB_0109fe98;
        }
        bVar34 = 1;
        if (local_48 != (uint *******)0x0) {
          pppppppuVar22 = (uint *******)0x0;
          ppppppuVar28 = (uint ******)0x0;
          ppppppuVar14 = (uint ******)0x0;
          while (local_48 != pppppppuVar22) {
            uVar12 = *(byte *)((int)local_4c + (int)pppppppuVar22) - 0x30 & 0xff;
            if (9 < uVar12) goto LAB_010a011c;
            uVar29 = (uint)(ZEXT48(ppppppuVar28) * 10);
            uVar31 = (uint)(ZEXT48(ppppppuVar28) * 10 >> 0x20);
            uVar25 = (uint)(ZEXT48(ppppppuVar14) * 10);
            uVar26 = uVar31 + uVar25;
            puVar10 = (undefined4 *)(uint)CARRY4(uVar31,uVar25);
            if ((int)(ZEXT48(ppppppuVar14) * 10 >> 0x20) != 0 || puVar10 != (undefined4 *)0x0)
            goto LAB_010a011c;
            ppppppuVar28 = (uint ******)(uVar29 + uVar12);
            pppppppuVar22 = (uint *******)((int)pppppppuVar22 + 1);
            ppppppuVar14 = (uint ******)(uVar26 + CARRY4(uVar29,uVar12));
            if (CARRY4(uVar26,(uint)CARRY4(uVar29,uVar12))) goto LAB_010a011c;
          }
          if (bVar36) {
            if (local_e40 == ppppppuVar28 && local_e44 == ppppppuVar14) goto LAB_0109fc90;
          }
          else {
            if ((uint)((uint ******)0xfffffffd < ppppppuVar28) <= (int)ppppppuVar14 + 1U) {
              bVar35 = false;
              bVar36 = true;
              local_e44 = ppppppuVar14;
              local_e40 = ppppppuVar28;
              local_e24 = ppppppuVar14;
              local_e20 = ppppppuVar28;
              goto LAB_0109fe24;
            }
            bVar34 = 10;
          }
        }
LAB_010a011c:
        *param_1 = (uint ******)0x4;
        param_1[1] = (uint ******)0x0;
        ppppppuVar14 = local_748[4];
        *(byte *)(param_1 + 2) = bVar34;
        (*(code *)ppppppuVar14)(&local_44);
        if (local_60 != (uint *******)0x0) {
          (*(code *)local_60[4])(&puStack_54,local_5c,local_58);
        }
        goto LAB_010a015c;
      }
LAB_0109fe24:
      if (local_e0 != 3 || local_dc != 0) {
        FUN_01283604(&local_748,&local_100,*pppppppuVar30,pppppppuVar30[1]);
        FUN_0141f280(&local_e0,&local_60,&local_748);
      }
      puVar10 = local_40;
      ppppppuVar28 = local_44;
      local_38 = local_60;
      local_34 = local_5c;
      local_30 = local_58;
      puStack_2c = puStack_54;
      local_748 = local_50;
      local_744 = local_4c;
      local_740 = local_48;
      local_73c = local_44;
      local_738 = local_40;
      FUN_0137f69c(&local_a0);
LAB_0109fe98:
      pppppppuVar30 = pppppppuVar17;
      if (pppppppuVar17 == pppppppuVar19) {
        if ((!bVar35) || ((local_e38 & 1) != 0)) {
          iVar20 = local_dc;
          iVar8 = local_e0;
          local_e28 = bVar7;
LAB_0109fef4:
          local_50 = (uint *******)0x0;
          if ((iVar8 != 3 || iVar20 != 0) &&
             (FUN_01420644(&local_748,&local_50,&local_e0),
             local_748 != (uint *******)&DAT_00000003 || local_744 != (uint *******)0x0)) {
            FUN_0142e18c(&local_748);
          }
          uVar1 = (undefined1)local_dac;
          uVar37 = CONCAT44(iVar20,pppppppuVar17);
          if (8 < (local_dac & 0xff)) {
            if ((local_dac & 0xff) == 10) {
              uVar37 = FUN_013d4df8(local_da8,local_da4);
            }
            else {
              puVar10 = (undefined4 *)(local_d9c & 0xff);
              local_38 = (uint *******)
                         CONCAT22(CONCAT11(local_38._3_1_,local_dac._3_1_),local_dac._1_2_);
              ppppppuVar28 = local_da0;
              uVar37 = CONCAT44(local_da4,local_da8);
            }
          }
          puVar23 = (undefined1 *)param_5[3];
          FUN_013527b4(puVar23);
          pppppppuVar24 = local_50;
          *puVar23 = uVar1;
          *(int *)(puVar23 + 4) = (int)uVar37;
          puVar23[3] = local_38._2_1_;
          *(int *)(puVar23 + 8) = (int)((ulonglong)uVar37 >> 0x20);
          *(uint *******)(puVar23 + 0xc) = ppppppuVar28;
          *(undefined4 **)(puVar23 + 0x10) = puVar10;
          *(undefined2 *)(puVar23 + 1) = (undefined2)local_38;
          local_708 = local_dd8[0];
          uStack_704 = local_dd8[1];
          uStack_700 = local_dd8[2];
          uStack_6fc = local_dd8[3];
          uStack_6f8 = uStack_dc8;
          local_6f4 = local_dc4;
          uStack_6f0 = uStack_dc0;
          uStack_6ec = uStack_dbc;
          uStack_6e8 = uStack_db8;
          uStack_6e4 = uStack_db4;
          local_6e0 = local_db0;
          uStack_6dc = local_dac;
          pppppppuStack_6d8 = local_da8;
          pppppppuStack_6d4 = local_da4;
          ppppppuStack_6d0 = local_da0;
          uStack_6cc = local_d9c;
          local_748 = local_a0;
          local_744 = local_9c;
          local_740 = local_98;
          local_73c = local_94;
          local_738 = (undefined4 *)local_90;
          local_734 = (undefined *)local_8c;
          local_730 = (undefined4 *)local_88;
          local_72c = (code *)local_84;
          uStack_728 = local_80;
          uStack_724 = local_7c;
          local_720 = local_78;
          uStack_71c = local_74;
          uStack_718 = local_70;
          uStack_714 = local_6c;
          ppppppuStack_710 = local_68;
          puStack_70c = puStack_64;
          FUN_01bed4e2(param_1,&local_748,0x80);
          param_1[0x22] = local_e20;
          *(bool *)((int)param_1 + 0x92) = local_e30;
          *(byte *)((int)param_1 + 0x91) = local_e28 & 1;
          param_1[0x23] = local_e24;
          *(byte *)(param_1 + 0x24) = local_e2c;
          *(byte *)(param_1 + 0x21) = bVar33;
          param_1[0x20] = (uint ******)pppppppuVar24;
          (*(code *)local_100[4])(&local_f4,local_fc,local_f8);
          if (&DAT_00000064 < pppppppuVar32) {
            FUN_0134c054(pppppppuVar32,local_d88,4,0x10);
            return;
          }
          return;
        }
        *param_1 = (uint ******)0x4;
        param_1[1] = (uint ******)0x0;
        bVar33 = 2;
        goto LAB_010a00a8;
      }
    }
    *param_1 = (uint ******)0x4;
    param_1[1] = (uint ******)0x0;
    bVar33 = 0xc;
LAB_010a00a8:
    *(byte *)(param_1 + 2) = bVar33;
LAB_010a015c:
    FUN_0142e6dc(&local_a0);
    if (local_e0 != 3 || local_dc != 0) {
      FUN_0142e18c(&local_e0);
    }
    goto LAB_010a0188;
  }
  if (*(byte *)pppppppuVar30 - 0x20 < 0x5f) goto code_r0x0109f348;
LAB_0109f358:
  bVar33 = 4;
LAB_0109f35c:
  bVar7 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(unaff_r7) {
  case (uint *******)0x3:
    bVar7 = 0xb;
    break;
  case (uint *******)0x4:
    bVar7 = bVar33;
    break;
  case (uint *******)0x5:
    bVar7 = 10;
    break;
  case (uint *******)0x6:
    bVar7 = 5;
  }
switchD_0109f36c_caseD_0:
  ppppppuVar14 = (uint ******)0x4;
  *(byte *)(param_1 + 2) = bVar7;
  pppppppuVar27 = unaff_r7;
  goto LAB_0109f3b4;
code_r0x0109f348:
  pbVar15 = pbVar15 + -1;
  pppppppuVar30 = (uint *******)((int)pppppppuVar30 + 1);
  if (pbVar15 == (byte *)0x0) goto LAB_0109f264;
  goto LAB_0109f334;
}

