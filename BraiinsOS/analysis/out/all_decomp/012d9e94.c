// FUN_012d9e94 @ 012d9e94 size=328 calls_out=1 calls_in=0
// strings: 

void FUN_012d9e94(undefined4 param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 - 4;
  if (*param_2 < 4) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x012d9eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_012d9ebc + (&DAT_012d9ebc)[iVar1]))();
  return;
}

