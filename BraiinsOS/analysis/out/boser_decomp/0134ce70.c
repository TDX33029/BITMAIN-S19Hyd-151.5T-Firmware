// FUN_0134ce70 @ 0134ce70 size=40 calls_out=0 calls_in=1
// strings: 

void FUN_0134ce70(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_2 + 0x20) - 1;
  if (*(byte *)(param_2 + 0x20) == 0 || iVar1 == 0) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0134ce94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_0134ce98 + (&DAT_0134ce98)[iVar1]))();
  return;
}

