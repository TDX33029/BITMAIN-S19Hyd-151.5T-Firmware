// FUN_01457194 @ 01457194 size=6380 calls_out=42 calls_in=2
// strings: dns error | tcp connect error | tcp connect error | Network unreachable | tcp connect error | tcp connect error

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01457194(ushort *param_1,uint ******param_2,uint ******param_3)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  char cVar5;
  byte bVar6;
  uint ******ppppppuVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint *****pppppuVar13;
  uint *****pppppuVar14;
  uint ****ppppuVar15;
  undefined4 extraout_r1;
  byte *pbVar16;
  int iVar17;
  uint ******unaff_r4;
  uint uVar18;
  ushort uVar19;
  byte *pbVar20;
  uint *****pppppuVar21;
  uint ******unaff_r6;
  uint *****pppppuVar22;
  uint ******unaff_r7;
  uint ******ppppppuVar23;
  uint *****pppppuVar24;
  uint ******unaff_r8;
  ushort uVar25;
  uint ******ppppppuVar26;
  ushort uVar27;
  uint ******ppppppuVar28;
  uint ******ppppppuVar29;
  bool bVar30;
  bool bVar31;
  undefined8 uVar32;
  uint ******local_38c;
  uint ******local_384;
  uint ******local_380;
  uint ******local_37c;
  uint *****local_378;
  uint ******local_374;
  uint ******local_370;
  byte *local_36c;
  uint ******local_364;
  uint ******local_360;
  undefined1 auStack_358 [152];
  uint ******local_2c0;
  uint ******local_2bc;
  ushort local_2b8;
  ushort local_2b6;
  uint ******local_2b4;
  uint ******local_2b0;
  uint ******ppppppuStack_2ac;
  uint *****pppppuStack_2a8;
  uint ******local_2a0;
  uint ******local_29c;
  uint *****local_298;
  undefined4 local_290;
  uint ******ppppppuStack_28c;
  uint *****pppppuStack_288;
  uint ******local_280;
  uint ******local_27c;
  uint ******local_278;
  uint ******ppppppuStack_274;
  uint ******ppppppuStack_270;
  uint *****local_26c;
  uint ******ppppppuStack_268;
  uint ******ppppppuStack_264;
  uint *****pppppuStack_260;
  uint ******ppppppuStack_25c;
  uint ******local_258;
  uint ******local_254;
  uint ******ppppppuStack_250;
  uint ******ppppppuStack_24c;
  uint ******ppppppuStack_248;
  uint *****local_244;
  uint ******ppppppuStack_240;
  uint ******ppppppuStack_23c;
  uint *****pppppuStack_238;
  uint ******ppppppuStack_234;
  ushort local_22a;
  uint ******local_228;
  uint ******local_224;
  uint *****local_220;
  ushort local_218;
  ushort uStack_216;
  undefined2 local_214;
  ushort uStack_212;
  uint ******local_210;
  undefined4 local_20c;
  uint ******local_208;
  uint ******local_204;
  uint ******local_200;
  undefined4 local_1fc;
  uint ******local_1f8;
  uint ******local_1f4;
  uint *****local_1f0;
  uint ******local_1ec;
  undefined4 local_118;
  uint ******local_114;
  uint *****pppppuStack_110;
  uint ******local_108;
  uint ******local_104;
  uint ******local_100;
  uint ******ppppppuStack_fc;
  uint ******ppppppuStack_f8;
  uint ******ppppppuStack_f4;
  uint ******local_f0;
  uint *****local_ec;
  uint ******ppppppuStack_e8;
  uint ******ppppppuStack_e4;
  uint *****pppppuStack_e0;
  uint ******ppppppuStack_dc;
  uint ******local_70;
  uint ******local_6c;
  uint ******local_68;
  uint ******ppppppuStack_64;
  uint ******ppppppuStack_60;
  
  ppppppuVar28 = param_2 + 0x40;
  local_364 = ppppppuVar28;
  local_360 = param_3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_2 + 0x27a)) {
  case 0:
    *param_2 = param_2[0x26f];
    param_2[1] = param_2[0x270];
    param_2[2] = param_2[0x271];
    param_2[3] = param_2[0x272];
    param_2[4] = param_2[0x273];
    param_2[5] = param_2[0x274];
    param_2[6] = param_2[0x275];
    param_2[7] = param_2[0x276];
    param_2[8] = param_2[0x277];
    param_2[9] = param_2[0x278];
    param_2[10] = param_2[0x279];
    *(byte *)((int)param_2 + 0x62) = 0;
    unaff_r8 = param_2 + 0x26c;
    param_2[0xb] = (uint *****)unaff_r8;
LAB_01457248:
    *(byte *)((int)param_2 + 99) = 0;
    param_2[0xc] = *param_2;
    param_2[0xd] = param_2[1];
    param_2[0xe] = param_2[2];
    param_2[0xf] = param_2[3];
    param_2[0x10] = param_2[4];
    unaff_r7 = (uint ******)param_2[10];
    param_2[0x11] = param_2[5];
    param_2[0x12] = param_2[6];
    param_2[0x13] = param_2[7];
    param_2[0x14] = param_2[8];
    param_2[0x15] = param_2[9];
    param_2[0x16] = (uint *****)unaff_r7;
    param_2[0x17] = (uint *****)unaff_r8;
    FUN_010c3f0c(&local_218,*unaff_r8 + 2);
    if (local_218 == 3) {
      iVar9 = CONCAT22(uStack_212,local_214);
      ppppppuVar29 = (uint ******)(iVar9 + (int)local_210);
      *(ushort *)(param_2 + 0x18) = (ushort)local_20c;
      ppppppuVar7 = (uint ******)0x0;
      do {
        ppppppuVar26 = ppppppuVar7;
        if (ppppppuVar26 == local_210) {
          ppppppuVar26 = local_210;
          goto LAB_01457454;
        }
        unaff_r7 = (uint ******)(iVar9 + (int)ppppppuVar26);
        ppppppuVar7 = (uint ******)((int)unaff_r7 + 1);
        uVar18 = (uint)*(byte *)unaff_r7;
        if (0x7fffffff < (uint)(int)(char)*(byte *)unaff_r7) {
          uVar12 = *(byte *)((int)unaff_r7 + 1) & 0x3f;
          if (uVar18 < 0xe0) {
            uVar18 = uVar12 | (uVar18 & 0x1f) << 6;
            ppppppuVar7 = (uint ******)((int)unaff_r7 + 2);
          }
          else {
            uVar12 = *(byte *)((int)unaff_r7 + 2) & 0x3f | uVar12 << 6;
            if (uVar18 < 0xf0) {
              uVar18 = uVar12 | (uVar18 & 0x1f) << 0xc;
              ppppppuVar7 = (uint ******)((int)unaff_r7 + 3);
            }
            else {
              uVar18 = *(byte *)((int)unaff_r7 + 3) & 0x3f | uVar12 << 6 | (uVar18 & 7) << 0x12;
              ppppppuVar7 = unaff_r7 + 1;
            }
          }
        }
        ppppppuVar7 = (uint ******)(((int)local_210 - (int)ppppppuVar29) + (int)ppppppuVar7);
      } while (uVar18 == 0x5b);
      ppppppuVar29 = unaff_r7;
LAB_01457454:
      pbVar20 = (byte *)(iVar9 + (int)ppppppuVar26);
      pppppuVar14 = (uint *****)((int)local_210 - (int)ppppppuVar26);
      do {
        pppppuVar13 = pppppuVar14;
        if (pppppuVar13 == (uint *****)0x0) {
          pppppuVar13 = (uint *****)0x0;
          break;
        }
        pbVar16 = pbVar20 + (int)pppppuVar13;
        pbVar8 = pbVar16 + -1;
        uVar18 = (uint)(char)*pbVar8;
        if (0x7fffffff < uVar18) {
          pbVar8 = pbVar16 + -2;
          bVar6 = *pbVar8;
          unaff_r7 = (uint ******)(uint)bVar6;
          if ((char)bVar6 < -0x40) {
            pbVar8 = pbVar16 + -3;
            bVar1 = *pbVar8;
            if ((char)bVar1 < -0x40) {
              pbVar8 = pbVar16 + -4;
              unaff_r7 = (uint ******)((int)(char)bVar1 & 0x3fU | (*pbVar8 & 7) << 6);
            }
            else {
              unaff_r7 = (uint ******)(bVar1 & 0xf);
            }
            uVar12 = (int)(char)bVar6 & 0x3fU | (int)unaff_r7 << 6;
          }
          else {
            uVar12 = (uint)unaff_r7 & 0x1f;
          }
          uVar18 = uVar18 & 0x3f | uVar12 << 6;
        }
        pppppuVar14 = (uint *****)(pbVar8 + -(int)ppppppuVar29);
      } while (uVar18 == 0x5d);
      FUN_010ce18c(param_2 + 0x19,pbVar20,pppppuVar13);
      ppppppuVar7 = (uint ******)param_2[0x19];
      if (ppppppuVar7 == (uint ******)0x0) {
        if (pppppuVar13 == (uint *****)0x0) {
          pppppuVar14 = (uint *****)0x1;
        }
        else {
          pppppuVar14 = (uint *****)thunk_FUN_016d4a50(pppppuVar13);
          if (pppppuVar14 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(1,pppppuVar13);
          }
        }
        ppppppuVar7 = unaff_r8 + 1;
        FUN_016dd1aa(pppppuVar14,pbVar20,pppppuVar13);
        param_2[0x1d] = pppppuVar14;
        param_2[0x20] = (uint *****)ppppppuVar7;
        param_2[0x1e] = pppppuVar13;
        *(byte *)((int)param_2 + 0x85) = 0;
LAB_01457790:
        param_2[0x24] = pppppuVar13;
        *(byte *)(param_2 + 0x21) = 1;
        param_2[0x1f] = (uint *****)ppppppuVar7;
        param_2[0x22] = (uint *****)ppppppuVar7;
        param_2[0x23] = pppppuVar14;
switchD_014573a8_caseD_3:
        *(byte *)(param_2 + 0x21) = 0;
        ppppuVar15 = param_2[0x1f][1];
        uVar32 = (*(code *)ppppuVar15[3])
                           ((int)*param_2[0x1f] + ((int)ppppuVar15[2] - 1U & 0xfffffff8) + 8,
                            param_2[0x23],param_2[0x24]);
        *(undefined8 *)(param_2 + 0x22) = uVar32;
        goto LAB_014577f0;
      }
      local_210 = (uint ******)param_2[0x1b];
      local_20c = (uint ******)param_2[0x1c];
      *(byte *)((int)param_2 + 99) = 1;
      ppppppuVar29 = (uint ******)param_2[0x1a];
LAB_01457528:
      *(byte *)((int)param_2 + 99) = 0;
      local_214 = SUB42(ppppppuVar29,0);
      uStack_212 = (ushort)((uint)ppppppuVar29 >> 0x10);
      local_218 = (ushort)ppppppuVar7;
      uStack_216 = (ushort)((uint)ppppppuVar7 >> 0x10);
      FUN_010c35a0(auStack_358,&local_218,*param_2[0x17] + 2);
      FUN_016dd1aa(param_2 + 0x1a,auStack_358,0x98);
      *(byte *)(param_2 + 0x1d3) = 0;
switchD_014573f4_caseD_0:
      local_37c = param_2 + 0x1a;
      ((byte *)((int)param_2 + 0x74d))[0] = 0;
      ((byte *)((int)param_2 + 0x74d))[1] = 0;
      FUN_016dd1aa(ppppppuVar28,local_37c,0x98);
      if (*ppppppuVar28 != (uint *****)0x2 || param_2[0x41] != (uint *****)0x0) {
        FUN_016dd1aa(param_2 + 0x66,local_37c,0x70);
        param_2[0x1d4] = (uint *****)(param_2 + 0x11a);
        param_2[0x1af] = (uint *****)(param_2 + 0x7a);
        param_2[0x117] = (uint *****)(param_2 + 0x5c);
        param_2[0x1b0] = param_2[100];
        param_2[0x118] = param_2[100];
        *(byte *)((int)param_2 + 0x6c5) = 0;
        *(byte *)((int)param_2 + 0x465) = 0;
        *(byte *)((int)param_2 + 0x74e) = 0;
        FUN_016dd1aa(param_2 + 0x1b2,local_37c,0x50);
        param_2[0x1d5] = (uint *****)(param_2 + 0x82);
        param_2[0x1d6] = (uint *****)(param_2 + 0x1b2);
LAB_01457670:
        FUN_01434178(&local_108,param_2[0x1d5],param_3);
        uVar18 = (uint)local_108 & 0xffff;
        if (uVar18 != 4) {
          uStack_216 = (ushort)((uint)local_108 >> 0x10);
          local_214 = SUB42(local_104,0);
          uStack_212 = (ushort)((uint)local_104 >> 0x10);
          local_210 = local_100;
          local_20c = ppppppuStack_fc;
          local_208 = ppppppuStack_f8;
          local_204 = ppppppuStack_f4;
          local_200 = local_f0;
          local_1fc = local_ec;
          local_1f8 = ppppppuStack_e8;
          local_1f4 = ppppppuStack_e4;
          local_1f0 = pppppuStack_e0;
          local_1ec = ppppppuStack_dc;
          pppppuVar14 = param_2[0x1d6];
          pppppuVar13 = param_2[0x1d5];
          param_2[0x1d5] = (uint *****)0x0;
          local_218 = (ushort)local_108;
          if (pppppuVar13 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_00419463,0x28,&DAT_018a4d64);
          }
          local_22a = uStack_216;
          local_258 = local_100;
          local_254 = ppppppuStack_fc;
          ppppppuStack_250 = ppppppuStack_f8;
          ppppppuStack_24c = ppppppuStack_f4;
          ppppppuStack_248 = local_f0;
          local_244 = local_ec;
          ppppppuStack_240 = ppppppuStack_e8;
          ppppppuStack_23c = ppppppuStack_e4;
          pppppuStack_238 = pppppuStack_e0;
          ppppppuStack_234 = ppppppuStack_dc;
          unaff_r8 = local_104;
LAB_01457928:
          *(short *)(param_2 + 0x1c6) = (short)uVar18;
          *(ushort *)((int)param_2 + 0x71a) = local_22a;
          param_2[0x1c7] = (uint *****)unaff_r8;
          param_2[0x1c8] = (uint *****)local_258;
          param_2[0x1c9] = (uint *****)local_254;
          param_2[0x1ca] = (uint *****)ppppppuStack_250;
          param_2[0x1cb] = (uint *****)ppppppuStack_24c;
          param_2[0x1cc] = (uint *****)ppppppuStack_248;
          param_2[0x1cd] = local_244;
          param_2[0x1ce] = (uint *****)ppppppuStack_240;
          param_2[0x1cf] = (uint *****)ppppppuStack_23c;
          param_2[0x1d0] = pppppuStack_238;
          param_2[0x1d1] = (uint *****)ppppppuStack_234;
          param_2[0x1d2] = pppppuVar14;
          if (uVar18 == 4) {
            pppppuVar13 = param_2[0x1d4];
            param_2[0x1d4] = (uint *****)unaff_r8;
            param_2[0x1d5] = pppppuVar13;
            goto joined_r0x01457abc;
          }
          pppppuVar21 = (uint *****)0x1;
          local_290 = (uint ******)CONCAT22(local_290._2_2_,local_22a);
          local_280 = local_258;
          local_27c = local_254;
          local_278 = ppppppuStack_250;
          ppppppuStack_274 = ppppppuStack_24c;
          ppppppuStack_270 = ppppppuStack_248;
          local_26c = local_244;
          ppppppuStack_268 = ppppppuStack_240;
          ppppppuStack_264 = ppppppuStack_23c;
          pppppuStack_260 = pppppuStack_238;
          ppppppuStack_25c = ppppppuStack_234;
          pppppuVar13 = param_2[0x1d4];
          goto LAB_01457b74;
        }
        pppppuVar14 = (uint *****)0x14576ac;
        iVar9 = FUN_01657fc4(param_2[0x1d6],*param_3);
        if (iVar9 == 0) {
          unaff_r8 = (uint ******)param_2[0x1d5];
          param_2[0x1d5] = (uint *****)0x0;
          if (unaff_r8 == (uint ******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_00419463,0x28,&DAT_018a4d64);
          }
          uVar18 = 4;
          goto LAB_01457928;
        }
        bVar6 = 4;
LAB_01458e00:
        local_380 = param_2 + 0x1d3;
        *(byte *)local_380 = bVar6;
        bVar6 = 4;
LAB_01458e10:
        local_36c = (byte *)((int)param_2 + 0x62);
        *local_36c = bVar6;
        *param_1 = 4;
        *(byte *)(param_2 + 0x27a) = 3;
        return;
      }
      *(byte *)((int)param_2 + 0x9ad) = 0;
      ppppppuVar7 = param_2 + 0x5c;
      pppppuVar13 = param_2[100];
      param_2[0x269] = (uint *****)ppppppuVar7;
      param_2[0x26a] = pppppuVar13;
LAB_014575d4:
      *(undefined2 *)(param_2 + 0x21c) = 3;
      *(byte *)(param_2 + 0x26b) = 1;
      param_2[0x266] = (uint *****)ppppppuVar7;
      param_2[0x267] = pppppuVar13;
      param_2[0x268] = (uint *****)ppppppuVar7;
      pppppuVar13 = ppppppuVar7[1];
      if (pppppuVar13 != ppppppuVar7[3]) {
        do {
          uVar19 = *(ushort *)pppppuVar13;
          unaff_r4 = (uint ******)(uint)uVar19;
          ppppppuVar7[1] = pppppuVar13 + 8;
          FUN_016dd1aa(&local_280,(ushort *)((int)pppppuVar13 + 2),0x1e);
          if (unaff_r4 == (uint ******)&SUB_00000002) break;
          *(ushort *)(param_2 + 0x214) = uVar19;
          FUN_016dd1aa((byte *)((int)param_2 + 0x852),&local_280,0x1e);
          pppppuVar13 = param_2[0x266];
          FUN_010c4064(&local_218,param_2 + 0x214,param_2[0x267],pppppuVar13[5],pppppuVar13[4],
                       pppppuVar13[5],pppppuVar13[6]);
          if (CONCAT22(uStack_216,local_218) == 1) {
            puVar10 = (undefined4 *)((uint)&local_218 | 4);
            pppppuVar13 = (uint *****)puVar10[1];
            pppppuVar14 = (uint *****)puVar10[2];
            pppppuVar21 = (uint *****)puVar10[3];
            pppppuVar22 = (uint *****)puVar10[4];
            pppppuVar24 = (uint *****)puVar10[5];
            param_2[0x1d5] = (uint *****)*puVar10;
            param_2[0x1d6] = pppppuVar13;
            param_2[0x1d7] = pppppuVar14;
            param_2[0x1d8] = pppppuVar21;
            param_2[0x1d9] = pppppuVar22;
            param_2[0x1da] = pppppuVar24;
            pppppuVar13 = (uint *****)puVar10[7];
            pppppuVar14 = (uint *****)puVar10[8];
            pppppuVar21 = (uint *****)puVar10[9];
            pppppuVar22 = (uint *****)puVar10[10];
            pppppuVar24 = (uint *****)puVar10[0xb];
            param_2[0x1db] = (uint *****)puVar10[6];
            param_2[0x1dc] = pppppuVar13;
            param_2[0x1dd] = pppppuVar14;
            param_2[0x1de] = pppppuVar21;
            param_2[0x1df] = pppppuVar22;
            param_2[0x1e0] = pppppuVar24;
            param_2[0x1d4] = (uint *****)0x1;
            local_360 = (uint ******)param_2[0x1d9];
            local_370 = (uint ******)param_2[0x1dd];
            local_118 = (uint ******)param_2[0x1da];
            local_374 = (uint ******)param_2[0x1de];
            local_378 = param_2[0x1df];
            local_114 = (uint ******)param_2[0x1db];
            pppppuStack_110 = param_2[0x1dc];
            local_38c = (uint ******)param_2[0x1e0];
            unaff_r8 = (uint ******)param_2[0x1d6];
            local_37c = (uint ******)param_2[0x1d7];
            ppppppuVar26 = (uint ******)(uint)*(ushort *)(param_2 + 0x1d8);
            local_364 = (uint ******)(uint)*(ushort *)((int)param_2 + 0x756);
            uVar19 = *(ushort *)(param_2 + 0x1d5);
            sVar2 = *(short *)(param_2 + 0x21c);
            ppppppuVar28 = (uint ******)(uint)*(ushort *)((int)param_2 + 0x762);
joined_r0x01458d2c:
            if ((sVar2 != 3) && (pppppuVar13 = param_2[0x226], pppppuVar13 != (uint *****)0x0)) {
              pppppuVar14 = param_2[0x227];
              ppppuVar15 = *pppppuVar14;
              if (ppppuVar15 != (uint ****)0x0) {
                (*(code *)ppppuVar15)(pppppuVar13);
              }
              if (pppppuVar14[1] != (uint ****)0x0) {
                thunk_FUN_016d3fb4(pppppuVar13);
              }
            }
            *(undefined2 *)(param_2 + 0x26b) = 0x100;
            if (uVar19 != 4) goto LAB_01458da4;
LAB_01458dfc:
            bVar6 = 3;
            goto LAB_01458e00;
          }
          FUN_016dd1aa(param_2 + 0x1d6,&local_210,0xf8);
          param_2[0x1d4] = (uint *****)0x0;
          FUN_016dd1aa(param_2 + 0x228,param_2 + 0x1d6,0xf8);
LAB_014587c4:
          uVar18 = (&switchD_014587d4::switchdataD_014587d8)[*(byte *)(param_2 + 0x23e)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(byte *)(param_2 + 0x23e)) {
          case 0:
            unaff_r4 = (uint ******)param_2[0x22a];
            if (unaff_r4 != (uint ******)&DAT_3b9aca00) {
              pppppuVar13 = param_2[0x228];
              pppppuVar14 = param_2[0x229];
              FUN_016dd1aa(&local_70,param_2 + 0x22c,0x48);
              FUN_014d06ac(&local_218,extraout_r1,pppppuVar13,pppppuVar14,unaff_r4,&local_70,
                           &DAT_018a67b0);
              FUN_016dd1aa(&local_108,&local_218,0x98);
              uVar18 = FUN_016dd1aa(param_2 + 0x240,&local_108,0x98);
              goto switchD_014587d4_caseD_3;
            }
            FUN_016dd1aa(param_2 + 0x240,param_2 + 0x22c,0x48);
            break;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7ca0(&DAT_018a67c0);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7cc0(&DAT_018a67c0);
          case 3:
switchD_014587d4_caseD_3:
            uVar32 = thunk_FUN_016de0ee(uVar18,0x40);
            local_37c = (uint ******)((int)uVar32 + (int)((ulonglong)uVar32 >> 0x20));
            unaff_r7 = (uint ******)(uint)*(byte *)(local_37c + 0xe);
            if (unaff_r7 == (uint ******)&DAT_00000001) {
LAB_0145891c:
              unaff_r7 = (uint ******)
                         (~(uint)*(byte *)(local_37c + 0xc) & 1 |
                         (uint)(*(byte *)((int)local_37c + 0x31) != 0));
            }
            else if (unaff_r7 != (uint ******)&SUB_00000002) {
              FUN_015e8e6c(local_37c,FUN_009948a0);
              *(byte *)(local_37c + 0xe) = 1;
              unaff_r4 = param_2 + 0x254;
              goto LAB_0145891c;
            }
            FUN_01459180(&local_218,param_2 + 0x254,param_3);
            unaff_r8 = (uint ******)CONCAT22(uStack_216,local_218);
            if (unaff_r8 == (uint ******)0x3) {
              iVar9 = FUN_016540e8((uint)(unaff_r7 == (uint ******)&SUB_00000002) |
                                   (uint)unaff_r7 & 1,param_2 + 0x240,*param_3);
              if (iVar9 == 0) {
                bVar6 = *(byte *)(param_2 + 0x265);
                ppppppuVar26 = param_2;
                goto joined_r0x01458990;
              }
              bVar6 = 3;
              goto LAB_01458df0;
            }
            local_37c = (uint ******)CONCAT22(uStack_212,local_214);
            bVar6 = *(byte *)(param_2 + 0x265);
            unaff_r4 = local_20c;
            ppppppuVar26 = local_210;
joined_r0x01458990:
            if (bVar6 == 3) {
              FUN_01434db4(param_2 + 0x25e);
              *(byte *)((int)param_2 + 0x995) = 0;
              unaff_r7 = unaff_r4;
            }
            else if (bVar6 == 0) {
              FUN_016dffb2(param_2[0x25c]);
            }
            FUN_00a07b4c(param_2 + 0x240);
            if (unaff_r8 == (uint ******)0x3) {
              FUN_01419fa4(&local_218);
              local_37c = (uint ******)CONCAT22(uStack_216,local_218);
              unaff_r8 = (uint ******)&SUB_00000002;
              ppppppuVar26 = (uint ******)CONCAT22(uStack_212,local_214);
            }
            goto LAB_01458a14;
          }
          ppppppuVar7 = param_2 + 0x240;
          FUN_01459180(&local_218,ppppppuVar7,param_3);
          unaff_r4 = local_20c;
          ppppppuVar26 = local_210;
          unaff_r8 = (uint ******)CONCAT22(uStack_216,local_218);
          if (unaff_r8 == (uint ******)0x3) {
            bVar6 = 4;
LAB_01458df0:
            *(byte *)(param_2 + 0x23e) = bVar6;
            *(byte *)((int)param_2 + 0x9ad) = 3;
            goto LAB_01458dfc;
          }
          local_37c = (uint ******)CONCAT22(uStack_212,local_214);
          if (*(byte *)(param_2 + 0x251) == 3) {
            FUN_01434db4(param_2 + 0x24a);
            *(byte *)((int)param_2 + 0x945) = 0;
            ppppppuVar7 = unaff_r4;
joined_r0x01458bd8:
            ppppppuVar29 = (uint ******)((uint)ppppppuVar26 >> 0x10);
            if (unaff_r8 == (uint ******)&SUB_00000002) {
LAB_01458a20:
              local_218 = (ushort)local_37c;
              uStack_216 = (ushort)((uint)local_37c >> 0x10);
              local_214 = SUB42(ppppppuVar26,0);
              uStack_212 = (ushort)((uint)ppppppuVar26 >> 0x10);
              ppppppuVar7 = (uint ******)thunk_FUN_016d4a50(8);
              if (ppppppuVar7 == (uint ******)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(4,8);
              }
              ppppppuVar29 = (uint ******)0x0;
              *ppppppuVar7 = (uint *****)local_37c;
              ppppppuVar7[1] = (uint *****)ppppppuVar26;
              ppppppuVar26 = (uint ******)0x0;
            }
          }
          else {
            if (*(byte *)(param_2 + 0x251) == 0) {
              FUN_016dffb2(param_2[0x248]);
              goto joined_r0x01458bd8;
            }
LAB_01458a14:
            ppppppuVar7 = param_2 + 0x240;
            ppppppuVar29 = (uint ******)((uint)ppppppuVar26 >> 0x10);
            if (unaff_r8 == (uint ******)&SUB_00000002) goto LAB_01458a20;
          }
          *(byte *)(param_2 + 0x23e) = 1;
          FUN_01434e2c(param_2 + 0x228);
          if (unaff_r8 != (uint ******)&SUB_00000002) {
            uVar19 = 3;
            sVar2 = *(short *)(param_2 + 0x21c);
            ppppppuVar28 = ppppppuVar29;
            local_360 = unaff_r4;
            local_364 = unaff_r7;
            goto joined_r0x01458d2c;
          }
          if (*(short *)(param_2 + 0x21c) == 3) {
            *(undefined2 *)((int)param_2 + 0x872) = *(undefined2 *)((int)param_2 + 0x852);
            *(byte *)(param_2 + 0x26b) = 1;
            unaff_r7 = (uint ******)param_2[0x217];
            local_37c = (uint ******)param_2[0x218];
            param_2[0x21e] = param_2[0x216];
            param_2[0x21f] = (uint *****)unaff_r7;
            unaff_r8 = (uint ******)&DAT_018a3eac;
            *(short *)(param_2 + 0x21c) = *(short *)(param_2 + 0x214);
            param_2[0x222] = param_2[0x21a];
            param_2[0x21d] = param_2[0x215];
            param_2[0x220] = (uint *****)local_37c;
            param_2[0x221] = param_2[0x219];
            param_2[0x223] = param_2[0x21b];
            param_2[0x224] = (uint *****)"tcp connect error";
            param_2[0x225] = (uint *****)0x11;
            param_2[0x226] = (uint *****)ppppppuVar7;
            param_2[0x227] = (uint *****)&DAT_018a3eac;
          }
          else if (ppppppuVar7 != (uint ******)0x0) {
            FUN_009b8520(ppppppuVar7);
            thunk_FUN_016d3fb4(ppppppuVar7);
          }
          ppppppuVar7 = (uint ******)param_2[0x268];
          pppppuVar13 = ppppppuVar7[1];
        } while (pppppuVar13 != ppppppuVar7[3]);
      }
      uVar19 = *(ushort *)(param_2 + 0x21c);
      if (uVar19 == 3) {
        FUN_015e79d4(&local_218,7,"Network unreachable",0x13);
        local_378 = (uint *****)thunk_FUN_016d4a50(8);
        if (local_378 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,8);
        }
        uVar19 = 2;
        local_38c = (uint ******)&DAT_018a3eac;
        local_370 = (uint ******)0x40a420;
        *local_378 = (uint ****)CONCAT22(uStack_216,local_218);
        local_378[1] = (uint ****)CONCAT22(uStack_212,local_214);
        local_374 = (uint ******)&DAT_00000011;
        ppppppuVar26 = param_2;
      }
      else {
        ppppppuVar26 = (uint ******)(uint)*(ushort *)(param_2 + 0x21f);
        local_364 = (uint ******)(uint)*(ushort *)((int)param_2 + 0x872);
        local_370 = (uint ******)param_2[0x224];
        local_374 = (uint ******)param_2[0x225];
        *(byte *)(param_2 + 0x26b) = 0;
        local_360 = (uint ******)param_2[0x220];
        local_378 = param_2[0x226];
        local_38c = (uint ******)param_2[0x227];
        local_118 = (uint ******)param_2[0x221];
        ppppppuVar28 = (uint ******)(uint)*(ushort *)((int)param_2 + 0x87e);
        unaff_r8 = (uint ******)param_2[0x21d];
        local_37c = (uint ******)param_2[0x21e];
        local_114 = (uint ******)param_2[0x222];
        pppppuStack_110 = param_2[0x223];
      }
      *(undefined2 *)(param_2 + 0x26b) = 0x100;
LAB_01458da4:
      local_384 = param_2 + 0x1d4;
      ppppppuVar23 = (uint ******)&DAT_00000100;
      local_228 = local_118;
      local_224 = local_114;
      local_220 = pppppuStack_110;
      local_290 = local_118;
      ppppppuStack_28c = local_114;
      pppppuStack_288 = pppppuStack_110;
      FUN_014d05f4(local_384);
      pppppuVar13 = param_2[0x5e];
      ppppppuVar7 = local_37c;
      ppppppuVar29 = ppppppuVar28;
joined_r0x01457d10:
      if (pppppuVar13 != (uint *****)0x0) {
        thunk_FUN_016d3fb4(param_2[0x5c]);
      }
      local_37c = param_2 + 0x1a;
      local_380 = param_2 + 0x1d3;
      pppppuVar13 = (uint *****)&DAT_018dd940;
      uVar27 = (ushort)ppppppuVar29;
      uVar25 = (ushort)ppppppuVar26;
      local_2b0 = local_228;
      ppppppuStack_2ac = local_224;
      pppppuStack_2a8 = local_220;
      *(byte *)local_380 = 1;
      FUN_014595f8(local_37c);
      if (uVar19 != 3) {
        local_2a0 = local_2b0;
        local_29c = ppppppuStack_2ac;
        local_298 = pppppuStack_2a8;
        goto LAB_01457ea0;
      }
      local_2c0 = unaff_r8;
      local_2bc = ppppppuVar7;
      local_2b8 = uVar25;
      local_2b6 = uVar27;
      local_2b4 = local_360;
      if (local_360 == (uint ******)0xffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ad11c);
      }
      local_218 = (ushort)*(byte *)((int)*param_2[0x17] + 0x93);
      uStack_216 = 0;
      iVar9 = FUN_016d98a4(local_360,6,1,&local_218,4);
      if (iVar9 == -1) {
        puVar10 = (undefined4 *)FUN_016d2bc8();
        local_114 = (uint ******)*puVar10;
        local_118 = (uint ******)0x0;
        if (DAT_018d9130 < 4) {
          ppppppuVar23 = (uint ******)&DAT_018da8fc;
          if (((1 < DAT_018da934 - 1) &&
              ((DAT_018da934 == 0 || (cVar5 = FUN_0169ac90(&DAT_018da92c), cVar5 == '\0')))) ||
             (iVar9 = FUN_016949d8(DAT_018da92c), iVar9 == 0)) goto LAB_0145823c;
          pppppuVar14 = *(uint ******)(DAT_018da92c + 0x1c);
          iVar9 = *(int *)(DAT_018da92c + 0x20);
          if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018a67a0);
          }
          local_210 = *(uint *******)(DAT_018da92c + 0x24);
          ppppppuVar23 = (uint ******)&local_280;
          local_20c = *(uint *******)(DAT_018da92c + 0x28);
          pppppuVar13 = (uint *****)&DAT_018abb78;
          local_6c = (uint ******)&DAT_00000001;
          local_27c = (uint ******)&local_258;
          local_70 = (uint ******)&local_108;
          local_258 = (uint ******)&local_118;
          local_208 = (uint ******)0x0;
          local_218 = (ushort)pppppuVar14;
          uStack_216 = (ushort)((uint)pppppuVar14 >> 0x10);
          local_214 = (undefined2)iVar9;
          uStack_212 = (ushort)((uint)iVar9 >> 0x10);
          local_100 = (uint ******)&DAT_018abb78;
          local_280 = (uint ******)&DAT_00596165;
          local_254 = (uint ******)FUN_015ef5b4;
          local_108 = (uint ******)&local_218;
          local_104 = ppppppuVar23;
          local_68 = (uint ******)(DAT_018da92c + 0x1c);
          FUN_01459778(&local_70);
        }
        else {
LAB_0145823c:
          pppppuVar13 = (uint *****)&DAT_018dd940;
        }
        ppppppuVar28 = local_114;
        if ((char)local_118 == '\x03') {
          pppppuVar14 = *local_114;
          ppppppuVar23 = (uint ******)local_114[1];
          if (*ppppppuVar23 != (uint *****)0x0) {
            (*(code *)*ppppppuVar23)(pppppuVar14);
          }
          if (ppppppuVar23[1] != (uint *****)0x0) {
            thunk_FUN_016d3fb4(pppppuVar14);
          }
          thunk_FUN_016d3fb4(ppppppuVar28);
        }
      }
      *(byte *)((int)param_2 + 99) = 0;
      FUN_0145d5e0(param_2 + 0xc);
      uVar19 = 3;
      goto LAB_01457eb4;
    }
    local_360 = local_208;
    local_2a0 = local_204;
    local_364._0_2_ = uStack_216;
    unaff_r8 = (uint ******)CONCAT22(uStack_212,local_214);
    local_370 = local_1f8;
    local_29c = local_200;
    local_298 = local_1fc;
    local_374 = local_1f4;
    ppppppuVar7 = local_210;
    ppppppuVar23 = local_1ec;
    pppppuVar13 = local_1f0;
    uVar25 = (ushort)local_20c;
    uVar27 = local_20c._2_2_;
    uVar19 = local_218;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018a6800);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018a6800);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)((int)param_2 + 0x62)) {
    case 0:
      unaff_r8 = (uint ******)param_2[0xb];
      goto LAB_01457248;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018a6790);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018a6790);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(byte *)((int)param_2 + 0x85)) {
      case 0:
        pppppuVar14 = param_2[0x1d];
        pppppuVar13 = param_2[0x1e];
        ppppppuVar7 = (uint ******)param_2[0x20];
        goto LAB_01457790;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018a6760);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018a6760);
      case 3:
        goto switchD_014573a8_caseD_3;
      case 4:
        uVar32 = *(undefined8 *)(param_2 + 0x22);
      }
LAB_014577f0:
      ppppppuVar29 = param_2 + 0x1d;
      (**(code **)((int)((ulonglong)uVar32 >> 0x20) + 0xc))(&local_218,(int)uVar32,param_3);
      local_38c = local_210;
      uVar19 = local_218;
      ppppppuVar7 = (uint ******)CONCAT22(uStack_216,local_218);
      if (ppppppuVar7 == (uint ******)&SUB_00000002) {
        *(byte *)((int)param_2 + 0x85) = 4;
        bVar6 = 3;
        goto LAB_01458e10;
      }
      pppppuVar13 = param_2[0x22];
      pppppuVar14 = param_2[0x23];
      ppppuVar15 = *pppppuVar14;
      local_378 = (uint *****)CONCAT22(uStack_212,local_214);
      if (ppppuVar15 != (uint ****)0x0) {
        (*(code *)ppppuVar15)(pppppuVar13);
      }
      if (pppppuVar14[1] != (uint ****)0x0) {
        thunk_FUN_016d3fb4(pppppuVar13);
      }
      *(undefined2 *)(param_2 + 0x21) = 0x100;
      FUN_014590b8(ppppppuVar29);
      if ((uVar19 & 1) == 0) {
        pppppuVar13 = local_38c[3];
        (*(code *)pppppuVar13)(&local_218,local_378);
        uVar25 = uStack_212;
        uVar19 = local_218;
        if (local_218 == 2) {
          if (*local_38c != (uint *****)0x0) {
            (*(code *)*local_38c)(local_378);
          }
          local_370 = (uint ******)0x0;
          if (local_38c[1] != (uint *****)0x0) {
            thunk_FUN_016d3fb4(local_378);
          }
          local_210 = (uint ******)0x0;
          ppppppuVar7 = (uint ******)&DAT_00000004;
          unaff_r7 = local_38c;
        }
        else {
          uVar4 = local_1fc._2_2_;
          ppppppuVar29 = (uint ******)((uint)local_1fc & 0xffff);
          ppppppuVar7 = (uint ******)(uint)uStack_212;
          uVar3 = CONCAT22(local_214,uStack_216);
          uVar27 = *(ushort *)(param_2 + 0x18);
          if ((param_2[0x10] == (uint *****)0x0) ||
             (FUN_010a6bb0(&local_108,param_2[0xf]), local_108 == (uint ******)0x0)) {
            if ((uVar19 & 1) != 0) {
              ppppppuVar7 = ppppppuVar29;
            }
            unaff_r8 = ppppppuVar29;
            if (ppppppuVar7 == (uint ******)0x0) {
              unaff_r8 = (uint ******)(uint)uVar27;
            }
            if (ppppppuVar7 == (uint ******)0x0 && (uVar19 & 1) == 0) goto LAB_01457fa4;
          }
          else if ((uVar19 & 1) == 0) {
LAB_01457fa4:
            unaff_r8 = ppppppuVar29;
            uVar25 = uVar27;
          }
          else {
            unaff_r8 = (uint ******)(uint)uVar27;
          }
          local_70 = local_210;
          local_6c = local_20c;
          local_68 = local_208;
          ppppppuStack_64 = local_204;
          ppppppuStack_60 = local_200;
          pppppuVar14 = local_38c[4];
          (*(code *)pppppuVar14)(&local_218,local_378);
          ppppppuVar7 = (uint ******)(CONCAT22(uStack_216,local_218) + 1);
          uVar11 = 0;
          if (CONCAT22(uStack_216,local_218) == -1) {
            ppppppuVar7 = (uint ******)0xffffffff;
          }
          ppppppuVar29 = ppppppuVar7;
          if (ppppppuVar7 < &DAT_00000005) {
            ppppppuVar29 = (uint ******)&DAT_00000004;
          }
          bVar31 = (uint ******)0x7fffffe < ppppppuVar7;
          bVar30 = ppppppuVar7 == (uint ******)0x7ffffff;
          uVar18 = (int)ppppppuVar29 * 0x20;
          if (ppppppuVar7 < (uint ******)0x8000000) {
            bVar31 = 0x7ffffffb < uVar18;
            bVar30 = uVar18 == 0x7ffffffc;
          }
          if (bVar31 && !bVar30) {
LAB_01458004:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar11,uVar18);
          }
          local_374 = (uint ******)thunk_FUN_016d4a50(uVar18);
          if (local_374 == (uint ******)0x0) {
            uVar11 = 4;
            goto LAB_01458004;
          }
          *(ushort *)local_374 = uVar19;
          *(ushort *)((int)local_374 + 6) = uVar25;
          *(undefined4 *)((int)local_374 + 2) = uVar3;
          local_374[2] = (uint *****)local_70;
          local_374[3] = (uint *****)local_6c;
          local_374[4] = (uint *****)local_68;
          local_374[5] = (uint *****)ppppppuStack_64;
          local_374[6] = (uint *****)ppppppuStack_60;
          iVar9 = 0x3e;
          *(undefined2 *)((int)local_374 + 0x1e) = uVar4;
          *(short *)(local_374 + 7) = (short)unaff_r8;
          local_278 = (uint ******)&DAT_00000001;
          unaff_r7 = ppppppuStack_60;
          local_280 = ppppppuVar29;
          local_27c = local_374;
          while (local_370 = local_278, (*(code *)pppppuVar13)(&local_218,local_378),
                uVar25 = uStack_212, uVar19 = local_218, local_218 != 2) {
            uVar4 = local_1fc._2_2_;
            ppppppuVar29 = (uint ******)((uint)local_1fc & 0xffff);
            ppppppuVar7 = (uint ******)(uint)uStack_212;
            uVar3 = CONCAT22(local_214,uStack_216);
            uVar27 = *(ushort *)(param_2 + 0x18);
            if ((param_2[0x10] == (uint *****)0x0) ||
               (FUN_010a6bb0(&local_258,param_2[0xf]), local_258 == (uint ******)0x0)) {
              if ((uVar19 & 1) != 0) {
                ppppppuVar7 = ppppppuVar29;
              }
              unaff_r8 = ppppppuVar29;
              if (ppppppuVar7 == (uint ******)0x0) {
                unaff_r8 = (uint ******)(uint)uVar27;
              }
              if (ppppppuVar7 == (uint ******)0x0 && (uVar19 & 1) == 0) goto LAB_0145816c;
            }
            else if ((uVar19 & 1) == 0) {
LAB_0145816c:
              unaff_r8 = ppppppuVar29;
              uVar25 = uVar27;
            }
            else {
              unaff_r8 = (uint ******)(uint)uVar27;
            }
            local_108 = local_210;
            local_104 = local_20c;
            local_100 = local_208;
            ppppppuStack_fc = local_204;
            ppppppuStack_f8 = local_200;
            if (local_370 == local_280) {
              (*(code *)pppppuVar14)(&local_218,local_378);
              iVar17 = CONCAT22(uStack_216,local_218) + 1;
              if (CONCAT22(uStack_216,local_218) == -1) {
                iVar17 = -1;
              }
              FUN_0148d72c(&local_280,local_370,iVar17,4,0x20);
              local_374 = local_27c;
            }
            pbVar20 = (byte *)((int)local_374 + iVar9);
            *(undefined4 *)(pbVar20 + -0x1c) = uVar3;
            *(ushort *)(pbVar20 + -0x18) = uVar25;
            local_278 = (uint ******)((int)local_370 + 1);
            *(ushort *)(pbVar20 + -0x1e) = uVar19;
            *(uint *******)(pbVar20 + -0x16) = local_108;
            *(uint *******)(pbVar20 + -0x12) = local_104;
            *(uint *******)(pbVar20 + -0xe) = local_100;
            *(uint *******)(pbVar20 + -10) = ppppppuStack_fc;
            *(uint *******)(pbVar20 + -6) = ppppppuStack_f8;
            iVar9 = iVar9 + 0x20;
            *(undefined2 *)pbVar20 = uVar4;
            *(short *)(pbVar20 + -2) = (short)unaff_r8;
            unaff_r7 = ppppppuStack_f8;
          }
          if (*local_38c != (uint *****)0x0) {
            (*(code *)*local_38c)(local_378);
          }
          if (local_38c[1] != (uint *****)0x0) {
            thunk_FUN_016d3fb4(local_378);
          }
          local_210 = local_280;
          ppppppuVar7 = local_27c;
        }
        *(byte *)((int)param_2 + 99) = 1;
        local_20c = ppppppuVar7 + (int)local_370 * 8;
        ppppppuVar29 = ppppppuVar7;
        goto LAB_01457528;
      }
      uVar19 = 2;
      local_370 = (uint ******)0x40a404;
      local_374 = (uint ******)&DAT_00000009;
      ppppppuVar26 = param_2;
      break;
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(byte *)(param_2 + 0x1d3)) {
      case 0:
        goto switchD_014573f4_caseD_0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018a6770);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018a6770);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(byte *)((int)param_2 + 0x9ad)) {
        case 0:
          ppppppuVar7 = (uint ******)param_2[0x269];
          pppppuVar13 = param_2[0x26a];
          local_37c = unaff_r6;
          break;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_018a6780);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_018a6780);
        case 3:
          goto LAB_014587c4;
        }
        goto LAB_014575d4;
      case 4:
        if (param_2[0x1d5] == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00408976,0x18,&DAT_018a4d54);
        }
        goto LAB_01457670;
      case 5:
        unaff_r8 = (uint ******)param_2[0x1d4];
joined_r0x01457abc:
        local_290._2_2_ = (undefined2)((uint)local_290 >> 0x10);
        local_118._2_2_ = (undefined2)((uint)local_118 >> 0x10);
        if (unaff_r8 == (uint ******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00408976,0x18,&DAT_018a4d54);
        }
        FUN_01434178(&local_108,param_2[0x1d4],param_3);
        uVar18 = (uint)local_108 & 0xffff;
        if (uVar18 == 4) {
          FUN_01434178(&local_108,param_2[0x1d5],param_3);
          uVar18 = (uint)local_108 & 0xffff;
          if (uVar18 == 4) {
            bVar6 = 5;
            goto LAB_01458e00;
          }
          uStack_216 = (ushort)((uint)local_108 >> 0x10);
          local_214 = SUB42(local_104,0);
          uStack_212 = (ushort)((uint)local_104 >> 0x10);
          local_210 = local_100;
          local_20c = ppppppuStack_fc;
          local_208 = ppppppuStack_f8;
          local_204 = ppppppuStack_f4;
          local_200 = local_f0;
          local_1fc = local_ec;
          local_1f8 = ppppppuStack_e8;
          local_1f4 = ppppppuStack_e4;
          local_1f0 = pppppuStack_e0;
          local_1ec = ppppppuStack_dc;
          pppppuVar13 = param_2[0x1d4];
          param_2[0x1d4] = (uint *****)0x0;
          local_218 = (ushort)local_108;
          if (pppppuVar13 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_00419463,0x28,&DAT_018a4d64);
          }
          pppppuVar21 = (uint *****)0x1;
          local_118 = (uint ******)CONCAT22(local_118._2_2_,uStack_216);
        }
        else {
          pppppuVar21 = (uint *****)0x0;
          uStack_216 = (ushort)((uint)local_108 >> 0x10);
          local_214 = SUB42(local_104,0);
          uStack_212 = (ushort)((uint)local_104 >> 0x10);
          local_210 = local_100;
          local_20c = ppppppuStack_fc;
          local_208 = ppppppuStack_f8;
          local_204 = ppppppuStack_f4;
          local_200 = local_f0;
          local_1fc = local_ec;
          local_1f8 = ppppppuStack_e8;
          local_1f4 = ppppppuStack_e4;
          local_1f0 = pppppuStack_e0;
          local_1ec = ppppppuStack_dc;
          pppppuVar13 = param_2[0x1d5];
          pppppuVar14 = param_2[0x1d4];
          param_2[0x1d4] = (uint *****)0x0;
          local_218 = (ushort)local_108;
          if (pppppuVar14 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_00419463,0x28,&DAT_018a4d64);
          }
          local_118 = (uint ******)CONCAT22(local_118._2_2_,uStack_216);
        }
        local_290 = (uint ******)CONCAT22(local_290._2_2_,(undefined2)local_118);
        local_280 = local_100;
        local_27c = ppppppuStack_fc;
        local_278 = ppppppuStack_f8;
        ppppppuStack_274 = ppppppuStack_f4;
        ppppppuStack_270 = local_f0;
        local_26c = local_ec;
        ppppppuStack_268 = ppppppuStack_e8;
        ppppppuStack_264 = ppppppuStack_e4;
        pppppuStack_260 = pppppuStack_e0;
        ppppppuStack_25c = ppppppuStack_dc;
        unaff_r8 = local_104;
        local_210 = local_100;
        local_20c = ppppppuStack_fc;
        local_208 = ppppppuStack_f8;
        local_204 = ppppppuStack_f4;
        local_200 = local_f0;
        local_1fc = local_ec;
        local_1f8 = ppppppuStack_e8;
        local_1f4 = ppppppuStack_e4;
        local_1f0 = pppppuStack_e0;
        local_1ec = ppppppuStack_dc;
        local_70 = local_100;
        local_6c = ppppppuStack_fc;
        local_68 = ppppppuStack_f8;
        ppppppuStack_64 = ppppppuStack_f4;
        ppppppuStack_60 = local_f0;
LAB_01457b74:
        *(short *)(param_2 + 0x1d6) = (short)uVar18;
        *(undefined2 *)((int)param_2 + 0x75a) = (undefined2)local_290;
        *(byte *)((int)param_2 + 0x74d) = 1;
        param_2[0x1d7] = (uint *****)unaff_r8;
        param_2[0x1d8] = (uint *****)local_280;
        param_2[0x1d9] = (uint *****)local_27c;
        param_2[0x1da] = (uint *****)local_278;
        param_2[0x1db] = (uint *****)ppppppuStack_274;
        param_2[0x1dc] = (uint *****)ppppppuStack_270;
        param_2[0x1dd] = local_26c;
        param_2[0x1de] = (uint *****)ppppppuStack_268;
        param_2[0x1df] = (uint *****)ppppppuStack_264;
        param_2[0x1e0] = pppppuStack_260;
        param_2[0x1e1] = (uint *****)ppppppuStack_25c;
        if (uVar18 != 3) {
          param_2[0x1d4] = pppppuVar21;
          param_2[0x1d5] = pppppuVar13;
          goto LAB_01457c24;
        }
        ppppppuVar26 = (uint ******)(uint)*(ushort *)(param_2 + 0x1d9);
        local_364 = (uint ******)(uint)*(ushort *)((int)param_2 + 0x75a);
        uVar19 = 3;
        ppppppuVar29 = (uint ******)(uint)*(ushort *)((int)param_2 + 0x766);
        *(byte *)((int)param_2 + 0x74d) = 0;
        local_360 = (uint ******)param_2[0x1da];
        local_370 = (uint ******)param_2[0x1de];
        ppppppuVar7 = (uint ******)param_2[0x1d8];
        local_378 = param_2[0x1e0];
        ppppppuVar23 = (uint ******)param_2[0x1e1];
        local_374 = (uint ******)param_2[0x1df];
        local_228 = (uint ******)param_2[0x1db];
        local_224 = (uint ******)param_2[0x1dc];
        local_220 = param_2[0x1dd];
        break;
      case 6:
        pppppuVar13 = param_2[0x1d5];
LAB_01457c24:
        FUN_01434178(&local_218,pppppuVar13,param_3);
        ppppppuVar23 = local_1ec;
        local_378 = local_1f0;
        ppppppuVar7 = local_210;
        uVar19 = local_218;
        if (local_218 == 4) {
          bVar6 = 6;
          goto LAB_01458e00;
        }
        local_360 = local_208;
        local_228 = local_204;
        local_364 = (uint ******)(uint)uStack_216;
        local_370 = local_1f8;
        unaff_r8 = (uint ******)CONCAT22(uStack_212,local_214);
        ppppppuVar29 = (uint ******)((uint)local_20c >> 0x10);
        ppppppuVar26 = (uint ******)((uint)local_20c & 0xffff);
        local_374 = local_1f4;
        local_224 = local_200;
        local_220 = local_1fc;
        if (*(byte *)((int)param_2 + 0x74d) != 0) {
          FUN_014294e8(param_2 + 0x1d6);
        }
      }
      *(byte *)((int)param_2 + 0x74d) = 0;
      FUN_00a07b4c(param_2 + 0x1b2);
      FUN_014d05f4(param_2 + 0x11a);
      FUN_014d05f4(param_2 + 0x82);
      if (param_2[0x7c] != (uint *****)0x0) {
        thunk_FUN_016d3fb4(param_2[0x7a]);
      }
      *(byte *)((int)param_2 + 0x74e) = 0;
      pppppuVar13 = param_2[0x5e];
      local_38c = ppppppuVar23;
      goto joined_r0x01457d10;
    }
LAB_01457ea0:
    *(byte *)((int)param_2 + 99) = 0;
    ppppppuVar23 = local_38c;
    pppppuVar13 = local_378;
    uVar25 = (ushort)ppppppuVar26;
    uVar27 = (ushort)ppppppuVar29;
  }
  FUN_0145d5e0(param_2 + 0xc);
LAB_01457eb4:
  *(uint *******)(param_1 + 2) = unaff_r8;
  *(uint *******)(param_1 + 10) = local_2a0;
  *(uint *******)(param_1 + 0xc) = local_29c;
  *(uint ******)(param_1 + 0xe) = local_298;
  *(uint *******)(param_1 + 0x10) = local_370;
  *(uint *******)(param_1 + 0x12) = local_374;
  *(uint *******)(param_1 + 4) = ppppppuVar7;
  *(byte *)((int)param_2 + 0x62) = 1;
  pppppuVar14 = param_2[0x26c];
  param_1[1] = (ushort)local_364;
  param_1[6] = uVar25;
  param_1[7] = uVar27;
  *param_1 = uVar19;
  *(uint *******)(param_1 + 8) = local_360;
  *(uint ******)(param_1 + 0x14) = pppppuVar13;
  *(uint *******)(param_1 + 0x16) = ppppppuVar23;
  DataMemoryBarrier(0xb);
  do {
    ppppuVar15 = *pppppuVar14;
    bVar30 = (bool)hasExclusiveAccess(pppppuVar14);
  } while (!bVar30);
  *pppppuVar14 = (uint ****)((int)ppppuVar15 + -1);
  if (ppppuVar15 == (uint ****)0x1) {
    DataMemoryBarrier(0xb);
    FUN_0143d994(param_2[0x26c]);
  }
  pppppuVar13 = param_2[0x26d];
  DataMemoryBarrier(0xb);
  do {
    ppppuVar15 = *pppppuVar13;
    bVar30 = (bool)hasExclusiveAccess(pppppuVar13);
  } while (!bVar30);
  *pppppuVar13 = (uint ****)((int)ppppuVar15 + -1);
  if (ppppuVar15 == (uint ****)0x1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(param_2[0x26d],param_2[0x26e]);
  }
  *(byte *)(param_2 + 0x27a) = 1;
  return;
}

