// FUN_00e7c3e8 @ 00e7c3e8 size=68 calls_out=0 calls_in=1
// strings: 

void FUN_00e7c3e8(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)param_1[1];
  iVar2 = param_1[2];
  if (iVar2 != 0) {
    do {
      *puVar1 = 0;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + 1;
    } while (iVar2 != 0);
    puVar1 = (undefined1 *)param_1[1];
  }
  iVar2 = *param_1;
  param_1[2] = 0;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  return;
}

