// FUN_01b3eb74 @ 01b3eb74 size=304 calls_out=8 calls_in=1
// strings: aws_lc_0_39_0_ec_bignum_to_felem | /aws-lc/crypto/fipsmodule/ec/felem.c | sizeof(bytes) >= len | /aws-lc/crypto/fipsmodule/ec/felem.c

void FUN_01b3eb74(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint extraout_r1;
  longlong lVar3;
  undefined1 auStack_68 [68];
  uint local_24;
  
  local_24 = DAT_01d53560;
  uVar1 = FUN_01b2b938(param_1 + 0x118,param_2,&PTR_01d3b2b0,0);
  if (0x42 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("sizeof(bytes) >= len","/aws-lc/crypto/fipsmodule/ec/felem.c",0x17,
                 "aws_lc_0_39_0_ec_bignum_to_felem");
  }
  iVar2 = FUN_01b2b230(param_3);
  if (((iVar2 == 0) && (iVar2 = FUN_01b2be38(param_3,param_1 + 0x118), iVar2 < 0)) &&
     (iVar2 = FUN_01b2bdb4(auStack_68,uVar1,param_3), iVar2 != 0)) {
    lVar3 = FUN_01b3eb54(param_1,param_2,auStack_68,uVar1);
  }
  else {
    FUN_01b053d4(0xf,0,0x65,"/aws-lc/crypto/fipsmodule/ec/felem.c",0x1a);
    lVar3 = (ulonglong)extraout_r1 << 0x20;
  }
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)lVar3,(int)((ulonglong)lVar3 >> 0x20),local_24 ^ DAT_01d53560,0);
  }
  return;
}

