// FUN_010ef19c @ 010ef19c size=88 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_010ef19c(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_53;
  
  local_54 = 0;
  local_58 = param_1;
  local_53 = param_2;
  iVar1 = thunk_FUN_016d4a50(0x4c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x4c);
  }
  FUN_016dd1aa(iVar1,&local_58,0x4c);
  return CONCAT44(&UNK_0188609c,iVar1);
}

