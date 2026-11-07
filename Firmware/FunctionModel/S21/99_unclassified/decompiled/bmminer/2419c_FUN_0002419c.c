// FUN_0002419c @ 0002419c  size=360  callers=1
// program: bmminer


void FUN_0002419c(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  char local_2028 [8196];
  
  if (param_2 < 2) {
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2028,"XXTEA decode failes, N <= 1 found.\n",0x24);
      FUN_0004948c(3,local_2028,0);
      return;
    }
  }
  else {
    iVar2 = FUN_00098658(0x34);
    uVar4 = (iVar2 + 6) * -0x61c88647;
    uVar5 = *param_1;
    iVar2 = iVar2 * 0x61c88647 + uVar4;
    do {
      uVar1 = uVar4 >> 2;
      uVar6 = param_2 - 1;
      puVar7 = param_1 + param_2 + 0x3fffffff;
      do {
        uVar3 = puVar7[-1];
        uVar8 = uVar1 ^ uVar6;
        uVar6 = uVar6 - 1;
        uVar5 = *puVar7 - ((uVar3 ^ *(uint *)(param_3 + (uVar8 & 3) * 4)) + (uVar4 ^ uVar5) ^
                          (uVar5 << 2 ^ uVar3 >> 5) + (uVar3 << 4 ^ uVar5 >> 3));
        *puVar7 = uVar5;
        puVar7 = puVar7 + -1;
      } while (uVar6 != 0);
      uVar6 = param_1[param_2 + 0x3fffffff];
      uVar3 = uVar5 ^ uVar4;
      uVar4 = uVar4 + 0x61c88647;
      uVar5 = *param_1 -
              ((uVar5 * 4 ^ uVar6 >> 5) + (uVar6 << 4 ^ uVar5 >> 3) ^
              (uVar6 ^ *(uint *)(param_3 + (uVar1 & 3) * 4)) + uVar3);
      *param_1 = uVar5;
    } while (uVar4 != iVar2 + 0x4ab325aaU);
  }
  return;
}

