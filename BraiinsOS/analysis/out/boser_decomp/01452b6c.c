// FUN_01452b6c @ 01452b6c size=80 calls_out=1 calls_in=1
// strings: 

void FUN_01452b6c(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0144d278(param_1 + 1);
    if (puVar2 != (undefined4 *)&DAT_00533ccd) {
      piVar3 = puVar2 + -2;
      iVar1 = *piVar3;
      *param_1 = &DAT_00533ccd;
      *piVar3 = iVar1 + -1;
      if (iVar1 + -1 != 0) {
        return;
      }
      if (puVar2[1] != 0) {
        thunk_FUN_01be4678(*puVar2);
      }
      if (piVar3 == (int *)&DAT_ffffffff) {
        return;
      }
      iVar1 = puVar2[-1];
      puVar2[-1] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        thunk_FUN_01be4678(piVar3);
        return;
      }
      return;
    }
  }
  return;
}

