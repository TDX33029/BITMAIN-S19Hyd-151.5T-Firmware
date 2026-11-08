// FUN_00c7594c @ 00c7594c size=128 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_00c7594c(int param_1)

{
  int iVar1;
  undefined1 auStack_138 [288];
  
  FUN_016dd1aa(auStack_138,param_1 + 0x20,0x120);
  iVar1 = thunk_FUN_016d4a50(0x120);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x120);
  }
  FUN_016dd1aa(iVar1,param_1 + 0x20,0x120);
  if (*(int *)(param_1 + 4) == 2) {
    FUN_00f2d10c(param_1 + 8);
  }
  thunk_FUN_016d3fb4(param_1);
  return CONCAT44(&UNK_018749f0,iVar1);
}

