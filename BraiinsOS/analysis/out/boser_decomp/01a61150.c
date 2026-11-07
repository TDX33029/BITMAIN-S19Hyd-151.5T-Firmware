// FUN_01a61150 @ 01a61150 size=108 calls_out=1 calls_in=1
// strings: 

void FUN_01a61150(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_1 + 0x5c);
  param_2 = param_2 * 0xc0;
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    if (puVar2[-0x17] == 1) break;
    param_2 = param_2 + -0xc0;
    puVar2 = puVar2 + 0x30;
  }
  FUN_01a55128(puVar2 + 0xb);
  FUN_01a55128(puVar2 + 0x11);
  iVar1 = 6;
  if (1 < *puVar2) {
    iVar1 = *puVar2 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x01a611a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01a611a8 + *(int *)(&DAT_01a611a8 + iVar1 * 4)))(puVar2 + -0x15);
  return;
}

