// FUN_012d3d48 @ 012d3d48 size=168 calls_out=1 calls_in=0
// strings: 

void FUN_012d3d48(uint *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x012d3d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_012d3d68 + (&DAT_012d3d68)[iVar1]))();
  return;
}

