// FUN_012c8144 @ 012c8144 size=8352 calls_out=44 calls_in=0
// strings: tmp/ip_notifier.sock | Connection failed; retrying | connection_notifier::clientopen/utils-rs/connection-notifier/src/client.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | connection_notifier::clientopen/utils-rs/connection-notifier/src/client.rs | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_012c8144(uint *****param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint ****ppppuVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *****pppppuVar12;
  undefined1 uVar13;
  uint ****ppppuVar14;
  undefined *puVar15;
  uint *****pppppuVar16;
  uint ****ppppuVar17;
  uint *****pppppuVar18;
  uint ****ppppuVar19;
  uint ****ppppuVar20;
  undefined1 uVar21;
  uint uVar22;
  uint ***pppuVar23;
  undefined4 *puVar24;
  undefined4 uVar25;
  char *pcVar26;
  uint *****pppppuVar27;
  uint uVar28;
  uint ****ppppuVar29;
  int iVar30;
  undefined1 *local_228;
  uint *****local_224;
  uint *****local_220;
  uint *****local_214;
  uint *****local_210;
  uint *****local_208;
  uint *****local_204;
  uint ****local_1f4;
  uint *****pppppuStack_1e8;
  uint *****pppppuStack_1e4;
  uint *****pppppuStack_1e0;
  uint *****pppppuStack_1dc;
  uint *****local_1d8;
  uint *****local_1d4;
  uint *****local_1d0;
  uint *****local_1c8;
  uint *****local_1c4;
  undefined4 local_1c0;
  uint *****local_1bc;
  uint *****local_1b8;
  uint *****local_1b4;
  uint *****local_1b0;
  uint *****local_1a8;
  uint *****local_1a4;
  uint *****local_1a0;
  uint *****pppppuStack_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  uint *****local_188;
  uint *****local_184;
  uint *****local_180;
  uint ****local_178;
  uint ****ppppuStack_174;
  uint ****ppppuStack_170;
  uint ****ppppuStack_16c;
  uint *****local_168;
  uint *****local_164;
  undefined2 local_160;
  undefined1 local_15e;
  uint *****local_158;
  uint *****local_154;
  undefined2 local_150;
  undefined1 local_14e;
  uint *****local_148;
  uint *****local_144;
  uint *****local_140;
  uint *****pppppuStack_13c;
  undefined4 local_138;
  uint *****local_134;
  uint *****pppppuStack_130;
  uint *****pppppuStack_12c;
  uint *****pppppuStack_128;
  uint ****ppppuStack_124;
  uint *****local_d8;
  uint *****local_d4;
  undefined4 local_d0;
  uint *****local_c8;
  uint *****local_c4;
  uint *****local_c0;
  uint *****local_b8;
  uint *****local_b4;
  uint *****local_b0;
  uint *****pppppuStack_ac;
  uint ****local_a8;
  uint *****local_a0;
  uint *****local_9c;
  uint *****local_98;
  uint *****local_94;
  undefined4 local_90;
  uint *****local_8c;
  uint *****local_88;
  uint *****local_84;
  uint *****local_80;
  uint ****ppppuStack_7c;
  uint ****local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x3c)) {
  case 0:
    *(undefined1 *)((int)param_1 + 0x31) = 0;
    ppppuVar7 = param_1[0x3a];
    ppppuVar14 = param_1[0x3b];
    param_1[10] = ppppuVar7;
    param_1[0xb] = ppppuVar14;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01ce2d1c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01ce2d1c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x31)) {
    case 0:
      ppppuVar7 = param_1[10];
      ppppuVar14 = param_1[0xb];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01ce2c5c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01ce2c5c);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_1 + 0xd2)) {
      case 0:
        *(undefined2 *)(param_1 + 0x34) = 1;
        pcVar26 = (char *)param_1[0x14];
        ppppuVar7 = param_1[0x15];
        param_1[0x12] = (uint ****)pcVar26;
        param_1[0x13] = ppppuVar7;
        if (ppppuVar7 != (uint ****)0x0) goto LAB_012c8388;
        ppppuVar7 = (uint ****)0x0;
        goto LAB_012c8394;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d1e10c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d1e10c);
      case 3:
        pppppuVar27 = (uint *****)param_1[0x33];
        goto LAB_012c8550;
      }
    case 4:
      pppppuVar27 = (uint *****)param_1[0x30];
      pppppuVar12 = (uint *****)param_1[0x31];
      goto LAB_012c8a5c;
    case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x39)) {
      case 0:
        pppppuVar27 = (uint *****)param_1[0x12];
        ppppuVar7 = param_1[0x13];
        goto LAB_012c9198;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01ce2cec);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01ce2cec);
      case 3:
        local_1f4 = param_1[0x37];
        pppppuVar27 = (uint *****)param_1[0x38];
        goto LAB_012c92b8;
      }
    }
  }
  param_1[8] = ppppuVar7;
  param_1[9] = ppppuVar14;
  param_1[2] = (uint ****)0x5f5e100;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *param_1 = (uint ****)0x0;
  param_1[1] = (uint ****)0x0;
LAB_012c834c:
  ppppuVar7 = (uint ****)0x15;
  *(undefined1 *)((int)param_1 + 0xd2) = 0;
  pcVar26 = "/";
  param_1[0x12] = (uint ****)"/";
  param_1[0x13] = (uint ****)0x15;
  param_1[0x14] = (uint ****)"/";
  param_1[0x15] = (uint ****)0x15;
  *(undefined2 *)(param_1 + 0x34) = 1;
LAB_012c8388:
  if (*pcVar26 == '\0') {
    FUN_01bed93e(&local_a0,0,0x6b);
    if (0x6b < (int)ppppuVar7 - 1U) {
      uVar9 = 2;
      puVar15 = &DAT_01d2cef0;
      uVar28 = 0xf0000000;
      goto LAB_012c8458;
    }
    FUN_01bed4e2(&local_a0,(char *)((int)pcVar26 + 1));
    pppppuVar27 = local_a0;
    FUN_01bed4e2(&local_148,(uint)&local_a0 | 1,0x6a);
    FUN_01bed4e2(&local_a0,&local_148,0x6c);
    param_1[0x16] = (uint ****)((int)ppppuVar7 + 2);
    param_1[0x17] = (uint ****)((int)pppppuVar27 << 0x18 | 1);
LAB_012c84b8:
    pppppuVar27 = param_1 + 0xe;
    FUN_01bed4e2(param_1 + 0x18,&local_a0,0x6c);
    FUN_01609718(&local_a0,param_1 + 0x16);
    if (((char)local_a0 != '\x04') && (uVar9 = (uint)local_a0 & 0xff, uVar9 != 4)) {
      uVar28 = (uint)local_a0 >> 8 | (int)local_9c << 0x18;
      uVar22 = (uint)local_9c >> 8;
LAB_012c85d8:
      *(undefined1 *)((int)param_1 + 0xd1) = 0;
      goto LAB_012c85e0;
    }
    *(undefined1 *)((int)param_1 + 0xd1) = 0;
    FUN_019dc1a0(&local_a0,local_9c);
    if (local_a0 == (uint *****)0x2) {
      uVar28 = (uint)local_9c >> 8 | (int)local_98 << 0x18;
      uVar9 = (uint)local_9c & 0xff;
      uVar22 = (uint)local_98 >> 8;
      goto LAB_012c85d8;
    }
    param_1[0xe] = (uint ****)local_a0;
    param_1[0xf] = (uint ****)local_9c;
    param_1[0x10] = (uint ****)local_98;
    param_1[0x33] = (uint ****)pppppuVar27;
    param_1[0x11] = (uint ****)local_94;
LAB_012c8550:
    FUN_019e7220(&local_a0,pppppuVar27[2],param_2,1);
    if (local_a0 == (uint *****)0x2) {
      *(undefined1 *)((int)param_1 + 0xd2) = 3;
LAB_012c8e04:
      uVar13 = 3;
      goto LAB_012c9d0c;
    }
    if (((uint)local_a0 & 1) != 0) {
      uVar9 = (uint)local_9c & 0xff;
      uVar28 = (uint)local_9c >> 8 | (int)local_98 << 0x18;
LAB_012c85d0:
      uVar22 = (uint)local_98 >> 8;
      FUN_00b76614(param_1 + 0xe);
      goto LAB_012c85d8;
    }
    if (param_1[0x11] == (uint ****)0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d28f7c);
    }
    FUN_0160968c(&local_a0);
    uVar28 = (uint)local_9c >> 8 | (int)local_98 << 0x18;
    uVar9 = (uint)local_9c & 0xff;
    if (local_a0 != (uint *****)0x0 || uVar9 != 4) goto LAB_012c85d0;
    ppppuVar19 = param_1[0xe];
    ppppuVar7 = param_1[0xf];
    ppppuVar14 = param_1[0x10];
    *(undefined1 *)((int)param_1 + 0xd2) = 1;
    *(undefined2 *)(param_1 + 0x34) = 0;
    if (ppppuVar19 == (uint ****)0x3) goto LAB_012c8e04;
    param_1[5] = ppppuVar7;
    param_1[6] = ppppuVar14;
    param_1[4] = ppppuVar19;
    param_1[7] = param_1[0x11];
    if (ppppuVar19 != (uint ****)0x2) {
      local_148 = (uint *****)param_1[4];
      local_144 = (uint *****)param_1[5];
      local_140 = (uint *****)param_1[6];
      pppppuStack_13c = (uint *****)param_1[7];
      if ((DAT_01d50f88 < 3) &&
         (((DAT_01d4cde0 - 1 < 2 ||
           ((DAT_01d4cde0 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4cdd8), cVar6 != '\0')))) &&
          (iVar10 = FUN_01aaa278(DAT_01d4cdd8), iVar10 != 0)))) {
        if (*(int *)(DAT_01d4cdd8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce2c7c);
        }
        local_c4 = (uint *****)&local_1c8;
        local_98 = *(uint ******)(DAT_01d4cdd8 + 0x24);
        local_94 = *(uint ******)(DAT_01d4cdd8 + 0x28);
        local_d0 = (uint *****)(DAT_01d4cdd8 + 0x1c);
        local_a0 = (uint *****)*local_d0;
        local_d8 = (uint *****)&local_c8;
        local_90 = (uint *****)0x0;
        local_d4 = (uint *****)&DAT_00000001;
        local_1c8 = (uint *****)0x4206f2;
        local_c0 = (uint *****)&DAT_01d2ea4c;
        local_1c4 = (uint *****)&DAT_0000002f;
        local_c8 = (uint *****)&local_a0;
        local_9c = (uint *****)*(int *)(DAT_01d4cdd8 + 0x20);
        FUN_01aaaecc(DAT_01d4cdd8,&local_d8);
        iVar10 = DAT_01d4cdd8;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_1a4 = *(uint ******)(DAT_01d4cdd8 + 0x14);
          local_1a0 = *(uint ******)(DAT_01d4cdd8 + 0x18);
          local_1a8 = (uint *****)&DAT_00000003;
          DataMemoryBarrier(0xb);
          pcVar26 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar26 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar24 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar24 = &DAT_01cfc5e0;
          }
          iVar11 = (*(code *)puVar24[3])(pcVar26,&local_1a8);
          if (iVar11 != 0) {
            local_b8 = local_1a8;
            local_b4 = local_1a4;
            local_b0 = local_1a0;
            FUN_01aaa328(iVar10,pcVar26,puVar24[4],&local_b8,&local_d8);
          }
        }
      }
      else {
        iVar10 = DAT_01d4cdd8;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_1d4 = *(uint ******)(DAT_01d4cdd8 + 0x14);
          local_1d0 = *(uint ******)(DAT_01d4cdd8 + 0x18);
          local_1d8 = (uint *****)&DAT_00000003;
          DataMemoryBarrier(0xb);
          pcVar26 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar26 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar24 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar24 = &DAT_01cfc5e0;
          }
          iVar11 = (*(code *)puVar24[3])(pcVar26,&local_1d8);
          if (iVar11 != 0) {
            if (*(int *)(DAT_01d4cdd8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce2c7c);
            }
            local_1a4 = (uint *****)&local_d8;
            local_98 = *(uint ******)(DAT_01d4cdd8 + 0x24);
            local_94 = *(uint ******)(DAT_01d4cdd8 + 0x28);
            local_c8 = (uint *****)&local_1a8;
            local_90 = (uint *****)0x0;
            local_c4 = (uint *****)&DAT_00000001;
            local_d8 = (uint *****)0x4206f2;
            local_1a0 = (uint *****)&DAT_01d2ea4c;
            local_d4 = (uint *****)&DAT_0000002f;
            local_b8 = local_1d8;
            local_b4 = local_1d4;
            local_b0 = local_1d0;
            local_1a8 = (uint *****)&local_a0;
            local_c0 = (uint *****)(DAT_01d4cdd8 + 0x1c);
            local_a0 = (uint *****)*(uint *****)(DAT_01d4cdd8 + 0x1c);
            local_9c = (uint *****)*(int *)(DAT_01d4cdd8 + 0x20);
            FUN_01aaa328(iVar10,pcVar26,puVar24[4],&local_b8,&local_c8);
          }
        }
      }
      *param_1 = (uint ****)0x0;
      param_1[2] = (uint ****)0x5f5e100;
      param_1[1] = (uint ****)0x0;
      pppppuStack_1e8 = local_148;
      pppppuStack_1e4 = local_144;
      pppppuStack_1e0 = local_140;
      pppppuStack_1dc = pppppuStack_13c;
      *(undefined1 *)(param_1 + 0xc) = 0;
      local_a0 = local_148;
      local_9c = local_144;
      local_98 = local_140;
      local_94 = pppppuStack_13c;
      pppppuVar27 = (uint *****)param_1[8];
      do {
        ppppuVar7 = *pppppuVar27;
        bVar5 = (bool)hasExclusiveAccess(pppppuVar27);
      } while (!bVar5);
      *pppppuVar27 = (uint ****)((int)ppppuVar7 + 1);
      if ((int)ppppuVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x12ca3e0);
        (*pcVar1)();
      }
      pppppuVar12 = pppppuVar27 + 0x11;
      do {
        bVar5 = (bool)hasExclusiveAccess(pppppuVar12);
      } while (!bVar5);
      *pppppuVar12 = (uint ****)((int)*pppppuVar12 + 1);
      ppppuVar7 = param_1[9];
      local_148 = pppppuVar27;
      FUN_01a3c2e0(ppppuVar7);
      FUN_01bed864(param_1 + 0xe,&pppppuStack_1e8,0x10);
      *(undefined1 *)(param_1 + 0x39) = 0;
      param_1[0x12] = (uint ****)pppppuVar27;
      param_1[0x13] = ppppuVar7;
LAB_012c9198:
      local_178 = param_1[0xe];
      ppppuStack_174 = param_1[0xf];
      ppppuStack_170 = param_1[0x10];
      ppppuStack_16c = param_1[0x11];
      param_1[0x14] = (uint ****)pppppuVar27;
      param_1[0x15] = ppppuVar7;
      local_1a8 = (uint *****)param_1[0xe];
      local_1a4 = (uint *****)param_1[0xf];
      local_1a0 = (uint *****)param_1[0x10];
      pppppuStack_19c = (uint *****)param_1[0x11];
      FUN_01a3d3d8(&local_b8);
      FUN_01a3d418(&local_148);
      local_8c = local_b8;
      local_88 = local_b4;
      local_84 = local_b0;
      local_80 = pppppuStack_ac;
      ppppuStack_7c = local_a8;
      local_a0 = local_148;
      local_9c = local_144;
      local_98 = local_140;
      local_94 = pppppuStack_13c;
      local_90 = local_138;
      local_134 = local_b8;
      pppppuStack_130 = local_b4;
      pppppuStack_12c = local_b0;
      pppppuStack_128 = pppppuStack_ac;
      ppppuStack_124 = local_a8;
      param_1[0x16] = local_178;
      param_1[0x17] = ppppuStack_174;
      param_1[0x18] = ppppuStack_170;
      param_1[0x19] = ppppuStack_16c;
      *(undefined1 *)(param_1 + 0x20) = 1;
      param_1[0x21] = (uint ****)0x0;
      param_1[0x1c] = (uint ****)0x800000;
      param_1[0x1d] = (uint ****)0x4;
      param_1[0x1e] = (uint ****)0x0;
      param_1[0x1f] = (uint ****)0x0;
      param_1[0x1a] = (uint ****)0x0;
      param_1[0x23] = (uint ****)local_148;
      param_1[0x24] = (uint ****)local_144;
      param_1[0x25] = (uint ****)local_140;
      param_1[0x26] = (uint ****)pppppuStack_13c;
      param_1[0x27] = (uint ****)local_138;
      param_1[0x28] = (uint ****)local_b8;
      param_1[0x29] = (uint ****)local_b4;
      param_1[0x2a] = (uint ****)local_b0;
      param_1[0x2b] = (uint ****)pppppuStack_ac;
      param_1[0x2c] = local_a8;
LAB_012c9264:
      ppppuVar7 = param_1[0x15];
      local_1f4 = (uint ****)((int)param_1 + 0xe5);
      *(byte *)local_1f4 = 0;
      pppuVar23 = ppppuVar7[2];
      DataMemoryBarrier(0xb);
      pppppuVar27 = param_1 + 0x2d;
      *pppppuVar27 = (uint ****)(param_1 + 0x16);
      param_1[0x37] = local_1f4;
      *(undefined1 *)(param_1 + 0x36) = 0;
      param_1[0x35] = (uint ****)0x0;
      param_1[0x2e] = (uint ****)(param_1 + 0x15);
      param_1[0x2f] = ppppuVar7 + 2;
      param_1[0x30] = (uint ****)((uint)pppuVar23 >> 2);
      param_1[0x31] = (uint ****)0x0;
      param_1[0x32] = (uint ****)0x0;
      param_1[0x33] = (uint ****)0x0;
      param_1[0x38] = (uint ****)pppppuVar27;
LAB_012c92b8:
      bVar2 = FUN_019ec70c();
      if ((bVar2 == 2) || ((bVar2 & 1) != 0)) {
        iVar10 = FUN_019f8914(2);
        bVar4 = false;
        iVar30 = *param_2;
        iVar11 = 0;
        bVar5 = true;
LAB_012c9344:
        local_204 = param_1 + 0x39;
        if ((iVar11 + iVar10 & 1U) == 0) {
          if (((uint)*local_1f4 & 1) != 0) goto LAB_012c9504;
          ppppuVar7 = *pppppuVar27;
          if (*(char *)((int)ppppuVar7 + 0x5a) == '\0') {
            bVar2 = *(byte *)((int)ppppuVar7 + 0x59);
            ppppuVar14 = ppppuVar7 + 0x12;
            pppppuVar12 = param_1;
            do {
              if ((bVar2 & 1) != 0) {
                if (*(char *)(ppppuVar7 + 0x16) == '\0') {
                  FUN_012cb98c(&local_a0,ppppuVar7 + 4,ppppuVar14);
                  uVar28 = (uint)local_90 >> 0x18;
                  if (uVar28 == 3) {
                    uVar28 = 2;
                    *(undefined1 *)((int)ppppuVar7 + 0x5a) = 1;
                  }
                  else {
                    local_1a8 = local_98;
                    local_1a4 = local_94;
                    local_1a0 = (uint *****)CONCAT13(local_1a0._3_1_,(undefined3)local_90);
                    if (uVar28 == 2) {
                      *(undefined1 *)((int)ppppuVar7 + 0x59) = 0;
                      goto LAB_012c9424;
                    }
                    local_d0 = (uint *****)CONCAT13(local_d0._3_1_,(undefined3)local_90);
                    local_d8 = local_1a8;
                    local_d4 = local_1a4;
                  }
                  local_210 = local_a0;
                  local_214 = local_9c;
                }
                else {
                  FUN_012cb98c(&local_a0,ppppuVar7 + 4,ppppuVar14);
                  local_214 = local_9c;
                  local_210 = local_a0;
                  uVar28 = (uint)local_90 >> 0x18;
                  if (uVar28 == 3) {
LAB_012c95cc:
                    uVar28 = 2;
                    *(undefined1 *)((int)ppppuVar7 + 0x5a) = 1;
                  }
                  else {
                    local_b8 = local_98;
                    local_b4 = local_94;
                    local_b0._0_3_ = SUB43(local_90,0);
                    if (uVar28 == 2) {
                      if (ppppuVar7[0x13] != (uint ***)0x0) {
                        FUN_019a18a8(&local_148,0x28,"bytes remaining on stream",0x19);
                        local_210 = local_148;
                        local_214 = local_144;
                        goto LAB_012c95cc;
                      }
                      uVar28 = 3;
                      *(undefined1 *)((int)ppppuVar7 + 0x59) = 0;
                    }
                    else {
                      local_148 = local_a0;
                      local_144 = local_9c;
                      local_140 = local_98;
                      pppppuStack_13c = local_94;
                      local_138 = (uint *****)
                                  CONCAT22(CONCAT11(local_138._3_1_,local_90._2_1_),
                                           (undefined2)local_90);
                      local_a0 = local_98;
                      local_9c = local_94;
                      local_98 = (uint *****)CONCAT13(local_98._3_1_,local_b0._0_3_);
                    }
                    local_d8 = local_a0;
                    local_d4 = local_9c;
                    local_d0._0_3_ = SUB43(local_98,0);
                  }
                }
                goto LAB_012c9630;
              }
LAB_012c9424:
              if (ppppuVar7[0x14] == ppppuVar7[0x13]) {
                FUN_01283c9c(ppppuVar14,1);
              }
              FUN_012cc31c(&local_a0,ppppuVar7[2],ppppuVar7[3],param_2,ppppuVar14);
              if (((uint)local_a0 & 0xff) == 4) {
LAB_012c94ac:
                bVar4 = false;
                pppppuVar12 = local_9c;
              }
              else {
                if (((uint)local_a0 & 0xff) != 5) {
                  *(undefined1 *)((int)ppppuVar7 + 0x5a) = 1;
                  if (((uint)local_a0 & 0xff) == 4) goto LAB_012c94ac;
                  if (((uint)local_a0 & 0xff) != 5) {
                    uVar28 = 2;
                    local_210 = local_a0;
                    local_214 = local_9c;
                    goto LAB_012c9630;
                  }
                }
                bVar4 = true;
              }
              if (bVar4) goto LAB_012c94f0;
              uVar13 = 0;
              if ((pppppuVar12 == (uint *****)0x0) &&
                 (uVar13 = 1, *(char *)(ppppuVar7 + 0x16) != '\0')) goto LAB_012c9538;
              bVar2 = 1;
              *(undefined1 *)((int)ppppuVar7 + 0x59) = 1;
              *(undefined1 *)(ppppuVar7 + 0x16) = uVar13;
              if (*(char *)((int)ppppuVar7 + 0x5a) != '\0') break;
            } while( true );
          }
          *(undefined2 *)((int)ppppuVar7 + 0x59) = 0;
LAB_012c9538:
          uVar28 = 3;
LAB_012c9630:
          local_168 = local_d8;
          local_164 = local_d4;
          local_160 = (undefined2)local_d0;
          local_15e = local_d0._2_1_;
          bVar2 = 1;
          local_220 = local_210;
          local_224 = local_214;
LAB_012c965c:
          *(byte *)local_1f4 = *(byte *)local_1f4 | bVar2;
          goto LAB_012c9674;
        }
        if (((uint)*local_1f4 & 2) == 0) {
          iVar11 = FUN_01a3be00(pppppuVar27 + 1,iVar30);
          bVar4 = true;
          if (iVar11 == 0) {
            uVar28 = 4;
            bVar2 = 2;
            goto LAB_012c965c;
          }
        }
        goto LAB_012c9504;
      }
      FUN_019ece98(*(undefined4 *)*param_2,((undefined4 *)*param_2)[1]);
      pppppuVar12 = param_1;
      goto LAB_012c92e4;
    }
  }
  else {
LAB_012c8394:
    *(undefined1 *)(param_1 + 0x34) = 0;
    FUN_019a8a34(&local_a0,pcVar26,ppppuVar7);
    pppppuVar27 = local_9c;
    if (((uint)local_a0 & 1) == 0) {
      FUN_01bed4e2(&local_148,&local_98,0x6a);
      ppppuVar7 = local_2c;
      FUN_01bed4e2(&local_a0,&local_148,0x6c);
      param_1[0x16] = ppppuVar7;
      param_1[0x17] = (uint ****)pppppuVar27;
      goto LAB_012c84b8;
    }
    puVar8 = (uint *)((uint)&local_a0 | 4);
    uVar9 = *puVar8;
    puVar15 = (undefined *)puVar8[1];
    uVar28 = uVar9 >> 8 | (int)puVar15 << 0x18;
    uVar9 = uVar9 & 0xff;
LAB_012c8458:
    uVar22 = (uint)puVar15 >> 8;
LAB_012c85e0:
    *(undefined1 *)((int)param_1 + 0xd2) = 1;
    *(undefined1 *)(param_1 + 0x34) = 0;
    param_1[4] = (uint ****)0x2;
    ppppuVar7 = (uint ****)(uVar9 | uVar28 << 8);
    ppppuVar14 = (uint ****)(uVar22 << 8 | uVar28 >> 0x18);
    param_1[5] = ppppuVar7;
    param_1[6] = ppppuVar14;
  }
  pppppuVar27 = param_1 + 0xe;
  pppppuVar12 = param_1 + 0xf;
  *pppppuVar12 = ppppuVar7;
  param_1[0x10] = ppppuVar14;
  if ((DAT_01d50f88 < 2) &&
     (((DAT_01d4cdf8 - 1 < 2 ||
       ((DAT_01d4cdf8 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4cdf0), cVar6 != '\0')))) &&
      (iVar10 = FUN_01aaa278(DAT_01d4cdf0), iVar10 != 0)))) {
    pppppuVar16 = *(uint ******)(DAT_01d4cdf0 + 0x20);
    if (pppppuVar16 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce2c8c);
    }
    local_1a0 = *(uint ******)(DAT_01d4cdf0 + 0x24);
    pppppuStack_19c = *(uint ******)(DAT_01d4cdf0 + 0x28);
    local_1a8 = *(uint ******)(DAT_01d4cdf0 + 0x1c);
    local_198 = 0;
    local_154 = (uint *****)0x37;
    local_158 = (uint *****)0x420709;
    local_1a4 = pppppuVar16;
    if (pppppuVar16 == (uint *****)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce2c8c);
    }
    local_a8 = (uint ****)0x1;
    local_1bc = pppppuVar12;
    local_b8 = local_1a8;
    local_b4 = pppppuVar16;
    local_b0 = local_1a0;
    pppppuStack_ac = pppppuStack_19c;
    if (pppppuVar16 < &DAT_00000003) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce2c8c);
    }
    local_84 = (uint *****)&local_168;
    local_88 = (uint *****)&local_148;
    local_90 = (uint *****)&local_1bc;
    local_94 = (uint *****)&local_b8;
    local_9c = (uint *****)&local_158;
    local_a0 = (uint *****)&local_1a8;
    local_1c8 = (uint *****)&local_a0;
    local_138 = (uint *****)0x2;
    local_1c4 = (uint *****)&DAT_00000003;
    local_80 = (uint *****)&DAT_01ce2cac;
    local_8c = (uint *****)&DAT_01ce2c9c;
    local_98 = (uint *****)&DAT_01d2ea4c;
    local_1c0 = (undefined4 *)(DAT_01d4cdf0 + 0x1c);
    local_168 = param_1;
    local_148 = local_1a8;
    local_144 = pppppuVar16;
    local_140 = local_1a0;
    pppppuStack_13c = pppppuStack_19c;
    FUN_01aaaecc(DAT_01d4cdf0,&local_1c8);
    iVar10 = DAT_01d4cdf0;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_d4 = *(uint ******)(DAT_01d4cdf0 + 0x14);
      local_d0 = *(uint ******)(DAT_01d4cdf0 + 0x18);
      local_d8 = (uint *****)&SUB_00000004;
      DataMemoryBarrier(0xb);
      pcVar26 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar26 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      puVar24 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar24 = &DAT_01cfc5e0;
      }
      iVar11 = (*(code *)puVar24[3])(pcVar26,&local_d8);
      if (iVar11 != 0) {
        local_c8 = local_d8;
        local_c4 = local_d4;
        local_c0 = local_d0;
        FUN_01aaa328(iVar10,pcVar26,puVar24[4],&local_c8,&local_1c8);
      }
    }
  }
  else {
    iVar10 = DAT_01d4cdf0;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_1b4 = *(uint ******)(DAT_01d4cdf0 + 0x14);
      local_1b0 = *(uint ******)(DAT_01d4cdf0 + 0x18);
      local_1b8 = (uint *****)&SUB_00000004;
      DataMemoryBarrier(0xb);
      pcVar26 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar26 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      puVar24 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar24 = &DAT_01cfc5e0;
      }
      iVar11 = (*(code *)puVar24[3])(pcVar26,&local_1b8);
      if (iVar11 != 0) {
        pppppuVar16 = *(uint ******)(DAT_01d4cdf0 + 0x1c);
        pppppuVar18 = *(uint ******)(DAT_01d4cdf0 + 0x20);
        if (pppppuVar18 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce2c8c);
        }
        local_1a0 = *(uint ******)(DAT_01d4cdf0 + 0x24);
        pppppuStack_19c = *(uint ******)(DAT_01d4cdf0 + 0x28);
        local_198 = 0;
        local_1c4 = (uint *****)0x37;
        local_1c8 = (uint *****)0x420709;
        local_1a8 = pppppuVar16;
        local_1a4 = pppppuVar18;
        if (pppppuVar18 == (uint *****)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce2c8c);
        }
        local_a8 = (uint ****)0x1;
        local_168 = pppppuVar12;
        local_b8 = pppppuVar16;
        local_b4 = pppppuVar18;
        local_b0 = local_1a0;
        pppppuStack_ac = pppppuStack_19c;
        if (pppppuVar18 < &DAT_00000003) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce2c8c);
        }
        local_84 = (uint *****)&local_158;
        local_88 = (uint *****)&local_148;
        local_90 = (uint *****)&local_168;
        local_94 = (uint *****)&local_b8;
        local_9c = (uint *****)&local_1c8;
        local_a0 = (uint *****)&local_1a8;
        local_d8 = (uint *****)&local_a0;
        local_138 = (uint *****)0x2;
        local_d4 = (uint *****)&DAT_00000003;
        local_80 = (uint *****)&DAT_01ce2cac;
        local_8c = (uint *****)&DAT_01ce2c9c;
        local_98 = (uint *****)&DAT_01d2ea4c;
        local_c8 = local_1b8;
        local_c4 = local_1b4;
        local_c0 = local_1b0;
        local_158 = param_1;
        local_148 = pppppuVar16;
        local_144 = pppppuVar18;
        local_140 = local_1a0;
        pppppuStack_13c = pppppuStack_19c;
        local_d0 = (uint *****)(DAT_01d4cdf0 + 0x1c);
        FUN_01aaa328(iVar10,pcVar26,puVar24[4],&local_c8,&local_d8);
      }
    }
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_019e6e74(&local_a0,&DAT_01ce2cbc,*param_1,param_1[1],param_1[2],&DAT_01ce2cbc);
  ppppuVar7 = param_1[9];
  pppuVar23 = ppppuVar7[2];
  DataMemoryBarrier(0xb);
  FUN_01bed4e2(&local_148,&local_a0,0x50);
  pppppuVar12 = param_1 + 0x12;
  FUN_01bed4e2(pppppuVar12,&local_148,0x50);
  param_1[0x30] = (uint ****)pppppuVar27;
  param_1[0x31] = (uint ****)pppppuVar12;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2d] = (uint ****)0x0;
  param_1[0x26] = (uint ****)(param_1 + 9);
  param_1[0x27] = ppppuVar7 + 2;
  param_1[0x28] = (uint ****)((uint)pppuVar23 >> 2);
  param_1[0x29] = (uint ****)0x0;
  param_1[0x2a] = (uint ****)0x0;
  param_1[0x2b] = (uint ****)0x0;
LAB_012c8a5c:
  puVar24 = (undefined4 *)*param_2;
  bVar2 = FUN_019ec70c();
  if ((bVar2 == 2) || ((bVar2 & 1) != 0)) {
    iVar10 = FUN_019f8914(2);
    bVar4 = false;
    iVar11 = 0;
    bVar5 = true;
    do {
      bVar3 = bVar5;
      if ((iVar11 + iVar10 & 1U) == 0) {
        if (((uint)*pppppuVar27 & 1) == 0) {
          iVar11 = FUN_019e84a0(pppppuVar12,puVar24);
          bVar4 = true;
          if (iVar11 == 0) {
            iVar10 = 0;
            bVar2 = 1;
            goto LAB_012c8b80;
          }
        }
      }
      else if (((uint)*pppppuVar27 & 2) == 0) {
        iVar11 = FUN_01a3be00(pppppuVar12 + 0x14,puVar24);
        bVar4 = true;
        if (iVar11 == 0) {
          bVar2 = 2;
          iVar10 = 1;
LAB_012c8b80:
          *(byte *)pppppuVar27 = *(byte *)pppppuVar27 | bVar2;
          goto LAB_012c8b8c;
        }
      }
      iVar11 = 1;
      bVar5 = false;
    } while (bVar3);
    iVar10 = 2;
    if (!bVar4) {
LAB_012c8b8c:
      FUN_011e9c6c(param_1 + 0x12);
      if (iVar10 != 0) {
        if (iVar10 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100("all branches are disabled and there is no else branch",0x6b,&DAT_01ce2cdc);
        }
        if (((DAT_01d50f88 < 3) &&
            ((DAT_01d4ce04 - 1 < 2 ||
             ((DAT_01d4ce04 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4cdfc), cVar6 != '\0')))))) &&
           (iVar10 = FUN_01aaa278(DAT_01d4cdfc), iVar10 != 0)) {
          if (*(uint ******)(DAT_01d4cdfc + 0x20) == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce2ccc);
          }
          local_b4 = (uint *****)&local_c8;
          local_98 = *(uint ******)(DAT_01d4cdfc + 0x24);
          local_94 = *(uint ******)(DAT_01d4cdfc + 0x28);
          local_1a0 = (uint *****)(DAT_01d4cdfc + 0x1c);
          local_a0 = (uint *****)*local_1a0;
          local_b8 = (uint *****)&local_a0;
          local_1a8 = (uint *****)&local_b8;
          local_90 = (uint *****)0x0;
          local_1a4 = (uint *****)&DAT_00000001;
          local_c8 = (uint *****)0x420724;
          local_b0 = (uint *****)&DAT_01d2ea4c;
          local_c4 = (uint *****)&DAT_00000029;
          local_9c = *(uint ******)(DAT_01d4cdfc + 0x20);
          FUN_01aaaecc(DAT_01d4cdfc,&local_1a8);
          iVar10 = DAT_01d4cdfc;
          if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
            local_144 = *(uint ******)(DAT_01d4cdfc + 0x14);
            local_140 = *(uint ******)(DAT_01d4cdfc + 0x18);
            local_148 = (uint *****)&DAT_00000003;
            DataMemoryBarrier(0xb);
            pcVar26 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            if (DAT_01d51174 == 2) {
              pcVar26 = DAT_01d4edc4;
            }
            puVar24 = &DAT_01cfc5e0;
            if (DAT_01d51174 == 2) {
              puVar24 = DAT_01d4edc8;
            }
            iVar11 = (*(code *)puVar24[3])(pcVar26,&local_148);
            if (iVar11 != 0) {
              FUN_01aaa328(iVar10,pcVar26,puVar24[4],&local_148,&local_1a8);
            }
          }
        }
        else {
          iVar10 = DAT_01d4cdfc;
          if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
            local_190 = *(undefined4 *)(DAT_01d4cdfc + 0x14);
            local_18c = *(undefined4 *)(DAT_01d4cdfc + 0x18);
            local_194 = 3;
            DataMemoryBarrier(0xb);
            pcVar26 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            if (DAT_01d51174 == 2) {
              pcVar26 = DAT_01d4edc4;
            }
            puVar24 = &DAT_01cfc5e0;
            if (DAT_01d51174 == 2) {
              puVar24 = DAT_01d4edc8;
            }
            iVar11 = (*(code *)puVar24[3])(pcVar26,&local_194);
            if (iVar11 != 0) {
              if (*(uint ******)(DAT_01d4cdfc + 0x20) == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce2ccc);
              }
              local_144 = (uint *****)&local_1a8;
              local_98 = *(uint ******)(DAT_01d4cdfc + 0x24);
              local_94 = *(uint ******)(DAT_01d4cdfc + 0x28);
              local_148 = (uint *****)&local_a0;
              local_b8 = (uint *****)&local_148;
              local_90 = (uint *****)0x0;
              local_b4 = (uint *****)&DAT_00000001;
              local_1a8 = (uint *****)0x420724;
              local_140 = (uint *****)&DAT_01d2ea4c;
              local_1a4 = (uint *****)&DAT_00000029;
              local_b0 = (uint *****)(DAT_01d4cdfc + 0x1c);
              local_a0 = *(uint ******)(DAT_01d4cdfc + 0x1c);
              local_9c = *(uint ******)(DAT_01d4cdfc + 0x20);
              FUN_01aaa328(iVar10,pcVar26,puVar24[4],&local_194,&local_b8);
            }
          }
        }
        FUN_011e9d50(*(undefined1 *)(param_1 + 0xf),param_1[0x10]);
        *(undefined1 *)(param_1 + 0xc) = 0;
        FUN_005faf6c(param_1 + 9);
        FUN_0193c71c(param_1 + 8);
        uVar25 = 0;
        uVar21 = 1;
        *(undefined1 *)((int)param_1 + 0x31) = 1;
        FUN_012c7d9c(param_1);
        goto LAB_012c9d1c;
      }
      ppppuVar7 = param_1[1];
      if ((int)ppppuVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("overflow when multiplying duration by scalarstruct ConnectionEvent",0x2c,
                     &DAT_01ce2d7c);
      }
      ppppuVar20 = param_1[2];
      ppppuVar17 = *param_1;
      ppppuVar29 = (uint ****)((uint)((uint ****)0x1dcd64ff < ppppuVar20) | (int)ppppuVar17 << 1);
      ppppuVar19 = (uint ****)((int)ppppuVar7 << 1 | (uint)ppppuVar17 >> 0x1f);
      ppppuVar14 = (uint ****)((int)ppppuVar20 * 2 + 0xc4653600);
      if (ppppuVar20 < (uint ****)0x1dcd6500) {
        ppppuVar14 = (uint ****)((int)ppppuVar20 << 1);
      }
      bVar5 = ppppuVar14 != (uint ****)0x0;
      if (ppppuVar29 != (uint ****)0x3 || ppppuVar19 != (uint ****)0x0) {
        bVar5 = (uint)(ppppuVar17 < (uint ****)0x2) <= (uint)-(int)ppppuVar7;
      }
      if (bVar5) {
        ppppuVar29 = (uint ****)0x3;
        ppppuVar19 = (uint ****)0x0;
        ppppuVar14 = (uint ****)0x0;
      }
      *param_1 = ppppuVar29;
      param_1[1] = ppppuVar19;
      param_1[2] = ppppuVar14;
      FUN_011e9d50(*(undefined1 *)(param_1 + 0xf),param_1[0x10]);
      *(undefined1 *)(param_1 + 0xc) = 0;
      goto LAB_012c834c;
    }
  }
  else {
    FUN_019ece98(*puVar24,puVar24[1]);
  }
  uVar13 = 4;
  goto LAB_012c9d0c;
LAB_012c94f0:
  bVar4 = true;
LAB_012c9504:
  pppppuVar12 = (uint *****)&local_a0;
  iVar11 = 1;
  bVar3 = !bVar5;
  bVar5 = false;
  if (bVar3) goto code_r0x012c9514;
  goto LAB_012c9344;
code_r0x012c9514:
  uVar28 = 5;
  if (bVar4) {
LAB_012c92e4:
    local_204 = param_1 + 0x39;
    *(undefined1 *)local_204 = 3;
    bVar5 = true;
    goto LAB_012c9818;
  }
LAB_012c9674:
  local_158 = local_168;
  local_154 = local_164;
  local_150 = local_160;
  local_14e = local_15e;
  FUN_012c7f64(param_1 + 0x2e);
  iVar10 = uVar28 - 3;
  if (uVar28 < 3 || iVar10 == 0) {
    iVar10 = 0;
  }
  if (iVar10 != 0) {
    if (iVar10 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("all branches are disabled and there is no else branch",0x6b,&DAT_01ce2d0c);
    }
    local_90 = (uint *****)CONCAT13(2,(undefined3)local_90);
    FUN_012caf64(&local_148,param_1[0x14],&local_a0);
    pppppuVar12 = (uint *****)FUN_00667978("Shutting down",0xd);
    goto LAB_012c97e0;
  }
  if (uVar28 == 2) {
    local_90 = (uint *****)CONCAT13(2,(undefined3)local_90);
    local_b8 = local_220;
    local_b4 = local_224;
    FUN_012caf64(&local_148,param_1[0x14],&local_a0);
    local_9c = (uint *****)FUN_01ac8058;
    local_a0 = (uint *****)&local_b8;
    pppppuVar12 = (uint *****)FUN_011f00a0(&local_a0);
    FUN_012ca890((uint)local_b8 & 0xff,local_b4);
    goto LAB_012c97e0;
  }
  if (uVar28 == 3) goto code_r0x012c9704;
  local_1c8 = local_158;
  local_1c4 = local_154;
  local_1c0._0_3_ = CONCAT12(local_14e,local_150);
  if (((DAT_01d50f88 < 2) &&
      ((DAT_01d4ce10 - 1 < 2 ||
       ((DAT_01d4ce10 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4ce08), cVar6 != '\0')))))) &&
     (iVar10 = FUN_01aaa278(DAT_01d4ce08), iVar10 != 0)) {
    if (*(int *)(DAT_01d4ce08 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce2cfc);
    }
    local_98 = *(uint ******)(DAT_01d4ce08 + 0x24);
    local_94 = *(uint ******)(DAT_01d4ce08 + 0x28);
    local_d0 = (uint *****)(DAT_01d4ce08 + 0x1c);
    local_a0 = (uint *****)*local_d0;
    local_1a8 = (uint *****)&local_a0;
    local_d8 = (uint *****)&local_1a8;
    local_90 = (uint *****)0x0;
    local_d4 = (uint *****)&DAT_00000001;
    local_168 = (uint *****)0x420750;
    local_1a0 = (uint *****)&DAT_01d2ea4c;
    local_164 = (uint *****)&DAT_0000001d;
    local_1a4 = (uint *****)&local_168;
    local_9c = (uint *****)*(int *)(DAT_01d4ce08 + 0x20);
    FUN_01aaaecc(DAT_01d4ce08,&local_d8);
    iVar10 = DAT_01d4ce08;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_b4 = *(uint ******)(DAT_01d4ce08 + 0x14);
      local_b0 = *(uint ******)(DAT_01d4ce08 + 0x18);
      local_b8 = (uint *****)&SUB_00000004;
      DataMemoryBarrier(0xb);
      pcVar26 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar26 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      puVar24 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar24 = &DAT_01cfc5e0;
      }
      iVar11 = (*(code *)puVar24[3])(pcVar26,&local_b8);
      if (iVar11 != 0) {
        local_148 = local_b8;
        local_144 = local_b4;
        local_140 = local_b0;
        FUN_01aaa328(iVar10,pcVar26,puVar24[4],&local_148,&local_d8);
      }
    }
  }
  else {
    iVar10 = DAT_01d4ce08;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_c4 = *(uint ******)(DAT_01d4ce08 + 0x14);
      local_c0 = *(uint ******)(DAT_01d4ce08 + 0x18);
      local_c8 = (uint *****)&SUB_00000004;
      DataMemoryBarrier(0xb);
      pcVar26 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar26 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      puVar24 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar24 = &DAT_01cfc5e0;
      }
      iVar11 = (*(code *)puVar24[3])(pcVar26,&local_c8);
      if (iVar11 != 0) {
        if (*(int *)(DAT_01d4ce08 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce2cfc);
        }
        local_b4 = (uint *****)&local_d8;
        local_98 = *(uint ******)(DAT_01d4ce08 + 0x24);
        local_94 = *(uint ******)(DAT_01d4ce08 + 0x28);
        local_b8 = (uint *****)&local_a0;
        local_1a8 = (uint *****)&local_b8;
        local_90 = (uint *****)0x0;
        local_1a4 = (uint *****)&DAT_00000001;
        local_d8 = (uint *****)0x420750;
        local_b0 = (uint *****)&DAT_01d2ea4c;
        local_d4 = (uint *****)&DAT_0000001d;
        local_148 = local_c8;
        local_144 = local_c4;
        local_140 = local_c0;
        local_1a0 = (uint *****)(DAT_01d4ce08 + 0x1c);
        local_a0 = (uint *****)*(uint *****)(DAT_01d4ce08 + 0x1c);
        local_9c = (uint *****)*(int *)(DAT_01d4ce08 + 0x20);
        FUN_01aaa328(iVar10,pcVar26,puVar24[4],&local_148,&local_1a8);
      }
    }
  }
  local_98 = local_1c8;
  local_94 = local_1c4;
  local_90 = (uint *****)CONCAT22(local_90._2_2_,(undefined2)local_1c0);
  local_90 = (uint *****)CONCAT13((char)uVar28,(undefined3)local_90);
  local_a0 = local_220;
  local_9c = local_224;
  FUN_012caf64(&local_148,param_1[0x14],&local_a0);
  goto LAB_012c9264;
code_r0x012c9704:
  local_90 = (uint *****)CONCAT13(2,(undefined3)local_90);
  FUN_012caf64(&local_148,param_1[0x14],&local_a0);
  pppppuVar12 = (uint *****)FUN_00667978("Server closed connection",0x18);
LAB_012c97e0:
  FUN_011178c4(param_1 + 0x16);
  FUN_005faf6c(param_1 + 0x15);
  FUN_0193c71c(param_1 + 0x14);
  *(undefined1 *)local_204 = 1;
  bVar5 = false;
LAB_012c9818:
  local_208 = param_1 + 0xe;
  if (bVar5) {
    uVar13 = 5;
LAB_012c9d0c:
    local_228 = (undefined1 *)((int)param_1 + 0x31);
    uVar21 = 3;
    uVar25 = 1;
    *local_228 = uVar13;
LAB_012c9d1c:
    *(undefined1 *)(param_1 + 0x3c) = uVar21;
    return uVar25;
  }
  FUN_012c7eb0(local_208);
  if (pppppuVar12 == (uint *****)0x0) goto LAB_012c9b34;
  local_158 = pppppuVar12;
  if ((DAT_01d50f88 < 4) &&
     ((DAT_01d4cdec - 1 < 2 ||
      ((DAT_01d4cdec != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4cde4), cVar6 != '\0')))))) {
    iVar10 = FUN_01aaa278(DAT_01d4cde4);
    if (iVar10 == 0) goto LAB_012c99d8;
    if (*(uint ******)(DAT_01d4cde4 + 0x20) == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce2c6c);
    }
    local_1a4 = (uint *****)&local_1c8;
    local_98 = *(uint ******)(DAT_01d4cde4 + 0x24);
    local_94 = *(uint ******)(DAT_01d4cde4 + 0x28);
    local_c0 = (uint *****)(DAT_01d4cde4 + 0x1c);
    local_a0 = (uint *****)*local_c0;
    local_1a8 = (uint *****)&local_a0;
    local_c8 = (uint *****)&local_1a8;
    local_90 = (uint *****)0x0;
    local_c4 = (uint *****)&DAT_00000001;
    local_1c8 = (uint *****)&DAT_00587571;
    local_1a0 = (uint *****)&DAT_01d2ea4c;
    local_1c4 = (uint *****)&local_d8;
    local_d8 = (uint *****)&local_158;
    local_d4 = (uint *****)FUN_00667a08;
    local_9c = *(uint ******)(DAT_01d4cde4 + 0x20);
    FUN_01aaaecc(DAT_01d4cde4,&local_c8);
    iVar10 = DAT_01d4cde4;
    if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
      local_b4 = *(uint ******)(DAT_01d4cde4 + 0x14);
      local_b0 = *(uint ******)(DAT_01d4cde4 + 0x18);
      local_b8 = (uint *****)0x2;
      DataMemoryBarrier(0xb);
      pcVar26 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar26 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      puVar24 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar24 = &DAT_01cfc5e0;
      }
      iVar11 = (*(code *)puVar24[3])(pcVar26,&local_b8);
      if (iVar11 != 0) {
        local_148 = local_b8;
        local_144 = local_b4;
        local_140 = local_b0;
        FUN_01aaa328(iVar10,pcVar26,puVar24[4],&local_148,&local_c8);
      }
    }
  }
  else {
LAB_012c99d8:
    iVar10 = DAT_01d4cde4;
    if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
      local_184 = *(uint ******)(DAT_01d4cde4 + 0x14);
      local_180 = *(uint ******)(DAT_01d4cde4 + 0x18);
      local_188 = (uint *****)0x2;
      DataMemoryBarrier(0xb);
      pcVar26 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar26 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      puVar24 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar24 = &DAT_01cfc5e0;
      }
      iVar11 = (*(code *)puVar24[3])(pcVar26,&local_188);
      if (iVar11 != 0) {
        if (*(uint ******)(DAT_01d4cde4 + 0x20) == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce2c6c);
        }
        local_b4 = (uint *****)&local_d8;
        local_98 = *(uint ******)(DAT_01d4cde4 + 0x24);
        local_94 = *(uint ******)(DAT_01d4cde4 + 0x28);
        local_b8 = (uint *****)&local_a0;
        local_1a8 = (uint *****)&local_b8;
        local_90 = (uint *****)0x0;
        local_1a4 = (uint *****)&DAT_00000001;
        local_d8 = (uint *****)&DAT_00587571;
        local_b0 = (uint *****)&DAT_01d2ea4c;
        local_d4 = (uint *****)&local_c8;
        local_c8 = (uint *****)&local_158;
        local_c4 = (uint *****)FUN_00667a08;
        local_148 = local_188;
        local_144 = local_184;
        local_140 = local_180;
        local_1a0 = (uint *****)(DAT_01d4cde4 + 0x1c);
        local_a0 = *(uint ******)(DAT_01d4cde4 + 0x1c);
        local_9c = *(uint ******)(DAT_01d4cde4 + 0x20);
        FUN_01aaa328(iVar10,pcVar26,puVar24[4],&local_148,&local_1a8);
      }
    }
  }
  (*(code *)**local_158)();
LAB_012c9b34:
  *(undefined1 *)(param_1 + 0xc) = 0;
  goto LAB_012c834c;
}

