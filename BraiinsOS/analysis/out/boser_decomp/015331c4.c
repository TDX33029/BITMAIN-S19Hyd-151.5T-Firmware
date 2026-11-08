// FUN_015331c4 @ 015331c4 size=144 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_015331c4(undefined4 *param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_30 [3];
  
  uVar1 = 1;
  if (*param_2 == '\x04') {
    iVar2 = *(int *)(param_2 + 0xc);
    if (iVar2 != 0) {
      FUN_015752f0(local_30,param_1[2],iVar2,4,param_1[1],*param_1,
                   *(int *)(param_2 + 8) + iVar2 * 0x18);
                    /* WARNING: Could not recover jumptable at 0x0153323c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&DAT_01533240 + *(int *)(&DAT_01533240 + local_30[0] * 4)))();
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

