// FUN_012ec27c @ 012ec27c size=328 calls_out=1 calls_in=0
// strings: 

void FUN_012ec27c(undefined4 param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 - 4;
  if (*param_2 < 4) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x012ec2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_012ec2a4 + (&DAT_012ec2a4)[iVar1]))();
  return;
}

