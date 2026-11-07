// FUN_016df9a8 @ 016df9a8 size=76 calls_out=2 calls_in=0
// strings: 

void FUN_016df9a8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  if (iVar2 == *param_1) {
    FUN_015f5ab8(param_1);
  }
  param_1[2] = iVar2 + 1;
  puVar1 = (undefined4 *)(param_1[1] + iVar2 * 8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  FUN_016f5e30(param_1);
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}

