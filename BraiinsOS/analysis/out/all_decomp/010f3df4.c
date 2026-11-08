// FUN_010f3df4 @ 010f3df4 size=88 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_010f3df4(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 auStack_60 [20];
  undefined4 local_4c;
  undefined1 local_47;
  undefined1 local_46;
  
  local_47 = 0;
  local_4c = param_1;
  local_46 = param_2;
  iVar1 = thunk_FUN_016d4a50(0x58);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x58);
  }
  FUN_016dd1aa(iVar1,auStack_60,0x58);
  return CONCAT44(&UNK_018862b8,iVar1);
}

