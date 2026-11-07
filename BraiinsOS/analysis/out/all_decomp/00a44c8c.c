// FUN_00a44c8c @ 00a44c8c size=124 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_00a44c8c(int param_1)

{
  int iVar1;
  undefined1 auStack_130 [280];
  
  FUN_016dd1aa(auStack_130,param_1 + 0x20,0x118);
  iVar1 = thunk_FUN_016d4a50(0x118);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x118);
  }
  FUN_016dd1aa(iVar1,param_1 + 0x20,0x118);
  if (*(int *)(param_1 + 4) == 2) {
    FUN_00a954c0(param_1 + 8);
  }
  thunk_FUN_016d3fb4(param_1);
  return CONCAT44(&UNK_0186cf14,iVar1);
}

