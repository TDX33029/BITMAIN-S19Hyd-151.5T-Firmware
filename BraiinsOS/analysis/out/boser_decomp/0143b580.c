// FUN_0143b580 @ 0143b580 size=152 calls_out=2 calls_in=0
// strings: 

void FUN_0143b580(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  int *local_24;
  undefined8 local_20;
  undefined8 *local_18;
  undefined2 *local_14;
  int **local_10;
  undefined1 *local_c;
  
  local_24 = (int *)*param_1;
  if (*local_24 == 0) {
    uVar1 = FUN_0143b624();
                    /* WARNING: Could not recover jumptable at 0x0143b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0xc))(*param_2,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
    return;
  }
  local_20 = FUN_0143b624();
  local_c = &LAB_019cf5b8;
  local_10 = &local_24;
  local_18 = &local_20;
  local_14 = &DAT_0132b6a0;
  FUN_012fa178(*param_2,param_2[1],&DAT_00587911,&local_18);
  return;
}

