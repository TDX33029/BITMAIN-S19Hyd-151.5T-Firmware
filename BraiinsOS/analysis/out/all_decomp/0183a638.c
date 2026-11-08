// FUN_0183a638 @ 0183a638 size=324 calls_out=0 calls_in=3
// strings: 

void FUN_0183a638(undefined8 *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined1 (*param_4) [16])

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined1 in_q9 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 in_q14 [16];
  undefined1 auVar22 [16];
  
  auVar4 = *param_3;
  auVar6 = VectorShiftLeft(auVar4,2,0x20,0);
  auVar8 = param_3[1];
  auVar10 = VectorShiftLeft(auVar8,2,0x20,0);
  auVar12._8_8_ = in_q9._8_8_;
  auVar12._0_8_ = *(undefined8 *)param_3[2];
  auVar13 = VectorShiftLeft(auVar12,2,0x20,0);
  auVar7 = VectorAdd(auVar6,auVar4,4);
  auVar10 = VectorAdd(auVar10,auVar8,4);
  auVar13 = VectorAdd(auVar13,auVar12,4);
  auVar15 = VectorAdd(*param_2,*param_4,4);
  auVar18 = VectorAdd(param_2[1],param_4[1],4);
  auVar21._8_8_ = SUB168(param_4[1],8);
  auVar21._0_8_ = *(undefined8 *)param_2[2];
  auVar6 = VectorShiftRight(*(undefined1 (*) [16])
                             (ZEXT816(0xffffffff) << 0x40 | ZEXT816(0xffffffff)),6);
  auVar22._8_8_ = in_q14._8_8_;
  auVar22._0_8_ = *(undefined8 *)param_4[2];
  auVar21 = VectorAdd(auVar21,auVar22,4);
  uVar2 = auVar4._0_8_;
  uVar14 = auVar15._0_8_;
  VectorMultiply(uVar14,uVar2,4,1);
  uVar11 = auVar13._0_8_;
  uVar16 = auVar15._8_8_;
  VectorMultiplyAccumulate(uVar16,uVar11,4,1);
  uVar9 = auVar10._8_8_;
  uVar17 = auVar18._0_8_;
  VectorMultiplyAccumulate(uVar17,uVar9,4,1);
  uVar19 = auVar18._8_8_;
  VectorMultiplyAccumulate(uVar19,auVar10._0_8_,4,1);
  uVar20 = auVar21._0_8_;
  auVar15 = VectorMultiplyAccumulate(uVar20,auVar7._8_8_,4,1);
  uVar3 = auVar4._8_8_;
  VectorMultiply(uVar14,uVar3,4,1);
  VectorMultiplyAccumulate(uVar16,uVar2,4,1);
  VectorMultiplyAccumulate(uVar17,uVar11,4,1);
  VectorMultiplyAccumulate(uVar19,uVar9,4,1);
  auVar7 = VectorMultiplyAccumulate(uVar20,auVar10._0_8_,4,1);
  uVar5 = auVar8._0_8_;
  VectorMultiply(uVar14,uVar5,4,1);
  VectorMultiplyAccumulate(uVar16,uVar3,4,1);
  VectorMultiplyAccumulate(uVar17,uVar2,4,1);
  VectorMultiplyAccumulate(uVar19,uVar11,4,1);
  auVar18 = VectorMultiplyAccumulate(uVar20,uVar9,4,1);
  VectorMultiply(uVar14,auVar8._8_8_,4,1);
  VectorMultiplyAccumulate(uVar16,uVar5,4,1);
  VectorMultiplyAccumulate(uVar17,uVar3,4,1);
  VectorMultiplyAccumulate(uVar19,uVar2,4,1);
  auVar10 = VectorMultiplyAccumulate(uVar20,uVar11,4,1);
  VectorMultiply(uVar14,auVar12._0_8_,4,1);
  VectorMultiplyAccumulate(uVar16,auVar8._8_8_,4,1);
  VectorMultiplyAccumulate(uVar17,uVar5,4,1);
  VectorMultiplyAccumulate(uVar19,uVar3,4,1);
  auVar12 = VectorMultiplyAccumulate(uVar20,uVar2,4,1);
  auVar4 = VectorShiftRight(auVar15,0x1a);
  auVar4 = VectorAdd(auVar7,auVar4,8);
  auVar8 = VectorShiftRight(auVar10,0x1a);
  auVar8 = VectorAdd(auVar12,auVar8,8);
  auVar7 = VectorShiftRight(auVar4,0x1a);
  auVar13 = VectorShiftRight(auVar8,0x1a);
  auVar12 = VectorAdd(auVar18,auVar7,8);
  auVar7 = VectorAdd(auVar15 & auVar6,auVar13,8);
  auVar13 = VectorShiftLeft(auVar13,2,0x40,0);
  auVar15 = VectorShiftRight(auVar12,0x1a);
  auVar7 = VectorAdd(auVar7,auVar13,8);
  uVar1 = auVar6._8_8_;
  auVar10 = VectorAdd(auVar10 & auVar6,auVar15,8);
  auVar13 = VectorShiftRight(auVar7,0x1a);
  uVar11 = VectorTranspose(auVar12._8_8_ & uVar1,4);
  auVar4 = VectorAdd(auVar4 & auVar6,auVar13,8);
  auVar12 = VectorShiftRight(auVar10,0x1a);
  uVar9 = VectorTranspose(auVar7._8_8_ & uVar1,4);
  uVar3 = VectorTranspose(auVar4._8_8_,4);
  auVar4 = VectorAdd(auVar8 & auVar6,auVar12,8);
  uVar2 = VectorTranspose(auVar10._8_8_ & uVar1,4);
  uVar5 = VectorTranspose(auVar4._8_8_,4);
  *param_1 = uVar9;
  param_1[1] = uVar3;
  param_1[2] = uVar11;
  param_1[3] = uVar2;
  param_1[4] = uVar5;
  return;
}

