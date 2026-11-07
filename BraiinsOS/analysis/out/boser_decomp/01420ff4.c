// FUN_01420ff4 @ 01420ff4 size=160 calls_out=3 calls_in=1
// strings: 

void FUN_01420ff4(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  if (*param_1 == 0) {
    return;
  }
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    if (param_1[3] != 0) {
      (**(code **)(param_1[3] + 0x10))(param_1 + 6,param_1[4],param_1[5]);
      iVar1 = param_1[1];
    }
    FUN_01443048(iVar1,param_1[2]);
    return;
  }
  piVar3 = (int *)param_1[2];
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    puVar4 = (undefined4 *)piVar3[1];
    pcVar2 = (code *)*puVar4;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(iVar1);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_01be4678(iVar1);
    }
  }
  thunk_FUN_01be4678(piVar3);
  return;
}

