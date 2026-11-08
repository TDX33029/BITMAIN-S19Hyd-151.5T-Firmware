// FUN_0096b5ec @ 0096b5ec size=392 calls_out=4 calls_in=22
// strings: a UUID string | internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_0096b5ec(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_30;
  undefined4 *puStack_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar5 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar6 = 1;
    iVar3 = *piVar5;
    pcVar2 = ",";
    do {
      uVar7 = *(uint *)(iVar3 + 4);
      uVar4 = uVar7 ^ 0x7fffffff;
      if (uVar6 < uVar4) {
        uVar4 = uVar6;
      }
      FUN_01284394(iVar3,pcVar2,uVar4);
      if (uVar7 == 0x7fffffff) goto LAB_0096b74c;
      pcVar2 = pcVar2 + uVar4;
      uVar6 = uVar6 - uVar4;
    } while (uVar6 != 0);
  }
  iVar3 = *piVar5;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar3,param_2,param_3);
  if ((char)local_30 == '\x04') {
    uVar6 = 1;
    iVar3 = *piVar5;
    pcVar2 = ":";
    do {
      uVar7 = *(uint *)(iVar3 + 4);
      uVar4 = uVar7 ^ 0x7fffffff;
      if (uVar6 < uVar4) {
        uVar4 = uVar6;
      }
      FUN_01284394(iVar3,pcVar2,uVar4);
      if (uVar7 == 0x7fffffff) goto LAB_0096b74c;
      pcVar2 = pcVar2 + uVar4;
      uVar6 = uVar6 - uVar4;
    } while (uVar6 != 0);
    FUN_0096b2b0(&local_30,*piVar5,param_4,param_5);
    if ((char)local_30 == '\x04') {
      return 0;
    }
  }
LAB_0096b740:
  uVar1 = FUN_01966f50(local_30,puStack_2c);
  return uVar1;
LAB_0096b74c:
  local_30 = 2;
  puStack_2c = &DAT_01d2e7b8;
  goto LAB_0096b740;
}

