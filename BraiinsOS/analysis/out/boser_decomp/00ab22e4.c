// FUN_00ab22e4 @ 00ab22e4 size=940 calls_out=12 calls_in=3
// strings: Over `u32::MAX` routes created. If you need this; please file an issue.

void FUN_00ab22e4(int *param_1,int *param_2,undefined4 param_3,int param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  int local_1ec;
  int local_1e0 [4];
  undefined1 auStack_1d0 [128];
  int local_150;
  int iStack_14c;
  int iStack_148;
  int local_140 [4];
  undefined1 auStack_130 [128];
  int local_b0;
  int local_ac;
  int local_a8;
  
  uVar13 = FUN_0070d26c((char)param_2[10],param_3,param_4);
  if ((int)uVar13 != 0) {
    *(undefined8 *)(param_1 + 1) = uVar13;
    *param_1 = -0x80000000;
    FUN_00a3f5c4(param_5);
    return;
  }
  iVar10 = param_2[8];
  if (*(int *)(iVar10 + 0x34) != 0) {
    uVar4 = FUN_01a9c24c(*(undefined4 *)(iVar10 + 0x38),*(undefined4 *)(iVar10 + 0x3c),
                         *(undefined4 *)(iVar10 + 0x40),*(undefined4 *)(iVar10 + 0x44),param_3,
                         param_4);
    uVar1 = uVar4 >> 0x19;
    iVar11 = *(int *)(iVar10 + 0x28);
    uVar9 = *(uint *)(iVar10 + 0x2c);
    iVar10 = 0;
    while( true ) {
      uVar4 = uVar9 & uVar4;
      uVar12 = *(uint *)(iVar11 + uVar4);
      uVar5 = uVar12 ^ uVar1 * 0x1010101;
      for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5)
      {
        uVar6 = uVar4 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                       (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar9;
        piVar7 = (int *)(iVar11 + -0xc + uVar6 * -0xc);
        if ((param_4 == piVar7[1]) &&
           (iVar8 = thunk_FUN_01bed842(param_3,*piVar7 + 8,param_4), iVar8 == 0)) {
          if (param_2[3] == 0) goto LAB_00ab256c;
          iVar11 = *(int *)(iVar11 + uVar6 * -0xc + -4);
          uVar4 = FUN_01656218(param_2[4],param_2[5],param_2[6],param_2[7],iVar11);
          uVar1 = uVar4 >> 0x19;
          iVar10 = *param_2;
          local_1ec = 0;
          goto LAB_00ab24c4;
        }
      }
      if ((uVar12 & 0x80808080 & uVar12 << 1) != 0) break;
      iVar10 = iVar10 + 4;
      uVar4 = uVar4 + iVar10;
    }
  }
LAB_00ab256c:
  iVar11 = param_2[9] + 1;
  if (0xfffffffe < (uint)param_2[9]) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("Over `u32::MAX` routes created. If you need this, please file an issue.",0x47,
                 &DAT_01d2cca8);
  }
  param_2[9] = iVar11;
  FUN_00ab26c4(&local_b0,param_2,param_3,param_4,iVar11);
  if (local_b0 != -0x80000000) {
    *param_1 = local_b0;
    param_1[1] = local_ac;
    param_1[2] = local_a8;
    FUN_00ab2094(param_5);
    return;
  }
LAB_00ab25b0:
  FUN_0070bb70(&local_b0,param_2,iVar11,param_5);
  if (local_b0 != 4) {
    FUN_00ab2094(&local_b0);
  }
  *param_1 = -0x7fffffff;
  return;
LAB_00ab24c4:
  uVar4 = param_2[1] & uVar4;
  uVar9 = *(uint *)(iVar10 + uVar4);
  uVar5 = uVar9 ^ uVar1 * 0x1010101;
  uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
  while (uVar5 != 0) {
    uVar12 = uVar5 >> 8;
    uVar6 = uVar5 >> 0x10;
    uVar2 = uVar5 >> 0x18;
    uVar3 = uVar5 << 0x18;
    uVar5 = uVar5 - 1 & uVar5;
    uVar12 = uVar4 + ((uint)LZCOUNT(uVar3 | (uVar12 & 0xff) << 0x10 | (uVar6 & 0xff) << 8 | uVar2)
                     >> 3) & param_2[1];
    if (iVar11 == *(int *)(iVar10 + -0x90 + uVar12 * -0x90)) {
      if (*(int *)(iVar10 + uVar12 * -0x90 + -0x8c) == 3) goto LAB_00ab256c;
      FUN_0070b7fc(&local_b0);
      FUN_00a3fbd0(local_140,&local_b0,param_3,param_4,param_5);
      piVar7 = (int *)((uint)local_140 | 4);
      local_150 = *piVar7;
      iStack_14c = piVar7[1];
      iStack_148 = piVar7[2];
      if (local_140[0] == 3) {
        *param_1 = local_150;
        param_1[1] = iStack_14c;
        param_1[2] = iStack_148;
        return;
      }
      param_5 = local_1e0;
      FUN_01bed4e2(auStack_1d0,auStack_130,0x7c);
      piVar7 = (int *)((uint)param_5 | 4);
      *piVar7 = local_150;
      piVar7[1] = iStack_14c;
      piVar7[2] = iStack_148;
      local_1e0[0] = local_140[0];
      goto LAB_00ab25b0;
    }
  }
  if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) goto LAB_00ab256c;
  local_1ec = local_1ec + 4;
  uVar4 = uVar4 + local_1ec;
  goto LAB_00ab24c4;
}

