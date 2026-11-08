// FUN_00ee26b8 @ 00ee26b8 size=372 calls_out=5 calls_in=3
// strings: a UUID string | internal error: entered unreachable code

void FUN_00ee26b8(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar4 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar5 = 1;
    iVar2 = *piVar4;
    pcVar1 = ",";
    do {
      uVar6 = *(uint *)(iVar2 + 4);
      uVar3 = uVar6 ^ 0x7fffffff;
      if (uVar5 < uVar3) {
        uVar3 = uVar5;
      }
      FUN_01284394(iVar2,pcVar1,uVar3);
      if (uVar6 == 0x7fffffff) goto LAB_00ee27fc;
      pcVar1 = pcVar1 + uVar3;
      uVar5 = uVar5 - uVar3;
    } while (uVar5 != 0);
  }
  iVar2 = *piVar4;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar2,param_2,param_3);
  if ((char)local_30 == '\x04') {
    uVar5 = 1;
    iVar2 = *piVar4;
    pcVar1 = ":";
    while( true ) {
      uVar6 = *(uint *)(iVar2 + 4);
      uVar3 = uVar6 ^ 0x7fffffff;
      if (uVar5 < uVar3) {
        uVar3 = uVar5;
      }
      FUN_01284394(iVar2,pcVar1,uVar3);
      if (uVar6 == 0x7fffffff) break;
      pcVar1 = pcVar1 + uVar3;
      uVar5 = uVar5 - uVar3;
      if (uVar5 == 0) {
        FUN_00ebfc84(param_4,param_5,*piVar4);
        return;
      }
    }
LAB_00ee27fc:
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
  FUN_01966f50(local_30,local_2c);
  return;
}

