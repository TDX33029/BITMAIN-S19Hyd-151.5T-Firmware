// FUN_015a6258 @ 015a6258 size=84 calls_out=1 calls_in=1
// strings: 

void FUN_015a6258(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = param_2[1];
  if (uVar1 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(param_3,uVar1,uVar1,&DAT_01cfc608);
  }
  iVar3 = param_2[3];
  iVar5 = param_2[2];
  iVar4 = *param_2;
  iVar2 = param_2[4];
  param_1[1] = uVar1 - param_3;
  param_1[2] = iVar5;
  *param_1 = iVar4 + param_3;
  param_1[3] = iVar3;
  param_1[4] = iVar2 - param_3;
  return;
}

