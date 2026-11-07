// FUN_00f0a9ec @ 00f0a9ec size=596 calls_out=6 calls_in=1
// strings: a UUID string | additionalProperties | internal error: entered unreachable code

undefined4 FUN_00f0a9ec(char *param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar8 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar5 = 1;
    iVar3 = *piVar8;
    pcVar6 = ",";
    do {
      uVar7 = *(uint *)(iVar3 + 4);
      uVar2 = uVar7 ^ 0x7fffffff;
      if (uVar5 < uVar2) {
        uVar2 = uVar5;
      }
      FUN_01284394(iVar3,pcVar6,uVar2);
      if (uVar7 == 0x7fffffff) goto LAB_00f0abfc;
      pcVar6 = pcVar6 + uVar2;
      uVar5 = uVar5 - uVar2;
    } while (uVar5 != 0);
  }
  iVar3 = *piVar8;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar3,"additionalProperties",0x14);
  if ((char)local_30 == '\x04') {
    uVar5 = 1;
    iVar3 = *piVar8;
    pcVar6 = ":";
    do {
      uVar7 = *(uint *)(iVar3 + 4);
      uVar2 = uVar7 ^ 0x7fffffff;
      if (uVar5 < uVar2) {
        uVar2 = uVar5;
      }
      FUN_01284394(iVar3,pcVar6,uVar2);
      if (uVar7 == 0x7fffffff) goto LAB_00f0abfc;
      pcVar6 = pcVar6 + uVar2;
      uVar5 = uVar5 - uVar2;
    } while (uVar5 != 0);
    param_2 = (int *)*param_2;
    if (param_2 == (int *)0x0) {
      uVar5 = 4;
      iVar3 = *piVar8;
      puVar4 = &DAT_0056d030;
      do {
        uVar7 = *(uint *)(iVar3 + 4);
        uVar2 = uVar7 ^ 0x7fffffff;
        if (uVar5 < uVar2) {
          uVar2 = uVar5;
        }
        FUN_01284394(iVar3,puVar4,uVar2);
        if (uVar7 == 0x7fffffff) {
          local_30 = 2;
          local_2c = &DAT_01d2e7b8;
          goto LAB_00f0ac08;
        }
        puVar4 = puVar4 + uVar2;
        uVar5 = uVar5 - uVar2;
      } while (uVar5 != 0);
      uVar1 = 0;
    }
    else {
      if (*param_2 != 8) {
        uVar1 = FUN_00d91e78(param_2,piVar8);
        return uVar1;
      }
      bVar9 = (char)param_2[1] == '\0';
      pcVar6 = "true\x1e\x05";
      if (bVar9) {
        pcVar6 = "f";
      }
      uVar1 = 5;
      if (!bVar9) {
        uVar1 = 4;
      }
      FUN_00a5208c(&local_30,*piVar8,pcVar6,uVar1);
      uVar1 = 0;
      if ((char)local_30 != '\x04') {
        uVar1 = FUN_01966f50(local_30,local_2c);
      }
    }
    return uVar1;
  }
LAB_00f0ac08:
  uVar1 = FUN_01966f50(local_30,local_2c);
  return uVar1;
LAB_00f0abfc:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
  goto LAB_00f0ac08;
}

