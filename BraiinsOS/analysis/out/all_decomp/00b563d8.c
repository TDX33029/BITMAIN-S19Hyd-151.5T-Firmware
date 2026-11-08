// FUN_00b563d8 @ 00b563d8 size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_00b563d8(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_a0 [136];
  undefined4 local_18;
  undefined1 local_c;
  
  local_c = 0;
  local_18 = param_1;
  iVar1 = thunk_FUN_016d4a50(0x98);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x98);
  }
  FUN_016dd1aa(iVar1,auStack_a0,0x98);
  return CONCAT44(&UNK_01870660,iVar1);
}

