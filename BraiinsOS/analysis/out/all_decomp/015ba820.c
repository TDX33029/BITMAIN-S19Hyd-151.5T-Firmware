// FUN_015ba820 @ 015ba820 size=56 calls_out=0 calls_in=0
// strings: 

void FUN_015ba820(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1[1] + 0x18))(*param_1,param_2);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x015ba854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[3] + 0x18))(param_1[2],param_2);
    return;
  }
  return;
}

