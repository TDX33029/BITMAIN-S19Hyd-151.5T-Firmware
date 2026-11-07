// FUN_010204cc @ 010204cc size=804 calls_out=3 calls_in=3
// strings: 

void FUN_010204cc(int *param_1,int *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *local_2c;
  uint local_28;
  
  iVar12 = *param_1;
  iVar11 = param_1[2];
  iVar13 = param_1[4];
  iVar9 = param_1[6];
  iVar7 = param_1[0xe];
  iVar3 = param_1[0xc];
  iVar5 = param_1[10];
  iVar8 = param_1[8];
  uVar2 = 0;
  if (iVar12 != 0) {
    uVar2 = 6;
  }
  if (iVar11 != 0) {
    uVar2 = uVar2 + 6;
  }
  if (iVar13 != 0) {
    uVar2 = uVar2 + 6;
  }
  if (iVar9 != 0) {
    uVar2 = uVar2 + 6;
  }
  if (iVar8 != 0) {
    uVar2 = uVar2 + 6;
  }
  if (iVar5 != 0) {
    uVar2 = uVar2 + 6;
  }
  if (iVar3 != 0) {
    uVar2 = uVar2 + 6;
  }
  iVar6 = param_2[1];
  uVar1 = (undefined2)(((uVar2 >> 8) << 0x10) >> 8);
  iVar4 = param_2[2];
  if ((uint)(iVar4 - iVar6) < 3) {
    FUN_00f5f538(param_2,3);
    iVar10 = *param_2;
    iVar6 = param_2[1];
    iVar4 = param_2[2];
    *(undefined2 *)(iVar10 + iVar6) = uVar1;
    *(char *)((undefined2 *)(iVar10 + iVar6) + 1) = (char)uVar2;
    local_28 = iVar4 - iVar6;
    if (local_28 < 3) {
      local_2c = (int *)0x3;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_2c);
    }
    iVar6 = iVar6 + 3;
    param_2[1] = iVar6;
    if (iVar4 != iVar6) goto LAB_01020650;
LAB_010205b4:
    FUN_00f5f538(param_2,1);
    iVar10 = *param_2;
    iVar6 = param_2[1];
    iVar4 = param_2[2];
    *(undefined1 *)(iVar10 + iVar6) = 4;
    if (iVar4 == iVar6) goto LAB_01020614;
    iVar6 = iVar6 + 1;
    param_2[1] = iVar6;
    if (iVar4 != iVar6) {
LAB_01020668:
      *(char *)(iVar10 + iVar6) = (char)iVar7;
      goto LAB_0102066c;
    }
  }
  else {
    iVar10 = *param_2;
    *(undefined2 *)(iVar10 + iVar6) = uVar1;
    *(char *)((undefined2 *)(iVar10 + iVar6) + 1) = (char)uVar2;
    iVar6 = iVar6 + 3;
    param_2[1] = iVar6;
    if (iVar4 == iVar6) goto LAB_010205b4;
LAB_01020650:
    *(undefined1 *)(iVar10 + iVar6) = 4;
    iVar6 = iVar6 + 1;
    param_2[1] = iVar6;
    if (iVar4 != iVar6) goto LAB_01020668;
  }
  FUN_00f5f538(param_2,1);
  iVar6 = param_2[1];
  iVar4 = param_2[2];
  *(char *)(*param_2 + iVar6) = (char)iVar7;
  if (iVar4 == iVar6) {
LAB_01020614:
    local_2c = (int *)0x1;
    local_28 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_2c);
  }
LAB_0102066c:
  iVar6 = iVar6 + 1;
  param_2[1] = iVar6;
  if ((uint)(iVar4 - iVar6) < 4) {
    FUN_00f5f538(param_2,4);
    iVar6 = param_2[1];
    iVar7 = param_2[2];
    *(undefined4 *)(*param_2 + iVar6) = 0;
    local_28 = iVar7 - iVar6;
    if (local_28 < 4) {
      local_2c = (int *)0x4;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_2c);
    }
  }
  else {
    *(undefined4 *)(*param_2 + iVar6) = 0;
  }
  param_2[1] = iVar6 + 4;
  local_2c = param_2;
  if (iVar12 != 0) {
    FUN_010207f4(&local_2c,0,param_1[1]);
  }
  if (iVar11 != 0) {
    FUN_010207f4(&local_2c,1,param_1[3]);
  }
  if (iVar13 != 0) {
    FUN_010207f4(&local_2c,2,param_1[5]);
  }
  if (iVar9 != 0) {
    FUN_010207f4(&local_2c,3,param_1[7]);
  }
  if (iVar8 != 0) {
    FUN_010207f4(&local_2c,4,param_1[9]);
  }
  if (iVar5 != 0) {
    FUN_010207f4(&local_2c,5,param_1[0xb]);
  }
  if (iVar3 == 0) {
    return;
  }
  FUN_010207f4(&local_2c,6,param_1[0xd]);
  return;
}

