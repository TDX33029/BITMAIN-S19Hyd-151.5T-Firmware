// FUN_0086ccbc @ 0086ccbc size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_0086ccbc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined1 local_ac;
  
  local_ac = 0;
  local_e0 = param_1;
  uStack_dc = param_2;
  iVar1 = thunk_FUN_016d4a50(0xd8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xd8);
  }
  FUN_016dd1aa(iVar1,&local_e0,0xd8);
  return CONCAT44(&UNK_018612a8,iVar1);
}

