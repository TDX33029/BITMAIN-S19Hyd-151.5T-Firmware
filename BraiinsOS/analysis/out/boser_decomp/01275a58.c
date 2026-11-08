// FUN_01275a58 @ 01275a58 size=152 calls_out=1 calls_in=0
// strings: 

void FUN_01275a58(undefined4 *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)*param_2;
  if (puVar1 == (uint *)param_2[1]) {
    param_1[5] = 0;
    param_1[2] = 8;
    param_1[3] = 0;
    *param_1 = 2;
    FUN_019bb7e0(0,1);
    return;
  }
  *param_2 = (int)(puVar1 + 8);
  uVar2 = 0x15;
  param_2[2] = (int)(puVar1 + 4);
  param_2[3] = param_2[3] + 1;
  if ((int)*puVar1 < 0) {
    uVar2 = *puVar1 ^ 0x80000000;
  }
                    /* WARNING: Could not recover jumptable at 0x01275abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01275ac0 + *(int *)(&DAT_01275ac0 + uVar2 * 4)))(puVar1,uVar2,8);
  return;
}

