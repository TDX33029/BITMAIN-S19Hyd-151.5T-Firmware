// FUN_019ec774 @ 019ec774 size=180 calls_out=4 calls_in=11
// strings: reached max `enter` depth

void FUN_019ec774(int *param_1,int *param_2,uint param_3,int *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int unaff_r5;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*param_2 != 0) {
    uVar3 = FUN_01306fc8(&DAT_01d294e4);
    if (unaff_r5 != 2) {
      FUN_014397e4();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01be040c(uVar3);
  }
  *param_2 = -1;
  do {
    iVar5 = *param_4;
    bVar2 = (bool)hasExclusiveAccess(param_4);
  } while (!bVar2);
  *param_4 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x19ec7f8);
    (*pcVar1)();
  }
  iVar4 = param_2[1];
  iVar6 = param_2[2];
  param_2[1] = (uint)((param_3 & 1) != 0);
  param_2[2] = (int)param_4;
  iVar5 = param_2[3] + 1;
  *param_2 = *param_2 + 1;
  if (param_2[3] == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("reached max `enter` depth",0x33,&DAT_01d294f4);
  }
  *param_1 = iVar4;
  param_1[1] = iVar6;
  param_1[2] = iVar5;
  param_2[3] = iVar5;
  return;
}

