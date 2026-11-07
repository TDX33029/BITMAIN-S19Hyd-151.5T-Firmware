// FUN_0171e414 @ 0171e414 size=136 calls_out=0 calls_in=7
// strings: 

undefined8 FUN_0171e414(char *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (param_1 != (char *)0x0) {
    if (*param_1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0171e498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 8))(param_2,param_3);
      return uVar1;
    }
    if (*param_1 != '\x02') {
      return 0;
    }
    (**(code **)(param_1 + 8))(param_2);
  }
  return 1;
}

