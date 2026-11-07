// FUN_0136e7e8 @ 0136e7e8 size=88 calls_out=2 calls_in=8
// strings: 

undefined4 FUN_0136e7e8(byte *param_1)

{
  undefined4 uVar1;
  byte *local_14;
  byte **local_10;
  code *local_c;
  
  local_14 = param_1;
  if (1 < *param_1) {
    local_10 = &local_14;
    local_c = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_005733f0,&local_10,&DAT_01892790);
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  thunk_FUN_016d3fb4();
  return uVar1;
}

