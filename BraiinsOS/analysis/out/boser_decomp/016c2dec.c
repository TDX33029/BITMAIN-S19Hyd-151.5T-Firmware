// FUN_016c2dec @ 016c2dec size=88 calls_out=2 calls_in=25
// strings: 

undefined4 FUN_016c2dec(byte *param_1)

{
  undefined4 uVar1;
  byte *local_14;
  byte **local_10;
  code *local_c;
  
  local_14 = param_1;
  if (1 < *param_1) {
    local_10 = &local_14;
    local_c = FUN_016cd664;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0059f308,&local_10,&DAT_01d09270);
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  thunk_FUN_01be4678();
  return uVar1;
}

