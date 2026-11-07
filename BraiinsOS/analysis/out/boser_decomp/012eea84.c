// FUN_012eea84 @ 012eea84 size=11840 calls_out=65 calls_in=0
// strings: Starting new interface watcher | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_012eea84(undefined4 *param_1,int *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  bool bVar3;
  byte *****pppppbVar4;
  char cVar5;
  byte bVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte ********ppppppppbVar11;
  byte ********ppppppppbVar12;
  byte ********ppppppppbVar13;
  bool bVar14;
  byte *******pppppppbVar15;
  byte *******pppppppbVar16;
  bool bVar17;
  undefined *puVar18;
  uint uVar19;
  byte ********ppppppppbVar20;
  byte ********ppppppppbVar21;
  char *pcVar22;
  byte ********unaff_r5;
  undefined4 uVar23;
  byte *******pppppppbVar24;
  byte *pbVar25;
  undefined4 *puVar26;
  undefined1 uVar27;
  byte *pbVar28;
  byte ********unaff_r8;
  byte ********unaff_r9;
  byte ********ppppppppbVar29;
  byte ********ppppppppbVar30;
  byte ********unaff_r11;
  ulonglong uVar31;
  byte ********local_1d0;
  byte ********local_1cc;
  undefined4 *local_1c8;
  byte ********local_1c4;
  undefined4 *local_1bc;
  undefined4 local_1b8;
  byte ********local_1b4;
  byte ********local_1ac;
  undefined4 *local_19c;
  byte ********local_188;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  byte ********local_160;
  byte ********local_15c;
  byte ********local_158;
  byte ********local_150;
  byte ********local_14c;
  byte ********local_148;
  byte ********local_140;
  byte ********local_13c;
  byte ********local_138;
  byte ********local_130;
  byte ********local_12c;
  byte ********local_128;
  byte ********local_120;
  byte ********local_11c;
  undefined4 local_118;
  byte ********ppppppppbStack_114;
  byte ********local_110;
  undefined4 local_10c;
  byte ********local_108;
  byte ********local_104;
  byte ********local_100;
  byte ********local_fc;
  byte ********local_f8;
  byte ********local_f4;
  byte ********ppppppppbStack_f0;
  byte ********local_ec;
  byte *******local_e8;
  byte *******local_e4;
  undefined2 local_e0;
  undefined2 local_de;
  byte ********local_d8;
  byte ********local_d4;
  byte ********local_d0;
  byte ********local_cc;
  byte ********local_c8;
  byte ********ppppppppbStack_c4;
  byte ********local_c0;
  byte ********local_b8;
  byte ********local_b4;
  byte ********local_b0;
  byte ********local_ac;
  byte ********ppppppppbStack_a8;
  byte ********ppppppppbStack_a4;
  byte *******local_a0;
  byte ********local_9c;
  byte ********local_98;
  undefined4 *local_94;
  byte *******local_90;
  byte ********local_8c;
  byte ********local_88;
  byte ********local_84;
  byte ********local_80;
  byte ********local_78;
  byte ********local_74;
  byte ********local_70;
  byte ********local_6c;
  undefined4 local_68;
  byte ********local_64;
  byte ********local_60;
  byte ********local_5c;
  byte ********ppppppppbStack_58;
  byte ********ppppppppbStack_54;
  byte ********ppppppppbStack_50;
  byte ********local_48;
  byte ********local_44;
  byte ********local_40;
  byte ********local_38;
  byte ********local_34;
  byte ********local_30;
  
  puVar7 = (undefined4 *)((uint)&local_110 | 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x21)) {
  case 0:
    unaff_r11 = (byte ********)*param_1;
    local_1b8 = param_1[1];
    uVar23 = param_1[2];
    FUN_01a3c2e0(uVar23);
    param_1[3] = unaff_r11;
    param_1[4] = local_1b8;
    param_1[5] = uVar23;
    *(undefined1 *)(param_1 + 0x20) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01ce4164);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01ce4164);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x20)) {
    case 0:
      unaff_r11 = (byte ********)param_1[3];
      uVar23 = param_1[5];
      local_1b8 = param_1[4];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01ce4194);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01ce4194);
    case 3:
      local_188 = (byte ********)param_1[0x1e];
      local_19c = (undefined4 *)param_1[0x1f];
      local_1ac = (byte ********)0x0;
      goto LAB_012efedc;
    }
  }
  param_1[6] = uVar23;
  *(undefined1 *)((int)param_1 + 0x82) = 1;
  if ((DAT_01d50f88 < 2) &&
     (((DAT_01d4cf48 - 1 < 2 ||
       ((DAT_01d4cf48 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4cf40), cVar5 != '\0')))) &&
      (iVar8 = FUN_01aaa278(DAT_01d4cf40), iVar8 != 0)))) {
    local_10c = *(byte *********)(DAT_01d4cf40 + 0x20);
    if (local_10c == (byte ********)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce4184);
    }
    local_cc = (byte ********)&local_38;
    local_108 = *(byte *********)(DAT_01d4cf40 + 0x24);
    local_104 = *(byte *********)(DAT_01d4cf40 + 0x28);
    local_118 = (byte ********)(DAT_01d4cf40 + 0x1c);
    local_110 = (byte ********)*local_118;
    local_d0 = (byte ********)&local_110;
    local_120 = (byte ********)&local_d0;
    local_100 = (byte ********)0x0;
    local_11c = (byte ********)&DAT_00000001;
    local_c8 = (byte ********)&DAT_01d2ea4c;
    local_34 = (byte ********)&DAT_0000003d;
    local_38 = (byte ********)0x42139b;
    FUN_01aaaecc(DAT_01d4cf40,&local_120);
    iVar8 = DAT_01d4cf40;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_b4 = *(byte *********)(DAT_01d4cf40 + 0x14);
      local_b0 = *(byte *********)(DAT_01d4cf40 + 0x18);
      local_b8 = (byte ********)&SUB_00000004;
      DataMemoryBarrier(0xb);
      puVar26 = DAT_01d4edc8;
      pcVar22 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar26 = &DAT_01cfc5e0;
        pcVar22 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar9 = (*(code *)puVar26[3])(pcVar22,&local_b8);
      if (iVar9 != 0) {
        local_70 = local_b8;
        local_6c = local_b4;
        local_68 = local_b0;
        FUN_01aaa328(iVar8,pcVar22,puVar26[4],&local_70,&local_120);
      }
    }
  }
  else {
    iVar8 = DAT_01d4cf40;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_15c = *(byte *********)(DAT_01d4cf40 + 0x14);
      local_158 = *(byte *********)(DAT_01d4cf40 + 0x18);
      local_160 = (byte ********)&SUB_00000004;
      DataMemoryBarrier(0xb);
      puVar26 = DAT_01d4edc8;
      pcVar22 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar26 = &DAT_01cfc5e0;
        pcVar22 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar9 = (*(code *)puVar26[3])(pcVar22,&local_160);
      if (iVar9 != 0) {
        local_c8 = (byte ********)(DAT_01d4cf40 + 0x1c);
        local_110 = (byte ********)*local_c8;
        local_10c = *(byte *********)(DAT_01d4cf40 + 0x20);
        if (local_10c == (byte ********)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce4184);
        }
        local_b4 = (byte ********)&local_120;
        local_108 = *(byte *********)(DAT_01d4cf40 + 0x24);
        local_104 = *(byte *********)(DAT_01d4cf40 + 0x28);
        local_b8 = (byte ********)&local_110;
        local_d0 = (byte ********)&local_b8;
        local_cc = (byte ********)&DAT_00000001;
        local_b0 = (byte ********)&DAT_01d2ea4c;
        local_11c = (byte ********)&DAT_0000003d;
        local_100 = (byte ********)0x0;
        local_120 = (byte ********)0x42139b;
        local_70 = local_160;
        local_6c = local_15c;
        local_68 = local_158;
        FUN_01aaa328(iVar8,pcVar22,puVar26[4],&local_70,&local_d0);
      }
    }
  }
  param_1[7] = unaff_r11;
  ppppppppbVar20 = (byte ********)0x0;
  param_1[8] = local_1b8;
  param_1[9] = 0;
  *(undefined1 *)((int)param_1 + 0x82) = 0;
  param_1[10] = 4;
  param_1[0xb] = 0;
  FUN_01656528(&local_110);
  ppppppppbStack_114 = local_10c + (int)local_108 * 0xd;
  local_120 = local_10c;
  local_11c = local_10c;
  local_118 = local_110;
  if (local_108 != (byte ********)0x0) {
    iVar8 = (int)local_108 * 0x34;
    ppppppppbVar20 = local_10c;
    do {
      ppppppppbVar11 = ppppppppbVar20 + 0xd;
      ppppppppbVar29 = (byte ********)*ppppppppbVar20;
      local_11c = ppppppppbVar11;
      if (ppppppppbVar29 == (byte ********)&DAT_80000000) break;
      local_10c = (byte ********)ppppppppbVar20[1];
      local_108 = (byte ********)ppppppppbVar20[2];
      local_104 = (byte ********)ppppppppbVar20[3];
      local_100 = (byte ********)ppppppppbVar20[4];
      local_fc = (byte ********)ppppppppbVar20[5];
      local_f8 = (byte ********)ppppppppbVar20[6];
      local_f4 = (byte ********)ppppppppbVar20[7];
      ppppppppbStack_f0 = (byte ********)ppppppppbVar20[8];
      ppppppppbVar21 = (byte ********)ppppppppbVar20[9];
      pppppppbVar24 = ppppppppbVar20[10];
      local_e4 = ppppppppbVar20[0xb];
      local_e0 = SUB42(ppppppppbVar20[0xc],0);
      local_de = (undefined2)((uint)ppppppppbVar20[0xc] >> 0x10);
      local_110 = ppppppppbVar29;
      local_ec = ppppppppbVar21;
      local_e8 = pppppppbVar24;
      if (((uint)pppppppbVar24 & 8) == 0) {
        local_d8 = (byte ********)ppppppppbVar20[1];
        local_d4 = (byte ********)ppppppppbVar20[2];
        FUN_019bb7e0(local_104,local_100);
        FUN_0134aee0(local_f8,local_f4,1,0x12);
        local_c8 = local_d8;
        ppppppppbStack_c4 = local_d4;
        local_d0 = (byte ********)(~(uint)pppppppbVar24 & 1);
        local_cc = ppppppppbVar29;
        local_c0 = ppppppppbVar21;
        FUN_012e3608(&local_b8,param_1 + 7,&local_d0);
        if (local_b8 != (byte ********)0x2) {
          local_6c = local_b4;
          local_68 = local_b0;
          local_64 = local_ac;
          local_60 = ppppppppbStack_a8;
          local_5c = ppppppppbStack_a4;
          local_70 = local_b8;
          ppppppppbVar20 = (byte ********)FUN_012ee680(&local_70);
          goto LAB_012ef318;
        }
      }
      else {
        local_b4 = (byte ********)&LAB_0193a90c;
        local_b8 = (byte ********)&local_38;
        local_38 = (byte ********)&local_110;
        FUN_00664898(&local_70,&DAT_00588986,&local_b8);
        local_b8 = local_70;
        local_b4 = local_6c;
        local_b0 = local_68;
        pppppppbVar24 = (byte *******)FUN_006679ac(&local_b8);
        FUN_007390c4(&local_110);
        local_a0 = pppppppbVar24;
        if ((DAT_01d50f88 < 4) &&
           ((DAT_01d4cee8 - 1 < 2 ||
            ((DAT_01d4cee8 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4cee0), cVar5 != '\0')))))) {
          iVar9 = FUN_01aaa278(DAT_01d4cee0);
          if (iVar9 == 0) goto LAB_012ef188;
          if (*(byte *********)(DAT_01d4cee0 + 0x20) == (byte ********)0x0) goto LAB_012ef7d8;
          local_44 = &local_90;
          local_48 = (byte ********)&local_70;
          local_9c = (byte ********)&local_48;
          local_94 = (undefined4 *)(DAT_01d4cee0 + 0x1c);
          local_70 = (byte ********)*local_94;
          local_68 = *(byte *********)(DAT_01d4cee0 + 0x24);
          local_64 = *(byte *********)(DAT_01d4cee0 + 0x28);
          local_60 = (byte ********)0x0;
          local_98 = (byte ********)&DAT_00000001;
          local_40 = (byte ********)&DAT_01d2ea4c;
          local_8c = (byte ********)&local_78;
          local_90 = (byte *******)&DAT_00590e5f;
          local_74 = (byte ********)FUN_00667a08;
          local_78 = &local_a0;
          local_6c = *(byte *********)(DAT_01d4cee0 + 0x20);
          FUN_01aaaecc(DAT_01d4cee0,&local_9c);
          iVar9 = DAT_01d4cee0;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_34 = *(byte *********)(DAT_01d4cee0 + 0x14);
            local_30 = *(byte *********)(DAT_01d4cee0 + 0x18);
            local_38 = (byte ********)0x2;
            DataMemoryBarrier(0xb);
            pcVar22 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar22 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar26 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar26 = &DAT_01cfc5e0;
            }
            iVar10 = (*(code *)puVar26[3])(pcVar22,&local_38);
            if (iVar10 != 0) {
              local_b8 = local_38;
              local_b4 = local_34;
              local_b0 = local_30;
              FUN_01aaa328(iVar9,pcVar22,puVar26[4],&local_b8,&local_9c);
            }
          }
        }
        else {
LAB_012ef188:
          iVar9 = DAT_01d4cee0;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_84 = *(byte *********)(DAT_01d4cee0 + 0x14);
            local_80 = *(byte *********)(DAT_01d4cee0 + 0x18);
            local_88 = (byte ********)0x2;
            DataMemoryBarrier(0xb);
            pcVar22 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar22 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar26 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar26 = &DAT_01cfc5e0;
            }
            iVar10 = (*(code *)puVar26[3])(pcVar22,&local_88);
            if (iVar10 != 0) {
              if (*(byte *********)(DAT_01d4cee0 + 0x20) == (byte ********)0x0) {
LAB_012ef7d8:
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce38d0);
              }
              local_34 = (byte ********)&local_78;
              local_38 = (byte ********)&local_70;
              local_48 = (byte ********)&local_38;
              local_68 = *(byte *********)(DAT_01d4cee0 + 0x24);
              local_64 = *(byte *********)(DAT_01d4cee0 + 0x28);
              local_60 = (byte ********)0x0;
              local_44 = (byte ********)&DAT_00000001;
              local_30 = (byte ********)&DAT_01d2ea4c;
              local_74 = (byte ********)&local_9c;
              local_78 = (byte ********)&DAT_00590e5f;
              local_98 = (byte ********)FUN_00667a08;
              local_9c = &local_a0;
              local_b8 = local_88;
              local_b4 = local_84;
              local_b0 = local_80;
              local_70 = *(byte *********)(DAT_01d4cee0 + 0x1c);
              local_6c = *(byte *********)(DAT_01d4cee0 + 0x20);
              local_40 = (byte ********)(DAT_01d4cee0 + 0x1c);
              FUN_01aaa328(iVar9,pcVar22,puVar26[4],&local_b8,&local_48);
            }
          }
        }
        (*(code *)**local_a0)();
      }
      iVar8 = iVar8 + -0x34;
      ppppppppbVar20 = ppppppppbVar11;
    } while (iVar8 != 0);
    ppppppppbVar20 = (byte ********)0x0;
  }
LAB_012ef318:
  unaff_r9 = (byte ********)&local_120;
  FUN_012e8d04(unaff_r9);
  if (ppppppppbVar20 != (byte ********)0x0) {
    local_110 = (byte ********)&DAT_00000003;
    local_6c = (byte ********)&DAT_00000018;
    local_70 = (byte ********)0x4213b9;
    local_68 = ppppppppbVar20;
    ppppppppbVar29 = (byte ********)FUN_012ed2ec(&local_70,&local_110);
    goto LAB_012ef9f8;
  }
  ppppppppbVar20 = (byte ********)0x0;
  iVar8 = FUN_01be9c4e(0x10,0x80002,0);
  if (iVar8 < 0) {
    puVar7 = (undefined4 *)FUN_01be3244();
    ppppppppbVar29 = (byte ********)*puVar7;
  }
  else {
    local_110 = (byte ********)&DAT_00000001;
    iVar9 = FUN_01be67dc(iVar8,0x5421,&local_110);
    if (iVar9 < 0) {
      puVar7 = (undefined4 *)FUN_01be3244();
      ppppppppbVar29 = (byte ********)*puVar7;
      FUN_01bf01d6(iVar8);
      ppppppppbVar20 = (byte ********)0x0;
    }
    else {
      uVar31 = FUN_019ef7f4(&DAT_01d064a0);
      ppppppppbVar11 = (byte ********)(uVar31 >> 0x20);
      iVar9 = (int)uVar31;
      iVar10 = 0x180;
      if ((uVar31 & 1) != 0) {
        iVar10 = 0xb8;
      }
      pbVar25 = (byte *)((int)ppppppppbVar11 + iVar10);
      if (*(int *)pbVar25 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                     ,0x68,&DAT_01d064a0);
      }
      pbVar28 = pbVar25 + 0xc;
      if (*pbVar28 == 0) {
        bVar3 = (bool)hasExclusiveAccess(pbVar28);
        if (!bVar3) goto LAB_012ef458;
        *pbVar28 = 1;
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_012ef458:
        FUN_0164fba8(pbVar28);
      }
      FUN_0165098c(pbVar28);
      FUN_019f8030(&local_110,pbVar25 + 0x10);
      ppppppppbVar29 = local_10c;
      ppppppppbVar20 = local_110;
      if (((char)local_110 == '\x04') || (((uint)local_110 & 0xff) == 4)) {
        FUN_01650a90(pbVar28);
        if (*pbVar28 == 1) {
          DataMemoryBarrier(0xb);
          do {
            bVar3 = (bool)hasExclusiveAccess(pbVar28);
            if (bVar3) {
              *pbVar28 = 0;
              goto LAB_012ef4e8;
            }
          } while (*pbVar28 == 1);
        }
        ClearExclusiveLocal();
        FUN_0164f86c(pbVar28);
LAB_012ef4e8:
        unaff_r8 = ppppppppbVar29 + 8;
        local_120 = (byte ********)CONCAT31(local_120._1_3_,3);
        local_d0 = unaff_r8;
        if (4 < DAT_01d51b00) {
          local_70 = (byte ********)&local_d0;
          local_64 = (byte ********)FUN_01609ae4;
          local_6c = (byte ********)FUN_015d0bcc;
          local_100 = (byte ********)&DAT_01d29800;
          local_104 = (byte ********)&DAT_00000009;
          local_108 = (byte ********)0x528f32;
          local_10c = (byte ********)&DAT_00000009;
          local_110 = (byte ********)0x528f32;
          local_68 = unaff_r9;
          FUN_015fb650(&DAT_005b6793,&local_70,5,&local_110);
        }
        FUN_01609584(&local_b8,*(undefined4 *)pbVar25,iVar8,unaff_r8,3);
        ppppppppbVar21 = local_b4;
        ppppppppbVar20 = local_b8;
        if ((char)local_b8 != '\x04') {
          if (*pbVar28 == 0) {
            bVar3 = (bool)hasExclusiveAccess(pbVar28);
            if (!bVar3) goto LAB_012ef60c;
            *pbVar28 = 1;
            DataMemoryBarrier(0xb);
          }
          else {
            ClearExclusiveLocal();
LAB_012ef60c:
            FUN_0164fba8(pbVar28);
          }
          FUN_0165098c(pbVar28);
          FUN_019f7f9c(pbVar25 + 0x10,ppppppppbVar29);
          FUN_01650a90(pbVar28);
          if (*pbVar28 == 1) {
            DataMemoryBarrier(0xb);
            do {
              bVar3 = (bool)hasExclusiveAccess(pbVar28);
              if (bVar3) {
                *pbVar28 = 0;
                goto LAB_012ef668;
              }
            } while (*pbVar28 == 1);
          }
          ClearExclusiveLocal();
          FUN_0164f86c(pbVar28);
LAB_012ef668:
          DataMemoryBarrier(0xb);
          do {
            pppppppbVar24 = *ppppppppbVar29;
            bVar3 = (bool)hasExclusiveAccess(ppppppppbVar29);
          } while (!bVar3);
          *ppppppppbVar29 = (byte *******)((int)pppppppbVar24 + -1);
          if (pppppppbVar24 == (byte *******)&DAT_00000001) {
            DataMemoryBarrier(0xb);
            FUN_019db52c(ppppppppbVar29);
          }
          goto LAB_012ef6a0;
        }
LAB_012ef6b0:
        if (iVar9 != 2) {
          param_1[0xd] = ppppppppbVar11;
          param_1[0xe] = ppppppppbVar29;
          param_1[0xf] = 1;
          param_1[0x10] = iVar8;
          param_1[0xc] = iVar9;
          uVar23 = FUN_01bf0332();
          param_1[0x11] = 0x10;
          param_1[0x12] = uVar23;
          param_1[0x13] = 1;
          if (param_1[0xf] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d28314);
          }
          iVar8 = FUN_01be718e(param_1[0x10],param_1 + 0x11,0xc);
          if (-1 < iVar8) {
            local_1ac = (byte ********)0x0;
            do {
              iVar8 = param_1[6];
              unaff_r5 = (byte ********)((int)param_1 + 0x81);
              *(byte *)unaff_r5 = 0;
              uVar19 = *(uint *)(iVar8 + 8);
              DataMemoryBarrier(0xb);
              local_19c = param_1 + 0x14;
              *local_19c = param_1 + 6;
              *(undefined1 *)(param_1 + 0x1c) = 0;
              param_1[0x1b] = 0;
              param_1[0x15] = iVar8 + 8;
              param_1[0x16] = uVar19 >> 2;
              param_1[0x17] = 0;
              param_1[0x18] = 0;
              param_1[0x19] = 0;
              param_1[0x1d] = param_1 + 0xc;
              param_1[0x1e] = unaff_r5;
              param_1[0x1f] = local_19c;
              local_188 = unaff_r5;
LAB_012efedc:
              bVar6 = FUN_019ec70c();
              if ((bVar6 != 2) && ((bVar6 & 1) == 0)) {
                FUN_019ece98(*(undefined4 *)*param_2,((undefined4 *)*param_2)[1]);
                unaff_r9 = unaff_r5;
LAB_012f1360:
                local_1c8 = param_1 + 0x20;
                iVar8 = 1;
                *(undefined1 *)local_1c8 = 3;
                goto LAB_012efa18;
              }
              iVar8 = FUN_019f8914(2);
              bVar14 = false;
              iVar9 = *param_2;
              iVar10 = 0;
              bVar3 = true;
              do {
                bVar17 = bVar3;
                if ((iVar10 + iVar8 & 1U) == 0) {
                  if (((uint)*local_188 & 1) == 0) {
                    iVar10 = FUN_01a3be00(local_19c,iVar9);
                    bVar14 = true;
                    if (iVar10 == 0) {
                      ppppppppbVar20 = (byte ********)&DAT_80000001;
                      *(byte *)local_188 = *(byte *)local_188 | 1;
                      goto LAB_012f04e8;
                    }
                  }
                }
                else if (((uint)*local_188 & 2) == 0) {
                  ppppppppbVar20 = (byte ********)local_19c[9];
LAB_012eff90:
                  if (4 < DAT_01d51b00) {
                    local_104 = (byte ********)&DAT_00000012;
                    local_10c = (byte ********)&DAT_00000012;
                    local_100 = (byte ********)&DAT_01d06460;
                    local_108 = (byte ********)0x4c022b;
                    local_110 = (byte ********)0x4c022b;
                    FUN_015fb650("poll_recv_from_full called",0x35,5,&local_110);
                  }
                  FUN_019e7220(&local_110,ppppppppbVar20[2],param_2,0);
                  uVar19 = 4;
                  if (local_110 != (byte ********)0x2) {
                    if (((uint)local_110 & 1) == 0) {
                      local_70 = ppppppppbVar20;
                      *(undefined4 *)((uint)&local_70 | 4) = local_10c;
                      ((undefined4 *)((uint)&local_70 | 4))[1] = local_108;
                      uVar19 = ((uint)local_108 & 0xffff) >> 8;
                      unaff_r8 = ppppppppbVar20;
                    }
                    else {
                      uVar19 = 3;
                      local_70 = local_10c;
                      local_6c = local_108;
                      unaff_r8 = local_10c;
                    }
                  }
                  if (uVar19 == 4) {
                    ppppppppbVar20 = (byte ********)&DAT_80000001;
                    goto LAB_012f0450;
                  }
                  if (uVar19 == 3) {
                    ppppppppbVar20 = (byte ********)&DAT_80000000;
                    local_1ac = local_6c;
                    local_1b4 = unaff_r8;
                    goto LAB_012f0450;
                  }
                  local_11c = local_6c;
                  local_118 = (byte ********)
                              CONCAT31(CONCAT21(local_68._2_2_,(char)uVar19),(undefined1)local_68);
                  local_120 = unaff_r8;
                  if (4 < DAT_01d51b00) {
                    local_104 = (byte ********)&DAT_00000012;
                    local_10c = (byte ********)&DAT_00000012;
                    local_100 = (byte ********)&DAT_01d06470;
                    local_108 = (byte ********)0x4c022b;
                    local_110 = (byte ********)0x4c022b;
                    FUN_015fb650("poll_recv_from_full socket is ready for reading",0x5f,5,&local_110
                                );
                  }
                  if (unaff_r8[3] == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012fb0cc(&DAT_01d06450);
                  }
                  pppppppbVar24 = unaff_r8[4];
                  local_c8 = (byte ********)0x0;
                  local_cc = (byte ********)&DAT_00000001;
                  local_d0 = (byte ********)0x0;
                  FUN_01642920(&local_70,pppppppbVar24,&local_d0,0x22);
                  ppppppppbVar29 = local_6c;
                  if (local_70 == (byte ********)0x0) {
                    local_c8 = (byte ********)0x0;
                    local_38 = local_6c;
                    if (local_d0 < local_6c) {
                      FUN_016092cc(&local_d0,0,local_6c,1,1);
                    }
                    FUN_01642920(&local_70,pppppppbVar24,&local_d0,0);
                    if (local_70 != (byte ********)0x0) {
                      *puVar7 = local_6c;
                      goto LAB_012f01a4;
                    }
                    local_70 = local_6c;
                    if (local_6c != ppppppppbVar29) {
                    /* WARNING: Subroutine does not return */
                      FUN_01304210(0,&local_70,&local_38,0);
                    }
                    local_110 = local_d0;
                    local_10c = local_cc;
                    local_108 = local_c8;
                    local_104 = local_68;
                    puVar7[3] = local_64;
                    puVar7[4] = local_60;
                    ppppppppbVar29 = local_d0;
                    if (local_d0 == (byte ********)&DAT_80000000) goto LAB_012f01c4;
                    local_b8 = (byte ********)*puVar7;
                    local_b4 = (byte ********)puVar7[1];
                    local_b0 = (byte ********)puVar7[2];
                    local_ac = (byte ********)puVar7[3];
                    ppppppppbStack_a8 = (byte ********)puVar7[4];
                    if (local_d0 != (byte ********)&DAT_80000001) goto LAB_012f03bc;
LAB_012f02cc:
                    if (4 < DAT_01d51b00) {
                      local_104 = (byte ********)&DAT_00000012;
                      local_10c = (byte ********)&DAT_00000012;
                      local_100 = (byte ********)&DAT_01d06490;
                      local_108 = (byte ********)0x4c022b;
                      local_110 = (byte ********)0x4c022b;
                      FUN_015fb650("poll_recv_from_full socket would block",0x4d,5,&local_110);
                    }
                    goto LAB_012eff90;
                  }
                  *puVar7 = local_6c;
LAB_012f01a4:
                  puVar7[1] = local_68;
                  local_110 = (byte ********)&DAT_80000000;
                  FUN_019bb7e0(local_d0,local_cc);
                  ppppppppbVar29 = (byte ********)&DAT_80000000;
LAB_012f01c4:
                  ppppppppbVar11 = local_10c;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                  switch((uint)local_10c & 0xff) {
                  case 0:
                    ppppppppbVar21 = (byte ********)&DAT_0000000b;
                    if (local_108 == (byte ********)&DAT_0000000b) goto LAB_012f0288;
                    goto LAB_012f03ac;
                  case 1:
                    bVar6 = local_10c._1_1_;
                    break;
                  default:
                    bVar6 = *(byte *)(local_108 + 2);
                    break;
                  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  if (bVar6 == 0xd) {
                    ppppppppbVar21 = local_108;
LAB_012f0288:
                    ppppppppbVar29 = (byte ********)((undefined4 *)((uint)&local_120 | 4))[1];
                    local_118._0_2_ = CONCAT11(2,(undefined1)local_118);
                    if (((uint)ppppppppbVar29 & 0xff00) != 0x200) {
                      local_70 = *(byte *********)((uint)&local_120 | 4);
                      local_6c = ppppppppbVar29;
                      FUN_019e0788(unaff_r8[2] + 8,&local_70);
                    }
                    FUN_0069263c(ppppppppbVar11,ppppppppbVar21);
                    goto LAB_012f02cc;
                  }
LAB_012f03ac:
                  local_b8 = (byte ********)*puVar7;
                  local_b4 = (byte ********)puVar7[1];
                  local_b0 = (byte ********)puVar7[2];
                  local_ac = (byte ********)puVar7[3];
                  ppppppppbStack_a8 = (byte ********)puVar7[4];
LAB_012f03bc:
                  local_10c = local_b8;
                  local_108 = local_b4;
                  local_104 = local_b0;
                  local_100 = local_ac;
                  local_fc = ppppppppbStack_a8;
                  local_110 = ppppppppbVar29;
                  if (4 < DAT_01d51b00) {
                    local_cc = (byte ********)FUN_01642c98;
                    local_64 = (byte ********)&DAT_00000012;
                    local_60 = (byte ********)&DAT_01d06480;
                    local_6c = (byte ********)&DAT_00000012;
                    local_68 = (byte ********)0x4c022b;
                    local_70 = (byte ********)0x4c022b;
                    local_d0 = (byte ********)&local_110;
                    FUN_015fb650(&DAT_005b751d,&local_d0,5,&local_70);
                  }
                  local_1b4 = local_10c;
                  local_1ac = local_108;
                  ppppppppbVar20 = local_110;
LAB_012f0450:
                  bVar14 = true;
                  if (ppppppppbVar20 != (byte ********)&DAT_80000001) {
                    *(byte *)local_188 = *(byte *)local_188 | 2;
                    local_1c4 = local_1ac;
                    unaff_r9 = local_1b4;
                    if (ppppppppbVar20 == (byte ********)&DAT_80000004) goto LAB_012f1360;
                    goto LAB_012f04e8;
                  }
                }
                iVar10 = 1;
                bVar3 = false;
              } while (bVar17);
              ppppppppbVar20 = (byte ********)0x80000003;
              if (bVar14) goto LAB_012f1360;
LAB_012f04e8:
              ppppppppbVar29 = (byte ********)&local_110;
              FUN_012c7f64(param_1 + 0x14);
              pbVar25 = &DAT_00000001;
              if (&DAT_80000000 < ppppppppbVar20) {
                pbVar25 = (byte *)((int)ppppppppbVar20 + 0x7fffffff);
              }
              if (pbVar25 != &DAT_00000001) {
                if (pbVar25 != (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb100("all branches are disabled and there is no else branch",0x6b,
                               &DAT_01ce41d4);
                }
                if (((DAT_01d50f88 < 2) &&
                    ((DAT_01d4cf54 - 1 < 2 ||
                     ((DAT_01d4cf54 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4cf4c), cVar5 != '\0')))))
                    ) && (iVar8 = FUN_01aaa278(DAT_01d4cf4c), iVar8 != 0)) {
                  if (*(byte *********)(DAT_01d4cf4c + 0x20) == (byte ********)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce41a4);
                  }
                  local_cc = (byte ********)&local_38;
                  local_108 = *(byte *********)(DAT_01d4cf4c + 0x24);
                  local_104 = *(byte *********)(DAT_01d4cf4c + 0x28);
                  local_118 = (byte ********)(DAT_01d4cf4c + 0x1c);
                  local_110 = (byte ********)*local_118;
                  local_d0 = (byte ********)&local_110;
                  local_120 = (byte ********)&local_d0;
                  local_100 = (byte ********)0x0;
                  local_11c = (byte ********)&DAT_00000001;
                  local_c8 = (byte ********)&DAT_01d2ea4c;
                  local_34 = (byte ********)&DAT_00000035;
                  local_38 = (byte ********)0x4213d1;
                  local_10c = *(byte *********)(DAT_01d4cf4c + 0x20);
                  FUN_01aaaecc(DAT_01d4cf4c,&local_120);
                  iVar8 = DAT_01d4cf4c;
                  if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
                    local_b4 = *(byte *********)(DAT_01d4cf4c + 0x14);
                    local_b0 = *(byte *********)(DAT_01d4cf4c + 0x18);
                    local_b8 = (byte ********)&SUB_00000004;
                    DataMemoryBarrier(0xb);
                    puVar7 = DAT_01d4edc8;
                    pcVar22 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar7 = &DAT_01cfc5e0;
                      pcVar22 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar9 = (*(code *)puVar7[3])(pcVar22,&local_b8);
                    if (iVar9 != 0) {
                      local_70 = local_b8;
                      local_6c = local_b4;
                      local_68 = local_b0;
                      FUN_01aaa328(iVar8,pcVar22,puVar7[4],&local_70,&local_120);
                    }
                  }
                }
                else {
                  iVar8 = DAT_01d4cf4c;
                  ppppppppbVar29 = (byte ********)0x0;
                  if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 4)) goto LAB_012efeb0;
                  local_14c = *(byte *********)(DAT_01d4cf4c + 0x14);
                  local_148 = *(byte *********)(DAT_01d4cf4c + 0x18);
                  local_150 = (byte ********)&SUB_00000004;
                  DataMemoryBarrier(0xb);
                  puVar7 = DAT_01d4edc8;
                  pcVar22 = DAT_01d4edc4;
                  if (DAT_01d51174 != 2) {
                    puVar7 = &DAT_01cfc5e0;
                    pcVar22 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                  }
                  iVar9 = (*(code *)puVar7[3])(pcVar22,&local_150);
                  if (iVar9 != 0) {
                    if (*(byte *********)(DAT_01d4cf4c + 0x20) == (byte ********)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce41a4);
                    }
                    local_b4 = (byte ********)&local_120;
                    local_108 = *(byte *********)(DAT_01d4cf4c + 0x24);
                    local_104 = *(byte *********)(DAT_01d4cf4c + 0x28);
                    local_b8 = (byte ********)&local_110;
                    local_d0 = (byte ********)&local_b8;
                    local_cc = (byte ********)&DAT_00000001;
                    local_b0 = (byte ********)&DAT_01d2ea4c;
                    local_11c = (byte ********)&DAT_00000035;
                    local_100 = (byte ********)0x0;
                    local_120 = (byte ********)0x4213d1;
                    local_70 = local_150;
                    local_6c = local_14c;
                    local_68 = local_148;
                    local_110 = *(byte *********)(DAT_01d4cf4c + 0x1c);
                    local_10c = *(byte *********)(DAT_01d4cf4c + 0x20);
                    local_c8 = (byte ********)(DAT_01d4cf4c + 0x1c);
                    FUN_01aaa328(iVar8,pcVar22,puVar7[4],&local_70,&local_d0);
                  }
                }
                ppppppppbVar29 = (byte ********)0x0;
                goto LAB_012efeb0;
              }
              if (ppppppppbVar20 == (byte ********)&DAT_80000000) {
                local_10c = local_1c4;
                local_110 = unaff_r9;
                ppppppppbVar29 = (byte ********)FUN_012ecc28(&local_110);
                goto LAB_012efeb0;
              }
              local_98 = local_1c4;
              local_88 = local_1c4;
              local_9c = unaff_r9;
              if (&DAT_0000000f < local_1c4) {
                ppppppppbVar11 = (byte ********)FUN_012e4ad8(unaff_r9,local_1c4);
                if (local_1c4 < ppppppppbVar11) {
                  local_48 = (byte ********)FUN_012e4ad8(local_9c,local_98);
                  local_68 = (byte ********)&local_88;
                  local_70 = (byte ********)&local_48;
                  local_64 = (byte ********)FUN_012fd02c;
                  local_6c = (byte ********)FUN_012fd02c;
                  FUN_00664898(&local_b8,&DAT_005bb0bf,&local_70);
                  goto LAB_012f0620;
                }
                uVar19 = FUN_012e4ad8(local_9c,local_98);
                if (uVar19 < 0x10) {
                  local_48 = (byte ********)FUN_012e4ad8(local_9c,local_98);
                  local_68 = (byte ********)&local_88;
                  local_70 = (byte ********)&local_48;
                  local_64 = (byte ********)FUN_012fd02c;
                  local_6c = (byte ********)FUN_012fd02c;
                  FUN_00664898(&local_b8,&DAT_005731b4,&local_70);
                  goto LAB_012f0620;
                }
                local_b8 = (byte ********)&DAT_80000000;
LAB_012f0660:
                local_d0 = local_b8;
                local_cc = local_b4;
                local_c8 = local_b0;
              }
              else {
                local_70 = (byte ********)&local_88;
                local_64 = (byte ********)FUN_012fd02c;
                local_6c = (byte ********)FUN_012fd02c;
                local_68 = (byte ********)&DAT_00570674;
                FUN_00664898(&local_b8,&DAT_0058863a,&local_70);
LAB_012f0620:
                ppppppppbVar11 = local_b4;
                if (local_b8 == (byte ********)&DAT_80000000) goto LAB_012f0660;
                local_70 = local_b8;
                local_6c = local_b4;
                local_68 = local_b0;
                FUN_016403ac(&local_d0,&local_70,&DAT_00421223,0x1d);
                ppppppppbVar29 = ppppppppbVar11;
              }
              if (local_d0 != (byte ********)&DAT_80000000) {
                local_1cc = local_c8;
                local_70 = local_d0;
                local_6c = local_cc;
                local_68 = local_c8;
                FUN_016403ac(&local_38,&local_70,&DAT_00421240,0x23);
                ppppppppbVar29 = local_38;
                if (local_38 == (byte ********)&DAT_80000000) goto LAB_012f06dc;
                local_6c = local_34;
                local_70 = local_38;
                local_68 = local_30;
LAB_012f1bcc:
                ppppppppbVar29 = (byte ********)FUN_012ee71c(&local_70);
                goto LAB_012f1bf4;
              }
              local_30 = local_1cc;
              local_34 = (byte ********)&local_9c;
              local_38 = (byte ********)&DAT_80000000;
LAB_012f06dc:
              ppppppppbVar11 = local_34;
              ppppppppbVar12 = (byte ********)FUN_012e4ad8(*local_34,local_34[1]);
              ppppppppbVar21 = (byte ********)ppppppppbVar11[1];
              if (ppppppppbVar21 < &DAT_00000006) {
                ppppppppbVar13 = (byte ********)&DAT_00000006;
                uVar23 = 4;
                puVar18 = &DAT_01ce3a10;
                goto LAB_012f1c84;
              }
              if (ppppppppbVar21 < &DAT_00000008) {
                ppppppppbVar13 = (byte ********)&DAT_00000008;
                uVar23 = 6;
                puVar18 = &DAT_01ce3a30;
                goto LAB_012f1c84;
              }
              if (ppppppppbVar21 < &DAT_0000000c) {
                ppppppppbVar13 = (byte ********)&DAT_0000000c;
                uVar23 = 8;
                puVar18 = &DAT_01ce3a20;
                goto LAB_012f1c84;
              }
              if (ppppppppbVar21 < &DAT_00000010) {
                ppppppppbVar13 = (byte ********)&DAT_00000010;
                uVar23 = 0xc;
                puVar18 = &DAT_01ce3a00;
                goto LAB_012f1c84;
              }
              pppppppbVar24 = *ppppppppbVar11;
              uVar1 = *(undefined2 *)((int)pppppppbVar24 + 6);
              pppppppbVar15 = (byte *******)pppppppbVar24[2];
              pppppppbVar16 = (byte *******)pppppppbVar24[3];
              uVar2 = *(undefined2 *)(pppppppbVar24 + 1);
              ppppppppbVar13 = (byte ********)FUN_012e4ad8(pppppppbVar24,ppppppppbVar21);
              uVar23 = 0x10;
              ppppppppbVar21 = (byte ********)ppppppppbVar11[1];
              puVar18 = &DAT_01ce3a50;
              if ((ppppppppbVar13 < &DAT_00000010) || (ppppppppbVar21 < ppppppppbVar13))
              goto LAB_012f1c84;
              ppppppppbVar13 = ppppppppbVar13 + -4;
              ppppppppbVar30 = (byte ********)(*ppppppppbVar11 + 4);
              ppppppppbVar11 = (byte ********)&DAT_0000002a;
              ppppppppbVar21 = unaff_r11;
              local_88 = ppppppppbVar30;
              local_84 = ppppppppbVar13;
              switch(uVar2) {
              case 1:
                break;
              case 2:
                if (&DAT_00000003 < ppppppppbVar13) {
                  local_38 = (byte ********)&DAT_80000000;
                  local_78 = ppppppppbVar13;
LAB_012f0980:
                  local_48 = local_38;
                  local_44 = local_34;
                  local_40 = local_30;
                }
                else {
                  local_70 = (byte ********)&local_78;
                  local_64 = (byte ********)FUN_012fd02c;
                  local_68 = (byte ********)&DAT_0056e8c0;
                  local_6c = (byte ********)FUN_012fd02c;
                  local_78 = ppppppppbVar13;
                  FUN_00664898(&local_38,&DAT_0058705d,&local_70);
                  if (local_38 == (byte ********)&DAT_80000000) goto LAB_012f0980;
                  local_70 = local_38;
                  local_6c = local_34;
                  local_68 = local_30;
                  FUN_016403ac(&local_48,&local_70,&DAT_00421209,0x1a);
                }
                if (local_48 != (byte ********)&DAT_80000000) {
                  local_70 = local_48;
                  local_6c = local_44;
                  local_68 = local_40;
                  FUN_016403ac(&local_b4,&local_70,&DAT_004211bc,0x1a);
LAB_012f1bc0:
                  local_6c = local_b0;
                  local_70 = local_b4;
                  local_68 = local_ac;
                  goto LAB_012f1bcc;
                }
                if (local_84 < &SUB_00000004) {
                  puVar18 = &DAT_01ce39f0;
LAB_012f1c7c:
                  ppppppppbVar13 = (byte ********)&SUB_00000004;
                  uVar23 = 0;
                  ppppppppbVar21 = local_84;
LAB_012f1c84:
                    /* WARNING: Subroutine does not return */
                  FUN_012faff4(uVar23,ppppppppbVar13,ppppppppbVar21,puVar18);
                }
                ppppppppbVar13 = local_84 + -1;
                ppppppppbVar21 = (byte ********)&DAT_00000001;
                ppppppppbVar11 = local_88 + 1;
                ppppppppbVar29 = (byte ********)*local_88;
                unaff_r8 = (byte ********)0x0;
                if (ppppppppbVar13 != (byte ********)0x0) {
                  ppppppppbVar21 = (byte ********)FUN_01298504(ppppppppbVar13,1);
                  unaff_r8 = ppppppppbVar13;
                  if (ppppppppbVar21 == (byte ********)0x0) goto LAB_012f1d60;
                }
                FUN_01bed4e2(ppppppppbVar21,ppppppppbVar11);
                ppppppppbVar11 = (byte ********)&DAT_00000029;
                break;
              case 3:
                ppppppppbVar11 = (byte ********)&DAT_00000028;
                ppppppppbVar21 = (byte ********)&DAT_00000001;
                if (ppppppppbVar13 != (byte ********)0x0) {
                  if (&DAT_00000003 < ppppppppbVar13) {
                    local_38 = (byte ********)&DAT_80000000;
                    local_78 = ppppppppbVar13;
LAB_012f0ae4:
                    local_48 = local_38;
                    local_44 = local_34;
                    local_40 = local_30;
                  }
                  else {
                    local_70 = (byte ********)&local_78;
                    local_64 = (byte ********)FUN_012fd02c;
                    local_68 = (byte ********)&DAT_0056e8c0;
                    local_6c = (byte ********)FUN_012fd02c;
                    local_78 = ppppppppbVar13;
                    FUN_00664898(&local_38,&DAT_005af9dd,&local_70);
                    if (local_38 == (byte ********)&DAT_80000000) goto LAB_012f0ae4;
                    local_70 = local_38;
                    local_6c = local_34;
                    local_68 = local_30;
                    FUN_016403ac(&local_48,&local_70,&DAT_004211f0,0x19);
                  }
                  if (local_48 == (byte ********)&DAT_80000000) {
                    if (&DAT_00000003 < local_84) {
                      ppppppppbVar13 = local_84 + -1;
                      ppppppppbVar21 = (byte ********)&DAT_00000001;
                      ppppppppbVar30 = local_88 + 1;
                      ppppppppbVar29 = (byte ********)*local_88;
                      unaff_r8 = (byte ********)0x0;
                      if (ppppppppbVar13 == (byte ********)0x0) {
LAB_012f0b4c:
                        FUN_01bed4e2(ppppppppbVar21,ppppppppbVar30);
                        break;
                      }
                      ppppppppbVar21 = (byte ********)FUN_01298504(ppppppppbVar13,1);
                      unaff_r8 = ppppppppbVar13;
                      if (ppppppppbVar21 != (byte ********)0x0) goto LAB_012f0b4c;
LAB_012f1d60:
                      uVar23 = 1;
                      local_1d0 = ppppppppbVar13;
LAB_012f0900:
                    /* WARNING: Subroutine does not return */
                      FUN_00664620(uVar23,local_1d0);
                    }
                    puVar18 = &DAT_01ce39e0;
                    goto LAB_012f1c7c;
                  }
                  local_70 = local_48;
                  local_6c = local_44;
                  local_68 = local_40;
                  FUN_016403ac(&local_b4,&local_70,&DAT_004211d6,0x1a);
                  goto LAB_012f1bc0;
                }
                ppppppppbVar13 = (byte ********)0x0;
                unaff_r8 = (byte ********)0x0;
                ppppppppbVar29 = (byte ********)0x0;
                break;
              case 4:
                uVar23 = 0;
                if ((int)ppppppppbVar13 < 0) goto LAB_012f0900;
                ppppppppbVar21 = (byte ********)&DAT_00000001;
                unaff_r8 = (byte ********)0x0;
                if (ppppppppbVar13 != (byte ********)0x0) {
                  uVar23 = 1;
                  ppppppppbVar21 =
                       (byte ********)FUN_01298504(ppppppppbVar13,1,ppppppppbVar13,&DAT_01ce3a50);
                  if (ppppppppbVar21 == (byte ********)0x0) {
                    local_1d0 = ppppppppbVar13;
                    goto LAB_012f0900;
                  }
                  unaff_r8 = ppppppppbVar13;
                }
                FUN_01bed4e2(ppppppppbVar21,ppppppppbVar30);
                ppppppppbVar11 = (byte ********)&DAT_0000002b;
                local_1d0 = ppppppppbVar21;
                break;
              default:
                local_78 = (byte ********)CONCAT22(local_78._2_2_,uVar2);
                FUN_01635b8c(&local_70,ppppppppbVar30,ppppppppbVar13,uVar2);
                if (local_70 == (byte ********)&DAT_00000028) {
                  local_b0 = (byte ********)&local_48;
                  local_48 = local_6c;
                  local_44 = local_68;
                  local_40 = local_64;
                  local_b8 = (byte ********)&local_78;
                  local_ac = (byte ********)FUN_0160f4e0;
                  local_b4 = (byte ********)FUN_012fcf18;
                  FUN_00664898(&local_38,&DAT_0059e504,&local_b8);
                  ppppppppbVar21 = local_30;
                  ppppppppbVar11 = local_34;
                  ppppppppbVar29 = local_38;
                  FUN_019bb7e0(local_48,local_44);
                  local_6c = ppppppppbVar11;
                  local_70 = ppppppppbVar29;
                  local_68 = ppppppppbVar21;
                  goto LAB_012f1bcc;
                }
                local_d0 = local_5c;
                local_cc = ppppppppbStack_58;
                local_c8 = ppppppppbStack_54;
                ppppppppbStack_c4 = ppppppppbStack_50;
                ppppppppbVar13 = local_64;
                ppppppppbVar29 = local_60;
                unaff_r8 = local_6c;
                ppppppppbVar11 = local_70;
                ppppppppbVar21 = local_68;
              }
              local_120 = local_d0;
              local_11c = local_cc;
              local_118 = local_c8;
              ppppppppbStack_114 = ppppppppbStack_c4;
              local_fc = local_d0;
              local_f8 = local_cc;
              local_f4 = local_c8;
              ppppppppbStack_f0 = ppppppppbStack_c4;
              local_110 = ppppppppbVar11;
              local_10c = unaff_r8;
              local_108 = ppppppppbVar21;
              local_104 = ppppppppbVar13;
              local_100 = ppppppppbVar29;
              local_ec = ppppppppbVar12;
              local_e8 = pppppppbVar15;
              local_e4 = pppppppbVar16;
              local_e0 = uVar2;
              local_de = uVar1;
              if (ppppppppbVar11 == (byte ********)0x0) {
                local_78 = ppppppppbVar29;
                if ((DAT_01d50f88 < 2) &&
                   ((DAT_01d4cec4 - 1 < 2 ||
                    ((DAT_01d4cec4 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4cebc), cVar5 != '\0'))))))
                {
                  iVar8 = FUN_01aaa278(DAT_01d4cebc);
                  if (iVar8 == 0) goto LAB_012f0da0;
                  if (*(byte *********)(DAT_01d4cebc + 0x20) == (byte ********)0x0)
                  goto LAB_012f1d68;
                  local_120 = (byte ********)&local_70;
                  local_68 = *(byte *********)(DAT_01d4cebc + 0x24);
                  local_64 = *(byte *********)(DAT_01d4cebc + 0x28);
                  local_11c = (byte ********)&local_9c;
                  local_40 = (byte ********)(DAT_01d4cebc + 0x1c);
                  local_70 = (byte ********)*local_40;
                  local_48 = (byte ********)&local_120;
                  local_60 = (byte ********)0x0;
                  local_44 = (byte ********)&DAT_00000001;
                  local_98 = (byte ********)&local_88;
                  local_88 = (byte ********)&local_78;
                  local_118 = (byte ********)&DAT_01d2ea4c;
                  local_9c = (byte ********)&DAT_00586e6c;
                  local_84 = (byte ********)FUN_012fd02c;
                  unaff_r8 = (byte ********)&local_48;
                  local_6c = *(byte *********)(DAT_01d4cebc + 0x20);
                  FUN_01aaaecc(DAT_01d4cebc,unaff_r8);
                  iVar8 = DAT_01d4cebc;
                  if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
                    local_cc = *(byte *********)(DAT_01d4cebc + 0x14);
                    local_c8 = *(byte *********)(DAT_01d4cebc + 0x18);
                    local_d0 = (byte ********)&SUB_00000004;
                    DataMemoryBarrier(0xb);
                    puVar26 = DAT_01d4edc8;
                    pcVar22 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar26 = &DAT_01cfc5e0;
                      pcVar22 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar9 = (*(code *)puVar26[3])(pcVar22,&local_d0);
                    if (iVar9 != 0) {
                      local_b8 = local_d0;
                      local_b4 = local_cc;
                      local_b0 = local_c8;
                      FUN_01aaa328(iVar8,pcVar22,puVar26[4],&local_b8,unaff_r8);
                    }
                  }
                }
                else {
LAB_012f0da0:
                  iVar8 = DAT_01d4cebc;
                  if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
                    local_34 = *(byte *********)(DAT_01d4cebc + 0x14);
                    local_30 = *(byte *********)(DAT_01d4cebc + 0x18);
                    local_38 = (byte ********)&SUB_00000004;
                    DataMemoryBarrier(0xb);
                    puVar26 = DAT_01d4edc8;
                    pcVar22 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar26 = &DAT_01cfc5e0;
                      pcVar22 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar9 = (*(code *)puVar26[3])(pcVar22,&local_38);
                    if (iVar9 != 0) {
                      if (*(byte *********)(DAT_01d4cebc + 0x20) == (byte ********)0x0) {
LAB_012f1d68:
                    /* WARNING: Subroutine does not return */
                        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce37e0);
                      }
                      local_d0 = (byte ********)&local_70;
                      unaff_r8 = *(byte *********)(DAT_01d4cebc + 0x24);
                      local_64 = *(byte *********)(DAT_01d4cebc + 0x28);
                      local_cc = (byte ********)&local_88;
                      local_120 = (byte ********)&local_d0;
                      local_60 = (byte ********)0x0;
                      local_11c = (byte ********)&DAT_00000001;
                      local_88 = (byte ********)&DAT_00586e6c;
                      local_c8 = (byte ********)&DAT_01d2ea4c;
                      local_84 = (byte ********)&local_48;
                      local_44 = (byte ********)FUN_012fd02c;
                      local_48 = (byte ********)&local_78;
                      local_b8 = local_38;
                      local_b4 = local_34;
                      local_b0 = local_30;
                      local_118 = (byte ********)(DAT_01d4cebc + 0x1c);
                      local_70 = *(byte *********)(DAT_01d4cebc + 0x1c);
                      local_6c = *(byte *********)(DAT_01d4cebc + 0x20);
                      local_68 = unaff_r8;
                      FUN_01aaa328(iVar8,pcVar22,puVar26[4],&local_b8,&local_120);
                    }
                  }
                }
                if (ppppppppbVar13 != (byte ********)0x0) {
                  unaff_r8 = (byte ********)&local_d0;
                  iVar8 = (int)ppppppppbVar13 * 0xd0;
                  ppppppppbVar11 = local_108 + 2;
                  do {
                    if (*(byte *)(ppppppppbVar11 + -2) == 0x15) {
                      FUN_006666fc(unaff_r8,*ppppppppbVar11,ppppppppbVar11[1]);
                      if (local_d0 != (byte ********)&DAT_80000000) goto LAB_012f0f80;
                    }
                    else {
                      local_d0 = (byte ********)&DAT_80000000;
                    }
                    ppppppppbVar11 = ppppppppbVar11 + 0x34;
                    iVar8 = iVar8 + -0xd0;
                  } while (iVar8 != 0);
                }
                local_d0 = (byte ********)&DAT_80000000;
LAB_012f0f80:
                ppppppppbVar11 = local_d0;
                local_b4 = (byte ********)FUN_012fd02c;
                local_b8 = (byte ********)&local_78;
                FUN_00664898(&local_70,&DAT_00593fc2,&local_b8);
                local_b8 = local_70;
                local_b4 = local_6c;
                local_b0 = local_68;
                ppppppppbVar13 = (byte ********)FUN_006679ac(&local_b8);
                ppppppppbVar12 = local_c8;
                ppppppppbVar21 = local_cc;
                if (ppppppppbVar11 == (byte ********)&DAT_80000000) {
                  local_9c = ppppppppbVar13;
                  if ((DAT_01d50f88 < 4) &&
                     ((DAT_01d4cf6c - 1 < 2 ||
                      ((DAT_01d4cf6c != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4cf64), cVar5 != '\0'))))
                     )) {
                    iVar8 = FUN_01aaa278(DAT_01d4cf64);
                    if (iVar8 == 0) goto LAB_012f1574;
                    if ((byte ********)DAT_01d4cf64[8] == (byte ********)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce41c4);
                    }
                    local_11c = (byte ********)&local_88;
                    local_68 = (byte ********)DAT_01d4cf64[9];
                    local_64 = (byte ********)DAT_01d4cf64[10];
                    local_30 = (byte ********)(DAT_01d4cf64 + 7);
                    local_70 = (byte ********)*local_30;
                    local_38 = (byte ********)&local_120;
                    local_60 = (byte ********)0x0;
                    local_34 = (byte ********)&DAT_00000001;
                    local_84 = (byte ********)&local_48;
                    local_48 = (byte ********)&local_9c;
                    local_118 = (byte ********)&DAT_01d2ea4c;
                    local_88 = (byte ********)&DAT_00590e5f;
                    local_44 = (byte ********)FUN_00667a08;
                    local_120 = (byte ********)&local_70;
                    local_6c = (byte ********)DAT_01d4cf64[8];
                    FUN_01aaaecc(DAT_01d4cf64,&local_38);
                    pppppbVar4 = DAT_01d4cf64;
                    unaff_r8 = (byte ********)&local_6c;
                    if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
                      local_cc = (byte ********)DAT_01d4cf64[5];
                      local_c8 = (byte ********)DAT_01d4cf64[6];
                      local_d0 = (byte ********)0x2;
                      DataMemoryBarrier(0xb);
                      puVar26 = DAT_01d4edc8;
                      pcVar22 = DAT_01d4edc4;
                      if (DAT_01d51174 != 2) {
                        puVar26 = &DAT_01cfc5e0;
                        pcVar22 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                      }
                      iVar8 = (*(code *)puVar26[3])(pcVar22,&local_d0);
                      unaff_r8 = (byte ********)pppppbVar4;
                      if (iVar8 != 0) {
                        local_b8 = local_d0;
                        local_b4 = local_cc;
                        local_b0 = local_c8;
                        FUN_01aaa328(pppppbVar4,pcVar22,puVar26[4],&local_b8,&local_38);
                      }
                    }
                  }
                  else {
LAB_012f1574:
                    pppppbVar4 = DAT_01d4cf64;
                    if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
                      local_12c = (byte ********)DAT_01d4cf64[5];
                      local_128 = (byte ********)DAT_01d4cf64[6];
                      local_130 = (byte ********)0x2;
                      DataMemoryBarrier(0xb);
                      puVar26 = DAT_01d4edc8;
                      pcVar22 = DAT_01d4edc4;
                      if (DAT_01d51174 != 2) {
                        puVar26 = &DAT_01cfc5e0;
                        pcVar22 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                      }
                      unaff_r8 = (byte ********)&local_130;
                      iVar8 = (*(code *)puVar26[3])(pcVar22,unaff_r8);
                      if (iVar8 != 0) {
                        if ((byte ********)DAT_01d4cf64[8] == (byte ********)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce41c4);
                        }
                        local_cc = (byte ********)&local_48;
                        local_68 = (byte ********)DAT_01d4cf64[9];
                        local_64 = (byte ********)DAT_01d4cf64[10];
                        local_120 = (byte ********)&local_d0;
                        local_11c = (byte ********)&DAT_00000001;
                        local_44 = (byte ********)&local_38;
                        local_60 = (byte ********)0x0;
                        local_c8 = (byte ********)&DAT_01d2ea4c;
                        local_34 = (byte ********)FUN_00667a08;
                        local_48 = (byte ********)&DAT_00590e5f;
                        local_38 = (byte ********)&local_9c;
                        local_b8 = local_130;
                        local_b4 = local_12c;
                        local_b0 = local_128;
                        local_118 = (byte ********)(DAT_01d4cf64 + 7);
                        local_d0 = (byte ********)&local_70;
                        local_70 = (byte ********)DAT_01d4cf64[7];
                        local_6c = (byte ********)DAT_01d4cf64[8];
                        FUN_01aaa328(pppppbVar4,pcVar22,puVar26[4],&local_b8,&local_120);
                      }
                    }
                  }
                  (*(code *)**local_9c)();
                }
                else {
                  (*(code *)**ppppppppbVar13)();
                  local_c8 = ppppppppbVar21;
                  ppppppppbStack_c4 = ppppppppbVar12;
                  local_d0 = (byte ********)(~(uint)local_fc & 1);
                  local_cc = ppppppppbVar11;
                  local_c0 = ppppppppbVar29;
                  if ((DAT_01d50f88 < 2) &&
                     ((DAT_01d4cf60 - 1 < 2 ||
                      ((DAT_01d4cf60 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4cf58), cVar5 != '\0'))))
                     )) {
                    iVar8 = FUN_01aaa278(DAT_01d4cf58);
                    if (iVar8 == 0) goto LAB_012f16fc;
                    if (*(byte ********)(DAT_01d4cf58 + 0x20) == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce41b4);
                    }
                    local_34 = (byte ********)&local_9c;
                    local_68 = *(byte *********)(DAT_01d4cf58 + 0x24);
                    local_64 = *(byte *********)(DAT_01d4cf58 + 0x28);
                    local_40 = (byte ********)(DAT_01d4cf58 + 0x1c);
                    local_70 = (byte ********)*local_40;
                    local_48 = (byte ********)&local_38;
                    local_60 = (byte ********)0x0;
                    local_44 = (byte ********)&DAT_00000001;
                    local_98 = (byte ********)&local_88;
                    local_88 = (byte ********)&local_d0;
                    local_30 = (byte ********)&DAT_01d2ea4c;
                    local_9c = (byte ********)&DAT_005851f1;
                    local_84 = (byte ********)FUN_012e4a30;
                    local_6c = (byte ********)*(byte ********)(DAT_01d4cf58 + 0x20);
                    local_38 = (byte ********)&local_70;
                    FUN_01aaaecc(DAT_01d4cf58,&local_48);
                    iVar8 = DAT_01d4cf58;
                    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
                      local_11c = *(byte *********)(DAT_01d4cf58 + 0x14);
                      local_118 = *(byte *********)(DAT_01d4cf58 + 0x18);
                      local_120 = (byte ********)&SUB_00000004;
                      DataMemoryBarrier(0xb);
                      puVar26 = DAT_01d4edc8;
                      pcVar22 = DAT_01d4edc4;
                      if (DAT_01d51174 != 2) {
                        puVar26 = &DAT_01cfc5e0;
                        pcVar22 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                      }
                      iVar9 = (*(code *)puVar26[3])(pcVar22,&local_120);
                      if (iVar9 != 0) {
                        local_b8 = local_120;
                        local_b4 = local_11c;
                        local_b0 = local_118;
                        FUN_01aaa328(iVar8,pcVar22,puVar26[4],&local_b8,&local_48);
                      }
                    }
                  }
                  else {
LAB_012f16fc:
                    iVar8 = DAT_01d4cf58;
                    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
                      local_13c = *(byte *********)(DAT_01d4cf58 + 0x14);
                      local_138 = *(byte *********)(DAT_01d4cf58 + 0x18);
                      local_140 = (byte ********)&SUB_00000004;
                      DataMemoryBarrier(0xb);
                      puVar26 = DAT_01d4edc8;
                      pcVar22 = DAT_01d4edc4;
                      if (DAT_01d51174 != 2) {
                        puVar26 = &DAT_01cfc5e0;
                        pcVar22 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                      }
                      iVar9 = (*(code *)puVar26[3])(pcVar22,&local_140);
                      if (iVar9 != 0) {
                        if (*(byte ********)(DAT_01d4cf58 + 0x20) == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce41b4);
                        }
                        local_38 = (byte ********)&local_120;
                        local_68 = *(byte *********)(DAT_01d4cf58 + 0x24);
                        local_64 = *(byte *********)(DAT_01d4cf58 + 0x28);
                        local_11c = (byte ********)&local_88;
                        local_60 = (byte ********)0x0;
                        local_34 = (byte ********)&DAT_00000001;
                        local_84 = (byte ********)&local_48;
                        local_118 = (byte ********)&DAT_01d2ea4c;
                        local_88 = (byte ********)&DAT_005851f1;
                        local_44 = (byte ********)FUN_012e4a30;
                        local_48 = (byte ********)&local_d0;
                        local_b8 = local_140;
                        local_b4 = local_13c;
                        local_b0 = local_138;
                        local_120 = (byte ********)&local_70;
                        local_70 = (byte ********)*(byte ********)(DAT_01d4cf58 + 0x1c);
                        local_6c = (byte ********)*(byte ********)(DAT_01d4cf58 + 0x20);
                        local_30 = (byte ********)(DAT_01d4cf58 + 0x1c);
                        FUN_01aaa328(iVar8,pcVar22,puVar26[4],&local_b8,&local_38);
                      }
                    }
                  }
                  local_70 = local_d0;
                  local_6c = local_cc;
                  local_68 = local_c8;
                  local_64 = ppppppppbStack_c4;
                  local_60 = local_c0;
                  unaff_r8 = (byte ********)&local_b8;
                  FUN_012e3608(unaff_r8,param_1 + 7,&local_70);
                  if (local_b8 != (byte ********)0x2) goto LAB_012f1b14;
                }
              }
              FUN_012f21c4(&local_110);
              FUN_019bb7e0(ppppppppbVar20,unaff_r9);
            } while( true );
          }
          puVar7 = (undefined4 *)FUN_01be3244();
          local_10c = (byte ********)*puVar7;
          local_110 = (byte ********)0x0;
          ppppppppbVar29 = (byte ********)FUN_012ecc28(&local_110);
          goto LAB_012efeb0;
        }
        ppppppppbVar20 = ppppppppbVar11;
      }
      else {
        FUN_01650a90(pbVar28);
        ppppppppbVar21 = ppppppppbVar29;
        if (*pbVar28 == 1) {
          DataMemoryBarrier(0xb);
          do {
            bVar3 = (bool)hasExclusiveAccess(pbVar28);
            if (bVar3) {
              *pbVar28 = 0;
              goto LAB_012ef6a0;
            }
          } while (*pbVar28 == 1);
        }
        ClearExclusiveLocal();
        FUN_0164f86c(pbVar28);
LAB_012ef6a0:
        ppppppppbVar29 = ppppppppbVar21;
        if (((uint)ppppppppbVar20 & 0xff) == 4) {
          unaff_r8 = ppppppppbVar29;
          goto LAB_012ef6b0;
        }
        FUN_014397e4(iVar9,ppppppppbVar11);
      }
      FUN_01bf01d6(iVar8);
    }
  }
  local_110 = ppppppppbVar20;
  local_10c = ppppppppbVar29;
  ppppppppbVar29 = (byte ********)FUN_012ecc28(&local_110);
  goto LAB_012ef9f8;
LAB_012f1b14:
  local_70 = local_b8;
  local_6c = local_b4;
  local_68 = local_b0;
  local_64 = local_ac;
  local_60 = ppppppppbStack_a8;
  local_5c = ppppppppbStack_a4;
  local_44 = (byte ********)&LAB_012edb80;
  local_48 = (byte ********)&local_70;
  FUN_00664898(&local_120,&DAT_005b3bf2,&local_48);
  local_38 = local_120;
  local_34 = local_11c;
  local_30 = local_118;
  ppppppppbVar29 = (byte ********)FUN_006679ac();
  FUN_019bb7e0(local_68,local_64);
  FUN_012f21c4(&local_110);
LAB_012f1bf4:
  FUN_019bb7e0(ppppppppbVar20,unaff_r9);
LAB_012efeb0:
  FUN_012e12ac(param_1 + 0xc);
LAB_012ef9f8:
  FUN_012e1310(param_1 + 7);
  FUN_005faf6c(param_1 + 6);
  iVar8 = 0;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined1 *)((int)param_1 + 0x82) = 0;
  unaff_r9 = ppppppppbVar29;
LAB_012efa18:
  local_1bc = param_1 + 3;
  uVar27 = 3;
  if (iVar8 == 0) {
    FUN_012ee848(local_1bc);
    if (unaff_r9 != (byte ********)0x0) {
      local_48 = unaff_r9;
      FUN_01a3b7c0(param_1[2]);
      if ((DAT_01d50f88 < 5) &&
         (((DAT_01d4cf3c - 1 < 2 ||
           ((DAT_01d4cf3c != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4cf34), cVar5 != '\0')))) &&
          (iVar9 = FUN_01aaa278(DAT_01d4cf34), iVar9 != 0)))) {
        if (*(byte *********)(DAT_01d4cf34 + 0x20) == (byte ********)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce4174);
        }
        local_b4 = (byte ********)&local_38;
        local_108 = *(byte *********)(DAT_01d4cf34 + 0x24);
        local_104 = *(byte *********)(DAT_01d4cf34 + 0x28);
        local_c8 = (byte ********)(DAT_01d4cf34 + 0x1c);
        local_110 = (byte ********)*local_c8;
        local_b8 = (byte ********)&local_110;
        local_d0 = (byte ********)&local_b8;
        local_100 = (byte ********)0x0;
        local_cc = (byte ********)&DAT_00000001;
        local_34 = (byte ********)&local_120;
        local_120 = (byte ********)&local_48;
        local_b0 = (byte ********)&DAT_01d2ea4c;
        local_38 = (byte ********)&DAT_0059daea;
        local_11c = (byte ********)FUN_00667a08;
        local_10c = *(byte *********)(DAT_01d4cf34 + 0x20);
        FUN_01aaaecc(DAT_01d4cf34,&local_d0);
        iVar9 = DAT_01d4cf34;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_6c = *(byte *********)(DAT_01d4cf34 + 0x14);
          local_68 = *(byte *********)(DAT_01d4cf34 + 0x18);
          local_70 = (byte ********)&DAT_00000001;
          DataMemoryBarrier(0xb);
          puVar7 = DAT_01d4edc8;
          pcVar22 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar7 = &DAT_01cfc5e0;
            pcVar22 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar10 = (*(code *)puVar7[3])(pcVar22,&local_70);
          if (iVar10 != 0) {
            FUN_01aaa328(iVar9,pcVar22,puVar7[4],&local_70,&local_d0);
          }
        }
      }
      else {
        iVar9 = DAT_01d4cf34;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_168 = *(undefined4 *)(DAT_01d4cf34 + 0x14);
          local_164 = *(undefined4 *)(DAT_01d4cf34 + 0x18);
          local_16c = 1;
          DataMemoryBarrier(0xb);
          puVar7 = DAT_01d4edc8;
          pcVar22 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar7 = &DAT_01cfc5e0;
            pcVar22 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar10 = (*(code *)puVar7[3])(pcVar22,&local_16c);
          if (iVar10 != 0) {
            if (*(byte *********)(DAT_01d4cf34 + 0x20) == (byte ********)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce4174);
            }
            local_6c = (byte ********)&local_120;
            local_108 = *(byte *********)(DAT_01d4cf34 + 0x24);
            local_104 = *(byte *********)(DAT_01d4cf34 + 0x28);
            local_70 = (byte ********)&local_110;
            local_b8 = (byte ********)&local_70;
            local_b4 = (byte ********)&DAT_00000001;
            local_11c = (byte ********)&local_d0;
            local_100 = (byte ********)0x0;
            local_d0 = (byte ********)&local_48;
            local_68 = (byte ********)&DAT_01d2ea4c;
            local_120 = (byte ********)&DAT_0059daea;
            local_cc = (byte ********)FUN_00667a08;
            local_110 = *(byte *********)(DAT_01d4cf34 + 0x1c);
            local_10c = *(byte *********)(DAT_01d4cf34 + 0x20);
            local_b0 = (byte ********)(DAT_01d4cf34 + 0x1c);
            FUN_01aaa328(iVar9,pcVar22,puVar7[4],&local_16c,&local_b8);
          }
        }
      }
      (*(code *)**local_48)();
    }
    uVar27 = 1;
    FUN_005faf6c(param_1 + 2);
  }
  *(undefined1 *)(param_1 + 0x21) = uVar27;
  return iVar8;
}

