// FUN_00024038 @ 00024038  size=356  callers=1
// program: bmminer


void FUN_00024038(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  char local_2028 [8196];
  
  if (param_2 < 2) {
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2028,"XXTEA encode failes, N <= 1 found.\n",0x24);
      FUN_0004948c(3,local_2028,0);
      return;
    }
  }
  else {
    uVar4 = param_1[param_2 + 0x3fffffff];
    iVar1 = FUN_00098658(0x34);
    uVar6 = 0;
    do {
      uVar7 = 0;
      uVar6 = uVar6 + 0x9e3779b9;
      puVar5 = param_1;
      do {
        uVar2 = puVar5[1];
        uVar3 = uVar6 >> 2 ^ uVar7;
        uVar7 = uVar7 + 1;
        uVar4 = ((*(uint *)(param_3 + (uVar3 & 3) * 4) ^ uVar4) + (uVar6 ^ uVar2) ^
                (uVar2 << 2 ^ uVar4 >> 5) + (uVar4 << 4 ^ uVar2 >> 3)) + *puVar5;
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while (uVar7 != param_2 - 1U);
      uVar7 = *param_1;
      uVar4 = ((uVar4 ^ *(uint *)(param_3 + ((uVar6 >> 2 ^ param_2 - 1U) & 3) * 4)) +
               (uVar6 ^ uVar7) ^ (uVar7 << 2 ^ uVar4 >> 5) + (uVar4 * 0x10 ^ uVar7 >> 3)) +
              param_1[param_2 + 0x3fffffff];
      param_1[param_2 + 0x3fffffff] = uVar4;
    } while (uVar6 != iVar1 * -0x61c88647 + 0xb54cda56U);
  }
  return;
}

