// FUN_01533f30 @ 01533f30 size=180 calls_out=1 calls_in=0
// strings: 

uint FUN_01533f30(int *param_1,char *param_2)

{
  uint uVar1;
  int local_30 [3];
  
  uVar1 = 1;
  if (*param_2 == '\x04') {
    if (*(int *)(param_2 + 0xc) != 0) {
      FUN_015752f0(local_30,param_1[4]);
                    /* WARNING: Could not recover jumptable at 0x01533fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&DAT_01533fb8 + *(int *)(&DAT_01533fb8 + local_30[0] * 4)))();
      return uVar1;
    }
    uVar1 = (uint)((uint)-param_1[1] < (uint)(*param_1 == 0));
  }
  return uVar1;
}

