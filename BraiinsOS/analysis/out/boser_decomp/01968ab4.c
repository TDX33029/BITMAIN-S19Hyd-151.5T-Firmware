// FUN_01968ab4 @ 01968ab4 size=164 calls_out=1 calls_in=8
// strings: fmt errorany valid JSON value

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_01968ab4(undefined1 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint local_28 [2];
  
  if ((param_4 != 0) &&
     (iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,param_3,param_4), iVar1 != 0)) {
    FUN_019a18a8(local_28,0x28,"fmt errorany valid JSON value",9);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(local_28[0] & 0xff) {
    case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *param_1 = 4;
  return;
}

