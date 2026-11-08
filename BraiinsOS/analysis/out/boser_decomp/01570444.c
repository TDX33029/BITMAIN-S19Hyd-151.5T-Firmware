// FUN_01570444 @ 01570444 size=76 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_01570444(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0x88) < 3) || (iVar1 = *param_2, iVar1 == -0x80000000)) {
    return 1;
  }
  iVar3 = 8;
  if (iVar1 < 0) {
    iVar3 = iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0157047c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(&DAT_01570480 + *(int *)(&DAT_01570480 + iVar3 * 4)))();
  return uVar2;
}

