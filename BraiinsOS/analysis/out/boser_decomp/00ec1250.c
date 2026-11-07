// FUN_00ec1250 @ 00ec1250 size=572 calls_out=6 calls_in=2
// strings: a UUID string

undefined4
FUN_00ec1250(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 *local_4c;
  
  if (*param_1 == '\0') {
    piVar6 = *(int **)(param_1 + 4);
    if (param_1[1] != '\x01') {
      uVar7 = 1;
      iVar4 = *piVar6;
      pcVar3 = ",";
      do {
        uVar8 = *(uint *)(iVar4 + 4);
        uVar5 = uVar8 ^ 0x7fffffff;
        if (uVar7 < uVar5) {
          uVar5 = uVar7;
        }
        FUN_01284394(iVar4,pcVar3,uVar5);
        if (uVar8 == 0x7fffffff) goto LAB_00ec1474;
        pcVar3 = pcVar3 + uVar5;
        uVar7 = uVar7 - uVar5;
      } while (uVar7 != 0);
    }
    iVar4 = *piVar6;
    param_1[1] = '\x02';
    FUN_0096b2b0(&local_50,iVar4,param_2,param_3);
    if ((char)local_50 != '\x04') goto LAB_00ec1480;
    uVar7 = 1;
    iVar4 = *piVar6;
    pcVar3 = ":";
    do {
      uVar8 = *(uint *)(iVar4 + 4);
      uVar5 = uVar8 ^ 0x7fffffff;
      if (uVar7 < uVar5) {
        uVar5 = uVar7;
      }
      FUN_01284394(iVar4,pcVar3,uVar5);
      if (uVar8 == 0x7fffffff) goto LAB_00ec1474;
      pcVar3 = pcVar3 + uVar5;
      uVar7 = uVar7 - uVar5;
    } while (uVar7 != 0);
    if ((param_5 & 1) == 0) {
      uVar7 = 4;
      iVar4 = *piVar6;
      puVar2 = &DAT_0056d030;
      do {
        uVar8 = *(uint *)(iVar4 + 4);
        uVar5 = uVar8 ^ 0x7fffffff;
        if (uVar7 < uVar5) {
          uVar5 = uVar7;
        }
        FUN_01284394(iVar4,puVar2,uVar5);
        if (uVar8 == 0x7fffffff) {
          local_50 = 2;
          local_4c = &DAT_01d2e7b8;
          goto LAB_00ec1480;
        }
        puVar2 = puVar2 + uVar5;
        uVar7 = uVar7 - uVar5;
      } while (uVar7 != 0);
      uVar1 = 0;
    }
    else {
      uVar9 = FUN_01415f98(&local_50,extraout_r1,param_7,param_8);
      FUN_00a5208c(&local_58,*piVar6,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
      uVar1 = 0;
      if ((char)local_58 != '\x04') {
        uVar1 = FUN_01966f50(local_58,local_54);
      }
    }
  }
  else {
    local_50 = 10;
    uVar1 = FUN_01966fbc(&local_50,0,0);
  }
  return uVar1;
LAB_00ec1474:
  local_50 = 2;
  local_4c = &DAT_01d2e7b8;
LAB_00ec1480:
  uVar1 = FUN_01966f50(local_50,local_4c);
  return uVar1;
}

