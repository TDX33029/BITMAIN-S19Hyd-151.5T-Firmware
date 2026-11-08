// FUN_00ec6610 @ 00ec6610 size=872 calls_out=6 calls_in=2
// strings: a UUID string | internal error: entered unreachable code | internal error: entered unreachable code

int FUN_00ec6610(char *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  uint local_50;
  undefined4 *local_4c;
  int local_48;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int *local_28;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar7 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar4 = 1;
    iVar2 = *piVar7;
    pcVar1 = ",";
    do {
      uVar5 = *(uint *)(iVar2 + 4);
      uVar3 = uVar5 ^ 0x7fffffff;
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      FUN_01284394(iVar2,pcVar1,uVar3);
      if (uVar5 == 0x7fffffff) goto LAB_00ec6930;
      pcVar1 = pcVar1 + uVar3;
      uVar4 = uVar4 - uVar3;
    } while (uVar4 != 0);
  }
  iVar2 = *piVar7;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_50,iVar2,param_2,param_3);
  if ((char)local_50 == '\x04') {
    uVar4 = 1;
    iVar2 = *piVar7;
    pcVar1 = ":";
    do {
      uVar5 = *(uint *)(iVar2 + 4);
      uVar3 = uVar5 ^ 0x7fffffff;
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      FUN_01284394(iVar2,pcVar1,uVar3);
      if (uVar5 == 0x7fffffff) goto LAB_00ec6930;
      pcVar1 = pcVar1 + uVar3;
      uVar4 = uVar4 - uVar3;
    } while (uVar4 != 0);
    iVar2 = *param_4;
    if (iVar2 == 0) {
      iVar6 = 0;
    }
    else {
      local_44 = param_4[1];
      iVar6 = param_4[2];
      local_3c = 0;
      local_4c = (undefined4 *)0x0;
      local_48 = iVar2;
      local_38 = iVar2;
      local_34 = local_44;
    }
    local_50 = (uint)(iVar2 != 0);
    uVar4 = 1;
    iVar2 = *piVar7;
    pcVar1 = "{";
    local_40 = local_50;
    local_30 = iVar6;
    do {
      uVar5 = *(uint *)(iVar2 + 4);
      uVar3 = uVar5 ^ 0x7fffffff;
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      FUN_01284394(iVar2,pcVar1,uVar3);
      if (uVar5 == 0x7fffffff) goto LAB_00ec691c;
      pcVar1 = pcVar1 + uVar3;
      uVar4 = uVar4 - uVar3;
    } while (uVar4 != 0);
    uVar4 = 0x100;
    if (iVar6 == 0) {
      uVar4 = 1;
      pcVar1 = "}";
      do {
        uVar5 = *(uint *)(iVar2 + 4);
        uVar3 = uVar5 ^ 0x7fffffff;
        if (uVar4 < uVar3) {
          uVar3 = uVar4;
        }
        FUN_01284394(iVar2,pcVar1,uVar3);
        if (uVar5 == 0x7fffffff) goto LAB_00ec691c;
        pcVar1 = pcVar1 + uVar3;
        uVar4 = uVar4 - uVar3;
      } while (uVar4 != 0);
      uVar4 = 0;
    }
    local_2c = uVar4;
    local_28 = piVar7;
    while( true ) {
      uVar8 = FUN_01a41998(&local_50);
      if ((int)uVar8 == 0) break;
      iVar2 = FUN_00ec04e0(&local_2c,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    if ((local_2c & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffc0);
    }
    if ((local_2c & 0xff00) != 0) {
      uVar4 = 1;
      iVar2 = *local_28;
      pcVar1 = "}";
      do {
        uVar5 = *(uint *)(iVar2 + 4);
        uVar3 = uVar5 ^ 0x7fffffff;
        if (uVar4 < uVar3) {
          uVar3 = uVar4;
        }
        FUN_01284394(iVar2,pcVar1,uVar3);
        if (uVar5 == 0x7fffffff) {
LAB_00ec691c:
          iVar2 = FUN_01966f50(2,&DAT_01d2e7b8);
          return iVar2;
        }
        pcVar1 = pcVar1 + uVar3;
        uVar4 = uVar4 - uVar3;
      } while (uVar4 != 0);
    }
    return 0;
  }
LAB_00ec693c:
  iVar2 = FUN_01966f50(local_50,local_4c);
  return iVar2;
LAB_00ec6930:
  local_50 = 2;
  local_4c = &DAT_01d2e7b8;
  goto LAB_00ec693c;
}

