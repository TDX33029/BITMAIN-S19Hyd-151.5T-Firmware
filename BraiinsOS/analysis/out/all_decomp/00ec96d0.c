// FUN_00ec96d0 @ 00ec96d0 size=420 calls_out=4 calls_in=0
// strings: 

void FUN_00ec96d0(uint *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  if (*param_2 == 1) {
    uVar10 = param_2[4];
    bVar12 = 0x1ffffffe < uVar10;
    bVar11 = uVar10 == 0x1fffffff;
    uVar4 = uVar10 * 8;
    if (uVar10 < 0x20000000) {
      bVar12 = 0x7ffffffb < uVar4;
      bVar11 = uVar4 == 0x7ffffffc;
    }
    if (bVar12 && !bVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0);
    }
    if (uVar4 == 0) {
      local_2c = 4;
      local_30 = 0;
    }
    else {
      puVar7 = (undefined4 *)param_2[3];
      local_2c = thunk_FUN_016d4a50(uVar4);
      if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar4);
      }
      if (uVar10 != 0) {
        puVar2 = puVar7 + uVar10 * 2;
        iVar3 = 0;
        uVar4 = uVar10;
        do {
          if (puVar7 == puVar2) break;
          piVar8 = (int *)*puVar7;
          uVar9 = puVar7[1];
          uVar4 = uVar4 - 1;
          do {
            iVar5 = *piVar8;
            bVar11 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar11);
          *piVar8 = iVar5 + 1;
          if (iVar5 < 0) goto LAB_00ec9858;
          puVar7 = puVar7 + 2;
          puVar6 = (undefined4 *)(local_2c + iVar3 * 8);
          *puVar6 = piVar8;
          iVar3 = iVar3 + 1;
          puVar6[1] = uVar9;
        } while (uVar4 != 0);
      }
      local_30 = uVar10;
    }
    piVar8 = (int *)param_2[1];
    do {
      iVar3 = *piVar8;
      bVar11 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar11);
    *piVar8 = iVar3 + 1;
    if (-1 < iVar3) {
      if (uVar10 == local_30) {
        local_28 = uVar10;
        FUN_00d64ab0(&local_30);
      }
      piVar1 = (int *)(local_2c + uVar10 * 8);
      *piVar1 = (int)piVar8;
      piVar1[1] = (int)&DAT_0187bd70;
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = uVar10 + 1;
      return;
    }
  }
  else {
    piVar8 = (int *)thunk_FUN_016d4a50(8);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    piVar1 = (int *)param_2[1];
    do {
      iVar3 = *piVar1;
      bVar11 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar11);
    *piVar1 = iVar3 + 1;
    if (-1 < iVar3) {
      *param_1 = 1;
      param_1[1] = (uint)piVar8;
      param_1[2] = 1;
      *piVar8 = (int)piVar1;
      piVar8[1] = (int)&DAT_0187bd70;
      return;
    }
  }
LAB_00ec9858:
  software_udf(0xfdee,0xec9858);
  return;
}

