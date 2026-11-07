// FUN_00a5ecd0 @ 00a5ecd0 size=188 calls_out=1 calls_in=2
// strings: 

float * FUN_00a5ecd0(float *param_1,float *param_2,float *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if (7 < param_4) {
    uVar1 = param_4 >> 3;
    iVar2 = uVar1 * 8 - (param_4 >> 3);
    param_1 = (float *)FUN_00a5ecd0(param_1,param_1 + uVar1 * 8,param_1 + iVar2 * 2,uVar1);
    param_2 = (float *)FUN_00a5ecd0(param_2,param_2 + uVar1 * 8,param_2 + iVar2 * 2,uVar1);
    param_3 = (float *)FUN_00a5ecd0(param_3,param_3 + uVar1 * 8,param_3 + iVar2 * 2,uVar1);
  }
  fVar3 = *param_2;
  fVar4 = *param_1;
  if (fVar4 < fVar3 != fVar3 < *param_3) {
    param_2 = param_3;
  }
  if (fVar4 < fVar3 != fVar4 < *param_3) {
    param_2 = param_1;
  }
  return param_2;
}

