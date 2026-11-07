// FUN_0119d418 @ 0119d418 size=268 calls_out=2 calls_in=0
// strings: 

void FUN_0119d418(uint *param_1,int param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  undefined8 uVar13;
  
  iVar10 = *(int *)(param_2 + 0x24);
  uVar8 = *(uint *)(param_2 + 0x28);
  piVar6 = *(int **)(param_2 + 0x2c);
  do {
    iVar2 = *piVar6;
    bVar11 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar11);
  *piVar6 = iVar2 + 1;
  if (iVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x119d470);
    (*pcVar1)();
  }
  uVar7 = uVar8 * 8;
  bVar12 = 0x1ffffffe < uVar8;
  bVar11 = uVar8 == 0x1fffffff;
  uVar9 = 0;
  if (uVar8 < 0x20000000) {
    bVar12 = 0x7ffffffb < uVar7;
    bVar11 = uVar7 == 0x7ffffffc;
  }
  if (bVar12 && !bVar11) {
LAB_0119d464:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar9,uVar7);
  }
  if (uVar7 == 0) {
    uVar3 = 4;
    uVar4 = 0;
  }
  else {
    uVar9 = 4;
    uVar3 = FUN_01298504(uVar7,4);
    uVar4 = uVar8;
    if (uVar3 == 0) goto LAB_0119d464;
  }
  uVar7 = 0;
  if (uVar8 != 0) {
    uVar7 = 0;
    do {
      puVar5 = (undefined4 *)(iVar10 + uVar7 * 8);
      uVar13 = (**(code **)(puVar5[1] + 0xc))(*puVar5);
      iVar2 = uVar7 * 8;
      uVar7 = uVar7 + 1;
      *(undefined8 *)(uVar3 + iVar2) = uVar13;
    } while (uVar8 != uVar7);
    uVar7 = uVar8;
  }
  *param_1 = uVar4;
  param_1[1] = uVar3;
  param_1[2] = uVar7;
  param_1[3] = (uint)piVar6;
  param_1[4] = param_3;
  param_1[5] = 0;
  return;
}

