// FUN_015337e4 @ 015337e4 size=156 calls_out=1 calls_in=0
// strings: 

uint FUN_015337e4(int *param_1,char *param_2)

{
  uint uVar1;
  int local_30 [3];
  
  uVar1 = 1;
  if (*param_2 == '\x04') {
    if (*(int *)(param_2 + 0xc) != 0) {
      FUN_015752f0(local_30,param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x01533858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&DAT_0153385c + *(int *)(&DAT_0153385c + local_30[0] * 4)))();
      return uVar1;
    }
    uVar1 = (uint)(*param_1 == 0 && param_1[1] == 0);
  }
  return uVar1;
}

