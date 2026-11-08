// FUN_0143c404 @ 0143c404 size=84 calls_out=1 calls_in=2
// strings: 

void FUN_0143c404(int *param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 *puVar4;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (param_1[2] != 0) {
      (**(code **)(param_1[2] + 0x10))(param_1 + 5,param_1[3],param_1[4]);
      iVar1 = *param_1;
    }
    FUN_01443048(iVar1,param_1[1]);
    return;
  }
  piVar2 = (int *)param_1[1];
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
  FUN_017ccbf4(piVar2 + 2);
  thunk_FUN_01be4678(piVar2);
  return;
}

