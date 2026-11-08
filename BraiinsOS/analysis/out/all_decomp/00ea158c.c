// FUN_00ea158c @ 00ea158c size=212 calls_out=0 calls_in=3
// strings: 

undefined4 FUN_00ea158c(uint *param_1,int *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 5;
  if (param_3 < 0x10000) {
    uVar2 = 3;
  }
  uVar4 = *param_1;
  if (param_3 < 0xfb) {
    uVar2 = 1;
  }
  uVar3 = uVar4 + uVar2;
  if (param_3 * 0x28 == 0) {
    *param_1 = uVar3 + 1;
    param_1[1] = param_1[1] + (uint)CARRY4(uVar4,uVar2) + (uint)(0xfffffffe < uVar3);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00ea1664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&DAT_00ea1668 + *(int *)(&DAT_00ea1668 + *param_2 * 4)))(param_1,param_2 + 10);
  return uVar1;
}

