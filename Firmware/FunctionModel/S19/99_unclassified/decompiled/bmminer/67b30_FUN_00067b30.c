// FUN_00067b30 @ 00067b30  size=42  callers=4
// program: bmminer


undefined8 FUN_00067b30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint in_fpscr;
  double dVar2;
  
  dVar2 = (double)CONCAT44(param_2,param_1) * 2.3283064365386963e-10;
  iVar1 = (uint)(0.0 < dVar2) * (int)(longlong)dVar2;
  dVar2 = (double)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  dVar2 = (double)CONCAT44(param_2,param_1) - dVar2 * 4294967296.0;
  return CONCAT44(iVar1,(uint)(0.0 < dVar2) * (int)(longlong)dVar2);
}

