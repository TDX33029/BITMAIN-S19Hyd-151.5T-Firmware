// FUN_01098c24 @ 01098c24 size=124 calls_out=3 calls_in=0
// strings: localhost.

void FUN_01098c24(undefined2 *param_1)

{
  short local_50 [2];
  undefined4 local_4c;
  undefined4 local_c;
  
  FUN_01080134(local_50,"localhost.",10);
  if (local_50[0] == 2) {
    local_c = local_4c;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_c,&DAT_01884114,&DAT_01884104);
  }
  FUN_016dd1aa(param_1 + 2,local_50,0x44);
  *param_1 = 0x11;
  return;
}

