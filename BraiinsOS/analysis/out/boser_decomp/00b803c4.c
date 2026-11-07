// FUN_00b803c4 @ 00b803c4 size=76 calls_out=3 calls_in=2
// strings: 

int FUN_00b803c4(undefined4 param_1)

{
  int iVar1;
  undefined4 local_2f0 [183];
  undefined1 local_14;
  
  local_14 = 0;
  local_2f0[0] = param_1;
  iVar1 = thunk_FUN_01be5118(0x2e0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x2e0);
  }
  FUN_01bed4e2(iVar1,local_2f0,0x2e0);
  return iVar1;
}

