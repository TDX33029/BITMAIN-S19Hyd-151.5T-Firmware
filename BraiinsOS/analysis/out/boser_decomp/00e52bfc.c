// FUN_00e52bfc @ 00e52bfc size=88 calls_out=3 calls_in=1
// strings: 

int FUN_00e52bfc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_d8 [200];
  undefined4 local_10;
  undefined1 local_c;
  
  local_10 = param_1;
  FUN_01bed4e2(auStack_d8,param_2,0x60);
  local_c = 0;
  iVar1 = thunk_FUN_01be5118(0xd0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xd0);
  }
  FUN_01bed4e2(iVar1,auStack_d8,0xd0);
  return iVar1;
}

