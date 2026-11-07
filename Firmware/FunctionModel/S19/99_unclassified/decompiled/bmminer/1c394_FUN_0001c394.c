// FUN_0001c394 @ 0001c394  size=620  callers=1
// program: bmminer


void FUN_0001c394(uint *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char local_828 [32];
  undefined4 local_808;
  char acStack_804 [2028];
  
  puVar2 = (uint *)FUN_0001c2ec(param_3);
  if (DAT_000872a4 == 2) {
    if ((param_2 & 7) == 0) {
      uVar8 = param_2 + 3;
      if (-1 < (int)param_2) {
        uVar8 = param_2;
      }
      iVar1 = (int)uVar8 >> 2;
      if (iVar1 < 2) {
        if (3 < DAT_00087bbc) {
          builtin_strncpy(local_828,"XXTEA encode failes, N <= 1 foun",0x20);
          local_808._0_1_ = 'd';
          local_808._1_1_ = '.';
          local_808._2_1_ = '\n';
          local_808._3_1_ = '\0';
          FUN_00032218(3,local_828,0);
          return;
        }
      }
      else {
        uVar8 = param_1[iVar1 + 0x3fffffff];
        iVar3 = FUN_00067408(0x34);
        uVar9 = 0;
        do {
          uVar10 = 0;
          uVar9 = uVar9 + 0x9e3779b9;
          puVar5 = param_1;
          do {
            uVar4 = puVar5[1];
            uVar7 = uVar9 >> 2 ^ uVar10;
            uVar10 = uVar10 + 1;
            uVar8 = ((puVar2[uVar7 & 3] ^ uVar8) + (uVar9 ^ uVar4) ^
                    (uVar4 << 2 ^ uVar8 >> 5) + (uVar8 << 4 ^ uVar4 >> 3)) + *puVar5;
            *puVar5 = uVar8;
            puVar5 = puVar5 + 1;
          } while (uVar10 != iVar1 - 1U);
          uVar10 = *param_1;
          uVar8 = ((uVar8 ^ puVar2[(uVar9 >> 2 ^ iVar1 - 1U) & 3]) + (uVar9 ^ uVar10) ^
                  (uVar10 << 2 ^ uVar8 >> 5) + (uVar8 * 0x10 ^ uVar10 >> 3)) +
                  param_1[iVar1 + 0x3fffffff];
          param_1[iVar1 + 0x3fffffff] = uVar8;
        } while (uVar9 != iVar3 * -0x61c88647 + 0xb54cda56U);
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
    builtin_strncpy(acStack_804,"A requires the input as 64-bit aligned, fail to encode!\n",0x39);
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
  puVar5 = param_1;
  do {
    puVar6 = puVar5 + 1;
    *puVar5 = *puVar2 ^ *puVar5;
    puVar5 = puVar6;
  } while (puVar6 != param_1 + ((int)param_2 >> 2));
  return;
}

