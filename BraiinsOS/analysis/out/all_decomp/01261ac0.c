// FUN_01261ac0 @ 01261ac0 size=80 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_01261ac0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0x88) < 3) || (iVar2 = *param_2, iVar2 == -0x80000000)) {
    return 1;
  }
  iVar3 = 8;
  if (iVar2 < 0) {
    iVar3 = iVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x01261b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&DAT_01261b04 + *(int *)(&DAT_01261b04 + iVar3 * 4)))
                    (param_1,param_2,param_1 + 0x10);
  return uVar1;
}

