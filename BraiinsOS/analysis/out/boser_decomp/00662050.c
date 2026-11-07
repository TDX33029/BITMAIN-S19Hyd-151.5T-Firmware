// FUN_00662050 @ 00662050 size=316 calls_out=2 calls_in=2
// strings: 

uint * FUN_00662050(uint *param_1,uint *param_2,uint *param_3,uint param_4,undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = (uint *)FUN_00662050(param_1,param_1 + param_4 * 4,param_1 + param_4 * 7,param_4,
                                   param_5);
    param_2 = (uint *)FUN_00662050(param_2,param_2 + param_4 * 4,param_2 + param_4 * 7,param_4,
                                   param_5);
    param_3 = (uint *)FUN_00662050(param_3,param_3 + param_4 * 4,param_3 + param_4 * 7,param_4,
                                   param_5);
  }
  uVar1 = *param_1;
  uVar2 = *(uint *)(*(int *)*param_5 + 8);
  if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1,uVar2,&DAT_01c03e28);
  }
  uVar5 = *param_2;
  if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar5,uVar2,&DAT_01c03e38);
  }
  uVar4 = *param_3;
  if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar4,uVar2,&DAT_01c03e38);
  }
  iVar3 = *(int *)(*(int *)*param_5 + 4);
  uVar5 = *(uint *)(iVar3 + uVar5 * 0xc + 8);
  uVar1 = *(uint *)(iVar3 + uVar1 * 0xc + 8);
  uVar2 = *(uint *)(iVar3 + uVar4 * 0xc + 8);
  if (uVar5 < uVar1 != uVar2 < uVar5) {
    param_2 = param_3;
  }
  if (uVar5 < uVar1 != uVar2 < uVar1) {
    param_2 = param_1;
  }
  return param_2;
}

