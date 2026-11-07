// FUN_0008128c @ 0008128c  size=200  callers=3
// program: bmminer


undefined4 FUN_0008128c(void)

{
  undefined4 uVar1;
  uint in_r3;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  byte in_stack_00000008;
  ushort in_stack_0000000c;
  
  if (in_r3 < 3) {
    fVar2 = (float)VectorSignedToFloat((uint)in_stack_00000008,(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = (float)VectorSignedToFloat((uint)in_stack_0000000c,(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = (25.0 / fVar2) * fVar3;
    if ((1600.0 <= fVar3) && (fVar3 < 2400.0)) {
      uVar1 = FUN_00081200();
      return uVar1;
    }
    if ((2400.0 <= fVar3) && (fVar3 <= 3200.0)) {
      uVar1 = FUN_00081200();
      return uVar1;
    }
  }
  return 0xffffffff;
}

