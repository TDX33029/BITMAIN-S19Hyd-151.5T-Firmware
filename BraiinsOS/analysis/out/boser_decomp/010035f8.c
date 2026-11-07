// FUN_010035f8 @ 010035f8 size=240 calls_out=3 calls_in=1
// strings: 

void FUN_010035f8(undefined4 *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  if (*param_2 == 0) {
    *param_1 = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *param_3;
      bVar2 = (bool)hasExclusiveAccess(param_3);
    } while (!bVar2);
    *param_3 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0117fe74(param_3);
      return;
    }
    return;
  }
  if (*param_2 != 1) {
    uVar4 = FUN_011d8540(param_2[1],param_2[2],param_3);
    *param_1 = 2;
    param_1[1] = uVar4;
    param_1[2] = &DAT_01c21f74;
    return;
  }
  iVar3 = param_2[1];
  iVar5 = param_2[2];
  do {
    iVar6 = *param_3;
    bVar2 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar2);
  *param_3 = iVar6 + 1;
  if (iVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x10036e4);
    (*pcVar1)();
  }
  uVar4 = FUN_011d8634(iVar3,iVar5,param_3);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_3;
    bVar2 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar2);
  *param_3 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0117fe74(param_3);
  }
  *param_1 = 1;
  param_1[1] = uVar4;
  param_1[2] = &DAT_01c1c288;
  return;
}

