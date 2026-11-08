// FUN_0192710c @ 0192710c size=5224 calls_out=37 calls_in=1
// strings: ech accept confirmation

void FUN_0192710c(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                 char *param_7,undefined4 param_8,int *param_9,int *param_10,int *param_11,
                 undefined4 *param_12,int param_13,int param_14,uint param_15,undefined4 param_16,
                 int *param_17)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  char cVar8;
  short sVar9;
  undefined2 uVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  int *piVar16;
  int iVar17;
  uint *puVar18;
  undefined4 uVar19;
  undefined1 *puVar20;
  int iVar21;
  byte bVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined4 uVar30;
  int iVar31;
  undefined4 uVar32;
  uint uVar33;
  undefined4 uVar34;
  uint uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  int local_438;
  undefined4 local_430;
  undefined4 local_42c;
  undefined1 auStack_408 [16];
  undefined4 local_3f8;
  undefined4 local_3f4;
  int local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  int local_3e0;
  undefined4 local_3dc;
  char local_3cc;
  int local_3c8;
  undefined4 local_3c4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  int local_3a8;
  undefined4 local_3a4;
  int local_39c [9];
  undefined1 auStack_378 [68];
  undefined1 auStack_334 [64];
  uint local_2f4;
  undefined8 local_2f0;
  int *local_2e8;
  undefined4 local_2e4;
  undefined2 local_2e0;
  undefined2 local_2de;
  int local_2dc;
  int local_2d8;
  int iStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined1 local_294;
  undefined1 local_293;
  undefined1 local_258 [4];
  undefined2 local_254;
  undefined2 uStack_252;
  int *local_250;
  int *local_24c;
  int local_248;
  int local_244;
  int local_240;
  int iStack_23c;
  int iStack_238;
  int local_234;
  undefined1 auStack_230 [20];
  int local_21c;
  uint local_218 [4];
  undefined1 auStack_208 [40];
  undefined2 local_1e0;
  undefined1 auStack_1d0 [148];
  int *local_13c;
  int *local_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int local_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  int *local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  undefined4 auStack_b8 [2];
  int iStack_b0;
  int local_ac;
  int local_a8;
  undefined8 local_a4;
  int local_70;
  undefined1 *puStack_6c;
  uint uStack_68;
  uint uStack_64;
  
  uVar35 = *(uint *)(param_5 + 8);
  if (uVar35 != 0) {
    pcVar23 = *(char **)(param_5 + 4);
    iVar11 = uVar35 * 0x14;
    pcVar24 = pcVar23;
    do {
      uVar36 = FUN_018eb4c8(pcVar24);
      iVar17 = 0;
      while ((uVar26 = (uint)uVar36 & 0xffff, *(ushort *)((int)&DAT_00523862 + iVar17) != uVar26 ||
             ((uVar26 == 0x2a &&
              ((uint)*(ushort *)((int)&DAT_00523864 + iVar17) !=
               ((uint)((ulonglong)uVar36 >> 0x20) & 0xffff)))))) {
        iVar17 = iVar17 + 4;
        if (iVar17 == 0xc) {
          local_1e0 = 4;
          local_254 = 1;
          uStack_252 = 0x1a;
          local_258[0] = 1;
          local_258[1] = 0;
          local_258[2] = 0;
          local_258[3] = 0x80;
          FUN_018f1fc4(param_3,local_258,*(char *)(param_3 + 0x31) == '\x02');
          bVar4 = true;
          *(undefined1 *)(param_3 + 0x255) = 1;
          *(undefined1 *)(param_1 + 1) = 0x44;
          *param_1 = (int)&DAT_8000001c;
          goto LAB_019273b0;
        }
      }
      pcVar24 = pcVar24 + 0x14;
    } while (pcVar24 != pcVar23 + uVar35 * 0x14);
    iVar17 = iVar11;
    pcVar24 = pcVar23;
    do {
      sVar9 = FUN_018eb4c8(pcVar24);
      if (sVar9 == 0x22) {
        if (*pcVar24 == '\x05') {
          uVar36 = (**(code **)(param_14 + 0x24))(param_13);
          uVar26 = (uint)*(ushort *)(pcVar24 + 0x10);
          if ((((uint)uVar36 & 0xffff) != uVar26) ||
             ((iVar17 = 0xc, ((uint)uVar36 & 0xffff) == 0xf &&
              (((uint)((ulonglong)uVar36 >> 0x20) & 0xffff) != (uint)*(ushort *)(pcVar24 + 0x12)))))
          {
            (**(code **)(param_14 + 0x14))(local_258,param_13);
            if ((CONCAT11(local_258[1],local_258[0]) != 0x10) &&
               ((CONCAT11(local_258[1],local_258[0]) == uVar26 &&
                ((uVar26 != 0xf ||
                 (CONCAT11(local_258[3],local_258[2]) == *(short *)(pcVar24 + 0x12))))))) {
              uVar36 = FUN_0190b154(*(undefined4 *)(param_2[0x27] + 0x18),
                                    *(undefined4 *)(param_2[0x27] + 0x1c),uVar26,
                                    CONCAT11(local_258[3],local_258[2]),5);
              if ((int)uVar36 != 0) {
                *(int *)(param_3 + 0x214) = (int)uVar36;
                *(undefined4 *)(param_3 + 0x210) = 1;
                iVar17 = 0x18;
                *(int *)(param_3 + 0x218) = (int)((ulonglong)uVar36 >> 0x20);
                goto LAB_01927320;
              }
            }
            FUN_01443048(param_13,param_14);
            local_1e0 = 4;
            local_254 = 1;
            uStack_252 = 0xd;
            local_258[0] = 1;
            local_258[1] = 0;
            local_258[2] = 0;
            local_258[3] = 0x80;
            FUN_018f1fc4(param_3,local_258,*(char *)(param_3 + 0x31) == '\x02');
            bVar4 = false;
            *(undefined1 *)(param_3 + 0x255) = 1;
            param_1[1] = 0x49;
            param_1[2] = param_13;
            *param_1 = (int)&DAT_8000001c;
            param_1[3] = param_14;
            goto LAB_019273b0;
          }
LAB_01927320:
          pcVar25 = pcVar23;
          iVar27 = iVar11;
          goto LAB_01927328;
        }
        break;
      }
      pcVar24 = pcVar24 + 0x14;
      iVar17 = iVar17 + -0x14;
    } while (iVar17 != 0);
  }
  local_1e0 = 4;
  local_254 = 1;
  uStack_252 = 0x19;
  local_258[0] = 1;
  local_258[1] = 0;
  local_258[2] = 0;
  local_258[3] = 0x80;
  FUN_018f1fc4(param_3,local_258,*(char *)(param_3 + 0x31) == '\x02');
  bVar4 = true;
  *(undefined1 *)(param_3 + 0x255) = 1;
  *param_1 = (int)&DAT_8000001c;
  param_1[1] = 0x1f;
LAB_019273b0:
  bVar22 = 1;
  if (*param_17 != -0x80000000) goto LAB_019273c4;
  goto LAB_019273c8;
  while( true ) {
    pcVar25 = pcVar25 + 0x14;
    iVar27 = iVar27 + -0x14;
    if (iVar27 == 0) break;
LAB_01927328:
    sVar9 = FUN_018eb4c8(pcVar25);
    if (sVar9 == 0x18) {
      if (*pcVar25 == '\x06') {
        iVar27 = *param_11;
        iVar29 = param_11[1];
        uVar36 = *(undefined8 *)param_11;
        if (iVar27 == 0) {
          bVar4 = false;
          local_438 = 0;
          goto LAB_01927630;
        }
        uVar7 = 0x37;
        if (*(int *)(param_6 + 0x3c) != -0x80000000) {
          iVar21 = *(int *)(param_6 + 0x38);
          sVar9 = *(short *)(pcVar25 + 2);
          iVar28 = param_9[6];
          iVar31 = param_9[7];
          uVar38 = (**(code **)(*(int *)(iVar21 + 0x1c) + 0x18))(*(undefined4 *)(iVar21 + 0x18));
          uVar37 = (**(code **)(iVar31 + 0x18))(iVar28);
          uVar26 = (uint)uVar38 & 0xff;
          if ((uVar26 == ((uint)uVar37 & 0xff)) &&
             ((uVar26 != 7 ||
              (((uint)((ulonglong)uVar38 >> 0x20) & 0xff) ==
               ((uint)((ulonglong)uVar37 >> 0x20) & 0xff))))) {
            if ((*(byte *)(param_4 + 4) - 1 < 2) &&
               ((*(short *)(iVar21 + 0x28) != (short)param_9[10] ||
                ((*(short *)(iVar21 + 0x28) == 0x178 &&
                 (*(short *)(iVar21 + 0x2a) != *(short *)((int)param_9 + 0x2a))))))) {
              local_1e0 = 4;
              local_254 = 1;
              uStack_252 = 0xd;
              local_258[0] = 1;
              local_258[1] = 0;
              local_258[2] = 0;
              local_258[3] = 0x80;
              FUN_018f1fc4(param_3,local_258,*(char *)(param_3 + 0x31) == '\x02');
              uVar7 = 0xb;
            }
            else {
              if (sVar9 == 0) {
                piVar16 = (int *)param_11[2];
                goto LAB_019277a0;
              }
              local_1e0 = 4;
              local_254 = 1;
              uStack_252 = 0xd;
              local_258[0] = 1;
              local_258[1] = 0;
              local_258[2] = 0;
              local_258[3] = 0x80;
              FUN_018f1fc4(param_3,local_258,*(char *)(param_3 + 0x31) == '\x02');
              uVar7 = 0x30;
            }
          }
          else {
            local_1e0 = 4;
            local_254 = 1;
            uStack_252 = 0xd;
            local_258[0] = 1;
            local_258[1] = 0;
            local_258[2] = 0;
            local_258[3] = 0x80;
            FUN_018f1fc4(param_3,local_258,*(char *)(param_3 + 0x31) == '\x02');
            uVar7 = 0x2e;
          }
          *(undefined1 *)(param_3 + 0x255) = 1;
        }
        *(undefined1 *)(param_1 + 1) = uVar7;
        *param_1 = (int)&DAT_8000001c;
        FUN_01139b38(iVar27,iVar29);
        bVar4 = true;
        FUN_01443048(param_13,param_14);
        goto LAB_0192847c;
      }
      break;
    }
  }
  local_438 = *param_11;
  iVar29 = param_11[1];
  bVar4 = false;
  if (local_438 != 0) {
    bVar4 = true;
  }
LAB_01927630:
  *(undefined1 *)(param_4 + 4) = 4;
  *(undefined1 *)(param_3 + 0x254) = 0;
  FUN_01bed4e2(local_258,param_6,0x48);
  *(undefined4 *)(param_6 + 0x3c) = 0x80000000;
  if (local_21c != -0x80000000) {
    FUN_0191fb20(local_258);
  }
  uVar36 = (**(code **)(param_9[3] + 0xc))(param_9[2],0);
  piVar16 = param_9;
  if (bVar4) {
    FUN_01139b38(local_438,iVar29);
  }
LAB_019277a0:
  local_430 = (undefined4)((ulonglong)uVar36 >> 0x20);
  local_42c = (undefined4)uVar36;
  if (*(int *)(param_3 + 0x210) == 1) {
    *(undefined4 *)(param_3 + 0x210) = 2;
  }
  (**(code **)(param_14 + iVar17))
            (local_258,param_13,*(undefined4 *)(pcVar24 + 8),*(undefined4 *)(pcVar24 + 0xc));
  if (CONCAT13(local_258[3],CONCAT12(local_258[2],CONCAT11(local_258[1],local_258[0]))) ==
      -0x7fffffd7) {
    puVar12 = (undefined4 *)((uint)local_258 | 4);
    puVar15 = (undefined4 *)((uint)&local_2f0 | 4);
    uVar19 = puVar12[1];
    uVar30 = puVar12[2];
    uVar32 = puVar12[3];
    *puVar15 = *puVar12;
    puVar15[1] = uVar19;
    puVar15[2] = uVar30;
    puVar15[3] = uVar32;
LAB_01927818:
    piVar13 = (int *)((uint)&local_2f0 | 4);
    iVar17 = *piVar13;
    puVar20 = (undefined1 *)piVar13[1];
    uVar26 = piVar13[2];
    uVar33 = piVar13[3];
    local_2e8 = piVar16;
    local_70 = iVar17;
    puStack_6c = puVar20;
    uStack_68 = uVar26;
    uStack_64 = uVar33;
    local_2f0 = uVar36;
    if (uVar26 < uVar33) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar33,uVar26,uVar26,&DAT_01d250a8);
    }
    FUN_018fe910(local_258,&local_2f0,8);
    if (0x40 < local_218[0]) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_218[0],0x40,&DAT_01d24fd8);
    }
    uVar36 = (**(code **)(piVar16[3] + 0x10))
                       (piVar16[2],local_258,local_218[0],puVar20 + uVar33,uVar26 - uVar33);
    uVar30 = (undefined4)((ulonglong)uVar36 >> 0x20);
    uVar19 = (undefined4)uVar36;
    FUN_01443048(local_42c,local_430);
    iVar27 = 0;
    do {
      local_258[iVar27] = 0;
      iVar27 = iVar27 + 1;
      puVar6 = puVar20;
    } while (iVar27 != 0x40);
    while( true ) {
      iVar27 = iVar17;
      puVar5 = puVar20;
      if (uVar26 == 0) break;
      *puVar6 = 0;
      uVar26 = uVar26 - 1;
      puVar6 = puVar6 + 1;
    }
    for (; iVar27 != 0; iVar27 = iVar27 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_2f0 = uVar36;
    FUN_0134bd64(iVar17,puVar20);
    bVar4 = *param_17 == -0x80000000;
    if (*param_17 == -0x80000000) {
LAB_01927958:
      iVar11 = param_2[0x1f];
      iVar27 = param_2[0x1e];
      iVar17 = *(int *)(iVar11 + 8);
      if (*param_7 == '\x01') {
        FUN_01bed4e2((uint)local_258 | 1,param_7 + 1,0x11);
        local_258[0] = 1;
        uVar38 = local_2f0;
      }
      else {
        if (*(int *)(param_7 + 4) == -0x80000000) {
          local_2e8 = *(int **)(param_7 + 0xc);
          uVar38 = *(undefined8 *)(param_7 + 4);
        }
        else {
          FUN_006666fc(&local_2f0,*(undefined4 *)(param_7 + 8),*(undefined4 *)(param_7 + 0xc));
          uVar38 = local_2f0;
        }
        local_2f0._4_4_ = (int)((ulonglong)uVar38 >> 0x20);
        local_254 = (undefined2)uVar38;
        uStack_252 = (undefined2)((ulonglong)uVar38 >> 0x10);
        local_250 = (int *)local_2f0._4_4_;
        local_24c = local_2e8;
        local_258[0] = 0;
      }
      local_2f0 = uVar38;
      (**(code **)(iVar11 + 0x10))
                (iVar27 + (iVar17 - 1U & 0xfffffff8) + 8,local_258,*(undefined2 *)(pcVar24 + 0x10),
                 *(undefined2 *)(pcVar24 + 0x12));
      FUN_018f3128(local_258,param_3);
      iVar11 = CONCAT13(local_258[3],CONCAT12(local_258[2],CONCAT11(local_258[1],local_258[0])));
      if (iVar11 == -0x7fffffd7) {
        (**(code **)(param_10[6] + 0xc))(auStack_334,param_10[5]);
        if (0x40 < local_2f4) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,local_2f4,0x40,&DAT_01d258e8);
        }
        iVar11 = param_2[0x24];
        uVar34 = *(undefined4 *)(iVar11 + 0x10);
        uVar32 = *(undefined4 *)(iVar11 + 0x14);
        iVar11 = param_2[0x23] + (*(int *)(iVar11 + 8) - 1U & 0xfffffff8) + 8;
        bVar22 = *(byte *)(param_4 + 4);
        FUN_018fe280(auStack_b8,uVar19,uVar30,2,auStack_334,local_2f4,iVar11,uVar34,uVar32,param_8);
        if (0x40 < local_2f4) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,local_2f4,0x40,&DAT_01d258e8);
        }
        FUN_018fe280(&local_70,uVar19,uVar30,3,auStack_334,local_2f4,iVar11,uVar34,uVar32,param_8);
        if (*(char *)(param_3 + 0x259) != '\0') {
          FUN_01bed4e2(&local_2f0,auStack_b8,0x44);
          FUN_01bed4e2(local_258,&local_70,0x44);
          iVar11 = *param_9;
          if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d24bb8);
          }
          uVar7 = *(undefined1 *)(param_3 + 0x1cf);
          uVar1 = *(undefined1 *)(param_3 + 0x250);
          iVar17 = param_9[1];
          FUN_01824bec(param_3 + 0x9c);
          *(int *)(param_3 + 0x9c) = iVar11;
          *(int *)(param_3 + 0xa0) = iVar17;
          FUN_01bed4e2(param_3 + 0xa4,auStack_b8,0x44);
          FUN_01bed4e2(param_3 + 0xe8,&local_70,0x44);
          *(undefined1 *)(param_3 + 0x131) = uVar1;
          *(undefined1 *)(param_3 + 0x130) = uVar7;
          *(int **)(param_3 + 300) = param_9;
        }
        FUN_01bed4e2(&local_24c,auStack_b8,0x44);
        FUN_01bed4e2(auStack_208,&local_70,0x44);
        local_254 = (undefined2)((ulonglong)uVar36 >> 0x20);
        uStack_252 = (undefined2)((ulonglong)uVar36 >> 0x30);
        local_250 = param_9;
        local_258[0] = (undefined1)uVar36;
        local_258[1] = (undefined1)((ulonglong)uVar36 >> 8);
        local_258[2] = (undefined1)((ulonglong)uVar36 >> 0x10);
        local_258[3] = (undefined1)((ulonglong)uVar36 >> 0x18);
        uVar36 = FUN_018fe374(param_9,auStack_208);
        FUN_0190afe8(param_3,(int)uVar36,(int)((ulonglong)uVar36 >> 0x20));
        if (1 < bVar22 - 1) {
          FUN_018fe45c(local_250,&local_24c,param_3);
        }
        FUN_01bed4e2(&local_2f0,local_258,0x94);
        uVar26 = (uint)*(byte *)(param_3 + 0x259);
        uVar35 = uVar26;
        if (uVar26 == 0) {
          uVar35 = param_15;
        }
        if (uVar26 == 0 && uVar35 == 0) {
          local_258[0] = 4;
          local_258[1] = 0;
          local_258[2] = 0;
          local_258[3] = 0x80;
          local_1e0 = 4;
          FUN_018f1fc4(param_3,local_258,0);
        }
        FUN_01bed4e2(local_218,param_6,0x48);
        local_134 = *(undefined4 *)param_7;
        uStack_130 = *(undefined4 *)(param_7 + 4);
        uStack_12c = *(undefined4 *)(param_7 + 8);
        uStack_128 = *(undefined4 *)(param_7 + 0xc);
        uStack_124 = *(undefined4 *)(param_7 + 0x10);
        FUN_01bed4e2(local_258,param_8,0x40);
        local_120 = *param_10;
        iStack_11c = param_10[1];
        iStack_118 = param_10[2];
        local_114 = param_10[3];
        iStack_110 = param_10[4];
        iStack_10c = param_10[5];
        iStack_108 = param_10[6];
        FUN_01bed4e2(auStack_1d0,&local_2f0,0x94);
        local_104 = *param_12;
        uStack_100 = param_12[1];
        uStack_fc = param_12[2];
        local_f8 = param_12[3];
        uStack_f4 = param_12[4];
        uStack_f0 = param_12[5];
        uStack_ec = param_12[6];
        local_138 = param_9;
        local_13c = param_2;
        iVar11 = thunk_FUN_01be5118(0x170);
        if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x170);
        }
        FUN_01bed4e2(iVar11,local_258,0x170);
        *param_1 = -0x7fffffd7;
        param_1[1] = iVar11;
        param_1[2] = (int)&DAT_01d25488;
        return;
      }
      piVar16 = (int *)((uint)local_258 | 4);
      iVar17 = piVar16[1];
      iVar27 = piVar16[2];
      param_1[1] = *piVar16;
      param_1[2] = iVar17;
      param_1[3] = iVar27;
      iVar17 = piVar16[4];
      iVar27 = piVar16[5];
      iVar29 = piVar16[6];
      param_1[4] = piVar16[3];
      param_1[5] = iVar17;
      param_1[6] = iVar27;
      param_1[7] = iVar29;
      *param_1 = iVar11;
    }
    else {
      FUN_01bed4e2(auStack_408,param_17,0x90);
      FUN_0191e300(&local_e8,param_17,param_9[6],param_9[7]);
      iVar27 = local_d8;
      iVar17 = local_dc;
      local_a4 = (**(code **)(local_d0 + 0x10))(local_d4);
      if (local_e8 == -0x80000000) {
        local_258[0] = 0;
        local_258[1] = 0;
        local_258[2] = 0;
        local_258[3] = 0x80;
        uVar38 = local_2f0;
      }
      else {
        FUN_015e8ad4(local_258,local_e4,local_e0);
        uVar38 = local_2f0;
      }
      local_2f0._4_4_ = (int)((ulonglong)uVar38 >> 0x20);
      local_a8 = iVar27;
      uVar32 = 0;
      local_ac = iVar17;
      auStack_b8[0] =
           CONCAT13(local_258[3],CONCAT12(local_258[2],CONCAT11(local_258[1],local_258[0])));
      iStack_b0 = (int)local_250;
      if (0x6666666 < uVar35) {
LAB_01927abc:
        local_2f0 = uVar38;
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar32,iVar11);
      }
      uVar7 = *(undefined1 *)(param_5 + 0x59);
      iVar17 = *(int *)(param_5 + 0x10);
      uVar2 = *(undefined2 *)(param_5 + 0xe);
      uVar1 = *(undefined1 *)(param_5 + 0x58);
      uVar3 = *(undefined2 *)(param_5 + 0xc);
      if (iVar11 == 0) {
        local_c4 = 4;
        local_c8 = 0;
      }
      else {
        uVar32 = 4;
        local_2f0 = uVar38;
        uVar26 = FUN_01298504(iVar11,4);
        uVar38 = local_2f0;
        if (uVar26 == 0) goto LAB_01927abc;
        local_c8 = uVar35;
        local_c4 = uVar26;
        if (uVar35 != 0) {
          iVar27 = 0;
          uVar33 = 0;
          puVar14 = (undefined8 *)((uint)local_258 | 4);
          do {
            local_2f0._4_4_ = (int)((ulonglong)uVar38 >> 0x20);
            if (iVar11 == iVar27) break;
            uVar33 = uVar33 + 1;
            pcVar25 = pcVar23 + iVar27;
            local_2f0 = uVar38;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch(*pcVar25) {
            case '\0':
              FUN_016e3984(puVar14,*(undefined4 *)(pcVar25 + 8),*(undefined4 *)(pcVar25 + 0xc));
              local_258[0] = 0;
              uVar38 = local_2f0;
              break;
            case '\x01':
              local_258[0] = 1;
              break;
            case '\x02':
              local_258[0] = 2;
              break;
            case '\x03':
              FUN_015e8ad4(puVar14,*(undefined4 *)(pcVar25 + 8),*(undefined4 *)(pcVar25 + 0xc));
              local_258[0] = 3;
              uVar38 = local_2f0;
              break;
            case '\x04':
              FUN_015e8ad4(puVar14,*(undefined4 *)(pcVar25 + 8),*(undefined4 *)(pcVar25 + 0xc));
              local_258[0] = 4;
              uVar38 = local_2f0;
              break;
            case '\x05':
              uVar32 = *(undefined4 *)(pcVar25 + 0x10);
              FUN_015e8ad4(&local_2f0,*(undefined4 *)(pcVar25 + 8),*(undefined4 *)(pcVar25 + 0xc));
              *puVar14 = local_2f0;
              *(int **)(puVar14 + 1) = local_2e8;
              *(undefined4 *)((int)puVar14 + 0xc) = uVar32;
              local_258[0] = 5;
              local_2e4 = uVar32;
              goto LAB_01927e00;
            case '\x06':
              uVar32 = *(undefined4 *)pcVar25;
              local_250 = *(int **)(pcVar25 + 8);
              local_24c = *(int **)(pcVar25 + 0xc);
              local_248 = *(int *)(pcVar25 + 0x10);
              local_258[0] = (undefined1)uVar32;
              local_258[1] = (undefined1)((uint)uVar32 >> 8);
              local_258[2] = (undefined1)((uint)uVar32 >> 0x10);
              local_258[3] = (undefined1)((uint)uVar32 >> 0x18);
              local_254 = (undefined2)*(undefined4 *)(pcVar25 + 4);
              uStack_252 = (undefined2)((uint)*(undefined4 *)(pcVar25 + 4) >> 0x10);
              break;
            case '\a':
              local_258[0] = 7;
              break;
            case '\b':
              local_258[0] = 8;
              break;
            case '\t':
              uVar10 = *(undefined2 *)(pcVar25 + 1);
              local_258[0] = 9;
              goto LAB_01927da8;
            case '\n':
              uVar10 = *(undefined2 *)(pcVar25 + 1);
              local_258[0] = 10;
LAB_01927da8:
              local_258[1] = (undefined1)uVar10;
              local_258[2] = (undefined1)((ushort)uVar10 >> 8);
              break;
            case '\v':
              uVar32 = *(undefined4 *)(pcVar25 + 2);
              local_258[0] = 0xb;
              local_258[2] = (undefined1)uVar32;
              local_258[3] = (undefined1)((uint)uVar32 >> 8);
              local_254 = (undefined2)((uint)uVar32 >> 0x10);
              break;
            case '\f':
              FUN_015e8ad4(puVar14,*(undefined4 *)(pcVar25 + 8),*(undefined4 *)(pcVar25 + 0xc));
              local_258[0] = 0xc;
              uVar38 = local_2f0;
              break;
            case '\r':
              FUN_015e8ad4(puVar14,*(undefined4 *)(pcVar25 + 8),*(undefined4 *)(pcVar25 + 0xc));
              local_258[0] = 0xd;
              uVar38 = local_2f0;
              break;
            case '\x0e':
              local_258[0] = 0xe;
              break;
            case '\x0f':
              FUN_018e3654(puVar14,*(undefined4 *)(pcVar25 + 8),*(undefined4 *)(pcVar25 + 0xc));
              local_258[0] = 0xf;
              uVar38 = local_2f0;
              break;
            case '\x10':
              iVar29 = *(int *)(pcVar25 + 0x10);
              if (*(int *)(pcVar25 + 4) == -0x80000000) {
                local_2f0 = *(undefined8 *)(pcVar25 + 4);
                local_2e8 = *(int **)(pcVar25 + 0xc);
              }
              else {
                FUN_015e8ad4(&local_2f0,*(undefined4 *)(pcVar25 + 8),*(undefined4 *)(pcVar25 + 0xc))
                ;
              }
              *puVar14 = local_2f0;
              *(int **)(puVar14 + 1) = local_2e8;
              local_258[0] = 0x10;
              local_248 = iVar29;
LAB_01927e00:
              uVar38 = local_2f0;
            }
            local_2f0._4_4_ = (int)((ulonglong)uVar38 >> 0x20);
            puVar12 = (undefined4 *)(uVar26 + iVar27);
            iVar27 = iVar27 + 0x14;
            *puVar12 = CONCAT13(local_258[3],
                                CONCAT12(local_258[2],CONCAT11(local_258[1],local_258[0])));
            puVar12[1] = CONCAT22(uStack_252,local_254);
            puVar12[2] = local_250;
            puVar12[3] = local_24c;
            puVar12[4] = local_248;
          } while (uVar35 != uVar33);
        }
      }
      puVar18 = (uint *)((uint)&local_2f0 | 4);
      *puVar18 = local_c8;
      puVar18[1] = local_c4;
      puVar18[2] = uVar35;
      local_2d8 = *(int *)(param_5 + 0x14);
      iStack_2d4 = *(int *)(param_5 + 0x18);
      uStack_2d0 = *(undefined4 *)(param_5 + 0x1c);
      uStack_2cc = *(undefined4 *)(param_5 + 0x20);
      local_2c8 = *(undefined4 *)(param_5 + 0x24);
      uStack_2c4 = *(undefined4 *)(param_5 + 0x28);
      uStack_2c0 = *(undefined4 *)(param_5 + 0x2c);
      uStack_2bc = *(undefined4 *)(param_5 + 0x30);
      local_2b8 = *(undefined4 *)(param_5 + 0x34);
      uStack_2b4 = *(undefined4 *)(param_5 + 0x38);
      uStack_2b0 = *(undefined4 *)(param_5 + 0x3c);
      uStack_2ac = *(undefined4 *)(param_5 + 0x40);
      local_2a8 = *(undefined4 *)(param_5 + 0x44);
      uStack_2a4 = *(undefined4 *)(param_5 + 0x48);
      uStack_2a0 = *(undefined4 *)(param_5 + 0x4c);
      uStack_29c = *(undefined4 *)(param_5 + 0x50);
      uStack_298 = *(undefined4 *)(param_5 + 0x54);
      local_2f0._0_4_ = 0x80000002;
      local_2e0 = uVar3;
      local_2de = uVar2;
      local_2dc = iVar17;
      local_294 = uVar1;
      local_293 = uVar7;
      local_c0 = uVar35;
      FUN_019021e0(local_258);
      FUN_0191e124(auStack_b8,local_258);
      FUN_01901c2c(local_258);
      (**(code **)(local_a4._4_4_ + 0xc))(local_258,(undefined4)local_a4);
      uVar38 = (**(code **)(piVar16[3] + 0x10))
                         (piVar16[2],0,*(code **)(piVar16[3] + 0x10),local_39c,0x20);
      iVar11 = (int)((ulonglong)uVar38 >> 0x20);
      if (0x40 < local_218[0]) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,local_218[0],0x40,&DAT_01d258e8);
      }
      FUN_019022f4(&local_2f0,(int)uVar38,*(undefined4 *)(iVar11 + 0xc),"ech accept confirmation",
                   0x17,local_258,local_218[0]);
      FUN_01443048((int)uVar38,iVar11);
      iVar11 = 0;
      uVar35 = 1;
      do {
        uVar26 = (uint)(*(byte *)(param_5 + 0x2c + iVar11) ^ *(byte *)((int)&local_2f0 + iVar11));
        uVar26 = FUN_019216e4((uVar26 | -uVar26 & 0xff) >> 7 ^ 1);
        iVar11 = iVar11 + 1;
        uVar35 = uVar26 & uVar35;
      } while (iVar11 != 8);
      cVar8 = FUN_019216e4(uVar35);
      iVar11 = local_3ec;
      if (cVar8 == '\0') {
        FUN_01902274(auStack_b8);
        iVar11 = -0x80000000;
        FUN_01902274(&local_e8);
      }
      else {
        local_250 = (int *)local_e8;
        local_24c = local_e4;
        local_248 = local_e0;
        local_244 = local_dc;
        local_240 = local_d8;
        iStack_23c = local_d4;
        iStack_238 = local_d0;
        local_234 = local_39c[0];
        local_258[0] = (undefined1)local_3e8;
        local_258[1] = (undefined1)((uint)local_3e8 >> 8);
        local_258[2] = (undefined1)((uint)local_3e8 >> 0x10);
        local_258[3] = (undefined1)((uint)local_3e8 >> 0x18);
        local_254 = (undefined2)local_3e4;
        uStack_252 = (undefined2)((uint)local_3e4 >> 0x10);
        FUN_01bed4e2(&local_70,local_258,0x44);
        FUN_01902274(auStack_b8);
      }
      if (local_3e0 != -0x80000000) {
        FUN_0134bd64(local_3e0,local_3dc);
      }
      if (local_3a8 != 0) {
        FUN_01443048(local_3a8,local_3a4);
      }
      FUN_01443048(local_3b0,local_3ac);
      if ((local_3cc == '\0') && (local_3c8 != -0x80000000)) {
        FUN_0134bd64(local_3c8,local_3c4);
      }
      FUN_0134bd64(local_3f8,local_3f4);
      if (cVar8 == '\0') {
        FUN_0134aee0(local_3ec,local_3e8,2,4);
      }
      if (iVar11 != -0x7fffffff) {
        FUN_01bed4e2(auStack_378,&local_70,0x44);
        uVar7 = 4;
        if (iVar11 != -0x80000000) {
          local_258[0] = (undefined1)iVar11;
          local_258[1] = (undefined1)((uint)iVar11 >> 8);
          local_258[2] = (undefined1)((uint)iVar11 >> 0x10);
          local_258[3] = (undefined1)((uint)iVar11 >> 0x18);
          FUN_01bed4e2((uint)local_258 | 4,auStack_378,0x44);
          FUN_0191e124(&local_24c,param_16);
          FUN_01902274(param_10);
          *param_10 = (int)local_24c;
          param_10[1] = local_248;
          param_10[2] = local_244;
          param_10[3] = local_240;
          param_10[4] = iStack_23c;
          param_10[5] = iStack_238;
          param_10[6] = local_234;
          FUN_01bed4e2(param_8,auStack_230,0x20);
          FUN_0134aee0(param_12[3],param_12[4],2,4);
          param_12[3] = CONCAT13(local_258[3],
                                 CONCAT12(local_258[2],CONCAT11(local_258[1],local_258[0])));
          param_12[4] = CONCAT22(uStack_252,local_254);
          param_12[5] = local_250;
          uVar7 = 3;
        }
        *(undefined1 *)(param_4 + 8) = uVar7;
        goto LAB_01927958;
      }
      piVar13 = (int *)((uint)&local_70 | 4);
      piVar16 = (int *)((uint)auStack_378 | 4);
      iVar11 = piVar13[1];
      iVar17 = piVar13[2];
      iVar27 = piVar13[3];
      *piVar16 = *piVar13;
      piVar16[1] = iVar11;
      piVar16[2] = iVar17;
      piVar16[3] = iVar27;
      iVar11 = piVar13[5];
      iVar17 = piVar13[6];
      iVar27 = piVar13[7];
      piVar16[4] = piVar13[4];
      piVar16[5] = iVar11;
      piVar16[6] = iVar17;
      piVar16[7] = iVar27;
      iVar11 = piVar16[1];
      iVar17 = piVar16[2];
      iVar27 = piVar16[3];
      *param_1 = *piVar16;
      param_1[1] = iVar11;
      param_1[2] = iVar17;
      param_1[3] = iVar27;
      iVar11 = piVar16[5];
      iVar17 = piVar16[6];
      iVar27 = piVar16[7];
      param_1[4] = piVar16[4];
      param_1[5] = iVar11;
      param_1[6] = iVar17;
      param_1[7] = iVar27;
    }
    FUN_01139b38(uVar19,uVar30);
  }
  else {
    FUN_018f1f40(&local_2f0,param_3,0xd,local_258);
    if ((int)local_2f0 == -0x7fffffd7) goto LAB_01927818;
    piVar16 = (int *)((uint)&local_2f0 | 4);
    local_70 = *piVar16;
    puStack_6c = (undefined1 *)piVar16[1];
    uStack_68 = piVar16[2];
    uStack_64 = piVar16[3];
    param_1[5] = local_2dc;
    param_1[6] = local_2d8;
    param_1[7] = iStack_2d4;
    param_1[1] = local_70;
    param_1[2] = (int)puStack_6c;
    param_1[3] = uStack_68;
    param_1[4] = uStack_64;
    bVar4 = true;
    *param_1 = (int)local_2f0;
    FUN_01139b38(local_42c,local_430);
  }
LAB_0192847c:
  bVar22 = 0;
  if ((!bVar4) || (bVar4 = false, *param_17 == -0x80000000)) goto LAB_019273dc;
LAB_019273c4:
  FUN_01928ae0();
LAB_019273c8:
  if (bVar4) {
    FUN_01443048(param_13,param_14);
  }
LAB_019273dc:
  FUN_01925dc4(param_12);
  if ((bool)(bVar22 & *param_11 != 0)) {
    FUN_01139b38(*param_11,param_11[1]);
  }
  FUN_01902274(param_10);
  if ((*param_7 == '\0') && (*(int *)(param_7 + 4) != -0x80000000)) {
    FUN_0134bd64(*(int *)(param_7 + 4),*(undefined4 *)(param_7 + 8));
  }
  if (*(int *)(param_6 + 0x3c) != -0x80000000) {
    FUN_0191fb20(param_6);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar11 = *param_2;
    bVar4 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar4);
  *param_2 = iVar11 + -1;
  if (iVar11 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa168(param_2);
  }
  return;
}

