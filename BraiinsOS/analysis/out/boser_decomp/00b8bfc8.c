// FUN_00b8bfc8 @ 00b8bfc8 size=92 calls_out=2 calls_in=1
// strings: 

void FUN_00b8bfc8(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*param_1 == 0) {
    FUN_00799fb0(param_1 + 1);
    return;
  }
  iVar2 = param_1[4];
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)param_1[5];
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(iVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_01be4678(iVar2);
      return;
    }
  }
  return;
}

