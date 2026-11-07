// FUN_00a44878 @ 00a44878 size=132 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_00a44878(int param_1)

{
  int iVar1;
  undefined1 auStack_430 [1048];
  
  FUN_016dd1aa(auStack_430,param_1 + 0x20,0x418);
  iVar1 = thunk_FUN_016d4a50(0x418);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x418);
  }
  FUN_016dd1aa(iVar1,param_1 + 0x20,0x418);
  if (*(int *)(param_1 + 4) == 2) {
    FUN_00a954c0(param_1 + 8);
  }
  thunk_FUN_016d3fb4(param_1);
  return CONCAT44(&UNK_0186ce9c,iVar1);
}

