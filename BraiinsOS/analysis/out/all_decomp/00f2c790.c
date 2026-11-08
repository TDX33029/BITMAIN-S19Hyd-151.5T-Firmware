// FUN_00f2c790 @ 00f2c790 size=116 calls_out=3 calls_in=5
// strings: 

void FUN_00f2c790(void)

{
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 local_c;
  
  local_10 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x10);
  }
  local_c = 0x10;
  local_10[3] = 0x676e6973;
  local_14 = 0x10;
  local_10[2] = 0x73696d20;
  local_10[1] = 0x73692065;
  *local_10 = 0x756c6176;
  FUN_0157ba88(&local_14);
  return;
}

