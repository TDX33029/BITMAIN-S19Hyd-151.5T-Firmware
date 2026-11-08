// FUN_009d2cfc @ 009d2cfc size=2864 calls_out=4 calls_in=2
// strings: 

void FUN_009d2cfc(uint *param_1,uint param_2,uint *param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  bool bVar29;
  uint local_ac [34];
  
  local_ac[0] = param_2;
  if (0x20 < param_2) {
    puVar20 = param_1;
LAB_009d33fc:
    do {
      if (param_4 == 0) {
        uVar23 = local_ac[0] + (local_ac[0] >> 1);
        do {
          uVar23 = uVar23 - 1;
          if (uVar23 < local_ac[0]) {
            uVar12 = *puVar20;
            *puVar20 = puVar20[uVar23];
            puVar20[uVar23] = uVar12;
            uVar12 = 0;
          }
          else {
            uVar12 = uVar23 - local_ac[0];
          }
          uVar21 = uVar12 << 1 | 1;
          uVar9 = uVar23;
          if (local_ac[0] < uVar23) {
            uVar9 = local_ac[0];
          }
          if (uVar21 < uVar9) {
            do {
              uVar2 = uVar12 * 2 + 2;
              uVar27 = uVar21;
              if ((uVar2 < uVar9) && (puVar20[uVar2] < puVar20[uVar21])) {
                uVar27 = uVar21 + 1;
              }
              if (puVar20[uVar12] <= puVar20[uVar27]) break;
              uVar2 = puVar20[uVar12];
              puVar20[uVar12] = puVar20[uVar27];
              uVar21 = uVar27 << 1 | 1;
              puVar20[uVar27] = uVar2;
              uVar12 = uVar27;
            } while (uVar21 < uVar9);
          }
          if (uVar23 == 0) {
            return;
          }
        } while( true );
      }
      if (local_ac[0] < 0x40) {
        uVar23 = puVar20[(local_ac[0] >> 3) * 4];
        uVar12 = puVar20[(local_ac[0] >> 3) * 8 - (local_ac[0] >> 3)];
        uVar9 = *puVar20;
        puVar5 = puVar20 + (local_ac[0] >> 3) * 4;
        if (uVar23 < uVar9 != uVar12 < uVar23) {
          puVar5 = puVar20 + ((local_ac[0] >> 3) * 8 - (local_ac[0] >> 3));
        }
        if (uVar23 < uVar9 != uVar12 < uVar9) {
          puVar5 = puVar20;
        }
        iVar18 = (int)puVar5 - (int)puVar20;
        if (param_3 != (uint *)0x0) goto LAB_009d3474;
LAB_009d351c:
        uVar23 = *(uint *)((int)puVar20 + iVar18);
        uVar12 = *puVar20;
      }
      else {
        iVar18 = FUN_009d3774(puVar20);
        iVar18 = iVar18 - (int)puVar20;
        if (param_3 == (uint *)0x0) goto LAB_009d351c;
LAB_009d3474:
        uVar23 = *(uint *)((int)puVar20 + iVar18);
        uVar12 = *puVar20;
        if (*param_3 <= uVar23) {
          *puVar20 = uVar23;
          *(uint *)((int)puVar20 + iVar18) = uVar12;
          puVar5 = puVar20 + 2;
          uVar12 = *puVar20;
          puVar10 = puVar20 + 1;
          uVar9 = *puVar10;
          puVar14 = puVar20 + local_ac[0];
          uVar23 = 0;
          puVar7 = puVar10;
          if (puVar5 < puVar14 + -1) {
            do {
              puVar7 = puVar5;
              uVar21 = *puVar7;
              puVar7[-1] = puVar10[uVar23];
              puVar10[uVar23] = uVar21;
              if (uVar12 <= uVar21) {
                uVar23 = uVar23 + 1;
              }
              uVar21 = puVar7[1];
              puVar5 = puVar7 + 2;
              *puVar7 = puVar10[uVar23];
              puVar10[uVar23] = uVar21;
              if (uVar12 <= uVar21) {
                uVar23 = uVar23 + 1;
              }
            } while (puVar5 < puVar14 + -1);
            puVar7 = puVar7 + 1;
          }
          puVar6 = puVar7;
          if (puVar5 != puVar14) {
            do {
              puVar7 = puVar5;
              uVar21 = *puVar7;
              *puVar6 = puVar10[uVar23];
              puVar10[uVar23] = uVar21;
              if (uVar12 <= uVar21) {
                uVar23 = uVar23 + 1;
              }
              puVar6 = puVar7;
              puVar5 = puVar7 + 1;
            } while (puVar7 + 1 != puVar14);
          }
          *puVar7 = puVar10[uVar23];
          puVar10[uVar23] = uVar9;
          if (uVar12 <= uVar9) {
            uVar23 = uVar23 + 1;
          }
          if (local_ac[0] <= uVar23) goto LAB_009d3770;
          uVar12 = *puVar20;
          *puVar20 = puVar20[uVar23];
          puVar20[uVar23] = uVar12;
          param_1 = puVar20 + uVar23 + 1;
          local_ac[0] = local_ac[0] - (uVar23 + 1);
          param_4 = param_4 + -1;
          param_3 = (uint *)0x0;
          puVar20 = param_1;
          if (local_ac[0] < 0x21) break;
          goto LAB_009d33fc;
        }
      }
      param_4 = param_4 + -1;
      *puVar20 = uVar23;
      *(uint *)((int)puVar20 + iVar18) = uVar12;
      puVar5 = puVar20 + 2;
      uVar23 = 0;
      puVar10 = puVar20 + 1;
      uVar9 = *puVar10;
      puVar14 = puVar20 + local_ac[0];
      uVar12 = *puVar20;
      puVar7 = puVar10;
      if (puVar5 < puVar14 + -1) {
        do {
          puVar7 = puVar5;
          uVar21 = *puVar7;
          puVar7[-1] = puVar10[uVar23];
          puVar10[uVar23] = uVar21;
          if (uVar12 < uVar21) {
            uVar23 = uVar23 + 1;
          }
          uVar21 = puVar7[1];
          puVar5 = puVar7 + 2;
          *puVar7 = puVar10[uVar23];
          puVar10[uVar23] = uVar21;
          if (uVar12 < uVar21) {
            uVar23 = uVar23 + 1;
          }
        } while (puVar5 < puVar14 + -1);
        puVar7 = puVar7 + 1;
      }
      puVar6 = puVar7;
      if (puVar5 != puVar14) {
        do {
          puVar7 = puVar5;
          uVar21 = *puVar7;
          *puVar6 = puVar10[uVar23];
          puVar10[uVar23] = uVar21;
          if (uVar12 < uVar21) {
            uVar23 = uVar23 + 1;
          }
          puVar6 = puVar7;
          puVar5 = puVar7 + 1;
        } while (puVar7 + 1 != puVar14);
      }
      *puVar7 = puVar10[uVar23];
      puVar10[uVar23] = uVar9;
      if (uVar12 < uVar9) {
        uVar23 = uVar23 + 1;
      }
      if (local_ac[0] <= uVar23) goto LAB_009d3770;
      uVar12 = *puVar20;
      puVar5 = puVar20 + uVar23;
      *puVar20 = *puVar5;
      param_1 = puVar5 + 1;
      *puVar5 = uVar12;
      FUN_009d2cfc(puVar20,uVar23,param_3,param_4);
      local_ac[0] = local_ac[0] + ~uVar23;
      param_3 = puVar5;
      puVar20 = param_1;
    } while (0x20 < local_ac[0]);
  }
  uVar23 = local_ac[0] >> 1;
  if (uVar23 != 0) {
    puVar20 = param_1 + uVar23;
    uVar12 = uVar23;
    if (local_ac[0] < 0x12) {
      uVar12 = local_ac[0];
    }
    puVar5 = param_1;
    do {
      if (uVar12 < 0xd) {
        uVar9 = 1;
        if (8 < uVar12) {
          uVar21 = puVar5[3];
          uVar3 = *puVar5;
          uVar8 = puVar5[1];
          uVar22 = puVar5[2];
          uVar2 = puVar5[7];
          uVar9 = puVar5[5];
          uVar27 = uVar21;
          if (uVar3 >= uVar21 && uVar3 != uVar21) {
            uVar27 = uVar3;
          }
          if (uVar3 < uVar21) {
            uVar21 = uVar3;
          }
          uVar3 = puVar5[8];
          uVar4 = puVar5[4];
          uVar15 = uVar2;
          if (uVar8 < uVar2) {
            uVar15 = uVar8;
          }
          if (uVar8 >= uVar2 && uVar8 != uVar2) {
            uVar2 = uVar8;
          }
          uVar17 = puVar5[6];
          uVar8 = uVar9;
          if (uVar22 >= uVar9 && uVar22 != uVar9) {
            uVar8 = uVar22;
          }
          if (uVar22 < uVar9) {
            uVar9 = uVar22;
          }
          uVar22 = uVar3;
          if (uVar4 < uVar3) {
            uVar22 = uVar4;
          }
          if (uVar4 >= uVar3 && uVar4 != uVar3) {
            uVar3 = uVar4;
          }
          uVar4 = uVar22;
          if (uVar21 >= uVar22 && uVar21 != uVar22) {
            uVar4 = uVar21;
          }
          if (uVar21 < uVar22) {
            uVar22 = uVar21;
          }
          uVar21 = uVar17;
          if (uVar17 < uVar9) {
            uVar21 = uVar9;
          }
          if (uVar17 <= uVar9) {
            uVar9 = uVar17;
          }
          uVar17 = uVar15;
          if (uVar27 >= uVar15 && uVar27 != uVar15) {
            uVar17 = uVar27;
          }
          if (uVar27 < uVar15) {
            uVar15 = uVar27;
          }
          uVar27 = uVar22;
          if (uVar15 < uVar22) {
            uVar27 = uVar15;
          }
          if (uVar15 <= uVar22) {
            uVar15 = uVar22;
          }
          uVar22 = uVar4;
          if (uVar2 >= uVar4 && uVar2 != uVar4) {
            uVar22 = uVar2;
          }
          if (uVar2 < uVar4) {
            uVar4 = uVar2;
          }
          uVar2 = uVar9;
          if (uVar4 < uVar9) {
            uVar2 = uVar4;
          }
          if (uVar4 <= uVar9) {
            uVar4 = uVar9;
          }
          uVar9 = uVar3;
          if (uVar8 >= uVar3 && uVar8 != uVar3) {
            uVar9 = uVar8;
          }
          if (uVar8 < uVar3) {
            uVar3 = uVar8;
          }
          uVar8 = uVar21;
          if (uVar21 < uVar3) {
            uVar8 = uVar3;
          }
          if (uVar21 <= uVar3) {
            uVar3 = uVar21;
          }
          uVar21 = uVar15;
          if (uVar3 < uVar15) {
            uVar21 = uVar3;
          }
          if (uVar3 <= uVar15) {
            uVar3 = uVar15;
          }
          uVar15 = uVar9;
          if (uVar17 >= uVar9 && uVar17 != uVar9) {
            uVar15 = uVar17;
          }
          if (uVar17 < uVar9) {
            uVar9 = uVar17;
          }
          uVar17 = uVar8;
          if (uVar22 < uVar8) {
            uVar17 = uVar22;
          }
          if (uVar22 >= uVar8 && uVar22 != uVar8) {
            uVar8 = uVar22;
          }
          uVar22 = uVar17;
          if (uVar9 >= uVar17 && uVar9 != uVar17) {
            uVar22 = uVar9;
          }
          if (uVar9 < uVar17) {
            uVar17 = uVar9;
          }
          uVar9 = uVar3;
          if (uVar4 < uVar3) {
            uVar9 = uVar4;
          }
          if (uVar4 >= uVar3 && uVar4 != uVar3) {
            uVar3 = uVar4;
          }
          uVar4 = uVar9;
          if (uVar17 < uVar9) {
            uVar4 = uVar17;
          }
          if (uVar17 >= uVar9 && uVar17 != uVar9) {
            uVar9 = uVar17;
          }
          uVar17 = uVar27;
          if (uVar2 < uVar27) {
            uVar17 = uVar2;
          }
          if (uVar2 <= uVar27) {
            uVar2 = uVar27;
          }
          uVar27 = uVar21;
          if (uVar2 < uVar21) {
            uVar27 = uVar2;
          }
          if (uVar2 <= uVar21) {
            uVar2 = uVar21;
          }
          uVar21 = uVar3;
          if (uVar22 >= uVar3 && uVar22 != uVar3) {
            uVar21 = uVar22;
          }
          if (uVar22 < uVar3) {
            uVar3 = uVar22;
          }
          uVar22 = uVar9;
          if (uVar9 < uVar3) {
            uVar22 = uVar3;
          }
          if (uVar9 <= uVar3) {
            uVar3 = uVar9;
          }
          uVar9 = uVar2;
          if (uVar4 >= uVar2 && uVar4 != uVar2) {
            uVar9 = uVar4;
          }
          if (uVar4 < uVar2) {
            uVar2 = uVar4;
          }
          puVar5[8] = uVar17;
          uVar4 = uVar8;
          if (uVar15 >= uVar8 && uVar15 != uVar8) {
            uVar4 = uVar15;
          }
          if (uVar15 < uVar8) {
            uVar8 = uVar15;
          }
          puVar5[5] = uVar9;
          uVar9 = uVar21;
          if (uVar8 < uVar21) {
            uVar9 = uVar8;
          }
          if (uVar8 <= uVar21) {
            uVar8 = uVar21;
          }
          puVar5[1] = uVar8;
          puVar5[2] = uVar9;
          puVar5[3] = uVar22;
          uVar9 = 9;
          *puVar5 = uVar4;
          puVar5[4] = uVar3;
          puVar5[6] = uVar2;
          puVar5[7] = uVar27;
        }
      }
      else {
        uVar21 = puVar5[7];
        uVar2 = *puVar5;
        uVar8 = puVar5[3];
        uVar27 = puVar5[9];
        uVar3 = puVar5[4];
        uVar9 = uVar21;
        if (uVar8 < uVar21) {
          uVar9 = uVar8;
        }
        uVar17 = puVar5[10];
        uVar4 = puVar5[0xc];
        uVar24 = puVar5[1];
        uVar26 = puVar5[2];
        uVar15 = puVar5[8];
        uVar22 = uVar27;
        if (uVar26 < uVar27) {
          uVar22 = uVar26;
        }
        if (uVar26 >= uVar27 && uVar26 != uVar27) {
          uVar27 = uVar26;
        }
        uVar26 = puVar5[6];
        if (uVar21 < uVar8) {
          uVar21 = uVar8;
        }
        uVar8 = uVar17;
        if (uVar24 < uVar17) {
          uVar8 = uVar24;
        }
        if (uVar24 >= uVar17 && uVar24 != uVar17) {
          uVar17 = uVar24;
        }
        uVar24 = uVar15;
        if (uVar26 >= uVar15 && uVar26 != uVar15) {
          uVar24 = uVar26;
        }
        uVar16 = puVar5[0xb];
        if (uVar26 < uVar15) {
          uVar15 = uVar26;
        }
        uVar19 = puVar5[5];
        uVar26 = uVar24;
        if (uVar24 < uVar17) {
          uVar26 = uVar17;
        }
        uVar25 = uVar21;
        if (uVar27 >= uVar21 && uVar27 != uVar21) {
          uVar25 = uVar27;
        }
        if (uVar27 < uVar21) {
          uVar21 = uVar27;
        }
        uVar27 = uVar16;
        if (uVar19 >= uVar16 && uVar19 != uVar16) {
          uVar27 = uVar19;
        }
        if (uVar19 < uVar16) {
          uVar16 = uVar19;
        }
        uVar19 = uVar22;
        if (uVar9 < uVar22) {
          uVar19 = uVar9;
        }
        if (uVar9 >= uVar22 && uVar9 != uVar22) {
          uVar22 = uVar9;
        }
        uVar9 = uVar8;
        if (uVar15 < uVar8) {
          uVar9 = uVar15;
        }
        if (uVar15 <= uVar8) {
          uVar15 = uVar8;
        }
        uVar8 = uVar4;
        if (uVar2 >= uVar4 && uVar2 != uVar4) {
          uVar8 = uVar2;
        }
        if (uVar2 < uVar4) {
          uVar4 = uVar2;
        }
        uVar2 = uVar16;
        if (uVar3 >= uVar16 && uVar3 != uVar16) {
          uVar2 = uVar3;
        }
        if (uVar3 < uVar16) {
          uVar16 = uVar3;
        }
        if (uVar17 < uVar24) {
          uVar24 = uVar17;
        }
        uVar3 = uVar15;
        if (uVar22 < uVar15) {
          uVar3 = uVar22;
        }
        if (uVar22 >= uVar15 && uVar22 != uVar15) {
          uVar15 = uVar22;
        }
        uVar22 = uVar9;
        if (uVar19 >= uVar9 && uVar19 != uVar9) {
          uVar22 = uVar19;
        }
        if (uVar19 < uVar9) {
          uVar9 = uVar19;
        }
        uVar17 = uVar4;
        if (uVar16 < uVar4) {
          uVar17 = uVar16;
        }
        if (uVar16 <= uVar4) {
          uVar16 = uVar4;
        }
        uVar4 = uVar2;
        if (uVar8 >= uVar2 && uVar8 != uVar2) {
          uVar4 = uVar8;
        }
        if (uVar8 < uVar2) {
          uVar2 = uVar8;
        }
        uVar8 = uVar24;
        if (uVar21 < uVar24) {
          uVar8 = uVar21;
        }
        if (uVar21 >= uVar24 && uVar21 != uVar24) {
          uVar24 = uVar21;
        }
        uVar21 = uVar8;
        if (uVar2 < uVar8) {
          uVar21 = uVar2;
        }
        if (uVar2 >= uVar8 && uVar2 != uVar8) {
          uVar8 = uVar2;
        }
        uVar2 = uVar25;
        if (uVar26 < uVar25) {
          uVar2 = uVar26;
        }
        if (uVar26 >= uVar25 && uVar26 != uVar25) {
          uVar25 = uVar26;
        }
        uVar26 = uVar22;
        if (uVar27 < uVar22) {
          uVar26 = uVar27;
        }
        if (uVar27 >= uVar22 && uVar27 != uVar22) {
          uVar22 = uVar27;
        }
        uVar27 = uVar16;
        if (uVar3 < uVar16) {
          uVar27 = uVar3;
        }
        if (uVar3 >= uVar16 && uVar3 != uVar16) {
          uVar16 = uVar3;
        }
        uVar3 = uVar22;
        if (uVar4 < uVar22) {
          uVar3 = uVar4;
        }
        if (uVar4 >= uVar22 && uVar4 != uVar22) {
          uVar22 = uVar4;
        }
        uVar4 = uVar25;
        if (uVar25 < uVar22) {
          uVar4 = uVar22;
        }
        if (uVar25 <= uVar22) {
          uVar22 = uVar25;
        }
        uVar19 = uVar15;
        if (uVar8 < uVar15) {
          uVar19 = uVar8;
        }
        if (uVar8 <= uVar15) {
          uVar8 = uVar15;
        }
        uVar15 = uVar16;
        if (uVar24 >= uVar16 && uVar24 != uVar16) {
          uVar15 = uVar24;
        }
        if (uVar24 < uVar16) {
          uVar16 = uVar24;
        }
        uVar24 = uVar15;
        if (uVar22 >= uVar15 && uVar22 != uVar15) {
          uVar24 = uVar22;
        }
        if (uVar22 < uVar15) {
          uVar15 = uVar22;
        }
        uVar22 = uVar3;
        if (uVar2 >= uVar3 && uVar2 != uVar3) {
          uVar22 = uVar2;
        }
        if (uVar2 < uVar3) {
          uVar3 = uVar2;
        }
        uVar2 = uVar8;
        if (uVar8 < uVar22) {
          uVar2 = uVar22;
        }
        if (uVar8 <= uVar22) {
          uVar22 = uVar8;
        }
        uVar8 = uVar16;
        if (uVar19 < uVar16) {
          uVar8 = uVar19;
        }
        if (uVar19 >= uVar16 && uVar19 != uVar16) {
          uVar16 = uVar19;
        }
        uVar19 = uVar17;
        if (uVar9 >= uVar17 && uVar9 != uVar17) {
          uVar19 = uVar9;
        }
        if (uVar9 < uVar17) {
          uVar17 = uVar9;
        }
        uVar9 = uVar19;
        if (uVar26 >= uVar19 && uVar26 != uVar19) {
          uVar9 = uVar26;
        }
        if (uVar26 < uVar19) {
          uVar19 = uVar26;
        }
        uVar26 = uVar27;
        if (uVar21 < uVar27) {
          uVar26 = uVar21;
        }
        if (uVar21 >= uVar27 && uVar21 != uVar27) {
          uVar27 = uVar21;
        }
        uVar21 = uVar9;
        if (uVar27 < uVar9) {
          uVar21 = uVar27;
        }
        if (uVar27 <= uVar9) {
          uVar27 = uVar9;
        }
        uVar9 = uVar27;
        if (uVar3 >= uVar27 && uVar3 != uVar27) {
          uVar9 = uVar3;
        }
        if (uVar3 < uVar27) {
          uVar27 = uVar3;
        }
        uVar3 = uVar8;
        if (uVar27 < uVar8) {
          uVar3 = uVar27;
        }
        if (uVar27 <= uVar8) {
          uVar27 = uVar8;
        }
        uVar8 = uVar22;
        if (uVar15 >= uVar22 && uVar15 != uVar22) {
          uVar8 = uVar15;
        }
        if (uVar15 < uVar22) {
          uVar22 = uVar15;
        }
        uVar15 = uVar16;
        if (uVar16 < uVar9) {
          uVar15 = uVar9;
        }
        if (uVar16 <= uVar9) {
          uVar9 = uVar16;
        }
        uVar16 = uVar9;
        if (uVar27 < uVar9) {
          uVar16 = uVar27;
        }
        if (uVar27 >= uVar9 && uVar27 != uVar9) {
          uVar9 = uVar27;
        }
        uVar27 = uVar15;
        if (uVar22 >= uVar15 && uVar22 != uVar15) {
          uVar27 = uVar22;
        }
        if (uVar22 < uVar15) {
          uVar15 = uVar22;
        }
        uVar22 = uVar9;
        if (uVar9 < uVar15) {
          uVar22 = uVar15;
        }
        if (uVar9 <= uVar15) {
          uVar15 = uVar9;
        }
        uVar9 = uVar26;
        if (uVar19 < uVar26) {
          uVar9 = uVar19;
        }
        if (uVar19 >= uVar26 && uVar19 != uVar26) {
          uVar26 = uVar19;
        }
        puVar5[0xb] = uVar9;
        *puVar5 = uVar4;
        puVar5[0xc] = uVar17;
        uVar9 = uVar26;
        if (uVar21 < uVar26) {
          uVar9 = uVar21;
        }
        if (uVar21 >= uVar26 && uVar21 != uVar26) {
          uVar26 = uVar21;
        }
        puVar5[10] = uVar9;
        uVar9 = uVar26;
        if (uVar3 < uVar26) {
          uVar9 = uVar3;
        }
        if (uVar3 >= uVar26 && uVar3 != uVar26) {
          uVar26 = uVar3;
        }
        uVar21 = uVar2;
        if (uVar24 >= uVar2 && uVar24 != uVar2) {
          uVar21 = uVar24;
        }
        if (uVar24 < uVar2) {
          uVar2 = uVar24;
        }
        puVar5[7] = uVar16;
        puVar5[8] = uVar26;
        puVar5[9] = uVar9;
        uVar9 = uVar8;
        if (uVar8 < uVar2) {
          uVar9 = uVar2;
        }
        if (uVar8 <= uVar2) {
          uVar2 = uVar8;
        }
        puVar5[5] = uVar22;
        puVar5[2] = uVar9;
        uVar3 = uVar27;
        if (uVar2 < uVar27) {
          uVar3 = uVar2;
        }
        if (uVar2 <= uVar27) {
          uVar2 = uVar27;
        }
        puVar5[6] = uVar15;
        uVar9 = 0xd;
        puVar5[3] = uVar2;
        puVar5[1] = uVar21;
        puVar5[4] = uVar3;
      }
      if (uVar12 <= uVar9 - 1) {
LAB_009d3770:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x9d3770);
        (*pcVar1)();
      }
      if (uVar9 != uVar12) {
        puVar7 = puVar5 + uVar9;
        iVar18 = uVar9 << 2;
        do {
          uVar9 = puVar7[-1];
          uVar21 = *puVar7;
          if (uVar9 < uVar21) {
            iVar13 = iVar18;
            do {
              *(uint *)((int)puVar5 + iVar13) = uVar9;
              if (iVar13 == 4) {
                puVar10 = puVar5;
                goto LAB_009d3334;
              }
              iVar11 = iVar13 + -4;
              uVar9 = *(uint *)((int)puVar5 + iVar13 + -8);
              iVar13 = iVar11;
            } while (uVar9 < uVar21);
            puVar10 = (uint *)((int)puVar5 + iVar11);
LAB_009d3334:
            *puVar10 = uVar21;
          }
          puVar7 = puVar7 + 1;
          iVar18 = iVar18 + 4;
        } while (puVar7 != puVar5 + uVar12);
      }
      if (local_ac[0] < 0x12) {
        return;
      }
      bVar28 = puVar5 == param_1;
      uVar12 = local_ac[0] - uVar23;
      puVar5 = puVar20;
    } while (bVar28);
    puVar10 = puVar20 + -1;
    iVar18 = local_ac[0] * 4;
    puVar5 = param_1 + (local_ac[0] - 1);
    puVar7 = param_1;
    iVar13 = 0;
    do {
      iVar11 = iVar13;
      uVar9 = *puVar20;
      uVar21 = *puVar7;
      uVar12 = *puVar5;
      bVar28 = uVar21 < uVar9;
      if (!bVar28 && uVar21 != uVar9) {
        uVar9 = uVar21;
      }
      uVar21 = *puVar10;
      *(uint *)((int)local_ac + iVar11 + 4) = uVar9;
      bVar29 = uVar21 < uVar12;
      if (bVar29) {
        uVar12 = uVar21;
      }
      puVar7 = puVar7 + !bVar28;
      *(uint *)((int)local_ac + (iVar18 - iVar11)) = uVar12;
      iVar13 = 0;
      if (bVar29) {
        iVar13 = -1;
      }
      puVar10 = puVar10 + iVar13;
      iVar13 = 0;
      if (!bVar29) {
        iVar13 = -1;
      }
      puVar20 = puVar20 + bVar28;
      puVar5 = puVar5 + iVar13;
      uVar23 = uVar23 - 1;
      iVar13 = iVar11 + 4;
    } while (uVar23 != 0);
    puVar10 = puVar10 + 1;
    if ((local_ac[0] & 1) != 0) {
      bVar28 = puVar10 <= puVar7;
      puVar14 = puVar20;
      if (!bVar28) {
        puVar14 = puVar7;
      }
      *(uint *)((int)local_ac + iVar11 + 8) = *puVar14;
      puVar20 = puVar20 + bVar28;
      puVar7 = puVar7 + !bVar28;
    }
    if (puVar7 == puVar10) {
      puVar5 = puVar5 + 1;
    }
    if (puVar7 != puVar10 || puVar20 != puVar5) {
      FUN_00fb7254();
    }
    FUN_016dd1aa(param_1,local_ac + 1,local_ac[0] << 2);
  }
  return;
}

