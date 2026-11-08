// FUN_00fef204 @ 00fef204 size=108 calls_out=1 calls_in=3
// strings: 

void FUN_00fef204(uint *param_1,uint *param_2,int *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  if (1 < *param_2) {
    uVar5 = (**(code **)(uVar4 + 0x10))(uVar2,param_3);
    *(undefined8 *)(param_1 + 1) = uVar5;
    *param_1 = 1;
    return;
  }
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_3;
    bVar1 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar1);
  *param_3 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01180044(param_3);
    return;
  }
  return;
}

