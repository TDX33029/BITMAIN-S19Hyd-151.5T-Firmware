// FUN_00a21554 @ 00a21554 size=108 calls_out=2 calls_in=1
// strings: 

void FUN_00a21554(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      return;
    }
    iVar2 = param_1[2];
    puVar3 = (undefined4 *)param_1[3];
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(iVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_01be4678(iVar2);
      return;
    }
  }
  else if (param_1[1] != -0x80000000) {
    FUN_019bb7e0(param_1[1],param_1[2]);
    return;
  }
  return;
}

