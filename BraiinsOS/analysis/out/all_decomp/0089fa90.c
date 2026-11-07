// FUN_0089fa90 @ 0089fa90 size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_0089fa90(undefined4 param_1)

{
  int iVar1;
  undefined4 local_a0 [37];
  undefined1 local_a;
  
  local_a = 0;
  local_a0[0] = param_1;
  iVar1 = thunk_FUN_016d4a50(0x98);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x98);
  }
  FUN_016dd1aa(iVar1,local_a0,0x98);
  return CONCAT44(&PTR_FUN_01862c5c,iVar1);
}

