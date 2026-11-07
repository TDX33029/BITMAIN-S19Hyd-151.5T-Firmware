// FUN_01b82680 @ 01b82680 size=132 calls_out=2 calls_in=3
// strings: 

undefined4
FUN_01b82680(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5)

{
  undefined4 uVar1;
  
  if (param_5 < 0xd) {
    if (param_5 < 5) {
      uVar1 = 0xffffffff;
    }
    else {
      FUN_01b82658(param_4,param_5);
      uVar1 = FUN_01b81dec(param_1,param_2);
    }
  }
  else {
    uVar1 = 0xffffffd4;
  }
  return uVar1;
}

