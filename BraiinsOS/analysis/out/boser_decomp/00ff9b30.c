// FUN_00ff9b30 @ 00ff9b30 size=240 calls_out=3 calls_in=1
// strings: 

void FUN_00ff9b30(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *local_28;
  undefined4 uStack_24;
  int *local_20;
  undefined4 local_1c;
  
  if (*param_2 == 0) {
    *param_1 = 0;
    FUN_00ff9c3c(param_3);
    return;
  }
  if (*param_2 != 1) {
    uVar7 = FUN_011d950c(param_2[1],param_2[2],param_3);
    *param_1 = 2;
    param_1[1] = uVar7;
    param_1[2] = &DAT_01c21f74;
    return;
  }
  local_20 = (int *)param_3[2];
  local_1c = param_3[3];
  iVar5 = param_2[1];
  iVar6 = param_2[2];
  piVar4 = (int *)*param_3;
  uVar7 = param_3[1];
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + 1;
  if (-1 < iVar3) {
    do {
      iVar3 = *local_20;
      bVar2 = (bool)hasExclusiveAccess(local_20);
    } while (!bVar2);
    *local_20 = iVar3 + 1;
    local_28 = piVar4;
    uStack_24 = uVar7;
    if (-1 < iVar3) {
      uVar7 = FUN_011d96fc(iVar5,iVar6,&local_28);
      FUN_00ff9c3c(param_3);
      *param_1 = 1;
      param_1[1] = uVar7;
      param_1[2] = &DAT_01c1bf88;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xff9c1c);
  (*pcVar1)();
}

