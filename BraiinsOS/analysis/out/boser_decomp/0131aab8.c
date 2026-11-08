// FUN_0131aab8 @ 0131aab8 size=2108 calls_out=0 calls_in=1
// strings: 

void FUN_0131aab8(int *param_1,uint *param_2,uint *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  bool bVar63;
  bool bVar64;
  bool bVar65;
  bool bVar66;
  bool bVar67;
  bool bVar68;
  bool bVar69;
  bool bVar70;
  
  uVar17 = param_3[4];
  uVar41 = param_2[8];
  uVar2 = (ulonglong)uVar17 * 0x13;
  uVar21 = param_2[9];
  uVar3 = (uVar2 & 0xffffffff) * (ulonglong)uVar41;
  uVar45 = (uint)uVar3;
  lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar21 + (uVar3 >> 0x20);
  uVar34 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar18 = param_3[5];
  uVar19 = uVar18 * 0x13 + (int)(uVar2 >> 0x20);
  lVar4 = (ulonglong)uVar19 * (ulonglong)uVar41;
  uVar37 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar47 = (uint)(lVar1 + lVar4);
  uVar27 = param_2[2];
  uVar31 = *param_2;
  uVar38 = param_2[1];
  lVar1 = (ulonglong)uVar19 * (ulonglong)uVar21 +
          (ulonglong)
          CONCAT14(CARRY4(uVar34,uVar37) ||
                   CARRY4(uVar34 + uVar37,(uint)CARRY4((uint)lVar4,(uint)lVar1)),
                   (int)((ulonglong)(lVar1 + lVar4) >> 0x20));
  uVar57 = (uint)lVar1;
  uVar22 = param_3[2];
  uVar28 = param_2[3];
  uVar34 = *param_3;
  uVar35 = param_3[3];
  uVar43 = (uint)((ulonglong)uVar22 * (ulonglong)uVar31);
  uVar37 = param_3[1];
  lVar4 = (ulonglong)uVar22 * (ulonglong)uVar38 + ((ulonglong)uVar22 * (ulonglong)uVar31 >> 0x20);
  uVar20 = (uint)((ulonglong)lVar4 >> 0x20);
  lVar5 = (ulonglong)uVar35 * (ulonglong)uVar31;
  uVar23 = (uint)((ulonglong)lVar5 >> 0x20);
  uVar32 = param_2[7];
  uVar49 = (uint)(lVar4 + lVar5);
  uVar46 = uVar45 + uVar43;
  lVar4 = (ulonglong)uVar35 * (ulonglong)uVar38 +
          (ulonglong)
          CONCAT14(CARRY4(uVar20,uVar23) ||
                   CARRY4(uVar20 + uVar23,(uint)CARRY4((uint)lVar5,(uint)lVar4)),
                   (int)((ulonglong)(lVar4 + lVar5) >> 0x20));
  uVar20 = (uint)lVar4;
  bVar63 = CARRY4(uVar47,uVar49) || CARRY4(uVar47 + uVar49,(uint)CARRY4(uVar45,uVar43));
  uVar50 = uVar47 + uVar49 + (uint)CARRY4(uVar45,uVar43);
  uVar36 = param_2[6];
  uVar44 = uVar57 + uVar20 + (uint)bVar63;
  uVar23 = param_3[6];
  uVar3 = (ulonglong)uVar23 * 0x13;
  uVar6 = (uVar3 & 0xffffffff) * (ulonglong)uVar36;
  uVar58 = (uint)uVar6;
  lVar5 = (uVar3 & 0xffffffff) * (ulonglong)uVar32 + (uVar6 >> 0x20);
  uVar43 = (uint)((ulonglong)lVar5 >> 0x20);
  uVar39 = param_3[7];
  uVar40 = uVar39 * 0x13 + (int)(uVar3 >> 0x20);
  lVar7 = (ulonglong)uVar40 * (ulonglong)uVar36;
  uVar47 = (uint)((ulonglong)lVar7 >> 0x20);
  uVar45 = (uint)(lVar5 + lVar7);
  uVar49 = uVar46 + uVar58;
  lVar5 = (ulonglong)uVar40 * (ulonglong)uVar32 +
          (ulonglong)
          CONCAT14(CARRY4(uVar43,uVar47) ||
                   CARRY4(uVar43 + uVar47,(uint)CARRY4((uint)lVar7,(uint)lVar5)),
                   (int)((ulonglong)(lVar5 + lVar7) >> 0x20));
  uVar43 = (uint)lVar5;
  bVar64 = CARRY4(uVar50,uVar45) || CARRY4(uVar50 + uVar45,(uint)CARRY4(uVar46,uVar58));
  uVar48 = uVar50 + uVar45 + (uint)CARRY4(uVar46,uVar58);
  uVar51 = param_2[4];
  uVar59 = uVar44 + uVar43 + (uint)bVar64;
  uVar45 = param_3[8];
  uVar24 = param_3[9];
  uVar29 = param_2[5];
  uVar6 = (ulonglong)uVar45 * 0x13;
  uVar26 = uVar24 * 0x13 + (int)(uVar6 >> 0x20);
  uVar8 = (uVar6 & 0xffffffff) * (ulonglong)uVar51;
  uVar52 = (uint)uVar8;
  lVar7 = (uVar6 & 0xffffffff) * (ulonglong)uVar29 + (uVar8 >> 0x20);
  uVar58 = (uint)((ulonglong)lVar7 >> 0x20);
  lVar9 = (ulonglong)uVar26 * (ulonglong)uVar51;
  uVar46 = (uint)((ulonglong)lVar9 >> 0x20);
  uVar47 = (uint)(lVar7 + lVar9);
  uVar50 = uVar49 + uVar52;
  lVar7 = (ulonglong)uVar26 * (ulonglong)uVar29 +
          (ulonglong)
          CONCAT14(CARRY4(uVar58,uVar46) ||
                   CARRY4(uVar58 + uVar46,(uint)CARRY4((uint)lVar9,(uint)lVar7)),
                   (int)((ulonglong)(lVar7 + lVar9) >> 0x20));
  uVar25 = (uint)lVar7;
  bVar65 = CARRY4(uVar48,uVar47) || CARRY4(uVar48 + uVar47,(uint)CARRY4(uVar49,uVar52));
  uVar52 = uVar48 + uVar47 + (uint)CARRY4(uVar49,uVar52);
  uVar60 = uVar59 + uVar25 + (uint)bVar65;
  uVar58 = (uint)((ulonglong)uVar34 * (ulonglong)uVar27);
  lVar9 = (ulonglong)uVar34 * (ulonglong)uVar28 + ((ulonglong)uVar34 * (ulonglong)uVar27 >> 0x20);
  uVar47 = (uint)((ulonglong)lVar9 >> 0x20);
  lVar10 = (ulonglong)uVar37 * (ulonglong)uVar27;
  uVar49 = (uint)((ulonglong)lVar10 >> 0x20);
  uVar46 = (uint)(lVar9 + lVar10);
  uVar48 = uVar50 + uVar58;
  lVar9 = (ulonglong)uVar37 * (ulonglong)uVar28 +
          (ulonglong)
          CONCAT14(CARRY4(uVar47,uVar49) ||
                   CARRY4(uVar47 + uVar49,(uint)CARRY4((uint)lVar10,(uint)lVar9)),
                   (int)((ulonglong)(lVar9 + lVar10) >> 0x20));
  uVar47 = (uint)lVar9;
  bVar66 = CARRY4(uVar52,uVar46) || CARRY4(uVar52 + uVar46,(uint)CARRY4(uVar50,uVar58));
  uVar52 = uVar52 + uVar46 + (uint)CARRY4(uVar50,uVar58);
  uVar46 = uVar60 + uVar47 + (uint)bVar66;
  uVar8 = (ulonglong)uVar22 * 0x13;
  uVar11 = (uVar8 & 0xffffffff) * (ulonglong)uVar41;
  uVar53 = (uint)uVar11;
  lVar10 = (uVar8 & 0xffffffff) * (ulonglong)uVar21 + (uVar11 >> 0x20);
  uVar58 = (uint)((ulonglong)lVar10 >> 0x20);
  uVar49 = uVar35 * 0x13 + (int)(uVar8 >> 0x20);
  lVar12 = (ulonglong)uVar49 * (ulonglong)uVar41;
  uVar50 = (uint)((ulonglong)lVar12 >> 0x20);
  uVar61 = (uint)(lVar10 + lVar12);
  lVar10 = (ulonglong)uVar49 * (ulonglong)uVar21 +
           (ulonglong)
           CONCAT14(CARRY4(uVar58,uVar50) ||
                    CARRY4(uVar58 + uVar50,(uint)CARRY4((uint)lVar12,(uint)lVar10)),
                    (int)((ulonglong)(lVar10 + lVar12) >> 0x20));
  uVar30 = (uint)lVar10;
  uVar49 = (uint)((ulonglong)uVar31 * (ulonglong)uVar34);
  lVar12 = (ulonglong)uVar31 * (ulonglong)uVar37 + ((ulonglong)uVar31 * (ulonglong)uVar34 >> 0x20);
  uVar33 = (uint)((ulonglong)lVar12 >> 0x20);
  lVar13 = (ulonglong)uVar38 * (ulonglong)uVar34;
  uVar50 = (uint)((ulonglong)lVar13 >> 0x20);
  uVar58 = (uint)(lVar12 + lVar13);
  uVar54 = uVar53 + uVar49;
  lVar12 = (ulonglong)uVar38 * (ulonglong)uVar37 +
           (ulonglong)
           CONCAT14(CARRY4(uVar33,uVar50) ||
                    CARRY4(uVar33 + uVar50,(uint)CARRY4((uint)lVar13,(uint)lVar12)),
                    (int)((ulonglong)(lVar12 + lVar13) >> 0x20));
  uVar33 = (uint)lVar12;
  bVar67 = CARRY4(uVar61,uVar58) || CARRY4(uVar61 + uVar58,(uint)CARRY4(uVar53,uVar49));
  uVar61 = uVar61 + uVar58 + (uint)CARRY4(uVar53,uVar49);
  uVar62 = uVar30 + uVar33 + (uint)bVar67;
  uVar8 = (uVar2 & 0xffffffff) * (ulonglong)uVar36;
  uVar53 = (uint)uVar8;
  lVar13 = (uVar2 & 0xffffffff) * (ulonglong)uVar32 + (uVar8 >> 0x20);
  uVar50 = (uint)((ulonglong)lVar13 >> 0x20);
  lVar14 = (ulonglong)uVar19 * (ulonglong)uVar36;
  uVar49 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar58 = (uint)(lVar13 + lVar14);
  uVar42 = uVar54 + uVar53;
  lVar13 = (ulonglong)uVar19 * (ulonglong)uVar32 +
           (ulonglong)
           CONCAT14(CARRY4(uVar50,uVar49) ||
                    CARRY4(uVar50 + uVar49,(uint)CARRY4((uint)lVar14,(uint)lVar13)),
                    (int)((ulonglong)(lVar13 + lVar14) >> 0x20));
  uVar19 = (uint)lVar13;
  bVar68 = CARRY4(uVar61,uVar58) || CARRY4(uVar61 + uVar58,(uint)CARRY4(uVar54,uVar53));
  uVar50 = uVar61 + uVar58 + (uint)CARRY4(uVar54,uVar53);
  uVar55 = uVar62 + uVar19 + (uint)bVar68;
  uVar2 = (uVar3 & 0xffffffff) * (ulonglong)uVar51;
  uVar58 = (uint)uVar2;
  lVar14 = (uVar3 & 0xffffffff) * (ulonglong)uVar29 + (uVar2 >> 0x20);
  uVar53 = (uint)((ulonglong)lVar14 >> 0x20);
  lVar15 = (ulonglong)uVar40 * (ulonglong)uVar51;
  uVar49 = (uint)((ulonglong)lVar15 >> 0x20);
  uVar54 = (uint)(lVar14 + lVar15);
  uVar61 = uVar42 + uVar58;
  lVar14 = (ulonglong)uVar40 * (ulonglong)uVar29 +
           (ulonglong)
           CONCAT14(CARRY4(uVar53,uVar49) ||
                    CARRY4(uVar53 + uVar49,(uint)CARRY4((uint)lVar15,(uint)lVar14)),
                    (int)((ulonglong)(lVar14 + lVar15) >> 0x20));
  uVar49 = (uint)lVar14;
  bVar69 = CARRY4(uVar50,uVar54) || CARRY4(uVar50 + uVar54,(uint)CARRY4(uVar42,uVar58));
  uVar42 = uVar50 + uVar54 + (uint)CARRY4(uVar42,uVar58);
  uVar56 = uVar55 + uVar49 + (uint)bVar69;
  uVar2 = (uVar6 & 0xffffffff) * (ulonglong)uVar27;
  uVar54 = (uint)uVar2;
  lVar15 = (uVar6 & 0xffffffff) * (ulonglong)uVar28 + (uVar2 >> 0x20);
  uVar58 = (uint)((ulonglong)lVar15 >> 0x20);
  lVar16 = (ulonglong)uVar26 * (ulonglong)uVar27;
  uVar50 = (uint)((ulonglong)lVar16 >> 0x20);
  uVar53 = (uint)(lVar15 + lVar16);
  lVar15 = (ulonglong)uVar26 * (ulonglong)uVar28 +
           (ulonglong)
           CONCAT14(CARRY4(uVar58,uVar50) ||
                    CARRY4(uVar58 + uVar50,(uint)CARRY4((uint)lVar16,(uint)lVar15)),
                    (int)((ulonglong)(lVar15 + lVar16) >> 0x20));
  uVar50 = (uint)lVar15;
  bVar70 = CARRY4(uVar42,uVar53) || CARRY4(uVar42 + uVar53,(uint)CARRY4(uVar61,uVar54));
  uVar53 = uVar42 + uVar53 + (uint)CARRY4(uVar61,uVar54);
  uVar58 = uVar56 + uVar50 + (uint)bVar70;
  uVar49 = ((int)((ulonglong)lVar10 >> 0x20) + (int)((ulonglong)lVar12 >> 0x20) +
            (uint)(CARRY4(uVar30,uVar33) || CARRY4(uVar30 + uVar33,(uint)bVar67)) +
            (int)((ulonglong)lVar13 >> 0x20) +
            (uint)(CARRY4(uVar62,uVar19) || CARRY4(uVar62 + uVar19,(uint)bVar68)) +
            (int)((ulonglong)lVar14 >> 0x20) +
            (uint)(CARRY4(uVar55,uVar49) || CARRY4(uVar55 + uVar49,(uint)bVar69)) +
            (int)((ulonglong)lVar15 >> 0x20) +
           (uint)(CARRY4(uVar56,uVar50) || CARRY4(uVar56 + uVar50,(uint)bVar70))) * 0x2000 |
           uVar58 >> 0x13;
  uVar19 = uVar53 >> 0x13 | uVar58 * 0x2000;
  bVar67 = CARRY4(uVar52,uVar49) || CARRY4(uVar52 + uVar49,(uint)CARRY4(uVar48,uVar19));
  uVar52 = uVar52 + uVar49 + (uint)CARRY4(uVar48,uVar19);
  uVar49 = uVar46 + bVar67;
  uVar58 = ((int)((ulonglong)lVar1 >> 0x20) + (int)((ulonglong)lVar4 >> 0x20) +
            (uint)(CARRY4(uVar57,uVar20) || CARRY4(uVar57 + uVar20,(uint)bVar63)) +
            (int)((ulonglong)lVar5 >> 0x20) +
            (uint)(CARRY4(uVar44,uVar43) || CARRY4(uVar44 + uVar43,(uint)bVar64)) +
            (int)((ulonglong)lVar7 >> 0x20) +
            (uint)(CARRY4(uVar59,uVar25) || CARRY4(uVar59 + uVar25,(uint)bVar65)) +
            (int)((ulonglong)lVar9 >> 0x20) +
            (uint)(CARRY4(uVar60,uVar47) || CARRY4(uVar60 + uVar47,(uint)bVar66)) +
           (uint)CARRY4(uVar46,(uint)bVar67)) * 0x2000 | uVar49 >> 0x13;
  uVar20 = uVar52 >> 0x13 | uVar49 * 0x2000;
  uVar2 = (uVar3 & 0xffffffff) * (ulonglong)uVar41;
  uVar49 = (uint)uVar2;
  lVar4 = (ulonglong)uVar40 * (ulonglong)uVar41;
  uVar47 = (uint)((ulonglong)lVar4 >> 0x20);
  lVar1 = (uVar3 & 0xffffffff) * (ulonglong)uVar21 + (uVar2 >> 0x20);
  uVar43 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar25 = (uint)(lVar4 + lVar1);
  lVar1 = (ulonglong)uVar40 * (ulonglong)uVar21 +
          (ulonglong)
          CONCAT14(CARRY4(uVar43,uVar47) ||
                   CARRY4(uVar43 + uVar47,(uint)CARRY4((uint)lVar4,(uint)lVar1)),
                   (int)((ulonglong)(lVar4 + lVar1) >> 0x20));
  uVar57 = (uint)lVar1;
  uVar50 = (uint)((ulonglong)uVar17 * (ulonglong)uVar31);
  lVar4 = (ulonglong)uVar17 * (ulonglong)uVar38 + ((ulonglong)uVar17 * (ulonglong)uVar31 >> 0x20);
  uVar46 = (uint)((ulonglong)lVar4 >> 0x20);
  lVar5 = (ulonglong)uVar18 * (ulonglong)uVar31;
  uVar43 = (uint)((ulonglong)lVar5 >> 0x20);
  uVar47 = (uint)(lVar4 + lVar5);
  uVar33 = uVar49 + uVar50;
  lVar4 = (ulonglong)uVar18 * (ulonglong)uVar38 +
          (ulonglong)
          CONCAT14(CARRY4(uVar46,uVar43) ||
                   CARRY4(uVar46 + uVar43,(uint)CARRY4((uint)lVar5,(uint)lVar4)),
                   (int)((ulonglong)(lVar4 + lVar5) >> 0x20));
  uVar43 = (uint)lVar4;
  bVar63 = CARRY4(uVar25,uVar47) || CARRY4(uVar25 + uVar47,(uint)CARRY4(uVar49,uVar50));
  uVar30 = uVar25 + uVar47 + (uint)CARRY4(uVar49,uVar50);
  uVar42 = uVar57 + uVar43 + (uint)bVar63;
  uVar2 = (uVar6 & 0xffffffff) * (ulonglong)uVar36;
  uVar46 = (uint)uVar2;
  lVar5 = (uVar6 & 0xffffffff) * (ulonglong)uVar32 + (uVar2 >> 0x20);
  uVar25 = (uint)((ulonglong)lVar5 >> 0x20);
  lVar7 = (ulonglong)uVar26 * (ulonglong)uVar36;
  uVar47 = (uint)((ulonglong)lVar7 >> 0x20);
  uVar50 = (uint)(lVar5 + lVar7);
  uVar49 = uVar33 + uVar46;
  lVar5 = (ulonglong)uVar26 * (ulonglong)uVar32 +
          (ulonglong)
          CONCAT14(CARRY4(uVar25,uVar47) ||
                   CARRY4(uVar25 + uVar47,(uint)CARRY4((uint)lVar7,(uint)lVar5)),
                   (int)((ulonglong)(lVar5 + lVar7) >> 0x20));
  uVar47 = (uint)lVar5;
  bVar64 = CARRY4(uVar30,uVar50) || CARRY4(uVar30 + uVar50,(uint)CARRY4(uVar33,uVar46));
  uVar40 = uVar30 + uVar50 + (uint)CARRY4(uVar33,uVar46);
  uVar44 = uVar42 + uVar47 + (uint)bVar64;
  uVar25 = (uint)((ulonglong)uVar34 * (ulonglong)uVar51);
  lVar7 = (ulonglong)uVar34 * (ulonglong)uVar29 + ((ulonglong)uVar34 * (ulonglong)uVar51 >> 0x20);
  uVar30 = (uint)((ulonglong)lVar7 >> 0x20);
  lVar9 = (ulonglong)uVar37 * (ulonglong)uVar51;
  uVar46 = (uint)((ulonglong)lVar9 >> 0x20);
  uVar33 = (uint)(lVar7 + lVar9);
  uVar50 = uVar49 + uVar25;
  lVar7 = (ulonglong)uVar37 * (ulonglong)uVar29 +
          (ulonglong)
          CONCAT14(CARRY4(uVar30,uVar46) ||
                   CARRY4(uVar30 + uVar46,(uint)CARRY4((uint)lVar9,(uint)lVar7)),
                   (int)((ulonglong)(lVar7 + lVar9) >> 0x20));
  uVar46 = (uint)lVar7;
  bVar65 = CARRY4(uVar40,uVar33) || CARRY4(uVar40 + uVar33,(uint)CARRY4(uVar49,uVar25));
  uVar56 = uVar40 + uVar33 + (uint)CARRY4(uVar49,uVar25);
  uVar55 = uVar44 + uVar46 + (uint)bVar65;
  uVar25 = (uint)((ulonglong)uVar22 * (ulonglong)uVar27);
  lVar9 = (ulonglong)uVar22 * (ulonglong)uVar28 + ((ulonglong)uVar22 * (ulonglong)uVar27 >> 0x20);
  uVar40 = (uint)((ulonglong)lVar9 >> 0x20);
  lVar10 = (ulonglong)uVar35 * (ulonglong)uVar27;
  uVar49 = (uint)((ulonglong)lVar10 >> 0x20);
  uVar30 = (uint)(lVar9 + lVar10);
  uVar33 = uVar50 + uVar25;
  lVar9 = (ulonglong)uVar35 * (ulonglong)uVar28 +
          (ulonglong)
          CONCAT14(CARRY4(uVar40,uVar49) ||
                   CARRY4(uVar40 + uVar49,(uint)CARRY4((uint)lVar10,(uint)lVar9)),
                   (int)((ulonglong)(lVar9 + lVar10) >> 0x20));
  uVar49 = (uint)lVar9;
  bVar66 = CARRY4(uVar56,uVar30) || CARRY4(uVar56 + uVar30,(uint)CARRY4(uVar50,uVar25));
  uVar25 = uVar56 + uVar30 + (uint)CARRY4(uVar50,uVar25);
  uVar50 = uVar55 + uVar49 + (uint)bVar66;
  param_1[4] = uVar33 + uVar20;
  bVar67 = CARRY4(uVar25,uVar58) || CARRY4(uVar25 + uVar58,(uint)CARRY4(uVar33,uVar20));
  uVar58 = uVar25 + uVar58 + (uint)CARRY4(uVar33,uVar20);
  param_1[5] = uVar58 & 0x7ffff;
  uVar25 = uVar50 + bVar67;
  uVar20 = ((int)((ulonglong)lVar1 >> 0x20) + (int)((ulonglong)lVar4 >> 0x20) +
            (uint)(CARRY4(uVar57,uVar43) || CARRY4(uVar57 + uVar43,(uint)bVar63)) +
            (int)((ulonglong)lVar5 >> 0x20) +
            (uint)(CARRY4(uVar42,uVar47) || CARRY4(uVar42 + uVar47,(uint)bVar64)) +
            (int)((ulonglong)lVar7 >> 0x20) +
            (uint)(CARRY4(uVar44,uVar46) || CARRY4(uVar44 + uVar46,(uint)bVar65)) +
            (int)((ulonglong)lVar9 >> 0x20) +
            (uint)(CARRY4(uVar55,uVar49) || CARRY4(uVar55 + uVar49,(uint)bVar66)) +
           (uint)CARRY4(uVar50,(uint)bVar67)) * 0x2000 | uVar25 >> 0x13;
  uVar43 = uVar58 >> 0x13 | uVar25 * 0x2000;
  uVar2 = (uVar6 & 0xffffffff) * (ulonglong)uVar41;
  uVar50 = (uint)uVar2;
  lVar1 = (uVar6 & 0xffffffff) * (ulonglong)uVar21 + (uVar2 >> 0x20);
  uVar46 = (uint)((ulonglong)lVar1 >> 0x20);
  lVar4 = (ulonglong)uVar26 * (ulonglong)uVar41;
  uVar47 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar25 = (uint)(lVar1 + lVar4);
  lVar1 = (ulonglong)uVar26 * (ulonglong)uVar21 +
          (ulonglong)
          CONCAT14(CARRY4(uVar46,uVar47) ||
                   CARRY4(uVar46 + uVar47,(uint)CARRY4((uint)lVar4,(uint)lVar1)),
                   (int)((ulonglong)(lVar1 + lVar4) >> 0x20));
  uVar40 = (uint)lVar1;
  uVar33 = (uint)((ulonglong)uVar23 * (ulonglong)uVar31);
  lVar4 = (ulonglong)uVar23 * (ulonglong)uVar38 + ((ulonglong)uVar23 * (ulonglong)uVar31 >> 0x20);
  uVar47 = (uint)((ulonglong)lVar4 >> 0x20);
  lVar5 = (ulonglong)uVar39 * (ulonglong)uVar31;
  uVar46 = (uint)((ulonglong)lVar5 >> 0x20);
  uVar49 = (uint)(lVar4 + lVar5);
  uVar58 = uVar50 + uVar33;
  lVar4 = (ulonglong)uVar39 * (ulonglong)uVar38 +
          (ulonglong)
          CONCAT14(CARRY4(uVar47,uVar46) ||
                   CARRY4(uVar47 + uVar46,(uint)CARRY4((uint)lVar5,(uint)lVar4)),
                   (int)((ulonglong)(lVar4 + lVar5) >> 0x20));
  uVar47 = (uint)lVar4;
  bVar63 = CARRY4(uVar25,uVar49) || CARRY4(uVar25 + uVar49,(uint)CARRY4(uVar50,uVar33));
  uVar26 = uVar25 + uVar49 + (uint)CARRY4(uVar50,uVar33);
  uVar42 = uVar40 + uVar47 + (uint)bVar63;
  uVar49 = (uint)((ulonglong)uVar34 * (ulonglong)uVar36);
  lVar5 = (ulonglong)uVar34 * (ulonglong)uVar32 + ((ulonglong)uVar34 * (ulonglong)uVar36 >> 0x20);
  uVar33 = (uint)((ulonglong)lVar5 >> 0x20);
  lVar7 = (ulonglong)uVar37 * (ulonglong)uVar36;
  uVar46 = (uint)((ulonglong)lVar7 >> 0x20);
  uVar25 = (uint)(lVar5 + lVar7);
  uVar50 = uVar58 + uVar49;
  lVar5 = (ulonglong)uVar37 * (ulonglong)uVar32 +
          (ulonglong)
          CONCAT14(CARRY4(uVar33,uVar46) ||
                   CARRY4(uVar33 + uVar46,(uint)CARRY4((uint)lVar7,(uint)lVar5)),
                   (int)((ulonglong)(lVar5 + lVar7) >> 0x20));
  uVar46 = (uint)lVar5;
  bVar64 = CARRY4(uVar26,uVar25) || CARRY4(uVar26 + uVar25,(uint)CARRY4(uVar58,uVar49));
  uVar30 = uVar26 + uVar25 + (uint)CARRY4(uVar58,uVar49);
  uVar44 = uVar42 + uVar46 + (uint)bVar64;
  uVar25 = (uint)((ulonglong)uVar22 * (ulonglong)uVar51);
  lVar7 = (ulonglong)uVar22 * (ulonglong)uVar29 + ((ulonglong)uVar22 * (ulonglong)uVar51 >> 0x20);
  uVar26 = (uint)((ulonglong)lVar7 >> 0x20);
  lVar9 = (ulonglong)uVar35 * (ulonglong)uVar51;
  uVar49 = (uint)((ulonglong)lVar9 >> 0x20);
  uVar33 = (uint)(lVar7 + lVar9);
  uVar58 = uVar50 + uVar25;
  lVar7 = (ulonglong)uVar35 * (ulonglong)uVar29 +
          (ulonglong)
          CONCAT14(CARRY4(uVar26,uVar49) ||
                   CARRY4(uVar26 + uVar49,(uint)CARRY4((uint)lVar9,(uint)lVar7)),
                   (int)((ulonglong)(lVar7 + lVar9) >> 0x20));
  uVar49 = (uint)lVar7;
  bVar65 = CARRY4(uVar30,uVar33) || CARRY4(uVar30 + uVar33,(uint)CARRY4(uVar50,uVar25));
  uVar56 = uVar30 + uVar33 + (uint)CARRY4(uVar50,uVar25);
  uVar55 = uVar44 + uVar49 + (uint)bVar65;
  uVar25 = (uint)((ulonglong)uVar17 * (ulonglong)uVar27);
  lVar9 = (ulonglong)uVar17 * (ulonglong)uVar28 + ((ulonglong)uVar17 * (ulonglong)uVar27 >> 0x20);
  uVar30 = (uint)((ulonglong)lVar9 >> 0x20);
  lVar10 = (ulonglong)uVar18 * (ulonglong)uVar27;
  uVar50 = (uint)((ulonglong)lVar10 >> 0x20);
  uVar26 = (uint)(lVar9 + lVar10);
  uVar33 = uVar58 + uVar25;
  lVar9 = (ulonglong)uVar18 * (ulonglong)uVar28 +
          (ulonglong)
          CONCAT14(CARRY4(uVar30,uVar50) ||
                   CARRY4(uVar30 + uVar50,(uint)CARRY4((uint)lVar10,(uint)lVar9)),
                   (int)((ulonglong)(lVar9 + lVar10) >> 0x20));
  uVar50 = (uint)lVar9;
  bVar66 = CARRY4(uVar56,uVar26) || CARRY4(uVar56 + uVar26,(uint)CARRY4(uVar58,uVar25));
  uVar25 = uVar56 + uVar26 + (uint)CARRY4(uVar58,uVar25);
  uVar58 = uVar55 + uVar50 + (uint)bVar66;
  param_1[6] = uVar33 + uVar43;
  bVar67 = CARRY4(uVar25,uVar20) || CARRY4(uVar25 + uVar20,(uint)CARRY4(uVar33,uVar43));
  uVar43 = uVar25 + uVar20 + (uint)CARRY4(uVar33,uVar43);
  param_1[7] = uVar43 & 0x7ffff;
  uVar25 = uVar58 + bVar67;
  uVar20 = ((int)((ulonglong)lVar1 >> 0x20) + (int)((ulonglong)lVar4 >> 0x20) +
            (uint)(CARRY4(uVar40,uVar47) || CARRY4(uVar40 + uVar47,(uint)bVar63)) +
            (int)((ulonglong)lVar5 >> 0x20) +
            (uint)(CARRY4(uVar42,uVar46) || CARRY4(uVar42 + uVar46,(uint)bVar64)) +
            (int)((ulonglong)lVar7 >> 0x20) +
            (uint)(CARRY4(uVar44,uVar49) || CARRY4(uVar44 + uVar49,(uint)bVar65)) +
            (int)((ulonglong)lVar9 >> 0x20) +
            (uint)(CARRY4(uVar55,uVar50) || CARRY4(uVar55 + uVar50,(uint)bVar66)) +
           (uint)CARRY4(uVar58,(uint)bVar67)) * 0x2000 | uVar25 >> 0x13;
  uVar43 = uVar43 >> 0x13 | uVar25 * 0x2000;
  uVar50 = (uint)((ulonglong)uVar45 * (ulonglong)uVar31);
  lVar1 = (ulonglong)uVar45 * (ulonglong)uVar38 + ((ulonglong)uVar45 * (ulonglong)uVar31 >> 0x20);
  uVar47 = (uint)((ulonglong)lVar1 >> 0x20);
  lVar4 = (ulonglong)uVar24 * (ulonglong)uVar31;
  uVar45 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar25 = (uint)(lVar1 + lVar4);
  lVar1 = (ulonglong)uVar24 * (ulonglong)uVar38 +
          (ulonglong)
          CONCAT14(CARRY4(uVar47,uVar45) ||
                   CARRY4(uVar47 + uVar45,(uint)CARRY4((uint)lVar4,(uint)lVar1)),
                   (int)((ulonglong)(lVar1 + lVar4) >> 0x20));
  uVar58 = (uint)lVar1;
  uVar49 = (uint)((ulonglong)uVar34 * (ulonglong)uVar41);
  lVar4 = (ulonglong)uVar34 * (ulonglong)uVar21 + ((ulonglong)uVar34 * (ulonglong)uVar41 >> 0x20);
  uVar34 = (uint)((ulonglong)lVar4 >> 0x20);
  lVar5 = (ulonglong)uVar37 * (ulonglong)uVar41;
  uVar47 = (uint)((ulonglong)lVar5 >> 0x20);
  uVar45 = (uint)(lVar4 + lVar5);
  uVar46 = uVar49 + uVar50;
  lVar4 = (ulonglong)uVar37 * (ulonglong)uVar21 +
          (ulonglong)
          CONCAT14(CARRY4(uVar34,uVar47) ||
                   CARRY4(uVar34 + uVar47,(uint)CARRY4((uint)lVar5,(uint)lVar4)),
                   (int)((ulonglong)(lVar4 + lVar5) >> 0x20));
  uVar34 = (uint)lVar4;
  bVar63 = CARRY4(uVar45,uVar25) || CARRY4(uVar45 + uVar25,(uint)CARRY4(uVar49,uVar50));
  uVar24 = uVar45 + uVar25 + (uint)CARRY4(uVar49,uVar50);
  uVar21 = uVar34 + uVar58 + (uint)bVar63;
  uVar45 = (uint)((ulonglong)uVar22 * (ulonglong)uVar36);
  lVar5 = (ulonglong)uVar22 * (ulonglong)uVar32 + ((ulonglong)uVar22 * (ulonglong)uVar36 >> 0x20);
  uVar50 = (uint)((ulonglong)lVar5 >> 0x20);
  lVar7 = (ulonglong)uVar35 * (ulonglong)uVar36;
  uVar37 = (uint)((ulonglong)lVar7 >> 0x20);
  uVar49 = (uint)(lVar5 + lVar7);
  uVar47 = uVar46 + uVar45;
  lVar5 = (ulonglong)uVar35 * (ulonglong)uVar32 +
          (ulonglong)
          CONCAT14(CARRY4(uVar50,uVar37) ||
                   CARRY4(uVar50 + uVar37,(uint)CARRY4((uint)lVar7,(uint)lVar5)),
                   (int)((ulonglong)(lVar5 + lVar7) >> 0x20));
  uVar37 = (uint)lVar5;
  bVar64 = CARRY4(uVar24,uVar49) || CARRY4(uVar24 + uVar49,(uint)CARRY4(uVar46,uVar45));
  uVar24 = uVar24 + uVar49 + (uint)CARRY4(uVar46,uVar45);
  uVar22 = uVar21 + uVar37 + (uint)bVar64;
  uVar46 = (uint)((ulonglong)uVar17 * (ulonglong)uVar51);
  lVar7 = (ulonglong)uVar17 * (ulonglong)uVar29 + ((ulonglong)uVar17 * (ulonglong)uVar51 >> 0x20);
  uVar50 = (uint)((ulonglong)lVar7 >> 0x20);
  lVar9 = (ulonglong)uVar18 * (ulonglong)uVar51;
  uVar17 = (uint)((ulonglong)lVar9 >> 0x20);
  uVar49 = (uint)(lVar7 + lVar9);
  uVar45 = uVar47 + uVar46;
  lVar7 = (ulonglong)uVar18 * (ulonglong)uVar29 +
          (ulonglong)
          CONCAT14(CARRY4(uVar50,uVar17) ||
                   CARRY4(uVar50 + uVar17,(uint)CARRY4((uint)lVar9,(uint)lVar7)),
                   (int)((ulonglong)(lVar7 + lVar9) >> 0x20));
  uVar17 = (uint)lVar7;
  bVar65 = CARRY4(uVar24,uVar49) || CARRY4(uVar24 + uVar49,(uint)CARRY4(uVar47,uVar46));
  uVar24 = uVar24 + uVar49 + (uint)CARRY4(uVar47,uVar46);
  uVar50 = uVar22 + uVar17 + (uint)bVar65;
  uVar46 = (uint)((ulonglong)uVar23 * (ulonglong)uVar27);
  lVar9 = (ulonglong)uVar23 * (ulonglong)uVar28 + ((ulonglong)uVar23 * (ulonglong)uVar27 >> 0x20);
  uVar49 = (uint)((ulonglong)lVar9 >> 0x20);
  lVar10 = (ulonglong)uVar39 * (ulonglong)uVar27;
  uVar18 = (uint)((ulonglong)lVar10 >> 0x20);
  uVar23 = (uint)(lVar9 + lVar10);
  uVar47 = uVar45 + uVar46;
  lVar9 = (ulonglong)uVar39 * (ulonglong)uVar28 +
          (ulonglong)
          CONCAT14(CARRY4(uVar49,uVar18) ||
                   CARRY4(uVar49 + uVar18,(uint)CARRY4((uint)lVar10,(uint)lVar9)),
                   (int)((ulonglong)(lVar9 + lVar10) >> 0x20));
  uVar18 = (uint)lVar9;
  bVar66 = CARRY4(uVar24,uVar23) || CARRY4(uVar24 + uVar23,(uint)CARRY4(uVar45,uVar46));
  uVar45 = uVar24 + uVar23 + (uint)CARRY4(uVar45,uVar46);
  uVar23 = uVar50 + uVar18 + (uint)bVar66;
  param_1[8] = uVar47 + uVar43;
  bVar67 = CARRY4(uVar45,uVar20) || CARRY4(uVar45 + uVar20,(uint)CARRY4(uVar47,uVar43));
  uVar43 = uVar45 + uVar20 + (uint)CARRY4(uVar47,uVar43);
  uVar20 = uVar23 + bVar67;
  param_1[9] = uVar43 & 0x7ffff;
  lVar10 = (ulonglong)(uVar43 >> 0x13 | uVar20 * 0x2000) * 0x13;
  uVar43 = (uint)lVar10;
  *param_1 = uVar43 + uVar61 + uVar54;
  uVar18 = (((int)((ulonglong)lVar4 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) +
             (uint)(CARRY4(uVar34,uVar58) || CARRY4(uVar34 + uVar58,(uint)bVar63)) +
             (int)((ulonglong)lVar5 >> 0x20) +
             (uint)(CARRY4(uVar21,uVar37) || CARRY4(uVar21 + uVar37,(uint)bVar64)) +
             (int)((ulonglong)lVar7 >> 0x20) +
             (uint)(CARRY4(uVar22,uVar17) || CARRY4(uVar22 + uVar17,(uint)bVar65)) +
             (int)((ulonglong)lVar9 >> 0x20) +
             (uint)(CARRY4(uVar50,uVar18) || CARRY4(uVar50 + uVar18,(uint)bVar66)) +
            (uint)CARRY4(uVar23,(uint)bVar67)) * 0x2000 | uVar20 >> 0x13) * 0x13 +
           (int)((ulonglong)lVar10 >> 0x20) + (uVar53 & 0x7ffff) +
           (uint)CARRY4(uVar43,uVar61 + uVar54);
  uVar17 = uVar18 >> 0x13;
  param_1[1] = uVar18 & 0x7ffff;
  param_1[2] = uVar48 + uVar19 + uVar17;
  param_1[3] = (uVar52 & 0x7ffff) + (uint)CARRY4(uVar48 + uVar19,uVar17);
  return;
}

