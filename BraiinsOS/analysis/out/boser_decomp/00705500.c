// FUN_00705500 @ 00705500 size=160 calls_out=4 calls_in=0
// strings: 

undefined4
FUN_00705500(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int local_18;
  int local_14;
  
  if (param_3 == 0x20) {
    local_14 = FUN_01b47d00(0x3b5,0,param_2,0x20);
    if (local_14 == 0) {
      return 1;
    }
  }
  else {
    FUN_00703b44(&local_18,param_2,param_3,0x3b5);
    if (local_18 != 0) {
      return 1;
    }
  }
  uVar1 = FUN_00703c54(local_14,param_4,param_5,0,param_6,param_7);
  FUN_01b46fd8(local_14);
  return uVar1;
}

