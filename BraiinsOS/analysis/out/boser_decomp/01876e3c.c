// FUN_01876e3c @ 01876e3c size=168 calls_out=1 calls_in=0
// strings: 

int FUN_01876e3c(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  if (param_3 == 0) {
    iVar4 = 0;
  }
  else {
    iVar3 = param_1[1];
    iVar4 = 0;
    piVar2 = param_2;
    if (iVar3 != 0) {
      iVar1 = 0;
      iVar4 = 1;
      *param_2 = *param_1;
      param_2[1] = iVar3;
      if (param_3 == 1) goto LAB_01876e9c;
      piVar2 = param_2 + 2;
    }
    iVar3 = param_1[4];
    if (iVar3 != 0) {
      *piVar2 = param_1[3];
      piVar2[1] = iVar3;
      iVar1 = 1;
      goto LAB_01876e9c;
    }
  }
  iVar1 = 0;
LAB_01876e9c:
  uVar5 = iVar1 + iVar4;
  if (param_3 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar5,param_3,param_3,&DAT_01d20b38);
  }
  bVar6 = param_3 != uVar5;
  if (bVar6) {
    param_3 = param_1[7];
  }
  bVar7 = param_3 != 0;
  if (bVar6 && bVar7) {
    param_1 = (int *)param_1[6];
  }
  if (bVar6 && bVar7) {
    param_2 = param_2 + uVar5 * 2;
    *param_2 = (int)param_1;
  }
  if (bVar6 && bVar7) {
    param_2[1] = param_3;
  }
  return (bVar6 && bVar7) + uVar5;
}

