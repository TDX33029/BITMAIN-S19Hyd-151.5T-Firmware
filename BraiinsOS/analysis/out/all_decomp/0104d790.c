// FUN_0104d790 @ 0104d790 size=252 calls_out=5 calls_in=0
// strings: 

void FUN_0104d790(undefined4 param_1)

{
  undefined4 local_a0 [18];
  short local_58 [2];
  undefined4 local_54;
  
  FUN_0103a4b0(local_58,"ip6",3);
  if (local_58[0] == 2) {
    local_a0[0] = local_54;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,local_a0,&DAT_01883718,&DAT_018836d8);
  }
  FUN_016dd1aa(local_a0,local_58,0x44);
  DataMemoryBarrier(0xb);
  if (DAT_018d81c4 != 2) {
    FUN_0105b4e0(&DAT_018d81c4,&DAT_018d81c4);
  }
  FUN_0103b7d4(local_58,local_a0,&DAT_018d81c8);
  if (local_58[0] == 2) {
    local_a0[0] = local_54;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,local_a0,&DAT_01883718,&DAT_018836e8);
  }
  FUN_016dd1aa(param_1,local_58,0x44);
  return;
}

