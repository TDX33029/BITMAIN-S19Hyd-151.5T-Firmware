// FUN_00e16de0 @ 00e16de0 size=96 calls_out=3 calls_in=1
// strings: 

int FUN_00e16de0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_828 [344];
  undefined4 local_6d0;
  undefined1 local_6b0;
  
  local_6d0 = param_1;
  FUN_01bed4e2(auStack_828,param_2,0x88);
  local_6b0 = 0;
  iVar1 = thunk_FUN_01be5118(0x818);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x818);
  }
  FUN_01bed4e2(iVar1,auStack_828,0x818);
  return iVar1;
}

