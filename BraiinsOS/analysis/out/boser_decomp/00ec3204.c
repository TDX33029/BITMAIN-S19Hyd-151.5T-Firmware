// FUN_00ec3204 @ 00ec3204 size=484 calls_out=5 calls_in=2
// strings: a UUID string | internal error: entered unreachable code

undefined4 FUN_00ec3204(char *param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
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
    uVar5 = 1;
    iVar2 = *piVar8;
    pcVar6 = ",";
    do {
      uVar7 = *(uint *)(iVar2 + 4);
      uVar4 = uVar7 ^ 0x7fffffff;
      if (uVar5 < uVar4) {
        uVar4 = uVar5;
      }
      FUN_01284394(iVar2,pcVar6,uVar4);
      if (uVar7 == 0x7fffffff) goto LAB_00ec33b8;
      pcVar6 = pcVar6 + uVar4;
      uVar5 = uVar5 - uVar4;
    } while (uVar5 != 0);
  }
  iVar2 = *piVar8;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar2,param_2,4);
  if ((char)local_30 == '\x04') {
    uVar5 = 1;
    iVar2 = *piVar8;
    pcVar6 = ":";
    do {
      uVar7 = *(uint *)(iVar2 + 4);
      uVar4 = uVar7 ^ 0x7fffffff;
      if (uVar5 < uVar4) {
        uVar4 = uVar5;
      }
      FUN_01284394(iVar2,pcVar6,uVar4);
      if (uVar7 == 0x7fffffff) goto LAB_00ec33b8;
      pcVar6 = pcVar6 + uVar4;
      uVar5 = uVar5 - uVar4;
    } while (uVar5 != 0);
    if (*param_3 != -0x80000000) {
      uVar1 = FUN_00ebfc84(param_3[1],param_3[2],*piVar8);
      return uVar1;
    }
    uVar5 = 4;
    iVar2 = *piVar8;
    puVar3 = &DAT_0056d030;
    while( true ) {
      uVar7 = *(uint *)(iVar2 + 4);
      uVar4 = uVar7 ^ 0x7fffffff;
      if (uVar5 < uVar4) {
        uVar4 = uVar5;
      }
      FUN_01284394(iVar2,puVar3,uVar4);
      if (uVar7 == 0x7fffffff) break;
      puVar3 = puVar3 + uVar4;
      uVar5 = uVar5 - uVar4;
      if (uVar5 == 0) {
        return 0;
      }
    }
LAB_00ec33b8:
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
  uVar1 = FUN_01966f50(local_30,local_2c);
  return uVar1;
}

