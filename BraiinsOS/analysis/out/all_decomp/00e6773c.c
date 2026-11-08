// FUN_00e6773c @ 00e6773c size=76 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_00e6773c(uint *param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *param_2;
  if (uVar2 == 0xb && param_2[1] == 0) {
    uVar2 = *param_1;
    *param_1 = uVar2 + 1;
    param_1[1] = param_1[1] + (uint)(0xfffffffe < uVar2);
    return 0;
  }
  iVar3 = 4;
  if ((uint)(uVar2 < 5) <= -param_2[1]) {
    iVar3 = uVar2 - 5;
  }
                    /* WARNING: Could not recover jumptable at 0x00e67784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&DAT_00e67788 + *(int *)(&DAT_00e67788 + iVar3 * 4)))(param_1,param_2,*param_1)
  ;
  return uVar1;
}

