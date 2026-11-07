// FUN_012aa144 @ 012aa144 size=328 calls_out=1 calls_in=0
// strings: 

void FUN_012aa144(undefined4 param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 - 4;
  if (*param_2 < 4) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x012aa168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_012aa16c + (&DAT_012aa16c)[iVar1]))();
  return;
}

