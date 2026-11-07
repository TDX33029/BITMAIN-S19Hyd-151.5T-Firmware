// FUN_014f21ec @ 014f21ec size=1752 calls_out=1 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014f21ec(undefined1 (*param_1) [16],undefined1 (*param_2) [16],uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [24];
  undefined1 auVar39 [24];
  undefined1 auVar40 [24];
  undefined1 *puVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  undefined1 (*pauVar49) [16];
  undefined1 (*pauVar50) [16];
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  int iVar60;
  uint uVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  ulonglong uVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  ulonglong uVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined8 uVar84;
  ulonglong uVar85;
  ulonglong uVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined8 uVar89;
  undefined8 uVar90;
  ulonglong uVar91;
  ulonglong uVar92;
  ulonglong uVar93;
  uint local_40;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  pauVar49 = param_1 + 1;
  if ((DAT_018dffd8 & 0x20) == 0) {
    if ((DAT_018dffd8 & 1) != 0) {
      auVar64._8_8_ = *(undefined8 *)*param_1;
      auVar64._0_8_ = *(undefined8 *)(*param_1 + 8);
      uVar91 = *(ulonglong *)*pauVar49;
      uVar92 = *(ulonglong *)(param_1[1] + 8);
      auVar62 = vrev(auVar64,1);
      uVar93 = uVar91 ^ uVar92;
      do {
        auVar69._8_8_ = *(undefined8 *)*param_2;
        auVar69._0_8_ = *(undefined8 *)(*param_2 + 8);
        param_2 = param_2 + 1;
        auVar70 = vrev(auVar69,1);
        auVar80._8_8_ = uVar91;
        auVar80._0_8_ = uVar91;
        uVar68 = SUB168(auVar70 ^ auVar62,0);
        auVar72 = PolynomialMultiply(auVar80._1_8_,uVar68,1);
        auVar87._8_8_ = uVar68;
        auVar87._0_8_ = uVar68;
        auVar63 = PolynomialMultiply(uVar91,auVar87._1_8_,1);
        auVar88._8_8_ = uVar91;
        auVar88._0_8_ = uVar91;
        auVar76 = PolynomialMultiply(auVar88._2_8_,uVar68,1);
        auVar1._8_8_ = uVar68;
        auVar1._0_8_ = uVar68;
        auVar87 = PolynomialMultiply(uVar91,auVar1._2_8_,1);
        auVar2._8_8_ = uVar91;
        auVar2._0_8_ = uVar91;
        auVar80 = PolynomialMultiply(auVar2._3_8_,uVar68,1);
        auVar3._8_8_ = uVar68;
        auVar3._0_8_ = uVar68;
        auVar64 = PolynomialMultiply(uVar91,auVar3._3_8_,1);
        uVar71 = SUB168(auVar72 ^ auVar63,8);
        auVar73._8_8_ = uVar71 & 0xffffffffffff;
        auVar4._8_8_ = uVar68;
        auVar4._0_8_ = uVar68;
        uVar85 = SUB168(auVar76 ^ auVar87,8);
        auVar77._8_8_ = uVar85 & 0xffffffff;
        auVar88 = PolynomialMultiply(uVar91,auVar4._4_8_,1);
        auVar73._0_8_ = SUB168(auVar72 ^ auVar63,0) ^ uVar71 ^ auVar73._8_8_;
        auVar77._0_8_ = SUB168(auVar76 ^ auVar87,0) ^ uVar85 ^ auVar77._8_8_;
        uVar71 = SUB168(auVar80 ^ auVar64,8);
        auVar81._8_8_ = uVar71 & 0xffff;
        auVar29._16_16_ = auVar73;
        auVar29._0_16_ = auVar73;
        uVar85 = auVar88._0_8_ ^ auVar88._8_8_;
        auVar38._8_8_ = 0;
        auVar38._0_8_ = uVar85;
        auVar30._16_16_ = auVar77;
        auVar30._0_16_ = auVar77;
        auVar81._0_8_ = SUB168(auVar80 ^ auVar64,0) ^ uVar71 ^ auVar81._8_8_;
        auVar63 = PolynomialMultiply(uVar91,uVar68,1);
        auVar38._16_8_ = uVar85;
        auVar31._16_16_ = auVar81;
        auVar31._0_16_ = auVar81;
        auVar63 = auVar63 ^ auVar29._15_16_ ^ auVar30._14_16_ ^
                  auVar31._13_16_ ^ auVar38._8_16_ >> 0x20;
        uVar71 = SUB168(auVar70 ^ auVar62,8);
        uVar68 = uVar68 ^ uVar71;
        auVar5._8_8_ = uVar93;
        auVar5._0_8_ = uVar93;
        auVar70 = PolynomialMultiply(auVar5._1_8_,uVar68,1);
        auVar6._8_8_ = uVar68;
        auVar6._0_8_ = uVar68;
        auVar62 = PolynomialMultiply(uVar93,auVar6._1_8_,1);
        auVar7._8_8_ = uVar93;
        auVar7._0_8_ = uVar93;
        auVar72 = PolynomialMultiply(auVar7._2_8_,uVar68,1);
        auVar8._8_8_ = uVar68;
        auVar8._0_8_ = uVar68;
        auVar80 = PolynomialMultiply(uVar93,auVar8._2_8_,1);
        auVar9._8_8_ = uVar93;
        auVar9._0_8_ = uVar93;
        auVar76 = PolynomialMultiply(auVar9._3_8_,uVar68,1);
        auVar10._8_8_ = uVar68;
        auVar10._0_8_ = uVar68;
        auVar64 = PolynomialMultiply(uVar93,auVar10._3_8_,1);
        uVar85 = SUB168(auVar70 ^ auVar62,8);
        auVar74._8_8_ = uVar85 & 0xffffffffffff;
        auVar11._8_8_ = uVar68;
        auVar11._0_8_ = uVar68;
        uVar86 = SUB168(auVar72 ^ auVar80,8);
        auVar78._8_8_ = uVar86 & 0xffffffff;
        auVar87 = PolynomialMultiply(uVar93,auVar11._4_8_,1);
        auVar74._0_8_ = SUB168(auVar70 ^ auVar62,0) ^ uVar85 ^ auVar74._8_8_;
        auVar78._0_8_ = SUB168(auVar72 ^ auVar80,0) ^ uVar86 ^ auVar78._8_8_;
        uVar85 = SUB168(auVar76 ^ auVar64,8);
        auVar82._8_8_ = uVar85 & 0xffff;
        auVar32._16_16_ = auVar74;
        auVar32._0_16_ = auVar74;
        uVar86 = auVar87._0_8_ ^ auVar87._8_8_;
        auVar39._8_8_ = 0;
        auVar39._0_8_ = uVar86;
        auVar33._16_16_ = auVar78;
        auVar33._0_16_ = auVar78;
        auVar82._0_8_ = SUB168(auVar76 ^ auVar64,0) ^ uVar85 ^ auVar82._8_8_;
        auVar62 = PolynomialMultiply(uVar93,uVar68,1);
        auVar39._16_8_ = uVar86;
        auVar34._16_16_ = auVar82;
        auVar34._0_16_ = auVar82;
        auVar12._8_8_ = uVar92;
        auVar12._0_8_ = uVar92;
        auVar72 = PolynomialMultiply(auVar12._1_8_,uVar71,1);
        auVar13._8_8_ = uVar71;
        auVar13._0_8_ = uVar71;
        auVar64 = PolynomialMultiply(uVar92,auVar13._1_8_,1);
        auVar14._8_8_ = uVar92;
        auVar14._0_8_ = uVar92;
        auVar76 = PolynomialMultiply(auVar14._2_8_,uVar71,1);
        auVar15._8_8_ = uVar71;
        auVar15._0_8_ = uVar71;
        auVar87 = PolynomialMultiply(uVar92,auVar15._2_8_,1);
        auVar16._8_8_ = uVar92;
        auVar16._0_8_ = uVar92;
        auVar80 = PolynomialMultiply(auVar16._3_8_,uVar71,1);
        auVar17._8_8_ = uVar71;
        auVar17._0_8_ = uVar71;
        auVar70 = PolynomialMultiply(uVar92,auVar17._3_8_,1);
        uVar68 = SUB168(auVar72 ^ auVar64,8);
        auVar75._8_8_ = uVar68 & 0xffffffffffff;
        auVar18._8_8_ = uVar71;
        auVar18._0_8_ = uVar71;
        uVar85 = SUB168(auVar76 ^ auVar87,8);
        auVar79._8_8_ = uVar85 & 0xffffffff;
        auVar88 = PolynomialMultiply(uVar92,auVar18._4_8_,1);
        auVar75._0_8_ = SUB168(auVar72 ^ auVar64,0) ^ uVar68 ^ auVar75._8_8_;
        auVar79._0_8_ = SUB168(auVar76 ^ auVar87,0) ^ uVar85 ^ auVar79._8_8_;
        uVar68 = SUB168(auVar80 ^ auVar70,8);
        auVar83._8_8_ = uVar68 & 0xffff;
        auVar35._16_16_ = auVar75;
        auVar35._0_16_ = auVar75;
        uVar85 = auVar88._0_8_ ^ auVar88._8_8_;
        auVar40._8_8_ = 0;
        auVar40._0_8_ = uVar85;
        auVar36._16_16_ = auVar79;
        auVar36._0_16_ = auVar79;
        auVar83._0_8_ = SUB168(auVar80 ^ auVar70,0) ^ uVar68 ^ auVar83._8_8_;
        auVar64 = PolynomialMultiply(uVar92,uVar71,1);
        auVar40._16_8_ = uVar85;
        auVar37._16_16_ = auVar83;
        auVar37._0_16_ = auVar83;
        auVar64 = auVar64 ^ auVar35._15_16_ ^ auVar36._14_16_ ^
                  auVar37._13_16_ ^ auVar40._8_16_ >> 0x20;
        auVar62 = auVar62 ^ auVar32._15_16_ ^ auVar33._14_16_ ^
                  auVar34._13_16_ ^ auVar39._8_16_ >> 0x20 ^ auVar63 ^ auVar64;
        auVar65._0_8_ = auVar63._0_8_;
        auVar65._8_8_ = auVar63._8_8_ ^ auVar62._0_8_;
        auVar67._8_8_ = auVar64._8_8_;
        auVar63 = VectorShiftLeft(auVar65,0x39,0x40,0);
        auVar72 = VectorShiftLeft(auVar65,0x3e,0x40,0);
        auVar70 = VectorShiftLeft(auVar65,0x3f,0x40,0);
        auVar70 = auVar72 ^ auVar63 ^ auVar70;
        auVar66._8_8_ = auVar65._8_8_ ^ auVar70._0_8_;
        auVar66._0_8_ = auVar65._0_8_;
        auVar67._0_8_ = auVar64._0_8_ ^ auVar62._8_8_ ^ auVar70._8_8_;
        auVar63 = VectorShiftRight(auVar66,1);
        auVar62 = VectorShiftRight(auVar63,6);
        auVar63 = VectorShiftRight(auVar66 ^ auVar63,1);
        auVar62 = auVar63 ^ auVar67 ^ auVar66 ^ auVar62;
        param_3 = param_3 - 0x10;
      } while (param_3 != 0);
      auVar62 = vrev(auVar62,1);
      *(longlong *)*param_1 = auVar62._8_8_;
      *(longlong *)(*param_1 + 8) = auVar62._0_8_;
      return;
    }
    uVar48 = *(uint *)(*param_1 + 8);
    uVar56 = *(uint *)*param_1;
    uVar54 = *(uint *)(*param_1 + 4);
    uVar52 = uVar48 << 0x18 | (uVar48 >> 8 & 0xff) << 0x10 | (uVar48 >> 0x10 & 0xff) << 8 |
             uVar48 >> 0x18;
    uVar48 = *(uint *)(*param_1 + 0xc);
    uVar61 = uVar48 << 0x18 | (uVar48 >> 8 & 0xff) << 0x10 | (uVar48 >> 0x10 & 0xff) << 8 |
             uVar48 >> 0x18;
    uVar48 = uVar56 << 0x18 | (uVar56 >> 8 & 0xff) << 0x10 | (uVar56 >> 0x10 & 0xff) << 8 |
             uVar56 >> 0x18;
    local_40 = uVar54 << 0x18 | (uVar54 >> 8 & 0xff) << 0x10 | (uVar54 >> 0x10 & 0xff) << 8 |
               uVar54 >> 0x18;
    if (0xf < param_3) {
      uVar57 = *(uint *)*pauVar49;
      uVar59 = *(uint *)(param_1[1] + 4);
      uVar56 = *(uint *)(param_1[1] + 8);
      uVar55 = *(uint *)(param_1[1] + 0xc);
      puVar41 = *param_2;
      uVar54 = uVar55 ^ uVar59;
      do {
        uVar46 = *(uint *)*param_2;
        uVar47 = *(uint *)(*param_2 + 8);
        uVar51 = *(uint *)(*param_2 + 0xc);
        uVar58 = *(uint *)(*param_2 + 4);
        uVar61 = (uVar51 << 0x18 | (uVar51 >> 8 & 0xff) << 0x10 | (uVar51 >> 0x10 & 0xff) << 8 |
                 uVar51 >> 0x18) ^ uVar61;
        uVar52 = (uVar47 << 0x18 | (uVar47 >> 8 & 0xff) << 0x10 | (uVar47 >> 0x10 & 0xff) << 8 |
                 uVar47 >> 0x18) ^ uVar52;
        FUN_014f1c7c(&local_38,uVar47,uVar61,uVar52,uVar56,uVar55);
        uVar44 = local_2c;
        uVar42 = local_30;
        uVar51 = local_34;
        uVar47 = local_38;
        uVar53 = (uVar58 << 0x18 | (uVar58 >> 8 & 0xff) << 0x10 | (uVar58 >> 0x10 & 0xff) << 8 |
                 uVar58 >> 0x18) ^ local_40;
        uVar48 = (uVar46 << 0x18 | (uVar46 >> 8 & 0xff) << 0x10 | (uVar46 >> 0x10 & 0xff) << 8 |
                 uVar46 >> 0x18) ^ uVar48;
        FUN_014f1c7c(&local_38,local_40,uVar53,uVar48,uVar57,uVar59);
        uVar45 = local_2c;
        uVar43 = local_30;
        uVar58 = local_34;
        uVar46 = local_38;
        FUN_014f1c7c(&local_38,uVar54,uVar61 ^ uVar53,uVar52 ^ uVar48,uVar56 ^ uVar57,uVar54);
        param_2 = param_2 + 1;
        uVar48 = uVar47 << 0x1e ^ uVar47 << 0x1f ^ uVar47 << 0x19 ^ local_34 ^ uVar51 ^ uVar44 ^
                 uVar58;
        uVar52 = local_38 ^ uVar47 ^ uVar42 ^ uVar46;
        local_40 = (uVar52 >> 2 | uVar48 << 0x1e) ^ ((uint)((byte)uVar48 & 1) << 0x1f | uVar52 >> 1)
                   ^ (uVar52 >> 7 | uVar48 << 0x19) ^ uVar43 ^ uVar52;
        uVar61 = ((uint)((byte)uVar51 & 1) << 0x1f | uVar47 >> 1) ^ (uVar47 >> 2 | uVar51 << 0x1e) ^
                 (uVar47 >> 7 | uVar51 << 0x19) ^ local_30 ^ uVar47 ^ uVar42 ^ uVar46 ^ uVar43;
        uVar48 = uVar48 >> 1 ^ uVar48 >> 2 ^ uVar48 >> 7 ^ uVar45 ^ uVar48;
        uVar52 = uVar51 >> 1 ^ uVar51 >> 2 ^ uVar51 >> 7 ^ local_2c ^ uVar52 << 0x1f ^
                 uVar52 << 0x1e ^ uVar52 << 0x19 ^ uVar51 ^ uVar44 ^ uVar58 ^ uVar45;
      } while (param_2 != (undefined1 (*) [16])(puVar41 + (param_3 & 0xff0)));
    }
    (*param_1)[0xf] = (char)uVar61;
    (*param_1)[0xc] = (char)(uVar61 >> 0x18);
    (*param_1)[0xd] = (char)(uVar61 >> 0x10);
    (*param_1)[7] = (char)local_40;
    (*param_1)[6] = (char)(local_40 >> 8);
    (*param_1)[5] = (char)(local_40 >> 0x10);
    (*param_1)[0xb] = (char)uVar52;
    (*param_1)[10] = (char)(uVar52 >> 8);
    (*param_1)[9] = (char)(uVar52 >> 0x10);
    (*param_1)[3] = (char)uVar48;
    (*param_1)[2] = (char)(uVar48 >> 8);
    (*param_1)[4] = (char)(local_40 >> 0x18);
    (*param_1)[8] = (char)(uVar52 >> 0x18);
    (*param_1)[0] = (char)(uVar48 >> 0x18);
    (*param_1)[0xe] = (char)(uVar61 >> 8);
    (*param_1)[1] = (char)(uVar48 >> 0x10);
    return;
  }
  iVar60 = 0x10;
  uVar89 = *(undefined8 *)*pauVar49;
  uVar90 = *(undefined8 *)(param_1[1] + 8);
  auVar62._8_8_ = SUB168((undefined1  [16])0x0,8);
  auVar62._0_8_ = 0xe1e1e1e1e1e1e1e1;
  if (param_3 - 0x20 == 0) {
    iVar60 = 0;
  }
  auVar19._16_16_ = *param_1;
  auVar19._0_16_ = *param_1;
  auVar64 = VectorShiftLeft(*(undefined1 (*) [16])(auVar62 << 0x40 | auVar62),0x39,0x40,0);
  auVar62 = vrev(*param_2,1);
  uVar91 = auVar62._0_8_;
  auVar63 = vrev(auVar19._8_16_,1);
  auVar20._16_16_ = auVar62;
  auVar20._0_16_ = auVar62;
  auVar62 = auVar20._8_16_;
  uVar84 = auVar64._0_8_;
  if (0x1f < param_3) {
    pauVar49 = (undefined1 (*) [16])(param_2[1] + iVar60);
    auVar70 = vrev(param_2[1],1);
    auVar21._16_16_ = auVar70;
    auVar21._0_16_ = auVar70;
    auVar62 = auVar62 ^ auVar63;
    auVar64 = PolynomialMultiply(uVar89,auVar70._8_8_,8);
    auVar72 = auVar70 ^ auVar21._8_16_;
    auVar70 = PolynomialMultiply(uVar90,auVar70._0_8_,8);
    uVar48 = param_3 - 0x20;
    do {
      uVar61 = uVar48;
      auVar63 = PolynomialMultiply(*(undefined8 *)param_1[3],auVar62._0_8_,8);
      if (0x1f >= uVar61) {
        iVar60 = 0;
      }
      auVar76 = PolynomialMultiply(*(undefined8 *)param_1[2],auVar72._0_8_,8);
      auVar72 = PolynomialMultiply(*(undefined8 *)(param_1[3] + 8),auVar62._8_8_,8);
      auVar63 = auVar63 ^ auVar64;
      auVar64 = PolynomialMultiply(*(undefined8 *)(param_1[2] + 8),auVar62._0_8_ ^ auVar62._8_8_,8);
      auVar62 = *pauVar49;
      pauVar50 = (undefined1 (*) [16])(*pauVar49 + iVar60);
      auVar72 = auVar72 ^ auVar70;
      if (uVar61 - 0x20 == 0) {
        iVar60 = 0;
      }
      auVar22._16_16_ = auVar72;
      auVar22._0_16_ = auVar63;
      pauVar49 = (undefined1 (*) [16])(*pauVar50 + iVar60);
      auVar80 = vrev(auVar62,1);
      uVar91 = auVar80._0_8_;
      auVar62 = auVar64 ^ auVar76 ^ auVar22._8_16_ ^ auVar63 ^ auVar72;
      auVar64 = PolynomialMultiply(auVar63._0_8_,uVar84,8);
      auVar87 = vrev(*pauVar50,1);
      auVar76._8_8_ = auVar72._8_8_;
      auVar76._0_8_ = auVar62._8_8_;
      auVar70._0_8_ = auVar62._0_8_;
      auVar70._8_8_ = auVar63._0_8_;
      auVar23._16_16_ = auVar87;
      auVar23._0_16_ = auVar87;
      auVar24._16_16_ = auVar80;
      auVar24._0_16_ = auVar80;
      auVar70 = auVar70 ^ auVar64;
      auVar64 = PolynomialMultiply(uVar89,auVar87._8_8_,8);
      auVar25._16_16_ = auVar70;
      auVar25._0_16_ = auVar70;
      auVar63 = PolynomialMultiply(auVar70._0_8_,uVar84,8);
      auVar72 = auVar87 ^ auVar23._8_16_;
      auVar62 = auVar24._8_16_ ^ auVar76 ^ auVar25._8_16_ ^ auVar63;
      auVar70 = PolynomialMultiply(uVar90,auVar87._0_8_,8);
      uVar48 = uVar61 - 0x20;
    } while (0x1f < uVar61);
    auVar26._16_16_ = auVar80;
    auVar26._0_16_ = auVar80;
    auVar62 = auVar26._8_16_;
    auVar63 = auVar63 ^ auVar76 ^ auVar25._8_16_;
    if (uVar61 == 0) goto LAB_0183aeac;
  }
  uVar92 = SUB168(auVar62 ^ auVar63,0);
  auVar64 = PolynomialMultiply(uVar89,uVar92,8);
  auVar70 = PolynomialMultiply(uVar90,SUB168(auVar62 ^ auVar63,8),8);
  auVar62 = PolynomialMultiply(*(undefined8 *)param_1[2],uVar91 ^ auVar63._8_8_ ^ uVar92,8);
  auVar27._16_16_ = auVar70;
  auVar27._0_16_ = auVar64;
  auVar62 = auVar62 ^ auVar27._8_16_ ^ auVar64 ^ auVar70;
  auVar76 = PolynomialMultiply(auVar64._0_8_,uVar84,8);
  auVar72._8_8_ = auVar70._8_8_;
  auVar72._0_8_ = auVar62._8_8_;
  auVar63._0_8_ = auVar62._0_8_;
  auVar63._8_8_ = auVar64._0_8_;
  auVar63 = auVar63 ^ auVar76;
  auVar28._16_16_ = auVar63;
  auVar28._0_16_ = auVar63;
  auVar63 = PolynomialMultiply(auVar63._0_8_,uVar84,8);
  auVar63 = auVar63 ^ auVar28._8_16_ ^ auVar72;
LAB_0183aeac:
  auVar62 = vrev(auVar63,1);
  *(longlong *)*param_1 = auVar62._8_8_;
  *(longlong *)(*param_1 + 8) = auVar62._0_8_;
  return;
}

