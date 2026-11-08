// FUN_00ee13d4 @ 00ee13d4 size=796 calls_out=5 calls_in=4
// strings: a UUID string

int FUN_00ee13d4(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5
                )

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint local_40;
  int *local_3c;
  
  if (*param_1 != '\0') {
    local_40 = 10;
    iVar1 = FUN_01966fbc(&local_40,0,0);
    return iVar1;
  }
  piVar6 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar7 = 1;
    iVar1 = *piVar6;
    pcVar4 = ",";
    do {
      uVar5 = *(uint *)(iVar1 + 4);
      uVar3 = uVar5 ^ 0x7fffffff;
      if (uVar7 < uVar3) {
        uVar3 = uVar7;
      }
      FUN_01284394(iVar1,pcVar4,uVar3);
      if (uVar5 == 0x7fffffff) goto LAB_00ee166c;
      pcVar4 = pcVar4 + uVar3;
      uVar7 = uVar7 - uVar3;
    } while (uVar7 != 0);
  }
  iVar1 = *piVar6;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_40,iVar1,param_2,param_3);
  if ((char)local_40 == '\x04') {
    uVar7 = 1;
    iVar1 = *piVar6;
    pcVar4 = ":";
    do {
      uVar5 = *(uint *)(iVar1 + 4);
      uVar3 = uVar5 ^ 0x7fffffff;
      if (uVar7 < uVar3) {
        uVar3 = uVar7;
      }
      FUN_01284394(iVar1,pcVar4,uVar3);
      if (uVar5 == 0x7fffffff) goto LAB_00ee166c;
      pcVar4 = pcVar4 + uVar3;
      uVar7 = uVar7 - uVar3;
    } while (uVar7 != 0);
    if ((param_5 & 1) != 0) {
      uVar7 = 1;
      iVar1 = *piVar6;
      pcVar4 = "{";
      do {
        uVar5 = *(uint *)(iVar1 + 4);
        uVar3 = uVar5 ^ 0x7fffffff;
        if (uVar7 < uVar3) {
          uVar3 = uVar7;
        }
        FUN_01284394(iVar1,pcVar4,uVar3);
        if (uVar5 == 0x7fffffff) goto LAB_00ee16c8;
        pcVar4 = pcVar4 + uVar3;
        uVar7 = uVar7 - uVar3;
      } while (uVar7 != 0);
      local_40 = 0x100;
      local_3c = piVar6;
      iVar1 = FUN_00ebeb78(&local_40,&DAT_0056ff70,8);
      if (iVar1 != 0) {
        return iVar1;
      }
      if ((local_40 & 0xff00) == 0) {
        return 0;
      }
      if ((local_40 & 1) != 0) {
        return 0;
      }
      uVar7 = 1;
      iVar1 = *local_3c;
      pcVar4 = "}";
      while( true ) {
        uVar5 = *(uint *)(iVar1 + 4);
        uVar3 = uVar5 ^ 0x7fffffff;
        if (uVar7 < uVar3) {
          uVar3 = uVar7;
        }
        FUN_01284394(iVar1,pcVar4,uVar3);
        if (uVar5 == 0x7fffffff) break;
        pcVar4 = pcVar4 + uVar3;
        uVar7 = uVar7 - uVar3;
        if (uVar7 == 0) {
          return 0;
        }
      }
LAB_00ee16c8:
      iVar1 = FUN_01966f50(2,&DAT_01d2e7b8);
      return iVar1;
    }
    uVar7 = 4;
    iVar1 = *piVar6;
    puVar2 = &DAT_0056d030;
    while( true ) {
      uVar5 = *(uint *)(iVar1 + 4);
      uVar3 = uVar5 ^ 0x7fffffff;
      if (uVar7 < uVar3) {
        uVar3 = uVar7;
      }
      FUN_01284394(iVar1,puVar2,uVar3);
      if (uVar5 == 0x7fffffff) break;
      puVar2 = puVar2 + uVar3;
      uVar7 = uVar7 - uVar3;
      if (uVar7 == 0) {
        return 0;
      }
    }
LAB_00ee166c:
    local_40 = 2;
    local_3c = &DAT_01d2e7b8;
  }
  iVar1 = FUN_01966f50(local_40,local_3c);
  return iVar1;
}

