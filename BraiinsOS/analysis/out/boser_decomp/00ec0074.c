// FUN_00ec0074 @ 00ec0074 size=856 calls_out=7 calls_in=2
// strings: a UUID string | description | internal error: entered unreachable code | internal error: entered unreachable code

int FUN_00ec0074(char *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int *piVar7;
  uint local_30;
  int *local_2c;
  
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
      uVar3 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      FUN_01284394(iVar1,pcVar5,uVar3);
      if (uVar6 == 0x7fffffff) goto LAB_00ec0250;
      pcVar5 = pcVar5 + uVar3;
      uVar4 = uVar4 - uVar3;
    } while (uVar4 != 0);
  }
  iVar1 = *piVar7;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar1,param_2,0xc);
  if ((char)local_30 == '\x04') {
    uVar4 = 1;
    iVar1 = *piVar7;
    pcVar5 = ":";
    do {
      uVar6 = *(uint *)(iVar1 + 4);
      uVar3 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      FUN_01284394(iVar1,pcVar5,uVar3);
      if (uVar6 == 0x7fffffff) goto LAB_00ec0250;
      pcVar5 = pcVar5 + uVar3;
      uVar4 = uVar4 - uVar3;
    } while (uVar4 != 0);
    if (param_3[0xb] != -0x80000000) {
      uVar4 = 1;
      iVar1 = *piVar7;
      pcVar5 = "{";
      do {
        uVar6 = *(uint *)(iVar1 + 4);
        uVar3 = uVar6 ^ 0x7fffffff;
        if (uVar4 < uVar3) {
          uVar3 = uVar4;
        }
        FUN_01284394(iVar1,pcVar5,uVar3);
        if (uVar6 == 0x7fffffff) goto LAB_00ec0388;
        pcVar5 = pcVar5 + uVar3;
        uVar4 = uVar4 - uVar3;
      } while (uVar4 != 0);
      local_30 = 0x100;
      local_2c = piVar7;
      iVar1 = FUN_0096b5ec(&local_30,"url",3,param_3[0xc],param_3[0xd]);
      if (((iVar1 == 0) &&
          (iVar1 = FUN_00ebc430(&local_30,"description",0xb,param_3 + 8), iVar1 == 0)) &&
         ((*param_3 == 0 || (iVar1 = FUN_011e01bc(param_3,&local_30), iVar1 == 0)))) {
        if ((local_30 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffc0);
        }
        if ((local_30 & 0xff00) == 0) {
          return 0;
        }
        uVar4 = 1;
        iVar1 = *local_2c;
        pcVar5 = "}";
        while( true ) {
          uVar6 = *(uint *)(iVar1 + 4);
          uVar3 = uVar6 ^ 0x7fffffff;
          if (uVar4 < uVar3) {
            uVar3 = uVar4;
          }
          FUN_01284394(iVar1,pcVar5,uVar3);
          if (uVar6 == 0x7fffffff) break;
          pcVar5 = pcVar5 + uVar3;
          uVar4 = uVar4 - uVar3;
          if (uVar4 == 0) {
            return 0;
          }
        }
LAB_00ec0388:
        iVar1 = FUN_01966f50(2,&DAT_01d2e7b8);
      }
      return iVar1;
    }
    uVar4 = 4;
    iVar1 = *piVar7;
    puVar2 = &DAT_0056d030;
    while( true ) {
      uVar6 = *(uint *)(iVar1 + 4);
      uVar3 = uVar6 ^ 0x7fffffff;
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      FUN_01284394(iVar1,puVar2,uVar3);
      if (uVar6 == 0x7fffffff) break;
      puVar2 = puVar2 + uVar3;
      uVar4 = uVar4 - uVar3;
      if (uVar4 == 0) {
        return 0;
      }
    }
LAB_00ec0250:
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
  iVar1 = FUN_01966f50(local_30,local_2c);
  return iVar1;
}

