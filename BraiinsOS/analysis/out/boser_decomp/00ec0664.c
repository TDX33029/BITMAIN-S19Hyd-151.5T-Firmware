// FUN_00ec0664 @ 00ec0664 size=540 calls_out=4 calls_in=1
// strings: a UUID string | internal error: entered unreachable code

undefined4 FUN_00ec0664(char *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
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
    uVar6 = 1;
    iVar4 = *piVar8;
    pcVar2 = ",";
    do {
      uVar7 = *(uint *)(iVar4 + 4);
      uVar5 = uVar7 ^ 0x7fffffff;
      if (uVar6 < uVar5) {
        uVar5 = uVar6;
      }
      FUN_01284394(iVar4,pcVar2,uVar5);
      if (uVar7 == 0x7fffffff) goto LAB_00ec083c;
      pcVar2 = pcVar2 + uVar5;
      uVar6 = uVar6 - uVar5;
    } while (uVar6 != 0);
  }
  iVar4 = *piVar8;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar4,param_2,param_3);
  if ((char)local_30 == '\x04') {
    uVar6 = 1;
    iVar4 = *piVar8;
    pcVar2 = ":";
    do {
      uVar7 = *(uint *)(iVar4 + 4);
      uVar5 = uVar7 ^ 0x7fffffff;
      if (uVar6 < uVar5) {
        uVar5 = uVar6;
      }
      FUN_01284394(iVar4,pcVar2,uVar5);
      if (uVar7 == 0x7fffffff) goto LAB_00ec083c;
      pcVar2 = pcVar2 + uVar5;
      uVar6 = uVar6 - uVar5;
    } while (uVar6 != 0);
    if (*param_4 == -0x7fffffff) {
      uVar6 = 4;
      iVar4 = *piVar8;
      puVar3 = &DAT_0056d030;
      do {
        uVar7 = *(uint *)(iVar4 + 4);
        uVar5 = uVar7 ^ 0x7fffffff;
        if (uVar6 < uVar5) {
          uVar5 = uVar6;
        }
        FUN_01284394(iVar4,puVar3,uVar5);
        if (uVar7 == 0x7fffffff) {
          local_30 = 2;
          local_2c = &DAT_01d2e7b8;
          goto LAB_00ec085c;
        }
        puVar3 = puVar3 + uVar5;
        uVar6 = uVar6 - uVar5;
      } while (uVar6 != 0);
      uVar1 = 0;
    }
    else {
      FUN_0096b2b0(&local_30,*piVar8,param_4[1],param_4[2]);
      uVar1 = 0;
      if ((char)local_30 != '\x04') {
        uVar1 = FUN_01966f50(local_30,local_2c);
      }
    }
    return uVar1;
  }
LAB_00ec085c:
  uVar1 = FUN_01966f50(local_30,local_2c);
  return uVar1;
LAB_00ec083c:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
  goto LAB_00ec085c;
}

