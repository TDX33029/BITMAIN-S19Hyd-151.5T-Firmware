// FUN_00eaad94 @ 00eaad94 size=2676 calls_out=34 calls_in=0
// strings: boser::monitor::serveropen/boser/boser/src/monitor/server.rsevent open/boser/boser/src/monitor/server.rs:121event open/boser/boser/src/monitor/server.rs:98event open/boser/boser/src/monitor/server.rs:130event open/boser/boser/src/monitor/failsafe.rs:68 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::monitor::serveropen/boser/boser/src/monitor/server.rsevent open/boser/boser/src/monitor/server.rs:121event open/boser/boser/src/monitor/server.rs:98event open/boser/boser/src/monitor/server.rs:130event open/boser/boser/src/monitor/failsafe.rs:68 | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::monitor::serveropen/boser/boser/src/monitor/server.rsevent open/boser/boser/src/monitor/server.rs:121event open/boser/boser/src/monitor/server.rs:98event open/boser/boser/src/monitor/server.rs:130event open/boser/boser/src/monitor/failsafe.rs:68

void FUN_00eaad94(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined4 ****ppppuVar2;
  undefined4 ****ppppuVar3;
  char cVar4;
  undefined4 ****ppppuVar5;
  int iVar6;
  int iVar7;
  undefined4 ****ppppuVar8;
  undefined4 uVar9;
  undefined4 ****ppppuVar10;
  undefined4 ****extraout_r2;
  undefined4 ****extraout_r2_00;
  undefined4 ****extraout_r2_01;
  undefined4 ****extraout_r2_02;
  undefined4 ****extraout_r2_03;
  undefined4 ****extraout_r2_04;
  undefined4 ****extraout_r2_05;
  undefined4 ****extraout_r2_06;
  undefined4 ****extraout_r2_07;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 ****ppppuVar13;
  bool bVar14;
  undefined4 ****local_b8;
  undefined4 ****local_b4;
  undefined4 ****local_b0;
  undefined4 ****local_a8;
  undefined4 ****local_a4;
  undefined4 ****local_a0;
  undefined4 ****local_9c;
  undefined1 *local_98;
  undefined4 *local_94;
  undefined *local_90;
  undefined4 ****local_8c;
  undefined4 ****local_88;
  undefined4 ****local_84;
  undefined4 ****local_80;
  undefined4 ****local_7c;
  undefined **local_78;
  undefined4 *local_74;
  undefined4 ****local_70;
  undefined4 ****local_6c;
  undefined4 ****local_68;
  undefined4 ****local_64;
  undefined4 ****local_60;
  undefined4 ****local_5c;
  undefined4 ****local_58;
  undefined4 ****local_54;
  undefined4 local_50;
  undefined4 ****local_4c;
  undefined4 ****local_48;
  char local_44;
  undefined4 local_40;
  undefined4 ****local_3c;
  undefined4 ****local_38;
  undefined4 ****local_34;
  undefined4 ****local_30;
  undefined4 ****local_2c;
  undefined4 ****local_28;
  
  FUN_019a5900(&local_68,param_3,param_4);
  ppppuVar5 = local_60;
  ppppuVar3 = local_64;
  ppppuVar2 = local_68;
  if (local_68 != (undefined4 ****)0x80000000) {
    local_44 = -0x80;
    bVar14 = local_60 != (undefined4 ****)0x0;
    local_4c = local_64;
    local_50 = 0;
    local_54 = (undefined4 ****)0x0;
    local_5c = local_64;
    local_60 = (undefined4 ****)0x0;
    local_64 = (undefined4 ****)&DAT_00000001;
    local_68 = (undefined4 ****)0x0;
    local_48 = ppppuVar5;
    local_58 = ppppuVar5;
    ppppuVar8 = &local_68;
    if (bVar14) {
      do {
        uVar12 = (uint)*(byte *)((int)ppppuVar3 + (int)local_54);
        if ((0x17 < uVar12 - 9) || ((1 << (uVar12 - 9 & 0xff) & 0x800013U) == 0)) {
          if (uVar12 != 0x5b) {
            if (uVar12 != 0x7b) {
              ppppuVar5 = (undefined4 ****)FUN_019659c8(&local_68,&local_9c,&DAT_01c106a8);
              goto LAB_00eab788;
            }
            local_54 = (undefined4 ****)((int)local_54 + 1);
            local_44 = '\x7f';
            local_78 = (undefined **)CONCAT31(local_78._1_3_,1);
            local_b0 = (undefined4 ****)&DAT_80000000;
            local_7c = &local_68;
            goto LAB_00eab32c;
          }
          local_54 = (undefined4 ****)((int)local_54 + 1);
          local_44 = '\x7f';
          local_2c = (undefined4 ****)CONCAT31(local_2c._1_3_,1);
          ppppuVar8 = (undefined4 ****)&local_40;
          local_30 = &local_68;
          FUN_01643378(ppppuVar8,&local_30);
          if (local_40 == (undefined4 ****)&DAT_80000001) {
            local_38 = extraout_r2_04;
LAB_00eab570:
            local_40 = (undefined4 ****)&DAT_80000000;
          }
          else if (local_40 == (undefined4 ****)&DAT_80000000) {
            local_3c = (undefined4 ****)FUN_014b5c7c(0,&DAT_01c103a4,&DAT_01d064b8);
            local_38 = extraout_r2_07;
            goto LAB_00eab570;
          }
          local_44 = local_44 + '\x01';
          local_30 = local_40;
          local_2c = local_3c;
          local_28 = local_38;
          ppppuVar10 = (undefined4 ****)FUN_01964fb0(&local_68);
          ppppuVar5 = local_2c;
          local_40 = local_30;
          local_3c = local_2c;
          local_38 = local_28;
          local_34 = ppppuVar10;
          if (local_30 != (undefined4 ****)&DAT_80000000) {
            if (ppppuVar10 == (undefined4 ****)0x0) goto LAB_00eab6fc;
            FUN_019bb7e0(local_30,local_2c);
            ppppuVar5 = ppppuVar10;
            goto LAB_00eab6f8;
          }
          ppppuVar13 = (undefined4 ****)&DAT_80000000;
          if (ppppuVar10 == (undefined4 ****)0x0) goto LAB_00eab6f8;
          FUN_00abbbdc(&local_34);
          goto LAB_00eab700;
        }
        local_54 = (undefined4 ****)((int)local_54 + 1);
      } while (ppppuVar5 != local_54);
    }
    local_40 = (undefined4 ****)&DAT_00000005;
    ppppuVar5 = (undefined4 ****)FUN_01964674(&local_68,&local_40);
    goto LAB_00eaae68;
  }
  local_68 = (undefined4 ****)&DAT_80000000;
  bVar14 = true;
  goto LAB_00eaaed0;
  while( true ) {
    ppppuVar13 = local_7c;
    ppppuVar8 = (undefined4 ****)FUN_01965c98(local_7c);
    ppppuVar5 = extraout_r2_01;
    if (ppppuVar8 != (undefined4 ****)0x0) break;
    ppppuVar8 = (undefined4 ****)FUN_01965eac(ppppuVar13);
    ppppuVar5 = extraout_r2_02;
    if (ppppuVar8 != (undefined4 ****)0x0) break;
LAB_00eab32c:
    FUN_01965d20(&local_40,&local_7c);
    if ((char)local_40 == '\x01') {
      ppppuVar5 = extraout_r2;
      ppppuVar8 = local_3c;
      break;
    }
    if (local_40._1_1_ != '\x01') {
      if (local_b0 != (undefined4 ****)&DAT_80000000) goto LAB_00eab678;
      local_2c = (undefined4 ****)0xd;
      local_3c = (undefined4 ****)&LAB_018a13b8;
      local_40 = &local_30;
      local_30 = (undefined4 ****)0x3e844c;
      ppppuVar8 = (undefined4 ****)FUN_019676ac(&DAT_0057cd64,&local_40);
      ppppuVar5 = extraout_r2_06;
      goto LAB_00eab674;
    }
    local_7c[2] = (undefined4 ***)0x0;
    local_7c[5] = (undefined4 ***)((int)local_7c[5] + 1);
    FUN_019686b4(&local_40,local_7c + 3);
    ppppuVar5 = extraout_r2_00;
    ppppuVar8 = local_3c;
    if (local_40 == (undefined4 ****)0x2) break;
    if ((local_38 == (undefined4 ****)&DAT_0000000d) &&
       (iVar6 = thunk_FUN_01bed842(local_3c,"bosminer_tomlstruct ConfigVersion with 1 element",0xd),
       iVar6 == 0)) {
      if (local_b0 != (undefined4 ****)&DAT_80000000) {
        local_2c = (undefined4 ****)&DAT_0000000d;
        local_3c = (undefined4 ****)&DAT_0132b6a0;
        local_40 = &local_30;
        local_30 = (undefined4 ****)0x3e844c;
        ppppuVar8 = (undefined4 ****)FUN_019676ac(&DAT_005ab34f,&local_40);
        goto LAB_00eab618;
      }
      FUN_0164322c(&local_40,local_7c);
      ppppuVar5 = extraout_r2_03;
      ppppuVar8 = local_3c;
      if (local_40 == (undefined4 ****)&DAT_80000000) goto LAB_00eab674;
      local_b0 = local_40;
      local_b4 = local_3c;
      local_b8 = local_38;
      goto LAB_00eab32c;
    }
  }
  if (local_b0 != (undefined4 ****)&DAT_80000000) {
LAB_00eab618:
    FUN_019bb7e0(local_b0,local_b4);
    ppppuVar5 = extraout_r2_05;
  }
LAB_00eab674:
  local_b0 = (undefined4 ****)&DAT_80000000;
  local_b8 = ppppuVar5;
  local_b4 = ppppuVar8;
LAB_00eab678:
  local_44 = local_44 + '\x01';
  local_30 = local_b0;
  local_2c = local_b4;
  local_28 = local_b8;
  ppppuVar8 = (undefined4 ****)FUN_019650c4(&local_68);
  ppppuVar5 = local_2c;
  local_40 = local_30;
  local_3c = local_2c;
  local_38 = local_28;
  local_34 = ppppuVar8;
  if (local_30 == (undefined4 ****)&DAT_80000000) {
    if (ppppuVar8 == (undefined4 ****)0x0) goto LAB_00eab6f8;
    FUN_00abbbdc(&local_34);
    ppppuVar13 = (undefined4 ****)&DAT_80000000;
  }
  else if (ppppuVar8 == (undefined4 ****)0x0) {
LAB_00eab6fc:
    ppppuVar13 = local_30;
    ppppuVar5 = local_2c;
    ppppuVar8 = local_28;
    local_40 = local_30;
    local_3c = local_2c;
    local_38 = local_28;
  }
  else {
    FUN_019bb7e0(local_30,local_2c);
    ppppuVar5 = ppppuVar8;
LAB_00eab6f8:
    ppppuVar13 = (undefined4 ****)&DAT_80000000;
  }
LAB_00eab700:
  if (ppppuVar13 == (undefined4 ****)&DAT_80000000) {
LAB_00eab788:
    ppppuVar5 = (undefined4 ****)FUN_01966f00(ppppuVar5,&local_68);
LAB_00eaae68:
    ppppuVar13 = (undefined4 ****)&DAT_80000000;
  }
  else {
    ppppuVar10 = (undefined4 ****)FUN_01964600(&local_68);
    if (ppppuVar10 != (undefined4 ****)0x0) {
      FUN_019bb7e0(ppppuVar13,ppppuVar5);
      ppppuVar13 = (undefined4 ****)&DAT_80000000;
      ppppuVar5 = ppppuVar10;
    }
  }
  FUN_019bb7e0(local_68,local_64);
  if (ppppuVar13 == (undefined4 ****)&DAT_80000000) {
    FUN_01969520((uint)&local_68 | 4,ppppuVar5);
    local_68 = (undefined4 ****)&DAT_80000000;
    FUN_019bb7e0(ppppuVar2,ppppuVar3);
    bVar14 = true;
  }
  else {
    local_68 = ppppuVar13;
    local_64 = ppppuVar5;
    local_60 = ppppuVar8;
    FUN_019bb7e0(ppppuVar2,ppppuVar3);
    bVar14 = false;
  }
LAB_00eaaed0:
  local_a4 = (undefined4 ****)thunk_FUN_01be5118(3);
  if (local_a4 == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1);
  }
  *(undefined1 *)((int)local_a4 + 2) = 0x30;
  *(undefined2 *)local_a4 = 0x2e32;
  if (bVar14) {
    local_a0 = (undefined4 ****)&DAT_00000003;
    local_a8 = (undefined4 ****)&DAT_00000003;
    FUN_00eab9a0(&local_68);
  }
  else {
    local_a8 = local_68;
    local_a4 = local_64;
    local_a0 = local_60;
    FUN_019bb7e0(3);
  }
  if ((DAT_01d50f88 < 2) &&
     (((DAT_01d4c4e8 - 1 < 2 ||
       ((DAT_01d4c4e8 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c4e0), cVar4 != '\0')))) &&
      (iVar6 = FUN_01aaa278((int)DAT_01d4c4e0), iVar6 != 0)))) {
    if (*(undefined4 *****)((int)DAT_01d4c4e0 + 0x20) == (undefined4 ****)0x0) {
LAB_00eab7f4:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1837c);
    }
    local_78 = &local_90;
    local_60 = *(undefined4 *****)((int)DAT_01d4c4e0 + 0x24);
    local_5c = *(undefined4 *****)((int)DAT_01d4c4e0 + 0x28);
    local_94 = (undefined4 *)((int)DAT_01d4c4e0 + 0x1c);
    local_68 = (undefined4 ****)*local_94;
    local_9c = &local_7c;
    local_58 = (undefined4 ****)0x0;
    local_98 = (undefined1 *)0x1;
    local_8c = &local_70;
    local_70 = &local_a8;
    local_74 = (undefined4 *)&DAT_01d2ea4c;
    local_90 = &DAT_005b74fb;
    local_6c = (undefined4 ****)&LAB_00632348;
    local_7c = &local_68;
    local_64 = *(undefined4 *****)((int)DAT_01d4c4e0 + 0x20);
    FUN_01aaaecc((int)DAT_01d4c4e0,&local_9c);
    iVar6 = (int)DAT_01d4c4e0;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_2c = *(undefined4 *****)((int)DAT_01d4c4e0 + 0x14);
      local_28 = *(undefined4 *****)((int)DAT_01d4c4e0 + 0x18);
      local_30 = (undefined4 ****)&SUB_00000004;
      DataMemoryBarrier(0xb);
      puVar11 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar11 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar7 = (*(code *)puVar11[3])(pcVar1,&local_30);
      if (iVar7 != 0) {
        local_40 = local_30;
        local_3c = local_2c;
        local_38 = local_28;
        FUN_01aaa328(iVar6,pcVar1,puVar11[4],&local_40,&local_9c);
      }
    }
  }
  else {
    iVar6 = (int)DAT_01d4c4e0;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_84 = *(undefined4 *****)((int)DAT_01d4c4e0 + 0x14);
      local_80 = *(undefined4 *****)((int)DAT_01d4c4e0 + 0x18);
      local_88 = (undefined4 ****)&SUB_00000004;
      DataMemoryBarrier(0xb);
      puVar11 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar11 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar7 = (*(code *)puVar11[3])(pcVar1,&local_88);
      if (iVar7 != 0) {
        local_74 = (undefined4 *)((int)DAT_01d4c4e0 + 0x1c);
        if (*(undefined4 *****)((int)DAT_01d4c4e0 + 0x20) == (undefined4 ****)0x0)
        goto LAB_00eab7f4;
        local_60 = *(undefined4 *****)((int)DAT_01d4c4e0 + 0x24);
        local_5c = *(undefined4 *****)((int)DAT_01d4c4e0 + 0x28);
        local_2c = &local_70;
        local_7c = &local_30;
        local_78 = (undefined **)&DAT_00000001;
        local_6c = &local_9c;
        local_58 = (undefined4 ****)0x0;
        local_28 = (undefined4 ****)&DAT_01d2ea4c;
        local_70 = (undefined4 ****)&DAT_005b74fb;
        local_98 = &LAB_00632348;
        local_9c = &local_a8;
        local_40 = local_88;
        local_3c = local_84;
        local_38 = local_80;
        local_68 = (undefined4 ****)*local_74;
        local_64 = *(undefined4 *****)((int)DAT_01d4c4e0 + 0x20);
        local_30 = &local_68;
        FUN_01aaa328(iVar6,pcVar1,puVar11[4],&local_40,&local_7c);
      }
    }
  }
  FUN_00ab75a0(&local_68,local_a4,local_a0);
  if (((char)local_68 == '\x04') || (((uint)local_68 & 0xff) == 4)) {
    if (local_64 < &SUB_00000004) {
      FUN_00ab75a0(&local_68,local_a4,local_a0);
      if (((char)local_68 != '\x04') && (((uint)local_68 & 0xff) != 4)) goto LAB_00eab45c;
      if (local_64 == (undefined4 ****)&DAT_00000003) {
        *(undefined4 *)(param_2[0x18] + 8) = 3;
        FUN_019e0044(param_2[0x15] + 8);
      }
      else {
        FUN_00ab75a0(&local_68,local_a4,local_a0);
        if (((char)local_68 != '\x04') && (((uint)local_68 & 0xff) != 4)) goto LAB_00eab45c;
        if (local_64 != (undefined4 ****)0x2) {
          local_3c = (undefined4 ****)&LAB_00632348;
          local_40 = &local_a8;
          FUN_00664898(&local_68,&DAT_0057fe6a,&local_40);
          local_40 = local_68;
          local_3c = local_64;
          local_38 = local_60;
          uVar9 = FUN_006679ac(&local_40);
          FUN_010d7a3c(&local_68,uVar9);
          *param_1 = local_68;
          param_1[1] = local_64;
          FUN_019bb7e0(local_a8,local_a4);
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *param_2;
            bVar14 = (bool)hasExclusiveAccess(param_2);
          } while (!bVar14);
          *param_2 = iVar6 + -1;
          goto LAB_00eab488;
        }
        *(undefined4 *)(param_2[0x18] + 8) = 2;
        FUN_019e0044(param_2[0x15] + 8);
      }
    }
    *(undefined1 *)param_1 = 4;
  }
  else {
LAB_00eab45c:
    *param_1 = local_68;
    param_1[1] = local_64;
  }
  FUN_019bb7e0(local_a8,local_a4);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *param_2;
    bVar14 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar14);
  *param_2 = iVar6 + -1;
LAB_00eab488:
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01177340(param_2);
  }
  return;
}

