// FUN_0004b49c @ 0004b49c  size=500  callers=0
// program: bmminer


int FUN_0004b49c(uint *param_1,uint *param_2)

{
  char *param3;
  char *param4;
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  char *param5;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_2058;
  uint local_2054;
  uint local_2050;
  uint local_204c;
  uint local_2048;
  uint local_2044;
  uint local_2040;
  uint local_203c;
  uint local_2038;
  uint local_2034;
  uint local_2030;
  uint local_202c;
  uint local_2028;
  uint local_2024;
  uint local_2020;
  uint uStack_201c;
  char acStack_2018 [8196];
  
  puVar3 = param_1 + 8;
  puVar1 = param_2 + 8;
  do {
    puVar3 = puVar3 + -1;
    puVar1 = puVar1 + -1;
    if (*puVar1 < *puVar3) {
      iVar4 = 0;
      goto LAB_0004b4d0;
    }
  } while ((*puVar1 <= *puVar3) && (param_1 != puVar3));
  iVar4 = 1;
LAB_0004b4d0:
  if (DAT_008c702e == '\0') {
    return iVar4;
  }
  uVar6 = param_1[5];
  uVar2 = param_1[4];
  uVar5 = param_1[7];
  uVar7 = param_1[6];
  local_2050 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
               uVar6 >> 0x18;
  local_204c = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
               uVar2 >> 0x18;
  uVar6 = param_1[2];
  local_2058 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
               uVar5 >> 0x18;
  local_2054 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
               uVar7 >> 0x18;
  uVar2 = param_1[1];
  uVar5 = param_1[3];
  local_2040 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
               uVar2 >> 0x18;
  uVar7 = *param_1;
  local_2044 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
               uVar6 >> 0x18;
  uVar2 = param_2[6];
  local_2048 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
               uVar5 >> 0x18;
  uVar6 = param_2[7];
  local_203c = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
               uVar7 >> 0x18;
  uVar5 = param_2[5];
  local_2034 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
               uVar2 >> 0x18;
  local_2038 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
               uVar6 >> 0x18;
  uVar2 = param_2[2];
  local_2030 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
               uVar5 >> 0x18;
  uVar5 = param_2[4];
  local_2024 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
               uVar2 >> 0x18;
  uVar6 = param_2[3];
  uVar2 = param_2[1];
  local_202c = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
               uVar5 >> 0x18;
  uVar5 = *param_2;
  local_2028 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
               uVar6 >> 0x18;
  local_2020 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
               uVar2 >> 0x18;
  uStack_201c = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                uVar5 >> 0x18;
  param3 = (char *)FUN_0004b100(&local_2058,0x20);
  param4 = (char *)FUN_0004b100(&local_2038,0x20);
  if ((DAT_008c702e != '\0') &&
     (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
    param5 = "YES (hash <= target)";
    if (iVar4 == 0) {
      param5 = "no (false positive; hash > target)";
    }
    snprintf(acStack_2018,0x2000," Proof: %s\nTarget: %s\nTrgVal? %s",param3,param4,param5);
    FUN_0004948c(7,acStack_2018,0);
  }
  free(param3);
  free(param4);
  return iVar4;
}

