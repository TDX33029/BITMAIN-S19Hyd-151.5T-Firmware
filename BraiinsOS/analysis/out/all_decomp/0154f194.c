// FUN_0154f194 @ 0154f194 size=4524 calls_out=13 calls_in=1
// strings: 

void FUN_0154f194(uint *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                 uint *param_7,undefined4 param_8,int param_9,uint *param_10,int *param_11,
                 int *param_12,undefined4 param_13,undefined4 *param_14,uint param_15,
                 undefined4 param_16,int *param_17)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  bool bVar5;
  byte *pbVar6;
  undefined4 uVar7;
  uint uVar8;
  code *pcVar9;
  int iVar10;
  uint *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  undefined1 uVar18;
  ushort *puVar19;
  undefined4 *puVar20;
  uint uVar21;
  byte *pbVar22;
  int iVar23;
  bool bVar24;
  bool bVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined4 local_3d8;
  uint local_3d4;
  undefined4 *local_3d0;
  uint local_3b8;
  uint local_3b4;
  undefined1 *local_3b0;
  uint local_3ac;
  uint local_3a8;
  uint local_3a4;
  uint local_3a0;
  uint local_39c;
  uint local_398;
  undefined1 *local_394;
  uint local_390;
  uint uStack_38c;
  undefined1 auStack_388 [144];
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  int iStack_2bc;
  uint uStack_2b8;
  undefined4 uStack_2b4;
  undefined1 auStack_2ac [68];
  uint local_268;
  uint local_264;
  uint local_260;
  undefined1 local_25c;
  undefined1 local_25b;
  undefined1 local_25a;
  undefined1 local_259;
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256;
  undefined1 local_255;
  undefined1 local_254;
  undefined1 local_253;
  undefined1 local_252;
  undefined1 local_251;
  undefined1 local_250;
  undefined1 local_24f;
  undefined1 local_24e;
  undefined1 local_24d;
  undefined1 local_24c;
  undefined1 local_24b;
  undefined1 local_24a;
  undefined1 local_249;
  undefined1 local_248;
  undefined1 local_247;
  undefined1 local_246;
  undefined1 local_245;
  undefined1 local_244;
  undefined1 local_243;
  undefined1 local_242;
  undefined1 local_241;
  undefined1 local_240;
  undefined1 local_23f;
  undefined1 local_23e;
  undefined1 local_23d;
  undefined1 local_23c;
  undefined1 local_23b;
  undefined1 local_23a;
  undefined1 local_239;
  undefined1 local_238;
  undefined1 local_237;
  undefined1 local_236;
  undefined1 local_235;
  undefined1 local_234;
  undefined1 local_233;
  undefined1 local_232;
  undefined1 local_231;
  undefined1 local_230;
  undefined1 local_22f;
  undefined1 local_22e;
  undefined1 local_22d;
  undefined1 local_22c;
  undefined1 local_22b;
  undefined1 local_22a;
  undefined1 local_229;
  uint local_228;
  undefined8 local_1d0;
  uint local_1c8;
  uint local_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  int local_194;
  uint local_190;
  undefined4 uStack_18c;
  undefined2 local_158;
  undefined1 auStack_148 [148];
  int *local_b4;
  int local_b0;
  uint local_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint local_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  int local_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  ushort local_5c;
  undefined1 local_5a;
  undefined1 local_59;
  ushort *local_58;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  undefined *local_48;
  undefined4 local_44;
  undefined *local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined8 *local_30;
  uint local_2c;
  
  if (*(int *)(param_5 + 8) != 0) {
    pbVar22 = *(byte **)(param_5 + 4);
    iVar14 = *(int *)(param_5 + 8) * 0x14;
    puVar19 = (ushort *)(pbVar22 + 0x10);
    iVar16 = iVar14;
    do {
      if (((1 << (uint)(byte)puVar19[-8] & 0x860U) == 0) &&
         ((((byte)puVar19[-8] != 0x10 || (10 < *puVar19 - 0x18)) ||
          ((1 << (*puVar19 - 0x18 & 0xff) & 0x405U) == 0)))) {
        local_1d0._4_4_ = 0x1a0001;
        local_1d0._0_4_ = (undefined1 *)0x80000001;
        local_158 = 4;
        FUN_01525ed4(param_3,&local_1d0,*(char *)(param_3 + 0x31) == '\x02');
        bVar24 = true;
        *(undefined1 *)(param_1 + 1) = 0x44;
        *(undefined1 *)(param_3 + 0x255) = 1;
        *param_1 = (uint)&DAT_8000001c;
        goto LAB_0154f32c;
      }
      puVar19 = puVar19 + 10;
      iVar16 = iVar16 + -0x14;
    } while (iVar16 != 0);
    bVar1 = *pbVar22;
    pbVar6 = pbVar22;
    iVar16 = iVar14;
    do {
      iVar16 = iVar16 + -0x14;
      if ((1 << (uint)bVar1 & 0xffdfU) == 0) {
        if (bVar1 != 0x10) {
          uVar3 = *(ushort *)(pbVar6 + 0x12);
          uVar17 = (uint)*(ushort *)(pbVar6 + 0x10);
          uVar26 = (*(code *)param_14[9])(param_13);
          if (((uint)uVar26 & 0xffff) == uVar17) {
            bVar24 = false;
            bVar5 = true;
            if ((uVar17 != 0xf) || (((uint)((ulonglong)uVar26 >> 0x20) & 0xffff) == (uint)uVar3))
            goto LAB_0154f640;
          }
          (*(code *)param_14[5])(&local_1d0,param_13);
          if (((((uint)(undefined1 *)local_1d0 & 0xffff) == 0x10) ||
              (((uint)(undefined1 *)local_1d0 & 0xffff) != uVar17)) ||
             ((uVar8 = (uint)(undefined1 *)local_1d0 >> 0x10, uVar17 == 0xf && (uVar8 != uVar3))))
          goto LAB_0154f758;
          iVar16 = *(int *)(param_2[0x27] + 0x1c);
          if (iVar16 == 0) goto LAB_0154f758;
          puVar15 = *(undefined4 **)(param_2[0x27] + 0x18);
          puVar20 = puVar15 + iVar16 * 2;
          goto LAB_0154f5c8;
        }
        if (*(short *)(pbVar6 + 0x10) == 0x22) break;
      }
      if (iVar16 == 0) break;
      bVar1 = pbVar6[0x14];
      pbVar6 = pbVar6 + 0x14;
    } while( true );
  }
  local_1d0._4_4_ = 0x190001;
  local_1d0._0_4_ = (undefined1 *)0x80000001;
  local_158 = 4;
  FUN_01525ed4(param_3,&local_1d0,*(char *)(param_3 + 0x31) == '\x02');
  bVar24 = true;
  *(undefined1 *)(param_3 + 0x255) = 1;
  *param_1 = (uint)&DAT_8000001c;
  param_1[1] = 0x1f;
LAB_0154f32c:
  bVar5 = true;
  if (*param_17 != -0x80000000) {
LAB_0154f348:
    FUN_01550a74(param_17);
  }
  if (bVar24) {
    if ((code *)*param_14 != (code *)0x0) {
      (*(code *)*param_14)(param_13);
    }
    if (param_14[1] != 0) {
      thunk_FUN_016d3fb4(param_13);
    }
  }
LAB_0154f384:
  iVar16 = param_12[1];
  puVar20 = (undefined4 *)(iVar16 + 4);
  for (iVar14 = param_12[2]; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (puVar20[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar20);
    }
    puVar20 = puVar20 + 3;
  }
  if (*param_12 != 0) {
    thunk_FUN_016d3fb4(iVar16);
  }
  if (param_12[3] != 0) {
    thunk_FUN_016d3fb4(param_12[4]);
  }
  if ((bVar5) && (iVar14 = *param_11, iVar14 != 0)) {
    puVar20 = (undefined4 *)param_11[1];
    pcVar9 = (code *)*puVar20;
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(iVar14);
    }
    if (puVar20[1] != 0) {
      thunk_FUN_016d3fb4(iVar14);
    }
  }
  uVar17 = param_10[5];
  puVar20 = (undefined4 *)param_10[6];
  pcVar9 = (code *)*puVar20;
  if (pcVar9 != (code *)0x0) {
    (*pcVar9)(uVar17);
  }
  if (puVar20[1] != 0) {
    thunk_FUN_016d3fb4(uVar17);
  }
  if ((*param_10 & 0x7fffffff) == 0) {
    cVar2 = (char)*param_7;
  }
  else {
    thunk_FUN_016d3fb4(param_10[1]);
    cVar2 = (char)*param_7;
  }
  if ((cVar2 == '\0') && ((param_7[1] & 0x7fffffff) != 0)) {
    thunk_FUN_016d3fb4(param_7[2]);
    iVar14 = *(int *)(param_6 + 0x3c);
  }
  else {
    iVar14 = *(int *)(param_6 + 0x3c);
  }
  if (iVar14 != -0x80000000) {
    FUN_01544360(param_6);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *param_2;
    bVar24 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar24);
  *param_2 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01561b24(param_2);
    return;
  }
  return;
LAB_0154f5c8:
  uVar7 = *puVar15;
  iVar10 = puVar15[1];
  iVar16 = (**(code **)(iVar10 + 0x24))(uVar7,5);
  if (iVar16 == 0) goto LAB_0154f5b8;
  uVar26 = (**(code **)(iVar10 + 0x1c))(uVar7);
  if ((((uint)uVar26 & 0xffff) != uVar17) ||
     (uVar17 == 0xf && ((uint)((ulonglong)uVar26 >> 0x20) & 0xffff) != uVar8)) goto LAB_0154f5b8;
  bVar24 = true;
  bVar5 = false;
  *(undefined4 *)(param_3 + 0x210) = 1;
  *(undefined4 *)(param_3 + 0x214) = uVar7;
  *(int *)(param_3 + 0x218) = iVar10;
LAB_0154f640:
  bVar1 = *pbVar22;
  do {
    iVar14 = iVar14 + -0x14;
    if ((1 << (uint)bVar1 & 0xffbfU) == 0) {
      if (bVar1 == 0x10) {
        if (*(short *)(pbVar22 + 0x10) != 0x18) goto LAB_0154f6a0;
        goto LAB_0154f6a8;
      }
      iVar14 = *param_11;
      puVar20 = (undefined4 *)param_11[1];
      uVar26 = *(undefined8 *)param_11;
      if (iVar14 == 0) {
        bVar5 = false;
        iVar14 = 0;
        goto LAB_0154f6bc;
      }
      uVar18 = 0x37;
      if (*(int *)(param_6 + 0x3c) != -0x80000000) {
        sVar4 = *(short *)(pbVar22 + 2);
        iVar16 = param_11[2];
        uVar7 = *(undefined4 *)(param_9 + 0x18);
        iVar10 = *(int *)(param_9 + 0x1c);
        iVar23 = *(int *)(param_6 + 0x38);
        uVar27 = (**(code **)(*(int *)(iVar23 + 0x1c) + 0x18))(*(undefined4 *)(iVar23 + 0x18));
        uVar28 = (**(code **)(iVar10 + 0x18))(uVar7);
        uVar17 = (uint)(uVar28 & 0xff000000ff);
        bVar25 = (uint)(uVar27 & 0xff000000ff) == uVar17;
        if (bVar25) {
          uVar17 = (uint)(((uint)uVar27 & 0xff) == 7);
        }
        if (!bVar25 ||
            (uVar17 & (int)((uVar27 & 0xff000000ff) >> 0x20) !=
                      (int)((uVar28 & 0xff000000ff) >> 0x20)) != 0) {
          local_1d0._4_4_ = 0xd0001;
          local_1d0._0_4_ = (undefined1 *)0x80000001;
          local_158 = 4;
          FUN_01525ed4(param_3,&local_1d0,*(char *)(param_3 + 0x31) == '\x02');
          *(undefined1 *)(param_3 + 0x255) = 1;
          uVar18 = 0x2e;
          goto LAB_01550250;
        }
        if ((*(byte *)(param_4 + 4) - 1 < 2) &&
           ((*(short *)(iVar23 + 0x28) != *(short *)(param_9 + 0x28) ||
            ((*(short *)(iVar23 + 0x28) == 0x178 &&
             (*(short *)(iVar23 + 0x2a) != *(short *)(param_9 + 0x2a))))))) {
          local_1d0._4_4_ = 0xd0001;
          local_1d0._0_4_ = (undefined1 *)0x80000001;
          local_158 = 4;
          FUN_01525ed4(param_3,&local_1d0,*(char *)(param_3 + 0x31) == '\x02');
          *(undefined1 *)(param_3 + 0x255) = 1;
          uVar18 = 0xb;
          goto LAB_01550250;
        }
        if (sVar4 != 0) {
          local_1d0._4_4_ = 0xd0001;
          local_1d0._0_4_ = (undefined1 *)0x80000001;
          local_158 = 4;
          FUN_01525ed4(param_3,&local_1d0,*(char *)(param_3 + 0x31) == '\x02');
          *(undefined1 *)(param_3 + 0x255) = 1;
          uVar18 = 0x30;
          goto LAB_01550250;
        }
        goto LAB_0154f7f0;
      }
LAB_01550250:
      pcVar9 = (code *)*puVar20;
      *(undefined1 *)(param_1 + 1) = uVar18;
      *param_1 = (uint)&DAT_8000001c;
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(iVar14);
      }
      if (puVar20[1] != 0) {
        thunk_FUN_016d3fb4(iVar14);
      }
      pcVar9 = (code *)*param_14;
      if (bVar5) {
        if (pcVar9 != (code *)0x0) {
          (*pcVar9)(param_13);
        }
      }
      else if (pcVar9 != (code *)0x0) {
        (*pcVar9)(param_13);
      }
      iVar14 = param_14[1];
      local_3d8 = param_13;
LAB_0154fc58:
      bVar24 = true;
      goto LAB_01550034;
    }
LAB_0154f6a0:
    if (iVar14 == 0) {
LAB_0154f6a8:
      iVar14 = *param_11;
      puVar20 = (undefined4 *)param_11[1];
      bVar5 = false;
      if (iVar14 != 0) {
        bVar5 = true;
      }
LAB_0154f6bc:
      *(undefined1 *)(param_4 + 4) = 4;
      *(undefined1 *)(param_3 + 0x254) = 0;
      FUN_016dd1aa(&local_1d0,param_6,0x48);
      *(undefined4 *)(param_6 + 0x3c) = 0x80000000;
      if (local_194 != -0x80000000) {
        FUN_01544360(&local_1d0);
      }
      uVar26 = (**(code **)(*(int *)(param_9 + 0xc) + 0xc))(*(undefined4 *)(param_9 + 8),0);
      if (bVar5) {
        if ((code *)*puVar20 != (code *)0x0) {
          (*(code *)*puVar20)(iVar14);
        }
        if (puVar20[1] != 0) {
          thunk_FUN_016d3fb4(iVar14);
        }
      }
      iVar16 = param_9;
LAB_0154f7f0:
      local_3d0 = (undefined4 *)((ulonglong)uVar26 >> 0x20);
      uVar7 = (undefined4)uVar26;
      if (*(int *)(param_3 + 0x210) == 1) {
        *(undefined4 *)(param_3 + 0x210) = 2;
      }
      iVar14 = 0xc;
      if (bVar24) {
        iVar14 = 0x18;
      }
      (**(code **)((int)param_14 + iVar14))
                (&local_3b8,param_13,*(undefined4 *)(pbVar6 + 8),*(undefined4 *)(pbVar6 + 0xc));
      if (local_3b8 != 0x80000029) {
        local_1d0._4_4_ = 0xd0001;
        local_1d0._0_4_ = (undefined1 *)0x80000001;
        local_158 = 4;
        FUN_01525ed4(param_3,&local_1d0,*(char *)(param_3 + 0x31) == '\x02');
        *(undefined1 *)(param_3 + 0x255) = 1;
        pcVar9 = (code *)*local_3d0;
        param_1[2] = (uint)local_3b0;
        *param_1 = local_3b8;
        param_1[1] = local_3b4;
        param_1[3] = local_3ac;
        param_1[4] = local_3a8;
        param_1[5] = local_3a4;
        param_1[6] = local_3a0;
        param_1[7] = local_39c;
        if (pcVar9 != (code *)0x0) {
          (*pcVar9)(uVar7);
        }
        iVar14 = local_3d0[1];
        local_3d8 = uVar7;
        goto LAB_0154fc58;
      }
      local_3d4 = local_3ac;
      local_398 = local_3b4;
      local_394 = local_3b0;
      local_390 = local_3ac;
      uStack_38c = local_3a8;
      if (local_3ac < local_3a8) {
        puVar13 = &DAT_018a7c34;
LAB_0155033c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(local_3a8,local_3d4,local_3ac,puVar13);
      }
      uVar26 = (**(code **)(*(int *)(iVar16 + 0x1c) + 0xc))(*(undefined4 *)(iVar16 + 0x18));
      (**(code **)((int)((ulonglong)uVar26 >> 0x20) + 0x14))(&local_1d0,(int)uVar26);
      uVar17 = local_190;
      if (0x40 < local_190) {
        local_3ac = 0x40;
        local_3a8 = 0;
        local_3d4 = local_190;
        puVar13 = &DAT_018a7f14;
        goto LAB_0155033c;
      }
      uVar8 = (*(code *)local_3d0[5])(uVar7);
      local_5c = (ushort)((uVar8 & 0xff) << 8) | (ushort)(uVar8 >> 8) & 0xff;
      local_5a = 0xd;
      local_30 = &local_1d0;
      local_34 = 1;
      local_4c = 1;
      local_50 = &local_5a;
      local_38 = &local_59;
      local_54 = 2;
      local_58 = &local_5c;
      local_40 = &DAT_0040c4cb;
      local_59 = (undefined1)uVar17;
      local_2c = uVar17;
      local_3c = 7;
      local_44 = 6;
      local_48 = &DAT_0040c506;
      (*(code *)local_3d0[4])(&local_268,uVar7,&local_58,6);
      if (0x40 < local_228) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,local_228,0x40,&DAT_018a8b78);
      }
      uVar26 = (**(code **)(*(int *)(iVar16 + 0xc) + 0x10))
                         (*(undefined4 *)(iVar16 + 8),&local_268,local_228,local_3b0 + local_3a8,
                          local_3ac - local_3a8);
      puVar20 = (undefined4 *)((ulonglong)uVar26 >> 0x20);
      local_3d8 = (undefined4)uVar26;
      if ((code *)*local_3d0 != (code *)0x0) {
        (*(code *)*local_3d0)(uVar7);
      }
      if (local_3d0[1] != 0) {
        thunk_FUN_016d3fb4(uVar7);
      }
      local_268 = 0;
      local_264 = 0;
      local_260 = 0;
      local_25c = 0;
      local_25b = 0;
      local_25a = 0;
      local_259 = 0;
      local_258 = 0;
      local_257 = 0;
      local_256 = 0;
      local_255 = 0;
      local_254 = 0;
      local_253 = 0;
      local_252 = 0;
      local_251 = 0;
      local_250 = 0;
      local_24f = 0;
      local_24e = 0;
      local_24d = 0;
      local_24c = 0;
      local_24b = 0;
      local_24a = 0;
      local_249 = 0;
      local_248 = 0;
      local_247 = 0;
      local_246 = 0;
      local_245 = 0;
      local_244 = 0;
      local_243 = 0;
      local_242 = 0;
      local_241 = 0;
      local_240 = 0;
      local_23f = 0;
      local_23e = 0;
      local_23d = 0;
      local_23c = 0;
      local_23b = 0;
      local_23a = 0;
      local_239 = 0;
      local_238 = 0;
      local_237 = 0;
      local_236 = 0;
      local_235 = 0;
      local_234 = 0;
      local_233 = 0;
      local_232 = 0;
      local_231 = 0;
      local_230 = 0;
      local_22f = 0;
      local_22e = 0;
      local_22d = 0;
      local_22c = 0;
      local_22b = 0;
      local_22a = 0;
      local_229 = 0;
      if (local_390 != 0) {
        puVar12 = local_394;
        do {
          *puVar12 = 0;
          local_390 = local_390 - 1;
          puVar12 = puVar12 + 1;
        } while (local_390 != 0);
      }
      local_390 = 0;
      puVar12 = local_394;
      for (uVar17 = local_398; uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      if (local_398 != 0) {
        thunk_FUN_016d3fb4(local_394);
      }
      bVar24 = *param_17 == -0x80000000;
      if (*param_17 == -0x80000000) {
LAB_0154fd50:
        iVar10 = param_2[0x1f];
        iVar23 = param_2[0x1e];
        iVar14 = *(int *)(iVar10 + 8);
        if ((char)*param_7 == '\0') {
          if (param_7[1] == 0x80000000) {
            local_268 = param_7[1];
            local_264 = param_7[2];
            local_260 = param_7[3];
          }
          else {
            FUN_00602a1c(&local_1d0,param_7[2],param_7[3]);
            local_268 = (uint)(undefined1 *)local_1d0;
            local_264 = local_1d0._4_4_;
            local_260 = local_1c8;
          }
          local_1d0._4_4_ = local_268;
          local_1c8 = local_264;
          local_1c4 = local_260;
          local_1d0._0_4_ = (undefined1 *)((uint)(undefined1 *)local_1d0 & 0xffffff00);
        }
        else {
          local_1d0._0_4_ = (undefined1 *)*param_7;
          local_1d0._4_4_ = param_7[1];
          local_1c8 = param_7[2];
          local_1c4 = param_7[3];
        }
        (**(code **)(iVar10 + 0x10))
                  (iVar23 + (iVar14 - 1U & 0xfffffff8) + 8,&local_1d0,*(undefined2 *)(pbVar6 + 0x10)
                   ,*(undefined2 *)(pbVar6 + 0x12));
        if (*(char *)(param_3 + 0x251) != '\0') {
          (**(code **)(param_10[6] + 0xc))(auStack_2ac,param_10[5]);
          iVar14 = param_2[0x24];
          local_1c8 = iVar16;
          local_1d0 = uVar26;
          FUN_015596e4(&local_268,&local_1d0,*(byte *)(param_4 + 4) - 1 < 2,auStack_2ac,param_9,
                       param_2[0x23] + (*(int *)(iVar14 + 8) - 1U & 0xfffffff8) + 8,
                       *(undefined4 *)(iVar14 + 0x10),*(undefined4 *)(iVar14 + 0x14),param_8,param_3
                      );
          bVar24 = param_15 == 0;
          if (bVar24) {
            param_15 = (uint)*(byte *)(param_3 + 0x259);
          }
          if (bVar24 && (param_15 & 1) == 0) {
            local_1d0._0_4_ = &DAT_80000004;
            local_158 = 4;
            FUN_01525ed4(param_3,&local_1d0,0);
          }
          FUN_016dd1aa(&local_190,param_6,0x48);
          local_ac = *param_7;
          uStack_a8 = param_7[1];
          uStack_a4 = param_7[2];
          uStack_a0 = param_7[3];
          uStack_9c = param_7[4];
          FUN_016dd1aa(&local_1d0,param_8,0x40);
          local_98 = *param_10;
          uStack_94 = param_10[1];
          uStack_90 = param_10[2];
          local_8c = param_10[3];
          uStack_88 = param_10[4];
          uStack_84 = param_10[5];
          uStack_80 = param_10[6];
          FUN_016dd1aa(auStack_148,&local_268,0x94);
          local_7c = *param_12;
          iStack_78 = param_12[1];
          iStack_74 = param_12[2];
          local_70 = param_12[3];
          iStack_6c = param_12[4];
          iStack_68 = param_12[5];
          iStack_64 = param_12[6];
          local_b0 = param_9;
          local_b4 = param_2;
          uVar17 = FUN_01547e3c(0x170,8);
          FUN_016dd1aa(uVar17,&local_1d0,0x170);
          *param_1 = 0x80000029;
          param_1[1] = uVar17;
          param_1[2] = (uint)&DAT_018a7e28;
          return;
        }
        local_1d0._4_4_ = 0x10001;
        local_158 = 4;
        local_1d0._0_4_ = (undefined1 *)0x80000001;
        FUN_01525ed4(param_3,&local_1d0,*(char *)(param_3 + 0x31) == '\x02');
        *(undefined1 *)(param_3 + 0x255) = 1;
        *(undefined1 *)(param_1 + 1) = 0x1b;
        *param_1 = (uint)&DAT_8000001c;
      }
      else {
        FUN_016dd1aa(auStack_388,param_17,0x90);
        FUN_0151a828(&local_1d0,auStack_388,iVar16,param_5,*(undefined4 *)(param_9 + 0x18),
                     *(undefined4 *)(param_9 + 0x1c));
        if ((undefined1 *)local_1d0 != (undefined1 *)0x80000001) {
          puVar15 = (undefined4 *)((uint)&local_1d0 | 4);
          local_2f8 = *puVar15;
          uStack_2f4 = puVar15[1];
          uStack_2f0 = puVar15[2];
          uStack_2ec = puVar15[3];
          local_2e8 = puVar15[4];
          uStack_2e4 = puVar15[5];
          uStack_2e0 = puVar15[6];
          uStack_2dc = puVar15[7];
          uStack_2d8 = puVar15[8];
          local_2d0 = local_1a8;
          uStack_2cc = uStack_1a4;
          uStack_2c8 = uStack_1a0;
          uStack_2c4 = uStack_19c;
          local_2c0 = local_198;
          iStack_2bc = local_194;
          uStack_2b8 = local_190;
          uStack_2b4 = uStack_18c;
          uVar18 = 4;
          if ((undefined1 *)local_1d0 != (undefined1 *)0x80000000) {
            *puVar15 = local_2f8;
            puVar15[1] = uStack_2f4;
            puVar15[2] = uStack_2f0;
            puVar15[3] = uStack_2ec;
            puVar15[4] = local_2e8;
            puVar15[5] = uStack_2e4;
            puVar15[6] = uStack_2e0;
            puVar15[7] = uStack_2dc;
            puVar15[8] = uStack_2d8;
            FUN_0151eddc(&local_1c4,param_16);
            FUN_015438ac(param_10);
            *param_10 = local_1c4;
            param_10[1] = uStack_1c0;
            param_10[2] = uStack_1bc;
            param_10[3] = local_1b8;
            param_10[4] = uStack_1b4;
            param_10[5] = uStack_1b0;
            param_10[6] = uStack_1ac;
            FUN_016dd1aa(param_8,&local_1a8,0x20);
            if (param_12[3] != 0) {
              thunk_FUN_016d3fb4(param_12[4]);
            }
            uVar18 = 3;
            param_12[3] = (int)(undefined1 *)local_1d0;
            param_12[4] = local_1d0._4_4_;
            param_12[5] = local_1c8;
          }
          *(undefined1 *)(param_4 + 8) = uVar18;
          goto LAB_0154fd50;
        }
        puVar11 = (uint *)((uint)&local_2f8 | 4);
        *puVar11 = local_1c8;
        puVar11[1] = local_1c4;
        puVar11[2] = uStack_1c0;
        puVar11[3] = uStack_1bc;
        puVar11[4] = local_1b8;
        puVar11[5] = uStack_1b4;
        puVar11[6] = uStack_1b0;
        puVar11[7] = uStack_1ac;
        uVar17 = puVar11[1];
        uVar8 = puVar11[2];
        uVar21 = puVar11[3];
        *param_1 = *puVar11;
        param_1[1] = uVar17;
        param_1[2] = uVar8;
        param_1[3] = uVar21;
        uVar17 = puVar11[5];
        uVar8 = puVar11[6];
        uVar21 = puVar11[7];
        param_1[4] = puVar11[4];
        param_1[5] = uVar17;
        param_1[6] = uVar8;
        param_1[7] = uVar21;
      }
      pcVar9 = (code *)*puVar20;
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(local_3d8);
      }
      iVar14 = puVar20[1];
LAB_01550034:
      if (iVar14 != 0) {
        thunk_FUN_016d3fb4(local_3d8);
      }
      bVar5 = false;
      if ((!bVar24) || (bVar24 = false, *param_17 == -0x80000000)) goto LAB_0154f384;
      goto LAB_0154f348;
    }
    bVar1 = pbVar22[0x14];
    pbVar22 = pbVar22 + 0x14;
  } while( true );
LAB_0154f5b8:
  puVar15 = puVar15 + 2;
  if (puVar15 == puVar20) goto LAB_0154f758;
  goto LAB_0154f5c8;
LAB_0154f758:
  if ((code *)*param_14 != (code *)0x0) {
    (*(code *)*param_14)(param_13);
  }
  if (param_14[1] != 0) {
    thunk_FUN_016d3fb4(param_13);
  }
  local_1d0._4_4_ = 0xd0001;
  local_1d0._0_4_ = (undefined1 *)0x80000001;
  local_158 = 4;
  FUN_01525ed4(param_3,&local_1d0,*(char *)(param_3 + 0x31) == '\x02');
  *(undefined1 *)(param_3 + 0x255) = 1;
  bVar24 = false;
  *param_1 = (uint)&DAT_8000001c;
  param_1[1] = 0x49;
  goto LAB_0154f32c;
}

