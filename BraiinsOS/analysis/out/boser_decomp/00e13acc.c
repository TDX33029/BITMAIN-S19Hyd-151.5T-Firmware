// FUN_00e13acc @ 00e13acc size=88 calls_out=3 calls_in=1
// strings: 

int FUN_00e13acc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_238 [336];
  undefined4 local_e8;
  undefined1 local_cc;
  
  local_e8 = param_1;
  FUN_01bed4e2(auStack_238,param_2,0x88);
  local_cc = 0;
  iVar1 = thunk_FUN_01be5118(0x228);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x228);
  }
  FUN_01bed4e2(iVar1,auStack_238,0x228);
  return iVar1;
}

