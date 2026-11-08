// FUN_00f0a2ac @ 00f0a2ac size=1248 calls_out=7 calls_in=1
// strings: a UUID string | prefix | internal error: entered unreachable code

int FUN_00f0a2ac(char *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  uint local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar10 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar7 = 1;
    iVar12 = *piVar10;
    pcVar8 = ",";
    do {
      uVar9 = *(uint *)(iVar12 + 4);
      uVar5 = uVar9 ^ 0x7fffffff;
      if (uVar7 < uVar5) {
        uVar5 = uVar7;
      }
      FUN_01284394(iVar12,pcVar8,uVar5);
      if (uVar9 == 0x7fffffff) goto LAB_00f0a4bc;
      pcVar8 = pcVar8 + uVar5;
      uVar7 = uVar7 - uVar5;
    } while (uVar7 != 0);
  }
  iVar12 = *piVar10;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar12,&DAT_004ba2e3,3);
  if ((char)local_30 != '\x04') {
LAB_00f0a718:
    iVar12 = FUN_01966f50(local_30,local_2c);
    return iVar12;
  }
  uVar7 = 1;
  iVar12 = *piVar10;
  pcVar8 = ":";
  do {
    uVar9 = *(uint *)(iVar12 + 4);
    uVar5 = uVar9 ^ 0x7fffffff;
    if (uVar7 < uVar5) {
      uVar5 = uVar7;
    }
    FUN_01284394(iVar12,pcVar8,uVar5);
    if (uVar9 == 0x7fffffff) goto LAB_00f0a4bc;
    pcVar8 = pcVar8 + uVar5;
    uVar7 = uVar7 - uVar5;
  } while (uVar7 != 0);
  iVar12 = *param_2;
  if (iVar12 == -0x7ffffffe) {
    uVar7 = 4;
    iVar12 = *piVar10;
    puVar6 = &DAT_0056d030;
    while( true ) {
      uVar9 = *(uint *)(iVar12 + 4);
      uVar5 = uVar9 ^ 0x7fffffff;
      if (uVar7 < uVar5) {
        uVar5 = uVar7;
      }
      FUN_01284394(iVar12,puVar6,uVar5);
      if (uVar9 == 0x7fffffff) break;
      puVar6 = puVar6 + uVar5;
      uVar7 = uVar7 - uVar5;
      if (uVar7 == 0) {
        return 0;
      }
    }
LAB_00f0a4bc:
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
    goto LAB_00f0a718;
  }
  uVar7 = 1;
  iVar3 = param_2[3];
  pcVar8 = "{";
  cVar1 = (char)param_2[9];
  iVar11 = *piVar10;
  cVar2 = *(char *)((int)param_2 + 0x25);
  iVar4 = param_2[6];
  do {
    uVar9 = *(uint *)(iVar11 + 4);
    uVar5 = uVar9 ^ 0x7fffffff;
    if (uVar7 < uVar5) {
      uVar5 = uVar7;
    }
    FUN_01284394(iVar11,pcVar8,uVar5);
    if (uVar9 == 0x7fffffff) goto LAB_00f0a754;
    pcVar8 = pcVar8 + uVar5;
    uVar7 = uVar7 - uVar5;
  } while (uVar7 != 0);
  bVar13 = iVar12 != -0x7fffffff;
  if (iVar3 != -0x7fffffff) {
    bVar13 = bVar13 + 1;
  }
  if (iVar4 != -0x7fffffff) {
    bVar13 = bVar13 + 1;
  }
  uVar7 = 0x100;
  if (cVar1 != '\x02') {
    bVar13 = bVar13 + 1;
  }
  if (cVar2 != '\x02') {
    bVar13 = bVar13 | 1;
  }
  if (bVar13 == 0) {
    uVar7 = 1;
    pcVar8 = "}";
    do {
      uVar9 = *(uint *)(iVar11 + 4);
      uVar5 = uVar9 ^ 0x7fffffff;
      if (uVar7 < uVar5) {
        uVar5 = uVar7;
      }
      FUN_01284394(iVar11,pcVar8,uVar5);
      if (uVar9 == 0x7fffffff) goto LAB_00f0a754;
      pcVar8 = pcVar8 + uVar5;
      uVar7 = uVar7 - uVar5;
    } while (uVar7 != 0);
    uVar7 = 0;
  }
  local_38 = uVar7;
  local_34 = piVar10;
  if ((iVar12 != -0x7fffffff) &&
     (iVar12 = FUN_00ec0664(&local_38,&DAT_0056ee18,4,param_2), iVar12 != 0)) {
    return iVar12;
  }
  if (iVar3 == -0x7fffffff) {
LAB_00f0a604:
    if (iVar4 != -0x7fffffff) {
      if ((char)local_38 == '\x01') goto LAB_00f0a724;
      iVar12 = FUN_00ec0664(&local_38,"prefix",6,param_2 + 6);
      if (iVar12 != 0) {
        return iVar12;
      }
    }
    if (cVar1 != '\x02') {
      if ((char)local_38 == '\x01') goto LAB_00f0a724;
      iVar12 = FUN_00ebd130(&local_38,&DAT_003ef981,9,cVar1);
      if (iVar12 != 0) {
        return iVar12;
      }
    }
    if (cVar2 != '\x02') {
      if ((char)local_38 == '\x01') goto LAB_00f0a724;
      iVar12 = FUN_00ebd130(&local_38,&DAT_003ef98a,7,cVar2);
      if (iVar12 != 0) {
        return iVar12;
      }
    }
    if ((local_38 & 0xff00) == 0) {
      return 0;
    }
    if ((local_38 & 1) != 0) {
      return 0;
    }
    uVar7 = 1;
    iVar12 = *local_34;
    pcVar8 = "}";
    while( true ) {
      uVar9 = *(uint *)(iVar12 + 4);
      uVar5 = uVar9 ^ 0x7fffffff;
      if (uVar7 < uVar5) {
        uVar5 = uVar7;
      }
      FUN_01284394(iVar12,pcVar8,uVar5);
      if (uVar9 == 0x7fffffff) break;
      pcVar8 = pcVar8 + uVar5;
      uVar7 = uVar7 - uVar5;
      if (uVar7 == 0) {
        return 0;
      }
    }
LAB_00f0a754:
    iVar12 = FUN_01966f50(2,&DAT_01d2e7b8);
  }
  else {
    if ((char)local_38 != '\x01') {
      iVar12 = FUN_00ec0664(&local_38,&DAT_003ef978,9,param_2 + 3);
      if (iVar12 != 0) {
        return iVar12;
      }
      goto LAB_00f0a604;
    }
LAB_00f0a724:
    local_30 = 10;
    iVar12 = FUN_01966fbc(&local_30,0,0);
  }
  return iVar12;
}

