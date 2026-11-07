// FUN_00e1cc38 @ 00e1cc38 size=252 calls_out=3 calls_in=1
// strings: 

void FUN_00e1cc38(uint *param_1,undefined4 *param_2,int param_3,uint param_4,undefined4 param_5,
                 int param_6)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  
  puVar7 = (uint *)*param_2;
  uVar6 = *puVar7;
  if (param_4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar6,param_4,&DAT_01c176b8);
  }
  piVar2 = *(int **)(param_3 + uVar6 * 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00b5ef20(*(undefined4 *)(param_3 + uVar6 * 4));
  }
  piVar2 = (int *)param_2[1];
  *(undefined4 *)(param_3 + uVar6 * 4) = param_5;
  if (param_6 != 0) {
    *(undefined1 *)(*(int *)(*piVar2 + 0x58) + 8) = 1;
  }
  FUN_019e0044(*(int *)(*piVar2 + 0x54) + 8);
  uVar6 = *puVar7;
  if (param_4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar6,param_4,&DAT_01c176c8);
  }
  puVar7 = *(uint **)(param_3 + uVar6 * 4);
  do {
    uVar6 = *puVar7;
    uVar5 = uVar6 + 1;
    bVar1 = (bool)hasExclusiveAccess(puVar7);
  } while (!bVar1);
  *puVar7 = uVar5;
  uVar4 = uVar6;
  if (uVar6 < 0x80000000) {
    uVar4 = 0;
    uVar5 = 3;
  }
  if ((int)uVar6 < 0) {
    software_udf(0xfdee,0xe1cd0c);
    return;
  }
  *param_1 = uVar5;
  param_1[1] = uVar4;
  param_1[2] = (uint)puVar7;
  return;
}

