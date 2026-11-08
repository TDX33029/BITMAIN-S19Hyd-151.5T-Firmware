// FUN_00f4d108 @ 00f4d108 size=668 calls_out=5 calls_in=2
// strings: 

void FUN_00f4d108(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,ulonglong param_5,
                 int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  undefined4 local_30 [3];
  
  iVar11 = *(int *)(param_2 + 0x14);
  uVar1 = iVar11 + 1;
  *(uint *)(param_2 + 0x14) = uVar1;
  if (*(uint *)(param_2 + 0x10) <= uVar1) {
    local_30[0] = 5;
    uVar4 = FUN_01143ab8(param_2,local_30);
LAB_00f4d34c:
    *param_1 = 1;
    param_1[1] = uVar4;
    return;
  }
  iVar10 = uVar1 - *(uint *)(param_2 + 0x10);
  iVar8 = 0;
  iVar7 = 2;
  do {
    uVar5 = (uint)(param_5 >> 0x20);
    uVar9 = (uint)*(byte *)((uVar1 + *(int *)(param_2 + 0xc)) - iVar8);
    uVar2 = uVar9 - 0x30;
    uVar3 = uVar2 & 0xff;
    if (9 < uVar3) {
      if (iVar8 == 0) {
        local_30[0] = 0xd;
        uVar4 = FUN_01143ab8(param_2,local_30);
        goto LAB_00f4d374;
      }
      iVar10 = iVar8;
      if ((uVar9 | 0x20) == 0x65) {
        FUN_00f4d3b8(param_1,param_2,param_3);
        return;
      }
      break;
    }
    if ((0x19999998 < uVar5 && (uint)((uint)param_5 < 0x99999999) <= 0x19999999 - uVar5) &&
       ((param_5 != 0x1999999999999999 || (5 < uVar3)))) {
      FUN_01143dc8(param_1,param_2,param_3);
      return;
    }
    iVar6 = iVar11 + iVar7;
    iVar8 = iVar8 + -1;
    iVar7 = iVar7 + 1;
    *(int *)(param_2 + 0x14) = iVar6;
    param_5 = (param_5 & 0xffffffff) * 10 + (CONCAT44(uVar5 * 10,uVar2) & 0xffffffff000000ff);
  } while (iVar10 != iVar8);
  uVar2 = iVar10 + param_6;
  dVar12 = (double)FUN_01845f30((int)param_5);
  uVar1 = uVar2;
  if ((int)uVar2 < 0) {
    uVar1 = -uVar2;
  }
  while (0x134 < uVar1) {
    if (dVar12 == 0.0) goto LAB_00f4d318;
    if (uVar2 < 0x80000000) {
      local_30[0] = 0xe;
      uVar4 = FUN_00f4c908(param_2,local_30);
LAB_00f4d374:
      *param_1 = 1;
      param_1[1] = uVar4;
      return;
    }
    dVar12 = dVar12 / 1e+308;
    uVar2 = uVar2 + 0x134;
    uVar1 = uVar2;
    if ((int)uVar2 < 0) {
      uVar1 = -uVar2;
    }
  }
  if ((int)uVar2 < 0) {
    dVar12 = dVar12 / (double)(&DAT_0040ddb8)[uVar1];
  }
  else {
    dVar12 = dVar12 * (double)(&DAT_0040ddb8)[uVar1];
    if (SUB84(dVar12,0) == 0 && ((uint)((ulonglong)dVar12 >> 0x20) & 0x7fffffff) == 0x7ff00000) {
      local_30[0] = 0xe;
      uVar4 = FUN_00f4c908(param_2,local_30);
      goto LAB_00f4d34c;
    }
  }
LAB_00f4d318:
  *param_1 = 0;
  dVar13 = -dVar12;
  if (param_3 != 0) {
    dVar13 = dVar12;
  }
  *(double *)(param_1 + 2) = dVar13;
  return;
}

