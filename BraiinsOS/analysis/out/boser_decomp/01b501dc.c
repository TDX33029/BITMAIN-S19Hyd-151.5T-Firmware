// FUN_01b501dc @ 01b501dc size=280 calls_out=4 calls_in=1
// strings: aws_lc_0_39_0_CRYPTO_POLYVAL_update_blocks | /aws-lc/crypto/fipsmodule/modes/polyval.c | (in_len & 15) == 0

undefined8 FUN_01b501dc(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_230 [516];
  int local_2c;
  
  local_2c = DAT_01d53560;
  if ((param_3 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("(in_len & 15) == 0","/aws-lc/crypto/fipsmodule/modes/polyval.c",0x37,
                 "aws_lc_0_39_0_CRYPTO_POLYVAL_update_blocks");
  }
  while (param_3 != 0) {
    uVar1 = param_3;
    if (0x1ff < param_3) {
      uVar1 = 0x200;
    }
    FUN_01b26974(auStack_230,param_2,uVar1);
    param_2 = param_2 + uVar1;
    param_3 = param_3 - uVar1;
    for (uVar2 = 0; uVar2 != uVar1 >> 4; uVar2 = uVar2 + 1) {
      FUN_01b28624();
    }
    (**(code **)(param_1 + 0x114))(param_1,param_1 + 0x10,auStack_230,uVar1);
  }
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

