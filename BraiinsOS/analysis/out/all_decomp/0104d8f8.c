// FUN_0104d8f8 @ 0104d8f8 size=116 calls_out=3 calls_in=0
// strings: arpa.local.onion.

void FUN_0104d8f8(undefined4 param_1)

{
  short local_50 [2];
  undefined4 local_4c;
  undefined4 local_c;
  
  FUN_0103a4b0(local_50,"arpa.local.onion.",5);
  if (local_50[0] == 2) {
    local_c = local_4c;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_c,&DAT_01883718,&DAT_01883698);
  }
  FUN_016dd1aa(param_1,local_50,0x44);
  return;
}

