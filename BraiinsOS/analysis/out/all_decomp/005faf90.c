// FUN_005faf90 @ 005faf90 size=324 calls_out=2 calls_in=2
// strings: 

uint * FUN_005faf90(uint *param_1,uint *param_2,uint *param_3,uint param_4,undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (7 < param_4) {
    uVar1 = param_4 >> 3;
    iVar4 = uVar1 * 8 - (param_4 >> 3);
    param_1 = (uint *)FUN_005faf90(param_1,param_1 + uVar1 * 4,param_1 + iVar4,uVar1,param_5);
    param_2 = (uint *)FUN_005faf90(param_2,param_2 + uVar1 * 4,param_2 + iVar4,uVar1,param_5);
    param_3 = (uint *)FUN_005faf90(param_3,param_3 + uVar1 * 4,param_3 + iVar4,uVar1,param_5);
  }
  uVar3 = *param_1;
  uVar1 = *(uint *)(*(int *)*param_5 + 8);
  if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar3,uVar1,&DAT_018574a8);
  }
  uVar2 = *param_2;
  if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,uVar1,&DAT_018574b8);
  }
  uVar5 = *param_3;
  if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar5,uVar1,&DAT_018574b8);
  }
  iVar4 = *(int *)(*(int *)*param_5 + 4);
  uVar3 = *(uint *)(iVar4 + uVar3 * 0xc + 8);
  uVar2 = *(uint *)(iVar4 + uVar2 * 0xc + 8);
  uVar1 = *(uint *)(iVar4 + uVar5 * 0xc + 8);
  if (uVar2 < uVar3 != uVar1 < uVar2) {
    param_2 = param_3;
  }
  if (uVar2 < uVar3 != uVar1 < uVar3) {
    param_2 = param_1;
  }
  return param_2;
}

