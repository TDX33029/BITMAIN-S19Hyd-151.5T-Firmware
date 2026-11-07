// FUN_00ebee04 @ 00ebee04 size=412 calls_out=5 calls_in=2
// strings: a UUID string | internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00ebee04(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 local_30;
  undefined4 *puStack_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar7 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar5 = 1;
    iVar3 = *piVar7;
    pcVar2 = ",";
    do {
      uVar6 = *(uint *)(iVar3 + 4);
      uVar4 = uVar6 ^ 0x7fffffff;
      if (uVar5 < uVar4) {
        uVar4 = uVar5;
      }
      FUN_01284394(iVar3,pcVar2,uVar4);
      if (uVar6 == 0x7fffffff) goto LAB_00ebef78;
      pcVar2 = pcVar2 + uVar4;
      uVar5 = uVar5 - uVar4;
    } while (uVar5 != 0);
  }
  iVar3 = *piVar7;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar3,param_2,param_3);
  if ((char)local_30 == '\x04') {
    uVar5 = 1;
    iVar3 = *piVar7;
    pcVar2 = ":";
    do {
      uVar6 = *(uint *)(iVar3 + 4);
      uVar4 = uVar6 ^ 0x7fffffff;
      if (uVar5 < uVar4) {
        uVar4 = uVar5;
      }
      FUN_01284394(iVar3,pcVar2,uVar4);
      if (uVar6 == 0x7fffffff) goto LAB_00ebef78;
      pcVar2 = pcVar2 + uVar4;
      uVar5 = uVar5 - uVar4;
    } while (uVar5 != 0);
    pcVar2 = "f";
    uVar1 = 5;
    if ((param_4 & 1) != 0) {
      uVar1 = 4;
      pcVar2 = "true\x1e\x05";
    }
    FUN_00a5208c(&local_30,*piVar7,pcVar2,uVar1);
    if ((char)local_30 == '\x04') {
      return 0;
    }
  }
LAB_00ebef6c:
  uVar1 = FUN_01966f50(local_30,puStack_2c);
  return uVar1;
LAB_00ebef78:
  local_30 = 2;
  puStack_2c = &DAT_01d2e7b8;
  goto LAB_00ebef6c;
}

