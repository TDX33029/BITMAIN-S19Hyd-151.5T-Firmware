// FUN_0172e7d0 @ 0172e7d0 size=316 calls_out=5 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/ec/ec.c | aws_lc_0_39_0_ec_get_x_coordinate_as_bytes | /aws-lc/crypto/fipsmodule/ec/ec.c | len <= EC_MAX_BYTES

void FUN_0172e7d0(undefined4 *param_1,undefined4 param_2,uint *param_3,uint param_4,
                 undefined4 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined8 uVar4;
  undefined1 auStack_68 [68];
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  uVar1 = FUN_01714f1c(param_1 + 0x46,&PTR_018bc3f4,0);
  if (0x42 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("len <= EC_MAX_BYTES","/aws-lc/crypto/fipsmodule/ec/ec.c",0x41c,
                 "aws_lc_0_39_0_ec_get_x_coordinate_as_bytes");
  }
  if (param_4 < uVar1) {
    FUN_016e9cd0(0xf,0,100,"/aws-lc/crypto/fipsmodule/ec/ec.c",0x41e);
    uVar3 = extraout_r1_00;
  }
  else {
    uVar4 = (**(code **)*param_1)(param_1,param_5,auStack_68,0);
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 0) {
      FUN_0172e7b0(param_1,param_2,param_3,auStack_68);
      uVar2 = 1;
      *param_3 = uVar1;
      uVar3 = extraout_r1;
      goto LAB_0172e864;
    }
  }
  uVar2 = 0;
LAB_0172e864:
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,uVar3,local_24 ^ DAT_018ddaf8,0);
  }
  return;
}

