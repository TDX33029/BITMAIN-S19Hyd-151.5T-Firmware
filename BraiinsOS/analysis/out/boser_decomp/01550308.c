// FUN_01550308 @ 01550308 size=96 calls_out=3 calls_in=1
// strings: 

int FUN_01550308(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 auStack_b8 [176];
  
  local_bc = 1;
  local_c0 = 1;
  FUN_01bed4e2(auStack_b8,param_1,0xb0);
  iVar1 = thunk_FUN_01be5118(0xb8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xb8);
  }
  FUN_01bed4e2(iVar1,&local_c0,0xb8);
  return iVar1;
}

