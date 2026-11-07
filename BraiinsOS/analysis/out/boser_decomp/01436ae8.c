// FUN_01436ae8 @ 01436ae8 size=196 calls_out=4 calls_in=1
// strings: 

void FUN_01436ae8(int *param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
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
  piVar2 = (int *)param_1[2];
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    puVar4 = (undefined4 *)piVar2[1];
    pcVar3 = (code *)*puVar4;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(iVar1);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_01be4678(iVar1);
    }
  }
  if (*(char *)((int)piVar2 + 0x15) != '\x02') {
    FUN_014323b0(piVar2 + 2);
  }
  thunk_FUN_01be4678(piVar2);
  return;
}

