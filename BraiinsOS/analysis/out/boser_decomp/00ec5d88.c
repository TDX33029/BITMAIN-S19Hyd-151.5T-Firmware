// FUN_00ec5d88 @ 00ec5d88 size=384 calls_out=4 calls_in=0
// strings: a UUID string | package_capability | internal error: entered unreachable code

void FUN_00ec5d88(char *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar1 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar2 = 1;
    pcVar4 = ",";
    iVar5 = *piVar1;
    do {
      uVar6 = *(uint *)(iVar5 + 4);
      uVar3 = uVar6 ^ 0x7fffffff;
      if (uVar2 < uVar3) {
        uVar3 = uVar2;
      }
      FUN_01284394(iVar5,pcVar4,uVar3);
      if (uVar6 == 0x7fffffff) goto LAB_00ec6370;
      pcVar4 = pcVar4 + uVar3;
      uVar2 = uVar2 - uVar3;
    } while (uVar2 != 0);
  }
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,*piVar1,"package_capability",0x12);
  if ((char)local_30 == '\x04') {
    uVar2 = 1;
    iVar5 = *piVar1;
    pcVar4 = ":";
    while( true ) {
      uVar6 = *(uint *)(iVar5 + 4);
      uVar3 = uVar6 ^ 0x7fffffff;
      if (uVar2 < uVar3) {
        uVar3 = uVar2;
      }
      FUN_01284394(iVar5,pcVar4,uVar3);
      if (uVar6 == 0x7fffffff) break;
      pcVar4 = pcVar4 + uVar3;
      uVar2 = uVar2 - uVar3;
      if (uVar2 == 0) {
        iVar5 = 3;
        if (*param_2 < 0) {
          iVar5 = *param_2;
        }
                    /* WARNING: Could not recover jumptable at 0x00ec5ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00ec5ecc + *(int *)(&DAT_00ec5ecc + iVar5 * 4)))();
        return;
      }
    }
LAB_00ec6370:
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
  FUN_01966f50(local_30,local_2c);
  return;
}

