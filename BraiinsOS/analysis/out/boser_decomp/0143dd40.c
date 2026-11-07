// FUN_0143dd40 @ 0143dd40 size=4624 calls_out=21 calls_in=5
// strings: tcp open error | tcp set_nonblocking error | tcp bind local error | tcp bind interface error | tcp set_nonblocking error | hyper_util::client::legacy::connect::http/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs

void FUN_0143dd40(undefined4 *param_1,short *param_2,int *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  short sVar2;
  longlong lVar3;
  undefined4 ******ppppppuVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  uint uVar19;
  undefined1 *puVar20;
  int local_178;
  undefined4 *******local_160;
  undefined4 ******local_15c;
  undefined1 *local_158;
  undefined4 *******local_150;
  undefined4 ******local_14c;
  undefined1 *local_148;
  undefined4 *******local_140;
  undefined4 ******local_13c;
  undefined1 *local_138;
  undefined4 ******local_130;
  int local_12c;
  undefined4 *******local_128;
  undefined4 ******local_124;
  undefined1 *local_120;
  undefined4 *******local_11c;
  code *local_118;
  uint *local_114;
  undefined4 ******local_110;
  int local_10c;
  undefined4 ******local_108;
  undefined4 ******local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 *******local_f4;
  undefined4 ******local_f0;
  uint *local_ec;
  undefined4 ******local_e8;
  undefined4 *******local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 *******local_b8;
  undefined4 ******local_b4;
  undefined1 *local_b0;
  undefined4 *******local_a8;
  undefined4 ******local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 auStack_90 [104];
  undefined4 local_28;
  
  sVar2 = *param_2;
  uVar8 = 2;
  if (sVar2 != 0) {
    uVar8 = 10;
  }
  FUN_01979d08(&local_b8,uVar8,1,6);
  ppppppuVar4 = local_b4;
  if ((char)local_b8 != '\x04') {
    local_a8 = local_b8;
    local_a4 = local_b4;
    uVar8 = FUN_0142322c(&local_a8);
    param_1[9] = "tcp open error";
    param_1[10] = 0xe;
    param_1[0xb] = uVar8;
    param_1[0xc] = &DAT_01cf48ac;
    *(undefined2 *)(param_1 + 1) = 2;
    *param_1 = 1;
    return;
  }
  FUN_01979ca0(&local_b8,local_b4);
  if ((char)local_b8 != '\x04') {
    local_a4 = local_b4;
    local_a8 = local_b8;
    uVar8 = FUN_0142322c(&local_a8);
    uVar12 = 0x19;
    pcVar9 = "tcp set_nonblocking error";
    goto LAB_0143e080;
  }
  iVar13 = *param_3;
  puVar20 = (undefined1 *)param_3[4];
  puVar18 = (undefined1 *)param_3[8];
  uVar19 = param_3[6];
  iVar10 = param_3[7];
  uVar11 = param_3[2];
  iVar15 = param_3[3];
  if (iVar13 == 1) {
    local_178 = param_3[1];
LAB_0143ddec:
    FUN_01979dd0(&local_a8,ppppppuVar4,1,9,1);
    if (((char)local_a8 == '\x04') || (uVar6 = (uint)local_a8 & 0xff, uVar6 == 4)) {
      if (puVar20 != &DAT_3b9aca00) {
        if (0x7ffffffe < uVar11) {
          uVar11 = 0x7fffffff;
        }
        if (iVar15 != 0) {
          uVar11 = 0x7fffffff;
        }
        FUN_01979dd0(&local_a8,ppppppuVar4,6,4,uVar11);
        if (((char)local_a8 != '\x04') && (uVar6 = (uint)local_a8 & 0xff, uVar6 != 4))
        goto LAB_0143df18;
      }
      if (puVar18 != &DAT_3b9aca00) {
        if (0x7ffffffe < uVar19) {
          uVar19 = 0x7fffffff;
        }
        if (iVar10 != 0) {
          uVar19 = 0x7fffffff;
        }
        FUN_01979dd0(&local_a8,ppppppuVar4,6,5,uVar19);
        if (((char)local_a8 != '\x04') && (uVar6 = (uint)local_a8 & 0xff, uVar6 != 4))
        goto LAB_0143df18;
      }
      if (iVar13 != 0) {
        FUN_01979dd0(&local_a8,ppppppuVar4,6,6,local_178);
        if (((char)local_a8 != '\x04') && (uVar6 = (uint)local_a8 & 0xff, uVar6 != 4))
        goto LAB_0143df18;
      }
    }
    else {
LAB_0143df18:
      local_110 = (undefined4 ******)(uVar6 | (uint)local_a8 & 0xffffff00);
      local_10c = (int)local_a4;
      if ((DAT_01d50f88 < 4) &&
         (((DAT_01d4eb10 - 1 < 2 ||
           ((DAT_01d4eb10 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4eb08), cVar5 != '\0')))) &&
          (iVar10 = FUN_01aaa278(DAT_01d4eb08), iVar10 != 0)))) {
        local_ec = (uint *)(DAT_01d4eb08 + 0x1c);
        local_a8 = (undefined4 *******)*local_ec;
        local_a4 = *(undefined4 *******)(DAT_01d4eb08 + 0x20);
        if (local_a4 == (undefined4 ******)0x0) {
LAB_0143eed8:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf82bc);
        }
        local_a0 = *(undefined4 *)(DAT_01d4eb08 + 0x24);
        local_b4 = &local_e8;
        local_9c = *(undefined4 *)(DAT_01d4eb08 + 0x28);
        local_b8 = &local_a8;
        local_f0 = (undefined4 ******)&DAT_00000001;
        local_e4 = &local_11c;
        local_f4 = &local_b8;
        local_11c = &local_110;
        local_98 = 0;
        local_b0 = &DAT_01d2ea4c;
        local_e8 = (undefined4 ******)&DAT_0057e920;
        local_118 = FUN_019a7d7c;
        FUN_0143f23c(&local_f4);
      }
      else {
        iVar10 = DAT_01d4eb08;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_15c = *(undefined4 *******)(DAT_01d4eb08 + 0x14);
          local_158 = *(undefined1 **)(DAT_01d4eb08 + 0x18);
          local_160 = (undefined4 *******)0x2;
          DataMemoryBarrier(0xb);
          puVar17 = DAT_01d4edc8;
          pcVar9 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar17 = &DAT_01cfc5e0;
            pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar13 = (*(code *)puVar17[3])(pcVar9,&local_160);
          if (iVar13 != 0) {
            local_114 = (uint *)(DAT_01d4eb08 + 0x1c);
            local_a8 = (undefined4 *******)*local_114;
            local_a4 = *(undefined4 *******)(DAT_01d4eb08 + 0x20);
            if (local_a4 == (undefined4 ******)0x0) goto LAB_0143eed8;
            local_f0 = &local_108;
            local_a0 = *(undefined4 *)(DAT_01d4eb08 + 0x24);
            local_9c = *(undefined4 *)(DAT_01d4eb08 + 0x28);
            local_f4 = &local_a8;
            local_11c = &local_f4;
            local_118 = (code *)0x1;
            local_104 = &local_e8;
            local_e8 = &local_110;
            local_98 = 0;
            local_ec = (uint *)&DAT_01d2ea4c;
            local_108 = (undefined4 ******)&DAT_0057e920;
            local_e4 = (undefined4 *******)FUN_019a7d7c;
            local_b8 = local_160;
            local_b4 = local_15c;
            local_b0 = local_158;
            FUN_01aaa328(iVar10,pcVar9,puVar17[4],&local_b8,&local_11c);
          }
        }
      }
      FUN_0143f1c4((uint)local_110 & 0xff,local_10c);
    }
  }
  else if ((puVar20 != &DAT_3b9aca00) || (puVar18 != &DAT_3b9aca00)) goto LAB_0143ddec;
  if ((param_3[0x1a] != -0x80000000) &&
     (iVar10 = FUN_01be9b78(ppppppuVar4,1,0x19,param_3[0x1b],param_3[0x1c]), iVar10 == -1)) {
    piVar7 = (int *)FUN_01be3244();
    local_a4 = (undefined4 ******)*piVar7;
    local_a8 = (undefined4 *******)0x0;
    uVar8 = FUN_0142322c(&local_a8);
    uVar12 = 0x18;
    pcVar9 = "tcp bind interface error";
    goto LAB_0143e080;
  }
  if ((undefined1 *)param_3[0x18] != &DAT_3b9aca00) {
    uVar6 = (uint)((ulonglong)(uint)param_3[0x16] * 1000);
    lVar3 = (ulonglong)(uint)param_3[0x17] * 1000 + ((ulonglong)(uint)param_3[0x16] * 1000 >> 0x20);
    uVar16 = (uint)lVar3;
    uVar19 = (uint)((ulonglong)lVar3 >> 0x20);
    uVar11 = (uint)param_3[0x18] / 1000000;
    local_a8 = (undefined4 *******)(uVar6 + uVar11);
    bVar1 = CARRY4(uVar16,(uint)CARRY4(uVar6,uVar11));
    if (uVar16 + CARRY4(uVar6,uVar11) != 0) {
      local_a8 = (undefined4 *******)0xffffffff;
    }
    if (uVar19 + bVar1 != 0 || CARRY4(uVar19,(uint)bVar1)) {
      local_a8 = (undefined4 *******)0xffffffff;
    }
    iVar10 = FUN_01be9b78(ppppppuVar4,6,0x12,&local_a8,4);
    if (iVar10 == -1) {
      piVar7 = (int *)FUN_01be3244();
      local_10c = *piVar7;
      local_110 = (undefined4 ******)0x0;
      if (((DAT_01d50f88 < 4) &&
          ((DAT_01d4eb1c - 1 < 2 ||
           ((DAT_01d4eb1c != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4eb14), cVar5 != '\0')))))) &&
         (iVar10 = FUN_01aaa278(DAT_01d4eb14), iVar10 != 0)) {
        if (*(int *)(DAT_01d4eb14 + 0x20) == 0) {
LAB_0143ef50:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf82cc);
        }
        local_a0 = *(undefined4 *)(DAT_01d4eb14 + 0x24);
        local_9c = *(undefined4 *)(DAT_01d4eb14 + 0x28);
        local_b4 = &local_e8;
        local_f4 = &local_b8;
        local_f0 = (undefined4 ******)&DAT_00000001;
        local_e4 = &local_11c;
        local_11c = &local_110;
        local_98 = 0;
        local_b0 = &DAT_01d2ea4c;
        local_e8 = (undefined4 ******)&DAT_005abf80;
        local_118 = FUN_019a7d7c;
        local_ec = (uint *)(DAT_01d4eb14 + 0x1c);
        local_b8 = &local_a8;
        local_a8 = (undefined4 *******)*(undefined4 *******)(DAT_01d4eb14 + 0x1c);
        local_a4 = (undefined4 ******)*(int *)(DAT_01d4eb14 + 0x20);
        FUN_0143f334(&local_f4);
      }
      else {
        iVar10 = DAT_01d4eb14;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_14c = *(undefined4 *******)(DAT_01d4eb14 + 0x14);
          local_148 = *(undefined1 **)(DAT_01d4eb14 + 0x18);
          local_150 = (undefined4 *******)0x2;
          DataMemoryBarrier(0xb);
          puVar17 = DAT_01d4edc8;
          pcVar9 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar17 = &DAT_01cfc5e0;
            pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar13 = (*(code *)puVar17[3])(pcVar9,&local_150);
          if (iVar13 != 0) {
            if (*(int *)(DAT_01d4eb14 + 0x20) == 0) goto LAB_0143ef50;
            local_a0 = *(undefined4 *)(DAT_01d4eb14 + 0x24);
            local_f0 = &local_108;
            local_9c = *(undefined4 *)(DAT_01d4eb14 + 0x28);
            local_11c = &local_f4;
            local_118 = (code *)0x1;
            local_104 = &local_e8;
            local_98 = 0;
            local_ec = (uint *)&DAT_01d2ea4c;
            local_e4 = (undefined4 *******)FUN_019a7d7c;
            local_108 = (undefined4 ******)&DAT_005abf80;
            local_e8 = &local_110;
            local_b8 = local_150;
            local_b4 = local_14c;
            local_b0 = local_148;
            local_114 = (uint *)(DAT_01d4eb14 + 0x1c);
            local_f4 = &local_a8;
            local_a8 = (undefined4 *******)*(undefined4 *******)(DAT_01d4eb14 + 0x1c);
            local_a4 = (undefined4 ******)*(int *)(DAT_01d4eb14 + 0x20);
            FUN_01aaa328(iVar10,pcVar9,puVar17[4],&local_b8,&local_11c);
          }
        }
      }
      FUN_0143f1c4((uint)local_110 & 0xff,local_10c);
    }
  }
  if (sVar2 == 0) {
    if (*(char *)((int)param_3 + 0x75) == '\x01') {
      iVar10 = *(int *)((int)param_3 + 0x76);
      FUN_01bed93e(&local_a0,0,0x78);
      local_28 = 0x10;
      local_a8 = (undefined4 *******)0x2;
      local_a4 = (undefined4 ******)iVar10;
      goto LAB_0143e5f4;
    }
  }
  else if (*(char *)((int)param_3 + 0x7a) != '\0') {
    local_a0 = *(undefined4 *)((int)param_3 + 0x7b);
    FUN_01bed4e2(&local_9c,(int)param_3 + 0x7f,0xc);
    FUN_01bed93e(auStack_90,0,0x68);
    local_a4 = (undefined4 ******)0x0;
    local_28 = 0x1c;
    local_a8 = (undefined4 *******)0xa;
LAB_0143e5f4:
    FUN_01979d50(&local_b8,ppppppuVar4,&local_a8);
    if (((char)local_b8 != '\x04') && (((uint)local_b8 & 0xff) != 4)) {
      local_a8 = local_b8;
      local_a4 = local_b4;
      uVar8 = FUN_0142322c(&local_a8);
      uVar12 = 0x14;
      pcVar9 = "tcp bind local error";
LAB_0143e080:
      *(undefined2 *)(param_1 + 1) = 2;
      param_1[0xb] = uVar8;
      *param_1 = 1;
      param_1[9] = pcVar9;
      param_1[10] = uVar12;
      param_1[0xc] = &DAT_01cf48ac;
      FUN_01bf01d6(ppppppuVar4);
      return;
    }
  }
  if ((char)param_3[0x23] != '\0') {
    FUN_01979dd0(&local_130,ppppppuVar4,1,2,1);
    if ((char)local_130 != '\x04') {
      local_10c = local_12c;
      local_110 = local_130;
      if (((DAT_01d50f88 < 4) &&
          ((DAT_01d4eb34 - 1 < 2 ||
           ((DAT_01d4eb34 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4eb2c), cVar5 != '\0')))))) &&
         (iVar10 = FUN_01aaa278(DAT_01d4eb2c), iVar10 != 0)) {
        if (*(int *)(DAT_01d4eb2c + 0x20) == 0) {
LAB_0143eef4:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf82dc);
        }
        local_a0 = *(undefined4 *)(DAT_01d4eb2c + 0x24);
        local_b4 = &local_e8;
        local_9c = *(undefined4 *)(DAT_01d4eb2c + 0x28);
        local_f4 = &local_b8;
        local_f0 = (undefined4 ******)&DAT_00000001;
        local_e4 = &local_11c;
        local_b8 = &local_a8;
        local_11c = &local_110;
        local_98 = 0;
        local_b0 = &DAT_01d2ea4c;
        local_e8 = (undefined4 ******)&DAT_005a5294;
        local_118 = FUN_019a7d7c;
        local_ec = (uint *)(DAT_01d4eb2c + 0x1c);
        local_a8 = (undefined4 *******)*(undefined4 *******)(DAT_01d4eb2c + 0x1c);
        local_a4 = (undefined4 ******)*(int *)(DAT_01d4eb2c + 0x20);
        FUN_0143f42c(&local_f4);
      }
      else {
        iVar10 = DAT_01d4eb2c;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_13c = *(undefined4 *******)(DAT_01d4eb2c + 0x14);
          local_138 = *(undefined1 **)(DAT_01d4eb2c + 0x18);
          local_140 = (undefined4 *******)0x2;
          DataMemoryBarrier(0xb);
          puVar17 = DAT_01d4edc8;
          pcVar9 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar17 = &DAT_01cfc5e0;
            pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar13 = (*(code *)puVar17[3])(pcVar9,&local_140);
          if (iVar13 != 0) {
            if (*(int *)(DAT_01d4eb2c + 0x20) == 0) goto LAB_0143eef4;
            local_f0 = &local_108;
            local_a0 = *(undefined4 *)(DAT_01d4eb2c + 0x24);
            local_9c = *(undefined4 *)(DAT_01d4eb2c + 0x28);
            local_f4 = &local_a8;
            local_11c = &local_f4;
            local_118 = (code *)0x1;
            local_104 = &local_e8;
            local_e8 = &local_110;
            local_98 = 0;
            local_ec = (uint *)&DAT_01d2ea4c;
            local_108 = (undefined4 ******)&DAT_005a5294;
            local_e4 = (undefined4 *******)FUN_019a7d7c;
            local_b8 = local_140;
            local_b4 = local_13c;
            local_b0 = local_138;
            local_114 = (uint *)(DAT_01d4eb2c + 0x1c);
            local_a8 = (undefined4 *******)*(undefined4 *******)(DAT_01d4eb2c + 0x1c);
            local_a4 = (undefined4 ******)*(int *)(DAT_01d4eb2c + 0x20);
            FUN_01aaa328(iVar10,pcVar9,puVar17[4],&local_b8,&local_11c);
          }
        }
      }
      FUN_0143f1c4((uint)local_110 & 0xff,local_10c);
    }
  }
  if (param_3[10] != 0) {
    FUN_01979dd0(&local_130,ppppppuVar4,1,7,param_3[0xb]);
    if ((char)local_130 != '\x04') {
      local_10c = local_12c;
      local_110 = local_130;
      if ((DAT_01d50f88 < 4) &&
         (((DAT_01d4eb28 - 1 < 2 ||
           ((DAT_01d4eb28 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4eb20), cVar5 != '\0')))) &&
          (iVar10 = FUN_01aaa278(DAT_01d4eb20), iVar10 != 0)))) {
        if (*(int *)(DAT_01d4eb20 + 0x20) == 0) {
LAB_0143ef14:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf82ec);
        }
        local_a0 = *(undefined4 *)(DAT_01d4eb20 + 0x24);
        local_b4 = &local_e8;
        local_9c = *(undefined4 *)(DAT_01d4eb20 + 0x28);
        local_f4 = &local_b8;
        local_f0 = (undefined4 ******)&DAT_00000001;
        local_e4 = &local_11c;
        local_b8 = &local_a8;
        local_11c = &local_110;
        local_98 = 0;
        local_b0 = &DAT_01d2ea4c;
        local_e8 = (undefined4 ******)&DAT_005900de;
        local_118 = FUN_019a7d7c;
        local_ec = (uint *)(DAT_01d4eb20 + 0x1c);
        local_a8 = (undefined4 *******)*(undefined4 *******)(DAT_01d4eb20 + 0x1c);
        local_a4 = (undefined4 ******)*(int *)(DAT_01d4eb20 + 0x20);
        FUN_0143f524(&local_f4);
      }
      else {
        iVar10 = DAT_01d4eb20;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_124 = *(undefined4 *******)(DAT_01d4eb20 + 0x14);
          local_120 = *(undefined1 **)(DAT_01d4eb20 + 0x18);
          local_128 = (undefined4 *******)0x2;
          DataMemoryBarrier(0xb);
          puVar17 = DAT_01d4edc8;
          pcVar9 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar17 = &DAT_01cfc5e0;
            pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar13 = (*(code *)puVar17[3])(pcVar9,&local_128);
          if (iVar13 != 0) {
            if (*(int *)(DAT_01d4eb20 + 0x20) == 0) goto LAB_0143ef14;
            local_f0 = &local_108;
            local_a0 = *(undefined4 *)(DAT_01d4eb20 + 0x24);
            local_9c = *(undefined4 *)(DAT_01d4eb20 + 0x28);
            local_f4 = &local_a8;
            local_11c = &local_f4;
            local_118 = (code *)0x1;
            local_104 = &local_e8;
            local_e8 = &local_110;
            local_98 = 0;
            local_ec = (uint *)&DAT_01d2ea4c;
            local_108 = (undefined4 ******)&DAT_005900de;
            local_e4 = (undefined4 *******)FUN_019a7d7c;
            local_b8 = local_128;
            local_b4 = local_124;
            local_b0 = local_120;
            local_114 = (uint *)(DAT_01d4eb20 + 0x1c);
            local_a8 = (undefined4 *******)*(undefined4 *******)(DAT_01d4eb20 + 0x1c);
            local_a4 = (undefined4 ******)*(int *)(DAT_01d4eb20 + 0x20);
            FUN_01aaa328(iVar10,pcVar9,puVar17[4],&local_b8,&local_11c);
          }
        }
      }
      FUN_0143f1c4((uint)local_110 & 0xff,local_10c);
    }
  }
  if (param_3[0xc] != 0) {
    FUN_01979dd0(&local_110,ppppppuVar4,1,8,param_3[0xd]);
    if ((char)local_110 != '\x04') {
      local_104 = (undefined4 ******)local_10c;
      local_108 = local_110;
      if (((DAT_01d50f88 < 4) &&
          ((DAT_01d4eb04 - 1 < 2 ||
           ((DAT_01d4eb04 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4eafc), cVar5 != '\0')))))) &&
         (iVar10 = FUN_01aaa278(DAT_01d4eafc), iVar10 != 0)) {
        if (*(int *)(DAT_01d4eafc + 0x20) == 0) {
LAB_0143ef30:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf82fc);
        }
        local_a0 = *(undefined4 *)(DAT_01d4eafc + 0x24);
        local_b4 = &local_e8;
        local_9c = *(undefined4 *)(DAT_01d4eafc + 0x28);
        local_f4 = &local_b8;
        local_f0 = (undefined4 ******)&DAT_00000001;
        local_e4 = &local_11c;
        local_b8 = &local_a8;
        local_11c = &local_108;
        local_98 = 0;
        local_b0 = &DAT_01d2ea4c;
        local_e8 = (undefined4 ******)&DAT_00574c2b;
        local_118 = FUN_019a7d7c;
        local_ec = (uint *)(DAT_01d4eafc + 0x1c);
        local_a8 = (undefined4 *******)*(undefined4 *******)(DAT_01d4eafc + 0x1c);
        local_a4 = (undefined4 ******)*(int *)(DAT_01d4eafc + 0x20);
        FUN_0143f61c(&local_f4);
      }
      else {
        iVar10 = DAT_01d4eafc;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_fc = *(undefined4 *)(DAT_01d4eafc + 0x14);
          local_f8 = *(undefined4 *)(DAT_01d4eafc + 0x18);
          local_100 = 2;
          DataMemoryBarrier(0xb);
          puVar17 = DAT_01d4edc8;
          pcVar9 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar17 = &DAT_01cfc5e0;
            pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar13 = (*(code *)puVar17[3])(pcVar9,&local_100);
          if (iVar13 != 0) {
            if (*(int *)(DAT_01d4eafc + 0x20) == 0) goto LAB_0143ef30;
            local_a0 = *(undefined4 *)(DAT_01d4eafc + 0x24);
            local_b4 = &local_e8;
            local_9c = *(undefined4 *)(DAT_01d4eafc + 0x28);
            local_b8 = &local_a8;
            local_f4 = &local_b8;
            local_f0 = (undefined4 ******)&DAT_00000001;
            local_e4 = &local_11c;
            local_118 = FUN_019a7d7c;
            local_11c = &local_108;
            local_98 = 0;
            local_b0 = &DAT_01d2ea4c;
            local_e8 = (undefined4 ******)&DAT_00574c2b;
            local_ec = (uint *)(DAT_01d4eafc + 0x1c);
            local_a8 = (undefined4 *******)*(undefined4 *******)(DAT_01d4eafc + 0x1c);
            local_a4 = (undefined4 ******)*(int *)(DAT_01d4eafc + 0x20);
            FUN_01aaa328(iVar10,pcVar9,puVar17[4],&local_100,&local_f4);
          }
        }
      }
      FUN_0143f1c4((uint)local_108 & 0xff,local_104);
    }
  }
  puVar17 = (undefined4 *)((uint)&local_e0 | 4);
  uVar8 = *(undefined4 *)(param_2 + 2);
  uVar12 = *(undefined4 *)(param_2 + 4);
  uVar14 = *(undefined4 *)(param_2 + 6);
  *puVar17 = *(undefined4 *)param_2;
  puVar17[1] = uVar8;
  puVar17[2] = uVar12;
  puVar17[3] = uVar14;
  uVar8 = *(undefined4 *)(param_2 + 10);
  uVar12 = *(undefined4 *)(param_2 + 0xc);
  uVar14 = *(undefined4 *)(param_2 + 0xe);
  puVar17[4] = *(undefined4 *)(param_2 + 8);
  puVar17[5] = uVar8;
  puVar17[6] = uVar12;
  puVar17[7] = uVar14;
  param_1[2] = param_5;
  param_1[3] = param_6;
  param_1[4] = param_7;
  *param_1 = 0;
  param_1[5] = local_e0;
  param_1[6] = uStack_dc;
  param_1[7] = uStack_d8;
  param_1[8] = uStack_d4;
  param_1[9] = local_d0;
  param_1[10] = uStack_cc;
  param_1[0xb] = uStack_c8;
  param_1[0xc] = uStack_c4;
  param_1[0xd] = uStack_c0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0xe] = ppppppuVar4;
  return;
}

