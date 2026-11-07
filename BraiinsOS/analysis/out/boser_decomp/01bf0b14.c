// FUN_01bf0b14 @ 01bf0b14 size=76 calls_out=1 calls_in=1
// strings: 

undefined8
FUN_01bf0b14(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_01bf0680(&local_20,param_2,param_1,param_2,param_3,param_4);
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = local_18;
    param_5[1] = local_14;
  }
  return local_20;
}

