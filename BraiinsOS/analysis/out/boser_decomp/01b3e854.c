// FUN_01b3e854 @ 01b3e854 size=304 calls_out=5 calls_in=2
// strings: aws_lc_0_39_0_ec_get_x_coordinate_as_bytes | /aws-lc/crypto/fipsmodule/ec/ec.c | len <= EC_MAX_BYTES | /aws-lc/crypto/fipsmodule/ec/ec.c

void FUN_01b3e854(undefined4 *param_1,undefined4 param_2,uint *param_3,uint param_4,
                 undefined4 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined4 extraout_r1_00;
  undefined8 uVar4;
  undefined1 auStack_70 [68];
  uint local_2c;
  
  local_2c = DAT_01d53560;
  uVar1 = FUN_01b2b938(param_1 + 0x46,param_2,&PTR_01d3b2b0,0);
  if (0x42 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("len <= EC_MAX_BYTES","/aws-lc/crypto/fipsmodule/ec/ec.c",0x41c,
                 "aws_lc_0_39_0_ec_get_x_coordinate_as_bytes");
  }
  if (param_4 < uVar1) {
    FUN_01b053d4(0xf,0,100,"/aws-lc/crypto/fipsmodule/ec/ec.c",0x41e);
    uVar3 = extraout_r1;
  }
  else {
    uVar4 = (**(code **)*param_1)(param_1,param_5,auStack_70,0);
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 0) {
      FUN_01b3e834(param_1,param_2,param_3,auStack_70);
      uVar2 = 1;
      *param_3 = uVar1;
      uVar3 = extraout_r1_00;
      goto LAB_01b3e8fc;
    }
  }
  uVar2 = 0;
LAB_01b3e8fc:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar2,uVar3,local_2c ^ DAT_01d53560,0);
  }
  return;
}

