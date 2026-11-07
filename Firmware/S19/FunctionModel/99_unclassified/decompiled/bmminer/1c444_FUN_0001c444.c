// FUN_0001c444 @ 0001c444  size=624  callers=1
// program: bmminer


void FUN_0001c444(uint *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char local_828 [32];
  undefined4 local_808;
  char acStack_804 [2028];
  
  puVar3 = (uint *)FUN_0001c2ec(param_3);
  if (DAT_000872a4 == 2) {
    if ((param_2 & 7) == 0) {
      uVar6 = param_2 + 3;
      if (-1 < (int)param_2) {
        uVar6 = param_2;
      }
      iVar2 = (int)uVar6 >> 2;
      if (iVar2 < 2) {
        if (3 < DAT_00087bbc) {
          builtin_strncpy(local_828,"XXTEA decode failes, N <= 1 foun",0x20);
          local_808._0_1_ = 'd';
          local_808._1_1_ = '.';
          local_808._2_1_ = '\n';
          local_808._3_1_ = '\0';
          FUN_00032218(3,local_828,0);
          return;
        }
      }
      else {
        iVar4 = FUN_00067408(0x34);
        uVar6 = (iVar4 + 6) * -0x61c88647;
        uVar9 = *param_1;
        iVar4 = iVar4 * 0x61c88647 + uVar6;
        do {
          uVar1 = uVar6 >> 2;
          uVar10 = iVar2 - 1;
          puVar7 = param_1 + iVar2 + 0x3fffffff;
          do {
            uVar5 = puVar7[-1];
            uVar11 = uVar1 ^ uVar10;
            uVar10 = uVar10 - 1;
            uVar9 = *puVar7 - ((uVar5 ^ puVar3[uVar11 & 3]) + (uVar6 ^ uVar9) ^
                              (uVar9 << 2 ^ uVar5 >> 5) + (uVar5 << 4 ^ uVar9 >> 3));
            *puVar7 = uVar9;
            puVar7 = puVar7 + -1;
          } while (uVar10 != 0);
          uVar10 = param_1[iVar2 + 0x3fffffff];
          uVar5 = uVar9 ^ uVar6;
          uVar6 = uVar6 + 0x61c88647;
          uVar9 = *param_1 -
                  ((uVar9 * 4 ^ uVar10 >> 5) + (uVar10 << 4 ^ uVar9 >> 3) ^
                  (uVar10 ^ puVar3[uVar1 & 3]) + uVar5);
          *param_1 = uVar9;
        } while (uVar6 != iVar4 + 0x4ab325aaU);
      }
      return;
    }
    if (DAT_00087bbc < 4) {
      return;
    }
    local_808._0_1_ = 'X';
    local_808._1_1_ = 'X';
    local_808._2_1_ = 'T';
    local_808._3_1_ = 'E';
    builtin_strncpy(acStack_804,"A requires the input as 64-bit aligned, fail to decode!\n",0x39);
    FUN_00032218(3,&local_808,0);
    return;
  }
  if (DAT_000872a4 != 3) {
    return;
  }
  if ((int)param_2 < 0) {
    param_2 = param_2 + 3;
  }
  if ((int)param_2 >> 2 < 1) {
    return;
  }
  puVar7 = param_1;
  do {
    puVar8 = puVar7 + 1;
    *puVar7 = *puVar3 ^ *puVar7;
    puVar7 = puVar8;
  } while (puVar8 != param_1 + ((int)param_2 >> 2));
  return;
}

