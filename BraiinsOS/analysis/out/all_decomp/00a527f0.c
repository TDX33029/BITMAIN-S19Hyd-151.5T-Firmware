// FUN_00a527f0 @ 00a527f0 size=84 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_00a527f0(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c90 [5];
  undefined1 local_c7c;
  
  local_c7c = 0;
  local_c90[0] = param_1;
  iVar1 = thunk_FUN_016d4a50(0xc80);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xc80);
  }
  FUN_016dd1aa(iVar1,local_c90,0xc80);
  return CONCAT44(&UNK_0186d118,iVar1);
}

