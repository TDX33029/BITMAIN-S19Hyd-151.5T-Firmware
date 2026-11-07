// FUN_01783d7c @ 01783d7c size=104 calls_out=2 calls_in=6
// strings: 

void FUN_01783d7c(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01783da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1 + 3,param_1[1],param_1[2]);
    return;
  }
  iVar2 = param_1[1];
  puVar3 = (undefined4 *)param_1[2];
  pcVar1 = (code *)*puVar3;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(iVar2);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_01be4678(iVar2);
  }
  FUN_00b7ae3c(param_1[3]);
  return;
}

