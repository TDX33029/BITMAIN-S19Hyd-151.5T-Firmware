// FUN_019237b4 @ 019237b4 size=484 calls_out=4 calls_in=2
// strings: 

void FUN_019237b4(undefined4 *param_1,undefined4 param_2,code *param_3,int param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 *param_8,undefined4 param_9,
                 undefined4 param_10)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  uint local_34;
  
  bVar9 = param_4 == 0;
  if (bVar9) {
    param_4 = 4;
  }
  uVar8 = 0;
  if (bVar9) {
    param_5 = 0;
  }
  bVar10 = 0x1ffffffe < param_5;
  bVar9 = param_5 == 0x1fffffff;
  uVar6 = param_5 * 8;
  if (param_5 < 0x20000000) {
    bVar10 = 0x7ffffffb < uVar6;
    bVar9 = uVar6 == 0x7ffffffc;
  }
  if (bVar10 && !bVar9) {
LAB_019237f0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar8,uVar6);
  }
  if (uVar6 == 0) {
    iVar1 = 4;
    local_34 = 0;
  }
  else {
    uVar8 = 4;
    iVar1 = FUN_01298504(uVar6,4);
    local_34 = param_5;
    if (iVar1 == 0) goto LAB_019237f0;
  }
  uVar6 = 0;
  if (param_5 != 0) {
    puVar2 = (undefined4 *)(iVar1 + 4);
    puVar5 = (undefined4 *)(param_4 + 4);
    uVar6 = param_5;
    do {
      uVar7 = *puVar5;
      uVar6 = uVar6 - 1;
      uVar8 = puVar5[1];
      puVar5 = puVar5 + 3;
      puVar2[-1] = uVar7;
      *puVar2 = uVar8;
      puVar2 = puVar2 + 2;
    } while (uVar6 != 0);
    uVar6 = param_5;
  }
  piVar3 = (int *)(*param_3)(param_2,iVar1,uVar6,param_6,param_7);
  if (piVar3 != (int *)0x0) {
    uVar11 = (**(code **)(piVar3[9] + 0x10))
                       (piVar3[8] + (*(int *)(piVar3[9] + 8) - 1U & 0xfffffff8) + 8,param_6,param_7)
    ;
    if ((int)uVar11 != 0) {
      uVar8 = param_8[1];
      uVar7 = param_8[2];
      *param_1 = *param_8;
      param_1[1] = uVar8;
      param_1[2] = uVar7;
      param_1[4] = (int)uVar11;
      param_1[6] = param_9;
      param_1[3] = piVar3;
      param_1[5] = (int)((ulonglong)uVar11 >> 0x20);
      param_1[7] = param_10;
      goto LAB_01923980;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa6d8(piVar3);
    }
  }
  uVar8 = param_8[1];
  uVar7 = param_8[2];
  param_1[1] = *param_8;
  param_1[2] = uVar8;
  param_1[3] = uVar7;
  *param_1 = 0x80000001;
LAB_01923980:
  FUN_0134aee0(local_34,iVar1,4,8);
  return;
}

