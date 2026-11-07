// FUN_015ba784 @ 015ba784 size=56 calls_out=0 calls_in=0
// strings: 

void FUN_015ba784(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1[1] + 0x10))(*param_1,param_2);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x015ba7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[3] + 0x10))(param_1[2],param_2);
    return;
  }
  return;
}

