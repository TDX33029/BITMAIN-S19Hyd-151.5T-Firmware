// FUN_01599950 @ 01599950 size=76 calls_out=2 calls_in=1
// strings: 

void FUN_01599950(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0144d278(param_1 + 1);
  FUN_013da890(param_1 + 4);
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 == (undefined4 *)&DAT_00533ccd) {
    return;
  }
  piVar2 = puVar1 + -2;
  iVar3 = *piVar2;
  *param_1 = &DAT_00533ccd;
  *piVar2 = iVar3 + -1;
  if (iVar3 + -1 != 0) {
    return;
  }
  if (puVar1[1] != 0) {
    thunk_FUN_01be4678(*puVar1);
  }
  if (puVar1 == (undefined4 *)&DAT_00000007) {
    return;
  }
  iVar3 = puVar1[-1];
  puVar1[-1] = iVar3 + -1;
  if (iVar3 + -1 == 0) {
    thunk_FUN_01be4678(piVar2);
    return;
  }
  return;
}

