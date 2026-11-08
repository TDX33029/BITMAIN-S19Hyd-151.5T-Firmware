// FUN_016de840 @ 016de840 size=76 calls_out=2 calls_in=0
// strings: 

void FUN_016de840(int *param_1,undefined1 param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  if (iVar2 == *param_1) {
    FUN_016f5378(param_1);
  }
  param_1[2] = iVar2 + 1;
  puVar1 = (undefined1 *)(param_1[1] + iVar2 * 2);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  FUN_016f6050(param_1);
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}

