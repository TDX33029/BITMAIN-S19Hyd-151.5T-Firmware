// FUN_01452af8 @ 01452af8 size=92 calls_out=1 calls_in=1
// strings: 

void FUN_01452af8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (*param_1 == 2) {
    return;
  }
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 != (undefined4 *)0x0) {
    FUN_013da8b0(param_1 + 2);
    if (puVar2 != (undefined4 *)&DAT_00533ccd) {
      piVar3 = puVar2 + -2;
      iVar1 = *piVar3;
      param_1[1] = (int)&DAT_00533ccd;
      *piVar3 = iVar1 + -1;
      if (iVar1 + -1 == 0) {
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
  }
  return;
}

