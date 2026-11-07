// FUN_00e7c42c @ 00e7c42c size=76 calls_out=0 calls_in=1
// strings: 

void FUN_00e7c42c(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar2 = param_1[2];
  puVar3 = (undefined1 *)param_1[1];
  if (iVar2 != 0) {
    puVar1 = puVar3;
    do {
      *puVar1 = 0;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + 1;
    } while (iVar2 != 0);
  }
  iVar2 = *param_1;
  param_1[2] = 0;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return;
}

