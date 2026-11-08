// FUN_00844cbc @ 00844cbc size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_00844cbc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 local_60;
  
  local_60 = 0;
  local_70 = param_1;
  uStack_6c = param_2;
  iVar1 = thunk_FUN_016d4a50(0x68);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x68);
  }
  FUN_016dd1aa(iVar1,&local_70,0x68);
  return CONCAT44(&UNK_018609cc,iVar1);
}

