// FUN_016e1f3c @ 016e1f3c size=84 calls_out=0 calls_in=8
// strings: 

bool FUN_016e1f3c(undefined4 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    puVar1 = (undefined1 *)*param_1;
    param_1[1] = iVar2 + -1;
    *param_1 = puVar1 + 1;
    *param_2 = *puVar1;
  }
  return iVar2 != 0;
}

