// FUN_0082f95c @ 0082f95c size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_0082f95c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined1 local_18c;
  
  local_18c = 0;
  local_1a8 = param_1;
  uStack_1a4 = param_2;
  iVar1 = thunk_FUN_016d4a50(0x198);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x198);
  }
  FUN_016dd1aa(iVar1,&local_1a8,0x198);
  return CONCAT44(&UNK_018600f4,iVar1);
}

