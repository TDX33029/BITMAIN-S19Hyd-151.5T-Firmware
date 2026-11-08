// FUN_00021000 @ 00021000  size=96  callers=1
// program: bmminer


int FUN_00021000(uint param_1,uint param_2)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  byte local_8;
  byte local_7;
  
  local_8 = (byte)param_1;
  local_7 = (byte)(param_1 >> 8);
  fVar2 = (float)VectorSignedToFloat(param_1 >> 0x10 & 0xff,(byte)(in_fpscr >> 0x16) & 3);
  fVar1 = (float)VectorSignedToFloat(param_2 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar3 = (float)VectorSignedToFloat((param_2 >> 0x10 & 0xff) *
                                     (int)(short)(ushort)local_8 * (int)(short)(ushort)local_7,
                                     (byte)(in_fpscr >> 0x16) & 3);
  return (int)(((25.0 / fVar2) * fVar1) / fVar3);
}

