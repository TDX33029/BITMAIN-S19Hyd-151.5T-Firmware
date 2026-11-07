// FUN_013d3adc @ 013d3adc size=28 calls_out=0 calls_in=2
// strings: 

void FUN_013d3adc(uint param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x013d3af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_013d3af8 + *(int *)(&LAB_013d3af8 + (param_1 & 0xffff) * 4)))
            (*(int *)(&LAB_013d3af8 + (param_1 & 0xffff) * 4),1,&LAB_013d3af8,param_2);
  return;
}

