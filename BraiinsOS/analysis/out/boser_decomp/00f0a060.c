// FUN_00f0a060 @ 00f0a060 size=552 calls_out=6 calls_in=1
// strings: a UUID string | internal error: entered unreachable code

undefined4
FUN_00f0a060(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  undefined4 extraout_r1;
  char *pcVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 *local_4c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar6 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar7 = 1;
    iVar4 = *piVar6;
    pcVar1 = ",";
    do {
      uVar8 = *(uint *)(iVar4 + 4);
      uVar5 = uVar8 ^ 0x7fffffff;
      if (uVar7 < uVar5) {
        uVar5 = uVar7;
      }
      FUN_01284394(iVar4,pcVar1,uVar5);
      if (uVar8 == 0x7fffffff) goto LAB_00f0a258;
      pcVar1 = pcVar1 + uVar5;
      uVar7 = uVar7 - uVar5;
    } while (uVar7 != 0);
  }
  iVar4 = *piVar6;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_50,iVar4,param_2,param_3);
  if ((char)local_50 == '\x04') {
    uVar7 = 1;
    iVar4 = *piVar6;
    pcVar1 = ":";
    do {
      uVar8 = *(uint *)(iVar4 + 4);
      uVar5 = uVar8 ^ 0x7fffffff;
      if (uVar7 < uVar5) {
        uVar5 = uVar7;
      }
      FUN_01284394(iVar4,pcVar1,uVar5);
      if (uVar8 == 0x7fffffff) goto LAB_00f0a258;
      pcVar1 = pcVar1 + uVar5;
      uVar7 = uVar7 - uVar5;
    } while (uVar7 != 0);
    if ((param_4 & 1) == 0) {
      uVar7 = 4;
      iVar4 = *piVar6;
      puVar3 = &DAT_0056d030;
      do {
        uVar8 = *(uint *)(iVar4 + 4);
        uVar5 = uVar8 ^ 0x7fffffff;
        if (uVar7 < uVar5) {
          uVar5 = uVar7;
        }
        FUN_01284394(iVar4,puVar3,uVar5);
        if (uVar8 == 0x7fffffff) goto LAB_00f0a258;
        puVar3 = puVar3 + uVar5;
        uVar7 = uVar7 - uVar5;
      } while (uVar7 != 0);
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      uVar9 = FUN_01415f98(&local_50,extraout_r1,param_5,0);
      FUN_00a5208c(&local_58,*piVar6,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
      if ((char)local_58 != '\x04') {
        uVar2 = FUN_01966f50(local_58,local_54);
      }
    }
    return uVar2;
  }
LAB_00f0a264:
  uVar2 = FUN_01966f50(local_50,local_4c);
  return uVar2;
LAB_00f0a258:
  local_50 = 2;
  local_4c = &DAT_01d2e7b8;
  goto LAB_00f0a264;
}

