// FUN_0086b72c @ 0086b72c size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_0086b72c(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_70 [96];
  undefined4 local_10;
  undefined1 local_c;
  
  local_c = 0;
  local_10 = param_1;
  iVar1 = thunk_FUN_016d4a50(0x68);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x68);
  }
  FUN_016dd1aa(iVar1,auStack_70,0x68);
  return CONCAT44(&UNK_01861208,iVar1);
}

