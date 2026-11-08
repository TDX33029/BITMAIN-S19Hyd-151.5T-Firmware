// FUN_016ce37c @ 016ce37c size=1072 calls_out=1 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_016ce37c(undefined4 *param_1,undefined4 *param_2)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  code *pcVar6;
  char ****ppppcVar7;
  int iVar8;
  char ****ppppcVar9;
  undefined4 uVar10;
  char ****local_30;
  short ****local_2c;
  code *local_28;
  
  ppppcVar7 = (char ****)*param_1;
  iVar8 = param_1[1];
  if (iVar8 == 4) {
    uVar10 = *param_2;
    iVar3 = param_2[1];
    local_28 = FUN_0127337c;
    local_30 = ppppcVar7;
    local_2c = (short ****)&local_30;
    iVar8 = FUN_00fa948c(uVar10,iVar3,&DAT_00590e71,&local_2c);
    if (iVar8 != 0) {
      return 1;
    }
    local_30 = (char ****)((int)ppppcVar7 + 1);
    pcVar6 = *(code **)(iVar3 + 0xc);
    iVar8 = (*pcVar6)(uVar10,&DAT_00418eb7,1);
    if (iVar8 != 0) {
      return 1;
    }
    local_28 = FUN_0127337c;
    local_2c = (short ****)&local_30;
    iVar8 = FUN_00fa948c(uVar10,iVar3,&DAT_00590e71,&local_2c);
    if (iVar8 != 0) {
      return 1;
    }
    local_30 = (char ****)((int)ppppcVar7 + 2);
    iVar8 = (*pcVar6)(uVar10,&DAT_00418eb7,1);
    if (iVar8 != 0) {
      return 1;
    }
    local_28 = FUN_0127337c;
    local_2c = (short ****)&local_30;
    iVar8 = FUN_00fa948c(uVar10,iVar3,&DAT_00590e71,&local_2c);
    if (iVar8 != 0) {
      return 1;
    }
    local_30 = (char ****)((int)ppppcVar7 + 3);
    iVar8 = (*pcVar6)(uVar10,&DAT_00418eb7,1);
    if (iVar8 != 0) {
      return 1;
    }
    local_28 = FUN_0127337c;
    local_2c = (short ****)&local_30;
    iVar8 = FUN_00fa948c(uVar10,iVar3,&DAT_00590e71,&local_2c);
    if (iVar8 == 0) {
      return 0;
    }
    return 1;
  }
  if (iVar8 != 0x10) {
    uVar10 = *param_2;
    iVar4 = param_2[1];
    pcVar6 = *(code **)(iVar4 + 0xc);
    iVar3 = (*pcVar6)(uVar10,&DAT_00418ebb,10);
    if (iVar3 != 0) {
      return 1;
    }
    if (iVar8 != 0) {
      local_28 = FUN_01576770;
      local_30 = ppppcVar7;
      local_2c = (short ****)&local_30;
      iVar3 = FUN_00fa948c(uVar10,iVar4,&DAT_00569c68,&local_2c);
      if (iVar3 != 0) {
        return 1;
      }
      iVar8 = iVar8 + -1;
      if (iVar8 != 0) {
        do {
          ppppcVar7 = (char ****)((int)ppppcVar7 + 1);
          local_30 = ppppcVar7;
          iVar3 = (*pcVar6)(uVar10,&DAT_0041950f,2);
          if (iVar3 != 0) {
            return 1;
          }
          local_28 = FUN_01576770;
          local_2c = (short ****)&local_30;
          iVar3 = FUN_00fa948c(uVar10,iVar4,&DAT_00569c68,&local_2c);
          if (iVar3 != 0) {
            return 1;
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    uVar10 = (*pcVar6)(uVar10,&DAT_00418ec5,1);
    return uVar10;
  }
  uVar10 = *param_2;
  iVar8 = param_2[1];
  if (*(char *)ppppcVar7 != '\0') {
    local_28 = FUN_00facb58;
    local_2c = (short ****)ppppcVar7;
    iVar3 = FUN_00fa948c(uVar10,iVar8,&DAT_00590e71,&local_2c);
    if (iVar3 != 0) {
      return 1;
    }
    if (*(char *)ppppcVar7 != '\0') {
      puVar5 = &DAT_00569c68;
      goto LAB_016ce5e0;
    }
  }
  puVar5 = &DAT_00590e71;
LAB_016ce5e0:
  local_2c = (short ****)((int)ppppcVar7 + 1);
  local_28 = FUN_00facb58;
  iVar3 = FUN_00fa948c(uVar10,iVar8,puVar5,&local_2c);
  if (iVar3 != 0) {
    return 1;
  }
  bVar2 = false;
  iVar3 = -0xe;
  do {
    ppppcVar9 = (char ****)((int)ppppcVar7 + iVar3 + 0x10);
    sVar1 = *(short *)ppppcVar9;
    if (sVar1 != 0) {
      if (bVar2) {
        iVar4 = (**(code **)(iVar8 + 0xc))(uVar10,&DAT_00418eb9,2);
        if (iVar4 != 0) {
          return 1;
        }
      }
      else {
        iVar4 = (**(code **)(iVar8 + 0xc))(uVar10,&DAT_00418eb8,1);
        if (iVar4 != 0) {
          return 1;
        }
      }
      if (*(char *)ppppcVar9 != '\0') {
        local_28 = FUN_00facb58;
        local_2c = (short ****)ppppcVar9;
        iVar4 = FUN_00fa948c(uVar10,iVar8,&DAT_00590e71,&local_2c);
        if (iVar4 != 0) {
          return 1;
        }
        if (*(char *)ppppcVar9 != '\0') {
          local_2c = (short ****)((int)ppppcVar7 + iVar3 + 0x11);
          local_28 = FUN_00facb58;
          iVar4 = FUN_00fa948c(uVar10,iVar8,&DAT_00569c68,&local_2c);
          if (iVar4 != 0) {
            return 1;
          }
          goto LAB_016ce640;
        }
      }
      local_2c = (short ****)((int)ppppcVar7 + iVar3 + 0x11);
      local_28 = FUN_00facb58;
      iVar4 = FUN_00fa948c(uVar10,iVar8,&DAT_00590e71,&local_2c);
      if (iVar4 != 0) {
        return 1;
      }
    }
LAB_016ce640:
    iVar3 = iVar3 + 2;
    bVar2 = sVar1 == 0;
    if (iVar3 == 0) {
      return 0;
    }
  } while( true );
}

