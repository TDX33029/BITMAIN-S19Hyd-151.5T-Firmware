// FUN_014222b0 @ 014222b0 size=116 calls_out=2 calls_in=1
// strings: 

void FUN_014222b0(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x014222d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1 + 3,param_1[1],param_1[2]);
    return;
  }
  piVar2 = (int *)param_1[1];
  iVar3 = *piVar2;
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)piVar2[1];
    pcVar1 = (code *)*puVar4;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(iVar3);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_01be4678(iVar3);
    }
  }
  thunk_FUN_01be4678(piVar2);
  return;
}

