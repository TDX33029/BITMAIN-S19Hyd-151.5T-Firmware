// FUN_0084bc78 @ 0084bc78 size=92 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_0084bc78(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_3918 [4];
  undefined4 local_3914;
  undefined1 local_390f;
  
  local_390f = 0;
  local_3914 = param_1;
  iVar1 = thunk_FUN_016d4a50(0x3908);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x3908);
  }
  FUN_016dd1aa(iVar1,auStack_3918,0x3908);
  return CONCAT44(&UNK_01860ccc,iVar1);
}

