// FUN_01445710 @ 01445710 size=100 calls_out=1 calls_in=1
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_01445710(undefined1 *param_1,int param_2)

{
  int iVar1;
  undefined1 local_18 [8];
  
  iVar1 = *(int *)(param_2 + 0x408);
  while (iVar1 != 0) {
    FUN_014452fc(local_18,param_2);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(local_18[0]) {
    case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      iVar1 = *(int *)(param_2 + 0x408);
    }
  }
  *param_1 = 4;
  return;
}

