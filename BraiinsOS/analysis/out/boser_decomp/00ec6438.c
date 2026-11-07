// FUN_00ec6438 @ 00ec6438 size=444 calls_out=6 calls_in=1
// strings: a UUID string | internal error: entered unreachable code

undefined4 FUN_00ec6438(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int *piVar7;
  undefined4 local_60;
  undefined4 *local_5c;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar7 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar4 = 1;
    iVar1 = *piVar7;
    pcVar5 = ",";
    do {
      uVar6 = *(uint *)(iVar1 + 4);
      uVar2 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar1,pcVar5,uVar2);
      if (uVar6 == 0x7fffffff) goto LAB_00ec65c4;
      pcVar5 = pcVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
    } while (uVar4 != 0);
  }
  iVar1 = *piVar7;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_60,iVar1,param_2,2);
  if ((char)local_60 == '\x04') {
    uVar4 = 1;
    iVar1 = *piVar7;
    pcVar5 = ":";
    while( true ) {
      uVar6 = *(uint *)(iVar1 + 4);
      uVar2 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar1,pcVar5,uVar2);
      if (uVar6 == 0x7fffffff) break;
      pcVar5 = pcVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
      if (uVar4 == 0) {
        iVar1 = *piVar7;
        uVar3 = 0;
        FUN_01bed93e(&local_60,0,0x2d);
        FUN_00eaa520(param_3,&local_60);
        FUN_0096b2b0(&local_30,iVar1,&local_60,0x24);
        if ((char)local_30 != '\x04') {
          uVar3 = FUN_01966f50(local_30,local_2c);
        }
        return uVar3;
      }
    }
LAB_00ec65c4:
    local_60 = 2;
    local_5c = &DAT_01d2e7b8;
  }
  uVar3 = FUN_01966f50(local_60,local_5c);
  return uVar3;
}

