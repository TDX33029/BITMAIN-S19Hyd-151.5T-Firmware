// FUN_016d87a0 @ 016d87a0 size=80 calls_out=1 calls_in=0
// strings: 

void FUN_016d87a0(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  if (iVar2 == *param_1) {
    FUN_015f5ab8(param_1);
  }
  param_1[2] = iVar2 + 1;
  puVar1 = (undefined4 *)(param_1[1] + iVar2 * 8);
  *puVar1 = 8;
  puVar1[1] = param_2;
  return;
}

