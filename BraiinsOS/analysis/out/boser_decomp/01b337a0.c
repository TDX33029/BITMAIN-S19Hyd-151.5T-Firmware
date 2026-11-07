// FUN_01b337a0 @ 01b337a0 size=152 calls_out=0 calls_in=7
// strings: 

undefined8 FUN_01b337a0(char *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (param_1 == (char *)0x0) {
    return 1;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x01b337c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 8))();
    return uVar1;
  }
  if (*param_1 == '\x02') {
    (**(code **)(param_1 + 8))(param_2,param_3);
    return 1;
  }
  return 0;
}

