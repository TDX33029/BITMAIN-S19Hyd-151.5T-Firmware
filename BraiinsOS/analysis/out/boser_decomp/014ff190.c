// FUN_014ff190 @ 014ff190 size=76 calls_out=3 calls_in=1
// strings: 

void FUN_014ff190(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_014fdb74(iVar1 + 0x150);
  FUN_014fef74(iVar1);
  if (*(int *)(iVar1 + 0x70) != 2) {
    FUN_014fef74();
  }
  if (*(int *)(iVar1 + 0xe0) != 2) {
    FUN_014fef74();
  }
  thunk_FUN_01be4678(iVar1);
  return;
}

