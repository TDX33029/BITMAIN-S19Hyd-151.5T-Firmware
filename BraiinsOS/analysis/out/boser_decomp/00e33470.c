// FUN_00e33470 @ 00e33470 size=88 calls_out=3 calls_in=1
// strings: 

int FUN_00e33470(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_d8 [184];
  undefined4 local_20;
  undefined1 local_10;
  
  local_20 = param_1;
  FUN_01bed4e2(auStack_d8,param_2,0x58);
  local_10 = 0;
  iVar1 = thunk_FUN_01be5118(0xd0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xd0);
  }
  FUN_01bed4e2(iVar1,auStack_d8,0xd0);
  return iVar1;
}

