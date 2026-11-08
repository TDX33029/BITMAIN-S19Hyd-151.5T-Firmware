// FUN_00f5f8dc @ 00f5f8dc size=460 calls_out=4 calls_in=13
// strings: 

void FUN_00f5f8dc(int *param_1,int *param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint local_3c;
  uint local_38;
  uint *local_34;
  code *local_30;
  uint *local_2c;
  code *local_28;
  
  uVar8 = param_2[1];
  local_3c = param_3;
  if (uVar8 < param_3) {
    local_2c = &local_38;
    local_28 = FUN_007883b8;
    local_30 = FUN_007883b8;
    local_34 = &local_3c;
    local_38 = uVar8;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0058b85a,&local_34,&DAT_0187fa4c);
  }
  piVar7 = (int *)param_2[3];
  if (((uint)piVar7 & 1) == 0) {
    piVar3 = piVar7 + 4;
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + 1;
    if (iVar4 < 0) {
      FUN_00f6015c();
LAB_00f5fa8c:
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x14);
    }
    iVar4 = *param_2;
    iVar9 = param_2[3];
  }
  else {
    iVar4 = *param_2;
    iVar9 = param_2[2];
    piVar3 = (int *)thunk_FUN_016d4a50(0x14);
    if (piVar3 == (int *)0x0) goto LAB_00f5fa8c;
    piVar3[4] = 2;
    piVar3[3] = ((uint)piVar7 & 0x1f) >> 2;
    piVar3[2] = uVar8 + ((uint)piVar7 >> 5);
    piVar3[1] = iVar4 - ((uint)piVar7 >> 5);
    *piVar3 = iVar9 + ((uint)piVar7 >> 5);
    param_2[3] = (int)piVar3;
    iVar4 = *param_2;
    iVar9 = param_2[3];
    piVar7 = piVar3;
  }
  if (param_3 != 0) {
    if (((uint)piVar7 & 1) != 0) {
      uVar2 = param_3 + ((uint)piVar7 >> 5);
      if (uVar2 < 0x8000000) {
        piVar3 = (int *)((uint)piVar7 & 0x1f | uVar2 * 0x20);
      }
      else {
        iVar6 = *param_2;
        uVar2 = (uint)piVar7 >> 5;
        iVar5 = param_2[2];
        piVar3 = (int *)thunk_FUN_016d4a50(0x14);
        if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x14);
        }
        piVar3[4] = 1;
        piVar3[3] = ((uint)piVar7 & 0x1f) >> 2;
        piVar3[2] = uVar8 + uVar2;
        piVar3[1] = iVar6 - uVar2;
        *piVar3 = iVar5 + uVar2;
      }
      param_2[3] = (int)piVar3;
    }
    iVar6 = uVar8 - param_3;
    if (uVar8 < param_3) {
      iVar6 = 0;
    }
    *param_2 = *param_2 + param_3;
    param_2[1] = iVar6;
    param_2[2] = param_2[2] - param_3;
  }
  *param_1 = iVar4;
  param_1[1] = param_3;
  param_1[2] = param_3;
  param_1[3] = iVar9;
  return;
}

