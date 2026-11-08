// FUN_01895174 @ 01895174 size=1392 calls_out=1 calls_in=2
// strings: 

void FUN_01895174(undefined1 (*param_1) [16],undefined1 (*param_2) [16],uint param_3)

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
  int iVar42;
  undefined4 uVar43;
  undefined1 (*pauVar44) [16];
  undefined1 (*pauVar45) [16];
  undefined4 uVar46;
  uint uVar47;
  uint uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  ulonglong uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  ulonglong uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined8 uVar73;
  ulonglong uVar74;
  ulonglong uVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined8 uVar78;
  undefined8 uVar79;
  ulonglong uVar80;
  ulonglong uVar81;
  ulonglong uVar82;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  iVar42 = 1;
  if ((DAT_01d53480 & 1) == 0) {
    iVar42 = 2;
  }
  pauVar44 = param_1 + 1;
  if ((DAT_01d53480 & 0x20) != 0) {
    iVar42 = 0;
  }
  if (iVar42 != 0) {
    if (iVar42 == 1) {
      auVar53._8_8_ = *(undefined8 *)*param_1;
      auVar53._0_8_ = *(undefined8 *)(*param_1 + 8);
      uVar80 = *(ulonglong *)*pauVar44;
      uVar81 = *(ulonglong *)(param_1[1] + 8);
      auVar51 = vrev(auVar53,1);
      uVar82 = uVar80 ^ uVar81;
      do {
        auVar58._8_8_ = *(undefined8 *)*param_2;
        auVar58._0_8_ = *(undefined8 *)(*param_2 + 8);
        param_2 = param_2 + 1;
        auVar59 = vrev(auVar58,1);
        auVar69._8_8_ = uVar80;
        auVar69._0_8_ = uVar80;
        uVar57 = SUB168(auVar59 ^ auVar51,0);
        auVar61 = PolynomialMultiply(auVar69._1_8_,uVar57,1);
        auVar76._8_8_ = uVar57;
        auVar76._0_8_ = uVar57;
        auVar52 = PolynomialMultiply(uVar80,auVar76._1_8_,1);
        auVar77._8_8_ = uVar80;
        auVar77._0_8_ = uVar80;
        auVar65 = PolynomialMultiply(auVar77._2_8_,uVar57,1);
        auVar1._8_8_ = uVar57;
        auVar1._0_8_ = uVar57;
        auVar76 = PolynomialMultiply(uVar80,auVar1._2_8_,1);
        auVar2._8_8_ = uVar80;
        auVar2._0_8_ = uVar80;
        auVar69 = PolynomialMultiply(auVar2._3_8_,uVar57,1);
        auVar3._8_8_ = uVar57;
        auVar3._0_8_ = uVar57;
        auVar53 = PolynomialMultiply(uVar80,auVar3._3_8_,1);
        uVar60 = SUB168(auVar61 ^ auVar52,8);
        auVar62._8_8_ = uVar60 & 0xffffffffffff;
        auVar4._8_8_ = uVar57;
        auVar4._0_8_ = uVar57;
        uVar74 = SUB168(auVar65 ^ auVar76,8);
        auVar66._8_8_ = uVar74 & 0xffffffff;
        auVar77 = PolynomialMultiply(uVar80,auVar4._4_8_,1);
        auVar62._0_8_ = SUB168(auVar61 ^ auVar52,0) ^ uVar60 ^ auVar62._8_8_;
        auVar66._0_8_ = SUB168(auVar65 ^ auVar76,0) ^ uVar74 ^ auVar66._8_8_;
        uVar60 = SUB168(auVar69 ^ auVar53,8);
        auVar70._8_8_ = uVar60 & 0xffff;
        auVar29._16_16_ = auVar62;
        auVar29._0_16_ = auVar62;
        uVar74 = auVar77._0_8_ ^ auVar77._8_8_;
        auVar38._8_8_ = 0;
        auVar38._0_8_ = uVar74;
        auVar30._16_16_ = auVar66;
        auVar30._0_16_ = auVar66;
        auVar70._0_8_ = SUB168(auVar69 ^ auVar53,0) ^ uVar60 ^ auVar70._8_8_;
        auVar52 = PolynomialMultiply(uVar80,uVar57,1);
        auVar38._16_8_ = uVar74;
        auVar31._16_16_ = auVar70;
        auVar31._0_16_ = auVar70;
        auVar52 = auVar52 ^ auVar29._15_16_ ^ auVar30._14_16_ ^
                  auVar31._13_16_ ^ auVar38._8_16_ >> 0x20;
        uVar60 = SUB168(auVar59 ^ auVar51,8);
        uVar57 = uVar57 ^ uVar60;
        auVar5._8_8_ = uVar82;
        auVar5._0_8_ = uVar82;
        auVar59 = PolynomialMultiply(auVar5._1_8_,uVar57,1);
        auVar6._8_8_ = uVar57;
        auVar6._0_8_ = uVar57;
        auVar51 = PolynomialMultiply(uVar82,auVar6._1_8_,1);
        auVar7._8_8_ = uVar82;
        auVar7._0_8_ = uVar82;
        auVar61 = PolynomialMultiply(auVar7._2_8_,uVar57,1);
        auVar8._8_8_ = uVar57;
        auVar8._0_8_ = uVar57;
        auVar69 = PolynomialMultiply(uVar82,auVar8._2_8_,1);
        auVar9._8_8_ = uVar82;
        auVar9._0_8_ = uVar82;
        auVar65 = PolynomialMultiply(auVar9._3_8_,uVar57,1);
        auVar10._8_8_ = uVar57;
        auVar10._0_8_ = uVar57;
        auVar53 = PolynomialMultiply(uVar82,auVar10._3_8_,1);
        uVar74 = SUB168(auVar59 ^ auVar51,8);
        auVar63._8_8_ = uVar74 & 0xffffffffffff;
        auVar11._8_8_ = uVar57;
        auVar11._0_8_ = uVar57;
        uVar75 = SUB168(auVar61 ^ auVar69,8);
        auVar67._8_8_ = uVar75 & 0xffffffff;
        auVar76 = PolynomialMultiply(uVar82,auVar11._4_8_,1);
        auVar63._0_8_ = SUB168(auVar59 ^ auVar51,0) ^ uVar74 ^ auVar63._8_8_;
        auVar67._0_8_ = SUB168(auVar61 ^ auVar69,0) ^ uVar75 ^ auVar67._8_8_;
        uVar74 = SUB168(auVar65 ^ auVar53,8);
        auVar71._8_8_ = uVar74 & 0xffff;
        auVar32._16_16_ = auVar63;
        auVar32._0_16_ = auVar63;
        uVar75 = auVar76._0_8_ ^ auVar76._8_8_;
        auVar39._8_8_ = 0;
        auVar39._0_8_ = uVar75;
        auVar33._16_16_ = auVar67;
        auVar33._0_16_ = auVar67;
        auVar71._0_8_ = SUB168(auVar65 ^ auVar53,0) ^ uVar74 ^ auVar71._8_8_;
        auVar51 = PolynomialMultiply(uVar82,uVar57,1);
        auVar39._16_8_ = uVar75;
        auVar34._16_16_ = auVar71;
        auVar34._0_16_ = auVar71;
        auVar12._8_8_ = uVar81;
        auVar12._0_8_ = uVar81;
        auVar61 = PolynomialMultiply(auVar12._1_8_,uVar60,1);
        auVar13._8_8_ = uVar60;
        auVar13._0_8_ = uVar60;
        auVar53 = PolynomialMultiply(uVar81,auVar13._1_8_,1);
        auVar14._8_8_ = uVar81;
        auVar14._0_8_ = uVar81;
        auVar65 = PolynomialMultiply(auVar14._2_8_,uVar60,1);
        auVar15._8_8_ = uVar60;
        auVar15._0_8_ = uVar60;
        auVar76 = PolynomialMultiply(uVar81,auVar15._2_8_,1);
        auVar16._8_8_ = uVar81;
        auVar16._0_8_ = uVar81;
        auVar69 = PolynomialMultiply(auVar16._3_8_,uVar60,1);
        auVar17._8_8_ = uVar60;
        auVar17._0_8_ = uVar60;
        auVar59 = PolynomialMultiply(uVar81,auVar17._3_8_,1);
        uVar57 = SUB168(auVar61 ^ auVar53,8);
        auVar64._8_8_ = uVar57 & 0xffffffffffff;
        auVar18._8_8_ = uVar60;
        auVar18._0_8_ = uVar60;
        uVar74 = SUB168(auVar65 ^ auVar76,8);
        auVar68._8_8_ = uVar74 & 0xffffffff;
        auVar77 = PolynomialMultiply(uVar81,auVar18._4_8_,1);
        auVar64._0_8_ = SUB168(auVar61 ^ auVar53,0) ^ uVar57 ^ auVar64._8_8_;
        auVar68._0_8_ = SUB168(auVar65 ^ auVar76,0) ^ uVar74 ^ auVar68._8_8_;
        uVar57 = SUB168(auVar69 ^ auVar59,8);
        auVar72._8_8_ = uVar57 & 0xffff;
        auVar35._16_16_ = auVar64;
        auVar35._0_16_ = auVar64;
        uVar74 = auVar77._0_8_ ^ auVar77._8_8_;
        auVar40._8_8_ = 0;
        auVar40._0_8_ = uVar74;
        auVar36._16_16_ = auVar68;
        auVar36._0_16_ = auVar68;
        auVar72._0_8_ = SUB168(auVar69 ^ auVar59,0) ^ uVar57 ^ auVar72._8_8_;
        auVar53 = PolynomialMultiply(uVar81,uVar60,1);
        auVar40._16_8_ = uVar74;
        auVar37._16_16_ = auVar72;
        auVar37._0_16_ = auVar72;
        auVar53 = auVar53 ^ auVar35._15_16_ ^ auVar36._14_16_ ^
                  auVar37._13_16_ ^ auVar40._8_16_ >> 0x20;
        auVar51 = auVar51 ^ auVar32._15_16_ ^ auVar33._14_16_ ^
                  auVar34._13_16_ ^ auVar39._8_16_ >> 0x20 ^ auVar52 ^ auVar53;
        auVar54._0_8_ = auVar52._0_8_;
        auVar54._8_8_ = auVar52._8_8_ ^ auVar51._0_8_;
        auVar56._8_8_ = auVar53._8_8_;
        auVar52 = VectorShiftLeft(auVar54,0x39,0x40,0);
        auVar61 = VectorShiftLeft(auVar54,0x3e,0x40,0);
        auVar59 = VectorShiftLeft(auVar54,0x3f,0x40,0);
        auVar59 = auVar61 ^ auVar52 ^ auVar59;
        auVar55._8_8_ = auVar54._8_8_ ^ auVar59._0_8_;
        auVar55._0_8_ = auVar54._0_8_;
        auVar56._0_8_ = auVar53._0_8_ ^ auVar51._8_8_ ^ auVar59._8_8_;
        auVar52 = VectorShiftRight(auVar55,1);
        auVar51 = VectorShiftRight(auVar52,6);
        auVar52 = VectorShiftRight(auVar55 ^ auVar52,1);
        auVar51 = auVar52 ^ auVar56 ^ auVar55 ^ auVar51;
        param_3 = param_3 - 0x10;
      } while (param_3 != 0);
      auVar51 = vrev(auVar51,1);
      *(longlong *)*param_1 = auVar51._8_8_;
      *(longlong *)(*param_1 + 8) = auVar51._0_8_;
      return;
    }
    uVar47 = *(uint *)(*param_1 + 0xc);
    uVar43 = *(undefined4 *)*pauVar44;
    uVar46 = *(undefined4 *)(param_1[1] + 4);
    uVar49 = *(undefined4 *)(param_1[1] + 8);
    uVar50 = *(undefined4 *)(param_1[1] + 0xc);
    local_38 = uVar47 << 0x18 | (uVar47 >> 8 & 0xff) << 0x10 | (uVar47 >> 0x10 & 0xff) << 8 |
               uVar47 >> 0x18;
    uVar47 = *(uint *)(*param_1 + 4);
    uVar48 = *(uint *)(*param_1 + 8);
    local_34 = uVar48 << 0x18 | (uVar48 >> 8 & 0xff) << 0x10 | (uVar48 >> 0x10 & 0xff) << 8 |
               uVar48 >> 0x18;
    uVar48 = *(uint *)*param_1;
    local_30 = uVar47 << 0x18 | (uVar47 >> 8 & 0xff) << 0x10 | (uVar47 >> 0x10 & 0xff) << 8 |
               uVar47 >> 0x18;
    local_2c = uVar48 << 0x18 | (uVar48 >> 8 & 0xff) << 0x10 | (uVar48 >> 0x10 & 0xff) << 8 |
               uVar48 >> 0x18;
    if (0xf < param_3) {
      puVar41 = *param_2;
      do {
        uVar47 = *(uint *)(*param_2 + 4);
        uVar48 = *(uint *)*param_2;
        local_30 = local_30 ^
                   (uVar47 << 0x18 | (uVar47 >> 8 & 0xff) << 0x10 | (uVar47 >> 0x10 & 0xff) << 8 |
                   uVar47 >> 0x18);
        local_2c = local_2c ^
                   (uVar48 << 0x18 | (uVar48 >> 8 & 0xff) << 0x10 | (uVar48 >> 0x10 & 0xff) << 8 |
                   uVar48 >> 0x18);
        uVar48 = *(uint *)(*param_2 + 0xc);
        uVar47 = *(uint *)(*param_2 + 8);
        local_38 = (uVar48 << 0x18 | (uVar48 >> 8 & 0xff) << 0x10 | (uVar48 >> 0x10 & 0xff) << 8 |
                   uVar48 >> 0x18) ^ local_38;
        local_34 = (uVar47 << 0x18 | (uVar47 >> 8 & 0xff) << 0x10 | (uVar47 >> 0x10 & 0xff) << 8 |
                   uVar47 >> 0x18) ^ local_34;
        FUN_01894dac(&local_38,local_2c,uVar43,uVar46,uVar49,uVar50);
        param_2 = param_2 + 1;
      } while (param_2 != (undefined1 (*) [16])(puVar41 + (param_3 & 0xff0)));
    }
    (*param_1)[0xc] = (char)(local_38 >> 0x18);
    (*param_1)[0xf] = (char)local_38;
    (*param_1)[0] = (char)(local_2c >> 0x18);
    (*param_1)[0xd] = (char)(local_38 >> 0x10);
    (*param_1)[7] = (char)local_30;
    (*param_1)[6] = (char)(local_30 >> 8);
    (*param_1)[5] = (char)(local_30 >> 0x10);
    (*param_1)[0xb] = (char)local_34;
    (*param_1)[10] = (char)(local_34 >> 8);
    (*param_1)[9] = (char)(local_34 >> 0x10);
    (*param_1)[3] = (char)local_2c;
    (*param_1)[4] = (char)(local_30 >> 0x18);
    (*param_1)[8] = (char)(local_34 >> 0x18);
    (*param_1)[0xe] = (char)(local_38 >> 8);
    (*param_1)[2] = (char)(local_2c >> 8);
    (*param_1)[1] = (char)(local_2c >> 0x10);
    return;
  }
  iVar42 = 0x10;
  uVar78 = *(undefined8 *)*pauVar44;
  uVar79 = *(undefined8 *)(param_1[1] + 8);
  auVar51._8_8_ = SUB168((undefined1  [16])0x0,8);
  auVar51._0_8_ = 0xe1e1e1e1e1e1e1e1;
  if (param_3 - 0x20 == 0) {
    iVar42 = 0;
  }
  auVar19._16_16_ = *param_1;
  auVar19._0_16_ = *param_1;
  auVar53 = VectorShiftLeft(*(undefined1 (*) [16])(auVar51 << 0x40 | auVar51),0x39,0x40,0);
  auVar51 = vrev(*param_2,1);
  uVar80 = auVar51._0_8_;
  auVar52 = vrev(auVar19._8_16_,1);
  auVar20._16_16_ = auVar51;
  auVar20._0_16_ = auVar51;
  auVar51 = auVar20._8_16_;
  uVar73 = auVar53._0_8_;
  if (0x1f < param_3) {
    pauVar44 = (undefined1 (*) [16])(param_2[1] + iVar42);
    auVar59 = vrev(param_2[1],1);
    auVar21._16_16_ = auVar59;
    auVar21._0_16_ = auVar59;
    auVar51 = auVar51 ^ auVar52;
    auVar53 = PolynomialMultiply(uVar78,auVar59._8_8_,8);
    auVar61 = auVar59 ^ auVar21._8_16_;
    auVar59 = PolynomialMultiply(uVar79,auVar59._0_8_,8);
    uVar47 = param_3 - 0x20;
    do {
      uVar48 = uVar47;
      auVar52 = PolynomialMultiply(*(undefined8 *)param_1[3],auVar51._0_8_,8);
      if (0x1f >= uVar48) {
        iVar42 = 0;
      }
      auVar65 = PolynomialMultiply(*(undefined8 *)param_1[2],auVar61._0_8_,8);
      auVar61 = PolynomialMultiply(*(undefined8 *)(param_1[3] + 8),auVar51._8_8_,8);
      auVar52 = auVar52 ^ auVar53;
      auVar53 = PolynomialMultiply(*(undefined8 *)(param_1[2] + 8),auVar51._0_8_ ^ auVar51._8_8_,8);
      auVar51 = *pauVar44;
      pauVar45 = (undefined1 (*) [16])(*pauVar44 + iVar42);
      auVar61 = auVar61 ^ auVar59;
      if (uVar48 - 0x20 == 0) {
        iVar42 = 0;
      }
      auVar22._16_16_ = auVar61;
      auVar22._0_16_ = auVar52;
      pauVar44 = (undefined1 (*) [16])(*pauVar45 + iVar42);
      auVar69 = vrev(auVar51,1);
      uVar80 = auVar69._0_8_;
      auVar51 = auVar53 ^ auVar65 ^ auVar22._8_16_ ^ auVar52 ^ auVar61;
      auVar53 = PolynomialMultiply(auVar52._0_8_,uVar73,8);
      auVar76 = vrev(*pauVar45,1);
      auVar65._8_8_ = auVar61._8_8_;
      auVar65._0_8_ = auVar51._8_8_;
      auVar59._0_8_ = auVar51._0_8_;
      auVar59._8_8_ = auVar52._0_8_;
      auVar23._16_16_ = auVar76;
      auVar23._0_16_ = auVar76;
      auVar24._16_16_ = auVar69;
      auVar24._0_16_ = auVar69;
      auVar59 = auVar59 ^ auVar53;
      auVar53 = PolynomialMultiply(uVar78,auVar76._8_8_,8);
      auVar25._16_16_ = auVar59;
      auVar25._0_16_ = auVar59;
      auVar52 = PolynomialMultiply(auVar59._0_8_,uVar73,8);
      auVar61 = auVar76 ^ auVar23._8_16_;
      auVar51 = auVar24._8_16_ ^ auVar65 ^ auVar25._8_16_ ^ auVar52;
      auVar59 = PolynomialMultiply(uVar79,auVar76._0_8_,8);
      uVar47 = uVar48 - 0x20;
    } while (0x1f < uVar48);
    auVar26._16_16_ = auVar69;
    auVar26._0_16_ = auVar69;
    auVar51 = auVar26._8_16_;
    auVar52 = auVar52 ^ auVar65 ^ auVar25._8_16_;
    if (uVar48 == 0) goto LAB_01bd946c;
  }
  uVar81 = SUB168(auVar51 ^ auVar52,0);
  auVar53 = PolynomialMultiply(uVar78,uVar81,8);
  auVar59 = PolynomialMultiply(uVar79,SUB168(auVar51 ^ auVar52,8),8);
  auVar51 = PolynomialMultiply(*(undefined8 *)param_1[2],uVar80 ^ auVar52._8_8_ ^ uVar81,8);
  auVar27._16_16_ = auVar59;
  auVar27._0_16_ = auVar53;
  auVar51 = auVar51 ^ auVar27._8_16_ ^ auVar53 ^ auVar59;
  auVar65 = PolynomialMultiply(auVar53._0_8_,uVar73,8);
  auVar61._8_8_ = auVar59._8_8_;
  auVar61._0_8_ = auVar51._8_8_;
  auVar52._0_8_ = auVar51._0_8_;
  auVar52._8_8_ = auVar53._0_8_;
  auVar52 = auVar52 ^ auVar65;
  auVar28._16_16_ = auVar52;
  auVar28._0_16_ = auVar52;
  auVar52 = PolynomialMultiply(auVar52._0_8_,uVar73,8);
  auVar52 = auVar52 ^ auVar28._8_16_ ^ auVar61;
LAB_01bd946c:
  auVar51 = vrev(auVar52,1);
  *(longlong *)*param_1 = auVar51._8_8_;
  *(longlong *)(*param_1 + 8) = auVar51._0_8_;
  return;
}

