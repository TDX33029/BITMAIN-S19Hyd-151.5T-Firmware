// FUN_0086fad4 @ 0086fad4 size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_0086fad4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined1 local_ac;
  
  local_ac = 0;
  local_c8 = param_1;
  uStack_c4 = param_2;
  iVar1 = thunk_FUN_016d4a50(0xc0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xc0);
  }
  FUN_016dd1aa(iVar1,&local_c8,0xc0);
  return CONCAT44(&UNK_018613a8,iVar1);
}

