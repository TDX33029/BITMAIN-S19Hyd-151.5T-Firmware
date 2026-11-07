// FUN_01a72290 @ 01a72290 size=3328 calls_out=25 calls_in=23
// strings: grpc-status | grpc-status | grpc-message | grpc-message | grpc-message | grpc-message

void FUN_01a72290(undefined4 *param_1,int *param_2)

{
  ushort uVar1;
  undefined4 *******pppppppuVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *******pppppppuVar9;
  int iVar10;
  char *pcVar11;
  undefined4 *******pppppppuVar12;
  undefined4 *puVar13;
  bool bVar14;
  undefined8 uVar15;
  int local_238;
  int local_234;
  undefined4 *******local_230;
  undefined4 *******local_21c;
  undefined4 *******local_210;
  undefined4 *******local_20c;
  undefined4 *******local_200;
  undefined4 *******local_1fc;
  undefined1 auStack_1f8 [72];
  undefined4 local_1b0;
  undefined4 *******local_1a8;
  undefined4 *******local_1a4;
  undefined4 *******local_1a0;
  char local_19c;
  undefined4 *******local_198;
  undefined4 *******local_194;
  undefined4 *******local_190;
  int local_18c;
  int local_188;
  undefined4 *local_184;
  undefined8 local_180;
  undefined4 *******local_178;
  undefined4 *******pppppppuStack_174;
  undefined4 *puStack_170;
  undefined4 *******pppppppuStack_16c;
  undefined4 *******pppppppuStack_168;
  undefined4 *******pppppppuStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_148;
  undefined4 *******local_140;
  undefined4 *******local_13c;
  undefined4 *******local_138;
  char local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 auStack_124 [12];
  undefined4 *******local_118;
  undefined4 local_114;
  undefined4 *local_110;
  undefined4 local_10c;
  undefined4 *******local_108;
  undefined4 *******local_104;
  undefined4 *******local_100;
  int iStack_fc;
  int local_f8;
  undefined4 *local_f4;
  undefined8 local_f0;
  undefined4 *******pppppppuStack_e8;
  undefined4 *******pppppppuStack_e4;
  undefined4 *local_e0;
  undefined4 *******pppppppuStack_dc;
  undefined4 *******pppppppuStack_d8;
  undefined4 *******pppppppuStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined4 *******local_c8;
  undefined4 *******local_c4;
  undefined4 *******local_c0;
  undefined4 *******local_bc;
  undefined4 *******local_b8;
  undefined4 *******local_b4;
  undefined4 local_b0;
  undefined4 *local_ac;
  undefined4 *******local_a8;
  undefined4 *******local_a4;
  undefined4 *local_a0;
  undefined4 *******local_9c;
  undefined4 *******local_98;
  undefined4 *local_94;
  undefined4 *******pppppppuStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 *puStack_84;
  undefined8 local_80;
  undefined4 *******pppppppuStack_78;
  undefined4 *******pppppppuStack_74;
  undefined4 *puStack_70;
  undefined4 *******pppppppuStack_6c;
  undefined4 *******pppppppuStack_68;
  undefined4 *******pppppppuStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 *******local_58;
  undefined4 uStack_54;
  undefined4 *puStack_50;
  undefined4 uStack_4c;
  undefined4 *******local_48;
  undefined4 *******local_44;
  undefined4 *local_40;
  undefined4 uStack_3c;
  undefined4 *******local_38;
  undefined4 *******local_34;
  undefined4 *local_30;
  
  if ((short)param_2[0x36] != 1) goto LAB_01a72e88;
  iVar10 = *param_2;
  uVar1 = *(ushort *)((int)param_2 + 0xda);
  uVar4 = (uint)uVar1;
  local_80 = CONCAT44(local_80._4_4_,(undefined4)local_80);
  if (iVar10 == 3 && param_2[1] == 0) {
LAB_01a72a48:
    if (DAT_01d50f88 == 0) {
      if (1 < DAT_01d50978 - 1) {
        if (DAT_01d50978 != 0) {
          cVar3 = FUN_01aaafa8(&DAT_01d50970);
          if (cVar3 != '\0') goto LAB_01a72ba0;
        }
        goto LAB_01a72a5c;
      }
LAB_01a72ba0:
      iVar10 = FUN_01aaa278(DAT_01d50970);
      if (iVar10 == 0) goto LAB_01a72a5c;
      if (*(int *)(DAT_01d50970 + 0x20) == 0) goto LAB_01a72f7c;
      local_44 = &local_38;
      local_190 = *(undefined4 ********)(DAT_01d50970 + 0x24);
      local_18c = *(int *)(DAT_01d50970 + 0x28);
      local_110 = (undefined4 *)(DAT_01d50970 + 0x1c);
      local_198 = (undefined4 *******)*local_110;
      local_48 = &local_198;
      local_118 = &local_48;
      local_188 = 0;
      local_114 = 1;
      local_34 = (undefined4 *******)&DAT_00000039;
      local_40 = (undefined4 *)&DAT_01d2ea4c;
      local_38 = (undefined4 *******)0x52e950;
      local_194 = (undefined4 *******)*(int *)(DAT_01d50970 + 0x20);
      FUN_01aaaecc(DAT_01d50970,&local_118);
      iVar10 = DAT_01d50970;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_104 = *(undefined4 ********)(DAT_01d50970 + 0x14);
        local_100 = *(undefined4 ********)(DAT_01d50970 + 0x18);
        local_108 = (undefined4 *******)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar13 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar13 = &DAT_01cfc5e0;
        }
        pcVar11 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar11 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar5 = (*(code *)puVar13[3])(pcVar11,&local_108);
        if (iVar5 != 0) {
          FUN_01aaa328(iVar10,pcVar11,puVar13[4],&local_108,&local_118);
        }
      }
    }
    else {
LAB_01a72a5c:
      iVar10 = DAT_01d50970;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_12c = *(undefined4 *)(DAT_01d50970 + 0x14);
        local_128 = *(undefined4 *)(DAT_01d50970 + 0x18);
        local_130 = 5;
        DataMemoryBarrier(0xb);
        puVar13 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar13 = &DAT_01cfc5e0;
        }
        pcVar11 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar11 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar5 = (*(code *)puVar13[3])(pcVar11,&local_130);
        if (iVar5 != 0) {
          if (*(int *)(DAT_01d50970 + 0x20) == 0) {
LAB_01a72f7c:
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2d3a8);
          }
          local_104 = &local_118;
          local_190 = *(undefined4 ********)(DAT_01d50970 + 0x24);
          local_18c = *(int *)(DAT_01d50970 + 0x28);
          local_108 = &local_198;
          local_48 = &local_108;
          local_44 = (undefined4 *******)&DAT_00000001;
          local_100 = (undefined4 *******)&DAT_01d2ea4c;
          local_114 = 0x39;
          local_188 = 0;
          local_118 = (undefined4 *******)0x52e950;
          local_198 = (undefined4 *******)*(undefined4 *******)(DAT_01d50970 + 0x1c);
          local_194 = (undefined4 *******)*(int *)(DAT_01d50970 + 0x20);
          local_40 = (undefined4 *)(DAT_01d50970 + 0x1c);
          FUN_01aaa328(iVar10,pcVar11,puVar13[4],&local_130,&local_48);
        }
      }
    }
    uVar8 = 2;
    if (uVar4 < 0x1ad) {
      switch(uVar4) {
      case 400:
        uVar8 = 0xd;
        break;
      case 0x191:
        uVar8 = 0x10;
        break;
      case 0x192:
        break;
      case 0x193:
        uVar8 = 7;
        break;
      case 0x194:
        uVar8 = 0xc;
        break;
      default:
        if (uVar4 == 200) goto LAB_01a72e88;
      }
    }
    else if (uVar4 - 0x1f6 < 3) {
      uVar8 = 0xe;
    }
    else if (uVar4 == 0x1ad) {
      uVar8 = 0xe;
    }
    local_108 = (undefined4 *******)CONCAT22(local_108._2_2_,uVar1);
    local_194 = (undefined4 *******)FUN_012fcf18;
    local_198 = &local_108;
    FUN_00664898(auStack_124,&DAT_00598b29,&local_198);
    FUN_01a70fd4(&local_200,uVar8,auStack_124);
    pppppppuVar9 = local_1fc;
    pppppppuVar12 = local_200;
  }
  else {
    local_198 = (undefined4 *******)&DAT_01d2d23c;
    local_190 = (undefined4 *******)&DAT_0000000b;
    local_18c = 0;
    local_194 = (undefined4 *******)"grpc-status";
    iVar5 = FUN_0160ab20(param_2);
    local_80 = CONCAT44(local_80._4_4_,(undefined4)local_80);
    if (iVar5 == 0) goto LAB_01a72a48;
    pbVar6 = *(byte **)(iVar5 + 4);
    uVar7 = *(uint *)(iVar5 + 8);
    if (uVar7 == 1) {
      cVar3 = *pbVar6 - 0x30;
      if (9 < (byte)(*pbVar6 - 0x30)) goto LAB_01a72340;
    }
    else {
      bVar14 = uVar7 == 2;
      if (bVar14) {
        uVar7 = (uint)*pbVar6;
      }
      if ((!(bVar14 && uVar7 == 0x31)) || (6 < (byte)(pbVar6[1] - 0x30))) {
LAB_01a72340:
        FUN_01a734ac();
        cVar3 = '\x02';
      }
      else {
        cVar3 = pbVar6[1] - 0x26;
      }
    }
    local_198 = (undefined4 *******)&DAT_01d2d23c;
    local_190 = (undefined4 *******)&DAT_0000000c;
    local_18c = 0;
    local_194 = (undefined4 *******)"grpc-message";
    iVar5 = FUN_0160ab20(param_2);
    if (iVar5 == 0) {
      local_210 = (undefined4 *******)0x0;
      local_20c = (undefined4 *******)&DAT_00000001;
      bVar14 = false;
      local_21c = (undefined4 *******)0x0;
    }
    else {
      FUN_01655afc(&local_198,*(int *)(iVar5 + 4),*(int *)(iVar5 + 4) + *(int *)(iVar5 + 8));
      local_210 = local_190;
      pppppppuVar2 = local_194;
      pppppppuVar12 = local_198;
      if (local_198 == (undefined4 *******)0x80000001) {
        local_21c = (undefined4 *******)&DAT_80000000;
        local_20c = local_194;
      }
      else {
        uVar8 = 0;
        if ((int)local_190 < 0) {
LAB_01a723dc:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar8,local_210);
        }
        if (local_190 == (undefined4 *******)0x0) {
          local_20c = (undefined4 *******)&DAT_00000001;
          local_21c = (undefined4 *******)0x0;
        }
        else {
          uVar8 = 1;
          local_20c = (undefined4 *******)FUN_01298504(local_190,1);
          if (local_20c == (undefined4 *******)0x0) goto LAB_01a723dc;
          local_21c = local_210;
        }
        FUN_01bed4e2(local_20c,pppppppuVar2);
        if (pppppppuVar12 != (undefined4 *******)0x80000000) {
          FUN_019bb7e0(pppppppuVar12,pppppppuVar2);
        }
      }
      bVar14 = pppppppuVar12 == (undefined4 *******)0x80000001;
    }
    puVar13 = &DAT_01d2d478;
    local_198 = (undefined4 *******)&DAT_01d2d23c;
    local_190 = (undefined4 *******)&DAT_00000017;
    local_18c = 0;
    local_194 = (undefined4 *******)
                "grpc-status-details-binevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/status.rs:471error_message"
    ;
    iVar5 = FUN_0160ab20(param_2);
    if (iVar5 == 0) {
      local_10c = 0;
      local_110 = (undefined4 *)0x0;
      local_114 = 1;
      local_118 = (undefined4 *******)&DAT_01d2d23c;
    }
    else {
      FUN_01a7ec50(&local_198,&DAT_0052e2e9,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
      if (local_198 == (undefined4 *******)&DAT_80000000) {
        local_104 = local_190;
        local_108 = local_194;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("Invalid status header, expected base64 encoded valueInvalidByteInvalidLengthInvalidLastSymbolInvalidPaddingReadHeader"
                     ,0x34,&local_108,&DAT_01d2d20c,&DAT_01d2d50c);
      }
      local_108 = local_198;
      local_104 = local_194;
      local_100 = local_190;
      FUN_01283524(&local_118);
    }
    iVar5 = param_2[0xe];
    uVar15 = FUN_01ac635c(param_2[6],param_2[7]);
    FUN_0187b658(&local_48,param_2[9],param_2[10]);
    FUN_017260a4(&local_108,param_2[0xc],param_2[0xd]);
    if (iVar10 == 0) {
      local_198 = (undefined4 *******)0x0;
    }
    else if (iVar10 == 1) {
      local_198 = (undefined4 *******)&DAT_00000001;
    }
    else {
      local_198 = (undefined4 *******)0x2;
      local_230 = (undefined4 *******)param_2[2];
      puVar13 = (undefined4 *)param_2[5];
      local_234 = param_2[3];
      local_238 = param_2[4];
    }
    local_160 = CONCAT22(local_160._2_2_,(short)iVar5);
    local_178 = local_48;
    pppppppuStack_174 = local_44;
    puStack_170 = local_40;
    pppppppuStack_16c = local_108;
    pppppppuStack_168 = local_104;
    pppppppuStack_164 = local_100;
    local_190 = local_230;
    local_18c = local_234;
    local_188 = local_238;
    local_194 = (undefined4 *******)0x0;
    local_48 = (undefined4 *******)&DAT_01d2d23c;
    local_40 = (undefined4 *)0xb;
    uStack_3c = 0;
    local_184 = puVar13;
    local_44 = (undefined4 *******)"grpc-status";
    local_180 = uVar15;
    FUN_0141dc00(&local_108,&local_198,&local_48);
    if ((char)local_f8 != '\x02') {
      (*(code *)local_108[4])(&iStack_fc,local_104,local_100);
    }
    local_48 = (undefined4 *******)&DAT_01d2d23c;
    local_40 = (undefined4 *)0xc;
    uStack_3c = 0;
    local_44 = (undefined4 *******)"grpc-message";
    FUN_0141dc00(&local_108,&local_198,&local_48);
    if ((char)local_f8 != '\x02') {
      (*(code *)local_108[4])(&iStack_fc,local_104,local_100);
    }
    local_48 = (undefined4 *******)&DAT_01d2d23c;
    local_40 = (undefined4 *)&DAT_00000017;
    uStack_3c = 0;
    local_44 = (undefined4 *******)
               "grpc-status-details-binevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/status.rs:471error_message"
    ;
    FUN_0141dc00(&local_108,&local_198,&local_48);
    if ((char)local_f8 != '\x02') {
      (*(code *)local_108[4])(&iStack_fc,local_104,local_100);
    }
    local_108 = local_198;
    local_104 = local_194;
    local_100 = local_190;
    iStack_fc = local_18c;
    local_f8 = local_188;
    local_f4 = local_184;
    pppppppuStack_e8 = local_178;
    pppppppuStack_e4 = pppppppuStack_174;
    local_e0 = puStack_170;
    pppppppuStack_dc = pppppppuStack_16c;
    pppppppuStack_d8 = pppppppuStack_168;
    pppppppuStack_d4 = pppppppuStack_164;
    iStack_d0 = local_160;
    iStack_cc = uStack_15c;
    local_f0 = local_180;
    if (bVar14) {
      local_44 = (undefined4 *******)FUN_01309a64;
      local_48 = &local_c8;
      local_c4 = local_210;
      local_c8 = local_20c;
      FUN_00664898(&local_198,&DAT_0059b714,&local_48);
      local_c0 = local_198;
      local_bc = local_194;
      local_b8 = local_190;
      if (DAT_01d50f88 < 4) {
        if (1 < DAT_01d5099c - 1) {
          if (DAT_01d5099c != 0) {
            cVar3 = FUN_01aaafa8(&DAT_01d50994);
            if (cVar3 != '\0') goto LAB_01a72768;
          }
          goto LAB_01a728b8;
        }
LAB_01a72768:
        iVar10 = FUN_01aaa278(DAT_01d50994);
        if (iVar10 == 0) goto LAB_01a728b8;
        if (*(undefined4 ********)(DAT_01d50994 + 0x20) == (undefined4 *******)0x0)
        goto LAB_01a72f94;
        local_190 = *(undefined4 ********)(DAT_01d50994 + 0x24);
        local_18c = *(int *)(DAT_01d50994 + 0x28);
        local_ac = (undefined4 *)(DAT_01d50994 + 0x1c);
        local_198 = (undefined4 *******)*local_ac;
        local_b4 = &local_9c;
        local_188 = 0;
        local_b0 = 1;
        local_94 = (undefined4 *)&DAT_01d2d52c;
        local_194 = *(undefined4 ********)(DAT_01d50994 + 0x20);
        local_9c = &local_198;
        local_98 = &local_c0;
        FUN_01aaaecc(DAT_01d50994,&local_b4);
        iVar10 = DAT_01d50994;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_34 = *(undefined4 ********)(DAT_01d50994 + 0x14);
          local_30 = *(undefined4 **)(DAT_01d50994 + 0x18);
          local_38 = (undefined4 *******)0x2;
          DataMemoryBarrier(0xb);
          puVar13 = DAT_01d4edc8;
          pcVar11 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar13 = &DAT_01cfc5e0;
            pcVar11 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar5 = (*(code *)puVar13[3])(pcVar11,&local_38);
          if (iVar5 != 0) {
            local_48 = local_38;
            local_44 = local_34;
            local_40 = local_30;
            FUN_01aaa328(iVar10,pcVar11,puVar13[4],&local_48,&local_b4);
          }
        }
      }
      else {
LAB_01a728b8:
        iVar10 = DAT_01d50994;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_a4 = *(undefined4 ********)(DAT_01d50994 + 0x14);
          local_a0 = *(undefined4 **)(DAT_01d50994 + 0x18);
          local_a8 = (undefined4 *******)0x2;
          DataMemoryBarrier(0xb);
          puVar13 = DAT_01d4edc8;
          pcVar11 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar13 = &DAT_01cfc5e0;
            pcVar11 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar5 = (*(code *)puVar13[3])(pcVar11,&local_a8);
          if (iVar5 != 0) {
            local_94 = (undefined4 *)(DAT_01d50994 + 0x1c);
            if (*(undefined4 ********)(DAT_01d50994 + 0x20) == (undefined4 *******)0x0) {
LAB_01a72f94:
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2d51c);
            }
            local_190 = *(undefined4 ********)(DAT_01d50994 + 0x24);
            local_18c = *(int *)(DAT_01d50994 + 0x28);
            local_9c = &local_38;
            local_188 = 0;
            local_98 = (undefined4 *******)&DAT_00000001;
            local_30 = (undefined4 *)&DAT_01d2d52c;
            local_48 = local_a8;
            local_44 = local_a4;
            local_40 = local_a0;
            local_198 = (undefined4 *******)*local_94;
            local_194 = *(undefined4 ********)(DAT_01d50994 + 0x20);
            local_38 = &local_198;
            local_34 = &local_c0;
            FUN_01aaa328(iVar10,pcVar11,puVar13[4],&local_48,&local_9c);
          }
        }
      }
      local_21c = local_c0;
      local_20c = local_bc;
      local_210 = local_b8;
      cVar3 = '\x02';
    }
    pppppppuVar2 = local_104;
    pppppppuVar12 = local_108;
    local_58 = local_118;
    uStack_54 = local_114;
    puStack_50 = local_110;
    uStack_4c = local_10c;
    pppppppuStack_90 = local_100;
    iStack_8c = iStack_fc;
    iStack_88 = local_f8;
    puStack_84 = local_f4;
    pppppppuStack_78 = pppppppuStack_e8;
    pppppppuStack_74 = pppppppuStack_e4;
    puStack_70 = local_e0;
    pppppppuStack_6c = pppppppuStack_dc;
    pppppppuStack_68 = pppppppuStack_d8;
    pppppppuStack_64 = pppppppuStack_d4;
    uStack_60 = iStack_d0;
    uStack_5c = iStack_cc;
    local_80 = local_f0;
    if (local_108 == (undefined4 *******)&DAT_00000003 && local_104 == (undefined4 *******)0x0)
    goto LAB_01a72a48;
    local_198 = local_108;
    local_194 = local_104;
    FUN_01bed4e2(&local_190,&pppppppuStack_90,0x48);
    pppppppuVar9 = (undefined4 *******)0x0;
    local_138 = local_210;
    local_13c = local_20c;
    local_140 = local_21c;
    local_148 = 0;
    local_134 = cVar3;
    if (cVar3 == '\0') {
      pppppppuVar12 = (undefined4 *******)&SUB_00000004;
      local_1fc = (undefined4 *******)0x0;
      local_200 = (undefined4 *******)&SUB_00000004;
      FUN_01a70c28(&local_198);
    }
    else {
      local_200 = pppppppuVar12;
      local_1fc = pppppppuVar2;
      FUN_01bed4e2(auStack_1f8,&pppppppuStack_90,0x48);
      local_1b0 = 0;
      local_1a0 = local_210;
      local_1a4 = local_20c;
      local_1a8 = local_21c;
      pppppppuVar9 = pppppppuVar2;
      local_19c = cVar3;
    }
  }
  if (pppppppuVar9 != (undefined4 *******)(uint)(pppppppuVar12 < &DAT_00000003) ||
      (uint)((int)pppppppuVar9 - (int)(uint)(pppppppuVar12 < &DAT_00000003)) <
      (uint)((undefined1 *)0x1 < (undefined1 *)((int)pppppppuVar12 + -3))) {
    FUN_01bed4e2(&local_198,&local_200,0x68);
    local_108 = (undefined4 *******)*param_2;
    local_104 = (undefined4 *******)param_2[1];
    local_100 = (undefined4 *******)param_2[2];
    iStack_fc = param_2[3];
    local_f8 = param_2[4];
    local_f4 = (undefined4 *)param_2[5];
    local_f0._0_4_ = param_2[6];
    local_f0._4_4_ = param_2[7];
    pppppppuStack_e8 = (undefined4 *******)param_2[8];
    pppppppuStack_e4 = (undefined4 *******)param_2[9];
    local_e0 = (undefined4 *)param_2[10];
    pppppppuStack_dc = (undefined4 *******)param_2[0xb];
    pppppppuStack_d8 = (undefined4 *******)param_2[0xc];
    pppppppuStack_d4 = (undefined4 *******)param_2[0xd];
    iStack_d0 = param_2[0xe];
    iStack_cc = param_2[0xf];
    *param_2 = 3;
    param_2[1] = 0;
    if (local_108 != (undefined4 *******)0x3 || local_104 != (undefined4 *******)0x0) {
      FUN_017793c0(&local_108);
    }
    FUN_01bed4e2(param_1,&local_200,0x68);
    return;
  }
LAB_01a72e88:
  *param_1 = 3;
  param_1[1] = 0;
  return;
}

