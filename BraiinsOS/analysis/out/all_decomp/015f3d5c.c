// FUN_015f3d5c @ 015f3d5c size=160 calls_out=2 calls_in=0
// strings: 

void FUN_015f3d5c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int local_20 [2];
  
  local_20[1] = 4;
  local_20[0] = 0;
  iVar1 = FUN_016d7828(param_2,1,4,local_20,local_20 + 1);
  if (iVar1 == -1) {
    puVar2 = (undefined4 *)FUN_016d2bc8();
    param_1[2] = *puVar2;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 1;
    return;
  }
  if (local_20[0] == 0) {
    *(undefined1 *)(param_1 + 1) = 4;
    *param_1 = 0;
    return;
  }
  param_1[2] = local_20[0];
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}

