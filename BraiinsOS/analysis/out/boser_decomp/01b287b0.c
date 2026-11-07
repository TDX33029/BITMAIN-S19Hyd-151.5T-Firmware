// FUN_01b287b0 @ 01b287b0 size=272 calls_out=4 calls_in=3
// strings: crypto_md32_final | /aws-lc/crypto/fipsmodule/md5/../digest/md32_common.h | n < block_size

void FUN_01b287b0(code *param_1,undefined4 param_2,int param_3,uint *param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  uint uVar1;
  
  uVar1 = *param_4;
  if (0x3f < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("n < block_size","/aws-lc/crypto/fipsmodule/md5/../digest/md32_common.h",0x78,
                 "crypto_md32_final");
  }
  *(undefined1 *)(param_3 + uVar1) = 0x80;
  uVar1 = uVar1 + 1;
  if (0x38 < uVar1) {
    FUN_01b257dc(param_3 + uVar1,0,0x40 - uVar1);
    (*param_1)(param_2,param_3,1);
    uVar1 = 0;
  }
  FUN_01b257dc(param_3 + uVar1,0,0x38 - uVar1);
  if (param_7 == 0) {
    FUN_01b28704(param_3 + 0x38,param_6);
    FUN_01b28704(param_3 + 0x3c,param_5);
  }
  else {
    FUN_01b27488(param_3 + 0x38,param_5);
    FUN_01b27488(param_3 + 0x3c,param_6);
  }
  (*param_1)(param_2,param_3,1);
  *param_4 = 0;
  FUN_01b257dc(param_3,0,0x40);
  return;
}

