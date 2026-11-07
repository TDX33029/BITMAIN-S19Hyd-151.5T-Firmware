// FUN_01282410 @ 01282410 size=84 calls_out=1 calls_in=0
// strings: 

void FUN_01282410(undefined4 *param_1,undefined4 *param_2)

{
  uint in_fpscr;
  double local_20;
  undefined1 *local_18;
  code *local_14;
  
  local_18 = (undefined1 *)&local_20;
  local_20 = (double)VectorUnsignedToFloat(*param_1,(byte)(in_fpscr >> 0x16) & 3);
  local_20 = local_20 / 1000000.0;
  local_14 = FUN_013025ec;
  FUN_012fa178(*param_2,param_2[1],&DAT_00404756,&local_18);
  return;
}

