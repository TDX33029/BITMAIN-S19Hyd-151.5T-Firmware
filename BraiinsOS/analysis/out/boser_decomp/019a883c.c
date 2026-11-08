// FUN_019a883c @ 019a883c size=116 calls_out=3 calls_in=0
// strings: 

void FUN_019a883c(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)*param_1;
  *(undefined4 *)*param_1 = 0;
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d27c9c);
  }
  iVar1 = thunk_FUN_01be5118(0x400);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x400);
  }
  puVar2[5] = 0x400;
  *(undefined1 *)(puVar2 + 8) = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[6] = iVar1;
  puVar2[7] = 0;
  return;
}

