// FUN_0172eaf0 @ 0172eaf0 size=304 calls_out=8 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ec/felem.c | aws_lc_0_39_0_ec_bignum_to_felem | /aws-lc/crypto/fipsmodule/ec/felem.c | sizeof(bytes) >= len

void FUN_0172eaf0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint extraout_r1;
  longlong lVar3;
  undefined1 auStack_68 [68];
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  uVar1 = FUN_01714f1c(param_1 + 0x118,param_2,&PTR_018bc3f4,0);
  if (0x42 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("sizeof(bytes) >= len","/aws-lc/crypto/fipsmodule/ec/felem.c",0x17,
                 "aws_lc_0_39_0_ec_bignum_to_felem");
  }
  iVar2 = FUN_0171462c(param_3);
  if (((iVar2 == 0) && (iVar2 = FUN_01715760(param_3,param_1 + 0x118), iVar2 < 0)) &&
     (iVar2 = FUN_01715614(auStack_68,uVar1,param_3), iVar2 != 0)) {
    lVar3 = FUN_0172ead0(param_1,param_2,auStack_68,uVar1);
  }
  else {
    FUN_016e9cd0(0xf,0,0x65,"/aws-lc/crypto/fipsmodule/ec/felem.c",0x1a);
    lVar3 = (ulonglong)extraout_r1 << 0x20;
  }
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)lVar3,(int)((ulonglong)lVar3 >> 0x20),local_24 ^ DAT_018ddaf8,0);
  }
  return;
}

