// FUN_01348cc4 @ 01348cc4 size=5120 calls_out=18 calls_in=6
// strings: $schema | https://json-schema.org/schema | https://json-schema.org/draft-07/schema | https://json-schema.org/draft-06/schema | https://json-schema.org/draft-04/schema | $vocabulary

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01348cc4(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  ushort uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint *puVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  undefined4 uVar26;
  int iVar27;
  char *pcVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  undefined4 uVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  undefined8 uVar40;
  uint local_20c;
  int local_204;
  int local_1e8;
  int local_1d0;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  uint local_1bc;
  uint local_1b4;
  uint local_1ac;
  undefined4 local_190;
  uint local_18c;
  uint *local_188;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint *local_164;
  uint local_160;
  uint local_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  uint *local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  uint local_140;
  uint uStack_13c;
  uint local_138;
  uint uStack_134;
  uint local_130;
  uint *local_12c;
  uint local_128;
  uint uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  uint local_114;
  undefined4 local_110;
  int local_10c;
  uint local_108;
  uint local_104;
  undefined4 local_100;
  int local_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  uint local_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint local_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint *puStack_d8;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint local_c4;
  uint *local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint *puStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint local_74;
  uint local_60;
  uint *local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  uVar8 = FUN_01352d48(param_3,param_4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar8) {
  default:
    FUN_0134ff4c(param_1);
    return;
  case 3:
    FUN_0134f994(param_1,0x9b);
    return;
  case 4:
    FUN_0134f994(param_1,0xff);
    return;
  case 5:
    break;
  }
  if ((*param_4 == '\x05') && (iVar27 = *(int *)(param_4 + 4), iVar27 != 0)) {
    local_1d0 = *(int *)(param_4 + 8);
    while( true ) {
      uVar2 = *(ushort *)(iVar27 + 0x192);
      iVar31 = iVar27 + 0x10c;
      uVar17 = 0xffffffff;
      iVar25 = (uint)uVar2 * 0xc;
      do {
        if (iVar25 == 0) {
          uVar17 = (uint)uVar2;
          goto LAB_01348e14;
        }
        uVar20 = *(uint *)(iVar31 + 8);
        uVar14 = uVar20;
        if (6 < uVar20) {
          uVar14 = 7;
        }
        iVar9 = FUN_016dd50a("$schema",*(undefined4 *)(iVar31 + 4),uVar14);
        if (iVar9 == 0) {
          iVar9 = 7 - uVar20;
        }
        iVar25 = iVar25 + -0xc;
        uVar17 = uVar17 + 1;
        iVar31 = iVar31 + 0xc;
      } while ((char)((0 < iVar9) - (iVar9 < 0)) == '\x01');
      if (0 < iVar9 == iVar9 < 0) break;
LAB_01348e14:
      if (local_1d0 == 0) goto LAB_0134a198;
      local_1d0 = local_1d0 + -1;
      iVar27 = *(int *)(iVar27 + uVar17 * 4 + 0x198);
    }
    pcVar28 = (char *)(iVar27 + uVar17 * 0x18);
    if (*pcVar28 == '\x03') {
      FUN_013575a0(&local_1c8,*(undefined4 *)(pcVar28 + 8),*(undefined4 *)(pcVar28 + 0xc));
      if (local_1c8 != -0x7ffffff6) goto LAB_0134a190;
      uVar17 = local_1b4;
      if (local_1ac != 0) {
        uVar17 = local_1ac;
      }
      if (local_1bc < uVar17) {
        uVar17 = local_1bc;
      }
      else if (((uVar17 != 0) && (uVar17 < local_1bc)) && (*(char *)(local_1c0 + uVar17) < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00418707,0x30,&DAT_01882184);
      }
      if (*(int *)(param_2 + 0x3c) != 0) {
        local_174 = *(uint *)(param_2 + 0x44);
        local_180 = *(uint *)(param_2 + 0x48);
        local_17c = *(uint *)(param_2 + 0x4c);
        local_190 = *(undefined4 *)(param_2 + 0x50);
        local_184 = *(uint *)(param_2 + 0x5c);
        local_178 = *(uint *)(param_2 + 0x40);
        local_18c = *(uint *)(param_2 + 0x54);
        local_188 = *(uint **)(param_2 + 0x58);
        FUN_01352290(&local_190,local_1c0,uVar17);
        iVar27 = *(int *)(param_2 + 0x30);
        iVar25 = 0;
        uVar14 = local_17c << 0x18 | (local_17c >> 8 & 0xff) << 0x10 |
                 (local_17c >> 0x10 & 0xff) << 8 | local_17c >> 0x18;
        lVar4 = (ulonglong)~local_178 * (ulonglong)uVar14;
        uVar35 = (uint)lVar4;
        uVar20 = local_174 << 0x18 | (local_174 >> 8 & 0xff) << 0x10 |
                 (local_174 >> 0x10 & 0xff) << 8 | local_174 >> 0x18;
        uVar14 = (local_180 << 0x18 | (local_180 >> 8 & 0xff) << 0x10 |
                  (local_180 >> 0x10 & 0xff) << 8 | local_180 >> 0x18) * ~local_178 +
                 uVar14 * ~local_174 + (int)((ulonglong)lVar4 >> 0x20);
        lVar4 = (ulonglong)local_180 * (ulonglong)uVar20;
        uVar21 = *(uint *)(param_2 + 0x34);
        uVar14 = (uint)lVar4 ^
                 (uVar14 * 0x1000000 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                 uVar14 >> 0x18);
        uVar35 = (local_178 << 0x18 | (local_178 >> 8 & 0xff) << 0x10 |
                  (local_178 >> 0x10 & 0xff) << 8 | local_178 >> 0x18) * local_180 +
                 uVar20 * local_17c + (int)((ulonglong)lVar4 >> 0x20) ^
                 (uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 | (uVar35 >> 0x10 & 0xff) << 8 |
                 uVar35 >> 0x18);
        uVar20 = uVar35;
        if ((local_180 & 0x20) != 0) {
          uVar20 = uVar14;
          uVar14 = uVar35;
        }
        uVar20 = uVar14 << (local_180 & 0x1f) | (uVar20 >> 1) >> (~local_180 & 0x1f);
        uVar14 = uVar20 >> 0x19;
        while( true ) {
          uVar20 = uVar21 & uVar20;
          uVar15 = *(uint *)(iVar27 + uVar20);
          uVar35 = uVar15 ^ uVar14 * 0x1010101;
          for (uVar35 = ~uVar35 & 0x80808080 & uVar35 + 0xfefefeff; uVar35 != 0;
              uVar35 = uVar35 - 1 & uVar35) {
            uVar10 = uVar20 + ((uint)LZCOUNT(uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 |
                                             (uVar35 >> 0x10 & 0xff) << 8 | uVar35 >> 0x18) >> 3) &
                     uVar21;
            iVar31 = *(int *)(iVar27 + -0xc + uVar10 * -0xc);
            if ((uVar17 == *(uint *)(iVar31 + 0x10)) &&
               (iVar31 = thunk_FUN_016dd50a(local_1c0,*(undefined4 *)(iVar31 + 0xc),uVar17),
               iVar31 == 0)) {
              pcVar28 = *(char **)(iVar27 + uVar10 * -0xc + -8);
              if ((*pcVar28 != '\x05') || (iVar27 = *(int *)(pcVar28 + 4), iVar27 == 0))
              goto LAB_01349320;
              local_1e8 = *(int *)(pcVar28 + 8);
              iVar25 = iVar27;
              iVar31 = local_1e8;
              goto LAB_013490b8;
            }
          }
          if ((uVar15 & 0x80808080 & uVar15 << 1) != 0) break;
          iVar25 = iVar25 + 4;
          uVar20 = uVar20 + iVar25;
        }
      }
      goto LAB_0134a174;
    }
  }
  goto LAB_0134a198;
LAB_013490b8:
  uVar2 = *(ushort *)(iVar25 + 0x192);
  iVar33 = iVar25 + 0x10c;
  uVar17 = 0xffffffff;
  iVar9 = (uint)uVar2 * 0xc;
  do {
    if (iVar9 == 0) {
      uVar17 = (uint)uVar2;
      goto LAB_01349138;
    }
    uVar20 = *(uint *)(iVar33 + 8);
    uVar14 = uVar20;
    if (2 < uVar20) {
      uVar14 = 3;
    }
    iVar11 = FUN_016dd50a("$id",*(undefined4 *)(iVar33 + 4),uVar14);
    if (iVar11 == 0) {
      iVar11 = 3 - uVar20;
    }
    iVar9 = iVar9 + -0xc;
    uVar17 = uVar17 + 1;
    iVar33 = iVar33 + 0xc;
  } while ((char)((0 < iVar11) - (iVar11 < 0)) == '\x01');
  if (0 < iVar11 == iVar11 < 0) {
    pcVar28 = (char *)(iVar25 + uVar17 * 0x18);
    if (*pcVar28 != '\x03') goto LAB_01349320;
    uVar26 = *(undefined4 *)(pcVar28 + 8);
    iVar25 = *(int *)(pcVar28 + 0xc);
    if (iVar25 == 0x2c) {
      iVar25 = thunk_FUN_016dd50a(uVar26,&DAT_003c6e42,0x2c);
      if (iVar25 != 0) {
        iVar25 = thunk_FUN_016dd50a(uVar26,&DAT_003c6ce6,0x2c);
        if (iVar25 != 0) goto LAB_0134923c;
        puVar12 = (undefined4 *)FUN_01351d44();
        uVar26 = *puVar12;
        iVar27 = puVar12[1];
        puVar12 = (undefined4 *)FUN_011e4df8();
        uVar26 = (**(code **)(iVar27 + 0xc))(uVar26);
        FUN_005ebd80(&uStack_a0,puVar12[2],*puVar12,puVar12[1],puVar12[2],puVar12[3],puVar12 + 8,
                     uVar26);
        local_188 = &DAT_005674cc;
        local_184 = 0;
        local_180 = 0;
        local_17c = 0;
        local_178 = uStack_a0;
        local_174 = uStack_9c;
        local_170 = local_98;
        local_16c = uStack_94;
        local_168 = uStack_90;
        local_164 = puStack_8c;
        local_160 = uStack_88;
        local_15c = uStack_84;
        local_158 = CONCAT31(local_158._1_3_,0x9b);
        local_b0 = local_188;
        local_ac = local_184;
        local_a8 = local_180;
        local_a4 = local_17c;
        goto LAB_0134932c;
      }
    }
    else {
      if (iVar25 == 0x27) {
        iVar25 = thunk_FUN_016dd50a(uVar26,"https://json-schema.org/draft-07/schema",0x27);
        if (((iVar25 != 0) &&
            (iVar25 = thunk_FUN_016dd50a(uVar26,"https://json-schema.org/draft-06/schema",0x27),
            iVar25 != 0)) &&
           (iVar25 = thunk_FUN_016dd50a(uVar26,"https://json-schema.org/draft-04/schema",0x27),
           iVar25 != 0)) goto LAB_0134923c;
        goto LAB_01349320;
      }
      if ((iVar25 != 0x1e) ||
         (iVar25 = thunk_FUN_016dd50a(uVar26,"https://json-schema.org/schema",0x1e), iVar25 != 0))
      goto LAB_0134923c;
    }
    puVar12 = (undefined4 *)FUN_01351d44();
    uVar26 = *puVar12;
    iVar27 = puVar12[1];
    puVar13 = (uint *)FUN_011e4df8();
    uVar17 = (**(code **)(iVar27 + 0xc))(uVar26);
    uVar14 = puVar13[3];
    uVar20 = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
             uVar14 >> 0x18;
    uVar17 = puVar13[2] ^ uVar17;
    lVar4 = (ulonglong)uVar20 * 0xb36a80d2;
    uVar35 = (uint)lVar4;
    uVar20 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
             uVar17 >> 0x18) * -0x4c957f2e + uVar20 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
    uVar10 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18) ^ (uint)((ulonglong)uVar17 * 0x2df45158);
    uVar15 = uVar10 ^ puVar13[0xe];
    uVar35 = (uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 | (uVar35 >> 0x10 & 0xff) << 8 |
             uVar35 >> 0x18) ^
             uVar14 * 0x2df45158 +
             uVar17 * 0x2d7f954c + (int)((ulonglong)uVar17 * 0x2df45158 >> 0x20);
    uVar17 = uVar35 ^ puVar13[0xf];
    uVar14 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
             uVar17 >> 0x18;
    lVar4 = (ulonglong)uVar14 * 0xb36a80d2;
    uVar20 = (uint)lVar4;
    uVar21 = uVar17 * 0x2df45158 +
             uVar15 * 0x2d7f954c + (int)((ulonglong)uVar15 * 0x2df45158 >> 0x20) ^
             (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18) ^ puVar13[9];
    uVar20 = uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
             uVar21 >> 0x18;
    lVar5 = (ulonglong)uVar20 * 0xb36a80d2;
    uVar34 = (uint)lVar5;
    uVar17 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
             uVar15 >> 0x18) * -0x4c957f2e + uVar14 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
    uVar14 = (uint)((ulonglong)uVar15 * 0x2df45158) ^
             (uVar17 * 0x1000000 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
             uVar17 >> 0x18) ^ puVar13[8];
    uVar17 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
             uVar14 >> 0x18) * -0x4c957f2e + uVar20 * -0x5851f42e + (int)((ulonglong)lVar5 >> 0x20);
    uVar20 = (uVar17 * 0x1000000 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
             uVar17 >> 0x18) ^ (uint)((ulonglong)uVar14 * 0x2df45158);
    uVar29 = *puVar13;
    uVar30 = puVar13[1];
    uVar38 = uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8 |
             uVar30 >> 0x18;
    uVar15 = uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
             uVar29 >> 0x18;
    uVar29 = ~uVar29;
    uVar17 = (uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
             uVar34 >> 0x18) ^
             uVar21 * 0x2df45158 +
             uVar14 * 0x2d7f954c + (int)((ulonglong)uVar14 * 0x2df45158 >> 0x20);
    uVar30 = ~uVar30;
    uVar14 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
             uVar17 >> 0x18;
    lVar4 = (ulonglong)uVar29 * (ulonglong)uVar14;
    uVar21 = (uint)lVar4;
    uVar14 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18) * uVar29 + uVar14 * uVar30 + (int)((ulonglong)lVar4 >> 0x20);
    uVar17 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
             uVar21 >> 0x18) ^
             uVar17 * uVar38 +
             uVar20 * uVar15 + (int)((ulonglong)uVar38 * (ulonglong)uVar20 >> 0x20);
    uVar21 = (uVar14 * 0x1000000 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
             uVar14 >> 0x18) ^ (uint)((ulonglong)uVar38 * (ulonglong)uVar20);
    uVar14 = uVar21;
    if ((uVar20 & 0x20) != 0) {
      uVar14 = uVar17;
      uVar17 = uVar21;
    }
    local_160 = uVar14 << (uVar20 & 0x1f) | (uVar17 >> 1) >> (~uVar20 & 0x1f);
    uVar34 = uVar10 ^ puVar13[0xc];
    uVar22 = uVar35 ^ puVar13[0xd];
    uVar23 = uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
             uVar22 >> 0x18;
    lVar4 = (ulonglong)uVar23 * 0xb36a80d2;
    uVar21 = (uint)lVar4;
    uVar18 = uVar22 * 0x2df45158 +
             uVar34 * 0x2d7f954c + (int)((ulonglong)uVar34 * 0x2df45158 >> 0x20) ^
             (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
             uVar21 >> 0x18) ^ puVar13[0xb];
    uVar21 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
             uVar18 >> 0x18;
    lVar5 = (ulonglong)uVar21 * 0xb36a80d2;
    uVar36 = (uint)lVar5;
    uVar22 = (uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
             uVar34 >> 0x18) * -0x4c957f2e + uVar23 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
    uVar34 = (uint)((ulonglong)uVar34 * 0x2df45158) ^
             (uVar22 * 0x1000000 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
             uVar22 >> 0x18) ^ puVar13[10];
    uVar21 = (uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
             uVar34 >> 0x18) * -0x4c957f2e + uVar21 * -0x5851f42e + (int)((ulonglong)lVar5 >> 0x20);
    uVar22 = (uVar21 * 0x1000000 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
             uVar21 >> 0x18) ^ (uint)((ulonglong)uVar34 * 0x2df45158);
    uVar21 = (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
             uVar36 >> 0x18) ^
             uVar18 * 0x2df45158 +
             uVar34 * 0x2d7f954c + (int)((ulonglong)uVar34 * 0x2df45158 >> 0x20);
    uVar34 = uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
             uVar21 >> 0x18;
    lVar4 = (ulonglong)uVar29 * (ulonglong)uVar34;
    uVar18 = (uint)lVar4;
    uVar21 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
             uVar18 >> 0x18) ^
             uVar21 * uVar38 +
             uVar22 * uVar15 + (int)((ulonglong)uVar38 * (ulonglong)uVar22 >> 0x20);
    uVar34 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
             uVar22 >> 0x18) * uVar29 + uVar34 * uVar30 + (int)((ulonglong)lVar4 >> 0x20);
    uVar18 = (uVar34 * 0x1000000 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
             uVar34 >> 0x18) ^ (uint)((ulonglong)uVar38 * (ulonglong)uVar22);
    uVar34 = uVar18;
    if ((uVar22 & 0x20) != 0) {
      uVar34 = uVar21;
      uVar21 = uVar18;
    }
    local_168 = uVar34 << (uVar22 & 0x1f) | (uVar21 >> 1) >> (~uVar22 & 0x1f);
    uVar18 = uVar10 ^ puVar13[10];
    uVar23 = uVar35 ^ puVar13[0xb];
    uVar19 = uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
             uVar23 >> 0x18;
    lVar4 = (ulonglong)uVar19 * 0xb36a80d2;
    uVar36 = (uint)lVar4;
    uVar36 = uVar23 * 0x2df45158 +
             uVar18 * 0x2d7f954c + (int)((ulonglong)uVar18 * 0x2df45158 >> 0x20) ^
             (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
             uVar36 >> 0x18) ^ puVar13[0xf];
    uVar24 = uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
             uVar36 >> 0x18;
    lVar5 = (ulonglong)uVar24 * 0xb36a80d2;
    uVar37 = (uint)lVar5;
    uVar23 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
             uVar18 >> 0x18) * -0x4c957f2e + uVar19 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
    uVar18 = (uint)((ulonglong)uVar18 * 0x2df45158) ^
             (uVar23 * 0x1000000 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
             uVar23 >> 0x18) ^ puVar13[0xe];
    uVar23 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
             uVar18 >> 0x18) * -0x4c957f2e + uVar24 * -0x5851f42e + (int)((ulonglong)lVar5 >> 0x20);
    uVar19 = (uVar23 * 0x1000000 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
             uVar23 >> 0x18) ^ (uint)((ulonglong)uVar18 * 0x2df45158);
    uVar18 = (uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
             uVar37 >> 0x18) ^
             uVar36 * 0x2df45158 +
             uVar18 * 0x2d7f954c + (int)((ulonglong)uVar18 * 0x2df45158 >> 0x20);
    uVar23 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
             uVar18 >> 0x18;
    lVar4 = (ulonglong)uVar29 * (ulonglong)uVar23;
    uVar36 = (uint)lVar4;
    uVar18 = (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
             uVar36 >> 0x18) ^
             uVar18 * uVar38 +
             uVar19 * uVar15 + (int)((ulonglong)uVar38 * (ulonglong)uVar19 >> 0x20);
    uVar23 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
             uVar19 >> 0x18) * uVar29 + uVar23 * uVar30 + (int)((ulonglong)lVar4 >> 0x20);
    uVar36 = (uVar23 * 0x1000000 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
             uVar23 >> 0x18) ^ (uint)((ulonglong)uVar38 * (ulonglong)uVar19);
    uVar23 = uVar36;
    if ((uVar19 & 0x20) != 0) {
      uVar23 = uVar18;
      uVar18 = uVar36;
    }
    local_170 = uVar23 << (uVar19 & 0x1f) | (uVar18 >> 1) >> (~uVar19 & 0x1f);
    uVar10 = uVar10 ^ puVar13[8];
    uVar35 = uVar35 ^ puVar13[9];
    uVar36 = uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 | (uVar35 >> 0x10 & 0xff) << 8 |
             uVar35 >> 0x18;
    lVar4 = (ulonglong)uVar36 * 0xb36a80d2;
    uVar24 = (uint)lVar4;
    uVar36 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
             uVar10 >> 0x18) * -0x4c957f2e + uVar36 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
    uVar24 = uVar35 * 0x2df45158 +
             uVar10 * 0x2d7f954c + (int)((ulonglong)uVar10 * 0x2df45158 >> 0x20) ^
             (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
             uVar24 >> 0x18) ^ puVar13[0xd];
    uVar37 = uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
             uVar24 >> 0x18;
    lVar4 = (ulonglong)uVar37 * 0xb36a80d2;
    uVar39 = (uint)lVar4;
    uVar35 = (uint)((ulonglong)uVar10 * 0x2df45158) ^
             (uVar36 * 0x1000000 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
             uVar36 >> 0x18) ^ puVar13[0xc];
    uVar10 = (uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 | (uVar35 >> 0x10 & 0xff) << 8 |
             uVar35 >> 0x18) * -0x4c957f2e + uVar37 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
    uVar36 = (uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
             uVar10 >> 0x18) ^ (uint)((ulonglong)uVar35 * 0x2df45158);
    uVar35 = (uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
             uVar39 >> 0x18) ^
             uVar24 * 0x2df45158 +
             uVar35 * 0x2d7f954c + (int)((ulonglong)uVar35 * 0x2df45158 >> 0x20);
    uVar10 = uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 | (uVar35 >> 0x10 & 0xff) << 8 |
             uVar35 >> 0x18;
    lVar4 = (ulonglong)uVar29 * (ulonglong)uVar10;
    uVar24 = (uint)lVar4;
    uVar35 = (uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
             uVar24 >> 0x18) ^
             uVar35 * uVar38 +
             uVar36 * uVar15 + (int)((ulonglong)uVar38 * (ulonglong)uVar36 >> 0x20);
    uVar15 = (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
             uVar36 >> 0x18) * uVar29 + uVar10 * uVar30 + (int)((ulonglong)lVar4 >> 0x20);
    uVar10 = (uVar15 * 0x1000000 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
             uVar15 >> 0x18) ^ (uint)((ulonglong)uVar38 * (ulonglong)uVar36);
    uVar15 = uVar10;
    if ((uVar36 & 0x20) != 0) {
      uVar15 = uVar35;
      uVar35 = uVar10;
    }
    local_178 = uVar15 << (uVar36 & 0x1f) | (uVar35 >> 1) >> (~uVar36 & 0x1f);
    local_174 = uVar35 << (uVar36 & 0x1f) | (uVar15 >> 1) >> (~uVar36 & 0x1f);
    local_15c = uVar17 << (uVar20 & 0x1f) | (uVar14 >> 1) >> (~uVar20 & 0x1f);
    local_164 = (uint *)(uVar21 << (uVar22 & 0x1f) | (uVar34 >> 1) >> (~uVar22 & 0x1f));
    local_16c = uVar18 << (uVar19 & 0x1f) | (uVar23 >> 1) >> (~uVar19 & 0x1f);
    local_184 = 0;
    local_180 = 0;
    local_188 = &DAT_005674cc;
    local_17c = 0;
    local_158 = CONCAT31(local_158._1_3_,0xff);
    goto LAB_0134932c;
  }
LAB_01349138:
  if (iVar31 == 0) goto LAB_01349320;
  iVar31 = iVar31 + -1;
  iVar25 = *(int *)(iVar25 + uVar17 * 4 + 0x198);
  goto LAB_013490b8;
LAB_013499bc:
  uVar40 = FUN_00f45584(&local_114);
  pcVar28 = (char *)((ulonglong)uVar40 >> 0x20);
  iVar27 = (int)uVar40;
  if (iVar27 == 0) goto LAB_0134a01c;
  cVar1 = *pcVar28;
  if (cVar1 == '\x01') {
    pcVar28 = (char *)(uint)(byte)pcVar28[1];
  }
  if (cVar1 == '\x01' && pcVar28 == &DAT_00000001) {
    uVar26 = *(undefined4 *)(iVar27 + 8);
    uVar32 = *(undefined4 *)(iVar27 + 4);
    switch(uVar26) {
    case 0x30:
      iVar27 = thunk_FUN_016dd50a(uVar32,"https://json-schema.org/draft/2020-12/vocab/core",0x30);
      puVar13 = (uint *)0x0;
      if (iVar27 != 0) {
        uVar16 = 0x30;
        pcVar28 = "https://json-schema.org/draft/2019-09/vocab/core";
LAB_01349bc0:
        iVar27 = thunk_FUN_016dd50a(uVar32,pcVar28,uVar16);
        if (iVar27 != 0) goto switchD_01349a00_caseD_31;
      }
      break;
    default:
switchD_01349a00_caseD_31:
      FUN_013575a0(&local_60,uVar32,uVar26);
      uVar14 = local_54;
      uVar17 = local_58;
      puVar13 = local_5c;
      local_17c = local_50;
      local_178 = local_4c;
      local_174 = local_48;
      local_170 = local_44;
      local_16c = uStack_40;
      local_168 = uStack_3c;
      local_164 = puStack_38;
      local_f0 = local_17c;
      uStack_ec = local_178;
      uStack_e8 = local_174;
      local_e4 = local_170;
      local_d0 = local_17c;
      uStack_cc = local_178;
      uStack_c8 = local_174;
      local_c4 = local_170;
      local_80 = local_17c;
      uStack_7c = local_178;
      uStack_78 = local_174;
      local_74 = local_170;
      if (local_60 == 0x8000000a) {
        if (local_5c < &DAT_80000000) {
          local_60 = local_130;
          local_5c = local_12c;
          local_50 = local_138;
          local_4c = uStack_134;
          local_58 = local_128;
          local_54 = uStack_124;
          local_48 = local_140;
          local_44 = uStack_13c;
          uStack_e0 = local_16c;
          uStack_dc = local_168;
          puStack_d8 = local_164;
          FUN_01352290(&local_60,uVar17,uVar14);
          uVar35 = local_50;
          uVar20 = local_44 << 0x18 | (local_44 >> 8 & 0xff) << 0x10 |
                   (local_44 >> 0x10 & 0xff) << 8 | local_44 >> 0x18;
          lVar4 = (ulonglong)local_50 * (ulonglong)uVar20;
          uVar21 = local_4c << 0x18 | (local_4c >> 8 & 0xff) << 0x10 |
                   (local_4c >> 0x10 & 0xff) << 8 | local_4c >> 0x18;
          lVar5 = (ulonglong)~local_48 * (ulonglong)uVar21;
          uVar15 = (uint)lVar5;
          uVar21 = (local_50 << 0x18 | (local_50 >> 8 & 0xff) << 0x10 |
                    (local_50 >> 0x10 & 0xff) << 8 | local_50 >> 0x18) * ~local_48 +
                   uVar21 * ~local_44 + (int)((ulonglong)lVar5 >> 0x20);
          uVar15 = (local_48 << 0x18 | (local_48 >> 8 & 0xff) << 0x10 |
                    (local_48 >> 0x10 & 0xff) << 8 | local_48 >> 0x18) * local_50 +
                   uVar20 * local_4c + (int)((ulonglong)lVar4 >> 0x20) ^
                   (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                   uVar15 >> 0x18);
          uVar20 = (uint)lVar4 ^
                   (uVar21 * 0x1000000 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8
                   | uVar21 >> 0x18);
          uVar21 = uVar15;
          if ((local_50 & 0x20) != 0) {
            uVar21 = uVar20;
            uVar20 = uVar15;
          }
          if (local_148 == 0) {
            FUN_01342798(&local_150,&local_140);
          }
          uVar15 = local_14c;
          puVar7 = local_150;
          uVar35 = uVar20 << (uVar35 & 0x1f) | (uVar21 >> 1) >> (~uVar35 & 0x1f);
          bVar6 = false;
          local_204 = 0;
          uVar20 = uVar35;
          do {
            uVar20 = uVar15 & uVar20;
            uVar10 = *(uint *)((int)puVar7 + uVar20);
            uVar21 = uVar10 ^ (uVar35 >> 0x19) * 0x1010101;
            for (uVar21 = ~uVar21 & 0x80808080 & uVar21 + 0xfefefeff; uVar21 != 0;
                uVar21 = uVar21 - 1 & uVar21) {
              uVar30 = uVar20 + ((uint)LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                               (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3)
                       & uVar15;
              if ((uVar14 == puVar7[uVar30 * -10 + -8]) &&
                 (iVar27 = thunk_FUN_016dd50a(uVar17,puVar7[uVar30 * -10 + -9],uVar14), iVar27 == 0)
                 ) {
                if (puVar13 != (uint *)0x0) {
                  thunk_FUN_016d3fb4(uVar17);
                }
                goto LAB_013499bc;
              }
            }
            uVar21 = uVar10 & 0x80808080;
            if (bVar6) {
LAB_01349e80:
              if ((uVar21 & uVar10 << 1) != 0) goto LAB_01349f48;
              bVar6 = true;
            }
            else {
              if (uVar21 != 0) {
                local_20c = uVar20 + ((uint)LZCOUNT((uVar10 & 0x80) << 0x18 |
                                                    (uVar21 >> 8 & 0xff) << 0x10 |
                                                    (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18)
                                     >> 3) & uVar15;
                goto LAB_01349e80;
              }
              bVar6 = false;
            }
            local_204 = local_204 + 4;
            uVar20 = local_204 + uVar20;
          } while( true );
        }
        goto LAB_01349c84;
      }
      local_160 = local_34;
      local_15c = uStack_30;
      local_158 = uStack_2c;
      local_184 = local_58;
      local_180 = local_54;
      local_188 = local_5c;
      local_18c = local_60;
      local_190 = 1;
      FUN_011a3274(&local_150);
      FUN_0134a290(&local_190);
      goto LAB_0134a174;
    case 0x32:
      iVar27 = thunk_FUN_016dd50a(uVar32,"https://json-schema.org/draft/2020-12/vocab/format",0x32);
      puVar13 = (uint *)0x80000005;
      if (iVar27 != 0) {
        uVar16 = 0x32;
        pcVar28 = "https://json-schema.org/draft/2019-09/vocab/format";
        goto LAB_01349bc0;
      }
      break;
    case 0x33:
      iVar27 = thunk_FUN_016dd50a(uVar32,"https://json-schema.org/draft/2020-12/vocab/content",0x33)
      ;
      puVar13 = (uint *)0x80000007;
      if (iVar27 != 0) {
        uVar16 = 0x33;
        pcVar28 = "https://json-schema.org/draft/2019-09/vocab/content";
        goto LAB_01349bc0;
      }
      break;
    case 0x35:
      iVar27 = thunk_FUN_016dd50a(uVar32,"https://json-schema.org/draft/2020-12/vocab/meta-data",
                                  0x35);
      puVar13 = (uint *)&DAT_80000004;
      if (iVar27 != 0) {
        uVar16 = 0x35;
        pcVar28 = "https://json-schema.org/draft/2019-09/vocab/meta-data";
        goto LAB_01349bc0;
      }
      break;
    case 0x36:
      iVar27 = thunk_FUN_016dd50a(uVar32,"https://json-schema.org/draft/2020-12/vocab/applicator",
                                  0x36);
      puVar13 = (uint *)0x80000001;
      if ((iVar27 != 0) &&
         (iVar27 = thunk_FUN_016dd50a(uVar32,
                                      "https://json-schema.org/draft/2019-09/vocab/applicator",0x36)
         , iVar27 != 0)) {
        iVar27 = thunk_FUN_016dd50a(uVar32,"https://json-schema.org/draft/2020-12/vocab/validation",
                                    0x36);
        puVar13 = (uint *)0x80000003;
        if (iVar27 != 0) {
          uVar16 = 0x36;
          pcVar28 = "https://json-schema.org/draft/2019-09/vocab/validation";
          goto LAB_01349bc0;
        }
      }
      break;
    case 0x37:
      iVar27 = thunk_FUN_016dd50a(uVar32,"https://json-schema.org/draft/2020-12/vocab/unevaluated",
                                  0x37);
      if (iVar27 != 0) goto switchD_01349a00_caseD_31;
      puVar13 = (uint *)0x80000002;
      break;
    case 0x3d:
      iVar27 = thunk_FUN_016dd50a(uVar32,
                                  "https://json-schema.org/draft/2020-12/vocab/format-annotation",
                                  0x3d);
      if (iVar27 != 0) goto switchD_01349a00_caseD_31;
      puVar13 = (uint *)0x80000006;
    }
    local_5c = puVar13;
LAB_01349c84:
                    /* WARNING: Could not recover jumptable at 0x01349c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    local_f0 = local_d0;
    uStack_ec = uStack_cc;
    uStack_e8 = uStack_c8;
    local_e4 = local_c4;
    (*(code *)((int)&DAT_01349c94 + (&DAT_01349c94)[(int)local_5c]))();
    return;
  }
  goto LAB_013499bc;
LAB_0134a01c:
  local_188 = local_150;
  local_184 = local_14c;
  local_180 = local_148;
  local_17c = local_144;
  local_178 = local_140;
  local_174 = uStack_13c;
  local_170 = local_138;
  local_16c = uStack_134;
  local_168 = local_130;
  local_164 = local_12c;
  local_160 = local_128;
  local_15c = uStack_124;
  local_158 = uStack_120;
  uStack_154 = uStack_11c;
  goto LAB_0134932c;
LAB_01349f48:
  uVar20 = (uint)*(char *)((int)puVar7 + local_20c);
  if (-1 < (int)uVar20) {
    uVar20 = *puVar7 & 0x80808080;
    uVar21 = LZCOUNT((*puVar7 & 0x80) << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                     (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18);
    uVar20 = (uint)*(byte *)((int)puVar7 + (uVar21 >> 3));
    local_20c = uVar21 >> 3;
  }
  bVar3 = (byte)(uVar35 >> 0x19);
  *(byte *)((int)puVar7 + local_20c) = bVar3;
  local_148 = local_148 - (uVar20 & 1);
  *(byte *)((int)puVar7 + (uVar15 & local_20c - 4) + 4) = bVar3;
  puVar7[local_20c * -10 + -10] = (uint)puVar13;
  puVar7[local_20c * -10 + -9] = uVar17;
  puVar7[local_20c * -10 + -8] = uVar14;
  local_144 = local_144 + 1;
  puVar7[local_20c * -10 + -7] = local_f0;
  puVar7[local_20c * -10 + -6] = uStack_ec;
  puVar7[local_20c * -10 + -5] = uStack_e8;
  puVar7[local_20c * -10 + -4] = local_e4;
  puVar7[local_20c * -10 + -3] = uStack_e0;
  puVar7[local_20c * -10 + -2] = uStack_dc;
  puVar7[local_20c * -10 + -1] = (uint)puStack_d8;
  goto LAB_013499bc;
LAB_0134923c:
  iVar31 = iVar27 + 0x10c;
  uVar2 = *(ushort *)(iVar27 + 0x192);
  uVar17 = 0xffffffff;
  iVar25 = (uint)uVar2 * 0xc;
  do {
    if (iVar25 == 0) {
      uVar17 = (uint)uVar2;
      goto LAB_013492cc;
    }
    uVar20 = *(uint *)(iVar31 + 8);
    uVar14 = uVar20;
    if (10 < uVar20) {
      uVar14 = 0xb;
    }
    iVar9 = FUN_016dd50a("$vocabulary",*(undefined4 *)(iVar31 + 4),uVar14);
    if (iVar9 == 0) {
      iVar9 = 0xb - uVar20;
    }
    iVar25 = iVar25 + -0xc;
    uVar17 = uVar17 + 1;
    iVar31 = iVar31 + 0xc;
  } while ((char)((0 < iVar9) - (iVar9 < 0)) == '\x01');
  if (0 < iVar9 != iVar9 < 0) {
LAB_013492cc:
    if (local_1e8 == 0) goto LAB_01349320;
    local_1e8 = local_1e8 + -1;
    iVar27 = *(int *)(iVar27 + uVar17 * 4 + 0x198);
    goto LAB_0134923c;
  }
  pcVar28 = (char *)(iVar27 + uVar17 * 0x18);
  if (*pcVar28 == '\x05') {
    FUN_0134ff4c(&local_150);
    local_10c = *(int *)(pcVar28 + 4);
    if (local_10c == 0) {
      uStack_f4 = 0;
    }
    else {
      uVar17 = *(uint *)(pcVar28 + 8);
      uStack_f4 = *(undefined4 *)(pcVar28 + 0xc);
    }
    local_114 = (uint)(local_10c != 0);
    local_100 = 0;
    local_110 = 0;
    local_108 = uVar17;
    local_104 = local_114;
    local_fc = local_10c;
    uStack_f8 = uVar17;
    goto LAB_013499bc;
  }
LAB_01349320:
  local_188 = (uint *)0x0;
LAB_0134932c:
  local_190 = 0;
  if (local_188 != (uint *)0x0) {
    *param_1 = local_188;
    param_1[1] = local_184;
    param_1[2] = local_180;
    param_1[3] = local_17c;
    param_1[4] = local_178;
    param_1[5] = local_174;
    param_1[6] = local_170;
    param_1[7] = local_16c;
    param_1[8] = local_168;
    param_1[9] = local_164;
    param_1[10] = local_160;
    param_1[0xb] = local_15c;
    param_1[0xc] = local_158;
    param_1[0xd] = uStack_154;
    if (local_1c4 != 0) {
      thunk_FUN_016d3fb4(local_1c0);
    }
    if (local_1c8 != -0x7ffffff6) {
      FUN_013482f8(&local_1c8);
    }
    return;
  }
LAB_0134a174:
  if (local_1c4 != 0) {
    thunk_FUN_016d3fb4(local_1c0);
  }
  if (local_1c8 != -0x7ffffff6) {
LAB_0134a190:
    FUN_01343b74(&local_1c8);
  }
LAB_0134a198:
  FUN_0134f994(param_1,0xff);
  return;
}

