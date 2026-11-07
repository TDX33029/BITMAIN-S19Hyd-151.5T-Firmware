// FUN_0131981c @ 0131981c size=272 calls_out=4 calls_in=1
// strings: 

void FUN_0131981c(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  iVar3 = 0;
  uVar5 = 0;
  do {
    iVar2 = iVar3 * 8;
    iVar3 = iVar3 + 1;
    uVar5 = *(int *)(param_2 + 4 + iVar2) + uVar5;
  } while (iVar3 != 2);
  uVar1 = uVar5 * 4;
  bVar9 = 0x3ffffffe < uVar5;
  bVar8 = uVar5 == 0x3fffffff;
  uVar7 = 0;
  if (uVar5 < 0x40000000) {
    bVar9 = 0x7ffffffb < uVar1;
    bVar8 = uVar1 == 0x7ffffffc;
  }
  if (bVar9 && !bVar8) {
LAB_01319860:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar7,uVar1);
  }
  uVar6 = 0;
  uVar4 = 4;
  local_30 = 0;
  if (uVar1 != 0) {
    uVar7 = 4;
    uVar4 = FUN_01298504(uVar1,4);
    local_30 = uVar5;
    if (uVar4 == 0) goto LAB_01319860;
  }
  local_2c = uVar4;
  for (iVar3 = 0; iVar3 != 0x10; iVar3 = iVar3 + 8) {
    uVar7 = *(undefined4 *)(param_2 + iVar3);
    uVar5 = ((undefined4 *)(param_2 + iVar3))[1];
    local_28 = uVar6;
    if (local_30 - uVar6 < uVar5) {
      FUN_006520b4(&local_30,uVar6,uVar5,4,4);
      uVar4 = local_2c;
    }
    uVar6 = local_28;
    FUN_01bed4e2(uVar4 + local_28 * 4,uVar7,uVar5 << 2);
    uVar6 = uVar6 + uVar5;
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = uVar6;
  return;
}

