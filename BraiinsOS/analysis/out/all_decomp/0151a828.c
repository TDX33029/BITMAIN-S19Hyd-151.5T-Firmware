// FUN_0151a828 @ 0151a828 size=3220 calls_out=11 calls_in=1
// strings: 

void FUN_0151a828(undefined4 *param_1,uint *param_2,int param_3,int param_4,undefined4 param_5,
                 int param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  char cVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 *puVar22;
  code *pcVar23;
  uint *puVar24;
  uint uVar25;
  int iVar26;
  undefined4 *puVar27;
  uint uVar28;
  undefined4 **ppuVar29;
  undefined4 **ppuVar30;
  uint uVar31;
  bool bVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  uint local_244;
  uint local_240;
  uint local_23c;
  uint local_238;
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_1e0;
  uint local_1dc;
  uint local_1d8;
  uint local_1c4;
  uint local_1c0;
  uint uStack_1bc;
  undefined4 local_1b8;
  int local_1b4;
  undefined8 local_1b0;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint uStack_194;
  undefined4 local_190;
  int iStack_18c;
  undefined8 uStack_188;
  uint local_180;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint local_170;
  uint uStack_16c;
  uint local_168;
  uint uStack_164;
  undefined2 local_130;
  uint local_128;
  undefined4 **local_124;
  int iStack_120;
  undefined4 **ppuStack_11c;
  undefined2 local_118;
  undefined2 local_116;
  undefined2 local_114;
  undefined2 local_112;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined4 **local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 ***local_a8;
  int local_a4;
  undefined1 *local_a0;
  undefined4 local_9c;
  undefined *local_98;
  undefined4 local_94;
  undefined *local_90;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined4 local_84;
  uint *local_80;
  uint local_7c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 auStack_29 [5];
  
  local_1e0 = *param_2;
  uVar28 = param_2[1];
  uVar31 = param_2[2];
  uVar25 = param_2[3];
  uVar33 = (**(code **)(param_6 + 0xc))(param_5);
  puVar27 = (undefined4 *)((ulonglong)uVar33 >> 0x20);
  uVar10 = (undefined4)uVar33;
  (*(code *)puVar27[6])(uVar10,uVar28,uVar31);
  if ((uVar25 & 1) == 0) {
    bVar32 = local_1e0 != 0;
    local_1e0 = 0x80000000;
    if (bVar32) {
      thunk_FUN_016d3fb4(uVar28);
    }
  }
  else {
    local_1dc = uVar28;
    local_1d8 = uVar31;
  }
  uVar34 = (*(code *)puVar27[4])(uVar10);
  if (local_1e0 == 0x80000000) {
    uVar25 = 0x80000000;
    uVar16 = uVar28;
  }
  else {
    uVar11 = 0;
    if ((int)uVar31 < 0) {
LAB_0151a900:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar11,uVar31);
    }
    if (uVar31 == 0) {
      uVar25 = 0;
      uVar16 = 1;
    }
    else {
      uVar16 = thunk_FUN_016d4a50(uVar31);
      if (uVar16 == 0) {
        uVar11 = 1;
        goto LAB_0151a900;
      }
      uVar25 = uVar31;
    }
    FUN_016dd1aa(uVar16,uVar28,uVar31);
  }
  local_1b8 = param_5;
  ppuVar29 = *(undefined4 ***)(param_4 + 8);
  local_1b4 = param_6;
  iVar14 = (int)ppuVar29 * 0x14;
  uVar11 = 0;
  local_1c4 = uVar25;
  local_1c0 = uVar16;
  uStack_1bc = uVar31;
  local_1b0 = uVar34;
  if ((undefined4 **)0x6666666 < ppuVar29) {
LAB_0151a98c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar11,iVar14);
  }
  uVar1 = *(undefined1 *)(param_4 + 0x59);
  uVar2 = *(undefined1 *)(param_4 + 0x58);
  uVar3 = *(undefined2 *)(param_4 + 0x12);
  uVar4 = *(undefined2 *)(param_4 + 0x10);
  uVar5 = *(undefined2 *)(param_4 + 0xe);
  uVar6 = *(undefined2 *)(param_4 + 0xc);
  if (iVar14 == 0) {
    local_a4 = 4;
    local_a8 = (undefined4 ***)0x0;
  }
  else {
    iVar12 = *(int *)(param_4 + 4);
    iVar13 = thunk_FUN_016d4a50(iVar14);
    if (iVar13 == 0) {
      uVar11 = 4;
      goto LAB_0151a98c;
    }
    local_a8 = (undefined4 ***)ppuVar29;
    local_a4 = iVar13;
    uVar34 = local_1b0;
    if (ppuVar29 != (undefined4 **)0x0) {
      iVar26 = 0;
      ppuVar30 = (undefined4 **)0x0;
      do {
        if (iVar14 == iVar26) break;
        puVar24 = (uint *)(iVar12 + iVar26);
        ppuVar30 = (undefined4 **)((int)ppuVar30 + 1);
        local_1b0 = uVar34;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)*puVar24) {
        case '\0':
          uVar25 = puVar24[3];
          uVar11 = 0;
          uVar31 = local_22c;
          if ((int)(uVar25 | uVar25 << 1) < 0) goto LAB_0151b510;
          uVar16 = puVar24[2];
          uVar31 = uVar25 << 1;
          if (uVar31 == 0) {
            uVar18 = 1;
            uVar17 = 0;
          }
          else {
            uVar18 = thunk_FUN_016d4a50(uVar31,local_22c);
            if (uVar18 == 0) {
              uVar11 = 1;
              goto LAB_0151b510;
            }
            uVar17 = uVar25;
            uVar34 = local_1b0;
          }
          local_1b0 = uVar34;
          FUN_016dd1aa(uVar18,uVar16,uVar31);
          uVar9 = 0;
          local_22c = uVar18;
          local_19c = uVar25;
          uVar34 = local_1b0;
          break;
        case '\x01':
          uVar9 = 1;
          goto LAB_0151af28;
        case '\x02':
          uVar9 = 2;
          goto LAB_0151af28;
        case '\x03':
          uVar25 = puVar24[3];
          uVar11 = 0;
          uVar31 = local_230;
          if ((int)uVar25 < 0) goto LAB_0151b510;
          uVar16 = puVar24[2];
          if (uVar25 == 0) {
            uVar18 = 1;
            uVar17 = 0;
          }
          else {
            uVar18 = thunk_FUN_016d4a50(uVar25,local_230);
            uVar31 = uVar25;
            if (uVar18 == 0) {
LAB_0151b508:
              uVar11 = 1;
LAB_0151b510:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(uVar11,uVar31);
            }
            uVar17 = uVar25;
            uVar34 = local_1b0;
          }
          local_1b0 = uVar34;
          FUN_016dd1aa(uVar18,uVar16,uVar25);
          uVar9 = 3;
          local_230 = uVar18;
          local_19c = uVar25;
          uVar34 = local_1b0;
          break;
        case '\x04':
          uVar25 = puVar24[3];
          uVar11 = 0;
          uVar31 = local_234;
          if ((int)uVar25 < 0) goto LAB_0151b510;
          uVar16 = puVar24[2];
          if (uVar25 == 0) {
            uVar18 = 1;
            uVar17 = 0;
          }
          else {
            uVar18 = thunk_FUN_016d4a50(uVar25,local_234);
            uVar31 = uVar25;
            if (uVar18 == 0) goto LAB_0151b508;
            uVar17 = uVar25;
            uVar34 = local_1b0;
          }
          local_1b0 = uVar34;
          FUN_016dd1aa(uVar18,uVar16,uVar25);
          uVar9 = 4;
          local_234 = uVar18;
          local_19c = uVar25;
          uVar34 = local_1b0;
          break;
        case '\x05':
          uVar25 = puVar24[3];
          uVar11 = 0;
          uVar31 = local_23c;
          if ((int)uVar25 < 0) goto LAB_0151b510;
          uVar19 = puVar24[2];
          uVar16 = puVar24[4];
          if (uVar25 == 0) {
            uVar18 = 1;
            uVar17 = 0;
          }
          else {
            uVar18 = thunk_FUN_016d4a50(uVar25,uVar19);
            uVar31 = uVar25;
            if (uVar18 == 0) goto LAB_0151b508;
            uVar17 = uVar25;
            uVar34 = local_1b0;
          }
          local_1b0 = uVar34;
          FUN_016dd1aa(uVar18,uVar19,uVar25);
          uVar9 = 5;
          local_23c = uVar18;
          local_19c = uVar25;
          local_198 = uVar16;
          uVar34 = local_1b0;
          break;
        default:
          local_1a8 = *puVar24;
          local_1a4 = puVar24[1];
          local_1a0 = puVar24[2];
          local_19c = puVar24[3];
          local_198 = puVar24[4];
          goto LAB_0151af2c;
        case '\a':
          uVar9 = 7;
          goto LAB_0151af28;
        case '\b':
          uVar9 = 8;
          goto LAB_0151af28;
        case '\f':
          uVar25 = puVar24[3];
          uVar11 = 0;
          uVar31 = local_238;
          if ((int)uVar25 < 0) goto LAB_0151b510;
          uVar16 = puVar24[2];
          if (uVar25 == 0) {
            uVar18 = 1;
            uVar17 = 0;
          }
          else {
            uVar18 = thunk_FUN_016d4a50(uVar25,local_238);
            uVar31 = uVar25;
            if (uVar18 == 0) goto LAB_0151b508;
            uVar17 = uVar25;
            uVar34 = local_1b0;
          }
          local_1b0 = uVar34;
          FUN_016dd1aa(uVar18,uVar16,uVar25);
          uVar9 = 0xc;
          local_238 = uVar18;
          local_19c = uVar25;
          uVar34 = local_1b0;
          break;
        case '\r':
          uVar25 = puVar24[3];
          uVar11 = 0;
          uVar31 = local_240;
          if ((int)uVar25 < 0) goto LAB_0151b510;
          uVar16 = puVar24[2];
          if (uVar25 == 0) {
            uVar18 = 1;
            uVar17 = 0;
          }
          else {
            uVar18 = thunk_FUN_016d4a50(uVar25,local_240);
            uVar31 = uVar25;
            if (uVar18 == 0) goto LAB_0151b508;
            uVar17 = uVar25;
            uVar34 = local_1b0;
          }
          local_1b0 = uVar34;
          FUN_016dd1aa(uVar18,uVar16,uVar25);
          uVar9 = 0xd;
          local_240 = uVar18;
          local_19c = uVar25;
          uVar34 = local_1b0;
          break;
        case '\x0e':
          uVar9 = 0xe;
          goto LAB_0151af28;
        case '\x0f':
          FUN_014976a0((uint)&local_1a8 | 4,puVar24[2],puVar24[3]);
          local_1a8 = CONCAT31(local_1a8._1_3_,0xf);
          uVar34 = local_1b0;
          goto LAB_0151af2c;
        case '\x10':
          uVar25 = puVar24[4];
          if (puVar24[1] == 0x80000000) {
            uVar31 = 0x80000000;
            uVar18 = puVar24[2];
            uVar16 = puVar24[3];
          }
          else {
            uVar16 = puVar24[3];
            uVar11 = 0;
            uVar31 = local_244;
            if ((int)uVar16 < 0) goto LAB_0151b510;
            uVar17 = puVar24[2];
            if (uVar16 == 0) {
              uVar18 = 1;
              uVar31 = 0;
            }
            else {
              uVar18 = thunk_FUN_016d4a50(uVar16,local_244);
              uVar31 = uVar16;
              if (uVar18 == 0) goto LAB_0151b508;
              uVar34 = local_1b0;
            }
            local_1b0 = uVar34;
            FUN_016dd1aa(uVar18,uVar17,uVar16);
            local_244 = uVar18;
          }
          uVar9 = 0x10;
          local_1a4 = uVar31;
          local_1a0 = uVar18;
          local_19c = uVar16;
          local_198 = uVar25;
          uVar34 = local_1b0;
LAB_0151af28:
          local_1a8 = CONCAT31(local_1a8._1_3_,uVar9);
          goto LAB_0151af2c;
        }
        local_1a8 = CONCAT31(local_1a8._1_3_,uVar9);
        local_1a4 = uVar17;
        local_1a0 = uVar18;
LAB_0151af2c:
        puVar24 = (uint *)(iVar13 + iVar26);
        iVar26 = iVar26 + 0x14;
        *puVar24 = local_1a8;
        puVar24[1] = local_1a4;
        puVar24[2] = local_1a0;
        puVar24[3] = local_19c;
        puVar24[4] = local_198;
      } while (ppuVar29 != ppuVar30);
    }
  }
  local_124 = local_a8;
  iStack_120 = local_a4;
  local_110 = *(undefined4 *)(param_4 + 0x14);
  uStack_10c = *(undefined4 *)(param_4 + 0x18);
  uStack_108 = *(undefined4 *)(param_4 + 0x1c);
  uStack_104 = *(undefined4 *)(param_4 + 0x20);
  local_100 = *(undefined4 *)(param_4 + 0x24);
  uStack_fc = *(undefined4 *)(param_4 + 0x28);
  uStack_f8 = *(undefined4 *)(param_4 + 0x2c);
  uStack_f4 = *(undefined4 *)(param_4 + 0x30);
  local_f0 = *(undefined4 *)(param_4 + 0x34);
  uStack_ec = *(undefined4 *)(param_4 + 0x38);
  uStack_e8 = *(undefined4 *)(param_4 + 0x3c);
  uStack_e4 = *(undefined4 *)(param_4 + 0x40);
  local_e0 = *(undefined4 *)(param_4 + 0x44);
  uStack_dc = *(undefined4 *)(param_4 + 0x48);
  uStack_d8 = *(undefined4 *)(param_4 + 0x4c);
  uStack_d4 = *(undefined4 *)(param_4 + 0x50);
  uStack_d0 = *(undefined4 *)(param_4 + 0x54);
  local_128 = 0x80000002;
  local_b0 = 0;
  local_b4 = 1;
  local_b8 = (undefined4 **)0x0;
  ppuStack_11c = ppuVar29;
  local_118 = uVar6;
  local_116 = uVar5;
  local_114 = uVar4;
  local_112 = uVar3;
  local_cc = uVar2;
  local_cb = uVar1;
  local_1b0 = uVar34;
  FUN_0150e524(&local_128,&local_b8,0x80000001);
  local_a8 = (undefined4 ***)local_b8;
  local_a4 = local_b4;
  local_a0 = (undefined1 *)local_b0;
  FUN_016dd1aa(&local_9c,&local_128,0x6c);
  puVar24 = &local_1a8;
  local_130 = 5;
  FUN_016dd1aa(puVar24,&local_a8,0x78);
  FUN_0151eddc(&local_1c4,puVar24);
  iVar14 = 1;
  if (0x80000000 < local_1a8) {
    iVar14 = local_1a8 + 0x7fffffff;
  }
  uVar34 = local_1b0;
  uVar25 = local_1a4;
  switch(iVar14) {
  case 0:
  case 3:
    break;
  case 1:
    FUN_01517c10(&local_19c);
    uVar25 = local_1a8;
    uVar34 = local_1b0;
    if (local_1a8 != 0x80000000) {
LAB_0151ab90:
      uVar34 = local_1b0;
      if (uVar25 != 0) {
        thunk_FUN_016d3fb4(puVar24[1]);
        uVar34 = local_1b0;
      }
    }
    break;
  case 2:
    if (local_1a4 != 0x80000000) {
      puVar24 = (uint *)((uint)puVar24 | 4);
      goto LAB_0151ab90;
    }
    break;
  default:
    if (local_1a4 != 0x80000000) {
      puVar24 = (uint *)((uint)&local_1a8 | 4);
      goto LAB_0151ab90;
    }
  }
  local_1b0._4_4_ = (undefined4 *)((ulonglong)uVar34 >> 0x20);
  puVar7 = local_1b0._4_4_;
  local_1b0._0_4_ = (undefined4)uVar34;
  uVar11 = (undefined4)local_1b0;
  puVar22 = local_1b0._4_4_ + 3;
  local_1b0 = uVar34;
  (*(code *)*puVar22)(&local_1a8);
  pcVar23 = *(code **)(*(int *)(param_3 + 0xc) + 0x10);
  uVar34 = (*pcVar23)(*(undefined4 *)(param_3 + 8),0,pcVar23,param_2 + 0x1b,0x20);
  puVar22 = (undefined4 *)((ulonglong)uVar34 >> 0x20);
  uVar15 = (undefined4)uVar34;
  if (0x40 < local_168) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,local_168,0x40,&DAT_018a7f14);
  }
  local_98 = &DAT_0040c506;
  local_a0 = &local_2b;
  local_b8 = (undefined4 **)CONCAT22(local_b8._2_2_,0x800);
  local_2b = 0x1d;
  local_88 = &local_2a;
  local_a4 = 2;
  local_a8 = &local_b8;
  local_90 = &DAT_0040c4d2;
  local_2a = (undefined1)local_168;
  local_7c = local_168;
  local_84 = 1;
  local_8c = 0x17;
  local_94 = 6;
  local_9c = 1;
  local_124 = (undefined4 **)0x0;
  local_128 = 0;
  local_80 = &local_1a8;
  iVar14 = (*(code *)puVar22[3])(uVar15,&local_a8,6,&local_128,8);
  ppuVar29 = local_124;
  uVar25 = local_128;
  if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0040c50c,0x24,auStack_29,&DAT_018a8a48,&DAT_018a8b18);
  }
  if ((code *)*puVar22 != (code *)0x0) {
    (*(code *)*puVar22)(uVar15);
  }
  if (puVar22[1] != 0) {
    thunk_FUN_016d3fb4(uVar15);
  }
  uVar31 = FUN_0156249c((uint)*(byte *)(param_4 + 0x2c) == (uVar25 & 0xff));
  uVar16 = FUN_0156249c((uint)*(byte *)(param_4 + 0x2d) == (uVar25 >> 8 & 0xff));
  uVar17 = FUN_0156249c((uint)*(byte *)(param_4 + 0x2e) == (uVar25 >> 0x10 & 0xff));
  uVar25 = FUN_0156249c((uint)*(byte *)(param_4 + 0x2f) == uVar25 >> 0x18);
  uVar18 = FUN_0156249c((uint)*(byte *)(param_4 + 0x30) == ((uint)ppuVar29 & 0xff));
  uVar19 = FUN_0156249c((uint)*(byte *)(param_4 + 0x31) == ((uint)ppuVar29 >> 8 & 0xff));
  uVar20 = FUN_0156249c((uint)*(byte *)(param_4 + 0x32) == ((uint)ppuVar29 >> 0x10 & 0xff));
  uVar21 = FUN_0156249c((uint)*(byte *)(param_4 + 0x33) == (uint)ppuVar29 >> 0x18);
  cVar8 = FUN_0156249c(uVar31 & uVar16 & uVar17 & uVar25 & uVar18 & uVar19 & uVar20 & uVar21 & 1);
  if (cVar8 == '\0') {
    pcVar23 = (code *)*puVar7;
    *param_1 = 0x80000000;
    if (pcVar23 != (code *)0x0) {
      (*pcVar23)(uVar11);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(uVar11);
    }
    if ((local_1c4 & 0x7fffffff) == 0) {
      pcVar23 = (code *)*puVar27;
    }
    else {
      thunk_FUN_016d3fb4(local_1c0);
      pcVar23 = (code *)*puVar27;
    }
    if (pcVar23 != (code *)0x0) {
      (*pcVar23)(uVar10);
    }
    if (puVar27[1] != 0) {
      thunk_FUN_016d3fb4(uVar10);
    }
    if ((local_1e0 & 0x7fffffff) == 0) goto LAB_0151b3c8;
  }
  else {
    local_19c = local_1e0;
    local_198 = local_1dc;
    uStack_194 = local_1d8;
    local_190 = param_5;
    iStack_18c = param_6;
    local_180 = param_2[0x1b];
    uStack_17c = param_2[0x1c];
    uStack_178 = param_2[0x1d];
    uStack_174 = param_2[0x1e];
    local_170 = param_2[0x1f];
    uStack_16c = param_2[0x20];
    local_168 = param_2[0x21];
    uStack_164 = param_2[0x22];
    local_1a8 = param_2[7];
    local_1a0 = param_2[9];
    local_1a4 = param_2[8];
    uStack_188 = uVar33;
    FUN_016dd1aa(param_1,&local_1a8,0x48);
    if ((code *)*puVar7 != (code *)0x0) {
      (*(code *)*puVar7)(uVar11);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(uVar11);
    }
    if ((local_1c4 & 0x7fffffff) == 0) goto LAB_0151b3c8;
    uVar28 = local_1c0;
  }
  thunk_FUN_016d3fb4(uVar28);
LAB_0151b3c8:
  if ((param_2[10] & 0x7fffffff) == 0) {
    uVar25 = param_2[0x18];
  }
  else {
    thunk_FUN_016d3fb4(param_2[0xb]);
    uVar25 = param_2[0x18];
  }
  if (uVar25 != 0) {
    puVar27 = (undefined4 *)param_2[0x19];
    pcVar23 = (code *)*puVar27;
    if (pcVar23 != (code *)0x0) {
      (*pcVar23)(uVar25);
    }
    if (puVar27[1] != 0) {
      thunk_FUN_016d3fb4(uVar25);
    }
  }
  uVar25 = param_2[0x16];
  puVar27 = (undefined4 *)param_2[0x17];
  pcVar23 = (code *)*puVar27;
  if (pcVar23 != (code *)0x0) {
    (*pcVar23)(uVar25);
  }
  if (puVar27[1] != 0) {
    thunk_FUN_016d3fb4(uVar25);
  }
  if (((char)param_2[0xf] == '\0') && ((param_2[0x10] & 0x7fffffff) != 0)) {
    thunk_FUN_016d3fb4(param_2[0x11]);
  }
  if (param_2[4] != 0) {
    thunk_FUN_016d3fb4(param_2[5]);
  }
  if ((cVar8 == '\0') && (param_2[7] != 0)) {
    thunk_FUN_016d3fb4(param_2[8]);
  }
  return;
}

