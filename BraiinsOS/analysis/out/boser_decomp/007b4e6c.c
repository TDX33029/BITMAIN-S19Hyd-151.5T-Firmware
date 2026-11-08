// FUN_007b4e6c @ 007b4e6c size=60 calls_out=1 calls_in=3
// strings: 

void FUN_007b4e6c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 local_20 [16];
  undefined4 local_10;
  
  iVar1 = 0;
  local_10 = 0;
  do {
    local_20[iVar1] = *(undefined1 *)(param_2 + iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  FUN_01bed4e2(param_1,local_20,0x10);
  return;
}

