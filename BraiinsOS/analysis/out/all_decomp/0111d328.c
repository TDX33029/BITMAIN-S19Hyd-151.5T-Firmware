// FUN_0111d328 @ 0111d328 size=96 calls_out=0 calls_in=1
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_0111d328(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(param_2 + 4);
  if (puVar2 != *(undefined1 **)(param_2 + 0xc)) {
    uVar1 = *puVar2;
    *(undefined1 **)(param_2 + 4) = puVar2 + 0x18;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(uVar1) {
    case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *param_1 = 6;
  return;
}

