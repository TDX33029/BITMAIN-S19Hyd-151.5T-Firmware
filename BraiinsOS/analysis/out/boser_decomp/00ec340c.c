// FUN_00ec340c @ 00ec340c size=480 calls_out=5 calls_in=3
// strings: a UUID string | deprecated | internal error: entered unreachable code

undefined4 FUN_00ec340c(char *param_1,uint param_2)

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
      if (uVar7 == 0x7fffffff) goto LAB_00ec35bc;
      pcVar5 = pcVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
    } while (uVar4 != 0);
  }
  iVar6 = *piVar8;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar6,"deprecated",10);
  if ((char)local_30 == '\x04') {
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
      if (uVar7 == 0x7fffffff) goto LAB_00ec35bc;
      pcVar5 = pcVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
    } while (uVar4 != 0);
    if ((param_2 & 0xff) != 2) {
      uVar1 = FUN_00d92980(param_2,*piVar8);
      return uVar1;
    }
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
LAB_00ec35bc:
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
  uVar1 = FUN_01966f50(local_30,local_2c);
  return uVar1;
}

