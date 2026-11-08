// FUN_0086c718 @ 0086c718 size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_0086c718(undefined4 param_1)

{
  int iVar1;
  undefined4 local_98 [2];
  undefined1 local_90;
  
  local_90 = 0;
  local_98[0] = param_1;
  iVar1 = thunk_FUN_016d4a50(0x8c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x8c);
  }
  FUN_016dd1aa(iVar1,local_98,0x8c);
  return CONCAT44(&UNK_01861288,iVar1);
}

