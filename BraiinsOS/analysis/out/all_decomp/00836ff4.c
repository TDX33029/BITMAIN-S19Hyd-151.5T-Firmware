// FUN_00836ff4 @ 00836ff4 size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_00836ff4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined1 local_ac;
  
  local_ac = 0;
  local_c0 = param_1;
  uStack_bc = param_2;
  iVar1 = thunk_FUN_016d4a50(0xb8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xb8);
  }
  FUN_016dd1aa(iVar1,&local_c0,0xb8);
  return CONCAT44(&UNK_018604a4,iVar1);
}

