// FUN_016ea744 @ 016ea744 size=324 calls_out=2 calls_in=0
// strings: 

void FUN_016ea744(uint *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x016ea768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_016ea76c + (&DAT_016ea76c)[iVar1]))();
  return;
}

