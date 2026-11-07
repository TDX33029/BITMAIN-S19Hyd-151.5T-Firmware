// FUN_0005b740 @ 0005b740  size=68  callers=2
// program: bmminer


float FUN_0005b740(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  uVar3 = *(undefined4 *)(param_2 + (param_1 + 0x3fe800) * 4);
  iVar1 = FUN_0002a554();
  fVar5 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  iVar2 = FUN_0002a514();
  fVar4 = (float)VectorSignedToFloat(iVar2 * iVar1 * 8,(byte)(in_fpscr >> 0x16) & 3);
  return fVar5 / fVar4;
}

