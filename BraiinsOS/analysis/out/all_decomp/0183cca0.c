// FUN_0183cca0 @ 0183cca0 size=56 calls_out=0 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0183cca0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 uVar7;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar10;
  
  auVar4._8_8_ = *param_2;
  auVar5._8_8_ = SUB168((undefined1  [16])0x0,8);
  auVar5._0_8_ = 0xe1e1e1e1e1e1e1e1;
  auVar5 = *(undefined1 (*) [16])(auVar5 << 0x40 | auVar5);
  auVar4._0_8_ = param_2[1];
  auVar8._8_8_ = VectorShiftLeft(auVar5._8_8_,0x39,0x40,0);
  auVar8._0_8_ = VectorShiftRight(auVar5._0_8_,0x3f);
  uVar7 = (undefined1)((ulonglong)auVar4._8_8_ >> 0x38);
  uVar2 = CONCAT11(uVar7,uVar7);
  uVar3 = CONCAT22(uVar2,uVar2);
  uVar1 = CONCAT44(uVar3,uVar3);
  auVar9._8_8_ = uVar1;
  auVar9._0_8_ = uVar1;
  uVar10 = VectorShiftRight(auVar4._0_8_,0x3f);
  auVar9 = VectorShiftRight(auVar9,7);
  auVar5 = VectorShiftLeft(auVar4,1,0x40,0);
  auVar6._0_8_ = auVar5._0_8_;
  auVar6._8_8_ = auVar5._8_8_ | uVar10;
  auVar6 = auVar6 ^ auVar8 & auVar9;
  *param_1 = auVar6._0_8_;
  param_1[1] = auVar6._8_8_;
  return;
}

