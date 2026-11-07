// FUN_013f3ab8 @ 013f3ab8 size=72 calls_out=2 calls_in=2
// strings: 

void FUN_013f3ab8(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  for (iVar2 = 0; param_2 != iVar2; iVar2 = iVar2 + 1) {
    puVar1 = (undefined4 *)(param_1 + iVar2 * 8);
    FUN_013f3cc8(*puVar1,puVar1[1]);
  }
  if (param_2 == 0) {
    return;
  }
  thunk_FUN_01be4678(param_1);
  return;
}

