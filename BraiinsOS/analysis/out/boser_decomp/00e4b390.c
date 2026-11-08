// FUN_00e4b390 @ 00e4b390 size=96 calls_out=3 calls_in=0
// strings: 

int FUN_00e4b390(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_768 [1872];
  undefined4 local_18;
  undefined1 local_14;
  
  local_18 = param_1;
  FUN_01bed4e2(auStack_768,param_2,0x58);
  local_14 = 0;
  iVar1 = thunk_FUN_01be5118(0x758);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x758);
  }
  FUN_01bed4e2(iVar1,auStack_768,0x758);
  return iVar1;
}

