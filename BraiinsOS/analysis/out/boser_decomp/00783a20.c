// FUN_00783a20 @ 00783a20 size=88 calls_out=3 calls_in=1
// strings: 

int FUN_00783a20(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_d0 [196];
  undefined4 local_c;
  
  FUN_01bed4e2(auStack_d0,param_1,0xc4);
  local_c = 0;
  iVar1 = thunk_FUN_01be5118(200);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,200);
  }
  FUN_01bed4e2(iVar1,auStack_d0,200);
  return iVar1;
}

