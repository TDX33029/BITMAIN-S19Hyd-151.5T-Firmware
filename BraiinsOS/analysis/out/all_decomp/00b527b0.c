// FUN_00b527b0 @ 00b527b0 size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_00b527b0(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_78 [100];
  undefined4 local_14;
  undefined1 local_f;
  
  local_f = 0;
  local_14 = param_1;
  iVar1 = thunk_FUN_016d4a50(0x70);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x70);
  }
  FUN_016dd1aa(iVar1,auStack_78,0x70);
  return CONCAT44(&UNK_01870540,iVar1);
}

