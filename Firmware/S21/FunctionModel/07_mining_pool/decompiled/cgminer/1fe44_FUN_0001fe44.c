// FUN_0001fe44 @ 0001fe44  size=496  callers=3
// program: cgminer


int FUN_0001fe44(uint *param_1,uint *param_2)

{
  char *param3;
  char *param4;
  uint *puVar1;
  uint *puVar2;
  char *param5;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_858;
  uint local_854;
  uint local_850;
  uint local_84c;
  uint local_848;
  uint local_844;
  uint local_840;
  uint local_83c;
  uint local_838;
  uint local_834;
  uint local_830;
  uint local_82c;
  uint local_828;
  uint local_824;
  uint local_820;
  uint uStack_81c;
  char acStack_818 [2052];
  
  puVar2 = param_1 + 8;
  puVar1 = param_2 + 8;
  do {
    puVar2 = puVar2 + -1;
    puVar1 = puVar1 + -1;
    if (*puVar1 < *puVar2) {
      iVar3 = 0;
      goto LAB_0001fe78;
    }
  } while ((*puVar1 <= *puVar2) && (param_1 != puVar2));
  iVar3 = 1;
LAB_0001fe78:
  if (DAT_000686f1 == '\0') {
    return iVar3;
  }
  uVar4 = param_1[6];
  uVar5 = param_1[7];
  uVar7 = param_1[5];
  uVar6 = param_1[4];
  local_854 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
              uVar4 >> 0x18;
  local_858 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
              uVar5 >> 0x18;
  uVar4 = param_1[2];
  local_850 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
              uVar7 >> 0x18;
  local_84c = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
              uVar6 >> 0x18;
  uVar5 = param_1[3];
  uVar6 = *param_1;
  uVar7 = param_1[1];
  local_844 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
              uVar4 >> 0x18;
  local_848 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
              uVar5 >> 0x18;
  uVar4 = param_2[7];
  local_840 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
              uVar7 >> 0x18;
  local_83c = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
              uVar6 >> 0x18;
  local_838 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
              uVar4 >> 0x18;
  uVar4 = param_2[6];
  uVar6 = param_2[5];
  local_834 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
              uVar4 >> 0x18;
  uVar4 = param_2[4];
  uVar5 = param_2[3];
  local_830 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
              uVar6 >> 0x18;
  local_82c = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
              uVar4 >> 0x18;
  uVar6 = param_2[2];
  local_828 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
              uVar5 >> 0x18;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  local_824 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
              uVar6 >> 0x18;
  uStack_81c = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
               uVar4 >> 0x18;
  local_820 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
              uVar5 >> 0x18;
  param3 = (char *)FUN_0001fac8(&local_858,0x20);
  param4 = (char *)FUN_0001fac8(&local_838,0x20);
  if ((DAT_000686f1 != '\0') &&
     (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    param5 = "YES (hash <= target)";
    if (iVar3 == 0) {
      param5 = "no (false positive; hash > target)";
    }
    snprintf(acStack_818,0x800," Proof: %s\nTarget: %s\nTrgVal? %s",param3,param4,param5);
    FUN_0001dd98(7,acStack_818,0);
  }
  free(param3);
  free(param4);
  return iVar3;
}

