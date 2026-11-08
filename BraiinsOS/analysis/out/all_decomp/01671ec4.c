// FUN_01671ec4 @ 01671ec4 size=7124 calls_out=22 calls_in=3
// strings: 4DIGIT should match u8 | 2DIGIT should match u8 | 2DIGIT should match u8 | time offset

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffff84 */
/* WARNING: Removing unreachable block (ram,0x0167353c) */
/* WARNING: Removing unreachable block (ram,0x01673610) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01671ec4(undefined4 *param_1,byte *******param_2)

{
  char cVar1;
  bool bVar2;
  uint3 uVar3;
  undefined2 uVar4;
  byte *******pppppppbVar5;
  byte ******ppppppbVar6;
  undefined1 uVar7;
  undefined4 *puVar8;
  byte *******pppppppbVar9;
  byte ******ppppppbVar10;
  uint uVar11;
  char *pcVar12;
  byte *pbVar13;
  byte ******ppppppbVar14;
  byte *******pppppppbVar15;
  uint uVar16;
  undefined *puVar17;
  uint uVar18;
  undefined4 extraout_r2;
  undefined4 uVar19;
  byte bVar20;
  undefined4 extraout_r3;
  undefined4 uVar21;
  byte *******pppppppbVar22;
  byte *******pppppppbVar23;
  short sVar24;
  undefined4 uVar25;
  undefined2 uVar26;
  byte *******pppppppbVar27;
  uint uVar28;
  byte bVar29;
  undefined4 *puVar30;
  uint uVar31;
  undefined2 uVar32;
  int *piVar33;
  int *piVar34;
  int iVar35;
  undefined4 *puVar36;
  byte *******pppppppbVar37;
  byte *******extraout_r12;
  byte *******extraout_r12_00;
  undefined4 extraout_r12_01;
  byte *******local_224;
  byte *******local_21c;
  byte *******local_1f8;
  byte *******local_1f4;
  undefined8 local_1f0;
  byte *******local_1e8;
  byte *******local_1e4;
  longlong local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  uint local_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  byte *******local_190;
  undefined4 local_18c;
  byte *******local_188;
  byte *******local_184;
  byte *******local_180;
  byte *******local_17c;
  undefined4 local_178;
  undefined4 local_16c;
  undefined4 local_160;
  int local_13c;
  byte *******local_128;
  byte bStack_124;
  byte bStack_123;
  byte bStack_122;
  byte bStack_121;
  byte *******local_120;
  undefined2 uStack_11c;
  short sStack_11a;
  byte *******local_118;
  byte *******local_114;
  longlong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int local_c0;
  int local_bc;
  int iStack_b8;
  int local_b4;
  undefined4 *local_b0;
  byte *******local_a8;
  byte *******pppppppbStack_a4;
  byte *******pppppppbStack_a0;
  byte *******pppppppbStack_9c;
  byte *******pppppppbStack_98;
  byte *******local_90;
  byte *******local_8c;
  byte *******local_88;
  byte *******pppppppbStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  byte *******local_70;
  byte *******local_6c;
  byte *******local_68;
  undefined4 local_60;
  byte *******local_58;
  undefined4 local_54;
  byte *******local_50;
  byte *******local_4c;
  undefined4 local_48;
  byte *******local_44;
  byte *******local_40;
  byte *******local_3c;
  byte *******local_38;
  byte ******local_34;
  byte *******local_30;
  
  pppppppbVar27 = (byte *******)param_2[2];
  pppppppbVar37 = (byte *******)param_2[3];
  puVar30 = (undefined4 *)((uint)&local_1f8 | 4);
  if (pppppppbVar37 == (byte *******)0x0) {
    *(undefined1 *)((int)puVar30 + 3) = 0;
    *(undefined2 *)((int)puVar30 + 1) = 0;
    local_1e8 = (byte *******)0x0;
    local_1f0 = 4;
    local_1f4 = (byte *******)((uint)local_1f4 & 0xffffff00);
    param_2[2] = (byte ******)pppppppbVar27;
    local_1a4 = 8;
    local_1f8 = (byte *******)&DAT_00000001;
    goto LAB_01673b10;
  }
  bVar20 = *(byte *)pppppppbVar27;
  param_2[2] = (byte ******)pppppppbVar27;
  param_2[3] = (byte ******)pppppppbVar37;
  switch((uint)bVar20) {
  case 0x22:
  case 0x27:
    FUN_0166ae98(&local_128,param_2);
    pppppppbVar27 = local_120;
    if (local_128 == (byte *******)0x3) {
      pppppppbVar37 =
           (byte *******)CONCAT13(bStack_121,CONCAT12(bStack_122,CONCAT11(bStack_123,bStack_124)));
      uVar25 = CONCAT22(sStack_11a,uStack_11c);
      if (pppppppbVar37 == (byte *******)&DAT_80000000) {
        FUN_0166e630(&local_190,uVar25,1,1);
        pppppppbVar9 = local_188;
        pppppppbVar37 = local_18c;
        if (local_190 == (byte *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(local_18c,local_188);
        }
        FUN_016dd1aa(local_188,pppppppbVar27,uVar25);
        local_1f4 = pppppppbVar9;
      }
      else {
        local_1f4 = local_120;
      }
      local_1d4 = 0x80000003;
      local_1e0 = CONCAT44(local_1e0._4_4_,0x80000003);
      local_1f0 = CONCAT44(0x80000003,uVar25);
      local_1a4 = 2;
      local_1f8 = pppppppbVar37;
      goto LAB_01673b10;
    }
    goto LAB_01672478;
  case 0x2b:
  case 0x2d:
    goto switchD_01671f1c_caseD_2b;
  case 0x2e:
    local_90 = pppppppbVar27;
    local_8c = pppppppbVar37;
    FUN_016785a0(&local_128,param_2);
    if (local_128 == (byte *******)0x3) {
      local_1e0 = CONCAT26(sStack_11a,CONCAT24(uStack_11c,local_120));
      local_1a4 = 4;
      local_1d8 = 0x80000003;
      local_1f0 = CONCAT44(0x80000003,(undefined4)local_1f0);
      local_1f8 = (byte *******)0x80000003;
      goto LAB_01673b10;
    }
    goto LAB_01672420;
  case 0x5b:
    ppppppbVar10 = param_2[4];
    param_2[4] = (byte ******)((int)ppppppbVar10 + 1U);
    if ((byte ******)0x4f < (byte ******)((int)ppppppbVar10 + 1U)) {
      local_190 = (byte *******)0x80000002;
      pppppppbStack_84 = (byte *******)0x0;
      local_88 = (byte *******)0x0;
      local_90 = (byte *******)0x0;
      local_8c = (byte *******)&DAT_00000004;
      local_114 = (byte *******)thunk_FUN_016d4a50(0x18);
      if (local_114 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x18);
      }
      *local_114 = (byte ******)local_190;
      local_114[1] = (byte ******)local_18c;
      local_114[2] = (byte ******)local_188;
      local_114[3] = (byte ******)local_184;
      local_114[4] = (byte ******)local_180;
      local_114[5] = (byte ******)local_17c;
      pppppppbStack_84 = local_114;
      local_80 = (byte *******)&DAT_018ad858;
      local_120 = local_90;
      uStack_11c = SUB42(local_8c,0);
      sStack_11a = (short)((uint)local_8c >> 0x10);
      local_118 = local_88;
      local_110 = CONCAT44(local_110._4_4_,&DAT_018ad858);
      bStack_124 = 2;
      bStack_123 = 0;
      bStack_122 = 0;
      bStack_121 = 0;
LAB_016728c8:
      pppppppbVar27 = (byte *******)((uint)&local_128 | 4);
      goto LAB_016728fc;
    }
    FUN_01686cd0(&local_128,param_2);
    param_2[4] = (byte ******)((int)param_2[4] + -1);
    if (local_128 == (byte *******)&SUB_00000002) goto LAB_016728c8;
    local_1f4 = (byte *******)
                CONCAT13(bStack_121,CONCAT12(bStack_122,CONCAT11(bStack_123,bStack_124)));
    local_1f8 = local_128;
    local_1f0 = CONCAT44(CONCAT22(sStack_11a,uStack_11c),local_120);
    local_1e8 = local_118;
    local_1e4 = local_114;
    local_1e0 = local_110;
    local_1d8 = local_108;
    local_1d4 = uStack_104;
    local_1d0 = local_100;
    uStack_1cc = uStack_fc;
    uStack_1c8 = uStack_f8;
    uStack_1c4 = uStack_f4;
    uStack_1c0 = uStack_f0;
    uStack_1bc = uStack_ec;
    local_1a4 = 7;
    goto LAB_01672910;
  case 0x5f:
    local_90 = pppppppbVar27;
    local_8c = pppppppbVar37;
    FUN_01679578(&local_128,param_2);
    if (local_128 == (byte *******)0x3) {
      puVar30[5] = local_120;
      puVar30[6] = CONCAT22(sStack_11a,uStack_11c);
      local_1f0 = CONCAT44(0x80000003,(undefined4)local_1f0);
      local_1f8 = (byte *******)0x80000003;
      local_1a4 = 3;
      local_1d8 = 0x80000003;
      goto LAB_01673b10;
    }
LAB_01672420:
    local_1f8 = local_128;
    local_1e8 = local_118;
    local_1e4 = local_114;
    local_1a4 = 8;
    local_188 = (byte *******)&DAT_0000000d;
    local_190 = (byte *******)&SUB_00000002;
    local_18c = (byte *******)&DAT_00414391;
    local_184 = param_2;
    local_180 = (byte *******)&local_90;
    FUN_00953084(&local_128,&local_1f8,&local_190);
LAB_01672478:
    local_1f4 = (byte *******)
                CONCAT13(bStack_121,CONCAT12(bStack_122,CONCAT11(bStack_123,bStack_124)));
    local_1f8 = local_128;
    local_1f0 = CONCAT44(CONCAT22(sStack_11a,uStack_11c),local_120);
    local_1e8 = local_118;
    local_1e4 = local_114;
LAB_0167290c:
    local_1a4 = 8;
LAB_01672910:
    goto LAB_01673b10;
  case 0x66:
    if (*(byte *)pppppppbVar27 == 0x66) {
      param_2[2] = (byte ******)pppppppbVar27;
      param_2[3] = (byte ******)pppppppbVar37;
      pppppppbVar9 = pppppppbVar37;
      if (&DAT_00000004 < pppppppbVar37) {
        pppppppbVar9 = (byte *******)&DAT_00000005;
      }
      pppppppbVar15 = (byte *******)0x0;
      do {
        if (*(byte *)(pppppppbVar15 + 0x1053f7) !=
            *(byte *)((int)pppppppbVar27 + (int)pppppppbVar15)) {
          local_1f8 = (byte *******)0x2;
          if (pppppppbVar15 < pppppppbVar9) goto LAB_0167238c;
          break;
        }
        pppppppbVar15 = (byte *******)((int)pppppppbVar15 + 1);
      } while (pppppppbVar9 != pppppppbVar15);
      local_1f8 = (byte *******)&SUB_00000002;
      if (pppppppbVar37 < &DAT_00000005) goto LAB_0167238c;
      param_2[2] = (byte ******)((int)pppppppbVar27 + 5);
      param_2[3] = (byte ******)((int)pppppppbVar37 + -5);
      uVar7 = 0;
LAB_016729f4:
      local_1a4 = 5;
      local_1d4 = CONCAT31(local_1d4._1_3_,uVar7);
      local_1e0 = CONCAT44(local_1e0._4_4_,0x80000003);
LAB_01672a00:
      local_1f0 = CONCAT44(0x80000003,(undefined4)local_1f0);
      local_1f8 = (byte *******)0x80000003;
      local_90 = pppppppbVar27;
      local_8c = pppppppbVar37;
      local_58 = pppppppbVar27;
      local_54 = pppppppbVar37;
      local_40 = pppppppbVar27;
      local_3c = pppppppbVar37;
      goto LAB_01673b10;
    }
LAB_01672384:
    local_1f8 = (byte *******)0x1;
    param_2[3] = (byte ******)pppppppbVar37;
    goto LAB_0167238c;
  case 0x69:
    if (((*(byte *)pppppppbVar27 == 0x69) && (pppppppbVar37 != (byte *******)&DAT_00000001)) &&
       ((*(byte *)((int)pppppppbVar27 + 1) == 0x6e &&
        ((pppppppbVar37 != (byte *******)&SUB_00000002 &&
         (*(byte *)((int)pppppppbVar27 + 2) == 0x66)))))) {
      param_2[2] = (byte ******)((int)pppppppbVar27 + 3);
      param_2[3] = (byte ******)((int)pppppppbVar37 + -3);
      uVar28 = 0x7ff00000;
LAB_01672548:
      local_1e0 = (ulonglong)uVar28 << 0x20;
      local_1a4 = 4;
      local_1d8 = 0x80000003;
      goto LAB_01672a00;
    }
    goto LAB_01672568;
  case 0x6e:
    if ((((*(byte *)pppppppbVar27 == 0x6e) && (pppppppbVar37 != (byte *******)&DAT_00000001)) &&
        (*(byte *)((int)pppppppbVar27 + 1) == 0x61)) &&
       ((pppppppbVar37 != (byte *******)&SUB_00000002 && (*(byte *)((int)pppppppbVar27 + 2) == 0x6e)
        ))) {
      param_2[2] = (byte ******)((int)pppppppbVar27 + 3);
      param_2[3] = (byte ******)((int)pppppppbVar37 + -3);
      uVar28 = 0x7ff80000;
      goto LAB_01672548;
    }
LAB_01672568:
    local_128 = (byte *******)&DAT_00000004;
    bStack_124 = 0;
    bStack_123 = 0;
    bStack_122 = 0;
    bStack_121 = 0;
    local_1f8 = (byte *******)0x1;
    local_1e8 = (byte *******)0x0;
    goto LAB_016725b4;
  case 0x74:
    if (*(byte *)pppppppbVar27 != 0x74) goto LAB_01672384;
    param_2[2] = (byte ******)pppppppbVar27;
    param_2[3] = (byte ******)pppppppbVar37;
    pppppppbVar9 = pppppppbVar37;
    if ((byte *******)0x3 < pppppppbVar37) {
      pppppppbVar9 = (byte *******)&DAT_00000004;
    }
    pppppppbVar15 = (byte *******)0x0;
    do {
      if (*(byte *)(pppppppbVar15 + 0x15a2cb) != *(byte *)((int)pppppppbVar27 + (int)pppppppbVar15))
      {
        local_1f8 = (byte *******)0x2;
        if ((pppppppbVar15 < pppppppbVar9) || (pppppppbVar37 < &DAT_00000004)) goto LAB_0167238c;
        goto LAB_016729a8;
      }
      pppppppbVar15 = (byte *******)((int)pppppppbVar15 + 1);
    } while (pppppppbVar9 != pppppppbVar15);
    local_1f8 = (byte *******)0x2;
    if ((byte *******)0x3 < pppppppbVar37) {
LAB_016729a8:
      param_2[2] = (byte ******)(pppppppbVar27 + 1);
      param_2[3] = (byte ******)(pppppppbVar37 + -1);
      uVar7 = 1;
      goto LAB_016729f4;
    }
LAB_0167238c:
    puVar30[3] = 0;
    puVar30[4] = 0;
LAB_016725b4:
    local_188 = (byte *******)&DAT_00000006;
    local_18c = (byte *******)&DAT_00414642;
    local_1a4 = 8;
    local_1f0 = 4;
    local_1f4 = (byte *******)0x0;
    local_190 = (byte *******)0x3;
    local_184 = param_2;
    local_180 = (byte *******)&local_90;
    local_90 = pppppppbVar27;
    local_8c = pppppppbVar37;
    local_58 = pppppppbVar27;
    local_54 = pppppppbVar37;
    local_40 = pppppppbVar27;
    local_3c = pppppppbVar37;
    FUN_00953084(&local_128,&local_1f8,&local_190);
    local_1f4 = (byte *******)
                CONCAT13(bStack_121,CONCAT12(bStack_122,CONCAT11(bStack_123,bStack_124)));
    local_1f8 = local_128;
    local_1e8 = local_118;
    local_1e4 = local_114;
    local_1a4 = 8;
    local_18c = (byte *******)0x22;
    local_190 = (byte *******)0x0;
    local_184 = param_2;
    local_180 = (byte *******)&local_58;
    FUN_00953084(&local_128,&local_1f8,&local_190);
    local_1f4 = (byte *******)
                CONCAT13(bStack_121,CONCAT12(bStack_122,CONCAT11(bStack_123,bStack_124)));
    local_1f8 = local_128;
    local_1e8 = local_118;
    local_1e4 = local_114;
    local_1a4 = 8;
    local_180 = (byte *******)&local_40;
    local_18c = (byte *******)&DAT_00000027;
    local_190 = (byte *******)0x0;
    local_184 = param_2;
    FUN_00953084(&local_128,&local_1f8,&local_190);
    local_1f4 = (byte *******)
                CONCAT13(bStack_121,CONCAT12(bStack_122,CONCAT11(bStack_123,bStack_124)));
    local_1f8 = local_128;
    local_1f0 = CONCAT44(CONCAT22(sStack_11a,uStack_11c),local_120);
    local_1e8 = local_118;
    local_1e4 = local_114;
    local_1a4 = 8;
    goto LAB_01673b10;
  case 0x7b:
    ppppppbVar10 = param_2[4];
    param_2[4] = (byte ******)((int)ppppppbVar10 + 1U);
    if ((byte ******)((int)ppppppbVar10 + 1U) < (byte ******)0x50) {
      FUN_01684d98(&local_128,param_2);
      param_2[4] = (byte ******)((int)param_2[4] + -1);
      if (local_d4 != 2) {
        FUN_016dd1aa(&local_1f8,&local_128,0x68);
        goto LAB_01673b10;
      }
    }
    else {
      local_190 = (byte *******)0x80000002;
      pppppppbStack_84 = (byte *******)0x0;
      local_88 = (byte *******)0x0;
      local_90 = (byte *******)0x0;
      local_8c = (byte *******)&DAT_00000004;
      pppppppbVar27 = (byte *******)thunk_FUN_016d4a50(0x18);
      if (pppppppbVar27 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x18);
      }
      *pppppppbVar27 = (byte ******)local_190;
      pppppppbVar27[1] = (byte ******)local_18c;
      pppppppbVar27[2] = (byte ******)local_188;
      pppppppbVar27[3] = (byte ******)local_184;
      pppppppbVar27[4] = (byte ******)local_180;
      pppppppbVar27[5] = (byte ******)local_17c;
      pppppppbStack_84 = pppppppbVar27;
      local_80 = (byte *******)&DAT_018ad858;
      puVar30 = (undefined4 *)((uint)&local_128 | 4);
      *puVar30 = local_90;
      puVar30[1] = local_8c;
      puVar30[2] = local_88;
      puVar30[3] = pppppppbVar27;
      puVar30[4] = &DAT_018ad858;
      local_128 = (byte *******)&SUB_00000002;
    }
    pppppppbVar27 = (byte *******)&local_128;
LAB_016728fc:
    local_1f8 = (byte *******)*pppppppbVar27;
    local_1f4 = (byte *******)pppppppbVar27[1];
    local_1f0 = *(undefined8 *)(pppppppbVar27 + 2);
    local_1e8 = (byte *******)pppppppbVar27[4];
    local_1e4 = (byte *******)pppppppbVar27[5];
    goto LAB_0167290c;
  }
  if (9 < bVar20 - 0x30) {
    local_110 = 0x2700000000;
    uStack_11c = 0;
    sStack_11a = 0;
    local_120 = (byte *******)&DAT_00000006;
    local_128 = (byte *******)0x3;
    bStack_124 = 0x42;
    bStack_123 = 0x46;
    bStack_122 = 0x41;
    bStack_121 = 0;
    local_118 = (byte *******)&DAT_00000022;
    FUN_01674038(&local_1f8,&local_128,param_2);
    goto LAB_01673b10;
  }
switchD_01671f1c_caseD_2b:
  puVar8 = (undefined4 *)((uint)&local_90 | 4);
  local_70 = pppppppbVar27;
  local_6c = pppppppbVar37;
  FUN_01669030(&local_128,param_2,4,4);
  pbVar13 = (byte *)CONCAT13(bStack_121,CONCAT12(bStack_122,CONCAT11(bStack_123,bStack_124)));
  if (local_128 == (byte *******)0x3) {
    if (local_120 == (byte *******)&DAT_00000001) {
      bVar20 = *pbVar13;
      uVar7 = 1;
      if ((bVar20 != 0x2b) && (bVar20 != 0x2d)) goto LAB_01672760;
    }
    else if (local_120 == (byte *******)0x0) {
      uVar7 = 0;
    }
    else {
      bVar20 = *pbVar13;
LAB_01672760:
      uVar28 = 0;
      pppppppbVar9 = local_120;
      if (bVar20 == 0x2b) {
        pbVar13 = pbVar13 + 1;
        pppppppbVar9 = (byte *******)((int)local_120 + -1);
      }
      if (pppppppbVar9 < &DAT_00000005) {
        for (; pppppppbVar9 != (byte *******)0x0;
            pppppppbVar9 = (byte *******)((int)pppppppbVar9 + -1)) {
          bVar20 = *pbVar13;
          if (9 < bVar20 - 0x30) goto LAB_01673de4;
          pbVar13 = pbVar13 + 1;
          uVar28 = (bVar20 - 0x30) + uVar28 * 10;
        }
LAB_016727a4:
        if ((param_2[3] == (byte ******)0x0) || (*(char *)param_2[2] != '-')) {
          local_58 = (byte *******)&DAT_00000001;
LAB_01672890:
          local_48 = (byte *******)0x0;
          local_4c = (byte *******)0x0;
          local_50 = (byte *******)&DAT_00000004;
          local_54 = (byte *******)0x0;
          local_8c = local_58;
          goto LAB_01672c4c;
        }
        ppppppbVar14 = (byte ******)((int)param_2[2] + 1);
        ppppppbVar10 = (byte ******)((int)param_2[3] + -1);
        param_2[2] = ppppppbVar14;
        param_2[3] = ppppppbVar10;
        FUN_01669030(&local_128,param_2,2,2);
        pppppppbVar9 = (byte *******)
                       CONCAT13(bStack_121,CONCAT12(bStack_122,CONCAT11(bStack_123,bStack_124)));
        if (local_128 != (byte *******)0x3) {
          local_184 = (byte *******)CONCAT22(sStack_11a,uStack_11c);
          local_188 = local_120;
          local_180 = local_118;
          local_17c = local_114;
          local_18c = pppppppbVar9;
LAB_01672a64:
          pppppppbVar9 = (byte *******)&local_18c;
          if (local_128 == (byte *******)&DAT_00000001) {
            pppppppbVar9 = (byte *******)&local_128;
            pppppppbVar15 = (byte *******)&SUB_00000002;
          }
          else {
            pppppppbVar15 = local_128;
          }
          local_128 = local_18c;
          bStack_124 = (byte)local_120;
          bStack_123 = (byte)((uint)local_120 >> 8);
          bStack_122 = (byte)((uint)local_120 >> 0x10);
          bStack_121 = (byte)((uint)local_120 >> 0x18);
          local_120 = local_184;
          uStack_11c = SUB42(local_118,0);
          sStack_11a = (short)((uint)local_118 >> 0x10);
          local_118 = local_114;
LAB_01672c04:
          local_18c = (byte *******)*pppppppbVar9;
          local_188 = (byte *******)pppppppbVar9[1];
          local_184 = (byte *******)pppppppbVar9[2];
          local_180 = (byte *******)pppppppbVar9[3];
          local_17c = (byte *******)pppppppbVar9[4];
          uVar7 = (undefined1)local_18c;
          local_40 = local_18c;
          local_3c = local_188;
          local_38 = local_184;
          local_34 = (byte ******)local_180;
          local_30 = local_17c;
          FUN_016dd1aa((int)&local_54 + 1,(int)&local_18c + 1,0x13);
          local_54 = (byte *******)CONCAT31(local_54._1_3_,uVar7);
          local_8c = pppppppbVar15;
          local_58 = pppppppbVar15;
          goto LAB_01672c4c;
        }
        if (local_120 == (byte *******)&DAT_00000001) {
          bVar20 = *(byte *)pppppppbVar9;
          uVar7 = 1;
          if ((bVar20 != 0x2b) && (bVar20 != 0x2d)) goto LAB_01672aac;
        }
        else if (local_120 == (byte *******)0x0) {
          uVar7 = 0;
        }
        else {
          bVar20 = *(byte *)pppppppbVar9;
LAB_01672aac:
          pppppppbVar15 = local_120;
          if (bVar20 == 0x2b) {
            pppppppbVar9 = (byte *******)((int)pppppppbVar9 + 1);
            pppppppbVar15 = (byte *******)((int)local_120 + -1);
          }
          if (pppppppbVar15 <= &SUB_00000002) {
            if (pppppppbVar15 == (byte *******)0x0) {
LAB_01672b84:
              param_2[2] = ppppppbVar14;
              param_2[3] = ppppppbVar10;
              local_34 = (byte ******)0x0;
              local_38 = (byte *******)0x0;
              local_40 = (byte *******)0x0;
              local_128 = (byte *******)0x80000001;
              local_3c = (byte *******)0x4;
              local_180 = (byte *******)thunk_FUN_016d4a50(0x18);
              if (local_180 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(4,0x18);
              }
LAB_01672bc4:
              pppppppbVar9 = (byte *******)&local_128;
              *local_180 = (byte ******)0x80000001;
              local_30 = (byte *******)&DAT_018ad77c;
              local_34 = (byte ******)local_180;
              local_18c = local_40;
              local_188 = local_3c;
              local_184 = local_38;
              local_17c = (byte *******)&DAT_018ad77c;
              local_128 = local_40;
              bStack_124 = (byte)local_3c;
              bStack_123 = (byte)((uint)local_3c >> 8);
              bStack_122 = (byte)((uint)local_3c >> 0x10);
              bStack_121 = (byte)((uint)local_3c >> 0x18);
              local_120 = local_38;
              uStack_11c = SUB42(local_180,0);
              sStack_11a = (short)((uint)local_180 >> 0x10);
              local_118 = (byte *******)&DAT_018ad77c;
              pppppppbVar15 = (byte *******)&SUB_00000002;
              goto LAB_01672c04;
            }
            pppppppbVar22 = (byte *******)(*(byte *)pppppppbVar9 - 0x30);
            uVar7 = 1;
            if (&DAT_00000009 < pppppppbVar22) goto LAB_01673260;
            if (pppppppbVar15 != (byte *******)&DAT_00000001) {
              uVar11 = *(byte *)((int)pppppppbVar9 + 1) - 0x30;
              if (9 < uVar11) goto LAB_01673260;
              pppppppbVar22 = (byte *******)(uVar11 + (int)pppppppbVar22 * 10);
            }
LAB_01672afc:
            if (0xb < ((uint)((int)pppppppbVar22 + -1) & 0xff)) goto LAB_01672b84;
            if ((param_2[3] == (byte ******)0x0) || (*(char *)param_2[2] != '-')) {
              local_58 = (byte *******)&SUB_00000002;
              goto LAB_01672890;
            }
            ppppppbVar14 = (byte ******)((int)param_2[3] + -1);
            ppppppbVar10 = (byte ******)((int)param_2[2] + 1);
            param_2[2] = ppppppbVar10;
            param_2[3] = ppppppbVar14;
            FUN_01669030(&local_128,param_2,2,2);
            pppppppbVar9 = (byte *******)
                           CONCAT13(bStack_121,CONCAT12(bStack_122,CONCAT11(bStack_123,bStack_124)))
            ;
            if (local_128 != (byte *******)0x3) {
              local_188 = local_120;
              local_184 = (byte *******)CONCAT22(sStack_11a,uStack_11c);
              local_180 = local_118;
              local_17c = local_114;
              local_18c = pppppppbVar9;
              goto LAB_01672a64;
            }
            if (local_120 == (byte *******)&DAT_00000001) {
              bVar20 = *(byte *)pppppppbVar9;
              bVar29 = 1;
              if ((bVar20 == 0x2b) || (bVar20 == 0x2d)) goto LAB_0167357c;
            }
            else {
              if (local_120 == (byte *******)0x0) {
                bVar29 = 0;
                goto LAB_0167357c;
              }
              bVar20 = *(byte *)pppppppbVar9;
            }
            pppppppbVar15 = local_120;
            if (bVar20 == 0x2b) {
              pppppppbVar9 = (byte *******)((int)pppppppbVar9 + 1);
              pppppppbVar15 = (byte *******)((int)local_120 + -1);
            }
            if (&SUB_00000002 < pppppppbVar15) {
              uVar11 = 0;
              do {
                if (pppppppbVar15 == (byte *******)0x0) goto LAB_01673004;
                uVar11 = (uVar11 & 0xff) * 4 + (uVar11 & 0xff);
                if (uVar11 >> 7 != 0) {
                  bVar29 = 1;
                  if (*(byte *)pppppppbVar9 - 0x30 < 10) {
                    bVar29 = 2;
                  }
                  goto LAB_0167357c;
                }
                uVar16 = *(byte *)pppppppbVar9 - 0x30;
                if (9 < uVar16) {
                  bVar29 = 1;
                  goto LAB_0167357c;
                }
                pppppppbVar15 = (byte *******)((int)pppppppbVar15 + -1);
                uVar11 = (uVar11 * 2 & 0xff) + (uVar16 & 0xff);
                pppppppbVar9 = (byte *******)((int)pppppppbVar9 + 1);
              } while ((uVar11 & 0xffffff00) == 0);
              bVar29 = 2;
LAB_0167357c:
              local_128 = (byte *******)(uint)bVar29;
                    /* WARNING: Subroutine does not return */
              FUN_00fb74f8("2DIGIT should match u8",0x16,&local_128,&DAT_018ad7a8,&DAT_018ad828);
            }
            if (pppppppbVar15 == (byte *******)0x0) {
LAB_0167303c:
              local_128 = (byte *******)0x80000001;
              param_2[2] = ppppppbVar10;
              param_2[3] = ppppppbVar14;
              local_34 = (byte ******)0x0;
              local_38 = (byte *******)0x0;
              local_40 = (byte *******)0x0;
              local_3c = (byte *******)0x4;
              local_180 = (byte *******)thunk_FUN_016d4a50(0x18);
              if (local_180 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(4,0x18);
              }
              goto LAB_01672bc4;
            }
            bVar29 = 1;
            uVar11 = *(byte *)pppppppbVar9 - 0x30;
            if (9 < uVar11) goto LAB_0167357c;
            if (pppppppbVar15 != (byte *******)&DAT_00000001) {
              uVar16 = *(byte *)((int)pppppppbVar9 + 1) - 0x30;
              if (9 < uVar16) goto LAB_0167357c;
              uVar11 = uVar16 + uVar11 * 10;
            }
LAB_01673004:
            if (0x1e < (uVar11 - 1 & 0xff)) goto LAB_0167303c;
            if ((uVar28 & 3) == 0) {
              if (((uVar28 * 0x5c29 & 0xffff) >> 2 | uVar28 * 0x170a4000 & 0xffff) < 0x290) {
                uVar18 = (uint)pppppppbVar22 & 0xff;
                uVar16 = 0x1f;
                if (uVar18 < 0xc) {
                  if ((1 << uVar18 & 0xa50U) == 0) {
                    if ((uVar18 == 2) &&
                       (uVar16 = 0x1c,
                       ((uVar28 * 0x5c29 & 0xffff) >> 4 | uVar28 * 0x5c29000 & 0xffff) < 0xa4)) {
                      uVar16 = 0x1d;
                    }
                  }
                  else {
                    uVar16 = 0x1e;
                  }
                }
              }
              else {
                uVar18 = (uint)((int)pppppppbVar22 + -2) & 0xff;
                uVar16 = 0x1f;
                if (uVar18 < 10) {
                  puVar17 = &DAT_00424432;
                  goto LAB_01673118;
                }
              }
            }
            else {
              uVar18 = (uint)((int)pppppppbVar22 + -2) & 0xff;
              uVar16 = 0x1f;
              if (uVar18 < 10) {
                puVar17 = &DAT_00424428;
LAB_01673118:
                uVar16 = (uint)(byte)puVar17[uVar18];
              }
            }
            if (uVar16 < (uVar11 & 0xff)) {
              param_2[2] = ppppppbVar10;
              param_2[3] = ppppppbVar14;
              local_128 = (byte *******)0x80000001;
              FUN_0166fe24(&local_54,&local_128);
              local_8c = (byte *******)&SUB_00000002;
              goto LAB_01672c4c;
            }
            ppppppbVar10 = param_2[3];
            uVar4 = CONCAT11((char)uVar11,(char)pppppppbVar22);
            local_54 = (byte *******)CONCAT22(uVar4,(short)uVar28);
            ppppppbVar14 = param_2[2];
            local_21c = (byte *******)&DAT_00000004;
            if (ppppppbVar10 == (byte ******)0x0) {
LAB_01673300:
              uVar11 = 0;
              pppppppbVar9 = (byte *******)0x0;
              uVar16 = 0;
              pppppppbVar15 = (byte *******)0x0;
              uVar18 = 0;
LAB_01673314:
              uVar26 = SUB42(pppppppbVar15,0);
              param_2[2] = ppppppbVar14;
              param_2[3] = ppppppbVar10;
              if ((((uint)pppppppbVar9 & 0xff) != 0 || (uVar11 & 0xff) != 0) || uVar16 != 0) {
                thunk_FUN_016d3fb4(local_21c);
              }
              iVar35 = ((uint)pppppppbVar15 & 0xffff) + uVar18 * 0x10000;
              if (iVar35 != 0) {
                if (*pppppppbVar22 != (byte ******)0x0) {
                  (*(code *)*pppppppbVar22)(iVar35);
                }
                if (pppppppbVar22[1] != (byte ******)0x0) {
                  thunk_FUN_016d3fb4(iVar35);
                }
              }
LAB_01673370:
              sVar24 = 2;
              local_8c = (byte *******)0x0;
            }
            else {
              cVar1 = *(char *)ppppppbVar14;
              param_2[2] = (byte ******)((int)ppppppbVar14 + 1);
              param_2[3] = (byte ******)((int)ppppppbVar10 + -1);
              if ((cVar1 != ' ') && (cVar1 != 'T' && cVar1 != 't')) {
                param_2[2] = ppppppbVar14;
                param_2[3] = ppppppbVar10;
                goto LAB_01673300;
              }
              FUN_0166f40c(&local_128,param_2);
              if (local_128 != (byte *******)0x3) {
                pppppppbVar9 = (byte *******)
                               CONCAT13(bStack_121,
                                        CONCAT12(bStack_122,CONCAT11(bStack_123,bStack_124)));
                uVar11 = (uint)pppppppbVar9 >> 8;
                local_8c = local_128;
                local_21c = local_120;
                sVar24 = sStack_11a;
                pppppppbVar15 = local_118;
                pppppppbVar22 = local_114;
                pppppppbVar5 = pppppppbVar9;
joined_r0x0167372c:
                uVar16 = (uint)pppppppbVar5 >> 0x10;
                uVar26 = SUB42(pppppppbVar15,0);
                local_128 = local_8c;
                local_120 = local_21c;
                sStack_11a = sVar24;
                local_118 = pppppppbVar15;
                local_114 = pppppppbVar22;
                if (local_8c != (byte *******)0x3) {
                  uVar18 = (uint)pppppppbVar15 >> 0x10;
                  uVar32 = (undefined2)((uint)pppppppbVar15 >> 0x10);
                  if (local_8c != (byte *******)&DAT_00000001) {
                    local_60 = (byte *******)CONCAT22(sVar24,uStack_11c);
                    local_88 = (byte *******)
                               ((uint)pppppppbVar9 & 0xff | (uVar11 & 0xff) << 8 | uVar16 << 0x10);
                    local_80 = local_60;
                    local_68 = local_88;
                    goto LAB_01672c60;
                  }
                  goto LAB_01673314;
                }
                if (sVar24 != 3) {
                  local_224 = (byte *******)
                              ((uint)pppppppbVar9 & 0xff | (uVar11 & 0xff) << 8 | uVar16 << 0x10);
                  goto LAB_0167374c;
                }
                goto LAB_01673370;
              }
              local_224 = (byte *******)
                          CONCAT13(bStack_121,CONCAT12(bStack_122,CONCAT11(bStack_123,bStack_124)));
              local_21c = local_120;
              pppppppbVar9 = (byte *******)param_2[2];
              pppppppbVar22 = (byte *******)param_2[3];
              local_40 = pppppppbVar9;
              local_3c = pppppppbVar22;
              if (pppppppbVar22 == (byte *******)0x0) {
LAB_016733ec:
                param_2[2] = (byte ******)pppppppbVar9;
                param_2[3] = (byte ******)pppppppbVar22;
                local_180 = (byte *******)0x0;
                local_184 = (byte *******)0x0;
                local_188 = (byte *******)&DAT_00000004;
                local_18c = (byte *******)0x0;
                local_190 = (byte *******)0x1;
                if (pppppppbVar22 != (byte *******)0x0) {
                  bVar20 = *(byte *)pppppppbVar9;
                  param_2[2] = (byte ******)((int)pppppppbVar9 + 1);
                  param_2[3] = (byte ******)((int)pppppppbVar22 + -1);
                  if (bVar20 == 0x2d || bVar20 == 0x2b) {
                    FUN_0166fbe0(&local_128,param_2);
                    uVar11 = (uint)bStack_124;
                    if (local_128 == (byte *******)0x3) {
                      if ((param_2[3] == (byte ******)0x0) || (*(char *)param_2[2] != ':')) {
                        uVar31 = 0;
                        local_4c = (byte *******)0x0;
                        uVar16 = 0;
                        uVar18 = 0;
                        uVar11 = 0;
                        local_48 = (byte *******)0x0;
                        local_58 = (byte *******)&DAT_00000001;
                        local_44 = extraout_r12;
                        pppppppbVar15 = (byte *******)&DAT_00000004;
                        goto LAB_016735dc;
                      }
                      param_2[2] = (byte ******)((int)param_2[2] + 1);
                      param_2[3] = (byte ******)((int)param_2[3] + -1);
                      pppppppbVar15 = (byte *******)0x16734a8;
                      FUN_0166f028(&local_128,param_2);
                      if (local_128 != (byte *******)0x3) {
                        uVar18 = (uint)bStack_123;
                        uVar16 = (uint)bStack_122;
                        local_4c = (byte *******)CONCAT22(sStack_11a,uStack_11c);
                        uVar31 = (uint)bStack_121;
                        local_48 = local_118;
                        local_58 = local_128;
                        uVar11 = (uint)bStack_124;
                        local_44 = local_114;
                        pppppppbVar15 = local_120;
                        goto LAB_016735dc;
                      }
                      uVar18 = 1;
                      iVar35 = 1;
                      if (bVar20 != 0x2b) {
                        if (bVar20 != 0x2d) {
                    /* WARNING: Subroutine does not return */
                          FUN_00faa478(&DAT_0041446b,0x7d,&DAT_018ada60);
                        }
                        iVar35 = 0xffff;
                      }
                      local_48 = (byte *******)(uVar11 * 0xf);
                      uVar16 = iVar35 * ((uint)bStack_124 + uVar11 * 0x3c);
                      local_4c = (byte *******)(uVar16 + 0x5a0 & 0xffff);
                      if ((byte *******)0xb40 < local_4c) goto LAB_01673528;
                      local_58 = (byte *******)0x3;
                      local_44 = extraout_r12_00;
                    }
                    else {
                      uVar18 = (uint)bStack_123;
                      uVar16 = (uint)bStack_122;
                      uVar31 = (uint)bStack_121;
                      local_4c = (byte *******)CONCAT22(sStack_11a,uStack_11c);
                      local_48 = local_118;
                      local_58 = local_128;
                      local_44 = local_114;
                      pppppppbVar15 = local_120;
LAB_016735dc:
                      uVar16 = uVar16 | uVar31 << 8;
                      uVar18 = uVar11 | uVar18 << 8;
                      if (local_58 == (byte *******)&DAT_00000001) {
                        local_58 = (byte *******)&SUB_00000002;
                      }
                    }
                    local_54 = (byte *******)(uVar18 | uVar16 << 0x10);
                    local_50 = pppppppbVar15;
                    goto LAB_01673618;
                  }
LAB_01673528:
                  param_2[2] = (byte ******)pppppppbVar9;
                  param_2[3] = (byte ******)pppppppbVar22;
                }
                local_48 = (byte *******)0x0;
                local_4c = (byte *******)0x0;
                local_54 = (byte *******)0x0;
                local_50 = (byte *******)&DAT_00000004;
                local_58 = (byte *******)&DAT_00000001;
LAB_01673620:
                local_180 = (byte *******)&local_40;
                local_18c = (byte *******)0x41433b;
                local_188 = (byte *******)&DAT_0000000b;
                local_190 = (byte *******)0x3;
                local_184 = param_2;
                FUN_00953084(&local_128,&local_58,&local_190);
                pppppppbVar15 = local_118;
                uVar3 = CONCAT12(bStack_122,CONCAT11(bStack_123,bStack_124));
                local_54 = (byte *******)CONCAT13(bStack_121,uVar3);
                local_4c = (byte *******)CONCAT22(sStack_11a,uStack_11c);
                local_58 = local_128;
                local_50 = local_120;
                local_48 = local_118;
                local_44 = local_114;
                if (local_128 == (byte *******)&DAT_00000001) {
                  param_2[2] = (byte ******)pppppppbVar9;
                  param_2[3] = (byte ******)pppppppbVar22;
                  if (local_54 != (byte *******)0x0) {
                    thunk_FUN_016d3fb4(local_120);
                  }
                  pppppppbVar22 = local_44;
                  pppppppbVar9 = local_48;
                  sVar24 = 2;
                  if (local_48 != (byte *******)0x0) {
                    if (*local_44 != (byte ******)0x0) {
                      (*(code *)*local_44)(local_48);
                    }
                    if (pppppppbVar22[1] != (byte ******)0x0) {
                      thunk_FUN_016d3fb4(pppppppbVar9);
                    }
                  }
                  goto LAB_0167374c;
                }
                if (local_128 != (byte *******)0x3) {
                  pppppppbVar9 = (byte *******)(uVar3 & 0xffff);
                  uVar11 = (uint)bStack_123;
                  local_8c = local_128;
                  local_21c = local_120;
                  sVar24 = sStack_11a;
                  pppppppbVar22 = local_114;
                  pppppppbVar5 = local_54;
                  goto joined_r0x0167372c;
                }
              }
              else {
                ppppppbVar6 = *pppppppbVar9;
                param_2[2] = (byte ******)((int)pppppppbVar9 + 1);
                param_2[3] = (byte ******)((int)pppppppbVar22 + -1);
                if (((uint)ppppppbVar6 & 0xdf) != 0x5a) {
                  param_2[2] = (byte ******)pppppppbVar9;
                  param_2[3] = (byte ******)pppppppbVar22;
                  goto LAB_016733ec;
                }
                local_18c = (byte *******)((uint)local_18c & 0xffff0000);
                local_58 = (byte *******)0x3;
                local_54 = local_18c;
                local_50 = local_188;
                local_4c = local_184;
                local_48 = local_180;
                local_44 = local_17c;
LAB_01673618:
                if (local_58 != (byte *******)0x3) goto LAB_01673620;
              }
              pppppppbVar15 = (byte *******)((uint)local_54 >> 0x10);
              sVar24 = (short)local_54;
LAB_0167374c:
              uVar26 = SUB42(pppppppbVar15,0);
              local_8c = (byte *******)&DAT_00000001;
            }
            bVar2 = false;
            local_88 = local_224;
            pppppppbStack_84 = local_21c;
            local_78 = (byte *******)CONCAT22(local_78._2_2_,uVar4);
            local_7c = (byte *******)CONCAT22((short)uVar28,1);
            local_80 = (byte *******)CONCAT22(uVar26,sVar24);
            local_90 = (byte *******)0x0;
            goto LAB_01673790;
          }
          pppppppbVar22 = (byte *******)0x0;
          do {
            if (pppppppbVar15 == (byte *******)0x0) goto LAB_01672afc;
            uVar11 = ((uint)pppppppbVar22 & 0xff) * 4 + ((uint)pppppppbVar22 & 0xff);
            if (uVar11 >> 7 != 0) {
              uVar7 = 1;
              if (*(byte *)pppppppbVar9 - 0x30 < 10) {
                uVar7 = 2;
              }
              goto LAB_01673260;
            }
            uVar16 = *(byte *)pppppppbVar9 - 0x30;
            if (9 < uVar16) {
              uVar7 = 1;
              goto LAB_01673260;
            }
            pppppppbVar22 = (byte *******)((uVar11 * 2 & 0xff) + (uVar16 & 0xff));
            pppppppbVar15 = (byte *******)((int)pppppppbVar15 + -1);
            pppppppbVar9 = (byte *******)((int)pppppppbVar9 + 1);
          } while (((uint)pppppppbVar22 & 0xffffff00) == 0);
          uVar7 = 2;
        }
LAB_01673260:
        pcVar12 = "2DIGIT should match u8";
        puVar17 = &DAT_018ad7d8;
        goto LAB_01672f88;
      }
      do {
        if (pppppppbVar9 == (byte *******)0x0) goto LAB_016727a4;
        uVar28 = (uVar28 & 0xffff) * 4 + (uVar28 & 0xffff);
        if (uVar28 >> 0xf != 0) {
          uVar7 = 1;
          if (*pbVar13 - 0x30 < 10) {
            uVar7 = 2;
          }
          goto LAB_01672f70;
        }
        uVar11 = *pbVar13 - 0x30;
        if (9 < uVar11) goto LAB_01673de4;
        uVar28 = (uVar28 * 2 & 0xffff) + (uVar11 & 0xffff);
        pppppppbVar9 = (byte *******)((int)pppppppbVar9 + -1);
        pbVar13 = pbVar13 + 1;
      } while ((uVar28 & 0x10000) == 0);
      uVar7 = 2;
    }
LAB_01672f70:
    pcVar12 = "4DIGIT should match u8";
    puVar17 = &DAT_018ad818;
LAB_01672f88:
    local_128 = (byte *******)CONCAT31(local_128._1_3_,uVar7);
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(pcVar12,0x16,&local_128,&DAT_018ad7a8,puVar17);
  }
  local_4c = (byte *******)CONCAT22(sStack_11a,uStack_11c);
  local_54 = (byte *******)CONCAT22((short)((uint)pbVar13 >> 0x10),CONCAT11(bStack_123,bStack_124));
  local_48 = local_118;
  local_44 = local_114;
  local_58 = local_128;
  local_50 = local_120;
  local_8c = local_128;
LAB_01672c4c:
  local_88 = local_54;
  local_80 = local_4c;
  pppppppbVar22 = local_44;
  local_21c = local_50;
  uVar32 = local_48._2_2_;
  uVar26 = (undefined2)local_48;
LAB_01672c60:
  local_180 = (byte *******)&local_70;
  local_18c = (byte *******)&DAT_00414388;
  bVar2 = true;
  local_188 = (byte *******)&DAT_00000009;
  local_190 = (byte *******)0x3;
  local_7c = (byte *******)CONCAT22(uVar32,uVar26);
  local_90 = (byte *******)0x1;
  local_184 = param_2;
  pppppppbStack_84 = local_21c;
  local_78 = pppppppbVar22;
  FUN_00953084(&local_128,puVar8,&local_190);
  pppppppbVar5 = local_78;
  pppppppbVar22 = local_7c;
  pppppppbVar15 = pppppppbStack_84;
  pppppppbVar9 = local_88;
  *puVar8 = local_128;
  puVar8[1] = CONCAT13(bStack_121,CONCAT12(bStack_122,CONCAT11(bStack_123,bStack_124)));
  puVar8[2] = local_120;
  puVar8[3] = CONCAT22(sStack_11a,uStack_11c);
  puVar8[4] = local_118;
  puVar8[5] = local_114;
  local_90 = (byte *******)&DAT_00000001;
  if (local_8c != (byte *******)&DAT_00000001) {
LAB_01673790:
    local_a8 = local_88;
    pppppppbStack_a4 = pppppppbStack_84;
    pppppppbStack_a0 = local_80;
    pppppppbStack_9c = local_7c;
    pppppppbStack_98 = local_78;
    pppppppbVar23 = local_8c;
LAB_0167379c:
    puVar36 = (undefined4 *)((uint)&local_190 | 4);
    *puVar36 = local_a8;
    puVar36[1] = pppppppbStack_a4;
    puVar36[2] = pppppppbStack_a0;
    puVar36[3] = pppppppbStack_9c;
    puVar36[4] = pppppppbStack_98;
    local_190 = pppppppbVar23;
    if (bVar2) {
      local_13c = 8;
      if (pppppppbVar23 == (byte *******)&DAT_00000001) goto LAB_016737d4;
    }
    else {
      local_13c = 6;
      local_160 = 0x80000003;
      local_16c = 0x80000003;
      local_178 = 0x80000003;
    }
    FUN_016dd1aa(&local_1f8,&local_190,0x68);
    goto LAB_01673b10;
  }
  param_2[2] = (byte ******)pppppppbVar27;
  param_2[3] = (byte ******)pppppppbVar37;
  local_40 = pppppppbVar27;
  local_3c = pppppppbVar37;
  FUN_0166f40c(&local_190,param_2);
  if (local_190 == (byte *******)0x3) {
    bVar2 = false;
    pppppppbVar23 = (byte *******)&DAT_00000001;
    local_120 = local_18c;
    uStack_11c = SUB42(local_188,0);
    sStack_11a = (short)((uint)local_188 >> 0x10);
    local_114 = (byte *******)((uint)local_114 & 0xffff0000);
    local_118 = (byte *******)CONCAT22(local_118._2_2_,2);
    bStack_124 = 1;
    bStack_123 = 0;
    bStack_122 = 0;
    bStack_121 = 0;
LAB_01672e68:
    pppppppbStack_a4 = (byte *******)CONCAT22(sStack_11a,uStack_11c);
    local_a8 = local_120;
    pppppppbStack_a0 = local_118;
    pppppppbStack_9c = local_114;
    pppppppbStack_98 = (byte *******)local_110;
    if (pppppppbVar9 != (byte *******)0x0) {
      thunk_FUN_016d3fb4(pppppppbVar15);
    }
    if (pppppppbVar22 != (byte *******)0x0) {
      if (*pppppppbVar5 != (byte ******)0x0) {
        (*(code *)*pppppppbVar5)(pppppppbVar22);
      }
      if (pppppppbVar5[1] != (byte ******)0x0) {
        thunk_FUN_016d3fb4(pppppppbVar22);
      }
    }
    goto LAB_0167379c;
  }
  piVar33 = (int *)((uint)&local_128 | 4);
  bVar2 = true;
  *piVar33 = (int)local_190;
  piVar33[1] = (int)local_18c;
  piVar33[2] = (int)local_188;
  piVar33[3] = (int)local_184;
  piVar33[4] = (int)local_180;
  piVar33[5] = (int)local_17c;
  local_48 = (byte *******)&local_40;
  local_50 = (byte *******)&DAT_00000004;
  local_128 = (byte *******)&DAT_00000001;
  local_54 = (byte *******)&DAT_00567304;
  local_58 = (byte *******)0x3;
  local_4c = param_2;
  FUN_00953084(&local_190,piVar33,&local_58);
  *piVar33 = (int)local_190;
  piVar33[1] = (int)local_18c;
  piVar33[2] = (int)local_188;
  piVar33[3] = (int)local_184;
  piVar33[4] = (int)local_180;
  piVar33[5] = (int)local_17c;
  pppppppbVar23 =
       (byte *******)CONCAT13(bStack_121,CONCAT12(bStack_122,CONCAT11(bStack_123,bStack_124)));
  if (pppppppbVar23 != (byte *******)&DAT_00000001) goto LAB_01672e68;
  if (pppppppbVar9 != (byte *******)0x0) {
    thunk_FUN_016d3fb4(pppppppbVar15);
  }
  if (pppppppbVar22 != (byte *******)0x0) {
    if (*pppppppbVar5 != (byte ******)0x0) {
      (*(code *)*pppppppbVar5)(pppppppbVar22);
    }
    if (pppppppbVar5[1] != (byte ******)0x0) {
      thunk_FUN_016d3fb4(pppppppbVar22);
    }
  }
  pppppppbStack_a4 = (byte *******)CONCAT22(sStack_11a,uStack_11c);
  local_a8 = local_120;
  pppppppbStack_a0 = local_118;
  pppppppbStack_9c = local_114;
  pppppppbStack_98 = (byte *******)local_110;
  local_190 = (byte *******)&DAT_00000001;
  puVar36 = (undefined4 *)((uint)&local_190 | 4);
  *puVar36 = local_120;
  puVar36[1] = pppppppbStack_a4;
  puVar36[2] = local_118;
  puVar36[3] = local_114;
  puVar36[4] = (byte *******)local_110;
LAB_016737d4:
  local_13c = 8;
  local_58 = (byte *******)*puVar36;
  local_54 = (byte *******)puVar36[1];
  local_50 = (byte *******)puVar36[2];
  local_4c = (byte *******)puVar36[3];
  local_48 = (byte *******)puVar36[4];
  param_2[2] = (byte ******)pppppppbVar27;
  param_2[3] = (byte ******)pppppppbVar37;
  FUN_016785a0(&local_90,param_2);
  pppppppbVar15 = local_48;
  pppppppbVar9 = local_4c;
  if (local_90 == (byte *******)0x3) {
    local_110 = CONCAT44(pppppppbStack_84,local_88);
    local_d4 = 4;
    local_108 = 0x80000003;
    uStack_11c = 3;
    sStack_11a = -0x8000;
    local_128 = (byte *******)0x80000003;
LAB_01673928:
    FUN_016dd1aa(&local_1f8,&local_128,0x68);
    if (local_58 != (byte *******)0x0) {
      thunk_FUN_016d3fb4(local_54);
    }
    pppppppbVar37 = local_48;
    pppppppbVar27 = local_4c;
    if (local_4c != (byte *******)0x0) {
      if (*local_48 != (byte ******)0x0) {
        (*(code *)*local_48)(local_4c);
      }
      if (pppppppbVar37[1] != (byte ******)0x0) {
        thunk_FUN_016d3fb4(pppppppbVar27);
      }
    }
  }
  else {
    local_114 = local_7c;
    local_128 = local_90;
    bStack_124 = (byte)local_8c;
    bStack_123 = (byte)((uint)local_8c >> 8);
    bStack_122 = (byte)((uint)local_8c >> 0x10);
    bStack_121 = (byte)((uint)local_8c >> 0x18);
    local_120 = local_88;
    uStack_11c = SUB42(pppppppbStack_84,0);
    sStack_11a = (short)((uint)pppppppbStack_84 >> 0x10);
    local_118 = local_80;
    local_d4 = 8;
    if (local_90 != (byte *******)&DAT_00000001) goto LAB_01673928;
    piVar33 = (int *)((uint)&local_128 | 4);
    local_c0 = *piVar33;
    local_bc = piVar33[1];
    iStack_b8 = piVar33[2];
    local_b4 = piVar33[3];
    local_b0 = (undefined4 *)piVar33[4];
    if (local_58 != (byte *******)0x0) {
      thunk_FUN_016d3fb4(local_54);
    }
    if (pppppppbVar9 != (byte *******)0x0) {
      if (*pppppppbVar15 != (byte ******)0x0) {
        (*(code *)*pppppppbVar15)(pppppppbVar9);
      }
      if (pppppppbVar15[1] != (byte ******)0x0) {
        thunk_FUN_016d3fb4(pppppppbVar9);
      }
    }
    param_2[2] = (byte ******)pppppppbVar27;
    param_2[3] = (byte ******)pppppppbVar37;
    FUN_01679578(&local_90,param_2);
    pppppppbVar27 = pppppppbStack_84;
    if (local_90 == (byte *******)0x3) {
      uVar19 = puVar8[1];
      uVar21 = puVar8[2];
      local_1a4 = 3;
      local_1f8 = (byte *******)0x80000003;
      pppppppbVar27 = (byte *******)0x80000003;
      piVar34 = piVar33;
      uVar25 = extraout_r12_01;
LAB_016739e4:
      *puVar30 = uVar25;
      puVar30[1] = pppppppbVar37;
      puVar30[3] = pppppppbVar15;
      puVar30[4] = piVar34;
      puVar30[5] = uVar19;
      puVar30[6] = uVar21;
      local_1f0 = CONCAT44(pppppppbVar27,(undefined4)local_1f0);
      local_1d8 = 0x80000003;
      if (local_c0 != 0) {
        thunk_FUN_016d3fb4(local_bc);
      }
      puVar30 = local_b0;
      iVar35 = local_b4;
      if (local_b4 != 0) {
        if ((code *)*local_b0 != (code *)0x0) {
          (*(code *)*local_b0)(local_b4);
        }
        if (puVar30[1] != 0) {
          thunk_FUN_016d3fb4(iVar35);
        }
      }
    }
    else {
      pppppppbVar15 = (byte *******)puVar8[3];
      piVar34 = (int *)puVar8[4];
      uVar25 = *puVar8;
      pppppppbVar37 = (byte *******)puVar8[1];
      if (local_90 != (byte *******)&DAT_00000001) {
        local_1a4 = 8;
        local_1f8 = local_90;
        uVar19 = extraout_r2;
        uVar21 = extraout_r3;
        goto LAB_016739e4;
      }
      FUN_016692ac(&local_c0);
      puVar30[3] = pppppppbVar15;
      puVar30[4] = piVar34;
      *puVar30 = uVar25;
      puVar30[1] = pppppppbVar37;
      local_1a4 = 8;
      local_1f0 = CONCAT44(pppppppbVar27,(undefined4)local_1f0);
      local_1f8 = (byte *******)&DAT_00000001;
    }
    if (local_d4 == 8) {
      if (&DAT_00000001 < local_128) {
        FUN_016692ac(piVar33);
      }
    }
    else {
      FUN_0167a520(&local_128);
    }
  }
  if (local_13c == 8) {
    if (&DAT_00000001 < local_190) {
      if (local_18c != (byte *******)0x0) {
        thunk_FUN_016d3fb4(local_188);
      }
      pppppppbVar37 = local_17c;
      pppppppbVar27 = local_180;
      if (local_180 != (byte *******)0x0) {
        if (*local_17c != (byte ******)0x0) {
          (*(code *)*local_17c)(local_180);
        }
        if (pppppppbVar37[1] != (byte ******)0x0) {
          thunk_FUN_016d3fb4(pppppppbVar27);
        }
      }
    }
  }
  else {
    FUN_0167a520(&local_190);
  }
LAB_01673b10:
  uVar28 = local_1a4;
  if (local_1a4 == 8) {
    *param_1 = local_1f8;
    param_1[1] = local_1f4;
    param_1[2] = (undefined4)local_1f0;
    param_1[3] = local_1f0._4_4_;
    param_1[4] = local_1e8;
    param_1[5] = local_1e4;
    param_1[0x15] = 8;
    return;
  }
  FUN_016dd1aa(&local_190,&local_1f8,0x54);
  local_d0 = local_1a0;
  uStack_cc = uStack_19c;
  uStack_c8 = uStack_198;
  uStack_c4 = uStack_194;
  FUN_016dd1aa(&local_128,&local_190,0x54);
  iVar35 = uVar28 - 2;
  local_d4 = uVar28;
  if (uVar28 < 2) {
    iVar35 = 6;
  }
                    /* WARNING: Could not recover jumptable at 0x01673bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_01673bbc + *(int *)(&UNK_01673bbc + iVar35 * 4)))();
  return;
LAB_01673de4:
  uVar7 = 1;
  goto LAB_01672f70;
}

