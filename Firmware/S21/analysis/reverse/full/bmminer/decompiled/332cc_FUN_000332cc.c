// FUN_000332cc @ 000332cc  size=296  callers=1
// program: bmminer


void FUN_000332cc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  
  iVar4 = **(int **)(param_1 + 100);
  if (iVar4 == DAT_000be5f8) {
    return;
  }
  if (DAT_000be5f8 != 100) {
    DAT_000c94d8 = 1;
  }
  FUN_0005015c();
  uVar1 = FUN_000405a0();
  uVar2 = FUN_000405e8();
  uVar3 = FUN_000405a0();
  uVar3 = VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  DAT_000c74c4 = 0;
  FUN_00038ea8(0x42480000,uVar3,DAT_008c7044);
  FUN_00039b04(iVar4);
  FUN_00039094(0x40c80000,DAT_008c7044,0x32,uVar1,100);
  FUN_00039228(0x40c80000,DAT_008c7044,uVar1,uVar2,100);
  FUN_0003eb00();
  DAT_012a2918 = 0;
  DAT_012a291c = 0;
  DAT_012a2920 = 0;
  DAT_012a2924 = 0;
  DAT_012a2928 = 0;
  DAT_012a292c = 0;
  DAT_012a2930 = 0;
  DAT_012a2934 = 0;
  DAT_00aaa908 = 0;
  DAT_00aaa90c = 0;
  DAT_000c9470._0_4_ = 0;
  DAT_000c9470._4_4_ = 0;
  FUN_0005015c();
  DAT_000c74c4 = 1;
  DAT_000c9478 = 1;
  DAT_000c947c = 1;
  DAT_000c9480 = 1;
  return;
}

