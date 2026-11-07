// FUN_01b48c68 @ 01b48c68 size=76 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01b48c68(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = 1;
  *(code **)(param_1 + 8) = FUN_01b33848;
  *(undefined4 *)(param_1 + 4) = param_2;
  return 0;
}

