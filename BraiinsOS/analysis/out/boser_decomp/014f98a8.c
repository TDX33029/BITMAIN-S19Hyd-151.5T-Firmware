// FUN_014f98a8 @ 014f98a8 size=48 calls_out=1 calls_in=1
// strings: 

void FUN_014f98a8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 != 2; iVar2 = iVar2 + 1) {
    puVar1 = (undefined4 *)(param_1 + iVar2 * 8);
    FUN_01443048(*puVar1,puVar1[1]);
  }
  return;
}

