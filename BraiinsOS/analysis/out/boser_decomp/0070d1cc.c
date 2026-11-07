// FUN_0070d1cc @ 0070d1cc size=116 calls_out=4 calls_in=0
// strings: 

void FUN_0070d1cc(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 3 && param_1[1] == 0) {
                    /* WARNING: Could not recover jumptable at 0x0070d1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[2] + 0x10))(param_1 + 5,param_1[3],param_1[4]);
    return;
  }
  if (param_1[7] != 0) {
    thunk_FUN_01be4678(param_1[6]);
  }
  iVar1 = param_1[9];
  FUN_01410ec8(iVar1,param_1[10]);
  FUN_0134aee0(param_1[8],iVar1,4,0x34);
  FUN_008e0ddc(param_1 + 0xb);
  return;
}

