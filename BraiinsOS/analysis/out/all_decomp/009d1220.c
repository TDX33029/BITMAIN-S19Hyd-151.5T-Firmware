// FUN_009d1220 @ 009d1220 size=6688 calls_out=4 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_009d1220(undefined4 *****param_1,uint param_2,undefined4 *****param_3,
                 undefined4 *****param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  undefined4 ****ppppuVar4;
  undefined4 *****pppppuVar5;
  undefined4 *****pppppuVar6;
  undefined4 *****pppppuVar7;
  undefined4 *****pppppuVar8;
  undefined4 *****pppppuVar9;
  undefined4 *****pppppuVar10;
  undefined4 *****pppppuVar11;
  undefined4 uVar12;
  undefined4 ******ppppppuVar13;
  undefined4 ***pppuVar14;
  undefined4 ****ppppuVar15;
  undefined4 *****pppppuVar16;
  uint uVar17;
  undefined4 *****pppppuVar18;
  undefined4 *puVar19;
  undefined4 ******ppppppuVar20;
  int iVar21;
  undefined4 ****ppppuVar22;
  undefined4 ***pppuVar23;
  undefined4 ****ppppuVar24;
  int iVar25;
  undefined4 ******ppppppuVar26;
  uint uVar27;
  undefined4 ****ppppuVar28;
  undefined4 ****ppppuVar29;
  undefined4 *****pppppuVar30;
  uint uVar31;
  uint uVar32;
  undefined4 ****ppppuVar33;
  uint uVar34;
  undefined4 *****pppppuVar35;
  undefined4 ****ppppuVar36;
  undefined4 ****ppppuVar37;
  undefined4 ****ppppuVar38;
  undefined4 ******ppppppuVar39;
  undefined4 ****ppppuVar40;
  undefined4 *****pppppuVar41;
  undefined4 ******ppppppuVar42;
  undefined4 ****ppppuVar43;
  undefined4 ****ppppuVar44;
  undefined4 ****ppppuVar45;
  undefined4 ****ppppuVar46;
  undefined4 ****ppppuVar47;
  undefined4 ****ppppuVar48;
  undefined4 *****pppppuVar49;
  int iVar50;
  int iVar51;
  undefined4 ***pppuVar52;
  int iVar53;
  undefined4 ****ppppuVar54;
  undefined4 *****pppppuVar55;
  undefined4 ******ppppppuVar56;
  uint uVar57;
  bool bVar58;
  undefined4 ******local_130 [67];
  
  if (0x20 < param_2) {
LAB_009d27d4:
    do {
      if (param_4 == (undefined4 *****)0x0) {
        uVar57 = param_2 + (param_2 >> 1);
        do {
          uVar57 = uVar57 - 1;
          if (uVar57 < param_2) {
            uVar27 = 0;
            pppppuVar41 = param_1 + uVar57 * 2;
            ppppuVar43 = *param_1;
            ppppuVar28 = param_1[1];
            ppppuVar54 = pppppuVar41[1];
            *param_1 = *pppppuVar41;
            param_1[1] = ppppuVar54;
            *pppppuVar41 = ppppuVar43;
            pppppuVar41[1] = ppppuVar28;
          }
          else {
            uVar27 = uVar57 - param_2;
          }
          uVar31 = uVar27 << 1 | 1;
          uVar17 = uVar57;
          if (param_2 < uVar57) {
            uVar17 = param_2;
          }
          if (uVar31 < uVar17) {
            do {
              uVar34 = uVar27 * 2 + 2;
              uVar32 = uVar31;
              if ((uVar34 < uVar17) && (*param_1[uVar31 * 2] < *param_1[uVar34 * 2])) {
                uVar32 = uVar31 + 1;
              }
              pppppuVar55 = param_1 + uVar27 * 2;
              pppppuVar41 = param_1 + uVar32 * 2;
              if (**pppppuVar41 <= **pppppuVar55) break;
              ppppuVar54 = pppppuVar55[1];
              ppppuVar43 = *pppppuVar41;
              ppppuVar28 = pppppuVar41[1];
              *pppppuVar41 = *pppppuVar55;
              pppppuVar41[1] = ppppuVar54;
              uVar31 = uVar32 << 1 | 1;
              *pppppuVar55 = ppppuVar43;
              pppppuVar55[1] = ppppuVar28;
              uVar27 = uVar32;
            } while (uVar31 < uVar17);
          }
          if (uVar57 == 0) {
            return;
          }
        } while( true );
      }
      if (param_2 < 0x40) {
        pppuVar14 = *param_1[((param_2 >> 3) * 8 - (param_2 >> 3)) * 2];
        pppuVar23 = *param_1[(param_2 >> 3) * 8];
        pppuVar52 = **param_1;
        pppppuVar41 = param_1 + (param_2 >> 3) * 8;
        if (pppuVar52 < pppuVar23 != pppuVar23 < pppuVar14) {
          pppppuVar41 = param_1 + ((param_2 >> 3) * 8 - (param_2 >> 3)) * 2;
        }
        if (pppuVar52 < pppuVar23 != pppuVar52 < pppuVar14) {
          pppppuVar41 = param_1;
        }
      }
      else {
        pppppuVar41 = (undefined4 *****)FUN_009d2c40(param_1);
      }
      ppppppuVar56 = (undefined4 ******)(param_1 + 2);
      iVar21 = (int)pppppuVar41 - (int)param_1;
      param_4 = (undefined4 *****)((int)param_4 + -1);
      local_130[1] = (undefined4 ******)param_4;
      if ((param_3 == (undefined4 *****)0x0) ||
         (**param_3 < (undefined4 ***)**(uint **)((int)param_1 + iVar21))) {
        ppppuVar54 = *param_1;
        ppppuVar43 = param_1[1];
        puVar19 = (undefined4 *)((int)param_1 + iVar21);
        ppppuVar28 = (undefined4 ****)puVar19[1];
        *param_1 = (undefined4 ****)*puVar19;
        param_1[1] = ppppuVar28;
        *puVar19 = ppppuVar54;
        puVar19[1] = ppppuVar43;
        ppppppuVar26 = (undefined4 ******)(param_1 + 4);
        uVar57 = 0;
        ppppuVar54 = *param_1;
        local_130[3] = (undefined4 ******)param_1[3];
        ppppppuVar20 = (undefined4 ******)(param_1 + param_2 * 2);
        local_130[2] = (undefined4 ******)param_1[2];
        if (ppppppuVar26 < ppppppuVar20 + -2) {
          ppppuVar43 = (undefined4 ****)*ppppuVar54;
          do {
            ppppppuVar13 = ppppppuVar26;
            pppppuVar55 = ppppppuVar13[1];
            ppppppuVar26 = ppppppuVar56 + uVar57 * 2;
            pppppuVar41 = *ppppppuVar26;
            ppppppuVar13[-1] = ppppppuVar26[1];
            ppppuVar28 = **ppppppuVar13;
            ppppppuVar13[-2] = pppppuVar41;
            *ppppppuVar26 = *ppppppuVar13;
            ppppppuVar26[1] = pppppuVar55;
            if (ppppuVar28 < ppppuVar43) {
              uVar57 = uVar57 + 1;
            }
            ppppppuVar39 = ppppppuVar56 + uVar57 * 2;
            pppppuVar41 = *ppppppuVar39;
            pppppuVar55 = ppppppuVar13[3];
            ppppppuVar13[1] = ppppppuVar39[1];
            ppppuVar28 = *ppppppuVar13[2];
            ppppppuVar26 = ppppppuVar13 + 4;
            *ppppppuVar13 = pppppuVar41;
            *ppppppuVar39 = ppppppuVar13[2];
            if (ppppuVar28 < ppppuVar43) {
              uVar57 = uVar57 + 1;
            }
            ppppppuVar39[1] = pppppuVar55;
          } while (ppppppuVar26 < ppppppuVar20 + -2);
          ppppppuVar13 = ppppppuVar13 + 2;
        }
        else {
          ppppppuVar13 = ppppppuVar56;
        }
        ppppuVar54 = (undefined4 ****)*ppppuVar54;
        do {
          ppppppuVar39 = ppppppuVar26;
          if (ppppppuVar26 == ppppppuVar20) {
            ppppppuVar39 = local_130 + 2;
          }
          ppppppuVar42 = ppppppuVar56 + uVar57 * 2;
          if (**ppppppuVar39 < ppppuVar54) {
            uVar57 = uVar57 + 1;
          }
          bVar58 = ppppppuVar26 != ppppppuVar20;
          pppppuVar41 = ppppppuVar42[1];
          *ppppppuVar13 = *ppppppuVar42;
          ppppppuVar13[1] = pppppuVar41;
          pppppuVar41 = ppppppuVar39[1];
          *ppppppuVar42 = *ppppppuVar39;
          ppppppuVar42[1] = pppppuVar41;
          ppppppuVar13 = ppppppuVar26;
          ppppppuVar26 = ppppppuVar26 + 2;
        } while (bVar58);
        local_130[0] = (undefined4 ******)param_3;
        if (param_2 <= uVar57) goto LAB_009d2c3c;
        ppppuVar43 = *param_1;
        ppppuVar28 = param_1[1];
        pppppuVar41 = param_1 + uVar57 * 2;
        ppppuVar54 = pppppuVar41[1];
        *param_1 = *pppppuVar41;
        param_1[1] = ppppuVar54;
        *pppppuVar41 = ppppuVar43;
        pppppuVar41[1] = ppppuVar28;
        FUN_009d1220(param_1,uVar57,param_3,param_4);
        param_2 = param_2 + ~uVar57;
        param_1 = pppppuVar41 + 2;
        param_3 = pppppuVar41;
        if (param_2 < 0x21) break;
        goto LAB_009d27d4;
      }
      ppppuVar54 = *param_1;
      ppppuVar43 = param_1[1];
      puVar19 = (undefined4 *)((int)param_1 + iVar21);
      uVar57 = 0;
      ppppuVar28 = (undefined4 ****)puVar19[1];
      *param_1 = (undefined4 ****)*puVar19;
      param_1[1] = ppppuVar28;
      *puVar19 = ppppuVar54;
      puVar19[1] = ppppuVar43;
      ppppppuVar26 = (undefined4 ******)(param_1 + 4);
      ppppuVar54 = *param_1;
      local_130[3] = (undefined4 ******)param_1[3];
      ppppppuVar20 = (undefined4 ******)(param_1 + param_2 * 2);
      local_130[2] = (undefined4 ******)param_1[2];
      if (ppppppuVar26 < ppppppuVar20 + -2) {
        ppppuVar43 = (undefined4 ****)*ppppuVar54;
        do {
          ppppppuVar13 = ppppppuVar26;
          pppppuVar55 = ppppppuVar13[1];
          ppppppuVar26 = ppppppuVar56 + uVar57 * 2;
          pppppuVar41 = *ppppppuVar26;
          ppppppuVar13[-1] = ppppppuVar26[1];
          ppppuVar28 = **ppppppuVar13;
          ppppppuVar13[-2] = pppppuVar41;
          *ppppppuVar26 = *ppppppuVar13;
          ppppppuVar26[1] = pppppuVar55;
          if (ppppuVar28 <= ppppuVar43) {
            uVar57 = uVar57 + 1;
          }
          ppppppuVar39 = ppppppuVar56 + uVar57 * 2;
          pppppuVar41 = *ppppppuVar39;
          pppppuVar55 = ppppppuVar13[3];
          ppppppuVar13[1] = ppppppuVar39[1];
          ppppuVar28 = *ppppppuVar13[2];
          ppppppuVar26 = ppppppuVar13 + 4;
          *ppppppuVar13 = pppppuVar41;
          *ppppppuVar39 = ppppppuVar13[2];
          ppppppuVar39[1] = pppppuVar55;
          if (ppppuVar28 <= ppppuVar43) {
            uVar57 = uVar57 + 1;
          }
        } while (ppppppuVar26 < ppppppuVar20 + -2);
        ppppppuVar13 = ppppppuVar13 + 2;
      }
      else {
        ppppppuVar13 = ppppppuVar56;
      }
      ppppuVar54 = (undefined4 ****)*ppppuVar54;
      do {
        ppppppuVar39 = ppppppuVar26;
        if (ppppppuVar26 == ppppppuVar20) {
          ppppppuVar39 = local_130 + 2;
        }
        ppppppuVar42 = ppppppuVar56 + uVar57 * 2;
        if (**ppppppuVar39 <= ppppuVar54) {
          uVar57 = uVar57 + 1;
        }
        bVar58 = ppppppuVar26 != ppppppuVar20;
        pppppuVar41 = ppppppuVar42[1];
        *ppppppuVar13 = *ppppppuVar42;
        ppppppuVar13[1] = pppppuVar41;
        pppppuVar41 = ppppppuVar39[1];
        *ppppppuVar42 = *ppppppuVar39;
        ppppppuVar42[1] = pppppuVar41;
        ppppppuVar13 = ppppppuVar26;
        ppppppuVar26 = ppppppuVar26 + 2;
      } while (bVar58);
      if (param_2 <= uVar57) goto LAB_009d2c3c;
      ppppuVar43 = *param_1;
      ppppuVar28 = param_1[1];
      pppppuVar41 = param_1 + uVar57 * 2;
      ppppuVar54 = pppppuVar41[1];
      *param_1 = *pppppuVar41;
      param_1[1] = ppppuVar54;
      *pppppuVar41 = ppppuVar43;
      pppppuVar41[1] = ppppuVar28;
      param_2 = param_2 - (uVar57 + 1);
      param_3 = (undefined4 *****)0x0;
      param_1 = param_1 + (uVar57 + 1) * 2;
    } while (0x20 < param_2);
  }
  uVar57 = param_2 >> 1;
  if (uVar57 != 0) {
    uVar27 = uVar57;
    if (param_2 < 0x12) {
      uVar27 = param_2;
    }
    pppppuVar55 = param_1 + uVar57 * 2;
    pppppuVar41 = param_1;
    do {
      pppppuVar16 = pppppuVar41 + 2;
      if (uVar27 < 0xd) {
        uVar17 = 1;
        if (8 < uVar27) {
          pppppuVar8 = pppppuVar41 + 6;
          pppppuVar7 = pppppuVar41 + 0x10;
          bVar58 = *pppppuVar41[6] < **pppppuVar41;
          ppppuVar54 = pppppuVar41[6];
          pppppuVar11 = pppppuVar41;
          if (bVar58) {
            ppppuVar54 = *pppppuVar41;
            pppppuVar11 = pppppuVar8;
          }
          ppppuVar43 = *pppppuVar11;
          ppppuVar28 = pppppuVar11[1];
          pppppuVar11 = pppppuVar8;
          if (bVar58) {
            pppppuVar11 = pppppuVar41;
          }
          ppppuVar40 = pppppuVar11[1];
          *pppppuVar41 = ppppuVar43;
          pppppuVar41[1] = ppppuVar28;
          pppppuVar49 = pppppuVar41 + 0xe;
          pppppuVar41[6] = ppppuVar54;
          pppppuVar41[7] = ppppuVar40;
          local_130[0] = (undefined4 ******)(pppppuVar41 + 10);
          bVar58 = *pppppuVar41[0xe] < *pppppuVar41[2];
          pppppuVar11 = pppppuVar16;
          if (bVar58) {
            pppppuVar11 = pppppuVar49;
          }
          ppppuVar40 = *pppppuVar11;
          ppppuVar47 = pppppuVar11[1];
          ppppuVar28 = pppppuVar41[0xe];
          pppppuVar11 = pppppuVar49;
          if (bVar58) {
            ppppuVar28 = pppppuVar41[2];
            pppppuVar11 = pppppuVar16;
          }
          pppppuVar41[0xf] = pppppuVar11[1];
          *pppppuVar16 = ppppuVar40;
          pppppuVar41[3] = ppppuVar47;
          pppppuVar41[0xe] = ppppuVar28;
          bVar58 = *pppppuVar41[10] < *pppppuVar41[4];
          local_130[1] = (undefined4 ******)(pppppuVar41 + 4);
          pppppuVar9 = local_130[1];
          pppppuVar11 = local_130[0];
          if (bVar58) {
            pppppuVar9 = local_130[0];
            pppppuVar11 = local_130[1];
          }
          ppppuVar47 = pppppuVar9[1];
          ppppuVar40 = pppppuVar41[10];
          if (bVar58) {
            ppppuVar40 = pppppuVar41[4];
          }
          ppppuVar22 = pppppuVar11[1];
          ppppuVar3 = *pppppuVar9;
          pppppuVar9 = pppppuVar41 + 8;
          pppppuVar41[5] = ppppuVar47;
          pppppuVar41[10] = ppppuVar40;
          pppppuVar41[0xb] = ppppuVar22;
          pppppuVar41[4] = ppppuVar3;
          bVar58 = *pppppuVar41[0x10] < *pppppuVar41[8];
          ppppuVar22 = pppppuVar41[0x10];
          pppppuVar11 = pppppuVar7;
          if (bVar58) {
            ppppuVar22 = pppppuVar41[8];
            pppppuVar11 = pppppuVar9;
          }
          ppppuVar29 = pppppuVar11[1];
          pppppuVar11 = pppppuVar9;
          if (bVar58) {
            pppppuVar11 = pppppuVar7;
          }
          ppppuVar33 = *pppppuVar11;
          ppppuVar44 = pppppuVar11[1];
          pppppuVar41[8] = ppppuVar33;
          pppppuVar41[9] = ppppuVar44;
          pppppuVar41[0x11] = ppppuVar29;
          pppppuVar41[0x10] = ppppuVar22;
          ppppuVar29 = ppppuVar28;
          pppppuVar11 = pppppuVar41;
          if (*ppppuVar28 < *ppppuVar43) {
            ppppuVar29 = ppppuVar43;
            pppppuVar11 = pppppuVar49;
          }
          ppppuVar45 = pppppuVar11[1];
          ppppuVar4 = *pppppuVar11;
          pppppuVar11 = pppppuVar49;
          if (*ppppuVar28 < *ppppuVar43) {
            pppppuVar11 = pppppuVar41;
          }
          ppppuVar43 = pppppuVar11[1];
          *pppppuVar41 = ppppuVar4;
          pppppuVar41[0xf] = ppppuVar43;
          pppppuVar41[0xe] = ppppuVar29;
          pppppuVar41[1] = ppppuVar45;
          pppppuVar11 = pppppuVar9;
          ppppuVar43 = ppppuVar3;
          ppppuVar28 = ppppuVar33;
          if (*ppppuVar33 < *ppppuVar3) {
            pppppuVar11 = local_130[1];
            ppppuVar43 = ppppuVar33;
            ppppuVar28 = ppppuVar3;
          }
          ppppuVar36 = pppppuVar11[1];
          if (*ppppuVar33 < *ppppuVar3) {
            ppppuVar47 = ppppuVar44;
          }
          pppppuVar41[4] = ppppuVar43;
          pppppuVar41[8] = ppppuVar28;
          pppppuVar41[9] = ppppuVar36;
          pppppuVar41[5] = ppppuVar47;
          pppppuVar10 = pppppuVar7;
          pppppuVar11 = pppppuVar8;
          if (*ppppuVar22 < *ppppuVar54) {
            pppppuVar10 = pppppuVar8;
            pppppuVar11 = pppppuVar7;
          }
          if (*ppppuVar22 < *ppppuVar54) {
            ppppuVar22 = ppppuVar54;
          }
          ppppuVar54 = *pppppuVar11;
          ppppuVar3 = pppppuVar11[1];
          pppppuVar41[0x11] = pppppuVar10[1];
          pppppuVar41[6] = ppppuVar54;
          pppppuVar41[7] = ppppuVar3;
          pppppuVar41[0x10] = ppppuVar22;
          bVar58 = *ppppuVar40 <= *pppppuVar41[0xc];
          pppppuVar11 = pppppuVar41 + 0xc;
          if (bVar58) {
            pppppuVar10 = local_130[0];
            ppppuVar40 = pppppuVar41[0xc];
          }
          else {
            pppppuVar10 = pppppuVar11;
          }
          ppppuVar33 = *pppppuVar10;
          ppppuVar44 = pppppuVar10[1];
          pppppuVar10 = pppppuVar11;
          if (!bVar58) {
            pppppuVar10 = local_130[0];
          }
          ppppuVar36 = pppppuVar10[1];
          pppppuVar41[0xc] = ppppuVar40;
          pppppuVar41[10] = ppppuVar33;
          pppppuVar41[0xb] = ppppuVar44;
          pppppuVar41[0xd] = ppppuVar36;
          pppuVar14 = *ppppuVar4;
          pppuVar23 = *ppppuVar43;
          if (pppuVar23 < pppuVar14) {
            pppppuVar10 = pppppuVar41;
            ppppuVar36 = ppppuVar43;
          }
          else {
            pppppuVar10 = local_130[1];
            ppppuVar36 = ppppuVar4;
            ppppuVar4 = ppppuVar43;
          }
          pppppuVar41[5] = pppppuVar10[1];
          *pppppuVar41 = ppppuVar36;
          if (pppuVar23 >= pppuVar14) {
            ppppuVar47 = ppppuVar45;
          }
          ppppuVar43 = pppppuVar41[2];
          pppppuVar41[1] = ppppuVar47;
          pppppuVar41[4] = ppppuVar4;
          ppppuVar45 = pppppuVar41[3];
          if (*ppppuVar54 < *ppppuVar43) {
            ppppuVar45 = ppppuVar3;
          }
          if (*ppppuVar54 < *ppppuVar43) {
            ppppuVar3 = ppppuVar54;
            pppppuVar10 = pppppuVar16;
          }
          else {
            ppppuVar3 = *pppppuVar16;
            ppppuVar43 = ppppuVar54;
            pppppuVar10 = pppppuVar8;
          }
          ppppuVar54 = pppppuVar10[1];
          *pppppuVar16 = ppppuVar3;
          pppppuVar41[6] = ppppuVar43;
          pppppuVar41[3] = ppppuVar45;
          pppppuVar41[7] = ppppuVar54;
          if (*ppppuVar33 < *ppppuVar28) {
            ppppuVar54 = ppppuVar33;
            pppppuVar10 = pppppuVar9;
          }
          else {
            ppppuVar54 = pppppuVar41[8];
            ppppuVar44 = pppppuVar41[9];
            pppppuVar10 = local_130[0];
            ppppuVar28 = ppppuVar33;
          }
          pppppuVar41[0xb] = pppppuVar10[1];
          pppppuVar41[8] = ppppuVar54;
          pppppuVar41[9] = ppppuVar44;
          pppppuVar41[10] = ppppuVar28;
          pppppuVar18 = pppppuVar7;
          pppppuVar10 = pppppuVar49;
          if (*ppppuVar22 < *ppppuVar29) {
            pppppuVar18 = pppppuVar49;
            pppppuVar10 = pppppuVar7;
            ppppuVar22 = ppppuVar29;
          }
          ppppuVar29 = pppppuVar10[1];
          ppppuVar33 = *pppppuVar10;
          ppppuVar37 = pppppuVar18[1];
          pppppuVar41[0x10] = ppppuVar22;
          pppppuVar41[0xe] = ppppuVar33;
          pppppuVar41[0x11] = ppppuVar37;
          pppppuVar41[0xf] = ppppuVar29;
          bVar58 = *ppppuVar54 < *ppppuVar3;
          pppppuVar10 = pppppuVar9;
          if (bVar58) {
            pppppuVar10 = pppppuVar16;
          }
          ppppuVar37 = ppppuVar54;
          if (bVar58) {
            ppppuVar37 = ppppuVar3;
          }
          pppppuVar41[9] = pppppuVar10[1];
          if (!bVar58) {
            ppppuVar54 = ppppuVar3;
          }
          pppppuVar41[8] = ppppuVar37;
          if (!bVar58) {
            ppppuVar44 = ppppuVar45;
          }
          *pppppuVar16 = ppppuVar54;
          pppppuVar41[3] = ppppuVar44;
          pppuVar14 = *ppppuVar43;
          if (pppuVar14 <= *ppppuVar40) {
            pppppuVar10 = pppppuVar8;
            ppppuVar43 = ppppuVar40;
          }
          else {
            pppppuVar10 = pppppuVar11;
          }
          ppppuVar45 = pppppuVar10[1];
          ppppuVar3 = *pppppuVar10;
          pppppuVar10 = pppppuVar11;
          if (pppuVar14 > *ppppuVar40) {
            pppppuVar10 = pppppuVar8;
          }
          pppppuVar41[0xd] = pppppuVar10[1];
          pppppuVar41[6] = ppppuVar3;
          pppppuVar41[7] = ppppuVar45;
          pppppuVar41[0xc] = ppppuVar43;
          bVar58 = *ppppuVar28 <= *ppppuVar33;
          if (bVar58) {
            pppppuVar10 = pppppuVar49;
            ppppuVar28 = ppppuVar33;
          }
          else {
            pppppuVar10 = local_130[0];
          }
          ppppuVar40 = pppppuVar41[10];
          if (!bVar58) {
            ppppuVar40 = ppppuVar33;
          }
          pppppuVar41[0xf] = pppppuVar10[1];
          pppppuVar41[0xe] = ppppuVar28;
          ppppuVar33 = pppppuVar41[0xb];
          if (!bVar58) {
            ppppuVar33 = ppppuVar29;
          }
          pppppuVar41[10] = ppppuVar40;
          pppppuVar41[0xb] = ppppuVar33;
          if (*ppppuVar54 < *ppppuVar36) {
            pppppuVar10 = pppppuVar41;
            ppppuVar47 = ppppuVar36;
          }
          else {
            pppppuVar10 = pppppuVar16;
            ppppuVar44 = ppppuVar47;
            ppppuVar47 = ppppuVar54;
            ppppuVar54 = ppppuVar36;
          }
          ppppuVar29 = pppppuVar10[1];
          *pppppuVar41 = ppppuVar54;
          pppppuVar41[1] = ppppuVar44;
          pppppuVar41[2] = ppppuVar47;
          pppppuVar41[3] = ppppuVar29;
          pppppuVar10 = local_130[1];
          ppppuVar54 = ppppuVar37;
          if (*ppppuVar37 < *ppppuVar4) {
            pppppuVar10 = pppppuVar9;
            ppppuVar54 = ppppuVar4;
          }
          ppppuVar44 = *pppppuVar10;
          ppppuVar29 = pppppuVar10[1];
          pppppuVar10 = pppppuVar9;
          if (*ppppuVar37 < *ppppuVar4) {
            pppppuVar10 = local_130[1];
          }
          ppppuVar4 = pppppuVar10[1];
          pppppuVar41[5] = ppppuVar29;
          pppppuVar41[8] = ppppuVar54;
          pppppuVar41[9] = ppppuVar4;
          pppppuVar41[4] = ppppuVar44;
          pppuVar23 = *ppppuVar3;
          pppuVar14 = *ppppuVar40;
          if (pppuVar14 < pppuVar23) {
            pppppuVar10 = pppppuVar8;
            ppppuVar4 = ppppuVar40;
          }
          else {
            pppppuVar10 = local_130[0];
            ppppuVar4 = ppppuVar3;
            ppppuVar3 = ppppuVar40;
          }
          ppppuVar40 = pppppuVar10[1];
          pppppuVar41[10] = ppppuVar3;
          pppppuVar41[6] = ppppuVar4;
          if (pppuVar14 >= pppuVar23) {
            ppppuVar33 = ppppuVar45;
          }
          pppppuVar41[0xb] = ppppuVar40;
          pppppuVar41[7] = ppppuVar33;
          if (*ppppuVar22 < *ppppuVar43) {
            pppppuVar10 = pppppuVar11;
          }
          else {
            pppppuVar10 = pppppuVar7;
            pppppuVar7 = pppppuVar11;
            ppppuVar43 = ppppuVar22;
          }
          ppppuVar45 = *pppppuVar7;
          ppppuVar40 = pppppuVar7[1];
          ppppuVar22 = pppppuVar10[1];
          pppppuVar41[0x10] = ppppuVar43;
          pppppuVar41[0xc] = ppppuVar45;
          pppppuVar41[0xd] = ppppuVar40;
          pppppuVar41[0x11] = ppppuVar22;
          pppuVar14 = *ppppuVar4;
          pppuVar23 = *ppppuVar44;
          pppppuVar7 = pppppuVar8;
          if (pppuVar14 < pppuVar23) {
            pppppuVar7 = local_130[1];
          }
          pppppuVar41[7] = pppppuVar7[1];
          if (pppuVar14 < pppuVar23) {
            ppppuVar29 = ppppuVar33;
            ppppuVar43 = ppppuVar4;
            ppppuVar4 = ppppuVar44;
          }
          else {
            ppppuVar43 = ppppuVar44;
          }
          pppppuVar41[5] = ppppuVar29;
          pppppuVar41[4] = ppppuVar43;
          pppppuVar41[6] = ppppuVar4;
          pppppuVar10 = local_130[0];
          pppppuVar7 = pppppuVar9;
          if (*ppppuVar3 < *ppppuVar54) {
            pppppuVar10 = pppppuVar9;
            pppppuVar7 = local_130[0];
            ppppuVar3 = ppppuVar54;
          }
          ppppuVar54 = pppppuVar7[1];
          ppppuVar44 = *pppppuVar7;
          ppppuVar22 = pppppuVar10[1];
          pppppuVar41[9] = ppppuVar54;
          pppppuVar41[0xb] = ppppuVar22;
          pppppuVar41[8] = ppppuVar44;
          pppppuVar41[10] = ppppuVar3;
          bVar58 = *ppppuVar28 < *ppppuVar45;
          if (bVar58) {
            ppppuVar28 = ppppuVar45;
          }
          if (bVar58) {
            pppppuVar49 = pppppuVar11;
          }
          ppppuVar36 = pppppuVar49[1];
          ppppuVar33 = pppppuVar41[0xf];
          ppppuVar22 = pppppuVar41[0xe];
          if (!bVar58) {
            ppppuVar33 = ppppuVar40;
            ppppuVar22 = ppppuVar45;
          }
          pppppuVar41[0xe] = ppppuVar28;
          pppppuVar41[0xf] = ppppuVar36;
          pppppuVar41[0xd] = ppppuVar33;
          pppppuVar41[0xc] = ppppuVar22;
          ppppuVar28 = *pppppuVar16;
          pppppuVar7 = local_130[1];
          if (*ppppuVar43 < *ppppuVar47) {
            ppppuVar28 = ppppuVar43;
            pppppuVar7 = pppppuVar16;
          }
          ppppuVar45 = pppppuVar7[1];
          ppppuVar40 = pppppuVar41[3];
          if (*ppppuVar43 < *ppppuVar47) {
            ppppuVar40 = ppppuVar29;
            ppppuVar43 = ppppuVar47;
          }
          pppppuVar41[4] = ppppuVar43;
          pppppuVar41[5] = ppppuVar45;
          *pppppuVar16 = ppppuVar28;
          pppppuVar41[3] = ppppuVar40;
          pppuVar14 = *ppppuVar4;
          if (pppuVar14 <= *ppppuVar44) {
            pppppuVar8 = pppppuVar9;
            ppppuVar4 = ppppuVar44;
          }
          ppppuVar40 = pppppuVar8[1];
          ppppuVar28 = pppppuVar41[6];
          ppppuVar43 = pppppuVar41[7];
          if (pppuVar14 > *ppppuVar44) {
            ppppuVar28 = ppppuVar44;
            ppppuVar43 = ppppuVar54;
          }
          pppppuVar41[7] = ppppuVar43;
          pppppuVar41[6] = ppppuVar28;
          pppppuVar41[9] = ppppuVar40;
          pppppuVar41[8] = ppppuVar4;
          ppppuVar54 = ppppuVar22;
          ppppuVar43 = pppppuVar41[10];
          if (*ppppuVar22 < *ppppuVar3) {
            pppppuVar11 = local_130[0];
            ppppuVar54 = ppppuVar3;
            ppppuVar43 = ppppuVar22;
          }
          ppppuVar40 = pppppuVar11[1];
          ppppuVar28 = pppppuVar41[0xb];
          if (*ppppuVar22 < *ppppuVar3) {
            ppppuVar28 = ppppuVar33;
          }
          pppppuVar41[10] = ppppuVar43;
          pppppuVar41[0xb] = ppppuVar28;
          uVar17 = 9;
          pppppuVar41[0xd] = ppppuVar40;
          pppppuVar41[0xc] = ppppuVar54;
        }
      }
      else {
        pppppuVar7 = pppppuVar41 + 0x18;
        bVar58 = *pppppuVar41[0x18] < **pppppuVar41;
        ppppuVar54 = pppppuVar41[0x18];
        pppppuVar11 = pppppuVar41;
        if (bVar58) {
          ppppuVar54 = *pppppuVar41;
          pppppuVar11 = pppppuVar7;
        }
        ppppuVar43 = pppppuVar11[1];
        pppppuVar8 = pppppuVar7;
        if (bVar58) {
          pppppuVar8 = pppppuVar41;
        }
        ppppuVar28 = pppppuVar8[1];
        *pppppuVar41 = *pppppuVar11;
        pppppuVar41[1] = ppppuVar43;
        pppppuVar41[0x19] = ppppuVar28;
        pppppuVar41[0x18] = ppppuVar54;
        pppppuVar8 = pppppuVar41 + 0x14;
        bVar58 = *pppppuVar41[0x14] < *pppppuVar41[2];
        ppppuVar43 = pppppuVar41[0x14];
        pppppuVar11 = pppppuVar16;
        if (bVar58) {
          ppppuVar43 = pppppuVar41[2];
          pppppuVar11 = pppppuVar8;
        }
        ppppuVar40 = *pppppuVar11;
        ppppuVar28 = pppppuVar11[1];
        pppppuVar11 = pppppuVar8;
        if (bVar58) {
          pppppuVar11 = pppppuVar16;
        }
        pppppuVar41[0x15] = pppppuVar11[1];
        *pppppuVar16 = ppppuVar40;
        pppppuVar41[3] = ppppuVar28;
        pppppuVar41[0x14] = ppppuVar43;
        pppppuVar49 = pppppuVar41 + 0x12;
        pppppuVar10 = pppppuVar41 + 4;
        ppppuVar47 = pppppuVar41[0x12];
        pppppuVar11 = pppppuVar10;
        pppppuVar9 = pppppuVar49;
        if (*pppppuVar41[0x12] < *pppppuVar41[4]) {
          ppppuVar47 = pppppuVar41[4];
          pppppuVar11 = pppppuVar49;
          pppppuVar9 = pppppuVar10;
        }
        ppppuVar3 = pppppuVar11[1];
        ppppuVar29 = *pppppuVar11;
        ppppuVar22 = pppppuVar9[1];
        pppppuVar41[4] = ppppuVar29;
        pppppuVar41[5] = ppppuVar3;
        pppppuVar41[0x13] = ppppuVar22;
        pppppuVar41[0x12] = ppppuVar47;
        pppppuVar18 = pppppuVar41 + 6;
        pppppuVar9 = pppppuVar41 + 0xe;
        bVar58 = *pppppuVar41[0xe] < *pppppuVar41[6];
        ppppuVar22 = pppppuVar41[0xe];
        pppppuVar11 = pppppuVar9;
        if (bVar58) {
          ppppuVar22 = pppppuVar41[6];
          pppppuVar11 = pppppuVar18;
        }
        ppppuVar44 = pppppuVar11[1];
        pppppuVar11 = pppppuVar18;
        if (bVar58) {
          pppppuVar11 = pppppuVar9;
        }
        ppppuVar33 = *pppppuVar11;
        ppppuVar4 = pppppuVar11[1];
        pppppuVar41[7] = ppppuVar4;
        pppppuVar41[6] = ppppuVar33;
        pppppuVar41[0xf] = ppppuVar44;
        pppppuVar41[0xe] = ppppuVar22;
        pppppuVar5 = pppppuVar41 + 0x16;
        bVar58 = *pppppuVar41[0x16] < *pppppuVar41[10];
        pppppuVar35 = pppppuVar41 + 10;
        pppppuVar30 = pppppuVar35;
        pppppuVar11 = pppppuVar5;
        if (bVar58) {
          pppppuVar30 = pppppuVar5;
          pppppuVar11 = pppppuVar35;
        }
        ppppuVar45 = pppppuVar11[1];
        ppppuVar44 = pppppuVar41[0x16];
        if (bVar58) {
          ppppuVar44 = pppppuVar41[10];
        }
        ppppuVar36 = pppppuVar30[1];
        pppppuVar6 = pppppuVar41 + 0xc;
        pppppuVar41[10] = *pppppuVar30;
        local_130[1] = (undefined4 ******)(pppppuVar41 + 0x10);
        pppppuVar41[0xb] = ppppuVar36;
        pppppuVar41[0x17] = ppppuVar45;
        pppppuVar41[0x16] = ppppuVar44;
        bVar58 = *pppppuVar41[0x10] < *pppppuVar41[0xc];
        pppppuVar30 = local_130[1];
        pppppuVar11 = pppppuVar6;
        if (bVar58) {
          pppppuVar30 = pppppuVar6;
          pppppuVar11 = local_130[1];
        }
        ppppuVar45 = *pppppuVar11;
        ppppuVar37 = pppppuVar11[1];
        ppppuVar36 = pppppuVar41[0x10];
        if (bVar58) {
          ppppuVar36 = pppppuVar41[0xc];
        }
        ppppuVar46 = pppppuVar30[1];
        pppppuVar41[0xd] = ppppuVar37;
        pppppuVar41[0xc] = ppppuVar45;
        pppppuVar41[0x11] = ppppuVar46;
        pppppuVar41[0x10] = ppppuVar36;
        bVar58 = *ppppuVar45 < *ppppuVar40;
        pppppuVar11 = pppppuVar6;
        if (bVar58) {
          pppppuVar11 = pppppuVar16;
        }
        ppppuVar46 = ppppuVar40;
        if (bVar58) {
          ppppuVar46 = ppppuVar45;
          ppppuVar45 = ppppuVar40;
        }
        pppppuVar41[0xd] = pppppuVar11[1];
        if (bVar58) {
          ppppuVar28 = ppppuVar37;
        }
        pppppuVar41[0xc] = ppppuVar45;
        pppppuVar41[3] = ppppuVar28;
        *pppppuVar16 = ppppuVar46;
        pppuVar14 = *ppppuVar29;
        pppuVar23 = *ppppuVar33;
        ppppuVar40 = ppppuVar29;
        pppppuVar11 = pppppuVar18;
        if (pppuVar23 < pppuVar14) {
          ppppuVar40 = ppppuVar33;
          pppppuVar11 = pppppuVar10;
          ppppuVar33 = ppppuVar29;
        }
        pppppuVar41[7] = pppppuVar11[1];
        if (pppuVar23 < pppuVar14) {
          ppppuVar3 = ppppuVar4;
        }
        pppppuVar41[4] = ppppuVar40;
        pppppuVar41[5] = ppppuVar3;
        pppppuVar41[6] = ppppuVar33;
        local_130[0] = (undefined4 ******)(pppppuVar41 + 8);
        pppppuVar30 = pppppuVar5;
        pppppuVar11 = local_130[0];
        if (*ppppuVar44 < *pppppuVar41[8]) {
          pppppuVar30 = local_130[0];
          pppppuVar11 = pppppuVar5;
          ppppuVar44 = pppppuVar41[8];
        }
        ppppuVar4 = pppppuVar11[1];
        ppppuVar29 = *pppppuVar11;
        ppppuVar37 = pppppuVar30[1];
        pppppuVar41[8] = ppppuVar29;
        pppppuVar41[9] = ppppuVar4;
        pppppuVar41[0x17] = ppppuVar37;
        pppppuVar41[0x16] = ppppuVar44;
        pppuVar14 = *ppppuVar22;
        if (pppuVar14 <= *ppppuVar47) {
          pppppuVar11 = pppppuVar9;
          ppppuVar22 = ppppuVar47;
        }
        else {
          pppppuVar11 = pppppuVar49;
        }
        ppppuVar15 = *pppppuVar11;
        ppppuVar37 = pppppuVar11[1];
        pppppuVar11 = pppppuVar49;
        if (pppuVar14 > *ppppuVar47) {
          pppppuVar11 = pppppuVar9;
        }
        ppppuVar47 = pppppuVar11[1];
        pppppuVar41[0xe] = ppppuVar15;
        pppppuVar41[0x13] = ppppuVar47;
        pppppuVar41[0x12] = ppppuVar22;
        pppppuVar41[0xf] = ppppuVar37;
        if (*ppppuVar43 < *ppppuVar36) {
          pppppuVar30 = local_130[1];
          pppppuVar11 = pppppuVar8;
        }
        else {
          pppppuVar30 = pppppuVar8;
          pppppuVar11 = local_130[1];
          ppppuVar36 = ppppuVar43;
        }
        ppppuVar47 = *pppppuVar11;
        ppppuVar24 = pppppuVar11[1];
        pppppuVar41[0x15] = pppppuVar30[1];
        ppppuVar38 = *pppppuVar41;
        pppppuVar41[0x10] = ppppuVar47;
        pppppuVar41[0x11] = ppppuVar24;
        pppppuVar41[0x14] = ppppuVar36;
        pppuVar14 = *ppppuVar29;
        pppuVar23 = *ppppuVar38;
        ppppuVar48 = pppppuVar41[1];
        ppppuVar43 = ppppuVar38;
        pppppuVar11 = local_130[0];
        if (pppuVar14 < pppuVar23) {
          ppppuVar48 = ppppuVar4;
          ppppuVar43 = ppppuVar29;
          pppppuVar11 = pppppuVar41;
        }
        ppppuVar4 = pppppuVar11[1];
        *pppppuVar41 = ppppuVar43;
        pppppuVar41[1] = ppppuVar48;
        if (pppuVar14 < pppuVar23) {
          ppppuVar29 = ppppuVar38;
        }
        pppppuVar41[9] = ppppuVar4;
        pppppuVar41[8] = ppppuVar29;
        if (*ppppuVar40 < *ppppuVar46) {
          ppppuVar43 = ppppuVar46;
          pppppuVar11 = pppppuVar16;
        }
        else {
          ppppuVar43 = ppppuVar40;
          pppppuVar11 = pppppuVar10;
          ppppuVar3 = ppppuVar28;
          ppppuVar40 = ppppuVar46;
        }
        ppppuVar28 = pppppuVar11[1];
        *pppppuVar16 = ppppuVar40;
        pppppuVar41[4] = ppppuVar43;
        pppppuVar41[5] = ppppuVar28;
        pppppuVar41[3] = ppppuVar3;
        if (*ppppuVar45 < *ppppuVar33) {
          pppppuVar30 = pppppuVar6;
          pppppuVar11 = pppppuVar18;
        }
        else {
          pppppuVar30 = pppppuVar18;
          pppppuVar11 = pppppuVar6;
          ppppuVar33 = ppppuVar45;
        }
        ppppuVar40 = *pppppuVar30;
        ppppuVar3 = pppppuVar30[1];
        ppppuVar28 = pppppuVar11[1];
        pppppuVar41[0xc] = ppppuVar33;
        pppppuVar41[6] = ppppuVar40;
        pppppuVar41[7] = ppppuVar3;
        pppppuVar41[0xd] = ppppuVar28;
        pppuVar14 = *ppppuVar15;
        pppuVar23 = *ppppuVar47;
        pppppuVar11 = local_130[1];
        ppppuVar28 = ppppuVar15;
        if (pppuVar23 < pppuVar14) {
          pppppuVar11 = pppppuVar9;
          ppppuVar28 = ppppuVar47;
        }
        ppppuVar40 = pppppuVar11[1];
        pppppuVar41[0xe] = ppppuVar28;
        if (pppuVar23 < pppuVar14) {
          ppppuVar47 = ppppuVar15;
          ppppuVar37 = ppppuVar24;
        }
        pppppuVar41[0xf] = ppppuVar37;
        pppppuVar41[0x10] = ppppuVar47;
        pppppuVar41[0x11] = ppppuVar40;
        pppppuVar11 = pppppuVar49;
        ppppuVar28 = ppppuVar36;
        if (*ppppuVar36 < *ppppuVar22) {
          pppppuVar11 = pppppuVar8;
          ppppuVar28 = ppppuVar22;
        }
        ppppuVar40 = pppppuVar11[1];
        ppppuVar3 = *pppppuVar11;
        pppppuVar11 = pppppuVar8;
        if (*ppppuVar36 < *ppppuVar22) {
          pppppuVar11 = pppppuVar49;
        }
        ppppuVar22 = pppppuVar11[1];
        pppppuVar41[0x12] = ppppuVar3;
        pppppuVar41[0x13] = ppppuVar40;
        pppppuVar41[0x14] = ppppuVar28;
        pppppuVar41[0x15] = ppppuVar22;
        pppuVar14 = *ppppuVar44;
        if (pppuVar14 <= *ppppuVar54) {
          pppppuVar11 = pppppuVar5;
          ppppuVar44 = ppppuVar54;
        }
        else {
          pppppuVar11 = pppppuVar7;
        }
        ppppuVar22 = pppppuVar11[1];
        ppppuVar4 = *pppppuVar11;
        pppppuVar11 = pppppuVar7;
        if (pppuVar14 > *ppppuVar54) {
          pppppuVar11 = pppppuVar5;
        }
        ppppuVar54 = pppppuVar11[1];
        pppppuVar41[0x16] = ppppuVar4;
        pppppuVar41[0x18] = ppppuVar44;
        pppppuVar41[0x19] = ppppuVar54;
        pppppuVar41[0x17] = ppppuVar22;
        ppppuVar54 = ppppuVar33;
        if (*ppppuVar33 < *ppppuVar29) {
          ppppuVar54 = ppppuVar29;
        }
        pppppuVar30 = pppppuVar6;
        pppppuVar11 = local_130[0];
        if (*ppppuVar33 < *ppppuVar29) {
          pppppuVar30 = local_130[0];
          pppppuVar11 = pppppuVar6;
        }
        ppppuVar45 = *pppppuVar11;
        ppppuVar33 = pppppuVar11[1];
        ppppuVar36 = pppppuVar30[1];
        pppppuVar41[0xc] = ppppuVar54;
        ppppuVar29 = pppppuVar41[10];
        pppppuVar41[0xd] = ppppuVar36;
        pppppuVar41[9] = ppppuVar33;
        pppppuVar41[8] = ppppuVar45;
        pppuVar14 = *ppppuVar3;
        pppuVar23 = *ppppuVar29;
        if (pppuVar23 <= pppuVar14) {
          ppppuVar36 = pppppuVar41[10];
          pppppuVar11 = pppppuVar49;
          ppppuVar29 = ppppuVar3;
        }
        else {
          ppppuVar36 = ppppuVar3;
          pppppuVar11 = pppppuVar35;
        }
        pppppuVar41[0x13] = pppppuVar11[1];
        ppppuVar3 = pppppuVar41[0xb];
        if (pppuVar23 > pppuVar14) {
          ppppuVar3 = ppppuVar40;
        }
        pppppuVar41[10] = ppppuVar36;
        pppppuVar41[0xb] = ppppuVar3;
        pppppuVar41[0x12] = ppppuVar29;
        pppuVar14 = *ppppuVar47;
        pppuVar23 = *ppppuVar4;
        if (pppuVar23 < pppuVar14) {
          pppppuVar11 = local_130[1];
        }
        else {
          ppppuVar47 = ppppuVar4;
          pppppuVar11 = pppppuVar5;
        }
        pppppuVar41[0x17] = pppppuVar11[1];
        ppppuVar37 = pppppuVar41[0x11];
        ppppuVar40 = pppppuVar41[0x10];
        if (pppuVar23 < pppuVar14) {
          ppppuVar37 = ppppuVar22;
          ppppuVar40 = ppppuVar4;
        }
        pppppuVar41[0x10] = ppppuVar40;
        pppppuVar41[0x16] = ppppuVar47;
        pppppuVar41[0x11] = ppppuVar37;
        pppppuVar30 = pppppuVar7;
        pppppuVar11 = pppppuVar8;
        if (*ppppuVar44 < *ppppuVar28) {
          pppppuVar30 = pppppuVar8;
          pppppuVar11 = pppppuVar7;
          ppppuVar44 = ppppuVar28;
        }
        ppppuVar28 = pppppuVar11[1];
        ppppuVar4 = *pppppuVar11;
        ppppuVar22 = pppppuVar30[1];
        pppppuVar41[0x18] = ppppuVar44;
        ppppuVar44 = *pppppuVar41;
        pppppuVar41[0x14] = ppppuVar4;
        pppppuVar41[0x19] = ppppuVar22;
        pppppuVar41[0x15] = ppppuVar28;
        bVar58 = *ppppuVar36 < *ppppuVar44;
        pppppuVar11 = pppppuVar35;
        if (bVar58) {
          pppppuVar11 = pppppuVar41;
        }
        ppppuVar22 = pppppuVar41[1];
        if (bVar58) {
          ppppuVar22 = ppppuVar3;
        }
        pppppuVar41[0xb] = pppppuVar11[1];
        if (bVar58) {
          ppppuVar3 = ppppuVar36;
          ppppuVar36 = ppppuVar44;
        }
        else {
          ppppuVar3 = ppppuVar44;
        }
        *pppppuVar41 = ppppuVar3;
        pppppuVar41[1] = ppppuVar22;
        pppppuVar41[10] = ppppuVar36;
        bVar58 = *ppppuVar40 < *pppppuVar41[6];
        ppppuVar44 = pppppuVar41[7];
        if (bVar58) {
          ppppuVar44 = ppppuVar37;
        }
        ppppuVar46 = ppppuVar40;
        pppppuVar11 = local_130[1];
        ppppuVar37 = pppppuVar41[6];
        if (bVar58) {
          ppppuVar46 = pppppuVar41[6];
          pppppuVar11 = pppppuVar18;
          ppppuVar37 = ppppuVar40;
        }
        ppppuVar40 = pppppuVar11[1];
        pppppuVar41[6] = ppppuVar37;
        pppppuVar41[7] = ppppuVar44;
        pppppuVar41[0x11] = ppppuVar40;
        pppppuVar41[0x10] = ppppuVar46;
        bVar58 = *ppppuVar45 <= *pppppuVar41[0xe];
        ppppuVar40 = pppppuVar41[0xf];
        ppppuVar44 = pppppuVar41[0xe];
        if (!bVar58) {
          ppppuVar44 = ppppuVar45;
        }
        if (bVar58) {
          pppppuVar11 = pppppuVar9;
          ppppuVar40 = ppppuVar33;
        }
        else {
          pppppuVar11 = local_130[0];
        }
        ppppuVar37 = pppppuVar11[1];
        ppppuVar33 = pppppuVar41[0xe];
        if (bVar58) {
          ppppuVar33 = ppppuVar45;
        }
        pppppuVar41[0xe] = ppppuVar44;
        pppppuVar41[8] = ppppuVar33;
        pppppuVar41[9] = ppppuVar40;
        pppppuVar41[0xf] = ppppuVar37;
        bVar58 = *ppppuVar47 < *ppppuVar54;
        pppppuVar11 = pppppuVar6;
        if (bVar58) {
          pppppuVar11 = pppppuVar5;
        }
        ppppuVar40 = *pppppuVar11;
        ppppuVar33 = pppppuVar11[1];
        pppppuVar11 = pppppuVar5;
        if (bVar58) {
          pppppuVar11 = pppppuVar6;
        }
        pppppuVar41[0x17] = pppppuVar11[1];
        if (bVar58) {
          ppppuVar47 = ppppuVar54;
        }
        pppppuVar41[0xc] = ppppuVar40;
        pppppuVar41[0xd] = ppppuVar33;
        pppppuVar41[0x16] = ppppuVar47;
        bVar58 = *ppppuVar29 <= *ppppuVar4;
        pppppuVar11 = pppppuVar8;
        ppppuVar54 = pppppuVar41[0x12];
        if (!bVar58) {
          pppppuVar11 = pppppuVar49;
          ppppuVar54 = ppppuVar4;
        }
        pppppuVar41[0x15] = pppppuVar11[1];
        if (bVar58) {
          ppppuVar29 = ppppuVar4;
        }
        pppppuVar41[0x12] = ppppuVar54;
        pppppuVar41[0x14] = ppppuVar29;
        ppppuVar4 = pppppuVar41[0x13];
        if (!bVar58) {
          ppppuVar4 = ppppuVar28;
        }
        pppppuVar41[0x13] = ppppuVar4;
        bVar58 = *pppppuVar41[2] < *ppppuVar3;
        if (bVar58) {
          ppppuVar28 = *pppppuVar16;
          pppppuVar11 = pppppuVar41;
        }
        else {
          ppppuVar28 = ppppuVar3;
          pppppuVar11 = pppppuVar16;
        }
        if (!bVar58) {
          ppppuVar3 = pppppuVar41[2];
        }
        ppppuVar37 = pppppuVar11[1];
        ppppuVar45 = pppppuVar41[3];
        if (!bVar58) {
          ppppuVar45 = ppppuVar22;
        }
        *pppppuVar41 = ppppuVar28;
        pppppuVar41[1] = ppppuVar45;
        pppppuVar41[2] = ppppuVar3;
        pppppuVar41[3] = ppppuVar37;
        pppppuVar11 = pppppuVar10;
        if (*ppppuVar36 < *ppppuVar43) {
          pppppuVar11 = pppppuVar35;
        }
        ppppuVar28 = *pppppuVar11;
        ppppuVar22 = pppppuVar11[1];
        pppppuVar11 = pppppuVar35;
        if (*ppppuVar36 < *ppppuVar43) {
          pppppuVar11 = pppppuVar10;
          ppppuVar36 = ppppuVar43;
        }
        ppppuVar43 = pppppuVar11[1];
        pppppuVar41[4] = ppppuVar28;
        pppppuVar41[10] = ppppuVar36;
        pppppuVar41[5] = ppppuVar22;
        pppppuVar41[0xb] = ppppuVar43;
        pppuVar14 = *ppppuVar40;
        pppuVar23 = *ppppuVar54;
        if (pppuVar23 < pppuVar14) {
          pppppuVar11 = pppppuVar6;
          ppppuVar43 = ppppuVar54;
        }
        else {
          pppppuVar11 = pppppuVar49;
          ppppuVar43 = ppppuVar40;
          ppppuVar40 = ppppuVar54;
        }
        pppppuVar41[0x13] = pppppuVar11[1];
        if (pppuVar23 >= pppuVar14) {
          ppppuVar4 = ppppuVar33;
        }
        pppppuVar41[0xc] = ppppuVar43;
        pppppuVar41[0xd] = ppppuVar4;
        pppppuVar41[0x12] = ppppuVar40;
        pppppuVar7 = pppppuVar9;
        pppppuVar11 = local_130[1];
        if (*ppppuVar46 < *ppppuVar44) {
          pppppuVar7 = local_130[1];
          pppppuVar11 = pppppuVar9;
        }
        ppppuVar54 = *pppppuVar7;
        if (*ppppuVar46 >= *ppppuVar44) {
          ppppuVar44 = ppppuVar46;
        }
        ppppuVar33 = pppppuVar11[1];
        pppppuVar41[0xf] = pppppuVar7[1];
        pppppuVar41[0x10] = ppppuVar44;
        pppppuVar41[0xe] = ppppuVar54;
        pppppuVar41[0x11] = ppppuVar33;
        pppuVar14 = *ppppuVar29;
        pppuVar23 = *ppppuVar47;
        pppppuVar7 = pppppuVar5;
        pppppuVar11 = pppppuVar8;
        if (pppuVar23 < pppuVar14) {
          pppppuVar7 = pppppuVar8;
          pppppuVar11 = pppppuVar5;
        }
        ppppuVar54 = *pppppuVar11;
        ppppuVar33 = pppppuVar11[1];
        pppppuVar41[0x17] = pppppuVar7[1];
        if (pppuVar23 >= pppuVar14) {
          ppppuVar29 = ppppuVar47;
        }
        pppppuVar41[0x14] = ppppuVar54;
        pppppuVar41[0x16] = ppppuVar29;
        pppppuVar41[0x15] = ppppuVar33;
        bVar58 = *ppppuVar3 <= *pppppuVar41[6];
        if (bVar58) {
          pppppuVar11 = pppppuVar16;
          ppppuVar3 = pppppuVar41[6];
        }
        else {
          pppppuVar11 = pppppuVar18;
        }
        ppppuVar29 = *pppppuVar11;
        ppppuVar47 = pppppuVar11[1];
        pppppuVar11 = pppppuVar18;
        if (!bVar58) {
          pppppuVar11 = pppppuVar16;
        }
        ppppuVar45 = pppppuVar11[1];
        pppppuVar41[3] = ppppuVar47;
        pppppuVar41[7] = ppppuVar45;
        *pppppuVar16 = ppppuVar29;
        pppppuVar41[6] = ppppuVar3;
        bVar58 = *pppppuVar41[8] < *ppppuVar28;
        ppppuVar45 = pppppuVar41[8];
        if (bVar58) {
          ppppuVar45 = ppppuVar28;
        }
        if (bVar58) {
          ppppuVar22 = pppppuVar41[9];
          ppppuVar28 = pppppuVar41[8];
          pppppuVar11 = pppppuVar10;
        }
        else {
          pppppuVar11 = local_130[0];
        }
        ppppuVar37 = pppppuVar11[1];
        pppppuVar41[4] = ppppuVar28;
        pppppuVar41[5] = ppppuVar22;
        pppppuVar41[9] = ppppuVar37;
        pppppuVar41[8] = ppppuVar45;
        bVar58 = *ppppuVar43 < *ppppuVar36;
        ppppuVar46 = ppppuVar43;
        ppppuVar37 = pppppuVar41[10];
        if (bVar58) {
          ppppuVar46 = ppppuVar36;
          ppppuVar37 = ppppuVar43;
        }
        pppppuVar11 = pppppuVar6;
        if (bVar58) {
          pppppuVar11 = pppppuVar35;
        }
        ppppuVar36 = pppppuVar11[1];
        pppppuVar41[0xc] = ppppuVar46;
        pppppuVar41[10] = ppppuVar37;
        ppppuVar43 = pppppuVar41[0xb];
        if (bVar58) {
          ppppuVar43 = ppppuVar4;
        }
        pppppuVar41[0xd] = ppppuVar36;
        pppppuVar41[0xb] = ppppuVar43;
        pppuVar23 = *ppppuVar40;
        pppuVar14 = *ppppuVar54;
        if (pppuVar23 <= pppuVar14) {
          ppppuVar4 = pppppuVar41[0x12];
          ppppuVar40 = ppppuVar54;
        }
        else {
          pppppuVar8 = pppppuVar49;
          ppppuVar4 = ppppuVar54;
        }
        ppppuVar54 = pppppuVar8[1];
        pppppuVar41[0x12] = ppppuVar4;
        pppppuVar41[0x15] = ppppuVar54;
        ppppuVar54 = pppppuVar41[0x13];
        if (pppuVar23 > pppuVar14) {
          ppppuVar54 = ppppuVar33;
        }
        pppppuVar41[0x13] = ppppuVar54;
        pppppuVar41[0x14] = ppppuVar40;
        if (*ppppuVar28 < *ppppuVar29) {
          ppppuVar54 = ppppuVar28;
          pppppuVar11 = pppppuVar16;
        }
        else {
          ppppuVar54 = ppppuVar29;
          ppppuVar22 = ppppuVar47;
          pppppuVar11 = pppppuVar10;
        }
        ppppuVar40 = pppppuVar11[1];
        if (*ppppuVar28 < *ppppuVar29) {
          ppppuVar28 = ppppuVar29;
        }
        pppppuVar41[3] = ppppuVar22;
        *pppppuVar16 = ppppuVar54;
        pppppuVar41[5] = ppppuVar40;
        pppppuVar41[4] = ppppuVar28;
        bVar58 = *ppppuVar45 < *ppppuVar3;
        pppppuVar16 = pppppuVar18;
        if (bVar58) {
          pppppuVar16 = local_130[0];
        }
        ppppuVar54 = *pppppuVar16;
        ppppuVar40 = pppppuVar16[1];
        pppppuVar16 = local_130[0];
        if (bVar58) {
          pppppuVar16 = pppppuVar18;
        }
        ppppuVar47 = pppppuVar16[1];
        if (bVar58) {
          ppppuVar45 = ppppuVar3;
        }
        pppppuVar41[7] = ppppuVar40;
        pppppuVar41[6] = ppppuVar54;
        pppppuVar41[8] = ppppuVar45;
        pppppuVar41[9] = ppppuVar47;
        bVar58 = *pppppuVar41[0xe] < *ppppuVar37;
        pppppuVar16 = pppppuVar9;
        ppppuVar47 = pppppuVar41[0xe];
        if (bVar58) {
          pppppuVar16 = pppppuVar35;
          ppppuVar47 = ppppuVar37;
        }
        ppppuVar22 = pppppuVar41[0xe];
        if (!bVar58) {
          ppppuVar22 = ppppuVar37;
        }
        ppppuVar3 = pppppuVar41[0xf];
        if (!bVar58) {
          ppppuVar3 = ppppuVar43;
        }
        pppppuVar41[0xf] = pppppuVar16[1];
        pppppuVar41[0xb] = ppppuVar3;
        pppppuVar41[10] = ppppuVar22;
        pppppuVar41[0xe] = ppppuVar47;
        pppuVar14 = *ppppuVar46;
        if (pppuVar14 <= *ppppuVar44) {
          pppppuVar16 = pppppuVar6;
          ppppuVar46 = ppppuVar44;
        }
        else {
          pppppuVar16 = local_130[1];
        }
        ppppuVar43 = pppppuVar16[1];
        ppppuVar29 = *pppppuVar16;
        pppppuVar16 = local_130[1];
        if (pppuVar14 > *ppppuVar44) {
          pppppuVar16 = pppppuVar6;
        }
        ppppuVar44 = pppppuVar16[1];
        pppppuVar41[0xd] = ppppuVar43;
        pppppuVar41[0x11] = ppppuVar44;
        pppppuVar41[0xc] = ppppuVar29;
        pppppuVar41[0x10] = ppppuVar46;
        bVar58 = *ppppuVar28 <= *ppppuVar54;
        if (bVar58) {
          pppppuVar10 = pppppuVar18;
          ppppuVar28 = ppppuVar54;
        }
        ppppuVar33 = pppppuVar10[1];
        ppppuVar44 = pppppuVar41[4];
        if (!bVar58) {
          ppppuVar44 = ppppuVar54;
        }
        pppppuVar41[4] = ppppuVar44;
        ppppuVar54 = pppppuVar41[5];
        if (!bVar58) {
          ppppuVar54 = ppppuVar40;
        }
        pppppuVar41[5] = ppppuVar54;
        pppppuVar41[7] = ppppuVar33;
        pppppuVar41[6] = ppppuVar28;
        pppuVar14 = *ppppuVar45;
        if (pppuVar14 <= *ppppuVar22) {
          pppppuVar16 = pppppuVar35;
          ppppuVar3 = pppppuVar41[9];
          ppppuVar45 = ppppuVar22;
        }
        else {
          pppppuVar16 = local_130[0];
        }
        ppppuVar40 = pppppuVar16[1];
        ppppuVar54 = pppppuVar41[8];
        if (pppuVar14 > *ppppuVar22) {
          ppppuVar54 = ppppuVar22;
        }
        pppppuVar41[10] = ppppuVar45;
        pppppuVar41[0xb] = ppppuVar40;
        pppppuVar41[9] = ppppuVar3;
        pppppuVar41[8] = ppppuVar54;
        bVar58 = *ppppuVar47 < *ppppuVar29;
        if (bVar58) {
          pppppuVar9 = pppppuVar6;
        }
        ppppuVar40 = pppppuVar41[0xf];
        if (bVar58) {
          ppppuVar22 = pppppuVar41[0xe];
          ppppuVar47 = ppppuVar29;
        }
        else {
          ppppuVar22 = ppppuVar29;
        }
        pppppuVar41[0xf] = pppppuVar9[1];
        if (!bVar58) {
          ppppuVar40 = ppppuVar43;
        }
        pppppuVar41[0xe] = ppppuVar47;
        pppppuVar41[0xd] = ppppuVar40;
        pppppuVar41[0xc] = ppppuVar22;
        if (*pppppuVar41[0x12] < *ppppuVar46) {
          pppppuVar16 = pppppuVar49;
          pppppuVar49 = local_130[1];
        }
        else {
          pppppuVar16 = local_130[1];
          ppppuVar46 = pppppuVar41[0x12];
        }
        ppppuVar47 = pppppuVar49[1];
        ppppuVar43 = pppppuVar16[1];
        pppppuVar41[0x10] = *pppppuVar16;
        pppppuVar41[0x12] = ppppuVar46;
        pppppuVar41[0x13] = ppppuVar47;
        pppppuVar41[0x11] = ppppuVar43;
        ppppuVar47 = pppppuVar41[7];
        pppppuVar16 = local_130[0];
        ppppuVar43 = pppppuVar41[6];
        if (*ppppuVar54 < *ppppuVar28) {
          ppppuVar47 = ppppuVar3;
          pppppuVar16 = pppppuVar18;
          ppppuVar43 = ppppuVar54;
        }
        ppppuVar3 = pppppuVar16[1];
        if (*ppppuVar54 < *ppppuVar28) {
          ppppuVar54 = ppppuVar28;
        }
        pppppuVar41[6] = ppppuVar43;
        pppppuVar41[7] = ppppuVar47;
        pppppuVar41[8] = ppppuVar54;
        pppppuVar41[9] = ppppuVar3;
        ppppuVar28 = ppppuVar22;
        ppppuVar54 = pppppuVar41[0xb];
        ppppuVar43 = pppppuVar41[10];
        if (*ppppuVar22 < *ppppuVar45) {
          ppppuVar28 = ppppuVar45;
          pppppuVar6 = pppppuVar35;
          ppppuVar54 = ppppuVar40;
          ppppuVar43 = ppppuVar22;
        }
        ppppuVar40 = pppppuVar6[1];
        pppppuVar41[10] = ppppuVar43;
        pppppuVar41[0xd] = ppppuVar40;
        uVar17 = 0xd;
        pppppuVar41[0xb] = ppppuVar54;
        pppppuVar41[0xc] = ppppuVar28;
      }
      if (uVar27 <= uVar17 - 1) {
LAB_009d2c3c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x9d2c3c);
        (*pcVar1)();
      }
      if (uVar17 != uVar27) {
        iVar53 = uVar17 * -8 + 8;
        pppppuVar16 = pppppuVar41 + uVar17 * 2;
        iVar21 = uVar17 << 3;
        do {
          ppppuVar54 = *pppppuVar16;
          pppuVar14 = *ppppuVar54;
          if (pppuVar14 < *pppppuVar16[-2]) {
            ppppuVar43 = pppppuVar16[1];
            iVar25 = iVar53;
            iVar50 = iVar21;
            do {
              uVar12 = ((undefined4 *)((int)pppppuVar41 - iVar25))[1];
              *(undefined4 *)((int)pppppuVar41 + iVar50) =
                   *(undefined4 *)((int)pppppuVar41 - iVar25);
              ((undefined4 *)((int)pppppuVar41 + iVar50))[1] = uVar12;
              if (iVar50 == 8) {
                pppppuVar11 = pppppuVar41;
                goto LAB_009d2700;
              }
              iVar25 = iVar25 + 8;
              iVar51 = iVar50 + -8;
              iVar2 = iVar50 + -0x10;
              iVar50 = iVar51;
            } while (pppuVar14 < (undefined4 ***)**(uint **)((int)pppppuVar41 + iVar2));
            pppppuVar11 = (undefined4 *****)((int)pppppuVar41 + iVar51);
LAB_009d2700:
            *pppppuVar11 = ppppuVar54;
            pppppuVar11[1] = ppppuVar43;
          }
          pppppuVar16 = pppppuVar16 + 2;
          iVar53 = iVar53 + -8;
          iVar21 = iVar21 + 8;
        } while (pppppuVar16 != pppppuVar41 + uVar27 * 2);
      }
      if (param_2 < 0x12) {
        return;
      }
      bVar58 = pppppuVar41 == param_1;
      uVar27 = param_2 - uVar57;
      pppppuVar41 = pppppuVar55;
    } while (bVar58);
    pppppuVar16 = pppppuVar55 + -2;
    local_130[1] = local_130 + param_2 * 2;
    pppppuVar11 = param_1 + param_2 * 2 + -2;
    pppppuVar41 = param_1;
    iVar21 = 0;
    do {
      iVar53 = iVar21;
      pppuVar14 = **pppppuVar16;
      bVar58 = **pppppuVar55 < **pppppuVar41;
      pppppuVar7 = pppppuVar41;
      if (bVar58) {
        pppppuVar7 = pppppuVar55;
      }
      ppppuVar43 = pppppuVar7[1];
      *(undefined4 *****)((int)local_130 + iVar53 + 8) = *pppppuVar7;
      ppppuVar54 = *pppppuVar11;
      *(undefined4 *****)((int)local_130 + iVar53 + 0xc) = ppppuVar43;
      pppppuVar55 = pppppuVar55 + (uint)bVar58 * 2;
      iVar21 = 0;
      pppppuVar7 = pppppuVar11;
      if (*ppppuVar54 < pppuVar14) {
        iVar21 = -1;
        pppppuVar7 = pppppuVar16;
      }
      pppppuVar16 = pppppuVar16 + iVar21 * 2;
      iVar21 = 0;
      ppppuVar43 = pppppuVar7[1];
      if (*ppppuVar54 >= pppuVar14) {
        iVar21 = -1;
      }
      *(undefined4 *)((int)local_130[1] - iVar53) = *pppppuVar7;
      pppppuVar41 = pppppuVar41 + (uint)!bVar58 * 2;
      pppppuVar11 = pppppuVar11 + iVar21 * 2;
      uVar57 = uVar57 - 1;
      ((undefined4 *)((int)local_130[1] - iVar53))[1] = ppppuVar43;
      iVar21 = iVar53 + 8;
    } while (uVar57 != 0);
    pppppuVar16 = pppppuVar16 + 2;
    if ((param_2 & 1) != 0) {
      bVar58 = pppppuVar16 <= pppppuVar41;
      pppppuVar7 = pppppuVar55;
      if (!bVar58) {
        pppppuVar7 = pppppuVar41;
      }
      ppppuVar54 = pppppuVar7[1];
      *(undefined4 *****)((int)local_130 + iVar53 + 0x10) = *pppppuVar7;
      *(undefined4 *****)((int)local_130 + iVar53 + 0x14) = ppppuVar54;
      pppppuVar55 = pppppuVar55 + (uint)bVar58 * 2;
      pppppuVar41 = pppppuVar41 + (uint)!bVar58 * 2;
    }
    bVar58 = pppppuVar41 == pppppuVar16;
    if (bVar58) {
      pppppuVar41 = pppppuVar11 + 2;
    }
    if (!bVar58 || pppppuVar55 != pppppuVar41) {
      FUN_00fb7254();
    }
    FUN_016dd1aa(param_1,local_130 + 2,param_2 << 3);
  }
  return;
}

