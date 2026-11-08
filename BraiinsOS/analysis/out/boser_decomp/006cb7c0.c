// FUN_006cb7c0 @ 006cb7c0 size=96 calls_out=3 calls_in=1
// strings: 

int FUN_006cb7c0(undefined4 param_1)

{
  int iVar1;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 auStack_110 [256];
  
  local_114 = 1;
  local_118 = 1;
  FUN_01bed4e2(auStack_110,param_1,0x100);
  iVar1 = thunk_FUN_01be5118(0x108);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x108);
  }
  FUN_01bed4e2(iVar1,&local_118,0x108);
  return iVar1;
}

