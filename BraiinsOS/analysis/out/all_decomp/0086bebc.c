// FUN_0086bebc @ 0086bebc size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_0086bebc(undefined4 param_1)

{
  int iVar1;
  undefined4 local_50 [2];
  undefined1 local_48;
  
  local_48 = 0;
  local_50[0] = param_1;
  iVar1 = thunk_FUN_016d4a50(0x48);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x48);
  }
  FUN_016dd1aa(iVar1,local_50,0x48);
  return CONCAT44(&UNK_01861248,iVar1);
}

