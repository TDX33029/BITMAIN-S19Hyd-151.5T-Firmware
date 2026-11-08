// FUN_00ebce1c @ 00ebce1c size=684 calls_out=4 calls_in=2
// strings: a UUID string | style | spaceDelimited | simplemethod not allowed | label | pipeDelimited

undefined4 FUN_00ebce1c(char *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar8 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar4 = 1;
    iVar6 = *piVar8;
    pcVar5 = ",";
    do {
      uVar7 = *(uint *)(iVar6 + 4);
      uVar2 = uVar7 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar6,pcVar5,uVar2);
      if (uVar7 == 0x7fffffff) goto LAB_00ebd0b8;
      pcVar5 = pcVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
    } while (uVar4 != 0);
  }
  iVar6 = *piVar8;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar6,"style",5);
  if ((char)local_30 != '\x04') goto LAB_00ebd0c4;
  uVar4 = 1;
  iVar6 = *piVar8;
  pcVar5 = ":";
  do {
    uVar7 = *(uint *)(iVar6 + 4);
    uVar2 = uVar7 ^ 0x7fffffff;
    if (uVar4 < uVar2) {
      uVar2 = uVar4;
    }
    FUN_01284394(iVar6,pcVar5,uVar2);
    if (uVar7 == 0x7fffffff) goto LAB_00ebd0b8;
    pcVar5 = pcVar5 + uVar2;
    uVar4 = uVar4 - uVar2;
  } while (uVar4 != 0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2) {
  case 0:
    iVar6 = *piVar8;
    pcVar5 = "matrix";
    goto LAB_00ebcfb4;
  case 1:
    iVar6 = *piVar8;
    uVar1 = 5;
    pcVar5 = "label";
    break;
  case 2:
    iVar6 = *piVar8;
    uVar1 = 4;
    pcVar5 = &DAT_0056cf54;
    break;
  case 3:
    iVar6 = *piVar8;
    pcVar5 = "simplemethod not allowed";
LAB_00ebcfb4:
    uVar1 = 6;
    break;
  case 4:
    iVar6 = *piVar8;
    uVar1 = 0xe;
    pcVar5 = "spaceDelimited";
    break;
  case 5:
    iVar6 = *piVar8;
    uVar1 = 0xd;
    pcVar5 = "pipeDelimited";
    break;
  case 6:
    iVar6 = *piVar8;
    uVar1 = 10;
    pcVar5 = "deepObjectdiscriminator";
    break;
  case 7:
    uVar4 = 4;
    iVar6 = *piVar8;
    puVar3 = &DAT_0056d030;
    while( true ) {
      uVar7 = *(uint *)(iVar6 + 4);
      uVar2 = uVar7 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar6,puVar3,uVar2);
      if (uVar7 == 0x7fffffff) break;
      puVar3 = puVar3 + uVar2;
      uVar4 = uVar4 - uVar2;
      if (uVar4 == 0) {
        return 0;
      }
    }
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
    goto LAB_00ebd0c4;
  }
  FUN_0096b2b0(&local_30,iVar6,pcVar5,uVar1);
  uVar1 = 0;
  if ((char)local_30 != '\x04') {
    uVar1 = FUN_01966f50(local_30,local_2c);
  }
  return uVar1;
LAB_00ebd0b8:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
LAB_00ebd0c4:
  uVar1 = FUN_01966f50(local_30,local_2c);
  return uVar1;
}

