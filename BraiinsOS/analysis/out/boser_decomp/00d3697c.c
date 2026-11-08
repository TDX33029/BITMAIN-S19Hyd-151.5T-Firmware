// FUN_00d3697c @ 00d3697c size=56 calls_out=3 calls_in=3
// strings: 

void FUN_00d3697c(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 != 6 || piVar1[1] != 0) {
    FUN_00d36a10(piVar1);
  }
  thunk_FUN_01be4678(piVar1);
  FUN_01139b38(param_1[1],param_1[2]);
  return;
}

