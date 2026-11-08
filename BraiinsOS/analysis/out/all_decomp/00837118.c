// FUN_00837118 @ 00837118 size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_00837118(undefined4 param_1)

{
  int iVar1;
  undefined4 local_98 [2];
  undefined1 local_90;
  
  local_90 = 0;
  local_98[0] = param_1;
  iVar1 = thunk_FUN_016d4a50(0x90);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x90);
  }
  FUN_016dd1aa(iVar1,local_98,0x90);
  return CONCAT44(&UNK_01860504,iVar1);
}

