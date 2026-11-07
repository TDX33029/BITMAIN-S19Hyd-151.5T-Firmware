// FUN_013d75dc @ 013d75dc size=80 calls_out=1 calls_in=0
// strings: 

void FUN_013d75dc(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  if (iVar2 == *param_1) {
    FUN_01401514(param_1);
  }
  param_1[2] = iVar2 + 1;
  puVar1 = (undefined4 *)(param_1[1] + iVar2 * 8);
  *puVar1 = 8;
  puVar1[1] = param_2;
  return;
}

