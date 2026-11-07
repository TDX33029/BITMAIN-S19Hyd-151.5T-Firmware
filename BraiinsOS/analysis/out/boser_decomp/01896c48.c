// FUN_01896c48 @ 01896c48 size=72 calls_out=2 calls_in=1
// strings: 

bool FUN_01896c48(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (0xc < *(uint *)(param_1 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,*(uint *)(param_1 + 0xc),0xc,&DAT_01d218fc);
  }
  iVar1 = FUN_01bd4ff4(param_2,param_3);
  return iVar1 == -1;
}

