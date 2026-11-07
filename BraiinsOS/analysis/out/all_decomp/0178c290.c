// FUN_0178c290 @ 0178c290 size=24 calls_out=0 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: register */

uint FUN_0178c290(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [32];
  uint uVar3;
  undefined4 uVar4;
  undefined4 unaff_r6;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_r12;
  undefined4 unaff_lr;
  undefined1 in_q0 [16];
  undefined1 auVar10 [16];
  uint in_s8;
  undefined1 in_q7 [16];
  undefined1 auVar11 [16];
  undefined1 in_q8 [16];
  uint in_d18;
  uint in_d24;
  
  auVar11 = in_q7 ^ ZEXT116(in_q8[0xf]);
  uVar1 = CONCAT44(in_q0._12_4_,in_q0._12_4_);
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = uVar1;
  auVar2._16_16_ = auVar10;
  auVar2._0_16_ = auVar10;
  auVar11 = auVar11 ^ SUB3216(ZEXT1632(auVar11) << 0x80,0xc);
  auVar10 = VectorShiftRight(auVar2._1_16_,4);
  uVar3 = SUB324(ZEXT1632(auVar11) << 0x80,8);
  uVar4 = VectorTableLookup(param_3,unaff_r6,2);
  VectorTableLookup(param_4,unaff_r6,2);
  uVar5 = VectorTableLookup(param_1,uVar4,2);
  uVar7 = VectorTableLookup(param_2,uVar4,2);
  uVar8 = VectorTableLookup(param_3,uVar4,2);
  uVar9 = VectorTableLookup(param_4,uVar4,2);
  uVar6 = VectorTableLookup(uVar5,uVar4,2);
  uVar7 = VectorTableLookup(uVar7,uVar4,2);
  uVar4 = VectorTableLookup(uVar8,uVar4,2);
  uVar5 = VectorTableLookup(uVar9,uVar4,2);
  VectorTableLookup(uVar6,unaff_lr,2);
  VectorTableLookup(uVar7,unaff_lr,2);
  VectorTableLookup(uVar4,in_r12,2);
  VectorTableLookup(uVar5,in_r12,2);
  return (uint)((ulonglong)uVar1 >> 8) & in_d18 ^ auVar10._0_4_ ^ uVar3 ^ in_s8 ^
         auVar11._0_4_ ^ uVar3 ^ in_d24;
}

