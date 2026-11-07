// FUN_009cfb44 @ 009cfb44 size=4252 calls_out=8 calls_in=2
// strings: 

void FUN_009cfb44(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  bool bVar23;
  bool bVar24;
  uint local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (0x20 < param_2) {
LAB_009cfc10:
    uVar17 = param_2;
    do {
      if (param_5 == 0) {
        FUN_009d6994(param_1,uVar17,param_3,param_4,1);
        return;
      }
      puVar12 = param_1 + (uVar17 >> 3) * 0x10;
      puVar21 = param_1 + ((uVar17 >> 3) * 8 - (uVar17 >> 3)) * 4;
      if (uVar17 < 0x40) {
        uVar20 = puVar12[2];
        uVar4 = param_1[2];
        bVar24 = uVar4 < uVar20;
        if (((uVar4 == uVar20) &&
            (uVar7 = *puVar12 ^ (uint)((int)*puVar12 >> 0x1f) >> 1,
            uVar11 = *param_1 ^ (uint)((int)*param_1 >> 0x1f) >> 1,
            bVar24 = (int)uVar11 < (int)uVar7, uVar11 == uVar7)) &&
           (bVar24 = false,
           (int)(param_1[1] ^ (uint)((int)param_1[1] >> 0x1f) >> 1) <
           (int)(puVar12[1] ^ (uint)((int)puVar12[1] >> 0x1f) >> 1))) {
          bVar24 = true;
        }
        uVar7 = puVar21[2];
        bVar23 = uVar4 < uVar7;
        if (((uVar4 == uVar7) &&
            (uVar11 = *puVar21 ^ (uint)((int)*puVar21 >> 0x1f) >> 1,
            uVar4 = *param_1 ^ (uint)((int)*param_1 >> 0x1f) >> 1, bVar23 = (int)uVar4 < (int)uVar11
            , uVar4 == uVar11)) &&
           (bVar23 = false,
           (int)(param_1[1] ^ (uint)((int)param_1[1] >> 0x1f) >> 1) <
           (int)(puVar21[1] ^ (uint)((int)puVar21[1] >> 0x1f) >> 1))) {
          bVar23 = true;
        }
        puVar19 = param_1;
        if (bVar24 == bVar23) {
          bVar23 = uVar20 < uVar7;
          if (((uVar20 == uVar7) &&
              (uVar20 = *puVar21 ^ (uint)((int)*puVar21 >> 0x1f) >> 1,
              uVar4 = *puVar12 ^ (uint)((int)*puVar12 >> 0x1f) >> 1,
              bVar23 = (int)uVar4 < (int)uVar20, uVar4 == uVar20)) &&
             (bVar23 = false,
             (int)(puVar12[1] ^ (uint)((int)puVar12[1] >> 0x1f) >> 1) <
             (int)(puVar21[1] ^ (uint)((int)puVar21[1] >> 0x1f) >> 1))) {
            bVar23 = true;
          }
          puVar19 = puVar12;
          if (bVar24 != bVar23) {
            puVar19 = puVar21;
          }
        }
      }
      else {
        puVar19 = (uint *)FUN_009d1078(param_1);
      }
      local_38 = *puVar19;
      uStack_34 = puVar19[1];
      uStack_30 = puVar19[2];
      uStack_2c = puVar19[3];
      param_5 = param_5 + -1;
      uVar20 = (uint)((int)puVar19 - (int)param_1) >> 4;
      if (param_6 != (uint *)0x0) {
        bVar24 = puVar19[2] <= param_6[2];
        if ((param_6[2] == puVar19[2]) &&
           (uVar4 = *puVar19 ^ (uint)((int)*puVar19 >> 0x1f) >> 1,
           uVar7 = *param_6 ^ (uint)((int)*param_6 >> 0x1f) >> 1, bVar24 = (int)uVar4 <= (int)uVar7,
           uVar7 == uVar4)) {
          if ((int)(puVar19[1] ^ (uint)((int)puVar19[1] >> 0x1f) >> 1) <=
              (int)(param_6[1] ^ (uint)((int)param_6[1] >> 0x1f) >> 1)) goto LAB_009d02bc;
        }
        else if (bVar24) goto LAB_009d02bc;
      }
      if (param_4 < uVar17) goto LAB_009d0bac;
      puVar21 = param_3 + uVar17 * 4;
      param_2 = 0;
      puVar12 = param_1;
      uVar4 = uVar20;
      while( true ) {
        iVar22 = uVar4 - 3;
        if (uVar4 < 3) {
          iVar22 = 0;
        }
        if (puVar12 < param_1 + iVar22 * 4) {
          local_3c = -0x20;
          iVar5 = 0;
          iVar2 = -0x40;
          iVar15 = -0x30;
          local_40 = -0x10;
          do {
            puVar9 = (uint *)((int)puVar12 + iVar5);
            uVar7 = (uint)(puVar9[2] < puVar19[2]);
            if (((puVar9[2] == puVar19[2]) &&
                (uVar11 = *puVar19 ^ (uint)((int)*puVar19 >> 0x1f) >> 1,
                uVar16 = *puVar9 ^ (uint)((int)*puVar9 >> 0x1f) >> 1,
                uVar7 = (uint)((int)uVar16 < (int)uVar11), uVar16 == uVar11)) &&
               (uVar7 = 0,
               (int)(puVar9[1] ^ (uint)((int)puVar9[1] >> 0x1f) >> 1) <
               (int)(puVar19[1] ^ (uint)((int)puVar19[1] >> 0x1f) >> 1))) {
              uVar7 = 1;
            }
            uVar11 = puVar9[1];
            uVar16 = puVar9[2];
            uVar14 = puVar9[3];
            puVar6 = param_3;
            if (uVar7 == 0) {
              puVar6 = (uint *)((int)puVar21 + local_40);
            }
            puVar6 = puVar6 + param_2 * 4;
            *puVar6 = *puVar9;
            uVar3 = puVar9[6];
            uVar13 = puVar19[2];
            puVar6[1] = uVar11;
            puVar6[2] = uVar16;
            puVar6[3] = uVar14;
            uVar11 = (uint)(uVar3 < uVar13);
            if (((uVar3 == uVar13) &&
                (uVar14 = puVar9[4], uVar16 = *puVar19 ^ (uint)((int)*puVar19 >> 0x1f) >> 1,
                uVar14 = uVar14 ^ (uint)((int)uVar14 >> 0x1f) >> 1,
                uVar11 = (uint)((int)uVar14 < (int)uVar16), uVar14 == uVar16)) &&
               (uVar11 = 0,
               (int)(puVar9[5] ^ (uint)((int)puVar9[5] >> 0x1f) >> 1) <
               (int)(puVar19[1] ^ (uint)((int)puVar19[1] >> 0x1f) >> 1))) {
              uVar11 = 1;
            }
            uVar14 = puVar9[5];
            uVar3 = puVar9[6];
            uVar16 = puVar9[7];
            puVar6 = param_3;
            if (uVar11 == 0) {
              puVar6 = (uint *)((int)puVar21 + local_3c);
            }
            puVar6 = puVar6 + (param_2 + uVar7) * 4;
            *puVar6 = puVar9[4];
            puVar6[1] = uVar14;
            puVar6[2] = uVar3;
            puVar6[3] = uVar16;
            uVar16 = (uint)(puVar9[10] < puVar19[2]);
            if (((puVar9[10] == puVar19[2]) &&
                (uVar3 = puVar9[8], uVar14 = *puVar19 ^ (uint)((int)*puVar19 >> 0x1f) >> 1,
                uVar3 = uVar3 ^ (uint)((int)uVar3 >> 0x1f) >> 1,
                uVar16 = (uint)((int)uVar3 < (int)uVar14), uVar3 == uVar14)) &&
               (uVar16 = 0,
               (int)(puVar9[9] ^ (uint)((int)puVar9[9] >> 0x1f) >> 1) <
               (int)(puVar19[1] ^ (uint)((int)puVar19[1] >> 0x1f) >> 1))) {
              uVar16 = 1;
            }
            iVar8 = param_2 + uVar7 + uVar11;
            puVar6 = param_3;
            if (uVar16 == 0) {
              puVar6 = (uint *)((int)puVar21 + iVar15);
            }
            uVar14 = puVar9[9];
            uVar3 = puVar9[10];
            iVar10 = iVar8 + uVar16;
            uVar7 = puVar9[0xb];
            puVar6 = puVar6 + iVar8 * 4;
            *puVar6 = puVar9[8];
            uVar11 = puVar19[2];
            puVar6[3] = uVar7;
            uVar7 = puVar9[0xe];
            puVar6[1] = uVar14;
            puVar6[2] = uVar3;
            param_2 = (uint)(uVar7 < uVar11);
            if ((uVar7 == uVar11) &&
               (uVar11 = puVar9[0xc], uVar7 = *puVar19 ^ (uint)((int)*puVar19 >> 0x1f) >> 1,
               uVar11 = uVar11 ^ (uint)((int)uVar11 >> 0x1f) >> 1,
               param_2 = (uint)((int)uVar11 < (int)uVar7), uVar11 == uVar7)) {
              param_2 = (uint)((int)(puVar9[0xd] ^ (uint)((int)puVar9[0xd] >> 0x1f) >> 1) <
                              (int)(puVar19[1] ^ (uint)((int)puVar19[1] >> 0x1f) >> 1));
            }
            puVar6 = param_3;
            if (param_2 == 0) {
              puVar6 = (uint *)((int)puVar21 + iVar2);
            }
            uVar11 = puVar9[0xd];
            uVar16 = puVar9[0xe];
            iVar5 = iVar5 + 0x40;
            uVar7 = puVar9[0xf];
            iVar15 = iVar15 + -0x40;
            puVar6 = puVar6 + iVar10 * 4;
            *puVar6 = puVar9[0xc];
            iVar2 = iVar2 + -0x40;
            puVar6[1] = uVar11;
            puVar6[2] = uVar16;
            param_2 = iVar10 + param_2;
            local_40 = local_40 + -0x40;
            local_3c = local_3c + -0x40;
            puVar6[3] = uVar7;
          } while ((uint *)((int)puVar12 + iVar5) < param_1 + iVar22 * 4);
          puVar21 = (uint *)((int)puVar21 - iVar5);
          puVar12 = (uint *)((int)puVar12 + iVar5);
        }
        for (; puVar12 < param_1 + uVar4 * 4; puVar12 = puVar12 + 4) {
          uVar7 = (uint)(puVar12[2] < puVar19[2]);
          if ((puVar12[2] == puVar19[2]) &&
             (uVar11 = *puVar19 ^ (uint)((int)*puVar19 >> 0x1f) >> 1,
             uVar16 = *puVar12 ^ (uint)((int)*puVar12 >> 0x1f) >> 1,
             uVar7 = (uint)((int)uVar16 < (int)uVar11), uVar16 == uVar11)) {
            uVar7 = (uint)((int)(puVar12[1] ^ (uint)((int)puVar12[1] >> 0x1f) >> 1) <
                          (int)(puVar19[1] ^ (uint)((int)puVar19[1] >> 0x1f) >> 1));
          }
          puVar21 = puVar21 + -4;
          uVar11 = puVar12[1];
          puVar9 = puVar21;
          if (uVar7 != 0) {
            puVar9 = param_3;
          }
          uVar14 = puVar12[2];
          uVar16 = puVar12[3];
          puVar9 = puVar9 + param_2 * 4;
          *puVar9 = *puVar12;
          puVar9[1] = uVar11;
          puVar9[2] = uVar14;
          puVar9[3] = uVar16;
          param_2 = param_2 + uVar7;
        }
        if (uVar4 == uVar17) break;
        puVar21 = puVar21 + -4;
        uVar4 = puVar12[1];
        uVar11 = puVar12[2];
        uVar7 = puVar12[3];
        puVar9 = puVar21 + param_2 * 4;
        *puVar9 = *puVar12;
        puVar9[1] = uVar4;
        puVar9[2] = uVar11;
        puVar9[3] = uVar7;
        puVar12 = puVar12 + 4;
        uVar4 = uVar17;
      }
      FUN_016dd1aa(param_1,param_3,param_2 << 4);
      iVar22 = uVar17 - param_2;
      if (iVar22 != 0) {
        puVar21 = param_1 + param_2 * 4;
        puVar12 = param_3 + uVar17 * 4 + -4;
        iVar2 = iVar22;
        do {
          uVar16 = *puVar12;
          iVar2 = iVar2 + -1;
          uVar11 = puVar12[1];
          uVar7 = puVar12[2];
          uVar4 = puVar12[3];
          puVar12 = puVar12 + -4;
          *puVar21 = uVar16;
          puVar21[1] = uVar11;
          puVar21[2] = uVar7;
          puVar21[3] = uVar4;
          puVar21 = puVar21 + 4;
        } while (iVar2 != 0);
      }
      if (param_2 == 0) goto LAB_009d02bc;
      if (uVar17 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
      }
      FUN_009cfb44(param_1 + param_2 * 4,iVar22,param_3,param_4,param_5,&local_38);
      uVar17 = param_2;
      if (param_2 < 0x21) break;
    } while( true );
  }
LAB_009cfb6c:
  if (1 < param_2) {
    if (param_4 < param_2 + 0x10) {
LAB_009d0bac:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x9d0bac);
      (*pcVar1)();
    }
    uVar17 = param_2 >> 1;
    if (param_2 < 0x10) {
      puVar12 = param_3 + uVar17 * 4;
      puVar21 = param_1 + uVar17 * 4;
      if (param_2 < 8) {
        uVar20 = param_1[1];
        uVar4 = param_1[2];
        uVar7 = param_1[3];
        *param_3 = *param_1;
        param_3[1] = uVar20;
        param_3[2] = uVar4;
        param_3[3] = uVar7;
        uVar20 = puVar21[1];
        uVar4 = puVar21[2];
        uVar7 = puVar21[3];
        uVar11 = 1;
        *puVar12 = *puVar21;
        puVar12[1] = uVar20;
        puVar12[2] = uVar4;
        puVar12[3] = uVar7;
      }
      else {
        FUN_009d0c08(param_1,param_3);
        FUN_009d0c08(puVar21,puVar12);
        uVar11 = 4;
      }
    }
    else {
      puVar12 = param_3 + param_2 * 4;
      FUN_009d0c08(param_1,puVar12);
      FUN_009d0c08(param_1 + 0x10,puVar12 + 0x10);
      FUN_009d0eb8(puVar12,8,param_3);
      FUN_009d0c08(param_1 + uVar17 * 4,puVar12 + 0x20);
      FUN_009d0c08(param_1 + uVar17 * 4 + 0x10,puVar12 + 0x30);
      uVar11 = 8;
      FUN_009d0eb8(puVar12 + 0x20,8,param_3 + uVar17 * 4);
    }
    if (uVar11 < uVar17) {
      iVar15 = uVar11 * 0x10 + -0x20;
      iVar2 = uVar11 * 0x10 + -0x10;
      iVar22 = uVar11 << 4;
      uVar20 = uVar11;
      do {
        puVar12 = param_1 + uVar20 * 4;
        uVar7 = puVar12[1];
        uVar16 = puVar12[2];
        uVar4 = puVar12[3];
        puVar21 = param_3 + uVar20 * 4;
        *puVar21 = *puVar12;
        puVar21[1] = uVar7;
        puVar21[2] = uVar16;
        puVar21[3] = uVar4;
        bVar24 = puVar21[-2] <= uVar16;
        if (uVar16 == puVar21[-2]) {
          uVar14 = *puVar21;
          uVar4 = puVar21[-4] ^ (uint)((int)puVar21[-4] >> 0x1f) >> 1;
          uVar7 = uVar14 ^ (uint)((int)uVar14 >> 0x1f) >> 1;
          bVar24 = (int)uVar4 <= (int)uVar7;
          if (uVar7 != uVar4) goto LAB_009d0864;
          local_3c = puVar21[1];
          if ((int)(local_3c ^ (uint)((int)local_3c >> 0x1f) >> 1) <
              (int)(puVar21[-3] ^ (uint)((int)puVar21[-3] >> 0x1f) >> 1)) goto LAB_009d0878;
        }
        else {
LAB_009d0864:
          if (!bVar24) {
            uVar14 = *puVar21;
            local_3c = puVar21[1];
LAB_009d0878:
            puVar12 = puVar21 + -4;
            uVar4 = puVar21[3];
            *puVar21 = *puVar12;
            puVar21[1] = puVar21[-3];
            puVar21[2] = puVar21[-2];
            puVar21[3] = puVar21[-1];
            if (uVar20 != 1) {
              uVar7 = uVar14 ^ (uint)((int)uVar14 >> 0x1f) >> 1;
              iVar5 = iVar2;
              iVar8 = iVar22;
              iVar10 = iVar15;
              puVar21 = puVar12;
              do {
                puVar19 = (uint *)((int)param_3 + iVar10);
                puVar12 = (uint *)((int)param_3 + iVar5);
                uVar3 = *(uint *)((int)param_3 + iVar8 + -0x18);
                bVar24 = uVar3 <= uVar16;
                if ((uVar16 == uVar3) &&
                   (uVar3 = *puVar19 ^ (uint)((int)*puVar19 >> 0x1f) >> 1,
                   bVar24 = (int)uVar3 <= (int)uVar7, uVar7 == uVar3)) {
                  uVar3 = *(uint *)((int)param_3 + iVar8 + -0x1c);
                  if ((int)(uVar3 ^ (uint)((int)uVar3 >> 0x1f) >> 1) <=
                      (int)(local_3c ^ (uint)((int)local_3c >> 0x1f) >> 1)) {
                    puVar12 = puVar21;
                    goto LAB_009d07b4;
                  }
                }
                else if (bVar24) goto LAB_009d07b4;
                uVar3 = puVar19[1];
                uVar13 = puVar19[2];
                uVar18 = puVar19[3];
                puVar21 = puVar21 + -4;
                iVar10 = iVar10 + -0x10;
                iVar8 = iVar8 + -0x10;
                iVar5 = iVar5 + -0x10;
                *puVar12 = *puVar19;
                puVar12[1] = uVar3;
                puVar12[2] = uVar13;
                puVar12[3] = uVar18;
              } while (iVar5 != 0);
              puVar12 = param_3;
            }
LAB_009d07b4:
            *puVar12 = uVar14;
            puVar12[1] = local_3c;
            puVar12[2] = uVar16;
            puVar12[3] = uVar4;
          }
        }
        uVar20 = uVar20 + 1;
        iVar15 = iVar15 + 0x10;
        iVar22 = iVar22 + 0x10;
        iVar2 = iVar2 + 0x10;
      } while (uVar20 != uVar17);
    }
    if (uVar11 < param_2 - uVar17) {
      puVar21 = param_3 + uVar17 * 4;
      iVar22 = 0x10;
      uVar20 = uVar11;
      puVar12 = puVar21;
      do {
        puVar19 = param_1 + uVar17 * 4 + uVar20 * 4;
        uVar7 = puVar19[1];
        uVar16 = puVar19[2];
        uVar4 = puVar19[3];
        puVar9 = puVar21 + uVar20 * 4;
        *puVar9 = *puVar19;
        puVar9[1] = uVar7;
        puVar9[2] = uVar16;
        puVar9[3] = uVar4;
        bVar24 = puVar9[-2] <= uVar16;
        if (uVar16 == puVar9[-2]) {
          uVar14 = *puVar9;
          uVar4 = puVar9[-4] ^ (uint)((int)puVar9[-4] >> 0x1f) >> 1;
          uVar7 = uVar14 ^ (uint)((int)uVar14 >> 0x1f) >> 1;
          bVar24 = (int)uVar4 <= (int)uVar7;
          if (uVar7 != uVar4) goto LAB_009d0a74;
          local_44 = puVar9[1];
          if ((int)(local_44 ^ (uint)((int)local_44 >> 0x1f) >> 1) <
              (int)(puVar9[-3] ^ (uint)((int)puVar9[-3] >> 0x1f) >> 1)) goto LAB_009d0a88;
        }
        else {
LAB_009d0a74:
          if (!bVar24) {
            local_44 = puVar9[1];
            uVar14 = *puVar9;
LAB_009d0a88:
            puVar19 = puVar9 + -4;
            uVar4 = puVar9[3];
            *puVar9 = *puVar19;
            puVar9[1] = puVar9[-3];
            puVar9[2] = puVar9[-2];
            puVar9[3] = puVar9[-1];
            if (uVar20 == 1) {
LAB_009d09b0:
            }
            else {
              uVar7 = uVar14 ^ (uint)((int)uVar14 >> 0x1f) >> 1;
              puVar9 = puVar12;
              iVar2 = iVar22;
              do {
                bVar24 = puVar9[uVar11 * 4 + -6] <= uVar16;
                puVar6 = puVar9 + uVar11 * 4 + -6;
                if ((uVar16 == puVar9[uVar11 * 4 + -6]) &&
                   (uVar3 = puVar6[-2], uVar3 = uVar3 ^ (uint)((int)uVar3 >> 0x1f) >> 1,
                   bVar24 = (int)uVar3 <= (int)uVar7, uVar7 == uVar3)) {
                  if ((int)(puVar9[uVar11 * 4 + -7] ^
                           (uint)((int)puVar9[uVar11 * 4 + -7] >> 0x1f) >> 1) <=
                      (int)(local_44 ^ (uint)((int)local_44 >> 0x1f) >> 1)) goto LAB_009d09b0;
                }
                else if (bVar24) {
                  puVar19 = puVar6 + 2;
                  goto LAB_009d09b0;
                }
                uVar13 = puVar6[-1];
                iVar2 = iVar2 + 0x10;
                puVar19 = puVar19 + -4;
                uVar3 = puVar6[1];
                puVar9[uVar11 * 4 + -4] = puVar6[-2];
                puVar9[uVar11 * 4 + -3] = uVar13;
                puVar9[uVar11 * 4 + -2] = *puVar6;
                puVar9[uVar11 * 4 + -1] = uVar3;
                puVar9 = puVar9 + -4;
              } while (uVar11 * 0x10 != iVar2);
              puVar19 = puVar21;
            }
            *puVar19 = uVar14;
            puVar19[1] = local_44;
            puVar19[2] = uVar16;
            puVar19[3] = uVar4;
          }
        }
        uVar20 = uVar20 + 1;
        iVar22 = iVar22 + -0x10;
        puVar12 = puVar12 + 4;
      } while (uVar20 != param_2 - uVar17);
    }
    FUN_009d0eb8(param_3,param_2,param_1);
  }
  return;
LAB_009d02bc:
  if (param_4 < uVar17) goto LAB_009d0bac;
  puVar21 = param_3 + uVar17 * 4;
  uVar4 = 0;
  puVar12 = param_1;
  while( true ) {
    iVar22 = uVar20 - 3;
    if (uVar20 < 3) {
      iVar22 = 0;
    }
    if (puVar12 < param_1 + iVar22 * 4) {
      iVar15 = 0;
      iVar2 = -0x40;
      iVar5 = -0x20;
      iVar8 = -0x10;
      local_3c = -0x30;
      do {
        puVar9 = (uint *)((int)puVar12 + iVar15);
        uVar7 = (uint)(puVar19[2] < puVar9[2]);
        if (((puVar19[2] == puVar9[2]) &&
            (uVar11 = *puVar9 ^ (uint)((int)*puVar9 >> 0x1f) >> 1,
            uVar16 = *puVar19 ^ (uint)((int)*puVar19 >> 0x1f) >> 1,
            uVar7 = (uint)((int)uVar16 < (int)uVar11), uVar16 == uVar11)) &&
           (uVar7 = 0,
           (int)(puVar19[1] ^ (uint)((int)puVar19[1] >> 0x1f) >> 1) <
           (int)(puVar9[1] ^ (uint)((int)puVar9[1] >> 0x1f) >> 1))) {
          uVar7 = 1;
        }
        puVar6 = param_3;
        if (uVar7 != 0) {
          puVar6 = (uint *)((int)puVar21 + iVar8);
        }
        uVar14 = puVar9[1];
        uVar16 = puVar9[2];
        uVar11 = puVar9[3];
        puVar6 = puVar6 + uVar4 * 4;
        *puVar6 = *puVar9;
        puVar6[2] = uVar16;
        puVar6[3] = uVar11;
        uVar16 = puVar19[2];
        uVar11 = puVar9[6];
        puVar6[1] = uVar14;
        uVar14 = (uint)(uVar16 < uVar11);
        if (((uVar16 == uVar11) &&
            (uVar11 = puVar9[4], uVar11 = uVar11 ^ (uint)((int)uVar11 >> 0x1f) >> 1,
            uVar16 = *puVar19 ^ (uint)((int)*puVar19 >> 0x1f) >> 1,
            uVar14 = (uint)((int)uVar16 < (int)uVar11), uVar16 == uVar11)) &&
           (uVar14 = 0,
           (int)(puVar19[1] ^ (uint)((int)puVar19[1] >> 0x1f) >> 1) <
           (int)(puVar9[5] ^ (uint)((int)puVar9[5] >> 0x1f) >> 1))) {
          uVar14 = 1;
        }
        iVar10 = uVar4 + (uVar7 ^ 1);
        puVar6 = param_3;
        if (uVar14 != 0) {
          puVar6 = (uint *)((int)puVar21 + iVar5);
        }
        uVar4 = puVar9[5];
        uVar7 = puVar9[6];
        uVar11 = puVar9[7];
        puVar6 = puVar6 + iVar10 * 4;
        *puVar6 = puVar9[4];
        puVar6[1] = uVar4;
        puVar6[2] = uVar7;
        puVar6[3] = uVar11;
        uVar4 = (uint)(puVar19[2] < puVar9[10]);
        if (((puVar19[2] == puVar9[10]) &&
            (uVar7 = puVar9[8], uVar7 = uVar7 ^ (uint)((int)uVar7 >> 0x1f) >> 1,
            uVar11 = *puVar19 ^ (uint)((int)*puVar19 >> 0x1f) >> 1,
            uVar4 = (uint)((int)uVar11 < (int)uVar7), uVar11 == uVar7)) &&
           (uVar4 = 0,
           (int)(puVar19[1] ^ (uint)((int)puVar19[1] >> 0x1f) >> 1) <
           (int)(puVar9[9] ^ (uint)((int)puVar9[9] >> 0x1f) >> 1))) {
          uVar4 = 1;
        }
        iVar10 = iVar10 + (uVar14 ^ 1);
        uVar7 = puVar9[9];
        uVar11 = puVar9[10];
        uVar16 = puVar9[0xb];
        puVar6 = param_3;
        if (uVar4 != 0) {
          puVar6 = (uint *)((int)puVar21 + local_3c);
        }
        puVar6 = puVar6 + iVar10 * 4;
        *puVar6 = puVar9[8];
        iVar10 = iVar10 + (uVar4 ^ 1);
        puVar6[1] = uVar7;
        puVar6[2] = uVar11;
        puVar6[3] = uVar16;
        uVar4 = (uint)(puVar19[2] < puVar9[0xe]);
        if ((puVar19[2] == puVar9[0xe]) &&
           (uVar7 = puVar9[0xc], uVar7 = uVar7 ^ (uint)((int)uVar7 >> 0x1f) >> 1,
           uVar11 = *puVar19 ^ (uint)((int)*puVar19 >> 0x1f) >> 1,
           uVar4 = (uint)((int)uVar11 < (int)uVar7), uVar11 == uVar7)) {
          uVar4 = (uint)((int)(puVar19[1] ^ (uint)((int)puVar19[1] >> 0x1f) >> 1) <
                        (int)(puVar9[0xd] ^ (uint)((int)puVar9[0xd] >> 0x1f) >> 1));
        }
        puVar6 = param_3;
        if (uVar4 != 0) {
          puVar6 = (uint *)((int)puVar21 + iVar2);
        }
        uVar7 = puVar9[0xd];
        uVar11 = puVar9[0xe];
        uVar16 = puVar9[0xf];
        iVar15 = iVar15 + 0x40;
        puVar6 = puVar6 + iVar10 * 4;
        *puVar6 = puVar9[0xc];
        puVar6[1] = uVar7;
        puVar6[2] = uVar11;
        puVar6[3] = uVar16;
        uVar4 = iVar10 + (uVar4 ^ 1);
        iVar8 = iVar8 + -0x40;
        iVar5 = iVar5 + -0x40;
        iVar2 = iVar2 + -0x40;
        local_3c = local_3c + -0x40;
      } while ((uint *)((int)puVar12 + iVar15) < param_1 + iVar22 * 4);
      puVar21 = (uint *)((int)puVar21 - iVar15);
      puVar12 = (uint *)((int)puVar12 + iVar15);
    }
    for (; puVar12 < param_1 + uVar20 * 4; puVar12 = puVar12 + 4) {
      uVar7 = (uint)(puVar19[2] < puVar12[2]);
      if ((puVar19[2] == puVar12[2]) &&
         (uVar11 = *puVar12 ^ (uint)((int)*puVar12 >> 0x1f) >> 1,
         uVar16 = *puVar19 ^ (uint)((int)*puVar19 >> 0x1f) >> 1,
         uVar7 = (uint)((int)uVar16 < (int)uVar11), uVar16 == uVar11)) {
        uVar7 = (uint)((int)(puVar19[1] ^ (uint)((int)puVar19[1] >> 0x1f) >> 1) <
                      (int)(puVar12[1] ^ (uint)((int)puVar12[1] >> 0x1f) >> 1));
      }
      puVar21 = puVar21 + -4;
      uVar11 = puVar12[1];
      puVar9 = param_3;
      if (uVar7 != 0) {
        puVar9 = puVar21;
      }
      uVar14 = puVar12[2];
      uVar16 = puVar12[3];
      puVar9 = puVar9 + uVar4 * 4;
      *puVar9 = *puVar12;
      puVar9[1] = uVar11;
      puVar9[2] = uVar14;
      puVar9[3] = uVar16;
      uVar4 = uVar4 + (uVar7 ^ 1);
    }
    if (uVar20 == uVar17) break;
    uVar20 = puVar12[1];
    uVar7 = puVar12[2];
    uVar11 = puVar12[3];
    puVar21 = puVar21 + -4;
    puVar9 = param_3 + uVar4 * 4;
    *puVar9 = *puVar12;
    uVar4 = uVar4 + 1;
    puVar9[1] = uVar20;
    puVar9[2] = uVar7;
    puVar9[3] = uVar11;
    puVar12 = puVar12 + 4;
    uVar20 = uVar17;
  }
  FUN_016dd1aa(param_1,param_3,uVar4 << 4);
  param_2 = uVar17 - uVar4;
  if (param_2 == 0) {
    return;
  }
  param_1 = param_1 + uVar4 * 4;
  puVar21 = param_3 + uVar17 * 4 + -4;
  uVar20 = param_2;
  puVar12 = param_1;
  do {
    uVar7 = *puVar21;
    uVar14 = puVar21[1];
    uVar20 = uVar20 - 1;
    uVar16 = puVar21[2];
    uVar11 = puVar21[3];
    puVar21 = puVar21 + -4;
    *puVar12 = uVar7;
    puVar12[1] = uVar14;
    puVar12[2] = uVar16;
    puVar12[3] = uVar11;
    puVar12 = puVar12 + 4;
  } while (uVar20 != 0);
  if (uVar17 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar4,uVar17,uVar17,&DAT_018af348);
  }
  param_6 = (uint *)0x0;
  if (param_2 < 0x21) goto LAB_009cfb6c;
  goto LAB_009cfc10;
}

