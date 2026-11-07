// FUN_01b2b030 @ 01b2b030 size=108 calls_out=1 calls_in=5
// strings: 

undefined8
FUN_01b2b030(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  FUN_01b2af90(param_1 + 0x14,param_3,param_2);
  FUN_01b2af90(param_1,param_4,param_2);
  *(undefined4 *)(param_1 + 0x28) = param_5;
  *(undefined4 *)(param_1 + 0x2c) = param_6;
  return 0;
}

