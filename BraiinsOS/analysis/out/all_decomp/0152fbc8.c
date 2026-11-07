// FUN_0152fbc8 @ 0152fbc8 size=9384 calls_out=4 calls_in=2
// strings: 

void FUN_0152fbc8(uint *param_1,uint param_2,uint *param_3,uint *param_4)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint *puVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint *puVar39;
  uint *puVar40;
  uint *puVar41;
  int iVar42;
  int iVar43;
  uint uVar44;
  uint *puVar45;
  uint *puVar46;
  uint *puVar47;
  int iVar48;
  int iVar49;
  uint *puVar50;
  uint *puVar51;
  uint uVar52;
  uint uVar53;
  uint *puVar54;
  uint *puVar55;
  uint uVar56;
  bool bVar57;
  bool bVar58;
  bool bVar59;
  uint *local_130;
  uint **local_12c;
  uint local_128 [65];
  
  if (0x20 < param_2) {
LAB_01531a30:
    do {
      if (param_4 == (uint *)0x0) {
        uVar56 = param_2 + (param_2 >> 1);
        do {
          uVar56 = uVar56 - 1;
          if (uVar56 < param_2) {
            uVar29 = 0;
            puVar17 = param_1 + uVar56 * 2;
            uVar18 = *param_1;
            uVar52 = param_1[1];
            uVar27 = puVar17[1];
            *param_1 = *puVar17;
            param_1[1] = uVar27;
            *puVar17 = uVar18;
            puVar17[1] = uVar52;
          }
          else {
            uVar29 = uVar56 - param_2;
          }
          uVar18 = uVar29 << 1 | 1;
          uVar27 = uVar56;
          if (param_2 < uVar56) {
            uVar27 = param_2;
          }
          if (uVar18 < uVar27) {
            do {
              uVar52 = uVar29 * 2 + 2;
              if (uVar52 < uVar27) {
                uVar34 = param_1[uVar52 * 2];
                uVar2 = param_1[uVar18 * 2];
                bVar57 = uVar34 <= uVar2;
                if (uVar2 == uVar34) {
                  bVar57 = (param_1 + uVar52 * 2)[1] <= (param_1 + uVar18 * 2)[1];
                }
                uVar52 = uVar18 + !bVar57;
              }
              else {
                uVar52 = uVar18;
              }
              puVar17 = param_1 + uVar52 * 2;
              puVar15 = param_1 + uVar29 * 2;
              bVar57 = *puVar17 <= *puVar15;
              if (*puVar15 == *puVar17) {
                bVar57 = puVar17[1] <= puVar15[1];
              }
              if (bVar57) break;
              uVar29 = *puVar15;
              uVar2 = *puVar17;
              uVar34 = puVar17[1];
              puVar17[1] = puVar15[1];
              *puVar17 = uVar29;
              uVar18 = uVar52 << 1 | 1;
              *puVar15 = uVar2;
              puVar15[1] = uVar34;
              uVar29 = uVar52;
            } while (uVar18 < uVar27);
          }
          if (uVar56 == 0) {
            return;
          }
        } while( true );
      }
      puVar17 = param_1 + (param_2 >> 3) * 8;
      puVar15 = param_1 + ((param_2 >> 3) * 8 - (param_2 >> 3)) * 2;
      if (param_2 < 0x40) {
        uVar29 = *puVar17;
        uVar56 = *param_1;
        bVar57 = uVar29 <= uVar56;
        if (uVar56 == uVar29) {
          bVar57 = puVar17[1] <= param_1[1];
        }
        uVar27 = *puVar15;
        bVar59 = uVar27 <= uVar56;
        if (uVar56 == uVar27) {
          bVar59 = puVar15[1] <= param_1[1];
        }
        puVar16 = param_1;
        if (!bVar57 == !bVar59) {
          bVar59 = uVar27 <= uVar29;
          if (uVar29 == uVar27) {
            bVar59 = puVar15[1] <= puVar17[1];
          }
          puVar16 = puVar17;
          if (!bVar57 != !bVar59) {
            puVar16 = puVar15;
          }
        }
      }
      else {
        puVar16 = (uint *)FUN_01532070(param_1);
      }
      puVar17 = param_1 + 2;
      param_4 = (uint *)((int)param_4 + -1);
      local_12c = (uint **)param_4;
      if (param_3 == (uint *)0x0) {
LAB_01531b34:
        uVar56 = *param_1;
        uVar29 = param_1[1];
        puVar16 = (uint *)((int)param_1 + ((int)puVar16 - (int)param_1));
        puVar15 = param_1 + 4;
        uVar27 = puVar16[1];
        *param_1 = *puVar16;
        param_1[1] = uVar27;
        *puVar16 = uVar56;
        puVar16[1] = uVar29;
        local_128[1] = param_1[3];
        puVar16 = param_1 + param_2 * 2;
        uVar27 = *param_1;
        uVar29 = param_1[1];
        uVar56 = 0;
        local_128[0] = param_1[2];
        if (puVar15 < puVar16 + -2) {
          do {
            puVar8 = puVar15;
            uVar52 = *puVar8;
            uVar2 = puVar8[1];
            puVar15 = puVar17 + uVar56 * 2;
            uVar18 = *puVar15;
            puVar8[-1] = puVar15[1];
            puVar8[-2] = uVar18;
            *puVar15 = uVar52;
            puVar15[1] = uVar2;
            uVar18 = puVar8[3];
            bVar57 = uVar27 <= uVar52;
            if (uVar52 == uVar27) {
              bVar57 = uVar29 <= uVar2;
            }
            puVar14 = puVar17 + (uVar56 + !bVar57) * 2;
            uVar52 = *puVar14;
            puVar8[1] = puVar14[1];
            uVar2 = puVar8[2];
            puVar15 = puVar8 + 4;
            *puVar8 = uVar52;
            *puVar14 = uVar2;
            puVar14[1] = uVar18;
            bVar59 = uVar27 <= uVar2;
            if (uVar2 == uVar27) {
              bVar59 = uVar29 <= uVar18;
            }
            uVar56 = uVar56 + !bVar57 + (uint)!bVar59;
          } while (puVar15 < puVar16 + -2);
          puVar8 = puVar8 + 2;
        }
        else {
          puVar8 = puVar17;
        }
        do {
          puVar14 = puVar15;
          if (puVar15 == puVar16) {
            puVar14 = local_128;
          }
          bVar57 = uVar27 <= *puVar14;
          if (*puVar14 == uVar27) {
            bVar57 = uVar29 <= puVar14[1];
          }
          puVar50 = puVar17 + uVar56 * 2;
          uVar56 = uVar56 + !bVar57;
          bVar57 = puVar15 != puVar16;
          uVar18 = puVar50[1];
          *puVar8 = *puVar50;
          puVar8[1] = uVar18;
          uVar18 = puVar14[1];
          *puVar50 = *puVar14;
          puVar50[1] = uVar18;
          puVar8 = puVar15;
          puVar15 = puVar15 + 2;
        } while (bVar57);
        if (param_2 <= uVar56) goto LAB_01531f4c;
        uVar27 = *param_1;
        uVar18 = param_1[1];
        puVar17 = param_1 + uVar56 * 2;
        uVar29 = puVar17[1];
        *param_1 = *puVar17;
        param_1[1] = uVar29;
        *puVar17 = uVar27;
        puVar17[1] = uVar18;
        FUN_0152fbc8(param_1,uVar56,param_3,param_4);
        param_2 = param_2 + ~uVar56;
        param_1 = puVar17 + 2;
        param_3 = puVar17;
        if (param_2 < 0x21) break;
        goto LAB_01531a30;
      }
      puVar15 = (uint *)((int)param_1 + ((int)puVar16 - (int)param_1));
      bVar57 = *puVar15 <= *param_3;
      if (*param_3 == *puVar15) {
        bVar57 = puVar15[1] <= param_3[1];
      }
      if (!bVar57) goto LAB_01531b34;
      uVar56 = *param_1;
      uVar29 = param_1[1];
      puVar16 = param_1 + 4;
      uVar18 = 0;
      uVar27 = puVar15[1];
      *param_1 = *puVar15;
      param_1[1] = uVar27;
      *puVar15 = uVar56;
      puVar15[1] = uVar29;
      local_128[1] = param_1[3];
      puVar15 = param_1 + param_2 * 2;
      uVar29 = *param_1;
      uVar56 = param_1[1];
      local_128[0] = param_1[2];
      if (puVar16 < puVar15 + -2) {
        do {
          puVar8 = puVar16;
          uVar52 = *puVar8;
          uVar2 = puVar8[1];
          puVar16 = puVar17 + uVar18 * 2;
          uVar27 = *puVar16;
          puVar8[-1] = puVar16[1];
          puVar8[-2] = uVar27;
          *puVar16 = uVar52;
          puVar16[1] = uVar2;
          uVar27 = puVar8[3];
          bVar57 = uVar29 < uVar52;
          if (uVar29 == uVar52) {
            bVar57 = uVar56 < uVar2;
          }
          puVar14 = puVar17 + (uVar18 + !bVar57) * 2;
          uVar52 = *puVar14;
          puVar8[1] = puVar14[1];
          uVar2 = puVar8[2];
          puVar16 = puVar8 + 4;
          *puVar8 = uVar52;
          *puVar14 = uVar2;
          puVar14[1] = uVar27;
          bVar59 = uVar29 < uVar2;
          if (uVar29 == uVar2) {
            bVar59 = uVar56 < uVar27;
          }
          uVar18 = uVar18 + !bVar57 + (uint)!bVar59;
        } while (puVar16 < puVar15 + -2);
        puVar8 = puVar8 + 2;
      }
      else {
        puVar8 = puVar17;
      }
      do {
        puVar14 = puVar16;
        if (puVar16 == puVar15) {
          puVar14 = local_128;
        }
        bVar57 = uVar29 < *puVar14;
        if (uVar29 == *puVar14) {
          bVar57 = uVar56 < puVar14[1];
        }
        puVar50 = puVar17 + uVar18 * 2;
        uVar18 = uVar18 + !bVar57;
        bVar57 = puVar16 != puVar15;
        uVar27 = puVar50[1];
        *puVar8 = *puVar50;
        puVar8[1] = uVar27;
        uVar27 = puVar14[1];
        *puVar50 = *puVar14;
        puVar50[1] = uVar27;
        puVar8 = puVar16;
        puVar16 = puVar16 + 2;
      } while (bVar57);
      if (param_2 <= uVar18) goto LAB_01531f4c;
      param_3 = (uint *)0x0;
      uVar27 = *param_1;
      puVar17 = param_1 + uVar18 * 2;
      uVar29 = param_1[1];
      uVar56 = puVar17[1];
      *param_1 = *puVar17;
      param_1[1] = uVar56;
      *puVar17 = uVar27;
      puVar17[1] = uVar29;
      param_2 = param_2 - (uVar18 + 1);
      param_1 = param_1 + (uVar18 + 1) * 2;
    } while (0x20 < param_2);
  }
  uVar56 = param_2 >> 1;
  if (uVar56 != 0) {
    uVar29 = uVar56;
    if (param_2 < 0x12) {
      uVar29 = param_2;
    }
    puVar15 = param_1 + uVar56 * 2;
    puVar17 = param_1;
    do {
      puVar16 = puVar17 + 2;
      if (uVar29 < 0xd) {
        uVar27 = 1;
        if (8 < uVar29) {
          puVar50 = puVar17 + 6;
          puVar54 = (uint *)puVar17[2];
          puVar8 = puVar17 + 0xe;
          puVar21 = (uint *)*puVar17;
          puVar14 = (uint *)puVar17[6];
          bVar57 = puVar21 <= puVar14;
          if (puVar14 == puVar21) {
            bVar57 = puVar17[1] <= puVar17[7];
          }
          if (!bVar57) {
            puVar14 = puVar21;
          }
          puVar45 = (uint *)puVar17[0xe];
          puVar22 = puVar17;
          puVar21 = puVar50;
          if (!bVar57) {
            puVar22 = puVar50;
            puVar21 = puVar17;
          }
          bVar57 = puVar54 <= puVar45;
          if (puVar45 == puVar54) {
            bVar57 = puVar17[3] <= puVar17[0xf];
          }
          puVar31 = (uint *)*puVar22;
          uVar27 = puVar22[1];
          puVar22 = puVar16;
          if (!bVar57) {
            puVar45 = puVar54;
            puVar22 = puVar8;
          }
          puVar54 = puVar17 + 4;
          uVar18 = puVar21[1];
          *puVar17 = (uint)puVar31;
          puVar17[1] = uVar27;
          puVar21 = puVar8;
          if (!bVar57) {
            puVar21 = puVar16;
          }
          uVar52 = *puVar22;
          uVar2 = puVar22[1];
          puVar17[6] = (uint)puVar14;
          puVar17[7] = uVar18;
          uVar34 = puVar21[1];
          puVar13 = puVar17 + 10;
          *puVar16 = uVar52;
          puVar17[3] = uVar2;
          puVar22 = (uint *)puVar17[4];
          puVar21 = (uint *)puVar17[10];
          puVar17[0xf] = uVar34;
          puVar17[0xe] = (uint)puVar45;
          bVar57 = puVar22 <= puVar21;
          if (puVar21 == puVar22) {
            bVar57 = puVar17[5] <= puVar17[0xb];
          }
          puVar55 = puVar13;
          puVar39 = puVar54;
          if (!bVar57) {
            puVar21 = puVar22;
            puVar55 = puVar54;
            puVar39 = puVar13;
          }
          puVar51 = (uint *)*puVar39;
          uVar52 = puVar39[1];
          uVar2 = puVar55[1];
          puVar39 = (uint *)puVar17[8];
          puVar55 = (uint *)puVar17[0x10];
          puVar17[10] = (uint)puVar21;
          puVar17[0xb] = uVar2;
          local_12c = (uint **)(puVar17 + 8);
          puVar22 = puVar17 + 0x10;
          bVar57 = puVar39 <= puVar55;
          if (puVar55 == puVar39) {
            bVar57 = puVar17[9] <= puVar17[0x11];
          }
          puVar7 = puVar22;
          puVar40 = (uint *)local_12c;
          if (!bVar57) {
            puVar55 = puVar39;
            puVar7 = (uint *)local_12c;
            puVar40 = puVar22;
          }
          puVar17[5] = uVar52;
          puVar17[4] = (uint)puVar51;
          bVar57 = puVar31 <= puVar45;
          if (puVar45 == puVar31) {
            bVar57 = uVar27 <= uVar34;
          }
          local_130 = (uint *)*puVar40;
          uVar27 = puVar40[1];
          puVar39 = puVar17;
          if (!bVar57) {
            puVar39 = puVar8;
          }
          uVar32 = puVar7[1];
          puVar7 = (uint *)*puVar39;
          uVar34 = puVar39[1];
          puVar39 = puVar8;
          if (!bVar57) {
            puVar39 = puVar17;
          }
          puVar17[8] = (uint)local_130;
          puVar17[9] = uVar27;
          if (!bVar57) {
            puVar45 = puVar31;
          }
          puVar17[0x11] = uVar32;
          puVar17[0x10] = (uint)puVar55;
          uVar3 = puVar39[1];
          puVar17[0xf] = uVar3;
          *puVar17 = (uint)puVar7;
          puVar17[1] = uVar34;
          puVar17[0xe] = (uint)puVar45;
          bVar57 = puVar51 <= local_130;
          if (local_130 == puVar51) {
            bVar57 = uVar52 <= uVar27;
          }
          puVar39 = (uint *)local_12c;
          puVar31 = puVar51;
          if (!bVar57) {
            puVar39 = puVar54;
            puVar31 = local_130;
            local_130 = puVar51;
            uVar52 = uVar27;
          }
          uVar27 = puVar39[1];
          bVar57 = puVar14 <= puVar55;
          if (puVar55 == puVar14) {
            bVar57 = uVar18 <= uVar32;
          }
          puVar17[8] = (uint)local_130;
          if (!bVar57) {
            puVar55 = puVar14;
          }
          puVar17[5] = uVar52;
          puVar39 = puVar22;
          puVar14 = puVar50;
          if (!bVar57) {
            puVar39 = puVar50;
            puVar14 = puVar22;
          }
          puVar17[4] = (uint)puVar31;
          puVar17[9] = uVar27;
          puVar51 = puVar17 + 0xc;
          uVar32 = puVar14[1];
          uVar18 = puVar39[1];
          puVar14 = (uint *)*puVar14;
          puVar17[0x11] = uVar18;
          puVar39 = (uint *)puVar17[0xc];
          puVar17[7] = uVar32;
          puVar17[0x10] = (uint)puVar55;
          puVar17[6] = (uint)puVar14;
          bVar57 = puVar21 <= puVar39;
          if (puVar39 == puVar21) {
            bVar57 = uVar2 <= puVar17[0xd];
          }
          if (bVar57) {
            puVar40 = puVar13;
            puVar21 = puVar39;
          }
          else {
            puVar40 = puVar51;
          }
          uVar2 = puVar40[1];
          puVar40 = (uint *)*puVar40;
          puVar39 = puVar51;
          if (!bVar57) {
            puVar39 = puVar13;
          }
          uVar10 = puVar39[1];
          puVar17[0xd] = uVar10;
          puVar17[10] = (uint)puVar40;
          puVar17[0xb] = uVar2;
          puVar17[0xc] = (uint)puVar21;
          bVar57 = puVar7 <= puVar31;
          if (puVar31 == puVar7) {
            bVar57 = uVar34 <= uVar52;
          }
          puVar47 = puVar7;
          puVar39 = puVar54;
          if (!bVar57) {
            puVar47 = puVar31;
            puVar39 = puVar17;
          }
          uVar28 = puVar39[1];
          if (!bVar57) {
            uVar34 = uVar52;
            puVar31 = puVar7;
          }
          puVar39 = (uint *)puVar17[2];
          *puVar17 = (uint)puVar47;
          bVar57 = puVar14 <= puVar39 && puVar39 != puVar14;
          if (puVar39 == puVar14) {
            bVar57 = uVar32 < puVar17[3];
          }
          puVar7 = puVar50;
          if (bVar57) {
            puVar7 = puVar16;
          }
          puVar17[5] = uVar28;
          puVar47 = (uint *)*puVar16;
          if (bVar57) {
            puVar47 = puVar14;
          }
          puVar17[1] = uVar34;
          if (bVar57) {
            puVar14 = puVar39;
          }
          puVar17[4] = (uint)puVar31;
          uVar34 = puVar7[1];
          uVar52 = puVar17[3];
          if (bVar57) {
            uVar52 = uVar32;
          }
          puVar17[6] = (uint)puVar14;
          puVar17[7] = uVar34;
          bVar57 = puVar40 <= local_130 && local_130 != puVar40;
          if (local_130 == puVar40) {
            bVar57 = uVar2 < uVar27;
          }
          bVar57 = !bVar57;
          *puVar16 = (uint)puVar47;
          puVar17[3] = uVar52;
          puVar39 = puVar13;
          if (!bVar57) {
            puVar39 = (uint *)local_12c;
          }
          uVar27 = puVar39[1];
          if (bVar57) {
            local_130 = puVar40;
          }
          puVar17[10] = (uint)local_130;
          puVar39 = (uint *)puVar17[8];
          if (!bVar57) {
            puVar39 = puVar40;
          }
          puVar17[0xb] = uVar27;
          uVar32 = puVar17[9];
          if (!bVar57) {
            uVar32 = uVar2;
          }
          bVar57 = puVar45 <= puVar55;
          if (puVar55 == puVar45) {
            bVar57 = uVar3 <= uVar18;
          }
          puVar17[8] = (uint)puVar39;
          puVar40 = puVar22;
          puVar7 = puVar8;
          if (!bVar57) {
            puVar40 = puVar8;
            puVar7 = puVar22;
          }
          puVar17[9] = uVar32;
          puVar23 = (uint *)*puVar7;
          uVar18 = puVar7[1];
          if (!bVar57) {
            puVar55 = puVar45;
          }
          uVar2 = puVar40[1];
          puVar17[0x10] = (uint)puVar55;
          puVar17[0x11] = uVar2;
          bVar57 = puVar47 <= puVar39;
          if (puVar39 == puVar47) {
            bVar57 = uVar52 <= uVar32;
          }
          puVar17[0xe] = (uint)puVar23;
          puVar17[0xf] = uVar18;
          bVar59 = puVar14 <= puVar21;
          if (puVar21 == puVar14) {
            bVar59 = uVar34 <= uVar10;
          }
          if (bVar59) {
            puVar7 = puVar51;
            puVar45 = puVar50;
            puVar14 = puVar21;
          }
          else {
            puVar7 = puVar50;
            puVar45 = puVar51;
          }
          uVar34 = puVar45[1];
          puVar21 = puVar47;
          if (!bVar57) {
            puVar21 = puVar39;
          }
          puVar45 = (uint *)*puVar45;
          if (bVar57) {
            puVar40 = (uint *)local_12c;
            puVar47 = puVar39;
            uVar32 = uVar52;
          }
          else {
            puVar40 = puVar16;
          }
          uVar52 = puVar40[1];
          puVar17[8] = (uint)puVar47;
          puVar17[3] = uVar32;
          bVar57 = puVar23 <= local_130 && local_130 != puVar23;
          if (local_130 == puVar23) {
            bVar57 = uVar18 < uVar27;
          }
          if (!bVar57) {
            local_130 = puVar23;
          }
          puVar17[9] = uVar52;
          puVar40 = (uint *)puVar17[10];
          uVar27 = puVar17[0xb];
          puVar39 = puVar8;
          if (bVar57) {
            puVar40 = puVar23;
            uVar27 = uVar18;
            puVar39 = puVar13;
          }
          bVar57 = puVar45 <= puVar40;
          if (puVar40 == puVar45) {
            bVar57 = uVar34 <= uVar27;
          }
          uVar18 = uVar34;
          puVar23 = puVar45;
          if (!bVar57) {
            uVar18 = uVar27;
            puVar23 = puVar40;
          }
          bVar59 = puVar31 <= puVar47;
          if (puVar47 == puVar31) {
            bVar59 = uVar28 <= uVar52;
          }
          if (bVar59) {
            puVar24 = (uint *)local_12c;
            puVar31 = puVar47;
          }
          else {
            puVar24 = puVar54;
          }
          puVar41 = puVar13;
          puVar47 = puVar40;
          if (!bVar57) {
            puVar41 = puVar50;
            puVar47 = puVar45;
          }
          puVar46 = puVar54;
          if (!bVar59) {
            puVar46 = (uint *)local_12c;
          }
          *puVar16 = (uint)puVar21;
          uVar52 = puVar7[1];
          puVar17[0xd] = uVar52;
          puVar17[7] = uVar34;
          puVar17[0xc] = (uint)puVar14;
          puVar17[6] = (uint)puVar45;
          uVar34 = puVar39[1];
          puVar17[0xf] = uVar34;
          puVar17[0xe] = (uint)local_130;
          puVar17[10] = (uint)puVar40;
          puVar17[0xb] = uVar27;
          puVar45 = (uint *)*puVar17;
          bVar57 = puVar21 <= puVar45 && puVar45 != puVar21;
          if (puVar45 == puVar21) {
            bVar57 = uVar32 < puVar17[1];
          }
          puVar7 = puVar21;
          puVar39 = puVar16;
          if (bVar57) {
            puVar7 = puVar45;
            puVar45 = puVar21;
            puVar39 = puVar17;
          }
          uVar27 = puVar39[1];
          if (!bVar57) {
            uVar32 = puVar17[1];
          }
          *puVar17 = (uint)puVar45;
          puVar17[1] = uVar32;
          puVar17[2] = (uint)puVar7;
          puVar17[3] = uVar27;
          uVar32 = puVar46[1];
          puVar46 = (uint *)*puVar46;
          bVar57 = puVar46 <= puVar23;
          if (puVar23 == puVar46) {
            bVar57 = uVar32 <= uVar18;
          }
          puVar39 = puVar46;
          uVar3 = uVar32;
          puVar21 = puVar50;
          puVar45 = puVar23;
          if (!bVar57) {
            puVar39 = puVar23;
            uVar3 = uVar18;
            puVar21 = puVar54;
            puVar45 = puVar46;
          }
          bVar57 = puVar39 <= puVar7 && puVar7 != puVar39;
          if (puVar7 == puVar39) {
            bVar57 = uVar3 < uVar27;
          }
          bVar59 = puVar14 <= puVar55;
          if (puVar55 == puVar14) {
            bVar59 = uVar52 <= uVar2;
          }
          if (bVar59) {
            puVar14 = puVar55;
          }
          uVar52 = puVar24[1];
          puVar17[4] = (uint)puVar46;
          puVar17[5] = uVar32;
          puVar17[8] = (uint)puVar31;
          puVar17[9] = uVar52;
          uVar27 = puVar41[1];
          puVar17[0xb] = uVar27;
          if (bVar59) {
            puVar55 = puVar51;
          }
          else {
            puVar55 = puVar22;
            puVar22 = puVar51;
          }
          puVar17[7] = uVar18;
          puVar17[6] = (uint)puVar23;
          puVar17[10] = (uint)puVar47;
          uVar18 = puVar22[1];
          puVar22 = (uint *)*puVar55;
          uVar2 = puVar55[1];
          puVar17[0x10] = (uint)puVar14;
          puVar17[0x11] = uVar18;
          puVar17[0xc] = (uint)puVar22;
          puVar17[0xd] = uVar2;
          bVar59 = puVar31 <= puVar47;
          if (puVar47 == puVar31) {
            bVar59 = uVar52 <= uVar27;
          }
          if (!bVar59) {
            puVar47 = puVar31;
          }
          uVar27 = puVar21[1];
          puVar17[5] = uVar3;
          puVar17[6] = (uint)puVar45;
          puVar17[7] = uVar27;
          puVar17[4] = (uint)puVar39;
          puVar14 = puVar13;
          if (!bVar59) {
            puVar14 = (uint *)local_12c;
          }
          uVar18 = puVar14[1];
          puVar14 = (uint *)local_12c;
          if (!bVar59) {
            puVar14 = puVar13;
          }
          puVar21 = (uint *)*puVar14;
          uVar52 = puVar14[1];
          puVar17[0xb] = uVar18;
          bVar59 = puVar22 <= local_130;
          if (local_130 == puVar22) {
            bVar59 = uVar2 <= uVar34;
          }
          puVar17[9] = uVar52;
          puVar17[8] = (uint)puVar21;
          puVar14 = local_130;
          if (!bVar59) {
            puVar8 = puVar51;
            puVar14 = puVar22;
          }
          puVar17[10] = (uint)puVar47;
          uVar34 = puVar8[1];
          puVar8 = (uint *)puVar17[0xe];
          if (bVar59) {
            puVar8 = puVar22;
          }
          uVar32 = puVar17[0xf];
          if (bVar59) {
            uVar32 = uVar2;
          }
          puVar17[0xe] = (uint)puVar14;
          bVar57 = !bVar57;
          if (!bVar57) {
            puVar54 = puVar16;
          }
          puVar17[0xf] = uVar34;
          if (bVar57) {
            puVar7 = puVar39;
          }
          puVar17[0xd] = uVar32;
          puVar17[0xc] = (uint)puVar8;
          uVar2 = puVar54[1];
          puVar17[4] = (uint)puVar7;
          puVar17[5] = uVar2;
          puVar14 = (uint *)*puVar16;
          uVar2 = puVar17[3];
          if (!bVar57) {
            puVar14 = puVar39;
            uVar2 = uVar3;
          }
          *puVar16 = (uint)puVar14;
          puVar17[3] = uVar2;
          bVar57 = puVar21 <= puVar45 && puVar45 != puVar21;
          if (puVar45 == puVar21) {
            bVar57 = uVar52 < uVar27;
          }
          puVar14 = (uint *)local_12c;
          uVar27 = puVar17[7];
          puVar16 = (uint *)puVar17[6];
          if (bVar57) {
            puVar14 = puVar50;
            uVar27 = uVar52;
            puVar16 = puVar21;
          }
          puVar17[9] = puVar14[1];
          if (!bVar57) {
            puVar45 = puVar21;
          }
          puVar17[6] = (uint)puVar16;
          puVar17[7] = uVar27;
          puVar17[8] = (uint)puVar45;
          bVar57 = puVar8 <= puVar47 && puVar47 != puVar8;
          if (puVar47 == puVar8) {
            bVar57 = uVar32 < uVar18;
          }
          puVar14 = puVar8;
          puVar16 = (uint *)puVar17[10];
          if (bVar57) {
            puVar14 = puVar47;
            puVar51 = puVar13;
            puVar16 = puVar8;
          }
          uVar52 = puVar51[1];
          uVar18 = puVar17[0xb];
          if (bVar57) {
            uVar18 = uVar32;
          }
          puVar17[0xc] = (uint)puVar14;
          uVar27 = 9;
          puVar17[10] = (uint)puVar16;
          puVar17[0xb] = uVar18;
          puVar17[0xd] = uVar52;
        }
      }
      else {
        puVar8 = puVar17 + 0x18;
        uVar52 = puVar17[2];
        puVar50 = puVar17 + 6;
        puVar14 = puVar17 + 0x10;
        uVar18 = *puVar17;
        uVar27 = puVar17[0x18];
        bVar57 = uVar18 <= uVar27;
        if (uVar27 == uVar18) {
          bVar57 = puVar17[1] <= puVar17[0x19];
        }
        if (!bVar57) {
          uVar27 = uVar18;
        }
        uVar18 = puVar17[0x14];
        puVar54 = puVar8;
        puVar21 = puVar17;
        if (!bVar57) {
          puVar54 = puVar17;
          puVar21 = puVar8;
        }
        puVar22 = puVar17 + 0x14;
        bVar57 = uVar52 <= uVar18;
        if (uVar18 == uVar52) {
          bVar57 = puVar17[3] <= puVar17[0x15];
        }
        uVar2 = puVar54[1];
        puVar54 = puVar16;
        if (!bVar57) {
          puVar54 = puVar22;
        }
        uVar34 = puVar21[1];
        if (!bVar57) {
          uVar18 = uVar52;
        }
        uVar32 = *puVar54;
        uVar52 = puVar54[1];
        *puVar17 = *puVar21;
        puVar21 = puVar22;
        if (!bVar57) {
          puVar21 = puVar16;
        }
        puVar17[1] = uVar34;
        puVar54 = puVar17 + 0x12;
        puVar17[0x19] = uVar2;
        puVar17[0x18] = uVar27;
        uVar3 = puVar21[1];
        puVar17[3] = uVar52;
        puVar17[0x15] = uVar3;
        puVar17[0x14] = uVar18;
        uVar10 = puVar17[4];
        uVar34 = puVar17[0x12];
        *puVar16 = uVar32;
        puVar21 = puVar17 + 4;
        bVar57 = uVar10 <= uVar34;
        if (uVar34 == uVar10) {
          bVar57 = puVar17[5] <= puVar17[0x13];
        }
        puVar45 = puVar21;
        if (!bVar57) {
          uVar34 = uVar10;
          puVar45 = puVar54;
        }
        uVar28 = *puVar45;
        uVar10 = puVar45[1];
        puVar45 = puVar54;
        if (!bVar57) {
          puVar45 = puVar21;
        }
        uVar19 = puVar45[1];
        puVar17[0x13] = uVar19;
        puVar17[5] = uVar10;
        uVar11 = puVar17[6];
        uVar35 = puVar17[0xe];
        puVar17[0x12] = uVar34;
        puVar45 = puVar17 + 0xe;
        bVar57 = uVar11 <= uVar35;
        if (uVar35 == uVar11) {
          bVar57 = puVar17[7] <= puVar17[0xf];
        }
        puVar31 = puVar50;
        if (!bVar57) {
          puVar31 = puVar45;
        }
        puVar17[4] = uVar28;
        uVar30 = *puVar31;
        if (!bVar57) {
          uVar35 = uVar11;
        }
        uVar11 = puVar31[1];
        puVar31 = puVar45;
        if (!bVar57) {
          puVar31 = puVar50;
        }
        uVar4 = puVar31[1];
        puVar31 = puVar17 + 10;
        uVar53 = puVar17[10];
        uVar44 = puVar17[0x16];
        bVar57 = uVar53 <= uVar44;
        if (uVar44 == uVar53) {
          bVar57 = puVar17[0xb] <= puVar17[0x17];
        }
        puVar17[0xf] = uVar4;
        puVar55 = puVar17 + 0x16;
        puVar13 = puVar31;
        if (!bVar57) {
          puVar13 = puVar55;
        }
        puVar17[0xe] = uVar35;
        if (!bVar57) {
          uVar44 = uVar53;
        }
        uVar53 = *puVar13;
        uVar36 = puVar13[1];
        puVar17[7] = uVar11;
        puVar13 = puVar55;
        if (!bVar57) {
          puVar13 = puVar31;
        }
        puVar17[6] = uVar30;
        uVar5 = puVar13[1];
        puVar17[0xb] = uVar36;
        puVar17[10] = uVar53;
        puVar17[0x16] = uVar44;
        uVar36 = puVar17[0xc];
        uVar53 = puVar17[0x10];
        puVar17[0x17] = uVar5;
        local_12c = (uint **)(puVar17 + 0xc);
        bVar57 = uVar36 <= uVar53;
        if (uVar53 == uVar36) {
          bVar57 = puVar17[0xd] <= puVar17[0x11];
        }
        puVar39 = puVar14;
        puVar13 = (uint *)local_12c;
        if (!bVar57) {
          puVar39 = (uint *)local_12c;
          puVar13 = puVar14;
          uVar53 = uVar36;
        }
        uVar12 = puVar39[1];
        uVar36 = *puVar13;
        uVar37 = puVar13[1];
        puVar17[0x11] = uVar12;
        puVar17[0x10] = uVar53;
        puVar17[0xd] = uVar37;
        puVar17[0xc] = uVar36;
        bVar57 = uVar28 <= uVar30;
        if (uVar30 == uVar28) {
          bVar57 = uVar10 <= uVar11;
        }
        puVar13 = puVar50;
        uVar6 = uVar28;
        if (!bVar57) {
          puVar13 = puVar21;
          uVar10 = uVar11;
          uVar6 = uVar30;
          uVar30 = uVar28;
        }
        bVar57 = uVar32 <= uVar36;
        if (uVar36 == uVar32) {
          bVar57 = uVar52 <= uVar37;
        }
        puVar39 = (uint *)local_12c;
        if (!bVar57) {
          puVar39 = puVar16;
        }
        uVar11 = puVar39[1];
        uVar28 = uVar32;
        if (!bVar57) {
          uVar28 = uVar36;
          uVar36 = uVar32;
        }
        puVar17[0xd] = uVar11;
        if (!bVar57) {
          uVar52 = uVar37;
        }
        puVar17[0xc] = uVar36;
        bVar57 = uVar28 <= uVar6;
        if (uVar6 == uVar28) {
          bVar57 = uVar52 <= uVar10;
        }
        puVar17[3] = uVar52;
        *puVar16 = uVar28;
        uVar32 = puVar13[1];
        puVar17[7] = uVar32;
        bVar59 = uVar35 <= uVar34;
        if (uVar34 == uVar35) {
          bVar59 = uVar4 <= uVar19;
        }
        uVar19 = puVar17[8];
        puVar17[6] = uVar30;
        puVar17[5] = uVar10;
        bVar58 = uVar19 <= uVar44;
        if (uVar44 == uVar19) {
          bVar58 = puVar17[9] <= uVar5;
        }
        if (!bVar58) {
          uVar44 = uVar19;
        }
        local_130 = puVar17 + 8;
        puVar17[4] = uVar6;
        puVar13 = puVar55;
        if (!bVar58) {
          puVar13 = local_130;
        }
        uVar19 = puVar13[1];
        puVar13 = local_130;
        if (!bVar58) {
          puVar13 = puVar55;
        }
        uVar4 = *puVar13;
        uVar5 = puVar13[1];
        puVar17[0x17] = uVar19;
        puVar17[8] = uVar4;
        puVar17[9] = uVar5;
        puVar17[0x16] = uVar44;
        puVar13 = puVar54;
        if (!bVar59) {
          puVar13 = puVar45;
        }
        uVar37 = puVar13[1];
        puVar13 = puVar45;
        if (!bVar59) {
          puVar13 = puVar54;
        }
        uVar26 = *puVar13;
        uVar33 = puVar13[1];
        puVar17[0x13] = uVar37;
        puVar17[0xe] = uVar26;
        if (bVar59) {
          uVar35 = uVar34;
        }
        puVar17[0xf] = uVar33;
        puVar17[0x12] = uVar35;
        bVar59 = uVar53 <= uVar18;
        if (uVar18 == uVar53) {
          bVar59 = uVar12 <= uVar3;
        }
        if (bVar59) {
          puVar13 = puVar22;
        }
        else {
          uVar18 = uVar53;
          puVar13 = puVar14;
        }
        uVar34 = puVar13[1];
        puVar13 = puVar14;
        if (!bVar59) {
          puVar13 = puVar22;
        }
        uVar12 = *puVar13;
        uVar53 = puVar13[1];
        puVar17[0x10] = uVar12;
        uVar3 = *puVar17;
        puVar17[0x15] = uVar34;
        bVar59 = uVar4 <= uVar3 && uVar3 != uVar4;
        if (uVar3 == uVar4) {
          bVar59 = uVar5 < puVar17[1];
        }
        uVar38 = puVar17[1];
        if (bVar59) {
          uVar38 = uVar5;
        }
        puVar17[0x14] = uVar18;
        puVar13 = local_130;
        if (bVar59) {
          puVar13 = puVar17;
        }
        puVar17[0x11] = uVar53;
        uVar20 = puVar13[1];
        uVar5 = uVar4;
        if (bVar59) {
          uVar5 = uVar3;
          uVar3 = uVar4;
        }
        *puVar17 = uVar3;
        puVar17[1] = uVar38;
        puVar17[9] = uVar20;
        puVar13 = puVar21;
        if (!bVar57) {
          puVar13 = puVar16;
        }
        puVar17[8] = uVar5;
        uVar3 = puVar13[1];
        if (bVar57) {
          uVar4 = uVar28;
          uVar28 = uVar6;
          uVar10 = uVar52;
        }
        else {
          uVar4 = uVar6;
        }
        *puVar16 = uVar4;
        puVar17[3] = uVar10;
        puVar17[4] = uVar28;
        bVar57 = uVar30 <= uVar36;
        if (uVar36 == uVar30) {
          bVar57 = uVar32 <= uVar11;
        }
        puVar17[5] = uVar3;
        puVar13 = (uint *)local_12c;
        if (!bVar57) {
          puVar13 = puVar50;
          uVar36 = uVar30;
        }
        uVar52 = puVar13[1];
        puVar13 = puVar50;
        if (!bVar57) {
          puVar13 = (uint *)local_12c;
        }
        uVar32 = *puVar13;
        puVar17[7] = puVar13[1];
        puVar17[6] = uVar32;
        bVar57 = uVar26 <= uVar12;
        if (uVar12 == uVar26) {
          bVar57 = uVar33 <= uVar53;
        }
        if (!bVar57) {
          uVar33 = uVar53;
        }
        puVar17[0xc] = uVar36;
        uVar32 = uVar12;
        if (!bVar57) {
          uVar32 = uVar26;
        }
        puVar17[0xd] = uVar52;
        puVar13 = puVar14;
        if (!bVar57) {
          puVar13 = puVar45;
        }
        uVar10 = puVar13[1];
        if (!bVar57) {
          uVar26 = uVar12;
        }
        puVar17[0x10] = uVar32;
        puVar17[0x11] = uVar10;
        puVar17[0xe] = uVar26;
        bVar57 = uVar35 <= uVar18;
        if (uVar18 == uVar35) {
          bVar57 = uVar37 <= uVar34;
        }
        puVar17[0xf] = uVar33;
        puVar39 = puVar22;
        puVar13 = puVar54;
        if (!bVar57) {
          puVar39 = puVar54;
          puVar13 = puVar22;
          uVar18 = uVar35;
        }
        uVar34 = puVar13[1];
        uVar11 = *puVar13;
        uVar35 = puVar39[1];
        puVar17[0x14] = uVar18;
        puVar17[0x15] = uVar35;
        puVar17[0x12] = uVar11;
        puVar17[0x13] = uVar34;
        bVar57 = uVar44 <= uVar27;
        if (uVar27 == uVar44) {
          bVar57 = uVar19 <= uVar2;
        }
        if (bVar57) {
          puVar39 = puVar8;
          puVar13 = puVar55;
          uVar44 = uVar27;
        }
        else {
          puVar39 = puVar55;
          puVar13 = puVar8;
        }
        uVar2 = *puVar13;
        uVar19 = puVar13[1];
        uVar27 = puVar39[1];
        puVar17[0x18] = uVar44;
        puVar17[0x19] = uVar27;
        puVar17[0x16] = uVar2;
        puVar17[0x17] = uVar19;
        bVar57 = uVar5 <= uVar36;
        if (uVar36 == uVar5) {
          bVar57 = uVar20 <= uVar52;
        }
        puVar13 = local_130;
        if (!bVar57) {
          puVar13 = (uint *)local_12c;
          uVar36 = uVar5;
        }
        uVar52 = *puVar13;
        uVar30 = puVar13[1];
        puVar13 = (uint *)local_12c;
        if (!bVar57) {
          puVar13 = local_130;
        }
        uVar53 = puVar13[1];
        puVar17[0xd] = uVar53;
        puVar17[8] = uVar52;
        puVar17[0xc] = uVar36;
        uVar4 = puVar17[10];
        bVar57 = uVar2 <= uVar32 && uVar32 != uVar2;
        if (uVar32 == uVar2) {
          bVar57 = uVar19 < uVar10;
        }
        puVar17[9] = uVar30;
        bVar59 = uVar11 <= uVar4 && uVar4 != uVar11;
        if (uVar4 == uVar11) {
          bVar59 = uVar34 < puVar17[0xb];
        }
        bVar59 = !bVar59;
        if (bVar59) {
          uVar34 = puVar17[0xb];
          uVar4 = uVar11;
        }
        uVar10 = puVar17[10];
        if (!bVar59) {
          uVar10 = uVar11;
        }
        puVar13 = puVar54;
        if (!bVar59) {
          puVar13 = puVar31;
        }
        bVar57 = !bVar57;
        uVar11 = puVar13[1];
        if (bVar57) {
          uVar32 = uVar2;
        }
        puVar17[0x12] = uVar4;
        puVar17[0x13] = uVar11;
        uVar5 = puVar17[0x11];
        if (!bVar57) {
          uVar5 = uVar19;
        }
        puVar17[10] = uVar10;
        puVar17[0xb] = uVar34;
        puVar13 = puVar55;
        if (!bVar57) {
          puVar13 = puVar14;
        }
        uVar12 = puVar13[1];
        uVar19 = puVar17[0x10];
        if (!bVar57) {
          uVar19 = uVar2;
        }
        puVar17[0x17] = uVar12;
        puVar17[0x16] = uVar32;
        puVar17[0x10] = uVar19;
        bVar57 = uVar18 <= uVar44;
        if (uVar44 == uVar18) {
          bVar57 = uVar35 <= uVar27;
        }
        puVar17[0x11] = uVar5;
        if (bVar57) {
          puVar13 = puVar22;
        }
        else {
          puVar13 = puVar8;
          puVar8 = puVar22;
        }
        if (!bVar57) {
          uVar44 = uVar18;
        }
        uVar35 = *puVar13;
        uVar18 = puVar13[1];
        puVar17[0x19] = puVar8[1];
        uVar2 = puVar17[1];
        uVar27 = *puVar17;
        puVar17[0x18] = uVar44;
        puVar17[0x14] = uVar35;
        puVar17[0x15] = uVar18;
        bVar57 = uVar10 <= uVar27 && uVar27 != uVar10;
        if (uVar27 == uVar10) {
          bVar57 = uVar34 < uVar2;
        }
        puVar8 = puVar31;
        if (bVar57) {
          puVar8 = puVar17;
        }
        uVar44 = puVar8[1];
        if (bVar57) {
          uVar2 = uVar34;
          uVar34 = uVar27;
          uVar27 = uVar10;
        }
        else {
          uVar34 = uVar10;
        }
        *puVar17 = uVar27;
        puVar17[1] = uVar2;
        uVar10 = puVar17[6];
        puVar17[0xb] = uVar44;
        puVar17[10] = uVar34;
        bVar57 = uVar19 <= uVar10 && uVar10 != uVar19;
        if (uVar10 == uVar19) {
          bVar57 = uVar5 < puVar17[7];
        }
        puVar8 = puVar14;
        if (bVar57) {
          puVar8 = puVar50;
        }
        uVar6 = puVar8[1];
        uVar37 = puVar17[6];
        if (bVar57) {
          uVar37 = uVar19;
        }
        uVar33 = puVar17[7];
        if (bVar57) {
          uVar33 = uVar5;
          uVar19 = uVar10;
        }
        puVar17[7] = uVar33;
        puVar17[6] = uVar37;
        puVar17[0x11] = uVar6;
        uVar10 = puVar17[0xe];
        puVar17[0x10] = uVar19;
        bVar57 = uVar52 <= uVar10;
        if (uVar10 == uVar52) {
          bVar57 = uVar30 <= puVar17[0xf];
        }
        puVar8 = puVar45;
        if (!bVar57) {
          puVar8 = local_130;
          uVar10 = uVar52;
        }
        uVar37 = puVar8[1];
        uVar5 = puVar17[0xf];
        if (bVar57) {
          uVar5 = uVar30;
        }
        uVar30 = puVar17[0xe];
        if (bVar57) {
          uVar30 = uVar52;
        }
        puVar17[8] = uVar30;
        puVar17[0xe] = uVar10;
        puVar17[9] = uVar5;
        bVar57 = uVar36 <= uVar32;
        if (uVar32 == uVar36) {
          bVar57 = uVar53 <= uVar12;
        }
        puVar17[0xf] = uVar37;
        puVar13 = (uint *)local_12c;
        puVar8 = puVar55;
        if (!bVar57) {
          puVar13 = puVar55;
          puVar8 = (uint *)local_12c;
        }
        uVar52 = puVar13[1];
        uVar53 = *puVar13;
        uVar30 = puVar8[1];
        puVar17[0xd] = uVar52;
        if (!bVar57) {
          uVar32 = uVar36;
        }
        puVar17[0x16] = uVar32;
        puVar17[0xc] = uVar53;
        puVar17[0x17] = uVar30;
        bVar57 = uVar35 <= uVar4 && uVar4 != uVar35;
        if (uVar4 == uVar35) {
          bVar57 = uVar18 < uVar11;
        }
        if (bVar57) {
          puVar8 = puVar54;
        }
        else {
          puVar8 = puVar22;
          uVar4 = uVar35;
          uVar18 = puVar17[0x13];
        }
        uVar36 = puVar8[1];
        uVar11 = puVar17[0x12];
        if (bVar57) {
          uVar11 = uVar35;
        }
        puVar17[0x15] = uVar36;
        bVar57 = uVar4 <= uVar32;
        if (uVar32 == uVar4) {
          bVar57 = uVar36 <= uVar30;
        }
        bVar59 = uVar53 <= uVar11;
        if (uVar11 == uVar53) {
          bVar59 = uVar52 <= uVar18;
        }
        puVar17[0x12] = uVar11;
        puVar17[0x13] = uVar18;
        uVar35 = puVar17[2];
        puVar17[0x14] = uVar4;
        bVar58 = uVar27 <= uVar35;
        if (uVar35 == uVar27) {
          bVar58 = uVar2 <= puVar17[3];
        }
        if (bVar58) {
          uVar30 = uVar27;
          puVar8 = puVar16;
        }
        else {
          uVar30 = *puVar16;
          puVar8 = puVar17;
        }
        uVar36 = puVar8[1];
        if (bVar58) {
          uVar27 = uVar35;
        }
        uVar35 = puVar17[3];
        if (bVar58) {
          uVar35 = uVar2;
        }
        puVar17[1] = uVar35;
        puVar17[2] = uVar27;
        puVar17[3] = uVar36;
        *puVar17 = uVar30;
        bVar58 = uVar28 <= uVar34;
        if (uVar34 == uVar28) {
          bVar58 = uVar3 <= uVar44;
        }
        puVar8 = puVar31;
        if (!bVar58) {
          puVar8 = puVar21;
          uVar34 = uVar28;
        }
        uVar2 = puVar8[1];
        puVar8 = puVar21;
        if (!bVar58) {
          puVar8 = puVar31;
        }
        uVar3 = puVar8[1];
        uVar28 = *puVar8;
        puVar17[4] = uVar28;
        puVar17[5] = uVar3;
        puVar8 = puVar54;
        if (!bVar59) {
          puVar8 = (uint *)local_12c;
        }
        puVar17[10] = uVar34;
        if (bVar59) {
          uVar18 = uVar52;
        }
        puVar17[0xb] = uVar2;
        uVar52 = puVar8[1];
        if (bVar59) {
          uVar35 = uVar53;
        }
        else {
          uVar35 = uVar11;
          uVar11 = uVar53;
        }
        bVar59 = uVar10 <= uVar19;
        if (uVar19 == uVar10) {
          bVar59 = uVar37 <= uVar6;
        }
        if (bVar59) {
          uVar10 = uVar19;
        }
        puVar17[0xd] = uVar18;
        puVar17[0xc] = uVar35;
        puVar17[0x13] = uVar52;
        puVar8 = puVar14;
        if (!bVar59) {
          puVar8 = puVar45;
        }
        puVar17[0x12] = uVar11;
        uVar19 = puVar8[1];
        puVar8 = puVar45;
        if (!bVar59) {
          puVar8 = puVar14;
        }
        uVar44 = *puVar8;
        uVar30 = puVar8[1];
        puVar17[0x10] = uVar10;
        puVar17[0xf] = uVar30;
        puVar17[0xe] = uVar44;
        puVar8 = puVar22;
        if (!bVar57) {
          puVar8 = puVar55;
        }
        puVar17[0x11] = uVar19;
        if (!bVar57) {
          puVar55 = puVar22;
        }
        uVar44 = *puVar8;
        uVar30 = puVar8[1];
        puVar17[0x17] = puVar55[1];
        if (bVar57) {
          uVar4 = uVar32;
        }
        puVar17[0x16] = uVar4;
        bVar57 = uVar44 <= uVar11 && uVar11 != uVar44;
        if (uVar11 == uVar44) {
          bVar57 = uVar30 < uVar52;
        }
        puVar17[0x15] = uVar30;
        puVar17[0x14] = uVar44;
        bVar59 = uVar35 <= uVar34 && uVar34 != uVar35;
        if (uVar34 == uVar35) {
          bVar59 = uVar18 < uVar2;
        }
        uVar2 = puVar17[6];
        uVar52 = puVar17[8];
        bVar58 = uVar27 <= uVar2;
        if (uVar2 == uVar27) {
          bVar58 = uVar36 <= puVar17[7];
        }
        if (bVar58) {
          puVar8 = puVar16;
          uVar27 = uVar2;
        }
        else {
          puVar8 = puVar50;
        }
        uVar2 = *puVar8;
        uVar32 = puVar8[1];
        puVar8 = puVar50;
        if (!bVar58) {
          puVar8 = puVar16;
        }
        uVar4 = puVar8[1];
        puVar17[7] = uVar4;
        *puVar16 = uVar2;
        puVar17[6] = uVar27;
        bVar58 = uVar28 <= uVar52;
        if (uVar52 == uVar28) {
          bVar58 = uVar3 <= puVar17[9];
        }
        if (!bVar58) {
          uVar52 = uVar28;
        }
        uVar53 = puVar17[8];
        if (bVar58) {
          uVar53 = uVar28;
        }
        puVar8 = local_130;
        if (!bVar58) {
          puVar8 = puVar21;
        }
        puVar17[3] = uVar32;
        uVar28 = puVar17[9];
        if (bVar58) {
          uVar28 = uVar3;
        }
        bVar59 = !bVar59;
        uVar3 = puVar8[1];
        if (bVar59) {
          uVar34 = uVar35;
        }
        uVar5 = puVar17[0xb];
        uVar36 = puVar17[10];
        if (!bVar59) {
          uVar5 = uVar18;
          uVar36 = uVar35;
        }
        puVar17[9] = uVar3;
        puVar17[5] = uVar28;
        puVar8 = (uint *)local_12c;
        if (!bVar59) {
          puVar8 = puVar31;
        }
        if (bVar57) {
          puVar22 = puVar54;
        }
        puVar17[4] = uVar53;
        puVar17[8] = uVar52;
        uVar12 = puVar8[1];
        puVar17[10] = uVar36;
        puVar17[0xb] = uVar5;
        uVar18 = puVar17[0x12];
        uVar35 = puVar17[0x13];
        if (bVar57) {
          uVar35 = uVar30;
        }
        puVar17[0xc] = uVar34;
        puVar17[0xd] = uVar12;
        if (bVar57) {
          uVar18 = uVar44;
        }
        else {
          uVar11 = uVar44;
        }
        puVar17[0x15] = puVar22[1];
        puVar17[0x12] = uVar18;
        bVar57 = uVar34 <= uVar10;
        if (uVar10 == uVar34) {
          bVar57 = uVar12 <= uVar19;
        }
        puVar17[0x14] = uVar11;
        puVar17[0x13] = uVar35;
        bVar59 = uVar2 <= uVar53;
        if (uVar53 == uVar2) {
          bVar59 = uVar32 <= uVar28;
        }
        if (bVar59) {
          puVar8 = puVar21;
        }
        else {
          uVar32 = uVar28;
          puVar8 = puVar16;
        }
        uVar28 = puVar8[1];
        puVar17[3] = uVar32;
        uVar18 = uVar53;
        if (!bVar59) {
          uVar18 = uVar2;
          uVar2 = uVar53;
        }
        *puVar16 = uVar2;
        puVar17[5] = uVar28;
        puVar17[4] = uVar18;
        bVar59 = uVar27 <= uVar52;
        if (uVar52 == uVar27) {
          bVar59 = uVar4 <= uVar3;
        }
        if (!bVar59) {
          uVar52 = uVar27;
        }
        uVar2 = puVar17[0xe];
        puVar16 = local_130;
        if (!bVar59) {
          puVar16 = puVar50;
        }
        uVar27 = puVar16[1];
        puVar16 = puVar50;
        if (!bVar59) {
          puVar16 = local_130;
        }
        uVar35 = *puVar16;
        uVar3 = puVar16[1];
        puVar17[7] = uVar3;
        puVar17[9] = uVar27;
        uVar11 = puVar17[0xe];
        puVar17[6] = uVar35;
        uVar32 = puVar17[0xf];
        puVar17[8] = uVar52;
        bVar59 = uVar36 <= uVar11;
        if (uVar11 == uVar36) {
          bVar59 = uVar5 <= puVar17[0xf];
        }
        if (bVar59) {
          puVar16 = puVar45;
          uVar2 = uVar36;
          uVar36 = uVar11;
          uVar32 = uVar5;
        }
        else {
          puVar16 = puVar31;
        }
        uVar11 = puVar16[1];
        puVar17[0xf] = uVar11;
        puVar16 = (uint *)local_12c;
        if (!bVar57) {
          puVar16 = puVar14;
        }
        puVar17[0xb] = uVar32;
        puVar17[10] = uVar2;
        puVar8 = puVar14;
        if (!bVar57) {
          puVar8 = (uint *)local_12c;
        }
        puVar17[0xe] = uVar36;
        uVar19 = puVar16[1];
        uVar30 = *puVar16;
        if (bVar57) {
          uVar34 = uVar10;
        }
        bVar57 = uVar30 <= uVar36;
        if (uVar36 == uVar30) {
          bVar57 = uVar19 <= uVar11;
        }
        bVar59 = uVar35 <= uVar18 && uVar18 != uVar35;
        if (uVar18 == uVar35) {
          bVar59 = uVar3 < uVar28;
        }
        bVar59 = !bVar59;
        if (bVar59) {
          puVar21 = puVar50;
          uVar18 = uVar35;
        }
        uVar28 = puVar8[1];
        puVar17[0xd] = uVar19;
        puVar17[0xc] = uVar30;
        puVar17[0x11] = uVar28;
        puVar17[0x10] = uVar34;
        uVar11 = puVar21[1];
        uVar10 = puVar17[4];
        if (!bVar59) {
          uVar10 = uVar35;
        }
        puVar17[4] = uVar10;
        uVar10 = puVar17[5];
        if (!bVar59) {
          uVar10 = uVar3;
        }
        puVar17[5] = uVar10;
        bVar59 = uVar2 <= uVar52 && uVar52 != uVar2;
        if (uVar52 == uVar2) {
          bVar59 = uVar32 < uVar27;
        }
        puVar17[7] = uVar11;
        puVar16 = puVar31;
        if (bVar59) {
          puVar16 = local_130;
        }
        puVar17[6] = uVar18;
        uVar27 = puVar17[8];
        if (bVar59) {
          uVar27 = uVar2;
        }
        uVar10 = puVar16[1];
        uVar3 = puVar17[9];
        if (bVar59) {
          uVar2 = uVar52;
          uVar3 = uVar32;
        }
        puVar17[0xb] = uVar10;
        if (!bVar57) {
          puVar45 = (uint *)local_12c;
        }
        puVar17[10] = uVar2;
        if (bVar57) {
          uVar52 = uVar30;
        }
        else {
          uVar52 = puVar17[0xe];
          uVar36 = uVar30;
        }
        puVar17[9] = uVar3;
        puVar17[8] = uVar27;
        uVar32 = puVar17[0xf];
        if (bVar57) {
          uVar32 = uVar19;
        }
        puVar17[0xf] = puVar45[1];
        uVar35 = puVar17[0x12];
        puVar17[0xd] = uVar32;
        puVar17[0xc] = uVar52;
        puVar17[0xe] = uVar36;
        bVar57 = uVar34 <= uVar35;
        if (uVar35 == uVar34) {
          bVar57 = uVar28 <= puVar17[0x13];
        }
        if (bVar57) {
          puVar16 = puVar14;
          puVar14 = puVar54;
          uVar34 = uVar35;
        }
        else {
          puVar16 = puVar54;
        }
        uVar35 = puVar14[1];
        uVar28 = *puVar16;
        uVar19 = puVar16[1];
        puVar17[0x12] = uVar34;
        puVar17[0x10] = uVar28;
        bVar57 = uVar27 <= uVar18 && uVar18 != uVar27;
        if (uVar18 == uVar27) {
          bVar57 = uVar3 < uVar11;
        }
        bVar57 = !bVar57;
        puVar17[0x13] = uVar35;
        puVar17[0x11] = uVar19;
        puVar16 = local_130;
        if (!bVar57) {
          puVar16 = puVar50;
        }
        uVar34 = puVar16[1];
        if (bVar57) {
          uVar28 = puVar17[6];
          uVar18 = uVar27;
        }
        else {
          uVar28 = uVar27;
        }
        puVar17[8] = uVar18;
        uVar27 = puVar17[7];
        if (!bVar57) {
          uVar27 = uVar3;
        }
        puVar17[6] = uVar28;
        puVar17[7] = uVar27;
        puVar17[9] = uVar34;
        bVar57 = uVar52 <= uVar2 && uVar2 != uVar52;
        if (uVar2 == uVar52) {
          bVar57 = uVar32 < uVar10;
        }
        if (bVar57) {
          uVar18 = uVar52;
        }
        else {
          uVar18 = puVar17[10];
          puVar31 = (uint *)local_12c;
          uVar32 = puVar17[0xb];
          uVar2 = uVar52;
        }
        puVar17[0xd] = puVar31[1];
        uVar27 = 0xd;
        puVar17[0xc] = uVar2;
        puVar17[0xb] = uVar32;
        puVar17[10] = uVar18;
      }
      if (uVar29 <= uVar27 - 1) {
LAB_01531f4c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1531f4c);
        (*pcVar1)();
      }
      if (uVar27 != uVar29) {
        iVar48 = uVar27 * -8 + 8;
        puVar16 = puVar17 + uVar27 * 2;
        iVar49 = uVar27 << 3;
        do {
          uVar27 = *puVar16;
          uVar18 = puVar16[1];
          bVar57 = puVar16[-2] <= uVar27;
          if (uVar27 == puVar16[-2]) {
            bVar57 = puVar16[-1] <= uVar18;
          }
          if (!bVar57) {
            iVar25 = iVar48;
            iVar42 = iVar49;
            do {
              uVar9 = ((undefined4 *)((int)puVar17 - iVar25))[1];
              *(undefined4 *)((int)puVar17 + iVar42) = *(undefined4 *)((int)puVar17 - iVar25);
              ((undefined4 *)((int)puVar17 + iVar42))[1] = uVar9;
              if (iVar42 == 8) {
                puVar8 = puVar17;
                goto LAB_0153192c;
              }
              iVar25 = iVar25 + 8;
              iVar43 = iVar42 + -8;
              uVar52 = *(uint *)((int)puVar17 + iVar42 + -0x10);
              bVar57 = uVar52 <= uVar27;
              if (uVar27 == uVar52) {
                bVar57 = *(uint *)((int)puVar17 + iVar42 + -0xc) <= uVar18;
              }
              iVar42 = iVar43;
            } while (!bVar57);
            puVar8 = (uint *)((int)puVar17 + iVar43);
LAB_0153192c:
            *puVar8 = uVar27;
            puVar8[1] = uVar18;
          }
          puVar16 = puVar16 + 2;
          iVar48 = iVar48 + -8;
          iVar49 = iVar49 + 8;
        } while (puVar16 != puVar17 + uVar29 * 2);
      }
      if (param_2 < 0x12) {
        return;
      }
      bVar57 = puVar17 == param_1;
      uVar29 = param_2 - uVar56;
      puVar17 = puVar15;
    } while (bVar57);
    local_12c = &local_130 + param_2 * 2;
    puVar16 = param_1 + param_2 * 2;
    puVar8 = puVar15 + -2;
    puVar17 = param_1;
    iVar49 = 0;
    do {
      iVar48 = iVar49;
      puVar14 = puVar16 + -2;
      uVar29 = *puVar14;
      uVar27 = puVar16[-1];
      bVar57 = *puVar17 <= *puVar15;
      if (*puVar15 == *puVar17) {
        bVar57 = puVar17[1] <= puVar15[1];
      }
      uVar18 = (uint)!bVar57;
      puVar16 = puVar17;
      if (uVar18 != 0) {
        puVar16 = puVar15;
      }
      uVar52 = puVar16[1];
      puVar15 = puVar15 + uVar18 * 2;
      *(uint *)((int)local_128 + iVar48) = *puVar16;
      *(uint *)((int)local_128 + iVar48 + 4) = uVar52;
      bVar57 = *puVar8 <= uVar29;
      if (uVar29 == *puVar8) {
        bVar57 = puVar8[1] <= uVar27;
      }
      uVar29 = (uint)!bVar57;
      puVar16 = puVar14;
      if (uVar29 != 0) {
        puVar16 = puVar8;
      }
      uVar27 = puVar16[1];
      puVar8 = puVar8 + uVar29 * -2;
      uVar56 = uVar56 - 1;
      *(uint *)((int)local_12c - iVar48) = *puVar16;
      ((uint *)((int)local_12c - iVar48))[1] = uVar27;
      puVar17 = puVar17 + (uVar18 ^ 1) * 2;
      puVar16 = puVar14 + uVar29 * 2;
      iVar49 = iVar48 + 8;
    } while (uVar56 != 0);
    puVar8 = puVar8 + 2;
    if ((param_2 & 1) != 0) {
      bVar57 = puVar8 <= puVar17;
      puVar14 = puVar15;
      if (!bVar57) {
        puVar14 = puVar17;
      }
      uVar56 = puVar14[1];
      puVar15 = puVar15 + (uint)bVar57 * 2;
      *(uint *)((int)local_128 + iVar48 + 8) = *puVar14;
      *(uint *)((int)local_128 + iVar48 + 0xc) = uVar56;
      puVar17 = puVar17 + (uint)!bVar57 * 2;
    }
    puVar14 = puVar17;
    if (puVar17 == puVar8) {
      puVar14 = puVar16;
    }
    if (puVar17 != puVar8 || puVar15 != puVar14) {
      param_1 = (uint *)FUN_00fb7254(param_1);
    }
    FUN_016dd1aa(param_1,local_128,param_2 << 3);
  }
  return;
}

