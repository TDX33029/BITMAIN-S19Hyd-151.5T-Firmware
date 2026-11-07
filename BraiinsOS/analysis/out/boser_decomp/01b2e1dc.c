// FUN_01b2e1dc @ 01b2e1dc size=92 calls_out=0 calls_in=5
// strings: 

bool FUN_01b2e1dc(undefined4 *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1[1] != 0) {
    param_2 = param_2 ^ *(uint *)*param_1;
    for (iVar1 = 1; iVar1 < (int)param_1[1]; iVar1 = iVar1 + 1) {
      param_2 = param_2 | ((uint *)*param_1)[iVar1];
    }
  }
  return param_2 == 0;
}

