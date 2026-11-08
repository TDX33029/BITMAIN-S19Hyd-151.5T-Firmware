// FUN_008ac3c0 @ 008ac3c0 size=212 calls_out=2 calls_in=0
// strings: 

void FUN_008ac3c0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[2];
  iVar3 = param_1[3];
  if (*param_1 == 0) {
    puVar1 = (undefined4 *)(iVar2 + 4);
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (puVar1[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar1);
      }
      puVar1 = puVar1 + 3;
    }
  }
  else {
    puVar1 = (undefined4 *)(iVar2 + 4);
    if (*param_1 == 1) {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (puVar1[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar1);
        }
        puVar1 = puVar1 + 3;
      }
    }
    else {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (puVar1[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar1);
        }
        puVar1 = puVar1 + 3;
      }
    }
  }
  if (param_1[1] != 0) {
    thunk_FUN_016d3fb4(iVar2);
  }
  FUN_008e7734(param_1 + 4);
  return;
}

