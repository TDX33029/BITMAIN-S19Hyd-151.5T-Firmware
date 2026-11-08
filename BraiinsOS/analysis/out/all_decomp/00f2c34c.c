// FUN_00f2c34c @ 00f2c34c size=160 calls_out=3 calls_in=5
// strings: 

void FUN_00f2c34c(undefined4 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    puVar2 = (undefined1 *)*param_1;
    do {
      *puVar2 = 0;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 1;
    } while (iVar1 != 0);
  }
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  if (param_1[3] != 0) {
    iVar3 = param_1[2];
    iVar1 = param_1[3] * 0x18;
    do {
      FUN_00f33d14(iVar3);
      iVar3 = iVar3 + 0x18;
      iVar1 = iVar1 + -0x18;
    } while (iVar1 != 0);
  }
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    puVar2 = (undefined1 *)*param_1;
    do {
      *puVar2 = 0;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 1;
    } while (iVar1 != 0);
  }
  if (param_1[1] != 0) {
    thunk_FUN_016d3fb4(*param_1);
  }
  FUN_00d98314(param_1[2],param_1[3]);
  return;
}

