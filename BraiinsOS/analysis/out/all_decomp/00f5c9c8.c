// FUN_00f5c9c8 @ 00f5c9c8 size=84 calls_out=1 calls_in=0
// strings: 

void FUN_00f5c9c8(undefined4 *param_1,undefined4 *param_2)

{
  uint in_fpscr;
  double local_20;
  undefined1 *local_18;
  undefined1 *local_14;
  
  local_18 = (undefined1 *)&local_20;
  local_20 = (double)VectorUnsignedToFloat(*param_1,(byte)(in_fpscr >> 0x16) & 3);
  local_20 = local_20 / 1000000.0;
  local_14 = &LAB_00fb1f30;
  FUN_00fa948c(*param_2,param_2[1],&DAT_0035c508,&local_18);
  return;
}

