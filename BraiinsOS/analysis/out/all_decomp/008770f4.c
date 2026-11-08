// FUN_008770f4 @ 008770f4 size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_008770f4(undefined4 param_1)

{
  int iVar1;
  undefined4 local_d8 [2];
  undefined1 local_d0;
  
  local_d0 = 0;
  local_d8[0] = param_1;
  iVar1 = thunk_FUN_016d4a50(0xd0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xd0);
  }
  FUN_016dd1aa(iVar1,local_d8,0xd0);
  return CONCAT44(&UNK_01861870,iVar1);
}

