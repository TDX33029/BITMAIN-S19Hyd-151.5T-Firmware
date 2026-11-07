// FUN_006d7b98 @ 006d7b98 size=9952 calls_out=46 calls_in=1
// strings: no entry found for key

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006d7b98(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  uint *****pppppuVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  int iVar21;
  uint ****ppppuVar22;
  uint ******ppppppuVar23;
  uint uVar24;
  undefined4 *puVar25;
  uint uVar26;
  uint *******pppppppuVar27;
  uint *puVar28;
  uint *puVar29;
  undefined4 uVar30;
  uint *puVar31;
  uint uVar32;
  undefined1 *puVar33;
  undefined4 uVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  uint *******pppppppuVar40;
  uint *puVar41;
  uint *puVar42;
  uint ******ppppppuVar43;
  uint uVar44;
  uint *puVar45;
  byte bVar46;
  int iVar47;
  undefined8 uVar48;
  uint local_170;
  uint local_160;
  uint local_150;
  uint local_120;
  uint local_e8;
  int local_e4;
  int local_dc;
  uint *******local_d0;
  uint *local_cc;
  uint *******local_c8;
  undefined4 uStack_c4;
  uint local_c0;
  uint uStack_bc;
  uint local_b8;
  uint local_b4;
  uint *******local_b0;
  code *local_ac;
  uint *******local_a8;
  undefined4 uStack_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint *******local_90;
  uint *local_8c;
  uint *******local_88;
  undefined2 *local_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint *****local_6c;
  uint *******local_68;
  uint *local_64;
  uint *******local_60;
  uint *******local_58;
  uint *local_54;
  uint *******local_50;
  uint *******local_48;
  uint *local_44;
  uint *******local_40;
  undefined2 *local_3c;
  uint local_38;
  uint *******local_34;
  uint local_30;
  uint local_2c;
  uint *****local_28;
  
  puVar28 = *(uint **)(param_3 + 0x38);
  local_e4 = *(int *)(param_3 + 0x44);
  puVar29 = puVar28 + 1;
  uVar44 = ~*puVar28 & 0x80808080;
  puVar42 = puVar28;
  puVar41 = puVar29;
  local_dc = local_e4;
LAB_006d7c0c:
  if (local_dc != 0) {
    puVar45 = puVar41;
    if (uVar44 == 0) {
      do {
        puVar41 = puVar45 + 1;
        uVar44 = *puVar45;
        puVar42 = puVar42 + -0x48;
        puVar45 = puVar41;
      } while ((uVar44 & 0x80808080) == 0x80808080);
      uVar44 = uVar44 & 0x80808080 ^ 0x80808080;
    }
    uVar36 = LZCOUNT(uVar44 << 0x18 | (uVar44 >> 8 & 0xff) << 0x10 | (uVar44 >> 0x10 & 0xff) << 8 |
                     uVar44 >> 0x18);
    iVar37 = (uVar36 >> 3) * -8 - (uVar36 >> 3);
    uVar26 = puVar42[iVar37 * 2 + -0x11];
    uVar24 = puVar42[iVar37 * 2 + -2];
    uVar38 = puVar42[iVar37 * 2 + -1];
    uVar39 = puVar42[iVar37 * 2 + -0x12] + 8;
    uVar36 = FUN_006c561c(param_1[4],param_1[5],param_1[6],param_1[7],uVar39,uVar26);
    if (param_1[2] == 0) {
      FUN_006b6f38(param_1,param_1 + 4);
    }
    uVar44 = uVar44 - 1 & uVar44;
    uVar17 = param_1[1];
    puVar45 = (uint *)*param_1;
    iVar37 = 0;
    local_dc = local_dc + -1;
    bVar2 = false;
    uVar32 = uVar36;
    do {
      uVar32 = uVar17 & uVar32;
      uVar4 = *(uint *)((int)puVar45 + uVar32);
      uVar5 = uVar4 ^ (uVar36 >> 0x19) * 0x1010101;
      for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5)
      {
        uVar6 = uVar32 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                        (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar17;
        if ((uVar26 == puVar45[uVar6 * -4 + -3]) &&
           (iVar7 = thunk_FUN_01bed842(uVar39,puVar45[uVar6 * -4 + -4]), iVar7 == 0)) {
          puVar45[uVar6 * -4 + -2] = uVar24 + 8;
          puVar45[uVar6 * -4 + -1] = uVar38;
          goto LAB_006d7c0c;
        }
      }
      uVar6 = uVar4 & 0x80808080;
      uVar5 = local_120;
      if (bVar2) {
LAB_006d7dec:
        if ((uVar6 & uVar4 << 1) != 0) goto LAB_006d7e44;
        bVar2 = true;
        local_120 = uVar5;
      }
      else {
        if (uVar6 != 0) {
          uVar5 = uVar32 + ((uint)LZCOUNT((uVar4 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                          (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                  uVar17;
          goto LAB_006d7dec;
        }
        bVar2 = false;
      }
      iVar37 = iVar37 + 4;
      uVar32 = iVar37 + uVar32;
    } while( true );
  }
  uVar44 = ~*puVar28 & 0x80808080;
  while (local_e4 != 0) {
    puVar42 = puVar29;
    if (uVar44 == 0) {
      do {
        puVar29 = puVar42 + 1;
        uVar44 = *puVar42;
        puVar28 = puVar28 + -0x48;
        puVar42 = puVar29;
      } while ((uVar44 & 0x80808080) == 0x80808080);
      uVar44 = uVar44 & 0x80808080 ^ 0x80808080;
    }
    uVar36 = (uint)LZCOUNT(uVar44 << 0x18 | (uVar44 >> 8 & 0xff) << 0x10 |
                           (uVar44 >> 0x10 & 0xff) << 8 | uVar44 >> 0x18) >> 3;
    uVar8 = FUN_006c176c(*(undefined4 *)(*(int *)(param_2 + 0x24) + 0x40),
                         *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x44),
                         puVar28[uVar36 * -0x12 + -2] + 8,puVar28[uVar36 * -0x12 + -1]);
    iVar37 = *(int *)(param_2 + 0x14);
    if (iVar37 == *(int *)(param_2 + 0xc)) {
      FUN_007b4428(param_2 + 0xc);
    }
    *(undefined4 *)(*(int *)(param_2 + 0x10) + iVar37 * 4) = uVar8;
    *(int *)(param_2 + 0x14) = iVar37 + 1;
    FUN_006d13fc(param_2,puVar28[uVar36 * -0x12 + -0xd],puVar28[uVar36 * -0x12 + -0xc]);
    iVar37 = param_1[0x96];
    if (iVar37 == param_1[0x94]) {
      FUN_00a20d54(param_1 + 0x94);
    }
    uVar24 = puVar28[uVar36 * -0x12 + -0x12];
    pppppppuVar27 = (uint *******)puVar28[uVar36 * -0x12 + -0x10];
    puVar42 = (uint *)puVar28[uVar36 * -0x12 + -0x11];
    puVar33 = (undefined1 *)puVar28[uVar36 * -0x12 + -0xf];
    *(undefined1 *)(param_1[0x95] + iVar37) = 4;
    pppppppuVar40 = (uint *******)(uVar24 + 8);
    param_1[0x96] = iVar37 + 1;
    param_1[0x4c] = 1;
    param_1[0x4d] = pppppppuVar40;
    param_1[0x4e] = puVar42;
    param_1[0x20] = 1;
    param_1[0x21] = pppppppuVar40;
    param_1[0x22] = puVar42;
    param_1[0x60] = 1;
    param_1[0x61] = pppppppuVar40;
    param_1[0x62] = puVar42;
    local_48 = pppppppuVar40;
    local_44 = puVar42;
    local_40 = pppppppuVar27;
    local_3c = (undefined2 *)puVar33;
    FUN_006e67e4(param_1 + 0x58,&local_48);
    uVar26 = puVar28[uVar36 * -0x12 + -1];
    uVar24 = puVar28[uVar36 * -0x12 + -2];
    param_1[0x90] = 1;
    param_1[0x91] = pppppppuVar40;
    param_1[0x92] = puVar42;
    FUN_006bc87c(param_2,uVar24 + 8,uVar26,pppppppuVar27,puVar33);
    iVar37 = param_1[0x76];
    param_1[0x72] = pppppppuVar40;
    param_1[0x73] = puVar42;
    if (iVar37 == param_1[0x74]) {
      FUN_01aa1bc0(param_1 + 0x74);
    }
    local_d0 = (uint *******)(puVar28 + uVar36 * -0x12 + -0x12);
    param_1[0x76] = iVar37 + 1;
    puVar9 = (undefined4 *)(param_1[0x75] + iVar37 * 8);
    *puVar9 = pppppppuVar40;
    puVar9[1] = puVar42;
    if (*(int *)(param_2 + 0x14) != 0) {
      piVar10 = (int *)(*(int *)(param_2 + 0x10) + *(int *)(param_2 + 0x14) * 4 + -4);
      iVar37 = 0;
      if (piVar10 != (int *)0x0) {
        iVar37 = *piVar10;
      }
      if (((piVar10 != (int *)0x0 && iVar37 != 0) && (0x7fffffff < *(uint *)(iVar37 + 0x10))) &&
         (2 < *(uint *)(iVar37 + 0x10) + 0x7fffffff)) {
        puVar42 = (uint *)thunk_FUN_01be5118(8);
        if (puVar42 == (uint *)0x0) goto LAB_006da21c;
        puVar42[1] = (uint)puVar33;
        *puVar42 = puVar28[uVar36 * -0x12 + -0x10];
        local_a8 = (uint *******)&DAT_00000001;
        local_b0 = (uint *******)&DAT_00000001;
        local_3c = (undefined2 *)&LAB_00701524;
        local_44 = (uint *)&LAB_00700f68;
        local_48 = (uint *******)&local_d0;
        local_ac = (code *)puVar42;
        local_40 = (uint *******)(puVar28 + uVar36 * -0x12 + -2);
        FUN_00664898(&local_90,&DAT_005a272c,&local_48);
        local_48 = local_90;
        local_44 = local_8c;
        local_40 = local_88;
        FUN_006d6c3c(param_2,&local_b0,&local_48);
      }
    }
    FUN_006da578(param_1,param_2,puVar28[uVar36 * -0x12 + -0xd],puVar28[uVar36 * -0x12 + -0xc]);
    FUN_006dab48(param_1,param_2,puVar28 + uVar36 * -0x12 + -0xb);
    param_1[0x72] = 0;
    if (param_1[0x96] != 0) {
      param_1[0x96] = param_1[0x96] + -1;
    }
    uVar44 = uVar44 - 1 & uVar44;
    local_e4 = local_e4 + -1;
    if (*(int *)(param_2 + 0x14) != 0) {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
    }
  }
  uVar8 = FUN_006fc1b0(&local_48,param_3);
  uVar48 = thunk_FUN_01bee35a(uVar8,0x2c0);
  puVar42 = (uint *)((int)uVar48 + (int)((ulonglong)uVar48 >> 0x20));
  puVar9 = param_1 + 0x7c;
  puVar18 = param_1 + 0x38;
  puVar41 = puVar42 + 2;
LAB_006d828c:
  uVar48 = FUN_006fc150(&local_48);
  puVar28 = (uint *)((ulonglong)uVar48 >> 0x20);
  piVar10 = (int *)uVar48;
  if (puVar28 != (uint *)0x0) {
    FUN_006d12f4(param_2);
    FUN_006d13fc(param_2,puVar28[6],puVar28[7]);
    ppppppuVar23 = (uint ******)(puVar28 + 0xd);
    cVar1 = *(char *)ppppppuVar23;
    iVar37 = param_1[0x96];
    if (iVar37 == param_1[0x94]) {
      FUN_00a20d54(param_1 + 0x94);
    }
    *(char *)(param_1[0x95] + iVar37) = cVar1;
    param_1[0x96] = iVar37 + 1;
    uVar36 = *puVar28;
    uVar44 = puVar28[1];
    if (piVar10 == (int *)0x0) {
      iVar37 = 0;
      uVar24 = uVar36;
    }
    else {
      iVar37 = *piVar10 + 8;
      uVar24 = piVar10[1];
    }
    param_1[0x20] = 0;
    param_1[0x21] = iVar37;
    param_1[0x22] = uVar24;
    if (param_1[0x27] != 0) {
      uVar24 = param_1[0x25];
      if (uVar24 == 0) {
        uVar24 = 0;
      }
      else {
        FUN_01bed93e(param_1[0x24],0xff,uVar24 + 5);
        if (7 < uVar24) {
          uVar24 = (uVar24 + 1 & 0xfffffff8) - (uVar24 + 1 >> 3);
        }
      }
      param_1[0x26] = uVar24;
      param_1[0x27] = 0;
    }
    if (piVar10 == (int *)0x0) {
      uVar24 = 0;
      ppppppuVar43 = ppppppuVar23;
    }
    else {
      uVar24 = *piVar10 + 8;
      ppppppuVar43 = (uint ******)piVar10[1];
    }
    uVar26 = puVar42[4];
    param_1[0x4c] = 0;
    param_1[0x4d] = uVar24;
    param_1[0x4e] = ppppppuVar43;
    if ((char)uVar26 == '\0') {
      FUN_019ae6ac(&local_90);
      *puVar41 = (uint)local_88;
      puVar42[3] = (uint)local_84;
      *puVar42 = (uint)local_90;
      puVar42[1] = (uint)local_8c;
      *(undefined1 *)(puVar42 + 4) = 1;
    }
    uVar32 = *puVar42;
    uVar17 = puVar42[1];
    uVar39 = *puVar41;
    uVar26 = puVar42[3];
    uVar30 = param_1[0x3b];
    uVar34 = param_1[0x3a];
    uVar8 = *puVar18;
    uVar19 = param_1[0x39];
    *puVar42 = uVar32 + 1;
    puVar42[1] = uVar17 + (0xfffffffe < uVar32);
    uVar38 = FUN_006c4fac(uVar8,uVar19,uVar34,uVar30,uVar24,ppppppuVar43);
    if (param_1[0x36] == 0) {
      FUN_006bae78(param_1 + 0x34,puVar18);
    }
    uVar6 = param_1[0x35];
    puVar29 = (uint *)param_1[0x34];
    uVar4 = 0;
    iVar37 = 0;
    uVar5 = uVar38;
    do {
      uVar5 = uVar6 & uVar5;
      uVar35 = *(uint *)((int)puVar29 + uVar5);
      uVar11 = uVar35 ^ (uVar38 >> 0x19) * 0x1010101;
      for (uVar11 = ~uVar11 & 0x80808080 & uVar11 + 0xfefefeff; uVar11 != 0;
          uVar11 = uVar11 - 1 & uVar11) {
        uVar12 = uVar5 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                        (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) & uVar6
        ;
        if (uVar24 == 0 || puVar29[uVar12 * -10 + -10] == 0) {
          if (uVar24 == 0 && puVar29[uVar12 * -10 + -10] == 0) {
LAB_006d8568:
            uVar24 = puVar29[uVar12 * -10 + -8];
            uVar38 = puVar29[uVar12 * -10 + -7];
            puVar29[uVar12 * -10 + -8] = (uint)&DAT_0056d238;
            puVar29[uVar12 * -10 + -7] = 0;
            puVar29[uVar12 * -10 + -6] = 0;
            puVar29[uVar12 * -10 + -5] = 0;
            puVar29[uVar12 * -10 + -4] = uVar32;
            puVar29[uVar12 * -10 + -3] = uVar17;
            puVar29[uVar12 * -10 + -2] = uVar39;
            puVar29[uVar12 * -10 + -1] = uVar26;
            if ((uVar24 != 0 && uVar38 != 0) &&
               (iVar37 = uVar38 * 0x10 + 0x10, uVar38 + iVar37 != -5)) {
              thunk_FUN_01be4678(uVar24 - iVar37);
            }
            goto LAB_006d85b4;
          }
        }
        else if (ppppppuVar43 == (uint ******)puVar29[uVar12 * -10 + -9]) {
          iVar7 = thunk_FUN_01bed842(uVar24);
          local_160 = uVar4;
          if (iVar7 == 0) goto LAB_006d8568;
        }
      }
      uVar12 = uVar35 & 0x80808080;
      uVar11 = local_170;
      if (uVar4 == 1) {
LAB_006d8540:
        if ((uVar12 & uVar35 << 1) != 0) goto LAB_006d9428;
        uVar4 = 1;
        local_170 = uVar11;
      }
      else {
        if (uVar12 != 0) {
          uVar11 = uVar5 + ((uint)LZCOUNT((uVar35 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                          (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                   uVar6;
          goto LAB_006d8540;
        }
        uVar4 = 0;
      }
      iVar37 = iVar37 + 4;
      uVar5 = iVar37 + uVar5;
    } while( true );
  }
  puVar28 = (uint *)param_1[0x18];
  puVar29 = puVar28 + 1;
  uVar44 = ~*puVar28 & 0x80808080;
  for (iVar37 = param_1[0x1b]; iVar37 != 0; iVar37 = iVar37 + -1) {
    puVar45 = puVar29;
    if (uVar44 == 0) {
      do {
        puVar29 = puVar45 + 1;
        uVar44 = *puVar45;
        puVar28 = puVar28 + -0x18;
        puVar45 = puVar29;
      } while ((uVar44 & 0x80808080) == 0x80808080);
      uVar44 = uVar44 & 0x80808080 ^ 0x80808080;
    }
    uVar36 = LZCOUNT(uVar44 << 0x18 | (uVar44 >> 8 & 0xff) << 0x10 | (uVar44 >> 0x10 & 0xff) << 8 |
                     uVar44 >> 0x18);
    iVar7 = (uVar36 >> 3) * -2 - (uVar36 >> 3);
    uVar24 = puVar28[iVar7 * 2 + -2];
    uVar36 = puVar28[iVar7 * 2 + -1];
    if ((char)puVar42[4] == '\0') {
      FUN_019ae6ac(&local_90);
      *puVar41 = (uint)local_88;
      puVar42[3] = (uint)local_84;
      *puVar42 = (uint)local_90;
      puVar42[1] = (uint)local_8c;
      *(undefined1 *)(puVar42 + 4) = 1;
    }
    local_38 = *puVar42;
    local_34 = (uint *******)puVar42[1];
    *puVar42 = local_38 + 1;
    puVar42[1] = (int)local_34 + (uint)(0xfffffffe < local_38);
    local_48 = (uint *******)&DAT_0056d238;
    local_44 = (uint *)0x0;
    local_40 = (uint *******)0x0;
    local_3c = (undefined2 *)0x0;
    FUN_006be464(param_1 + 8,puVar28 + iVar7 * 2 + -6,uVar24,uVar36,param_2,&local_48);
    if ((local_44 != (uint *)0x0) && (local_44 + (int)local_44 * 3 + 3 != (uint *)0xfffffffb)) {
      thunk_FUN_01be4678((int)local_48 - ((int)local_44 * 0xc + 0xc));
    }
    uVar44 = uVar44 - 1 & uVar44;
  }
  puVar28 = (uint *)param_1[0x34];
  local_e4 = param_1[0x37];
  puVar29 = puVar28 + 1;
  uVar44 = ~*puVar28 & 0x80808080;
LAB_006d97c8:
  if (local_e4 == 0) {
    if ((char)puVar42[4] == '\0') {
      FUN_019ae6ac(&local_90);
      *puVar42 = (uint)local_90;
      puVar42[1] = (uint)local_8c;
      *puVar41 = (uint)local_88;
      puVar42[3] = (uint)local_84;
      *(undefined1 *)(puVar42 + 4) = 1;
    }
    local_38 = *puVar42;
    local_34 = (uint *******)puVar42[1];
    *puVar42 = local_38 + 1;
    puVar42[1] = (int)local_34 + (uint)(0xfffffffe < local_38);
    local_48 = (uint *******)&DAT_0056d238;
    local_44 = (uint *)0x0;
    local_40 = (uint *******)0x0;
    local_3c = (undefined2 *)0x0;
    FUN_006fc1b0(&local_90,param_3);
    while( true ) {
      uVar48 = FUN_006fc150(&local_90);
      pppppppuVar27 = (uint *******)((ulonglong)uVar48 >> 0x20);
      piVar10 = (int *)uVar48;
      if (pppppppuVar27 == (uint *******)0x0) break;
      if (piVar10 == (int *)0x0) {
        local_ac = (code *)0x0;
      }
      else {
        pppppppuVar27 = (uint *******)piVar10[1];
        local_ac = (code *)(*piVar10 + 8);
      }
      local_b0 = (uint *******)0x0;
      local_a8 = pppppppuVar27;
      FUN_006bc95c(param_1 + 0x50,&local_b0,&local_48);
    }
    local_90 = (uint *******)param_1[0x58];
    local_80 = param_1[0x5b];
    local_84 = (undefined2 *)((int)local_90 + param_1[0x59] + 1);
    local_88 = local_90 + 1;
    local_8c = (uint *)(~(uint)*local_90 & 0x80808080);
    while (pppppppuVar27 = (uint *******)FUN_006e5564(&local_90), pppppppuVar27 != (uint *******)0x0
          ) {
      local_68 = pppppppuVar27;
      iVar37 = FUN_006e58b4(&local_48,*pppppppuVar27,pppppppuVar27[1]);
      if (iVar37 == 0) {
        puVar28 = (uint *)thunk_FUN_01be5118(8);
        if (puVar28 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,8);
        }
        ppppppuVar23 = pppppppuVar27[3];
        *puVar28 = (uint)pppppppuVar27[2];
        puVar28[1] = (uint)ppppppuVar23;
        local_50 = (uint *******)&DAT_00000001;
        local_58 = (uint *******)&DAT_00000001;
        local_cc = (uint *)&LAB_01963050;
        local_d0 = (uint *******)&local_68;
        local_54 = puVar28;
        FUN_00664898(&local_b0,&DAT_005b4d60,&local_d0);
        local_d0 = local_b0;
        local_cc = (uint *)local_ac;
        local_c8 = local_a8;
        FUN_006d6c3c(param_2,&local_58,&local_d0);
      }
    }
    if ((local_44 != (uint *)0x0) && (iVar37 = (int)local_44 * 8 + 8, (int)local_44 + iVar37 != -5))
    {
      thunk_FUN_01be4678((int)local_48 - iVar37);
    }
    puVar29 = (uint *)param_1[0x78];
    iVar37 = param_1[0x7b];
    puVar28 = puVar29 + 1;
    local_e8 = ~*puVar29 & 0x80808080;
    do {
      if (iVar37 == 0) {
        FUN_006c9df0(param_1 + 0x6a,param_2);
        return;
      }
      puVar45 = puVar28;
      if (local_e8 == 0) {
        do {
          puVar28 = puVar45 + 1;
          uVar44 = *puVar45;
          puVar29 = puVar29 + -0x30;
          puVar45 = puVar28;
        } while ((uVar44 & 0x80808080) == 0x80808080);
        local_e8 = uVar44 & 0x80808080 ^ 0x80808080;
      }
      local_50 = (uint *******)0x0;
      local_58 = (uint *******)0x0;
      local_54 = (uint *)&SUB_00000004;
      if ((char)puVar42[4] == '\0') {
        FUN_019ae6ac(&local_90);
        *puVar41 = (uint)local_88;
        puVar42[3] = (uint)local_84;
        *puVar42 = (uint)local_90;
        puVar42[1] = (uint)local_8c;
        *(undefined1 *)(puVar42 + 4) = 1;
      }
      local_38 = *puVar42;
      local_34 = (uint *******)puVar42[1];
      uVar44 = LZCOUNT(local_e8 << 0x18 | (local_e8 >> 8 & 0xff) << 0x10 |
                       (local_e8 >> 0x10 & 0xff) << 8 | local_e8 >> 0x18);
      iVar7 = (uVar44 >> 3) * -2 - (uVar44 >> 3);
      *puVar42 = local_38 + 1;
      puVar42[1] = (int)local_34 + (uint)(0xfffffffe < local_38);
      local_48 = (uint *******)&DAT_0056d238;
      local_44 = (uint *)0x0;
      local_40 = (uint *******)0x0;
      local_3c = (undefined2 *)0x0;
      local_8c = (uint *)puVar29[iVar7 * 4 + -0xc];
      local_88 = (uint *******)puVar29[iVar7 * 4 + -0xb];
      local_90 = (uint *******)0x0;
      FUN_006d2104(param_1 + 0x78,&local_90,puVar29 + iVar7 * 4 + -8,&local_58,&local_48);
      puVar45 = local_54;
      pppppppuVar27 = local_58;
      if (local_50 != (uint *******)0x0) {
        puVar31 = local_54 + (int)local_50 * 4;
        puVar15 = local_54;
        do {
          pppppppuVar40 = (uint *******)*puVar15;
          if (pppppppuVar40 == (uint *******)0x0) break;
          local_64 = (uint *)puVar15[1];
          uVar36 = puVar15[2];
          uVar44 = puVar15[3];
          local_68 = pppppppuVar40;
          if ((uint ****)puVar29[iVar7 * 4 + -0xc] == (uint ****)0x0) {
            uVar8 = 8;
            puVar13 = (uint *)thunk_FUN_01be5118(8);
            if (puVar13 == (uint *)0x0) goto LAB_006da228;
            *puVar13 = uVar36;
            puVar13[1] = uVar44;
            local_c8 = (uint *******)&DAT_00000001;
            local_d0 = (uint *******)&DAT_00000001;
            local_ac = (code *)&DAT_0132b6a0;
            local_b0 = (uint *******)&local_68;
            local_cc = puVar13;
            FUN_00664898(&local_90,&DAT_0058afc0,&local_b0);
            local_b0 = local_90;
            local_ac = (code *)local_8c;
            local_a8 = local_88;
            FUN_006d6c3c(param_2,&local_d0,&local_b0);
          }
          else {
            uVar8 = 0x10;
            local_28 = (uint *****)(puVar29 + iVar7 * 4 + -0xc);
            puVar13 = (uint *)thunk_FUN_01be5118(0x10);
            if (puVar13 == (uint *)0x0) {
LAB_006da228:
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,uVar8);
            }
            uVar24 = puVar29[iVar7 * 4 + -10];
            uVar26 = puVar29[iVar7 * 4 + -9];
            puVar13[3] = uVar44;
            *puVar13 = uVar24;
            puVar13[1] = uVar26;
            puVar13[2] = uVar36;
            local_c8 = (uint *******)0x2;
            local_d0 = (uint *******)0x2;
            local_84 = (undefined2 *)&LAB_01963050;
            local_88 = (uint *******)&local_28;
            local_8c = (uint *)&DAT_0132b6a0;
            local_90 = (uint *******)&local_68;
            local_cc = puVar13;
            FUN_00664898(&local_b0,&DAT_005aa0e2,&local_90);
            local_90 = local_b0;
            local_8c = (uint *)local_ac;
            local_88 = local_a8;
            FUN_006d6c3c(param_2,&local_d0,&local_90);
          }
          puVar15 = puVar15 + 4;
        } while (puVar15 != puVar31);
      }
      FUN_0132b958(pppppppuVar27,puVar45,4,0x10);
      if ((local_44 != (uint *)0x0) &&
         (iVar7 = (int)local_44 * 0xc + 0xc, (int)local_44 + iVar7 != -5)) {
        thunk_FUN_01be4678((int)local_48 - iVar7);
      }
      local_e8 = local_e8 - 1 & local_e8;
      iVar37 = iVar37 + -1;
    } while( true );
  }
  puVar45 = puVar29;
  if (uVar44 == 0) {
    do {
      puVar29 = puVar45 + 1;
      uVar44 = *puVar45;
      puVar28 = puVar28 + -0x28;
      puVar45 = puVar29;
    } while ((uVar44 & 0x80808080) == 0x80808080);
    uVar44 = uVar44 & 0x80808080 ^ 0x80808080;
  }
  uVar36 = LZCOUNT(uVar44 << 0x18 | (uVar44 >> 8 & 0xff) << 0x10 | (uVar44 >> 0x10 & 0xff) << 8 |
                   uVar44 >> 0x18);
  iVar37 = (uVar36 >> 3) * -4 - (uVar36 >> 3);
  if ((char)puVar42[4] == '\0') {
    FUN_019ae6ac(&local_48);
    *puVar41 = (uint)local_40;
    puVar42[3] = (uint)local_3c;
    *puVar42 = (uint)local_48;
    puVar42[1] = (uint)local_44;
    *(undefined1 *)(puVar42 + 4) = 1;
  }
  local_c0 = *puVar42;
  uStack_bc = puVar42[1];
  local_a0 = local_c0 + 1;
  local_30 = *puVar41;
  local_2c = puVar42[3];
  local_9c = uStack_bc + (0xfffffffe < local_c0);
  *puVar42 = local_a0;
  puVar42[1] = local_9c;
  local_d0 = (uint *******)&DAT_0056d238;
  local_cc = (uint *)0x0;
  local_c8 = (uint *******)0x0;
  uStack_c4 = 0;
  local_38 = local_c0 + 2;
  local_34 = (uint *******)(uStack_bc + (0xfffffffd < local_c0));
  *puVar42 = local_38;
  puVar42[1] = (uint)local_34;
  local_b0 = (uint *******)&DAT_0056d238;
  local_ac = (code *)0x0;
  local_a8 = (uint *******)0x0;
  uStack_a4 = 0;
  local_54 = (uint *)puVar28[iVar37 * 2 + -10];
  local_50 = (uint *******)puVar28[iVar37 * 2 + -9];
  local_58 = (uint *******)0x0;
  puVar45 = (uint *)puVar28[iVar37 * 2 + -8];
  uVar24 = puVar28[iVar37 * 2 + -5];
  puVar15 = puVar45 + 1;
  uVar36 = *puVar45;
  *puVar42 = local_c0 + 3;
  puVar42[1] = uStack_bc + (0xfffffffc < local_c0);
  local_48 = (uint *******)&DAT_0056d238;
  local_44 = (uint *)0x0;
  local_40 = (uint *******)0x0;
  local_3c = (undefined2 *)0x0;
  local_b8 = local_30;
  local_b4 = local_2c;
  local_98 = local_30;
  local_94 = local_2c;
  if (uVar24 != 0) {
    FUN_006b4ddc(&local_48,uVar24,&local_38);
  }
  uVar44 = uVar44 - 1 & uVar44;
  local_e4 = local_e4 + -1;
  uVar36 = ~uVar36 & 0x80808080;
  do {
    if (uVar36 == 0) {
      puVar31 = puVar15;
      if (uVar24 == 0) goto LAB_006d99d0;
      do {
        puVar15 = puVar31 + 1;
        uVar36 = *puVar31;
        puVar45 = puVar45 + -0x10;
        puVar31 = puVar15;
      } while ((uVar36 & 0x80808080) == 0x80808080);
      uVar36 = uVar36 & 0x80808080 ^ 0x80808080;
    }
    uVar26 = LZCOUNT(uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
                     uVar36 >> 0x18) & 0x38;
    FUN_006e6200(&local_48,*(undefined4 *)((int)puVar45 + uVar26 * -2 + -0x10),
                 *(undefined4 *)((int)puVar45 + uVar26 * -2 + -0xc));
    uVar24 = uVar24 - 1;
    uVar36 = uVar36 - 1 & uVar36;
  } while( true );
LAB_006d7e44:
  uVar32 = (uint)*(char *)((int)puVar45 + uVar5);
  if (-1 < (int)uVar32) {
    uVar32 = *puVar45 & 0x80808080;
    uVar5 = LZCOUNT((*puVar45 & 0x80) << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 |
                    (uVar32 >> 0x10 & 0xff) << 8 | uVar32 >> 0x18);
    uVar32 = (uint)*(byte *)((int)puVar45 + (uVar5 >> 3));
    uVar5 = uVar5 >> 3;
  }
  iVar37 = param_1[2];
  iVar7 = param_1[3];
  bVar46 = (byte)(uVar36 >> 0x19);
  *(byte *)((int)puVar45 + uVar5) = bVar46;
  param_1[2] = iVar37 - (uVar32 & 1);
  param_1[3] = iVar7 + 1;
  *(byte *)((int)puVar45 + (uVar5 - 4 & uVar17) + 4) = bVar46;
  puVar45[uVar5 * -4 + -4] = uVar39;
  puVar45[uVar5 * -4 + -2] = uVar24 + 8;
  puVar45[uVar5 * -4 + -3] = uVar26;
  puVar45[uVar5 * -4 + -1] = uVar38;
  goto LAB_006d7c0c;
LAB_006d9428:
  uVar5 = (uint)*(char *)((int)puVar29 + uVar11);
  if (-1 < (int)uVar5) {
    uVar5 = *puVar29 & 0x80808080;
    uVar11 = LZCOUNT((*puVar29 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                     (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
    uVar5 = (uint)*(byte *)((int)puVar29 + (uVar11 >> 3));
    uVar11 = uVar11 >> 3;
  }
  iVar37 = param_1[0x37];
  iVar7 = param_1[0x36];
  bVar46 = (byte)(uVar38 >> 0x19);
  *(byte *)((int)puVar29 + uVar11) = bVar46;
  param_1[0x36] = iVar7 - (uVar5 & 1);
  param_1[0x37] = iVar37 + 1;
  *(byte *)((int)puVar29 + (uVar6 & uVar11 - 4) + 4) = bVar46;
  puVar29[uVar11 * -10 + -2] = uVar39;
  puVar29[uVar11 * -10 + -1] = uVar26;
  puVar29[uVar11 * -10 + -10] = uVar24;
  puVar29[uVar11 * -10 + -9] = (uint)ppppppuVar43;
  puVar29[uVar11 * -10 + -8] = (uint)&DAT_0056d238;
  puVar29[uVar11 * -10 + -7] = 0;
  puVar29[uVar11 * -10 + -6] = 0;
  puVar29[uVar11 * -10 + -5] = 0;
  puVar29[uVar11 * -10 + -4] = uVar32;
  puVar29[uVar11 * -10 + -3] = uVar17;
LAB_006d85b4:
  if (piVar10 == (int *)0x0) {
    uVar24 = 0;
  }
  else {
    uVar6 = piVar10[1];
    uVar24 = *piVar10 + 8;
  }
  uVar26 = puVar42[4];
  param_1[0x90] = 0;
  param_1[0x91] = uVar24;
  param_1[0x92] = uVar6;
  param_1[0x60] = 0;
  param_1[0x61] = uVar24;
  param_1[0x62] = uVar6;
  if ((char)uVar26 == '\0') {
    FUN_019ae6ac(&local_90);
    *puVar41 = (uint)local_88;
    puVar42[3] = (uint)local_84;
    *puVar42 = (uint)local_90;
    puVar42[1] = (uint)local_8c;
    *(undefined1 *)(puVar42 + 4) = 1;
  }
  uVar32 = *puVar42;
  uVar17 = puVar42[1];
  uVar39 = *puVar41;
  uVar26 = puVar42[3];
  uVar30 = param_1[0x7f];
  uVar34 = param_1[0x7e];
  uVar8 = *puVar9;
  uVar19 = param_1[0x7d];
  *puVar42 = uVar32 + 1;
  puVar42[1] = uVar17 + (0xfffffffe < uVar32);
  uVar38 = FUN_006c4fac(uVar8,uVar19,uVar34,uVar30,uVar24,uVar6);
  if (param_1[0x7a] == 0) {
    FUN_006b4550(param_1 + 0x78,puVar9);
  }
  uVar4 = param_1[0x79];
  puVar29 = (uint *)param_1[0x78];
  bVar2 = false;
  iVar37 = 0;
  uVar5 = uVar38;
  do {
    uVar5 = uVar4 & uVar5;
    uVar35 = *(uint *)((int)puVar29 + uVar5);
    uVar11 = uVar35 ^ (uVar38 >> 0x19) * 0x1010101;
    for (uVar11 = ~uVar11 & 0x80808080 & uVar11 + 0xfefefeff; uVar11 != 0;
        uVar11 = uVar11 - 1 & uVar11) {
      puVar45 = puVar29 + (uVar5 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                                  (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >>
                                   3) & uVar4) * -0xc;
      if (uVar24 == 0 || puVar45[-0xc] == 0) {
        if (uVar24 == 0 && puVar45[-0xc] == 0) goto LAB_006d8798;
      }
      else if ((uVar6 == puVar45[-0xb]) && (iVar7 = thunk_FUN_01bed842(uVar24), iVar7 == 0)) {
LAB_006d8798:
        puVar45[-10] = uVar36;
        puVar45[-9] = uVar44;
        uVar38 = puVar45[-8];
        local_150 = puVar45[-7];
        puVar45[-8] = (uint)&DAT_0056d238;
        puVar45[-7] = 0;
        puVar45[-6] = 0;
        puVar45[-5] = 0;
        goto LAB_006d87d0;
      }
    }
    uVar12 = uVar35 & 0x80808080;
    uVar11 = local_160;
    if (bVar2) {
LAB_006d8770:
      if ((uVar12 & uVar35 << 1) != 0) break;
      bVar2 = true;
      local_160 = uVar11;
    }
    else {
      if (uVar12 != 0) {
        uVar11 = uVar5 + ((uint)LZCOUNT((uVar35 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                        (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) & uVar4
        ;
        goto LAB_006d8770;
      }
      bVar2 = false;
    }
    iVar37 = iVar37 + 4;
    uVar5 = iVar37 + uVar5;
  } while( true );
  uVar5 = (uint)*(char *)((int)puVar29 + uVar11);
  if (-1 < (int)uVar5) {
    uVar5 = *puVar29 & 0x80808080;
    uVar11 = LZCOUNT((*puVar29 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                     (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
    uVar5 = (uint)*(byte *)((int)puVar29 + (uVar11 >> 3));
    uVar11 = uVar11 >> 3;
  }
  iVar7 = param_1[0x7a];
  iVar37 = param_1[0x7b];
  bVar46 = (byte)(uVar38 >> 0x19);
  *(byte *)((int)puVar29 + uVar11) = bVar46;
  param_1[0x7a] = iVar7 - (uVar5 & 1);
  param_1[0x7b] = iVar37 + 1;
  *(byte *)((int)puVar29 + (uVar4 & uVar11 - 4) + 4) = bVar46;
  puVar45 = puVar29 + uVar11 * -0xc;
  uVar38 = 0;
  puVar45[-10] = uVar36;
  puVar45[-0xc] = uVar24;
  puVar45[-0xb] = uVar6;
  puVar45[-9] = uVar44;
  puVar45[-8] = (uint)&DAT_0056d238;
  puVar45[-7] = 0;
  puVar45[-6] = 0;
  puVar45[-5] = 0;
LAB_006d87d0:
  puVar45[-4] = uVar32;
  puVar45[-3] = uVar17;
  puVar45[-2] = uVar39;
  puVar45[-1] = uVar26;
  if ((uVar38 != 0 && local_150 != 0) && (iVar37 = local_150 * 8 + 8, local_150 + iVar37 != -5)) {
    thunk_FUN_01be4678(uVar38 - iVar37);
  }
  iVar37 = *(int *)(param_2 + 0x24);
  if (*(char *)ppppppuVar23 == '\0') {
    puVar20 = (undefined4 *)(iVar37 + 0x78);
    puVar25 = (undefined4 *)(iVar37 + 0x74);
  }
  else if (*(char *)ppppppuVar23 == '\x01') {
    if (*(int *)(iVar37 + 0x58) == -0x80000000) goto LAB_006d8874;
    puVar20 = (undefined4 *)(iVar37 + 0x60);
    puVar25 = (undefined4 *)(iVar37 + 0x5c);
  }
  else {
    if (*(int *)(iVar37 + 100) == -0x80000000) {
LAB_006d8874:
      puVar29 = (uint *)thunk_FUN_01be5118(8);
      if (puVar29 == (uint *)0x0) {
LAB_006da21c:
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      uVar44 = puVar28[1];
      *puVar29 = *puVar28;
      puVar29[1] = uVar44;
      local_c8 = (uint *******)&DAT_00000001;
      local_d0 = (uint *******)&DAT_00000001;
      local_ac = FUN_006fc490;
      local_cc = puVar29;
      local_b0 = (uint *******)ppppppuVar23;
      FUN_00664898(&local_90,&DAT_00597f2e,&local_b0);
      local_b0 = local_90;
      local_ac = (code *)local_8c;
      local_a8 = local_88;
      FUN_006d6c3c(param_2,&local_d0,&local_b0);
      goto LAB_006d9410;
    }
    puVar20 = (undefined4 *)(iVar37 + 0x6c);
    puVar25 = (undefined4 *)(iVar37 + 0x68);
  }
  iVar37 = FUN_006c176c(*(undefined4 *)(iVar37 + 0x40),*(undefined4 *)(iVar37 + 0x44),*puVar25,
                        *puVar20);
  if (iVar37 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("no entry found for key",0x16,&DAT_01c05fc4);
  }
  iVar7 = *(int *)(param_2 + 0x14);
  if (iVar7 == *(int *)(param_2 + 0xc)) {
    FUN_007b4428(param_2 + 0xc);
  }
  puVar29 = (uint *)puVar28[3];
  uVar44 = puVar28[4];
  *(int *)(*(int *)(param_2 + 0x10) + iVar7 * 4) = iVar37;
  *(int *)(param_2 + 0x14) = iVar7 + 1;
  if (uVar44 != 0) {
    puVar45 = puVar29;
LAB_006d8988:
    FUN_006d13fc(param_2,puVar45[0x1a],puVar45[0x1b]);
    if (param_1[0x20] != 2) {
      local_90 = (uint *******)param_1[0x20];
      local_8c = (uint *)param_1[0x21];
      local_88 = (uint *******)param_1[0x22];
      puVar13 = (uint *)FUN_006c4c10(param_1[0x1c],param_1[0x1d],param_1[0x1e],param_1[0x1f],
                                     &local_90);
      pppppppuVar40 = local_88;
      puVar15 = local_8c;
      pppppppuVar27 = local_90;
      uVar36 = param_1[0x19];
      iVar37 = param_1[0x18];
      iVar7 = 0;
      puVar31 = puVar13;
      do {
        uVar26 = uVar36 & (uint)puVar31;
        bVar46 = (byte)((uint)puVar13 >> 0x19);
        uVar38 = *(uint *)(iVar37 + uVar26);
        uVar24 = uVar38 ^ ((uint)puVar13 >> 0x19) * 0x1010101;
        for (uVar24 = ~uVar24 & 0x80808080 & uVar24 + 0xfefefeff; uVar24 != 0;
            uVar24 = uVar24 - 1 & uVar24) {
          puVar31 = (uint *)(iVar37 + (uVar26 + ((uint)LZCOUNT(uVar24 << 0x18 |
                                                               (uVar24 >> 8 & 0xff) << 0x10 |
                                                               (uVar24 >> 0x10 & 0xff) << 8 |
                                                               uVar24 >> 0x18) >> 3) & uVar36) *
                                      -0x18);
          if ((uint *******)puVar31[-6] == pppppppuVar27) {
            if (((uint)pppppppuVar27 & 1) == 0) {
              uVar39 = puVar31[-5];
              if (puVar15 == (uint *)0x0 || uVar39 == 0) {
                if (puVar15 == (uint *)0x0 && uVar39 == 0) goto LAB_006d8c00;
              }
              else if ((uint *******)puVar31[-4] == pppppppuVar40) goto LAB_006d8ab4;
            }
            else if ((uint *******)puVar31[-4] == pppppppuVar40) {
              uVar39 = puVar31[-5];
LAB_006d8ab4:
              iVar14 = thunk_FUN_01bed842(uVar39,puVar15);
              if (iVar14 == 0) goto LAB_006d8c00;
            }
          }
        }
        if ((uVar38 & 0x80808080 & uVar38 << 1) != 0) goto LAB_006d8b34;
        iVar7 = iVar7 + 4;
        puVar31 = (uint *)(uVar26 + iVar7);
      } while( true );
    }
    goto LAB_006d8c24;
  }
LAB_006d93dc:
  FUN_006da578(param_1,param_2,puVar28[6],puVar28[7]);
  FUN_006dab48(param_1,param_2,puVar28 + 8);
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
  }
LAB_006d9410:
  if (param_1[0x96] != 0) {
    param_1[0x96] = param_1[0x96] + -1;
  }
  goto LAB_006d828c;
LAB_006d8b34:
  if (param_1[0x1a] == 0) {
    FUN_006b58e4(param_1 + 0x18,param_1 + 0x1c);
  }
  puVar31 = puVar13;
  if (pppppppuVar27 != (uint *******)0x2) {
    puVar31 = (uint *)param_1[0x18];
    uVar24 = param_1[0x19];
    uVar38 = uVar24 & (uint)puVar13;
    uVar36 = *(uint *)((uint)&local_90 | 4);
    uVar39 = ((uint *)((uint)&local_90 | 4))[1];
    uVar26 = *(uint *)((int)puVar31 + uVar38) & 0x80808080;
    if (uVar26 == 0) {
      iVar37 = 4;
      do {
        uVar38 = uVar38 + iVar37;
        iVar37 = iVar37 + 4;
        uVar38 = uVar38 & uVar24;
        uVar26 = *(uint *)((int)puVar31 + uVar38) & 0x80808080;
      } while (uVar26 == 0);
    }
    uVar26 = uVar38 + ((uint)LZCOUNT(uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 |
                                     (uVar26 >> 0x10 & 0xff) << 8 | uVar26 >> 0x18) >> 3) & uVar24;
    uVar38 = (uint)*(char *)((int)puVar31 + uVar26);
    if (-1 < (int)uVar38) {
      uVar26 = *puVar31 & 0x80808080;
      uVar26 = LZCOUNT((*puVar31 & 0x80) << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 |
                       (uVar26 >> 0x10 & 0xff) << 8 | uVar26 >> 0x18);
      uVar38 = (uint)*(byte *)((int)puVar31 + (uVar26 >> 3));
      uVar26 = uVar26 >> 3;
    }
    iVar7 = param_1[0x1a];
    iVar37 = param_1[0x1b];
    *(byte *)((int)puVar31 + uVar26) = bVar46;
    param_1[0x1a] = iVar7 - (uVar38 & 1);
    param_1[0x1b] = iVar37 + 1;
    *(byte *)((int)puVar31 + (uVar26 - 4 & uVar24) + 4) = bVar46;
    puVar31 = puVar31 + uVar26 * -6;
    puVar31[-5] = uVar36;
    puVar31[-4] = uVar39;
    puVar31[-6] = (uint)pppppppuVar27;
    puVar31[-3] = 0;
    puVar31[-2] = 4;
    puVar31[-1] = 0;
  }
LAB_006d8c00:
  uVar36 = puVar31[-1];
  if (uVar36 == puVar31[-3]) {
    FUN_007b4428();
  }
  *(uint **)(puVar31[-2] + uVar36 * 4) = puVar45;
  puVar31[-1] = uVar36 + 1;
LAB_006d8c24:
  pppppuVar16 = (uint *****)(puVar45 + 0x16);
  iVar37 = FUN_006b1588(*(undefined4 *)(*(int *)(param_2 + 0x24) + 0x40),
                        *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x44),pppppuVar16);
  if (iVar37 != 0) {
    uVar36 = 2;
    if ((int)*(uint *)(iVar37 + 0x10) < 0) {
      uVar36 = *(uint *)(iVar37 + 0x10) ^ 0x80000000;
    }
    if ((5 < uVar36) || ((1 << (uVar36 & 0xff) & 0x31U) == 0)) {
      puVar15 = (uint *)thunk_FUN_01be5118(8);
      if (puVar15 == (uint *)0x0) goto LAB_006da21c;
      uVar36 = puVar45[1];
      *puVar15 = *puVar45;
      puVar15[1] = uVar36;
      local_c8 = (uint *******)&DAT_00000001;
      local_d0 = (uint *******)&DAT_00000001;
      iVar7 = *(int *)(iVar37 + 0x10);
      if (-1 < iVar7) {
        iVar7 = 2;
      }
      local_54 = *(uint **)(iVar37 + *(int *)(iVar7 * 4 + 0x534d5c));
      local_58 = *(uint ********)(iVar37 + *(int *)(iVar7 * 4 + 0x534d44));
      local_84 = &DAT_0132b6a0;
      local_88 = (uint *******)&local_58;
      local_8c = (uint *)&LAB_00701524;
      local_90 = (uint *******)(puVar45 + 4);
      local_cc = puVar15;
      FUN_00664898(&local_b0,&DAT_005a78a5,&local_90);
      local_90 = local_b0;
      local_8c = (uint *)local_ac;
      local_88 = local_a8;
      FUN_006d6c3c(param_2,&local_d0,&local_90);
    }
  }
  iVar37 = FUN_006e6200(param_1 + 0x24,(uint *****)puVar45[4] + 2,puVar45[5]);
  if (iVar37 != 0) {
    puVar15 = (uint *)thunk_FUN_01be5118(8);
    if (puVar15 == (uint *)0x0) goto LAB_006da21c;
    uVar36 = puVar45[1];
    *puVar15 = *puVar45;
    puVar15[1] = uVar36;
    local_c8 = (uint *******)&DAT_00000001;
    local_d0 = (uint *******)&DAT_00000001;
    local_ac = (code *)&LAB_00701524;
    local_cc = puVar15;
    local_b0 = (uint *******)(puVar45 + 4);
    FUN_00664898(&local_90,&DAT_005ba26a,&local_b0);
    local_b0 = local_90;
    local_ac = (code *)local_8c;
    local_a8 = local_88;
    FUN_006d6c3c(param_2,&local_d0,&local_b0);
  }
  if (((param_1[0x4c] != 2) && ((param_1[0x4c] & 1) == 0)) && (param_1[0x37] != 0)) {
    iVar14 = param_1[0x4d];
    iVar37 = param_1[0x4e];
    uVar24 = FUN_006c4fac(*puVar18,param_1[0x39],param_1[0x3a],param_1[0x3b],iVar14,iVar37);
    uVar36 = uVar24 >> 0x19;
    iVar47 = param_1[0x34];
    uVar26 = param_1[0x35];
    iVar7 = 0;
    do {
      uVar24 = uVar26 & uVar24;
      uVar38 = *(uint *)(iVar47 + uVar24);
      uVar39 = uVar38 ^ uVar36 * 0x1010101;
      uVar39 = ~uVar39 & 0x80808080 & uVar39 + 0xfefefeff;
LAB_006d8e5c:
      while (uVar39 != 0) {
        uVar32 = uVar39 >> 8;
        uVar17 = uVar39 >> 0x10;
        uVar5 = uVar39 >> 0x18;
        uVar4 = uVar39 << 0x18;
        uVar39 = uVar39 - 1 & uVar39;
        uVar32 = uVar24 + ((uint)LZCOUNT(uVar4 | (uVar32 & 0xff) << 0x10 | (uVar17 & 0xff) << 8 |
                                         uVar5) >> 3) & uVar26;
        piVar10 = (int *)(iVar47 + -0x28 + uVar32 * -0x28);
        iVar21 = *piVar10;
        if (iVar14 != 0 && iVar21 != 0) goto LAB_006d8ea4;
        if (iVar14 == 0 && iVar21 == 0) goto LAB_006d8f18;
      }
      if ((uVar38 & 0x80808080 & uVar38 << 1) != 0) break;
      iVar7 = iVar7 + 4;
      uVar24 = uVar24 + iVar7;
    } while( true );
  }
LAB_006d8f48:
  if (((param_1[0x90] != 2) && ((param_1[0x90] & 1) == 0)) && (param_1[0x7b] != 0)) {
    iVar14 = param_1[0x91];
    iVar37 = param_1[0x92];
    uVar24 = FUN_006c4fac(*puVar9,param_1[0x7d],param_1[0x7e],param_1[0x7f],iVar14,iVar37);
    uVar36 = uVar24 >> 0x19;
    iVar7 = param_1[0x78];
    uVar26 = param_1[0x79];
    iVar47 = 0;
    do {
      uVar24 = uVar26 & uVar24;
      uVar38 = *(uint *)(iVar7 + uVar24);
      uVar39 = uVar38 ^ uVar36 * 0x1010101;
      uVar39 = ~uVar39 & 0x80808080 & uVar39 + 0xfefefeff;
LAB_006d8fd4:
      while (uVar39 != 0) {
        uVar32 = uVar39 >> 8;
        uVar17 = uVar39 >> 0x10;
        uVar5 = uVar39 >> 0x18;
        uVar4 = uVar39 << 0x18;
        uVar39 = uVar39 - 1 & uVar39;
        uVar32 = uVar24 + ((uint)LZCOUNT(uVar4 | (uVar32 & 0xff) << 0x10 | (uVar17 & 0xff) << 8 |
                                         uVar5) >> 3) & uVar26;
        piVar10 = (int *)(iVar7 + -0x30 + uVar32 * -0x30);
        iVar21 = *piVar10;
        if (iVar14 != 0 && iVar21 != 0) goto LAB_006d901c;
        if (iVar14 == 0 && iVar21 == 0) goto LAB_006d9084;
      }
      if ((uVar38 & 0x80808080 & uVar38 << 1) != 0) break;
      iVar47 = iVar47 + 4;
      uVar24 = uVar24 + iVar47;
    } while( true );
  }
LAB_006d909c:
  local_a8 = (uint *******)0x0;
  local_b0 = (uint *******)0x0;
  local_84 = (undefined2 *)0x0;
  local_ac = (code *)&DAT_00000001;
  local_88 = (uint *******)0x60000020;
  local_8c = (uint *)&DAT_01c05e3c;
  local_90 = (uint *******)&local_b0;
  iVar37 = FUN_006fc3e0(pppppuVar16,&local_90);
  pcVar3 = local_ac;
  pppppppuVar27 = local_b0;
  uVar48 = CONCAT44(local_a8,local_ac);
  if (iVar37 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&local_d0,&DAT_01c05e54,&DAT_01d30334);
  }
  puVar15 = puVar45 + 0x1c;
  do {
    do {
      uVar19 = (undefined4)((ulonglong)uVar48 >> 0x20);
      uVar8 = (undefined4)uVar48;
      uVar48 = FUN_00700b3c(uVar8,uVar19,0x21);
    } while ((int)uVar48 != 0);
    uVar48 = FUN_006a4c58(uVar8,uVar19);
  } while ((int)uVar48 != 0);
  FUN_006bc87c(param_2,uVar8,uVar19,*puVar45,puVar45[1]);
  FUN_019bb7e0(pppppppuVar27,pcVar3);
  if (*pppppuVar16 != (uint ****)0x0) {
    local_28 = pppppuVar16;
    iVar37 = FUN_006c176c(*(undefined4 *)(*(int *)(param_2 + 0x24) + 0x40),
                          *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x44),*pppppuVar16 + 2,
                          puVar45[0x17]);
    if (iVar37 == 0) {
      puVar31 = (uint *)thunk_FUN_01be5118(8);
      if (puVar31 == (uint *)0x0) goto LAB_006da21c;
      uVar36 = puVar45[1];
      *puVar31 = *puVar45;
      puVar31[1] = uVar36;
      local_c8 = (uint *******)&DAT_00000001;
      local_d0 = (uint *******)&DAT_00000001;
      local_ac = (code *)&LAB_00700f68;
      local_b0 = (uint *******)&local_28;
      local_cc = puVar31;
      FUN_00664898(&local_90,&DAT_00576220,&local_b0);
      local_b0 = local_90;
      local_ac = (code *)local_8c;
      local_a8 = local_88;
      FUN_006d6c3c(param_2,&local_d0,&local_b0);
      goto LAB_006d9374;
    }
  }
  if (puVar45[0xc] != 0x80000007) {
    local_a8 = (uint *******)0x0;
    local_b0 = (uint *******)0x0;
    local_84 = (undefined2 *)0x0;
    local_ac = (code *)&DAT_00000001;
    local_88 = (uint *******)0x60000020;
    uVar8 = *(undefined4 *)(param_2 + 0x24);
    local_8c = (uint *)&DAT_01c05f9c;
    local_90 = (uint *******)&local_b0;
    iVar37 = FUN_006fc3e0(pppppuVar16,&local_90);
    pcVar3 = local_ac;
    pppppppuVar27 = local_b0;
    if (iVar37 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_d0,&DAT_01c05fb4,&DAT_01d30334);
    }
    local_8c = (uint *)puVar45[5];
    local_90 = (uint *******)(puVar45[4] + 8);
    local_88 = (uint *******)0x0;
    FUN_006bcb88(&local_68,uVar8,local_ac,local_a8,puVar45 + 8,&local_90);
    if (local_68 != (uint *******)&DAT_80000000) {
      local_58 = local_68;
      local_54 = local_64;
      local_50 = local_60;
      puVar31 = (uint *)thunk_FUN_01be5118(8);
      if (puVar31 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      uVar36 = puVar45[1];
      *puVar31 = *puVar45;
      puVar31[1] = uVar36;
      local_c8 = (uint *******)&DAT_00000001;
      local_d0 = (uint *******)&DAT_00000001;
      local_ac = (code *)&LAB_00632348;
      local_cc = puVar31;
      local_b0 = (uint *******)&local_58;
      FUN_00664898(&local_90,&DAT_0058d7b6,&local_b0);
      local_b0 = local_90;
      local_ac = (code *)local_8c;
      local_a8 = local_88;
      FUN_006d6c3c(param_2,&local_d0,&local_b0);
      FUN_019bb7e0(local_58,local_54);
    }
    FUN_019bb7e0(pppppppuVar27,pcVar3);
  }
LAB_006d9374:
  puVar45 = puVar15;
  if (puVar15 == puVar29 + uVar44 * 0x1c) goto LAB_006d93dc;
  goto LAB_006d8988;
LAB_006d8ea4:
  if ((iVar37 == piVar10[1]) && (iVar21 = thunk_FUN_01bed842(iVar14,iVar21,iVar37), iVar21 == 0)) {
LAB_006d8f18:
    local_8c = (uint *)puVar45[5];
    local_88 = (uint *******)*puVar45;
    local_84 = (undefined2 *)puVar45[1];
    local_90 = (uint *******)(puVar45[4] + 8);
    FUN_006e67e4(iVar47 + uVar32 * -0x28 + -0x20,&local_90);
    goto LAB_006d8f48;
  }
  goto LAB_006d8e5c;
LAB_006d901c:
  if ((iVar37 == piVar10[1]) && (iVar21 = thunk_FUN_01bed842(iVar14,iVar21,iVar37), iVar21 == 0)) {
LAB_006d9084:
    FUN_006e6200(iVar7 + uVar32 * -0x30 + -0x20,puVar45[4] + 8,puVar45[5]);
    goto LAB_006d909c;
  }
  goto LAB_006d8fd4;
LAB_006d99d0:
  local_90 = local_48;
  local_8c = local_44;
  local_88 = local_40;
  local_84 = local_3c;
  local_80 = local_38;
  uStack_7c = (uint)local_34;
  uStack_78 = local_30;
  uStack_74 = local_2c;
  FUN_006e1614(param_1 + 0x34,&local_58,&local_90,&local_d0,&local_b0);
  if ((local_8c != (uint *)0x0) && (local_8c + (int)local_8c * 2 + 2 != (uint *)0xfffffffb)) {
    thunk_FUN_01be4678((int)local_90 - ((int)local_8c * 8 + 8));
  }
  local_48 = (uint *******)puVar28[iVar37 * 2 + -8];
  local_34 = (uint *******)&local_d0;
  local_38 = puVar28[iVar37 * 2 + -5];
  local_3c = (undefined2 *)((int)local_48 + puVar28[iVar37 * 2 + -7] + 1);
  local_40 = local_48 + 1;
  local_44 = (uint *)(~(uint)*local_48 & 0x80808080);
  pppppppuVar27 = local_34;
  while (pppppuVar16 = (uint *****)FUN_006e5564(&local_48), pppppuVar16 != (uint *****)0x0) {
    iVar7 = FUN_006e58b4(pppppppuVar27,*pppppuVar16,pppppuVar16[1]);
    if (iVar7 == 0) {
      local_6c = pppppuVar16;
      if ((uint ****)puVar28[iVar37 * 2 + -10] == (uint ****)0x0) {
        puVar45 = (uint *)thunk_FUN_01be5118(8);
        if (puVar45 == (uint *)0x0) goto LAB_006da274;
        ppppuVar22 = pppppuVar16[3];
        *puVar45 = (uint)pppppuVar16[2];
        puVar45[1] = (uint)ppppuVar22;
        local_60 = (uint *******)&DAT_00000001;
        local_68 = (uint *******)&DAT_00000001;
        local_54 = (uint *)&LAB_01963050;
        local_58 = (uint *******)&local_6c;
        local_64 = puVar45;
        FUN_00664898(&local_90,&DAT_00589558,&local_58);
        local_58 = local_90;
        local_54 = local_8c;
        local_50 = local_88;
        FUN_006d6c3c(param_2,&local_68,&local_58);
      }
      else {
        local_28 = (uint *****)(puVar28 + iVar37 * 2 + -10);
        puVar45 = (uint *)thunk_FUN_01be5118(8);
        if (puVar45 == (uint *)0x0) {
LAB_006da274:
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,8);
        }
        ppppuVar22 = pppppuVar16[3];
        *puVar45 = (uint)pppppuVar16[2];
        puVar45[1] = (uint)ppppuVar22;
        local_60 = (uint *******)&DAT_00000001;
        local_68 = (uint *******)&DAT_00000001;
        local_88 = (uint *******)&local_28;
        local_90 = (uint *******)&local_6c;
        local_84 = (undefined2 *)&LAB_01963050;
        local_8c = (uint *)&LAB_01963050;
        local_64 = puVar45;
        FUN_00664898(&local_58,&DAT_00572a88,&local_90);
        local_90 = local_58;
        local_8c = local_54;
        local_88 = local_50;
        FUN_006d6c3c(param_2,&local_68,&local_90);
      }
      pppppppuVar27 = local_34;
    }
  }
  if ((local_ac != (code *)0x0) &&
     ((uint *)((int)local_ac + ((int)local_ac * 3 + 3) * 4) != (uint *)0xfffffffb)) {
    thunk_FUN_01be4678((int)local_b0 - ((int)local_ac * 0xc + 0xc));
  }
  if ((local_cc != (uint *)0x0) && (local_cc + (int)local_cc * 2 + 2 != (uint *)0xfffffffb)) {
    thunk_FUN_01be4678((int)local_d0 - ((int)local_cc * 8 + 8));
  }
  goto LAB_006d97c8;
}

