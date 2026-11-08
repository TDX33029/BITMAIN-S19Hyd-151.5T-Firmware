// FUN_018c9750 @ 018c9750 size=292 calls_out=4 calls_in=3
// strings: 

void FUN_018c9750(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  uint local_30;
  int local_2c;
  int local_28;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  param_3 = param_3 * 0xc;
  uVar3 = (param_3 - 0xcU >> 2) * param_5 * -0x55555555;
  iVar2 = param_2;
  while (param_3 != 0) {
    puVar1 = (uint *)(iVar2 + 8);
    param_3 = param_3 + -0xc;
    iVar2 = iVar2 + 0xc;
    bVar5 = CARRY4(*puVar1,uVar3);
    uVar3 = *puVar1 + uVar3;
    if (bVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_005324b9,0x35,&DAT_01d2f704);
    }
  }
  uVar4 = 0;
  if ((int)uVar3 < 0) {
LAB_018c97d8:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,uVar3);
  }
  if (uVar3 == 0) {
    local_2c = 1;
    local_30 = 0;
  }
  else {
    uVar4 = 1;
    local_2c = FUN_01298504(uVar3,1);
    local_30 = uVar3;
    if (local_2c == 0) goto LAB_018c97d8;
  }
  local_28 = 0;
  FUN_01ac6d2c(&local_30,*(int *)(param_2 + 4),*(int *)(param_2 + 4) + *(int *)(param_2 + 8),
               *(int *)(param_2 + 8),&local_30,param_1);
                    /* WARNING: Could not recover jumptable at 0x018c9870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_018c9874 + *(int *)(&DAT_018c9874 + (param_5 + -1) * 4)))
            (local_2c + local_28,uVar3 - local_28);
  return;
}

