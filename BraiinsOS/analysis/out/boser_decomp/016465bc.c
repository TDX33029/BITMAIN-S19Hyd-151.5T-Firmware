// FUN_016465bc @ 016465bc size=532 calls_out=6 calls_in=2
// strings: Cannot subtract b from a because b is larger than a.

void FUN_016465bc(uint *param_1,uint *param_2,uint param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  bool bVar12;
  uint local_30;
  int *local_2c;
  uint local_28;
  
  uVar10 = param_4[2];
  puVar11 = (uint *)param_4[1];
  if (uVar10 < param_3) {
    if (uVar10 == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
      puVar2 = param_2;
      uVar9 = uVar10;
      do {
        uVar6 = *puVar11;
        uVar7 = *puVar2;
        uVar8 = uVar7 - uVar6;
        *puVar11 = uVar8 - uVar5;
        uVar5 = (uint)(uVar7 < uVar6 || uVar8 < uVar5);
        uVar9 = uVar9 - 1;
        puVar2 = puVar2 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar9 != 0);
      uVar5 = uVar5 ^ 1;
    }
    FUN_0164a850(param_4,param_2 + uVar10,param_2 + param_3);
    if (uVar5 == 0) {
      uVar5 = param_4[2];
      if (uVar5 < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar10,uVar5,uVar5,&DAT_01d065ac);
      }
      FUN_0164a6d4(param_4[1] + uVar10 * 4,uVar5 - uVar10,&DAT_0056ed00,1);
    }
LAB_01646714:
    local_2c = (int *)param_4[1];
    local_28 = param_4[2];
    local_30 = *param_4;
    bVar12 = local_28 == 0;
    piVar4 = local_2c;
    puVar11 = &local_30;
    if (!bVar12) {
      piVar4 = local_2c + (local_28 - 1);
      bVar12 = piVar4 == (int *)0x0;
      puVar11 = (uint *)local_2c;
    }
    if ((!bVar12) && (*piVar4 == 0)) {
      iVar3 = local_28 << 2;
      uVar10 = local_28 & 0x3fffffff;
      do {
        uVar5 = uVar10;
        if (iVar3 == 0) {
          uVar5 = 0;
          goto LAB_016467b0;
        }
        iVar1 = iVar3 + -4;
        iVar3 = iVar3 + -4;
        uVar10 = uVar5 - 1;
      } while (*(int *)((int)puVar11 + iVar1) == 0);
      if (uVar5 <= local_28) {
LAB_016467b0:
        local_28 = uVar5;
      }
    }
    if ((local_28 < *param_4 >> 2) && (iVar3 = FUN_0164bb38(&local_30), iVar3 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    *param_1 = local_30;
    param_1[1] = (uint)local_2c;
    param_1[2] = local_28;
    return;
  }
  if (param_3 != 0) {
    puVar2 = puVar11;
    uVar5 = param_3;
    uVar9 = 0;
    do {
      uVar6 = *param_2 - *puVar2;
      uVar5 = uVar5 - 1;
      uVar7 = (uint)(*param_2 < *puVar2 || uVar6 < uVar9);
      *puVar2 = uVar6 - uVar9;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
      uVar9 = uVar7;
    } while (uVar5 != 0);
    if (uVar7 != 0) goto LAB_016466b4;
  }
  iVar3 = uVar10 * 4 + param_3 * -4;
  puVar11 = puVar11 + param_3;
  do {
    if (iVar3 == 0) goto LAB_01646714;
    uVar10 = *puVar11;
    iVar3 = iVar3 + -4;
    puVar11 = puVar11 + 1;
  } while (uVar10 == 0);
LAB_016466b4:
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("Cannot subtract b from a because b is larger than a.",0x69,&DAT_01d066ec);
}

