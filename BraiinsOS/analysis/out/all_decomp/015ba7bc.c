// FUN_015ba7bc @ 015ba7bc size=44 calls_out=0 calls_in=0
// strings: 

void FUN_015ba7bc(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1[1] + 0xc))(*param_1);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x015ba7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[3] + 0xc))(param_1[2]);
    return;
  }
  return;
}

