// FUN_00b60b28 @ 00b60b28 size=100 calls_out=1 calls_in=2
// strings: 

void FUN_00b60b28(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_2 + 0x18;
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    iVar2 = param_2 + 0x28;
  }
  piVar1 = (int *)FUN_01221f24(param_3 + 0x98,iVar2,0x3c,0);
                    /* WARNING: Could not recover jumptable at 0x00b60b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_00b60b8c + *(int *)(&LAB_00b60b8c + *piVar1 * 4)))(piVar1[2],piVar1[3]);
  return;
}

