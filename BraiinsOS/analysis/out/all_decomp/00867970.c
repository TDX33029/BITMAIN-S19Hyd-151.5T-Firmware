// FUN_00867970 @ 00867970 size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_00867970(undefined4 param_1)

{
  int iVar1;
  undefined4 local_60 [21];
  undefined1 local_c;
  
  local_c = 0;
  local_60[0] = param_1;
  iVar1 = thunk_FUN_016d4a50(0x58);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x58);
  }
  FUN_016dd1aa(iVar1,local_60,0x58);
  return CONCAT44(&UNK_01861188,iVar1);
}

