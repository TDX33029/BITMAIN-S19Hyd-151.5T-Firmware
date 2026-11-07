// FUN_00ed82fc @ 00ed82fc size=14528 calls_out=42 calls_in=0
// strings: Failed anounce HelloError | Enabled stream for device that has not been registered | Asked to enable stream that has already been enabled | Message with unknown request id | SetGloba | SetGloba

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ed82fc(undefined4 *param_1,uint ************param_2,uint *param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint ************ppppppppppppuVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint *puVar12;
  int *piVar13;
  int iVar14;
  uint *******pppppppuVar15;
  uint ************ppppppppppppuVar16;
  uint **********ppppppppppuVar17;
  uint **********ppppppppppuVar18;
  uint ************ppppppppppppuVar19;
  uint *********pppppppppuVar20;
  uint ********ppppppppuVar21;
  uint *******pppppppuVar22;
  uint uVar23;
  uint ************ppppppppppppuVar24;
  undefined4 uVar25;
  undefined1 *puVar26;
  uint ************ppppppppppppuVar27;
  uint uVar28;
  uint uVar29;
  uint ************ppppppppppppuVar30;
  uint ************extraout_r2;
  uint **********ppppppppppuVar31;
  uint uVar32;
  uint uVar33;
  uint ***********pppppppppppuVar34;
  uint **********ppppppppppuVar35;
  uint ************extraout_r2_00;
  uint ************extraout_r2_01;
  uint ************extraout_r2_02;
  uint **********ppppppppppuVar36;
  uint ************extraout_r2_03;
  uint ************extraout_r2_04;
  uint ************extraout_r2_05;
  uint ************extraout_r2_06;
  uint ************ppppppppppppuVar37;
  uint **********ppppppppppuVar38;
  uint uVar39;
  uint ***********extraout_r3;
  uint ***********extraout_r3_00;
  uint ************ppppppppppppuVar40;
  uint ************extraout_r3_01;
  uint ************extraout_r3_02;
  uint ************extraout_r3_03;
  uint ************extraout_r3_04;
  uint ************extraout_r3_05;
  uint ************extraout_r3_06;
  uint ***********extraout_r3_07;
  uint ***********unaff_r4;
  uint ************ppppppppppppuVar41;
  char *pcVar42;
  uint *********pppppppppuVar43;
  uint ************unaff_r5;
  uint uVar44;
  undefined *puVar45;
  uint **********ppppppppppuVar46;
  uint ********ppppppppuVar47;
  uint **********ppppppppppuVar48;
  undefined1 uVar49;
  byte bVar50;
  uint uVar51;
  uint ***********pppppppppppuVar52;
  uint ***********pppppppppppuVar53;
  uint ************unaff_r9;
  int iVar54;
  uint *********pppppppppuVar55;
  uint ************ppppppppppppuVar56;
  uint *******pppppppuVar57;
  uint uVar58;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 extraout_r12_01;
  undefined4 extraout_r12_02;
  undefined4 extraout_r12_03;
  undefined4 extraout_r12_04;
  undefined8 uVar59;
  uint ***********local_1a0;
  undefined *local_198;
  int local_178;
  int local_174;
  int local_168;
  undefined *local_14c;
  uint ***********local_148;
  uint ************local_144;
  uint ***********local_138;
  uint uStack_134;
  uint uStack_130;
  uint ***********local_128;
  uint ************local_124;
  uint ***********local_120;
  uint ************local_11c;
  uint local_118;
  uint **********local_114;
  uint ************local_110;
  uint ************local_10c;
  uint uStack_108;
  uint uStack_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  uint ************local_e8;
  uint ************local_e4;
  uint ***********local_e0;
  uint ************local_dc;
  uint ***********local_d8;
  uint ************local_d4;
  uint ***********pppppppppppuStack_d0;
  uint ***********local_c8;
  uint ************local_c4;
  uint ************local_c0;
  uint ***********local_b8;
  uint ************local_b4;
  uint ************local_b0;
  uint ************local_ac;
  uint ************local_a8;
  uint ************local_a4;
  uint ************local_a0;
  uint *************local_9c;
  undefined *local_98;
  uint ***********local_90;
  uint ************local_8c;
  uint ************local_88;
  uint ***********local_84;
  undefined4 local_80;
  uint ************local_78;
  undefined4 local_74;
  uint ***********local_70;
  uint ************local_6c;
  uint ***********local_68;
  uint ************local_64;
  undefined4 local_60;
  uint ***********local_58;
  uint ************local_54;
  uint ***********local_50;
  uint ************local_4c;
  undefined4 local_48;
  uint ************local_44;
  uint ***********local_40;
  uint ************local_3c;
  uint ***********local_38;
  uint ************local_34;
  uint ***********local_30;
  int local_2c;
  
  uVar23 = *param_3;
  if (0xc < uVar23 - 1) {
switchD_00ed833c_caseD_4:
    *param_1 = 0x80000003;
    FUN_00edc308(param_3);
    return;
  }
  ppppppppppppuVar56 = &local_b8;
  switch(uVar23) {
  case 1:
    uVar25 = 0x80000001;
    pppppppppppuVar52 = *param_2;
    *param_2 = (uint ***********)0x0;
    if ((pppppppppppuVar52 == (uint ***********)0x1) &&
       (cVar6 = FUN_00e7bbd8(param_2[1],1), cVar6 == '\x02')) {
      uVar25 = 0x80000003;
      *param_2 = (uint ***********)0x2;
    }
    *param_1 = uVar25;
    return;
  case 2:
    pppppppppppuVar52 = (uint ***********)param_3[1];
    ppppppppppppuVar37 = (uint ************)param_3[2];
    pppppppppppuVar53 = *param_2;
    *param_2 = (uint ***********)0x0;
    if (pppppppppppuVar53 == (uint ***********)0x1) {
      cVar6 = FUN_00e7bbd8(param_2[1],0);
      uVar25 = 0x80000003;
      if ((((cVar6 != '\x02') && (DAT_018d9130 < 4)) &&
          ((DAT_018da550 - 1 < 2 ||
           ((DAT_018da550 != 0 && (cVar6 = FUN_0169ac90(&DAT_018da548), cVar6 != '\0')))))) &&
         (iVar54 = FUN_016949d8(DAT_018da548), iVar54 != 0)) {
        if (*(int *)(DAT_018da548 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187bfec);
        }
        local_a8 = (uint ************)0x0;
        local_3c = &local_70;
        local_ac = *(uint *************)(DAT_018da548 + 0x28);
        local_b4 = *(uint *************)(DAT_018da548 + 0x20);
        local_b0 = *(uint *************)(DAT_018da548 + 0x24);
        local_50 = (uint ***********)(DAT_018da548 + 0x1c);
        local_b8 = (uint ***********)*local_50;
        local_58 = (uint ***********)&local_40;
        local_54 = (uint ************)&DAT_00000001;
        local_38 = (uint ***********)&DAT_018abb78;
        local_6c = (uint ************)&DAT_00000033;
        local_70 = (uint ***********)0x35a971;
        local_40 = (uint ***********)ppppppppppppuVar56;
        FUN_0169bb88(DAT_018da548,&local_58);
      }
    }
    else {
      uVar25 = 0x80000000;
    }
    *param_1 = uVar25;
    goto joined_r0x00ed8644;
  case 3:
    uVar25 = 0x80000000;
    if (*param_2 == (uint ***********)0x2) {
      *param_2 = (uint ***********)0x0;
      uVar25 = 0x80000003;
    }
    *param_1 = uVar25;
    return;
  default:
    goto switchD_00ed833c_caseD_4;
  case 5:
    ppppppppppppuVar37 = (uint ************)param_3[1];
    ppppppppppuVar38 = (uint **********)param_3[2];
    pppppppppppuVar52 = (uint ***********)param_3[3];
    uStack_134 = param_3[4];
    uStack_130 = param_3[5];
    local_138 = pppppppppppuVar52;
    if (*param_2 == (uint ***********)0x2) {
      puVar12 = (uint *)FUN_011e4df8();
      uVar39 = puVar12[2] ^ (uint)pppppppppppuVar52;
      uVar44 = *puVar12;
      uVar32 = puVar12[1];
      uVar29 = puVar12[3];
      uVar51 = uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
               uVar29 >> 0x18;
      lVar4 = (ulonglong)uVar51 * 0xb36a80d2;
      uVar58 = (uint)lVar4;
      uVar28 = (uVar58 << 0x18 | (uVar58 >> 8 & 0xff) << 0x10 | (uVar58 >> 0x10 & 0xff) << 8 |
               uVar58 >> 0x18) ^
               uVar29 * 0x2df45158 +
               uVar39 * 0x2d7f954c + (int)((ulonglong)uVar39 * 0x2df45158 >> 0x20);
      uVar58 = uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
               uVar28 >> 0x18;
      lVar5 = (ulonglong)~uVar44 * (ulonglong)uVar58;
      uVar33 = (uint)lVar5;
      uVar29 = (uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
               uVar39 >> 0x18) * -0x4c957f2e +
               uVar51 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
      uVar39 = (uVar29 * 0x1000000 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
               uVar29 >> 0x18) ^ (uint)((ulonglong)uVar39 * 0x2df45158);
      uVar29 = (uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
               uVar39 >> 0x18) * ~uVar44 + uVar58 * ~uVar32 + (int)((ulonglong)lVar5 >> 0x20);
      uVar51 = uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 | (uVar32 >> 0x10 & 0xff) << 8 |
               uVar32 >> 0x18;
      lVar4 = (ulonglong)uVar51 * (ulonglong)uVar39;
      uVar29 = (uVar29 * 0x1000000 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
               uVar29 >> 0x18) ^ (uint)lVar4;
      iVar54 = 0;
      pppppppppppuVar53 = param_2[6];
      uVar58 = (uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
               uVar33 >> 0x18) ^
               uVar28 * uVar51 +
               uVar39 * (uVar44 << 0x18 | (uVar44 >> 8 & 0xff) << 0x10 |
                         (uVar44 >> 0x10 & 0xff) << 8 | uVar44 >> 0x18) +
               (int)((ulonglong)lVar4 >> 0x20);
      uVar51 = uVar58;
      if ((uVar39 & 0x20) != 0) {
        uVar51 = uVar29;
        uVar29 = uVar58;
      }
      uVar51 = uVar29 << (uVar39 & 0x1f) | (uVar51 >> 1) >> (~uVar39 & 0x1f);
      pppppppppppuVar34 = param_2[7];
      uVar29 = uVar51 >> 0x19;
LAB_00ed8984:
      uVar51 = (uint)pppppppppppuVar34 & uVar51;
      ppppppppppppuVar56 = *(uint *************)((int)pppppppppppuVar53 + uVar51);
      uVar39 = (uint)ppppppppppppuVar56 ^ uVar29 * 0x1010101;
      uVar39 = ~uVar39 & 0x80808080 & uVar39 + 0xfefefeff;
      do {
        if (uVar39 == 0) goto LAB_00ed89e0;
        uVar58 = uVar39 >> 8;
        uVar28 = uVar39 >> 0x10;
        uVar32 = uVar39 >> 0x18;
        uVar33 = uVar39 << 0x18;
        uVar39 = uVar39 - 1 & uVar39;
        uVar58 = uVar51 + ((uint)LZCOUNT(uVar33 | (uVar58 & 0xff) << 0x10 | (uVar28 & 0xff) << 8 |
                                         uVar32) >> 3) & (uint)pppppppppppuVar34;
        pcVar42 = (char *)pppppppppppuVar53[uVar58 * -5 + -5];
      } while (pppppppppppuVar52 != (uint ***********)pcVar42);
      iVar54 = ((int)(uVar58 * 0x14) >> 2) * -0x33333333;
      puVar12 = (uint *)((int)pppppppppppuVar53 + (iVar54 - 4U & (uint)pppppppppppuVar34));
      uVar29 = *puVar12;
      uVar51 = *(uint *)((int)pppppppppppuVar53 + iVar54) & 0x80808080 &
               *(uint *)((int)pppppppppppuVar53 + iVar54) << 1;
      uVar49 = 0x80;
      if (((uint)LZCOUNT(uVar51 << 0x18 | (uVar51 >> 8 & 0xff) << 0x10 |
                         (uVar51 >> 0x10 & 0xff) << 8 | uVar51 >> 0x18) >> 3) +
          ((uint)LZCOUNT(uVar29 & 0x80808080 & uVar29 << 1) >> 3) < 4) {
        uVar49 = 0xff;
        param_2[8] = (uint ***********)((int)param_2[8] + 1);
      }
      *(undefined1 *)((int)pppppppppppuVar53 + iVar54) = uVar49;
      pppppppppppuVar34 = param_2[9];
      *(undefined1 *)(puVar12 + 1) = uVar49;
      ppppppppppuVar31 = pppppppppppuVar53[uVar58 * -5 + -4];
      param_2[9] = (uint ***********)((int)pppppppppppuVar34 + -1);
      if (ppppppppppuVar31 == (uint **********)0x80000000) goto LAB_00ed9660;
      ppppppppppuVar35 = pppppppppppuVar53[uVar58 * -5 + -2];
      ppppppppppuVar17 = pppppppppppuVar53[uVar58 * -5 + -3];
      ppppppppppuVar36 = ppppppppppuVar38;
      if (ppppppppppuVar35 <= ppppppppppuVar38) {
        ppppppppppuVar36 = ppppppppppuVar35;
      }
      ppppppppppuVar18 = pppppppppppuVar53[uVar58 * -5 + -1];
      if (ppppppppppuVar36 != (uint **********)0x0) {
        ppppppppppuVar48 = (uint **********)0x0;
        do {
          pcVar42 = (char *)ppppppppppppuVar37[(int)ppppppppppuVar48];
          ppppppppppuVar46 = ppppppppppuVar17 + (int)ppppppppppuVar48 * 3;
          if ((uint ***********)pcVar42 != (uint ***********)0x0) {
            *ppppppppppuVar46 = (uint *********)0x1;
            ppppppppppuVar46[1] = (uint *********)pcVar42;
          }
          puVar12 = (uint *)FUN_011e4df8();
          uVar58 = *puVar12;
          uVar28 = puVar12[1];
          uVar39 = puVar12[2] ^ (uint)pcVar42;
          ppppppppppuVar48 = (uint **********)((int)ppppppppppuVar48 + 1);
          uVar29 = puVar12[3];
          uVar51 = uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                   uVar29 >> 0x18;
          lVar4 = (ulonglong)uVar51 * 0xb36a80d2;
          uVar33 = (uint)lVar4;
          uVar51 = (uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
                   uVar39 >> 0x18) * -0x4c957f2e +
                   uVar51 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
          uVar32 = uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
                   uVar28 >> 0x18;
          uVar29 = (uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
                   uVar33 >> 0x18) ^
                   uVar29 * 0x2df45158 +
                   uVar39 * 0x2d7f954c + (int)((ulonglong)uVar39 * 0x2df45158 >> 0x20);
          uVar39 = (uVar51 * 0x1000000 | (uVar51 >> 8 & 0xff) << 0x10 | (uVar51 >> 0x10 & 0xff) << 8
                   | uVar51 >> 0x18) ^ (uint)((ulonglong)uVar39 * 0x2df45158);
          lVar4 = (ulonglong)uVar32 * (ulonglong)uVar39;
          uVar51 = uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                   uVar29 >> 0x18;
          lVar5 = (ulonglong)~uVar58 * (ulonglong)uVar51;
          uVar33 = (uint)lVar5;
          pppppppppppuVar52 = param_2[2];
          uVar51 = (uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
                   uVar39 >> 0x18) * ~uVar58 + uVar51 * ~uVar28 + (int)((ulonglong)lVar5 >> 0x20);
          uVar58 = (uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
                   uVar33 >> 0x18) ^
                   uVar29 * uVar32 +
                   uVar39 * (uVar58 << 0x18 | (uVar58 >> 8 & 0xff) << 0x10 |
                             (uVar58 >> 0x10 & 0xff) << 8 | uVar58 >> 0x18) +
                   (int)((ulonglong)lVar4 >> 0x20);
          uVar29 = (uVar51 * 0x1000000 | (uVar51 >> 8 & 0xff) << 0x10 | (uVar51 >> 0x10 & 0xff) << 8
                   | uVar51 >> 0x18) ^ (uint)lVar4;
          iVar54 = 0;
          uVar51 = uVar58;
          if ((uVar39 & 0x20) != 0) {
            uVar51 = uVar29;
            uVar29 = uVar58;
          }
          uVar39 = uVar29 << (uVar39 & 0x1f) | (uVar51 >> 1) >> (~uVar39 & 0x1f);
          pppppppppppuVar53 = param_2[3];
          uVar51 = (uint)pppppppppppuVar53 & uVar39;
          uVar29 = uVar51;
          while( true ) {
            uVar58 = *(uint *)((int)pppppppppppuVar52 + uVar29);
            uVar28 = uVar58 ^ (uVar39 >> 0x19) * 0x1010101;
            uVar28 = ~uVar28 & 0x80808080 & uVar28 + 0xfefefeff;
            while (uVar28 != 0) {
              uVar32 = uVar28 >> 8;
              uVar33 = uVar28 >> 0x10;
              uVar44 = uVar28 >> 0x18;
              uVar1 = uVar28 << 0x18;
              uVar28 = uVar28 - 1 & uVar28;
              if ((uint **********)pcVar42 ==
                  pppppppppppuVar52
                  [(uVar29 + ((uint)LZCOUNT(uVar1 | (uVar32 & 0xff) << 0x10 | (uVar33 & 0xff) << 8 |
                                            uVar44) >> 3) & (uint)pppppppppppuVar53) * -2 + -2]) {
                if (4 < DAT_018d9130) goto joined_r0x00eda02c;
                uVar29 = (uint)DAT_018da55c;
                if (1 < uVar29 - 1) {
                  if (uVar29 == 0) goto joined_r0x00eda02c;
                  uVar29 = FUN_0169ac90(&DAT_018da554);
                  uVar29 = uVar29 & 0xff;
                  if (uVar29 == 0) goto joined_r0x00eda02c;
                }
                if (uVar29 != 2) {
                  DataMemoryBarrier(0xb);
                  puVar45 = DAT_018daa78;
                  if (DAT_018dd984 != 2) {
                    puVar45 = &DAT_018ae394;
                  }
                  pppppppuVar15 = (uint *******)s_SetGloba_00414c05;
                  if ((DAT_018dd984 == 2) && (pppppppuVar15 = DAT_018daa74, DAT_018daa70 != 0)) {
                    pppppppuVar15 =
                         (uint *******)
                         ((int)DAT_018daa74 + (*(int *)(puVar45 + 8) - 1U & 0xfffffff8) + 8);
                  }
                  iVar54 = (**(code **)(puVar45 + 0x14))(pppppppuVar15);
                  if (iVar54 == 0) goto joined_r0x00eda02c;
                }
                if (*(int *)(DAT_018da554 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187c00c);
                }
                local_68 = (uint ***********)(DAT_018da554 + 0x1c);
                local_40 = (uint ***********)*local_68;
                local_54 = &local_90;
                local_3c = *(uint *************)(DAT_018da554 + 0x20);
                local_38 = *(uint ************)(DAT_018da554 + 0x24);
                local_34 = *(uint *************)(DAT_018da554 + 0x28);
                local_58 = (uint ***********)&local_40;
                local_70 = (uint ***********)&local_58;
                local_30 = (uint ***********)0x0;
                local_6c = (uint ************)&DAT_00000001;
                local_50 = (uint ***********)&DAT_018abb78;
                local_8c = (uint ************)0x95;
                local_b4 = (uint ************)0x0;
                local_a8 = &local_70;
                local_90 = (uint ***********)0x35a98a;
                local_b8 = (uint ***********)&DAT_00000001;
                DataMemoryBarrier(0xb);
                pcVar42 = s_SetGloba_00414c05;
                puVar45 = &DAT_018ae394;
                if (DAT_018dd984 == 2) {
                  pcVar42 = (char *)DAT_018daa74;
                  puVar45 = DAT_018daa78;
                  if (DAT_018daa70 != 0) {
                    pcVar42 = (char *)((int)DAT_018daa74 +
                                      (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8);
                  }
                }
                local_a4 = (uint ************)DAT_018da554;
                iVar54 = (**(code **)(puVar45 + 0x28))(pcVar42,&local_b8);
                if (iVar54 != 0) {
                  (**(code **)(puVar45 + 0x2c))(pcVar42,&local_b8);
                }
                goto joined_r0x00eda02c;
              }
            }
            if ((uVar58 & 0x80808080 & uVar58 << 1) != 0) break;
            iVar54 = iVar54 + 4;
            uVar29 = iVar54 + uVar29 & (uint)pppppppppppuVar53;
          }
          ppppppppppuVar46 = (uint **********)ppppppppppuVar46[2];
          uVar29 = *(uint *)((int)pppppppppppuVar52 + uVar51) & 0x80808080;
          if (uVar29 == 0) {
            iVar54 = 4;
            do {
              uVar51 = uVar51 + iVar54;
              iVar54 = iVar54 + 4;
              uVar51 = uVar51 & (uint)pppppppppppuVar53;
              uVar29 = *(uint *)((int)pppppppppppuVar52 + uVar51) & 0x80808080;
            } while (uVar29 == 0);
          }
          uVar29 = uVar51 + ((uint)LZCOUNT(uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 |
                                           (uVar29 >> 0x10 & 0xff) << 8 | uVar29 >> 0x18) >> 3) &
                   (uint)pppppppppppuVar53;
          bVar50 = *(byte *)((int)pppppppppppuVar52 + uVar29);
          if (-1 < (char)bVar50) {
            uVar29 = (uint)*pppppppppppuVar52 & 0x80808080;
            uVar29 = LZCOUNT(((uint)*pppppppppppuVar52 & 0x80) << 0x18 |
                             (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                             uVar29 >> 0x18);
            bVar50 = *(byte *)((int)pppppppppppuVar52 + (uVar29 >> 3));
            uVar29 = uVar29 >> 3;
          }
          uVar51 = (uint)bVar50;
          pppppppppppuVar34 = param_2[4];
          if (((bVar50 & 1) != 0) && (pppppppppppuVar34 == (uint ***********)0x0)) {
            FUN_00edc58c(param_2 + 2);
            pppppppppppuVar53 = param_2[3];
            pppppppppppuVar52 = param_2[2];
            uVar29 = (uint)pppppppppppuVar53 & uVar39;
            uVar51 = *(uint *)((int)pppppppppppuVar52 + uVar29) & 0x80808080;
            if (uVar51 == 0) {
              iVar54 = 4;
              do {
                uVar29 = uVar29 + iVar54;
                iVar54 = iVar54 + 4;
                uVar29 = uVar29 & (uint)pppppppppppuVar53;
                uVar51 = *(uint *)((int)pppppppppppuVar52 + uVar29) & 0x80808080;
              } while (uVar51 == 0);
            }
            uVar29 = uVar29 + ((uint)LZCOUNT(uVar51 << 0x18 | (uVar51 >> 8 & 0xff) << 0x10 |
                                             (uVar51 >> 0x10 & 0xff) << 8 | uVar51 >> 0x18) >> 3) &
                     (uint)pppppppppppuVar53;
            uVar51 = (uint)*(char *)((int)pppppppppppuVar52 + uVar29);
            if (-1 < (int)uVar51) {
              uVar29 = (uint)*pppppppppppuVar52 & 0x80808080;
              uVar29 = LZCOUNT(((uint)*pppppppppppuVar52 & 0x80) << 0x18 |
                               (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                               uVar29 >> 0x18);
              uVar51 = (uint)*(byte *)((int)pppppppppppuVar52 + (uVar29 >> 3));
              uVar29 = uVar29 >> 3;
            }
            pppppppppppuVar34 = param_2[4];
          }
          bVar50 = (byte)(uVar39 >> 0x19);
          *(byte *)((int)pppppppppppuVar52 + uVar29) = bVar50;
          param_2[4] = (uint ***********)((int)pppppppppppuVar34 - (uVar51 & 1));
          *(byte *)((int)pppppppppppuVar52 + (uVar29 - 4 & (uint)pppppppppppuVar53) + 4) = bVar50;
          param_2[5] = (uint ***********)((int)param_2[5] + 1);
          pppppppppppuVar52[uVar29 * -2 + -2] = (uint **********)pcVar42;
          pppppppppppuVar52[uVar29 * -2 + -1] = ppppppppppuVar46;
joined_r0x00eda02c:
        } while (ppppppppppuVar48 != ppppppppppuVar36);
      }
      uVar29 = (int)ppppppppppuVar35 * 0xc;
      if (0xbffffff4 < uVar29) {
        uVar25 = 0;
LAB_00eda57c:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar25,pcVar42);
      }
      if ((int)ppppppppppuVar35 * 0xc == 0) {
        piVar13 = (int *)&DAT_00000004;
        uVar51 = 0;
      }
      else {
        pcVar42 = (char *)((uint)((ulonglong)uVar29 * 0xaaaaaaab >> 0x20) & 0xfffffff8);
        piVar13 = (int *)thunk_FUN_016d4a50(pcVar42);
        uVar51 = uVar29 / 0xc;
        if (piVar13 == (int *)0x0) {
          uVar25 = 4;
          goto LAB_00eda57c;
        }
      }
      if (ppppppppppuVar35 == (uint **********)0x0) {
LAB_00edbc94:
        uVar25 = 0x27;
        pcVar42 = "Unexpected registration response length";
LAB_00edbcc8:
        local_c8 = (uint ***********)FUN_00ac0588(pcVar42,uVar25);
LAB_00edaa0c:
        if ((DAT_018d9130 < 5) &&
           (((DAT_018da568 - 1 < 2 ||
             ((DAT_018da568 != 0 && (cVar6 = FUN_0169ac90(&DAT_018da560), cVar6 != '\0')))) &&
            (iVar54 = FUN_016949d8(DAT_018da560), iVar54 != 0)))) {
          if (*(int *)(DAT_018da560 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187bffc);
          }
          local_ac = *(uint *************)(DAT_018da560 + 0x28);
          local_a8 = (uint ************)0x0;
          local_b4 = *(uint *************)(DAT_018da560 + 0x20);
          local_b0 = *(uint *************)(DAT_018da560 + 0x24);
          local_50 = (uint ***********)(DAT_018da560 + 0x1c);
          local_b8 = (uint ***********)*local_50;
          local_3c = &local_90;
          local_40 = (uint ***********)&local_b8;
          local_6c = (uint ************)FUN_00604528;
          local_70 = (uint ***********)&local_c8;
          local_54 = (uint ************)&DAT_00000001;
          local_58 = (uint ***********)&local_40;
          local_8c = &local_70;
          local_38 = (uint ***********)&DAT_018abb78;
          local_90 = (uint ***********)&DAT_0056be4e;
          FUN_0169bb88(DAT_018da560,&local_58);
        }
        (*(code *)**local_c8)();
      }
      else {
        ppppppppppuVar36 = ppppppppppuVar17 + 1;
        uVar39 = 0;
        do {
          uVar58 = uVar39;
          ppppppppppuVar48 = ppppppppppuVar36 + -1;
          pppppppppuVar43 = *ppppppppppuVar36;
          ppppppppppuVar36 = ppppppppppuVar36 + 3;
          piVar13[uVar58 * 2] = (int)*ppppppppppuVar48;
          (piVar13 + uVar58 * 2)[1] = (int)pppppppppuVar43;
          uVar39 = uVar58 + 1;
        } while (uVar29 / 0xc != uVar58 + 1);
        if (uVar58 != 0) goto LAB_00edbc94;
        if (*piVar13 != 1) {
          uVar25 = 0x32;
          pcVar42 = "Application has been rejected on bos-mgmt-protocol";
          goto LAB_00edbcc8;
        }
        ppppppppppuVar36 = *param_2[0x12];
        local_40 = (uint ***********)piVar13[1];
        ppppppppppuVar48 = ppppppppppuVar36 + 2;
        do {
          if (((uint)ppppppppppuVar36[3] & (uint)*ppppppppppuVar48) != 0xffffffff) {
            ClearExclusiveLocal();
            local_b4 = (uint ************)&LAB_00fac484;
            local_b8 = (uint ***********)&local_40;
            local_38 = (uint ***********)FUN_00a84d0c(&local_b8);
            local_b8 = (uint ***********)0x3;
            local_3c = (uint ************)&DAT_00000014;
            local_40 = (uint ***********)0x34bc4d;
            local_c8 = (uint ***********)FUN_00abf678(&local_40,&local_b8);
            goto LAB_00edaa0c;
          }
          bVar2 = (bool)hasExclusiveAccess(ppppppppppuVar48);
        } while (!bVar2);
        *ppppppppppuVar48 = (uint *********)local_40;
        ppppppppppuVar36[3] = (uint *********)0x0;
      }
      if (ppppppppppuVar18 == (uint **********)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018a47a4);
      }
      if (ppppppppppuVar18[7] != (uint *********)0x80000000 &&
          ppppppppppuVar18[7] != (uint *********)0x0) {
        thunk_FUN_016d3fb4(ppppppppppuVar18[8]);
      }
      ppppppppppuVar18[7] = (uint *********)ppppppppppuVar31;
      ppppppppppuVar18[8] = (uint *********)ppppppppppuVar17;
      ppppppppppuVar18[9] = (uint *********)ppppppppppuVar35;
      ppppppppppuVar31 = ppppppppppuVar18 + 6;
      pppppppppuVar43 = ppppppppppuVar18[6];
      do {
        while( true ) {
          pppppppppuVar55 = pppppppppuVar43;
          if (((uint)pppppppppuVar55 & 4) != 0) goto LAB_00edb354;
          pppppppppuVar43 = *ppppppppppuVar31;
          if (pppppppppuVar43 == pppppppppuVar55) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar2 = (bool)hasExclusiveAccess(ppppppppppuVar31);
        if (bVar2) {
          *ppppppppppuVar31 = (uint *********)((uint)pppppppppuVar55 | 2);
        }
        DataMemoryBarrier(0xb);
      } while (!bVar2);
LAB_00edb354:
      if (((uint)pppppppppuVar55 & 5) == 1) {
        (*(code *)ppppppppppuVar18[4][2])(ppppppppppuVar18[5]);
      }
      if (((uint)pppppppppuVar55 & 4) == 0) {
        DataMemoryBarrier(0xb);
        do {
          pppppppppuVar43 = *ppppppppppuVar18;
          bVar2 = (bool)hasExclusiveAccess(ppppppppppuVar18);
        } while (!bVar2);
        *ppppppppppuVar18 = (uint *********)((int)pppppppppuVar43 + -1);
        if (pppppppppuVar43 == (uint *********)0x1) {
          DataMemoryBarrier(0xb);
          FUN_00aacae8(ppppppppppuVar18);
        }
      }
      else {
        pppppppppuVar43 = ppppppppppuVar18[7];
        pppppppppuVar55 = ppppppppppuVar18[8];
        ppppppppppuVar18[7] = (uint *********)0x80000000;
        if (pppppppppuVar43 == (uint *********)0x80000000) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018a47b4);
        }
        DataMemoryBarrier(0xb);
        do {
          pppppppppuVar20 = *ppppppppppuVar18;
          bVar2 = (bool)hasExclusiveAccess(ppppppppppuVar18);
        } while (!bVar2);
        *ppppppppppuVar18 = (uint *********)((int)pppppppppuVar20 + -1);
        if (pppppppppuVar20 == (uint *********)0x1) {
          DataMemoryBarrier(0xb);
          FUN_00aacae8(ppppppppppuVar18);
        }
        if (((uint)pppppppppuVar43 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(pppppppppuVar55);
        }
      }
      if (uVar51 != 0) {
        thunk_FUN_016d3fb4(piVar13);
      }
      goto LAB_00edb40c;
    }
    *param_1 = 0x80000000;
    if (ppppppppppuVar38 == (uint **********)0x0) {
      return;
    }
    break;
  case 7:
    ppppppppppppuVar7 = (uint ************)param_3[1];
    pppppppppppuVar52 = (uint ***********)param_3[3];
    ppppppppppppuVar37 = (uint ************)param_3[5];
    uVar29 = param_3[2];
    ppppppppppppuVar19 = (uint ************)param_3[4];
    ppppppppppppuVar56 = (uint ************)param_3[6];
    if (*param_2 == (uint ***********)0x2) {
      local_178 = 4;
      local_f8 = 0;
      local_fc = 4;
      local_100 = 0;
      if (uVar29 != 0) {
        local_198 = &DAT_0187c07c;
        local_14c = (undefined *)0x0;
        ppppppppppppuVar24 = ppppppppppppuVar7;
LAB_00ed8ab0:
        ppppppppppppuVar41 = ppppppppppppuVar24 + 1;
        ppppppppppppuVar24 = (uint ************)*ppppppppppppuVar24;
        local_e8 = ppppppppppppuVar24;
        if (param_2[5] != (uint ***********)0x0) {
          puVar12 = (uint *)FUN_011e4df8();
          ppppppppppppuVar16 = local_e8;
          uVar58 = *puVar12;
          uVar28 = puVar12[1];
          uVar33 = puVar12[2] ^ (uint)ppppppppppppuVar24;
          uVar51 = puVar12[3];
          uVar39 = uVar51 << 0x18 | (uVar51 >> 8 & 0xff) << 0x10 | (uVar51 >> 0x10 & 0xff) << 8 |
                   uVar51 >> 0x18;
          lVar4 = (ulonglong)uVar39 * 0xb36a80d2;
          uVar44 = (uint)lVar4;
          uVar39 = (uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
                   uVar33 >> 0x18) * -0x4c957f2e +
                   uVar39 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
          uVar32 = uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
                   uVar28 >> 0x18;
          uVar44 = (uVar44 << 0x18 | (uVar44 >> 8 & 0xff) << 0x10 | (uVar44 >> 0x10 & 0xff) << 8 |
                   uVar44 >> 0x18) ^
                   uVar51 * 0x2df45158 +
                   uVar33 * 0x2d7f954c + (int)((ulonglong)uVar33 * 0x2df45158 >> 0x20);
          uVar51 = (uVar39 * 0x1000000 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8
                   | uVar39 >> 0x18) ^ (uint)((ulonglong)uVar33 * 0x2df45158);
          lVar4 = (ulonglong)uVar32 * (ulonglong)uVar51;
          uVar39 = uVar44 << 0x18 | (uVar44 >> 8 & 0xff) << 0x10 | (uVar44 >> 0x10 & 0xff) << 8 |
                   uVar44 >> 0x18;
          lVar5 = (ulonglong)~uVar58 * (ulonglong)uVar39;
          uVar33 = (uint)lVar5;
          pppppppppppuVar53 = param_2[2];
          uVar39 = (uVar51 << 0x18 | (uVar51 >> 8 & 0xff) << 0x10 | (uVar51 >> 0x10 & 0xff) << 8 |
                   uVar51 >> 0x18) * ~uVar58 + uVar39 * ~uVar28 + (int)((ulonglong)lVar5 >> 0x20);
          iVar54 = 0;
          ppppppppppppuVar30 =
               (uint ************)
               ((uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
                uVar33 >> 0x18) ^
               uVar44 * uVar32 +
               uVar51 * (uVar58 << 0x18 | (uVar58 >> 8 & 0xff) << 0x10 |
                         (uVar58 >> 0x10 & 0xff) << 8 | uVar58 >> 0x18) +
               (int)((ulonglong)lVar4 >> 0x20));
          unaff_r5 = (uint ************)
                     ((uVar39 * 0x1000000 | (uVar39 >> 8 & 0xff) << 0x10 |
                       (uVar39 >> 0x10 & 0xff) << 8 | uVar39 >> 0x18) ^ (uint)lVar4);
          ppppppppppppuVar40 = ppppppppppppuVar30;
          ppppppppppppuVar27 = unaff_r5;
          if ((uVar51 & 0x20) != 0) {
            ppppppppppppuVar40 = unaff_r5;
            ppppppppppppuVar27 = ppppppppppppuVar30;
          }
          uVar39 = (int)ppppppppppppuVar27 << (uVar51 & 0x1f) |
                   ((uint)ppppppppppppuVar40 >> 1) >> (~uVar51 & 0x1f);
          uVar51 = uVar39 >> 0x19;
          while( true ) {
            uVar39 = (uint)param_2[3] & uVar39;
            unaff_r9 = *(uint *************)((int)pppppppppppuVar53 + uVar39);
            unaff_r4 = (uint ***********)0x80808080;
            uVar58 = (uint)unaff_r9 ^ uVar51 * 0x1010101;
            uVar58 = ~uVar58 & 0x80808080 & uVar58 + 0xfefefeff;
            while (uVar58 != 0) {
              uVar28 = uVar58 >> 8;
              uVar32 = uVar58 >> 0x10;
              uVar33 = uVar58 >> 0x18;
              uVar44 = uVar58 << 0x18;
              unaff_r4 = (uint ***********)(uVar58 - 1);
              uVar58 = (uint)unaff_r4 & uVar58;
              uVar28 = uVar39 + ((uint)LZCOUNT(uVar44 | (uVar28 & 0xff) << 0x10 |
                                               (uVar32 & 0xff) << 8 | uVar33) >> 3) &
                       (uint)param_2[3];
              unaff_r5 = (uint ************)pppppppppppuVar53[uVar28 * -2 + -2];
              if (ppppppppppppuVar24 == unaff_r5) {
                ppppppppppuVar38 = pppppppppppuVar53[uVar28 * -2 + -1];
                if (local_14c == (undefined *)local_100) {
                  FUN_00edcd04(&local_100);
                  local_178 = local_fc;
                }
                ppppppppppppuVar24 = local_e8;
                puVar8 = (undefined4 *)(local_178 + (int)local_14c * 8);
                *puVar8 = ppppppppppppuVar16;
                local_14c = (undefined *)((int)local_14c + 1);
                puVar8[1] = ppppppppppuVar38;
                local_f8 = (int)local_14c;
                puVar12 = (uint *)FUN_011e4df8();
                uVar28 = *puVar12;
                uVar32 = puVar12[1];
                uVar58 = puVar12[2] ^ (uint)ppppppppppppuVar24;
                uVar51 = puVar12[3];
                pppppppppppuVar53 = param_2[10];
                uVar39 = uVar51 << 0x18 | (uVar51 >> 8 & 0xff) << 0x10 |
                         (uVar51 >> 0x10 & 0xff) << 8 | uVar51 >> 0x18;
                lVar4 = (ulonglong)uVar39 * 0xb36a80d2;
                uVar33 = (uint)lVar4;
                uVar39 = (uVar58 << 0x18 | (uVar58 >> 8 & 0xff) << 0x10 |
                          (uVar58 >> 0x10 & 0xff) << 8 | uVar58 >> 0x18) * -0x4c957f2e +
                         uVar39 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
                uVar33 = (uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 |
                          (uVar33 >> 0x10 & 0xff) << 8 | uVar33 >> 0x18) ^
                         uVar51 * 0x2df45158 +
                         uVar58 * 0x2d7f954c + (int)((ulonglong)uVar58 * 0x2df45158 >> 0x20);
                uVar51 = uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 |
                         (uVar32 >> 0x10 & 0xff) << 8 | uVar32 >> 0x18;
                uVar58 = (uVar39 * 0x1000000 | (uVar39 >> 8 & 0xff) << 0x10 |
                          (uVar39 >> 0x10 & 0xff) << 8 | uVar39 >> 0x18) ^
                         (uint)((ulonglong)uVar58 * 0x2df45158);
                lVar4 = (ulonglong)uVar51 * (ulonglong)uVar58;
                uVar39 = uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 |
                         (uVar33 >> 0x10 & 0xff) << 8 | uVar33 >> 0x18;
                lVar5 = (ulonglong)~uVar28 * (ulonglong)uVar39;
                uVar44 = (uint)lVar5;
                iVar54 = 0;
                uVar39 = (uVar58 << 0x18 | (uVar58 >> 8 & 0xff) << 0x10 |
                          (uVar58 >> 0x10 & 0xff) << 8 | uVar58 >> 0x18) * ~uVar28 +
                         uVar39 * ~uVar32 + (int)((ulonglong)lVar5 >> 0x20);
                uVar28 = (uVar44 << 0x18 | (uVar44 >> 8 & 0xff) << 0x10 |
                          (uVar44 >> 0x10 & 0xff) << 8 | uVar44 >> 0x18) ^
                         uVar33 * uVar51 +
                         uVar58 * (uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 |
                                   (uVar28 >> 0x10 & 0xff) << 8 | uVar28 >> 0x18) +
                         (int)((ulonglong)lVar4 >> 0x20);
                uVar51 = (uVar39 * 0x1000000 | (uVar39 >> 8 & 0xff) << 0x10 |
                          (uVar39 >> 0x10 & 0xff) << 8 | uVar39 >> 0x18) ^ (uint)lVar4;
                uVar39 = uVar28;
                if ((uVar58 & 0x20) != 0) {
                  uVar39 = uVar51;
                  uVar51 = uVar28;
                }
                local_b0 = (uint ************)
                           (uVar51 << (uVar58 & 0x1f) | (uVar39 >> 1) >> (~uVar58 & 0x1f));
                local_ac = (uint ************)
                           (uVar39 << (uVar58 & 0x1f) | (uVar51 >> 1) >> (~uVar58 & 0x1f));
                uVar51 = (uint)local_b0;
                goto LAB_00ed8d74;
              }
            }
            if (((uint)unaff_r9 & 0x80808080 & (int)unaff_r9 << 1) != 0) break;
            iVar54 = iVar54 + 4;
            uVar39 = iVar54 + uVar39;
          }
        }
        if (((DAT_018d9130 < 4) &&
            ((DAT_018da598 - 1 < 2 ||
             ((DAT_018da598 != 0 && (cVar6 = FUN_0169ac90(&DAT_018da590), cVar6 != '\0')))))) &&
           (iVar54 = FUN_016949d8(DAT_018da590), iVar54 != 0)) {
          ppppppppppppuVar27 = *(uint *************)(DAT_018da590 + 0x20);
          ppppppppppppuVar24 = extraout_r2;
          pppppppppppuVar53 = extraout_r3;
          if (ppppppppppppuVar27 != (uint ************)0x0) {
            ppppppppppppuVar24 = (uint ************)(DAT_018da590 + 0x1c);
            pppppppppppuVar53 = *ppppppppppppuVar24;
            local_60 = 0;
            local_70 = *ppppppppppppuVar24;
            local_6c = *(uint *************)(DAT_018da590 + 0x20);
            local_68 = *(uint ************)(DAT_018da590 + 0x24);
            local_64 = *(uint *************)(DAT_018da590 + 0x28);
            unaff_r4 = *(uint ************)(DAT_018da590 + 0x24);
            unaff_r5 = *(uint *************)(DAT_018da590 + 0x28);
            local_d4 = (uint ************)&DAT_0000006d;
            local_d8 = (uint ***********)0x35aa07;
          }
          if (ppppppppppppuVar27 < &SUB_00000002) {
LAB_00edbc40:
            local_198 = &DAT_0187c05c;
LAB_00edbc4c:
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,local_198);
          }
          local_48 = 1;
          local_e4 = &local_c8;
          local_c8 = pppppppppppuVar52;
          local_c4 = ppppppppppppuVar19;
          local_58 = pppppppppppuVar53;
          local_54 = ppppppppppppuVar27;
          local_50 = unaff_r4;
          local_4c = unaff_r5;
          if (ppppppppppppuVar27 < (uint ************)0x3) goto LAB_00edbc40;
          local_9c = &local_e8;
          local_a0 = &local_40;
          local_a8 = (uint ************)&local_e4;
          local_ac = &local_58;
          local_b4 = &local_d8;
          local_b8 = (uint ***********)&local_70;
          local_30 = (uint ***********)&SUB_00000002;
          local_8c = (uint ************)0x3;
          local_98 = &DAT_018a4904;
          local_a4 = (uint ************)&DAT_0187c06c;
          local_b0 = (uint ************)&DAT_018abb78;
          local_90 = (uint ***********)&local_b8;
          local_88 = ppppppppppppuVar24;
          local_40 = pppppppppppuVar53;
          local_3c = ppppppppppppuVar27;
          local_38 = unaff_r4;
          local_34 = unaff_r5;
          FUN_0169bb88(DAT_018da590,&local_90);
        }
        goto joined_r0x00ed9360;
      }
LAB_00eda58c:
      pppppppppppuVar53 = (uint ***********)&local_b8;
      pppppppppppuVar34 = param_2[0x12];
      local_e4 = ppppppppppppuVar19;
      local_e0 = pppppppppppuVar52;
      local_dc = ppppppppppppuVar19;
      ppppppppppppuVar19 = (uint ************)FUN_00a34e68(pppppppppppuVar34,&local_100);
      local_b4 = (uint ************)&DAT_006043a8;
      pppppppppppuVar52 = (uint ***********)0xeda5dc;
      local_b8 = (uint ***********)&local_e4;
      FUN_00600d2c(&local_d8,&DAT_00589a2f,&local_b8);
      if (ppppppppppppuVar19 == (uint ************)0x0) {
        ppppppppppppuVar19 = extraout_r2_00;
        if (local_d8 != (uint ***********)0x0) {
          pppppppppppuVar52 = (uint ***********)0xeda778;
          thunk_FUN_016d3fb4(local_d4);
          ppppppppppppuVar19 = extraout_r2_01;
        }
        if (local_dc != (uint ************)&DAT_00000011) {
          if (local_dc == (uint ************)&DAT_00000005) {
            pppppppppppuVar52 = (uint ***********)0xeda7a0;
            iVar54 = thunk_FUN_016dd50a(local_e0,"tuner",5);
            ppppppppppppuVar19 = extraout_r2_02;
            if (iVar54 == 0) {
              pppppppppppuVar52 = (uint ***********)0x0;
              goto LAB_00edaf0c;
            }
          }
LAB_00edaca4:
          if ((DAT_018d9130 < 4) && (DAT_018d98b4 != '\0')) {
            if (DAT_018d98b4 == '\x01') {
LAB_00edacf8:
              puVar45 = &DAT_018ae394;
              DataMemoryBarrier(0xb);
              pppppppuVar15 = (uint *******)s_SetGloba_00414c05;
              if (DAT_018dd984 == 2) {
                pppppppuVar15 = DAT_018daa74;
                puVar45 = DAT_018daa78;
                if (DAT_018daa70 != 0) {
                  pppppppuVar15 =
                       (uint *******)
                       ((int)DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8);
                }
              }
              pppppppppppuVar52 = (uint ***********)0xedad60;
              iVar54 = (**(code **)(puVar45 + 0x14))(pppppppuVar15,DAT_018d98ac);
              ppppppppppppuVar19 = extraout_r2_06;
              if (iVar54 == 0) goto LAB_00edaefc;
            }
            else if (DAT_018d98b4 != '\x02') {
              pppppppppppuVar52 = (uint ***********)0xedace4;
              cVar6 = FUN_0169ac90(&DAT_018d98ac);
              if (cVar6 == '\0') goto LAB_00edaefc;
              ppppppppppppuVar19 = extraout_r2_05;
              if (cVar6 != '\x02') goto LAB_00edacf8;
            }
            local_2c = DAT_018d98ac;
            ppppppppppppuVar24 = *(uint *************)(DAT_018d98ac + 0x20);
            if (ppppppppppppuVar24 != (uint ************)0x0) {
              pppppppppppuVar53 = *(uint ************)(DAT_018d98ac + 0x24);
              unaff_r9 = *(uint *************)(DAT_018d98ac + 0x28);
              ppppppppppppuVar19 = (uint ************)(DAT_018d98ac + 0x1c);
              pppppppppppuVar52 = *ppppppppppppuVar19;
              local_90 = *ppppppppppppuVar19;
              local_8c = *(uint *************)(DAT_018d98ac + 0x20);
              local_88 = *(uint *************)(DAT_018d98ac + 0x24);
              local_84 = *(uint ************)(DAT_018d98ac + 0x28);
              local_80 = 0;
              local_74 = 0x47;
              local_78 = (uint ************)0x34bb0c;
            }
            if (ppppppppppppuVar24 < &SUB_00000002) {
LAB_00edbce8:
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186c2e0);
            }
            local_60 = 1;
            local_70 = pppppppppppuVar52;
            local_6c = ppppppppppppuVar24;
            local_68 = pppppppppppuVar53;
            local_64 = unaff_r9;
            if (ppppppppppppuVar24 < (uint ************)0x3) goto LAB_00edbce8;
            local_9c = &local_44;
            local_a0 = &local_58;
            local_ac = &local_70;
            local_b4 = (uint ************)&local_78;
            local_b8 = (uint ***********)&local_90;
            local_48 = 2;
            local_c4 = (uint ************)0x3;
            local_a4 = (uint ************)&DAT_0186c2f0;
            local_98 = &DAT_018abaa8;
            local_3c = (uint ************)0x0;
            local_30 = (uint ***********)&local_c8;
            local_b0 = (uint ************)&DAT_018abb78;
            local_40 = (uint ***********)&DAT_00000001;
            DataMemoryBarrier(0xb);
            pcVar42 = s_SetGloba_00414c05;
            puVar45 = &DAT_018ae394;
            if (DAT_018dd984 == 2) {
              pcVar42 = (char *)DAT_018daa74;
              puVar45 = DAT_018daa78;
              if (DAT_018daa70 != 0) {
                pcVar42 = (char *)((int)DAT_018daa74 +
                                  (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8);
              }
            }
            local_c8 = (uint ***********)&local_b8;
            local_c0 = ppppppppppppuVar19;
            local_a8 = (uint ************)&local_e4;
            local_58 = pppppppppppuVar52;
            local_54 = ppppppppppppuVar24;
            local_50 = pppppppppppuVar53;
            local_4c = unaff_r9;
            local_44 = ppppppppppppuVar56;
            iVar54 = (**(code **)(puVar45 + 0x28))(pcVar42,&local_40);
            if (iVar54 != 0) {
              (**(code **)(puVar45 + 0x2c))(pcVar42,&local_40);
            }
          }
LAB_00edaefc:
          pppppppppppuVar52 = (uint ***********)0x0;
          goto LAB_00edaf0c;
        }
        pppppppppppuVar52 = (uint ***********)0xedac9c;
        iVar54 = thunk_FUN_016dd50a(local_e0,"license-keepalive",0x11);
        ppppppppppppuVar19 = extraout_r2_04;
        if (iVar54 != 0) goto LAB_00edaca4;
        local_b8 = (uint ***********)ppppppppppppuVar56;
        local_b4 = ppppppppppppuVar37;
        local_b0 = ppppppppppppuVar56;
        FUN_00a34f58(&local_40,&local_b8);
        pppppppppppuVar53 = local_38;
        ppppppppppppuVar56 = local_3c;
        pppppppppppuVar52 = local_40;
        if (local_38 == (uint ***********)&DAT_3b9aca00) {
          local_50 = local_40;
          local_b8 = (uint ***********)0x3;
          local_54 = (uint ************)&DAT_0000002d;
          local_58 = (uint ***********)0x34bb2f;
          pppppppppppuVar52 = (uint ***********)FUN_00abf678(&local_58,&local_b8);
        }
        else {
          pppppppppuVar43 = pppppppppppuVar34[1][2];
          pppppppppuVar55 = pppppppppuVar43 + 0x26;
          if (*pppppppppuVar55 == (uint ********)0x0) {
            bVar2 = (bool)hasExclusiveAccess(pppppppppuVar55);
            if (!bVar2) goto LAB_00edb920;
            *pppppppppuVar55 = (uint ********)0x8;
            DataMemoryBarrier(0xb);
          }
          else {
            ClearExclusiveLocal();
LAB_00edb920:
            FUN_0127e06c(pppppppppuVar55);
          }
          FUN_0128236c(pppppppppuVar55);
          FUN_0128236c((uint)pppppppppuVar55 | 1);
          ppppppppuVar21 = pppppppppuVar43[0x27];
          pppppppuVar15 = ppppppppuVar21[2];
          ppppppppppppuVar37 = (uint ************)ppppppppuVar21[3];
          pppppppuVar57 = ppppppppuVar21[4];
          ppppppppuVar47 = (uint ********)thunk_FUN_016d4a50(0x18);
          if (ppppppppuVar47 == (uint ********)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x18);
          }
          ppppppppuVar47[4] = (uint *******)pppppppppppuVar53;
          *ppppppppuVar47 = (uint *******)0x1;
          ppppppppuVar47[1] = (uint *******)0x1;
          ppppppppuVar47[2] = (uint *******)pppppppppppuVar52;
          ppppppppuVar47[3] = (uint *******)ppppppppppppuVar56;
          DataMemoryBarrier(0xb);
          do {
            pppppppuVar22 = *ppppppppuVar21;
            bVar2 = (bool)hasExclusiveAccess(ppppppppuVar21);
          } while (!bVar2);
          *ppppppppuVar21 = (uint *******)((int)pppppppuVar22 + -1);
          if (pppppppuVar22 == (uint *******)0x1) {
            DataMemoryBarrier(0xb);
            FUN_00aaaeec(pppppppppuVar43[0x27]);
          }
          pppppppppuVar43[0x27] = ppppppppuVar47;
          pppppppppuVar20 = pppppppppuVar43 + 0x28;
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(pppppppppuVar20);
          } while (!bVar2);
          *pppppppppuVar20 = (uint ********)((int)*pppppppppuVar20 + 2);
          FUN_01282570(pppppppppuVar55);
          FUN_01282570((uint)pppppppppuVar55 | 1);
          if (*pppppppppuVar55 == (uint ********)0x8) {
            DataMemoryBarrier(0xb);
            do {
              bVar2 = (bool)hasExclusiveAccess(pppppppppuVar55);
              if (bVar2) {
                *pppppppppuVar55 = (uint ********)0x0;
                goto LAB_00edba2c;
              }
            } while (*pppppppppuVar55 == (uint ********)0x8);
          }
          ClearExclusiveLocal();
          FUN_0127db4c(pppppppppuVar55);
LAB_00edba2c:
          FUN_0163b708(pppppppppuVar43 + 2);
          FUN_0163b708(pppppppppuVar43 + 6);
          FUN_0163b708(pppppppppuVar43 + 10);
          FUN_0163b708(pppppppppuVar43 + 0xe);
          FUN_0163b708(pppppppppuVar43 + 0x12);
          FUN_0163b708(pppppppppuVar43 + 0x16);
          FUN_0163b708(pppppppppuVar43 + 0x1a);
          FUN_0163b708(pppppppppuVar43 + 0x1e);
          if (((((pppppppuVar15 == (uint *******)0x0 && ppppppppppppuVar37 == (uint ************)0x0
                 ) && pppppppuVar57 == (uint *******)0x0) || (3 < DAT_018d9130)) ||
              ((1 < DAT_018d98c0 - 1 &&
               ((DAT_018d98c0 == 0 || (cVar6 = FUN_0169ac90(&DAT_018d98b8), cVar6 == '\0')))))) ||
             (iVar54 = FUN_016949d8(DAT_018d98b8), iVar54 == 0)) {
            pppppppppppuVar52 = (uint ***********)0x0;
          }
          else {
            pppppppppppuVar34 = (uint ***********)(DAT_018d98b8 + 0x1c);
            ppppppppppppuVar19 = *(uint *************)(DAT_018d98b8 + 0x20);
            pppppppppppuVar53 = extraout_r3_07;
            if (ppppppppppppuVar19 != (uint ************)0x0) {
              pppppppppppuVar53 = *(uint ************)(DAT_018d98b8 + 0x24);
              ppppppppppppuVar37 = *(uint *************)(DAT_018d98b8 + 0x28);
              local_58 = (uint ***********)*pppppppppppuVar34;
              local_54 = *(uint *************)(DAT_018d98b8 + 0x20);
              local_50 = *(uint ************)(DAT_018d98b8 + 0x24);
              local_4c = *(uint *************)(DAT_018d98b8 + 0x28);
              local_48 = 0;
              local_c4 = (uint ************)0x63;
              local_c8 = (uint ***********)0x34bb5c;
            }
            if (ppppppppppppuVar19 < &SUB_00000002) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186c300);
            }
            local_a8 = &local_90;
            local_ac = &local_40;
            local_b4 = &local_c8;
            local_6c = (uint ************)&SUB_00000002;
            local_b8 = (uint ***********)&local_58;
            local_8c = ppppppppppppuVar56;
            local_70 = (uint ***********)&local_b8;
            local_30 = (uint ***********)&DAT_00000001;
            local_a4 = (uint ************)&DAT_0187b36c;
            local_b0 = (uint ************)&DAT_018abb78;
            local_90 = pppppppppppuVar52;
            local_68 = pppppppppppuVar34;
            local_40 = (uint ***********)*pppppppppppuVar34;
            local_3c = ppppppppppppuVar19;
            local_38 = pppppppppppuVar53;
            local_34 = ppppppppppppuVar37;
            FUN_00a35514(&local_70);
            pppppppppppuVar52 = (uint ***********)0x0;
          }
        }
      }
      else {
        local_b8 = (uint ***********)0x3;
        local_40 = local_d8;
        local_3c = local_d4;
        local_38 = pppppppppppuStack_d0;
        local_34 = ppppppppppppuVar19;
        pppppppppppuVar52 = (uint ***********)FUN_00abf778(&local_40,&local_b8);
LAB_00edaf0c:
        if (ppppppppppppuVar56 != (uint ************)0x0) {
          thunk_FUN_016d3fb4(ppppppppppppuVar37);
        }
      }
      if (local_e4 != (uint ************)0x0) {
        thunk_FUN_016d3fb4(local_e0);
      }
      if (pppppppppppuVar52 == (uint ***********)0x0) {
        *param_1 = 0x80000003;
      }
      else {
        local_38 = (uint ***********)0x0;
        local_b4 = (uint ************)&DAT_0187c0cc;
        local_b8 = (uint ***********)&local_40;
        local_40 = (uint ***********)0x0;
        local_ac = (uint ************)0x0;
        local_3c = (uint ************)&DAT_00000001;
        local_b0 = (uint ************)&DAT_60000020;
        local_70 = pppppppppppuVar52;
        iVar54 = FUN_00604528(&local_70,&local_b8);
        if (iVar54 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_90,
                       &DAT_0187c104,&DAT_018af130);
        }
        local_58 = local_40;
        local_54 = local_3c;
        local_50 = local_38;
        (*(code *)**pppppppppppuVar52)(pppppppppppuVar52);
        *param_1 = local_58;
        param_1[1] = local_54;
        param_1[2] = local_50;
      }
      if (uVar29 == 0) goto LAB_00edb8b4;
      ppppppppppppuVar37 = ppppppppppppuVar7;
    }
    else {
      *param_1 = 0x80000000;
      if (uVar29 != 0) {
        thunk_FUN_016d3fb4(ppppppppppppuVar7);
      }
      if (ppppppppppppuVar19 != (uint ************)0x0) {
        thunk_FUN_016d3fb4(pppppppppppuVar52);
      }
      if (ppppppppppppuVar56 == (uint ************)0x0) goto LAB_00edb8b4;
    }
    break;
  case 8:
    ppppppppppppuVar19 = (uint ************)param_3[1];
    pppppppppppuVar52 = (uint ***********)param_3[3];
    ppppppppppppuVar24 = (uint ************)param_3[4];
    ppppppppppppuVar37 = (uint ************)param_3[5];
    uVar29 = param_3[2];
    ppppppppppppuVar7 = (uint ************)param_3[6];
    if (*param_2 == (uint ***********)0x2) {
      local_ec = 0;
      local_f0 = 4;
      local_f4 = 0;
      if (uVar29 != 0) {
        if (param_2[5] != (uint ***********)0x0) {
          local_174 = 4;
          local_168 = 0;
          ppppppppppppuVar41 = ppppppppppppuVar19;
LAB_00ed9734:
          ppppppppppppuVar27 = ppppppppppppuVar41 + 1;
          ppppppppppppuVar41 = (uint ************)*ppppppppppppuVar41;
          local_e8 = ppppppppppppuVar41;
          if (param_2[5] != (uint ***********)0x0) {
            puVar12 = (uint *)FUN_011e4df8();
            ppppppppppppuVar16 = local_e8;
            uVar28 = *puVar12;
            uVar32 = puVar12[1];
            uVar58 = puVar12[2] ^ (uint)ppppppppppppuVar41;
            uVar51 = puVar12[3];
            uVar39 = uVar51 << 0x18 | (uVar51 >> 8 & 0xff) << 0x10 | (uVar51 >> 0x10 & 0xff) << 8 |
                     uVar51 >> 0x18;
            lVar4 = (ulonglong)uVar39 * 0xb36a80d2;
            uVar44 = (uint)lVar4;
            uVar39 = (uVar58 << 0x18 | (uVar58 >> 8 & 0xff) << 0x10 | (uVar58 >> 0x10 & 0xff) << 8 |
                     uVar58 >> 0x18) * -0x4c957f2e +
                     uVar39 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
            uVar33 = uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 | (uVar32 >> 0x10 & 0xff) << 8 |
                     uVar32 >> 0x18;
            uVar51 = (uVar44 << 0x18 | (uVar44 >> 8 & 0xff) << 0x10 | (uVar44 >> 0x10 & 0xff) << 8 |
                     uVar44 >> 0x18) ^
                     uVar51 * 0x2df45158 +
                     uVar58 * 0x2d7f954c + (int)((ulonglong)uVar58 * 0x2df45158 >> 0x20);
            uVar58 = (uVar39 * 0x1000000 | (uVar39 >> 8 & 0xff) << 0x10 |
                      (uVar39 >> 0x10 & 0xff) << 8 | uVar39 >> 0x18) ^
                     (uint)((ulonglong)uVar58 * 0x2df45158);
            lVar4 = (ulonglong)uVar33 * (ulonglong)uVar58;
            uVar39 = uVar51 << 0x18 | (uVar51 >> 8 & 0xff) << 0x10 | (uVar51 >> 0x10 & 0xff) << 8 |
                     uVar51 >> 0x18;
            lVar5 = (ulonglong)~uVar28 * (ulonglong)uVar39;
            uVar44 = (uint)lVar5;
            pppppppppppuVar53 = param_2[2];
            uVar39 = (uVar58 << 0x18 | (uVar58 >> 8 & 0xff) << 0x10 | (uVar58 >> 0x10 & 0xff) << 8 |
                     uVar58 >> 0x18) * ~uVar28 + uVar39 * ~uVar32 + (int)((ulonglong)lVar5 >> 0x20);
            iVar54 = 0;
            uVar28 = (uVar44 << 0x18 | (uVar44 >> 8 & 0xff) << 0x10 | (uVar44 >> 0x10 & 0xff) << 8 |
                     uVar44 >> 0x18) ^
                     uVar51 * uVar33 +
                     uVar58 * (uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 |
                               (uVar28 >> 0x10 & 0xff) << 8 | uVar28 >> 0x18) +
                     (int)((ulonglong)lVar4 >> 0x20);
            uVar51 = (uVar39 * 0x1000000 | (uVar39 >> 8 & 0xff) << 0x10 |
                      (uVar39 >> 0x10 & 0xff) << 8 | uVar39 >> 0x18) ^ (uint)lVar4;
            uVar39 = uVar28;
            if ((uVar58 & 0x20) != 0) {
              uVar39 = uVar51;
              uVar51 = uVar28;
            }
            uVar39 = uVar51 << (uVar58 & 0x1f) | (uVar39 >> 1) >> (~uVar58 & 0x1f);
            uVar51 = uVar39 >> 0x19;
            while( true ) {
              uVar39 = (uint)param_2[3] & uVar39;
              uVar28 = *(uint *)((int)pppppppppppuVar53 + uVar39);
              uVar58 = uVar28 ^ uVar51 * 0x1010101;
              uVar58 = ~uVar58 & 0x80808080 & uVar58 + 0xfefefeff;
              while (uVar58 != 0) {
                uVar32 = uVar58 >> 8;
                uVar33 = uVar58 >> 0x10;
                uVar44 = uVar58 >> 0x18;
                uVar1 = uVar58 << 0x18;
                uVar58 = uVar58 - 1 & uVar58;
                uVar32 = uVar39 + ((uint)LZCOUNT(uVar1 | (uVar32 & 0xff) << 0x10 |
                                                 (uVar33 & 0xff) << 8 | uVar44) >> 3) &
                         (uint)param_2[3];
                if (ppppppppppppuVar41 == (uint ************)pppppppppppuVar53[uVar32 * -2 + -2]) {
                  ppppppppppuVar38 = pppppppppppuVar53[uVar32 * -2 + -1];
                  if (local_168 == local_f4) {
                    FUN_00edcd04(&local_f4);
                    local_174 = local_f0;
                  }
                  ppppppppppppuVar56 = local_e8;
                  puVar8 = (undefined4 *)(local_174 + local_168 * 8);
                  *puVar8 = ppppppppppppuVar16;
                  local_168 = local_168 + 1;
                  puVar8[1] = ppppppppppuVar38;
                  local_ec = local_168;
                  puVar12 = (uint *)FUN_011e4df8();
                  uVar28 = *puVar12;
                  uVar32 = puVar12[1];
                  uVar58 = puVar12[2] ^ (uint)ppppppppppppuVar56;
                  uVar51 = puVar12[3];
                  pppppppppppuVar53 = param_2[10];
                  uVar39 = uVar51 << 0x18 | (uVar51 >> 8 & 0xff) << 0x10 |
                           (uVar51 >> 0x10 & 0xff) << 8 | uVar51 >> 0x18;
                  lVar4 = (ulonglong)uVar39 * 0xb36a80d2;
                  uVar33 = (uint)lVar4;
                  uVar39 = (uVar58 << 0x18 | (uVar58 >> 8 & 0xff) << 0x10 |
                            (uVar58 >> 0x10 & 0xff) << 8 | uVar58 >> 0x18) * -0x4c957f2e +
                           uVar39 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
                  uVar33 = (uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 |
                            (uVar33 >> 0x10 & 0xff) << 8 | uVar33 >> 0x18) ^
                           uVar51 * 0x2df45158 +
                           uVar58 * 0x2d7f954c + (int)((ulonglong)uVar58 * 0x2df45158 >> 0x20);
                  uVar51 = uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 |
                           (uVar32 >> 0x10 & 0xff) << 8 | uVar32 >> 0x18;
                  uVar58 = (uVar39 * 0x1000000 | (uVar39 >> 8 & 0xff) << 0x10 |
                            (uVar39 >> 0x10 & 0xff) << 8 | uVar39 >> 0x18) ^
                           (uint)((ulonglong)uVar58 * 0x2df45158);
                  lVar4 = (ulonglong)uVar51 * (ulonglong)uVar58;
                  uVar39 = uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 |
                           (uVar33 >> 0x10 & 0xff) << 8 | uVar33 >> 0x18;
                  lVar5 = (ulonglong)~uVar28 * (ulonglong)uVar39;
                  uVar44 = (uint)lVar5;
                  iVar54 = 0;
                  uVar39 = (uVar58 << 0x18 | (uVar58 >> 8 & 0xff) << 0x10 |
                            (uVar58 >> 0x10 & 0xff) << 8 | uVar58 >> 0x18) * ~uVar28 +
                           uVar39 * ~uVar32 + (int)((ulonglong)lVar5 >> 0x20);
                  uVar28 = (uVar44 << 0x18 | (uVar44 >> 8 & 0xff) << 0x10 |
                            (uVar44 >> 0x10 & 0xff) << 8 | uVar44 >> 0x18) ^
                           uVar33 * uVar51 +
                           uVar58 * (uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 |
                                     (uVar28 >> 0x10 & 0xff) << 8 | uVar28 >> 0x18) +
                           (int)((ulonglong)lVar4 >> 0x20);
                  uVar51 = (uVar39 * 0x1000000 | (uVar39 >> 8 & 0xff) << 0x10 |
                            (uVar39 >> 0x10 & 0xff) << 8 | uVar39 >> 0x18) ^ (uint)lVar4;
                  uVar39 = uVar28;
                  if ((uVar58 & 0x20) != 0) {
                    uVar39 = uVar51;
                    uVar51 = uVar28;
                  }
                  local_b0 = (uint ************)
                             (uVar51 << (uVar58 & 0x1f) | (uVar39 >> 1) >> (~uVar58 & 0x1f));
                  local_ac = (uint ************)
                             (uVar39 << (uVar58 & 0x1f) | (uVar51 >> 1) >> (~uVar58 & 0x1f));
                  ppppppppppppuVar41 = local_b0;
                  goto LAB_00ed99fc;
                }
              }
              if ((uVar28 & 0x80808080 & uVar28 << 1) != 0) break;
              iVar54 = iVar54 + 4;
              uVar39 = iVar54 + uVar39;
            }
          }
          goto LAB_00ed9728;
        }
        iVar54 = uVar29 << 2;
        ppppppppppppuVar41 = ppppppppppppuVar19;
        do {
          local_e8 = (uint ************)*ppppppppppppuVar41;
          iVar54 = iVar54 + -4;
          ppppppppppppuVar41 = ppppppppppppuVar41 + 1;
        } while (iVar54 != 0);
      }
LAB_00eda68c:
      pppppppppppuVar53 = param_2[0x12];
      local_e4 = ppppppppppppuVar24;
      local_e0 = pppppppppppuVar52;
      local_dc = ppppppppppppuVar24;
      ppppppppppppuVar24 = (uint ************)FUN_00a34e68(pppppppppppuVar53,&local_f4);
      local_b4 = (uint ************)&DAT_006043a8;
      pppppppppppuVar52 = (uint ***********)0xeda6e0;
      local_b8 = (uint ***********)&local_e4;
      FUN_00600d2c(&local_d8,&DAT_0058773b,&local_b8);
      if (ppppppppppppuVar24 == (uint ************)0x0) {
        ppppppppppppuVar24 = extraout_r3_01;
        uVar25 = extraout_r12;
        if (local_d8 != (uint ***********)0x0) {
          pppppppppppuVar52 = (uint ***********)0xeda72c;
          thunk_FUN_016d3fb4(local_d4);
          ppppppppppppuVar24 = extraout_r3_02;
          uVar25 = extraout_r12_00;
        }
        if (local_dc == (uint ************)&DAT_00000011) {
          pppppppppppuVar52 = (uint ***********)0xeda7c0;
          iVar54 = thunk_FUN_016dd50a(local_e0,"license-keepalive",0x11);
          ppppppppppppuVar24 = extraout_r3_04;
          uVar25 = extraout_r12_02;
          if (iVar54 != 0) goto LAB_00eda7c8;
          pppppppppuVar55 = pppppppppppuVar53[1][2];
          pppppppppuVar43 = pppppppppuVar55 + 0x26;
          if (*pppppppppuVar43 == (uint ********)0x0) {
            bVar2 = (bool)hasExclusiveAccess(pppppppppuVar43);
            if (!bVar2) goto LAB_00edb4c8;
            *pppppppppuVar43 = (uint ********)0x8;
            DataMemoryBarrier(0xb);
          }
          else {
            ClearExclusiveLocal();
LAB_00edb4c8:
            FUN_0127e06c(pppppppppuVar43);
          }
          FUN_0128236c(pppppppppuVar43);
          FUN_0128236c((uint)pppppppppuVar43 | 1);
          ppppppppuVar47 = pppppppppuVar55[0x27];
          bVar2 = false;
          if ((ppppppppuVar47[2] != (uint *******)0x0 || ppppppppuVar47[3] != (uint *******)0x0) ||
              ppppppppuVar47[4] != (uint *******)0x0) {
            bVar2 = true;
            ppppppppuVar21 = (uint ********)thunk_FUN_016d4a50(0x18);
            if (ppppppppuVar21 == (uint ********)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x18);
            }
            ppppppppuVar21[2] = (uint *******)0x0;
            *ppppppppuVar21 = (uint *******)0x1;
            ppppppppuVar21[1] = (uint *******)0x1;
            ppppppppuVar21[3] = (uint *******)0x0;
            ppppppppuVar21[4] = (uint *******)0x0;
            DataMemoryBarrier(0xb);
            do {
              pppppppuVar15 = *ppppppppuVar47;
              bVar3 = (bool)hasExclusiveAccess(ppppppppuVar47);
            } while (!bVar3);
            *ppppppppuVar47 = (uint *******)((int)pppppppuVar15 + -1);
            if (pppppppuVar15 == (uint *******)0x1) {
              DataMemoryBarrier(0xb);
              FUN_00aaaeec(pppppppppuVar55[0x27]);
            }
            pppppppppuVar55[0x27] = ppppppppuVar21;
          }
          pppppppppuVar20 = pppppppppuVar55 + 0x28;
          DataMemoryBarrier(0xb);
          do {
            bVar3 = (bool)hasExclusiveAccess(pppppppppuVar20);
          } while (!bVar3);
          *pppppppppuVar20 = (uint ********)((int)*pppppppppuVar20 + 2);
          FUN_01282570(pppppppppuVar43);
          FUN_01282570((uint)pppppppppuVar43 | 1);
          if (*pppppppppuVar43 == (uint ********)0x8) {
            DataMemoryBarrier(0xb);
            do {
              bVar3 = (bool)hasExclusiveAccess(pppppppppuVar43);
              if (bVar3) {
                *pppppppppuVar43 = (uint ********)0x0;
                goto LAB_00edb5c4;
              }
            } while (*pppppppppuVar43 == (uint ********)0x8);
          }
          ClearExclusiveLocal();
          FUN_0127db4c(pppppppppuVar43);
LAB_00edb5c4:
          FUN_0163b708(pppppppppuVar55 + 2);
          FUN_0163b708(pppppppppuVar55 + 6);
          FUN_0163b708(pppppppppuVar55 + 10);
          FUN_0163b708(pppppppppuVar55 + 0xe);
          FUN_0163b708(pppppppppuVar55 + 0x12);
          FUN_0163b708(pppppppppuVar55 + 0x16);
          FUN_0163b708(pppppppppuVar55 + 0x1a);
          FUN_0163b708(pppppppppuVar55 + 0x1e);
          if ((((!bVar2) && (DAT_018d9130 < 4)) &&
              ((DAT_018d98d8 - 1 < 2 ||
               ((DAT_018d98d8 != 0 && (cVar6 = FUN_0169ac90(&DAT_018d98d0), cVar6 != '\0')))))) &&
             (iVar54 = FUN_016949d8(DAT_018d98d0), iVar54 != 0)) {
            if (*(int *)(DAT_018d98d0 + 0x20) == 0) {
              local_14c = &DAT_0186c3a0;
              goto LAB_00eda8f0;
            }
            local_3c = &local_70;
            local_a8 = (uint ************)0x0;
            local_50 = (uint ***********)(DAT_018d98d0 + 0x1c);
            local_b8 = (uint ***********)*local_50;
            local_58 = (uint ***********)&local_40;
            local_b4 = *(uint *************)(DAT_018d98d0 + 0x20);
            local_b0 = *(uint *************)(DAT_018d98d0 + 0x24);
            local_ac = *(uint *************)(DAT_018d98d0 + 0x28);
            local_54 = (uint ************)&DAT_00000001;
            local_38 = (uint ***********)&DAT_018abb78;
            local_6c = (uint ************)&DAT_00000065;
            local_70 = (uint ***********)0x34bc1b;
            local_40 = (uint ***********)&local_b8;
            FUN_00a35620(&local_58);
LAB_00eda75c:
            pppppppppppuVar52 = (uint ***********)0x0;
            goto LAB_00edb7cc;
          }
        }
        else {
          if (local_dc == (uint ************)&DAT_00000005) {
            pppppppppppuVar52 = (uint ***********)0xeda754;
            iVar54 = thunk_FUN_016dd50a(local_e0,"tuner",5);
            ppppppppppppuVar24 = extraout_r3_03;
            uVar25 = extraout_r12_01;
            if (iVar54 == 0) goto LAB_00eda75c;
          }
LAB_00eda7c8:
          if ((DAT_018d9130 < 4) && (DAT_018d98cc != '\0')) {
            if (DAT_018d98cc == '\x01') {
LAB_00eda81c:
              puVar45 = &DAT_018ae394;
              DataMemoryBarrier(0xb);
              pppppppuVar15 = (uint *******)s_SetGloba_00414c05;
              if (DAT_018dd984 == 2) {
                pppppppuVar15 = DAT_018daa74;
                puVar45 = DAT_018daa78;
                if (DAT_018daa70 != 0) {
                  pppppppuVar15 =
                       (uint *******)
                       ((int)DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8);
                }
              }
              pppppppppppuVar52 = (uint ***********)0xeda884;
              iVar54 = (**(code **)(puVar45 + 0x14))(pppppppuVar15,DAT_018d98c4);
              ppppppppppppuVar24 = extraout_r3_06;
              uVar25 = extraout_r12_04;
              if (iVar54 == 0) goto LAB_00edb7bc;
            }
            else if (DAT_018d98cc != '\x02') {
              pppppppppppuVar52 = (uint ***********)0xeda808;
              cVar6 = FUN_0169ac90(&DAT_018d98c4);
              if (cVar6 == '\0') goto LAB_00edb7bc;
              ppppppppppppuVar24 = extraout_r3_05;
              uVar25 = extraout_r12_03;
              if (cVar6 != '\x02') goto LAB_00eda81c;
            }
            ppppppppppppuVar41 = *(uint *************)(DAT_018d98c4 + 0x20);
            if (ppppppppppppuVar41 != (uint ************)0x0) {
              ppppppppppppuVar24 = (uint ************)(DAT_018d98c4 + 0x1c);
              pppppppppppuVar52 = *ppppppppppppuVar24;
              uVar25 = 0;
            }
            local_14c = &DAT_0186c390;
            if (ppppppppppppuVar41 != (uint ************)0x0) {
              ppppppppppppuVar56 = *(uint *************)(DAT_018d98c4 + 0x24);
              param_2 = *(uint *************)(DAT_018d98c4 + 0x28);
              local_84 = ppppppppppppuVar24[3];
              local_90 = *ppppppppppppuVar24;
              local_8c = (uint ************)ppppppppppppuVar24[1];
              local_88 = (uint ************)ppppppppppppuVar24[2];
              local_74 = 0x49;
              local_78 = (uint ************)0x34bbf7;
              local_80 = uVar25;
            }
            if (ppppppppppppuVar41 < &SUB_00000002) {
LAB_00eda8f0:
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,local_14c);
            }
            local_60 = 1;
            local_70 = pppppppppppuVar52;
            local_6c = ppppppppppppuVar41;
            local_68 = (uint ***********)ppppppppppppuVar56;
            local_64 = param_2;
            if (ppppppppppppuVar41 < (uint ************)0x3) goto LAB_00eda8f0;
            local_9c = &local_44;
            local_a0 = &local_58;
            local_ac = &local_70;
            local_b4 = (uint ************)&local_78;
            local_b8 = (uint ***********)&local_90;
            local_48 = 2;
            local_c4 = (uint ************)0x3;
            local_30 = (uint ***********)&local_c8;
            local_98 = &DAT_018abaa8;
            local_a4 = (uint ************)&DAT_0186c2f0;
            local_b0 = (uint ************)&DAT_018abb78;
            local_3c = (uint ************)0x0;
            local_40 = (uint ***********)&DAT_00000001;
            DataMemoryBarrier(0xb);
            pcVar42 = s_SetGloba_00414c05;
            puVar45 = &DAT_018ae394;
            if (DAT_018dd984 == 2) {
              pcVar42 = (char *)DAT_018daa74;
              puVar45 = DAT_018daa78;
              if (DAT_018daa70 != 0) {
                pcVar42 = (char *)((int)DAT_018daa74 +
                                  (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8);
              }
            }
            local_c8 = (uint ***********)&local_b8;
            local_c0 = ppppppppppppuVar24;
            local_a8 = (uint ************)&local_e4;
            local_58 = pppppppppppuVar52;
            local_54 = ppppppppppppuVar41;
            local_50 = (uint ***********)ppppppppppppuVar56;
            local_4c = param_2;
            local_44 = ppppppppppppuVar7;
            local_2c = DAT_018d98c4;
            iVar54 = (**(code **)(puVar45 + 0x28))(pcVar42,&local_40);
            if (iVar54 != 0) {
              (**(code **)(puVar45 + 0x2c))(pcVar42,&local_40);
            }
          }
        }
LAB_00edb7bc:
        pppppppppppuVar52 = (uint ***********)0x0;
      }
      else {
        local_b8 = (uint ***********)0x3;
        local_40 = local_d8;
        local_3c = local_d4;
        local_38 = pppppppppppuStack_d0;
        local_34 = ppppppppppppuVar24;
        pppppppppppuVar52 = (uint ***********)FUN_00abf778(&local_40,&local_b8);
      }
LAB_00edb7cc:
      if (ppppppppppppuVar7 != (uint ************)0x0) {
        thunk_FUN_016d3fb4(ppppppppppppuVar37);
      }
      if (local_e4 != (uint ************)0x0) {
        thunk_FUN_016d3fb4(local_e0);
      }
      if (pppppppppppuVar52 == (uint ***********)0x0) {
        *param_1 = 0x80000003;
      }
      else {
        local_38 = (uint ***********)0x0;
        local_b4 = (uint ************)&DAT_0187c0cc;
        local_b8 = (uint ***********)&local_40;
        local_40 = (uint ***********)0x0;
        local_ac = (uint ************)0x0;
        local_3c = (uint ************)&DAT_00000001;
        local_b0 = (uint ************)&DAT_60000020;
        local_70 = pppppppppppuVar52;
        iVar54 = FUN_00604528(&local_70,&local_b8);
        if (iVar54 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_90,
                       &DAT_0187c104,&DAT_018af130);
        }
        local_58 = local_40;
        local_54 = local_3c;
        local_50 = local_38;
        (*(code *)**pppppppppppuVar52)(pppppppppppuVar52);
        *param_1 = local_58;
        param_1[1] = local_54;
        param_1[2] = local_50;
      }
      if (uVar29 == 0) goto LAB_00edb8b4;
      ppppppppppppuVar37 = ppppppppppppuVar19;
    }
    else {
      *param_1 = 0x80000000;
      if (uVar29 != 0) {
        thunk_FUN_016d3fb4(ppppppppppppuVar19);
      }
      if (ppppppppppppuVar24 != (uint ************)0x0) {
        thunk_FUN_016d3fb4(pppppppppppuVar52);
      }
      if (ppppppppppppuVar7 == (uint ************)0x0) goto LAB_00edb8b4;
    }
    break;
  case 0xb:
    pppppppppppuVar53 = (uint ***********)param_3[1];
    ppppppppppppuVar56 = (uint ************)param_3[2];
    pppppppppppuVar52 = (uint ***********)param_3[3];
    ppppppppppppuVar37 = (uint ************)param_3[4];
    local_128 = pppppppppppuVar53;
    local_124 = ppppppppppppuVar56;
    local_120 = pppppppppppuVar52;
    local_11c = ppppppppppppuVar37;
    if (*param_2 != (uint ***********)0x2) {
      *param_1 = 0x80000000;
      if (ppppppppppppuVar56 != (uint ************)0x0) {
        thunk_FUN_016d3fb4(pppppppppppuVar53);
      }
      if (local_11c == (uint ************)0x0) {
        return;
      }
      thunk_FUN_016d3fb4(local_120);
      return;
    }
    local_b0 = &local_58;
    local_ac = (uint ************)&DAT_0157d360;
    local_b4 = (uint ************)&DAT_0157d360;
    local_b8 = (uint ***********)&local_70;
    local_70 = pppppppppppuVar53;
    local_6c = ppppppppppppuVar56;
    local_58 = pppppppppppuVar52;
    local_54 = ppppppppppppuVar37;
    FUN_00600d2c(&local_40,&DAT_0057d5a0,&local_b8);
    *param_1 = local_40;
    param_1[1] = local_3c;
    param_1[2] = local_38;
    if (ppppppppppppuVar56 != (uint ************)0x0) {
      thunk_FUN_016d3fb4(pppppppppppuVar53);
    }
joined_r0x00ed8644:
    if (ppppppppppppuVar37 == (uint ************)0x0) {
      return;
    }
    thunk_FUN_016d3fb4(pppppppppppuVar52);
    return;
  case 0xd:
    uVar29 = param_3[2];
    ppppppppppuVar38 = (uint **********)param_3[3];
    local_110 = (uint ************)param_3[4];
    local_10c = (uint ************)param_3[5];
    uStack_108 = param_3[6];
    uStack_104 = param_3[7];
    local_118 = uVar29;
    local_114 = ppppppppppuVar38;
    if (*param_2 == (uint ***********)0x2) {
      uVar25 = 0x80000002;
      if (param_2[0x11] != (uint ***********)0x0) {
        puVar8 = (undefined4 *)FUN_011e4df8();
        local_a0 = (uint ************)*puVar8;
        local_9c = (uint *************)puVar8[1];
        local_a8 = (uint ************)puVar8[2];
        local_a4 = (uint ************)puVar8[3];
        local_b4 = (uint ************)puVar8[5];
        local_b0 = (uint ************)puVar8[6];
        local_b8 = (uint ***********)puVar8[4];
        local_ac = (uint ************)puVar8[7];
        FUN_01352290(&local_b8,uVar29,ppppppppppuVar38);
        pppppppppppuVar53 = param_2[0xe];
        iVar54 = 0;
        uVar51 = (int)local_a4 << 0x18 | ((uint)local_a4 >> 8 & 0xff) << 0x10 |
                 ((uint)local_a4 >> 0x10 & 0xff) << 8 | (uint)local_a4 >> 0x18;
        lVar4 = (ulonglong)~(uint)local_a0 * (ulonglong)uVar51;
        uVar58 = (uint)lVar4;
        uVar39 = (int)local_9c << 0x18 | ((uint)local_9c >> 8 & 0xff) << 0x10 |
                 ((uint)local_9c >> 0x10 & 0xff) << 8 | (uint)local_9c >> 0x18;
        uVar51 = ((int)local_a8 << 0x18 | ((uint)local_a8 >> 8 & 0xff) << 0x10 |
                  ((uint)local_a8 >> 0x10 & 0xff) << 8 | (uint)local_a8 >> 0x18) * ~(uint)local_a0 +
                 uVar51 * ~(uint)local_9c + (int)((ulonglong)lVar4 >> 0x20);
        lVar4 = ZEXT48(local_a8) * (ulonglong)uVar39;
        uVar51 = (uint)lVar4 ^
                 (uVar51 * 0x1000000 | (uVar51 >> 8 & 0xff) << 0x10 | (uVar51 >> 0x10 & 0xff) << 8 |
                 uVar51 >> 0x18);
        pppppppppppuVar52 = param_2[0xf];
        uVar58 = ((int)local_a0 << 0x18 | ((uint)local_a0 >> 8 & 0xff) << 0x10 |
                  ((uint)local_a0 >> 0x10 & 0xff) << 8 | (uint)local_a0 >> 0x18) * (int)local_a8 +
                 uVar39 * (int)local_a4 + (int)((ulonglong)lVar4 >> 0x20) ^
                 (uVar58 << 0x18 | (uVar58 >> 8 & 0xff) << 0x10 | (uVar58 >> 0x10 & 0xff) << 8 |
                 uVar58 >> 0x18);
        uVar39 = uVar58;
        if (((uint)local_a8 & 0x20) != 0) {
          uVar39 = uVar51;
          uVar51 = uVar58;
        }
        uVar51 = uVar51 << ((uint)local_a8 & 0x1f) | (uVar39 >> 1) >> (~(uint)local_a8 & 0x1f);
        local_148 = (uint ***********)((uVar51 >> 0x19) * 0x1010101);
        do {
          uVar51 = (uint)pppppppppppuVar52 & uVar51;
          ppppppppppppuVar56 = *(uint *************)((int)pppppppppppuVar53 + uVar51);
          for (uVar39 = ~((uint)ppppppppppppuVar56 ^ (uint)local_148) & 0x80808080 &
                        ((uint)ppppppppppppuVar56 ^ (uint)local_148) + 0xfefefeff; uVar39 != 0;
              uVar39 = uVar39 - 1 & uVar39) {
            uVar58 = uVar51 + ((uint)LZCOUNT(uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 |
                                             (uVar39 >> 0x10 & 0xff) << 8 | uVar39 >> 0x18) >> 3) &
                     (uint)pppppppppppuVar52;
            if (ppppppppppuVar38 == pppppppppppuVar53[uVar58 * -4 + -2]) {
              iVar9 = thunk_FUN_016dd50a(uVar29,pppppppppppuVar53[uVar58 * -4 + -3],ppppppppppuVar38
                                        );
              ppppppppppppuVar7 = local_10c;
              ppppppppppppuVar37 = local_110;
              if (iVar9 == 0) {
                uVar25 = 0;
                if ((int)local_10c < 0) {
LAB_00ed880c:
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(uVar25,ppppppppppppuVar7);
                }
                if (local_10c == (uint ************)0x0) {
                  ppppppppppppuVar19 = (uint ************)&DAT_00000001;
                }
                else {
                  uVar25 = 1;
                  ppppppppppppuVar19 = (uint ************)FUN_0063f47c(local_10c,1);
                  if (ppppppppppppuVar19 == (uint ************)0x0) goto LAB_00ed880c;
                }
                local_b8 = (uint ***********)ppppppppppppuVar7;
                local_b4 = ppppppppppppuVar19;
                FUN_016dd1aa(ppppppppppppuVar19,ppppppppppppuVar37,ppppppppppppuVar7);
                local_b0 = ppppppppppppuVar7;
                FUN_00e48ea4(&local_c8,pppppppppppuVar53[uVar58 * -4 + -1],&local_b8);
                if (local_c8 != (uint ***********)&DAT_80000000) {
                  local_90 = local_c8;
                  local_8c = local_c4;
                  local_88 = local_c0;
                  if (DAT_018d9130 < 4) {
                    pppppppppppuVar52 = (uint ***********)&DAT_018da53c;
                    if (((DAT_018da580 - 1 < 2) ||
                        ((DAT_018da580 != 0 && (cVar6 = FUN_0169ac90(&DAT_018da578), cVar6 != '\0'))
                        )) && (iVar54 = FUN_016949d8(DAT_018da578), iVar54 != 0)) {
                      local_3c = *(uint *************)(DAT_018da578 + 0x20);
                      local_68 = (uint ***********)extraout_r2_03;
                      if (local_3c != (uint ************)0x0) {
                        local_68 = (uint ***********)(DAT_018da578 + 0x1c);
                        local_148 = (uint ***********)*local_68;
                        local_54 = *(uint *************)(DAT_018da578 + 0x20);
                        local_50 = *(uint ************)(DAT_018da578 + 0x24);
                        local_4c = *(uint *************)(DAT_018da578 + 0x28);
                        local_48 = 0;
                        local_58 = (uint ***********)*local_68;
                        pppppppppppuVar52 = *(uint ************)(DAT_018da578 + 0x24);
                        ppppppppppppuVar56 = *(uint *************)(DAT_018da578 + 0x28);
                        local_d4 = (uint ************)&DAT_00000029;
                        local_d8 = (uint ***********)0x35a9f3;
                      }
                      if (local_3c < &SUB_00000002) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187c03c);
                      }
                      local_a8 = (uint ************)&local_e4;
                      local_ac = &local_40;
                      local_b4 = &local_d8;
                      local_40 = local_148;
                      local_b8 = (uint ***********)&local_58;
                      local_6c = (uint ************)&SUB_00000002;
                      local_e4 = &local_90;
                      local_30 = (uint ***********)&DAT_00000001;
                      local_a4 = (uint ************)&DAT_0187c04c;
                      local_b0 = (uint ************)&DAT_018abb78;
                      local_70 = (uint ***********)&local_b8;
                      local_38 = pppppppppppuVar52;
                      local_34 = ppppppppppppuVar56;
                      FUN_0169bb88(DAT_018da578,&local_70);
                    }
                  }
                  if (local_90 != (uint ***********)0x0) {
                    thunk_FUN_016d3fb4(local_8c);
                  }
                }
                *param_1 = 0x80000003;
                if (ppppppppppuVar38 != (uint **********)0x0) {
                  thunk_FUN_016d3fb4(uVar29);
                }
                if (ppppppppppppuVar7 == (uint ************)0x0) goto LAB_00edb8b4;
                goto LAB_00edb8b0;
              }
            }
          }
          if (((uint)ppppppppppppuVar56 & 0x80808080 & (int)ppppppppppppuVar56 << 1) != 0)
          goto LAB_00edac30;
          iVar54 = iVar54 + 4;
          uVar51 = iVar54 + uVar51;
        } while( true );
      }
    }
    else {
      uVar25 = 0x80000000;
    }
    *param_1 = uVar25;
    goto joined_r0x00edac40;
  }
  goto LAB_00edb8b0;
LAB_00edac30:
  *param_1 = 0x80000002;
joined_r0x00edac40:
  if (ppppppppppuVar38 != (uint **********)0x0) {
    thunk_FUN_016d3fb4(local_118);
  }
  if (local_10c == (uint ************)0x0) goto LAB_00edb8b4;
  ppppppppppppuVar37 = local_110;
  goto LAB_00edb8b0;
LAB_00ed99fc:
  uVar39 = (uint)param_2[0xb] & (uint)ppppppppppppuVar41;
  uVar58 = *(uint *)((int)pppppppppppuVar53 + uVar39);
  uVar51 = uVar58 ^ ((uint)local_b0 >> 0x19) * 0x1010101;
  uVar51 = ~uVar51 & 0x80808080 & uVar51 + 0xfefefeff;
  while (uVar51 != 0) {
    uVar28 = uVar51 >> 8;
    uVar32 = uVar51 >> 0x10;
    uVar33 = uVar51 >> 0x18;
    uVar44 = uVar51 << 0x18;
    uVar51 = uVar51 - 1 & uVar51;
    uVar28 = uVar39 + ((uint)LZCOUNT(uVar44 | (uVar28 & 0xff) << 0x10 | (uVar32 & 0xff) << 8 |
                                     uVar33) >> 3) & (uint)param_2[0xb];
    if (ppppppppppppuVar56 == (uint ************)pppppppppppuVar53[uVar28 * -5 + -5]) {
      local_b4 = ppppppppppppuVar56;
      local_b8 = (uint ***********)&DAT_00000001;
      local_a8 = (uint ************)(pppppppppppuVar53 + uVar28 * -5);
      goto LAB_00ed9aa8;
    }
  }
  if ((uVar58 & 0x80808080 & uVar58 << 1) != 0) goto LAB_00ed9f48;
  iVar54 = iVar54 + 4;
  ppppppppppppuVar41 = (uint ************)(iVar54 + uVar39);
  goto LAB_00ed99fc;
LAB_00ed8d74:
  uVar51 = (uint)param_2[0xb] & uVar51;
  uVar58 = *(uint *)((int)pppppppppppuVar53 + uVar51);
  uVar39 = uVar58 ^ ((uint)local_b0 >> 0x19) * 0x1010101;
  uVar39 = ~uVar39 & 0x80808080 & uVar39 + 0xfefefeff;
  while (uVar39 != 0) {
    uVar28 = uVar39 >> 8;
    uVar32 = uVar39 >> 0x10;
    uVar33 = uVar39 >> 0x18;
    uVar44 = uVar39 << 0x18;
    uVar39 = uVar39 - 1 & uVar39;
    uVar28 = uVar51 + ((uint)LZCOUNT(uVar44 | (uVar28 & 0xff) << 0x10 | (uVar32 & 0xff) << 8 |
                                     uVar33) >> 3) & (uint)param_2[0xb];
    if (ppppppppppppuVar24 == (uint ************)pppppppppppuVar53[uVar28 * -5 + -5]) {
      local_b4 = ppppppppppppuVar24;
      local_b8 = (uint ***********)&DAT_00000001;
      local_a8 = (uint ************)(pppppppppppuVar53 + uVar28 * -5);
      goto LAB_00ed8e18;
    }
  }
  if ((uVar58 & 0x80808080 & uVar58 << 1) != 0) goto LAB_00ed936c;
  iVar54 = iVar54 + 4;
  uVar51 = iVar54 + uVar51;
  goto LAB_00ed8d74;
LAB_00ed936c:
  local_a8 = ppppppppppppuVar24;
  local_b8 = (uint ***********)&SUB_00000002;
LAB_00ed8e18:
  local_a4 = param_2 + 10;
  puVar8 = (undefined4 *)FUN_00edcd64(&local_b8);
  uVar25 = 0;
  if ((int)ppppppppppppuVar19 < 0) {
LAB_00edbdf8:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar25,local_144);
  }
  if (ppppppppppppuVar19 == (uint ************)0x0) {
    local_144 = (uint ************)&DAT_00000001;
  }
  else {
    local_144 = (uint ************)thunk_FUN_016d4a50(ppppppppppppuVar19);
    if (local_144 == (uint ************)0x0) {
      uVar25 = 1;
      local_144 = ppppppppppppuVar19;
      goto LAB_00edbdf8;
    }
  }
  FUN_016dd1aa(local_144,pppppppppppuVar52,ppppppppppppuVar19);
  puVar10 = (undefined4 *)FUN_011e4df8();
  local_a4 = (uint ************)puVar10[3];
  local_a0 = (uint ************)*puVar10;
  local_9c = (uint *************)puVar10[1];
  local_a8 = (uint ************)puVar10[2];
  local_b4 = (uint ************)puVar10[5];
  local_b0 = (uint ************)puVar10[6];
  local_b8 = (uint ***********)puVar10[4];
  local_ac = (uint ************)puVar10[7];
  FUN_01352290(&local_b8,local_144,ppppppppppppuVar19);
  ppppppppppppuVar24 = local_a8;
  uVar51 = (int)local_9c << 0x18 | ((uint)local_9c >> 8 & 0xff) << 0x10 |
           ((uint)local_9c >> 0x10 & 0xff) << 8 | (uint)local_9c >> 0x18;
  lVar4 = ZEXT48(local_a8) * (ulonglong)uVar51;
  uVar39 = (int)local_a4 << 0x18 | ((uint)local_a4 >> 8 & 0xff) << 0x10 |
           ((uint)local_a4 >> 0x10 & 0xff) << 8 | (uint)local_a4 >> 0x18;
  lVar5 = (ulonglong)~(uint)local_a0 * (ulonglong)uVar39;
  uVar58 = (uint)lVar5;
  uVar39 = ((int)local_a8 << 0x18 | ((uint)local_a8 >> 8 & 0xff) << 0x10 |
            ((uint)local_a8 >> 0x10 & 0xff) << 8 | (uint)local_a8 >> 0x18) * ~(uint)local_a0 +
           uVar39 * ~(uint)local_9c + (int)((ulonglong)lVar5 >> 0x20);
  uVar58 = ((int)local_a0 << 0x18 | ((uint)local_a0 >> 8 & 0xff) << 0x10 |
            ((uint)local_a0 >> 0x10 & 0xff) << 8 | (uint)local_a0 >> 0x18) * (int)local_a8 +
           uVar51 * (int)local_a4 + (int)((ulonglong)lVar4 >> 0x20) ^
           (uVar58 << 0x18 | (uVar58 >> 8 & 0xff) << 0x10 | (uVar58 >> 0x10 & 0xff) << 8 |
           uVar58 >> 0x18);
  uVar51 = (uint)lVar4 ^
           (uVar39 * 0x1000000 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
           uVar39 >> 0x18);
  uVar39 = uVar58;
  if (((uint)local_a8 & 0x20) != 0) {
    uVar39 = uVar51;
    uVar51 = uVar58;
  }
  if (puVar8[2] == 0) {
    FUN_00edcf4c(puVar8);
  }
  puVar11 = (undefined1 *)
            (uVar51 << ((uint)ppppppppppppuVar24 & 0x1f) |
            (uVar39 >> 1) >> (~(uint)ppppppppppppuVar24 & 0x1f));
  puVar12 = (uint *)*puVar8;
  uVar51 = puVar8[1];
  bVar2 = false;
  unaff_r4 = (uint ***********)0x0;
  puVar26 = puVar11;
  while( true ) {
    uVar58 = uVar51 & (uint)puVar26;
    unaff_r9 = *(uint *************)((int)puVar12 + uVar58);
    uVar39 = (uint)unaff_r9 ^ (int)((uint)puVar11 >> 0x19) * 0x1010101;
    for (unaff_r5 = (uint ************)(~uVar39 & 0x80808080 & uVar39 + 0xfefefeff);
        unaff_r5 != (uint ************)0x0;
        unaff_r5 = (uint ************)((int)unaff_r5 - 1U & (uint)unaff_r5)) {
      uVar39 = uVar58 + ((uint)LZCOUNT((int)unaff_r5 << 0x18 | ((uint)unaff_r5 >> 8 & 0xff) << 0x10
                                       | ((uint)unaff_r5 >> 0x10 & 0xff) << 8 |
                                       (uint)unaff_r5 >> 0x18) >> 3) & uVar51;
      if ((ppppppppppppuVar19 == (uint ************)puVar12[uVar39 * -3 + -1]) &&
         (iVar54 = thunk_FUN_016dd50a(local_144,puVar12[uVar39 * -3 + -2],ppppppppppppuVar19),
         iVar54 == 0)) {
        if (ppppppppppppuVar19 != (uint ************)0x0) {
          thunk_FUN_016d3fb4(local_144);
        }
        if (3 < DAT_018d9130) goto joined_r0x00ed9360;
        if (1 < DAT_018da58c - 1) {
          if (DAT_018da58c == 0) goto joined_r0x00ed9360;
          cVar6 = FUN_0169ac90(&DAT_018da584);
          if (cVar6 == '\0') goto joined_r0x00ed9360;
        }
        iVar54 = FUN_016949d8(DAT_018da584);
        if (iVar54 == 0) goto joined_r0x00ed9360;
        ppppppppppppuVar27 = *(uint *************)(DAT_018da584 + 0x20);
        ppppppppppppuVar24 = ppppppppppppuVar41;
        pppppppppppuVar53 = extraout_r3_00;
        if (ppppppppppppuVar27 != (uint ************)0x0) {
          ppppppppppppuVar24 = (uint ************)(DAT_018da584 + 0x1c);
          pppppppppppuVar53 = *ppppppppppppuVar24;
          local_60 = 0;
          local_70 = *ppppppppppppuVar24;
          local_6c = *(uint *************)(DAT_018da584 + 0x20);
          local_68 = *(uint ************)(DAT_018da584 + 0x24);
          local_64 = *(uint *************)(DAT_018da584 + 0x28);
          unaff_r4 = *(uint ************)(DAT_018da584 + 0x24);
          unaff_r5 = *(uint *************)(DAT_018da584 + 0x28);
          local_d4 = (uint ************)&DAT_00000069;
          local_d8 = (uint ***********)0x35aa3d;
        }
        if (ppppppppppppuVar27 < &SUB_00000002) goto LAB_00edbc4c;
        local_48 = 1;
        local_e4 = &local_c8;
        local_c8 = pppppppppppuVar52;
        local_c4 = ppppppppppppuVar19;
        local_58 = pppppppppppuVar53;
        local_54 = ppppppppppppuVar27;
        local_50 = unaff_r4;
        local_4c = unaff_r5;
        if (ppppppppppppuVar27 < (uint ************)0x3) goto LAB_00edbc4c;
        local_9c = &local_e8;
        local_a0 = &local_40;
        local_a8 = (uint ************)&local_e4;
        local_ac = &local_58;
        local_b4 = &local_d8;
        local_b8 = (uint ***********)&local_70;
        local_30 = (uint ***********)&SUB_00000002;
        local_8c = (uint ************)0x3;
        local_98 = &DAT_018a4904;
        local_a4 = (uint ************)&DAT_0187c06c;
        local_b0 = (uint ************)&DAT_018abb78;
        local_90 = (uint ***********)&local_b8;
        local_88 = ppppppppppppuVar24;
        local_40 = pppppppppppuVar53;
        local_3c = ppppppppppppuVar27;
        local_38 = unaff_r4;
        local_34 = unaff_r5;
        FUN_0169bb88(DAT_018da584,&local_90);
        goto joined_r0x00ed9360;
      }
    }
    uVar39 = (uint)unaff_r9 & 0x80808080;
    if (!bVar2) {
      local_1a0 = (uint ***********)
                  (uVar58 + ((uint)LZCOUNT(((uint)unaff_r9 & 0x80) << 0x18 |
                                           (uVar39 >> 8 & 0xff) << 0x10 |
                                           (uVar39 >> 0x10 & 0xff) << 8 | uVar39 >> 0x18) >> 3) &
                  uVar51);
    }
    bVar2 = bVar2 || uVar39 != 0;
    if ((uVar39 & (int)unaff_r9 << 1) != 0) break;
    unaff_r4 = unaff_r4 + 1;
    puVar26 = (undefined1 *)((int)unaff_r4 + uVar58);
  }
  uVar39 = (uint)*(char *)((int)puVar12 + (int)local_1a0);
  unaff_r4 = local_1a0;
  if (-1 < (int)uVar39) {
    uVar39 = *puVar12 & 0x80808080;
    uVar58 = LZCOUNT((*puVar12 & 0x80) << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 |
                     (uVar39 >> 0x10 & 0xff) << 8 | uVar39 >> 0x18);
    uVar39 = (uint)*(byte *)((int)puVar12 + (uVar58 >> 3));
    unaff_r4 = (uint ***********)(uVar58 >> 3);
  }
  iVar54 = puVar8[2];
  iVar9 = puVar8[3];
  bVar50 = (byte)((uint)puVar11 >> 0x19);
  *(byte *)((int)puVar12 + (int)unaff_r4) = bVar50;
  puVar8[2] = iVar54 - (uVar39 & 1);
  puVar8[3] = iVar9 + 1;
  *(byte *)((int)puVar12 + (uVar51 & (uint)(unaff_r4 + -1)) + 4) = bVar50;
  puVar12[(int)unaff_r4 * -3 + -1] = (uint)ppppppppppppuVar19;
  puVar12[(int)unaff_r4 * -3 + -2] = (uint)local_144;
  puVar12[(int)unaff_r4 * -3 + -3] = (uint)ppppppppppppuVar19;
  unaff_r5 = (uint ************)((uint)puVar11 >> 0x19);
joined_r0x00ed9360:
  ppppppppppppuVar24 = ppppppppppppuVar41;
  if (ppppppppppppuVar41 == ppppppppppppuVar7 + uVar29) goto LAB_00eda58c;
  goto LAB_00ed8ab0;
LAB_00ed89e0:
  if (((uint)ppppppppppppuVar56 & 0x80808080 & (int)ppppppppppppuVar56 << 1) != 0)
  goto LAB_00ed9660;
  iVar54 = iVar54 + 4;
  uVar51 = iVar54 + uVar51;
  goto LAB_00ed8984;
LAB_00ed9f48:
  local_a8 = ppppppppppppuVar56;
  local_b8 = (uint ***********)&SUB_00000002;
LAB_00ed9aa8:
  local_a4 = param_2 + 10;
  piVar13 = (int *)FUN_00edcd64(&local_b8);
  puVar8 = (undefined4 *)FUN_011e4df8();
  local_a4 = (uint ************)puVar8[3];
  local_a0 = (uint ************)*puVar8;
  local_9c = (uint *************)puVar8[1];
  local_a8 = (uint ************)puVar8[2];
  local_b4 = (uint ************)puVar8[5];
  local_b8 = (uint ***********)puVar8[4];
  FUN_01352290(&local_b8,pppppppppppuVar52,ppppppppppppuVar24);
  iVar9 = 0;
  uVar39 = (int)local_9c << 0x18 | ((uint)local_9c >> 8 & 0xff) << 0x10 |
           ((uint)local_9c >> 0x10 & 0xff) << 8 | (uint)local_9c >> 0x18;
  lVar4 = ZEXT48(local_a8) * (ulonglong)uVar39;
  uVar51 = (int)local_a4 << 0x18 | ((uint)local_a4 >> 8 & 0xff) << 0x10 |
           ((uint)local_a4 >> 0x10 & 0xff) << 8 | (uint)local_a4 >> 0x18;
  lVar5 = (ulonglong)~(uint)local_a0 * (ulonglong)uVar51;
  uVar58 = (uint)lVar5;
  pppppppppppuVar53 = (uint ***********)((uint)local_a8 & 0x1f);
  uVar51 = ((int)local_a8 << 0x18 | ((uint)local_a8 >> 8 & 0xff) << 0x10 |
            ((uint)local_a8 >> 0x10 & 0xff) << 8 | (uint)local_a8 >> 0x18) * ~(uint)local_a0 +
           uVar51 * ~(uint)local_9c + (int)((ulonglong)lVar5 >> 0x20);
  uVar51 = (uint)lVar4 ^
           (uVar51 * 0x1000000 | (uVar51 >> 8 & 0xff) << 0x10 | (uVar51 >> 0x10 & 0xff) << 8 |
           uVar51 >> 0x18);
  iVar54 = *piVar13;
  uVar28 = piVar13[1];
  uVar58 = ((int)local_a0 << 0x18 | ((uint)local_a0 >> 8 & 0xff) << 0x10 |
            ((uint)local_a0 >> 0x10 & 0xff) << 8 | (uint)local_a0 >> 0x18) * (int)local_a8 +
           uVar39 * (int)local_a4 + (int)((ulonglong)lVar4 >> 0x20) ^
           (uVar58 << 0x18 | (uVar58 >> 8 & 0xff) << 0x10 | (uVar58 >> 0x10 & 0xff) << 8 |
           uVar58 >> 0x18);
  uVar39 = uVar58;
  if (((uint)local_a8 & 0x20) != 0) {
    uVar39 = uVar51;
    uVar51 = uVar58;
  }
  uVar39 = uVar51 << (int)pppppppppppuVar53 | (uVar39 >> 1) >> (~(uint)local_a8 & 0x1f);
  uVar51 = uVar39 >> 0x19;
  while( true ) {
    uVar39 = uVar28 & uVar39;
    uVar32 = *(uint *)(iVar54 + uVar39);
    uVar58 = uVar32 ^ uVar51 * 0x1010101;
    for (uVar58 = ~uVar58 & 0x80808080 & uVar58 + 0xfefefeff; uVar58 != 0;
        uVar58 = uVar58 - 1 & uVar58) {
      ppppppppppppuVar56 =
           (uint ************)
           (uVar39 + ((uint)LZCOUNT(uVar58 << 0x18 | (uVar58 >> 8 & 0xff) << 0x10 |
                                    (uVar58 >> 0x10 & 0xff) << 8 | uVar58 >> 0x18) >> 3) & uVar28);
      pppppppppppuVar53 = (uint ***********)(iVar54 + (int)ppppppppppppuVar56 * -0xc);
      if ((ppppppppppppuVar24 == (uint ************)pppppppppppuVar53[-1]) &&
         (iVar14 = thunk_FUN_016dd50a(pppppppppppuVar52,pppppppppppuVar53[-2],ppppppppppppuVar24),
         iVar14 == 0)) {
        iVar9 = ((int)ppppppppppppuVar56 * 0xc >> 2) * -0x55555555;
        puVar12 = (uint *)(iVar54 + (iVar9 - 4U & uVar28));
        uVar51 = *puVar12;
        uVar39 = *(uint *)(iVar54 + iVar9) & 0x80808080 & *(uint *)(iVar54 + iVar9) << 1;
        uVar49 = 0x80;
        if (((uint)LZCOUNT(uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 |
                           (uVar39 >> 0x10 & 0xff) << 8 | uVar39 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar51 & 0x80808080 & uVar51 << 1) >> 3) < 4) {
          piVar13[2] = piVar13[2] + 1;
          uVar49 = 0xff;
        }
        *(undefined1 *)(iVar54 + iVar9) = uVar49;
        iVar54 = piVar13[3];
        *(undefined1 *)(puVar12 + 1) = uVar49;
        ppppppppppuVar38 = pppppppppppuVar53[-3];
        piVar13[3] = iVar54 + -1;
        if (ppppppppppuVar38 == (uint **********)&DAT_80000000) goto LAB_00ed9d0c;
        if (ppppppppppuVar38 != (uint **********)0x0) {
          thunk_FUN_016d3fb4(pppppppppppuVar53[-2]);
        }
        goto LAB_00ed9728;
      }
    }
    if ((uVar32 & 0x80808080 & uVar32 << 1) != 0) break;
    iVar9 = iVar9 + 4;
    uVar39 = iVar9 + uVar39;
  }
LAB_00ed9d0c:
  ppppppppppppuVar56 = &local_b8;
  if (3 < DAT_018d9130) goto LAB_00ed9728;
  uVar51 = (uint)DAT_018da5a4;
  if (1 < uVar51 - 1) {
    if (uVar51 == 0) goto LAB_00ed9728;
    uVar51 = FUN_0169ac90(&DAT_018da59c);
    uVar51 = uVar51 & 0xff;
    if (uVar51 == 0) goto LAB_00ed9728;
  }
  if (uVar51 != 2) {
    DataMemoryBarrier(0xb);
    puVar45 = DAT_018daa78;
    if (DAT_018dd984 != 2) {
      puVar45 = &DAT_018ae394;
    }
    pppppppuVar15 = (uint *******)s_SetGloba_00414c05;
    if ((DAT_018dd984 == 2) && (pppppppuVar15 = DAT_018daa74, DAT_018daa70 != 0)) {
      pppppppuVar15 =
           (uint *******)((int)DAT_018daa74 + (*(int *)(puVar45 + 8) - 1U & 0xfffffff8) + 8);
    }
    iVar54 = (**(code **)(puVar45 + 0x14))(pppppppuVar15);
    if (iVar54 == 0) goto LAB_00ed9728;
  }
  ppppppppppppuVar16 = (uint ************)(DAT_018da59c + 0x1c);
  pppppppppppuVar34 = *ppppppppppppuVar16;
  ppppppppppppuVar40 = *(uint *************)(DAT_018da59c + 0x20);
  ppppppppppppuVar41 = ppppppppppppuVar27;
  if (ppppppppppppuVar40 != (uint ************)0x0) {
    local_8c = *(uint *************)(DAT_018da59c + 0x20);
    pppppppppppuVar53 = *(uint ************)(DAT_018da59c + 0x24);
    local_90 = *ppppppppppppuVar16;
    local_80 = 0;
    local_88 = *(uint *************)(DAT_018da59c + 0x24);
    local_84 = *(uint ************)(DAT_018da59c + 0x28);
    ppppppppppppuVar41 = *(uint *************)(DAT_018da59c + 0x28);
    local_e0 = (uint ***********)0x63;
    local_e4 = (uint ************)0x35aa71;
  }
  if (&DAT_00000001 < ppppppppppppuVar40) {
    local_60 = 1;
    local_78 = &local_d8;
    local_d8 = pppppppppppuVar52;
    local_d4 = ppppppppppppuVar24;
    local_70 = pppppppppppuVar34;
    local_6c = ppppppppppppuVar40;
    local_68 = pppppppppppuVar53;
    local_64 = ppppppppppppuVar41;
    if (&SUB_00000002 < ppppppppppppuVar40) {
      local_9c = &local_e8;
      local_a0 = &local_58;
      local_a8 = (uint ************)&local_78;
      local_ac = &local_70;
      local_b4 = (uint ************)&local_e4;
      local_b8 = (uint ***********)&local_90;
      local_48 = 2;
      local_c4 = (uint ************)0x3;
      local_98 = &DAT_018a4904;
      local_a4 = (uint ************)&DAT_0187c06c;
      local_b0 = (uint ************)&DAT_018abb78;
      local_3c = (uint ************)0x0;
      local_40 = (uint ***********)&DAT_00000001;
      local_30 = (uint ***********)&local_c8;
      DataMemoryBarrier(0xb);
      puVar45 = &DAT_018ae394;
      pppppppuVar15 = (uint *******)s_SetGloba_00414c05;
      if (DAT_018dd984 == 2) {
        pppppppuVar15 = DAT_018daa74;
        puVar45 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pppppppuVar15 =
               (uint *******)
               ((int)DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8);
        }
      }
      local_c8 = (uint ***********)ppppppppppppuVar56;
      local_c0 = ppppppppppppuVar16;
      local_58 = pppppppppppuVar34;
      local_54 = ppppppppppppuVar40;
      local_50 = pppppppppppuVar53;
      local_4c = ppppppppppppuVar41;
      local_2c = DAT_018da59c;
      iVar54 = (**(code **)(puVar45 + 0x28))(pppppppuVar15,&local_40);
      if (iVar54 != 0) {
        (**(code **)(puVar45 + 0x2c))(pppppppuVar15,&local_40);
      }
LAB_00ed9728:
      ppppppppppppuVar41 = ppppppppppppuVar27;
      if (ppppppppppppuVar27 == ppppppppppppuVar19 + uVar29) goto LAB_00eda68c;
      goto LAB_00ed9734;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187c08c);
LAB_00ed9660:
  if ((DAT_018d9130 < 4) &&
     ((DAT_018da574 - 1 < 2 ||
      ((DAT_018da574 != 0 && (cVar6 = FUN_0169ac90(&DAT_018da56c), cVar6 != '\0')))))) {
    pppppppppppuVar53 = (uint ***********)0xed9694;
    uVar59 = FUN_016949d8(DAT_018da56c);
    ppppppppppppuVar7 = (uint ************)((ulonglong)uVar59 >> 0x20);
    if ((int)uVar59 != 0) {
      local_54 = *(uint *************)(DAT_018da56c + 0x20);
      if (local_54 != (uint ************)0x0) {
        pppppppppppuVar52 = *(uint ************)(DAT_018da56c + 0x24);
        ppppppppppppuVar56 = *(uint *************)(DAT_018da56c + 0x28);
        ppppppppppppuVar7 = (uint ************)(DAT_018da56c + 0x1c);
        pppppppppppuVar53 = *ppppppppppppuVar7;
        local_88 = *(uint *************)(DAT_018da56c + 0x24);
        local_90 = *ppppppppppppuVar7;
        local_8c = *(uint *************)(DAT_018da56c + 0x20);
        local_84 = *(uint ************)(DAT_018da56c + 0x28);
        local_80 = 0;
        local_d4 = (uint ************)&DAT_0000003f;
        local_d8 = (uint ***********)0x35a9d4;
      }
      if (local_54 < &SUB_00000002) {
LAB_00ed96f0:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187c01c);
      }
      local_60 = 1;
      local_70 = pppppppppppuVar53;
      local_6c = local_54;
      local_68 = pppppppppppuVar52;
      local_64 = ppppppppppppuVar56;
      if (local_54 < (uint ************)0x3) goto LAB_00ed96f0;
      local_48 = 2;
      local_40 = param_2[6];
      local_30 = param_2[9];
      local_34 = (uint ************)((int)local_40 + (int)param_2[7] + 1);
      local_38 = local_40 + 1;
      local_e4 = &local_40;
      local_9c = &local_e4;
      local_a0 = &local_58;
      local_ac = &local_70;
      local_b4 = &local_d8;
      local_b8 = (uint ***********)&local_90;
      local_c4 = (uint ************)0x3;
      local_c8 = (uint ***********)&local_b8;
      local_3c = (uint ************)(~(uint)*local_40 & 0x80808080);
      local_98 = &DAT_0187c02c;
      local_a4 = (uint ************)&DAT_018a4904;
      local_b0 = (uint ************)&DAT_018abb78;
      local_c0 = ppppppppppppuVar7;
      local_a8 = &local_138;
      local_58 = pppppppppppuVar53;
      local_50 = pppppppppppuVar52;
      local_4c = ppppppppppppuVar56;
      FUN_0169bb88(DAT_018da56c,&local_c8);
    }
  }
LAB_00edb40c:
  *param_1 = 0x80000003;
  if (ppppppppppuVar38 == (uint **********)0x0) goto LAB_00edb8b4;
LAB_00edb8b0:
  thunk_FUN_016d3fb4(ppppppppppppuVar37);
LAB_00edb8b4:
  if ((uVar23 < 0xe) && ((1 << (uVar23 & 0xff) & 0x29aeU) != 0)) {
    return;
  }
  FUN_00edc308(param_3);
  return;
}

