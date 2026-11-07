// FUN_0160a118 @ 0160a118 size=148 calls_out=0 calls_in=6
// strings: 

undefined4 FUN_0160a118(int param_1,uint *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint in_fpscr;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = (double)VectorUnsignedToFloat(param_1 << 1,(byte)(in_fpscr >> 0x16) & 3);
  dVar4 = (double)VectorUnsignedToFloat(*param_2,(byte)(in_fpscr >> 0x16) & 3);
  dVar3 = (double)VectorUnsignedToFloat(*param_3,(byte)(in_fpscr >> 0x16) & 3);
  if ((*param_2 < 25000) && (dVar4 / dVar2 < 0.1)) {
    uVar1 = 3;
    if (dVar2 * 0.7 < dVar3) {
      uVar1 = 0;
    }
    return uVar1;
  }
  uVar1 = 2;
  dVar2 = dVar2 * 0.25;
  if (dVar3 - dVar4 < dVar2) {
    uVar1 = 1;
  }
  if ((uint)(0.0 < dVar2) * (int)(longlong)dVar2 < 0x80) {
    uVar1 = 2;
  }
  return uVar1;
}

