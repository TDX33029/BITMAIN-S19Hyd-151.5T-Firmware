// FUN_01ad3af4 @ 01ad3af4 size=184 calls_out=5 calls_in=0
// strings: 

void FUN_01ad3af4(undefined4 *param_1)

{
  undefined4 extraout_r2;
  undefined4 uVar1;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 uVar2;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  
  FUN_0134bd64(*param_1,param_1[1]);
  uVar1 = extraout_r2_00;
  uVar2 = extraout_r3_00;
  if (param_1[0x26c] != -0x80000000) {
    FUN_0134bd64(param_1[0x26c],param_1[0x26d],extraout_r2_00,extraout_r3_00,unaff_r4);
    uVar1 = extraout_r2;
    uVar2 = extraout_r3;
  }
  if (param_1[0x26f] != -0x80000000) {
    FUN_0134bd64(param_1[0x26f],param_1[0x270],uVar1,uVar2,unaff_r4);
  }
  FUN_00da99c8(param_1 + 0x272);
  FUN_0096c2c4(param_1 + 0x275);
  FUN_01ad2b00(param_1 + 0xc);
  FUN_01ad2b00(param_1 + 0x58);
  FUN_01ad2b00(param_1 + 0xa4);
  FUN_01ad2b00(param_1 + 0xf0);
  FUN_01ad2b00(param_1 + 0x13c);
  FUN_01ad2b00(param_1 + 0x188);
  FUN_01ad2b00(param_1 + 0x1d4);
  FUN_01ad2b00(param_1 + 0x220);
  if (param_1[4] == 0) {
    return;
  }
  FUN_01ada488(param_1 + 4);
  return;
}

