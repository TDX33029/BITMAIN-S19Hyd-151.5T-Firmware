// FUN_012b4e44 @ 012b4e44 size=36 calls_out=0 calls_in=223
// strings: 

void FUN_012b4e44(undefined4 param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 - 4;
  if (*param_2 < 4) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x012b4e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_012b4e68 + (&DAT_012b4e68)[iVar1]))();
  return;
}

