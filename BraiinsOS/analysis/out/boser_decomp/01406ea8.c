// FUN_01406ea8 @ 01406ea8 size=96 calls_out=3 calls_in=2
// strings: 

int FUN_01406ea8(undefined4 param_1)

{
  int iVar1;
  undefined4 local_98 [2];
  undefined1 auStack_90 [128];
  
  FUN_01bed4e2(auStack_90,param_1,0x80);
  local_98[0] = 1;
  iVar1 = thunk_FUN_01be5118(0x88);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x88);
  }
  FUN_01bed4e2(iVar1,local_98,0x88);
  return iVar1;
}

