// FUN_00ee8808 @ 00ee8808 size=864 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_00ee8808(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_30;
  undefined4 *local_2c;
  
  uVar6 = 1;
  iVar2 = *param_1;
  pcVar3 = "{";
  do {
    uVar7 = *(uint *)(iVar2 + 4);
    uVar5 = uVar7 ^ 0x7fffffff;
    if (uVar6 < uVar5) {
      uVar5 = uVar6;
    }
    FUN_01284394(iVar2,pcVar3,uVar5);
    if (uVar7 == 0x7fffffff) goto LAB_00eea048;
    pcVar3 = pcVar3 + uVar5;
    uVar6 = uVar6 - uVar5;
  } while (uVar6 != 0);
  FUN_0096b2b0(&local_30,*param_1,param_2,param_3);
  if ((char)local_30 == '\x04') {
    uVar6 = 1;
    iVar2 = *param_1;
    pcVar3 = ":";
    do {
      uVar7 = *(uint *)(iVar2 + 4);
      uVar5 = uVar7 ^ 0x7fffffff;
      if (uVar6 < uVar5) {
        uVar5 = uVar6;
      }
      FUN_01284394(iVar2,pcVar3,uVar5);
      if (uVar7 == 0x7fffffff) goto LAB_00eea048;
      pcVar3 = pcVar3 + uVar5;
      uVar6 = uVar6 - uVar5;
    } while (uVar6 != 0);
    uVar6 = 1;
    iVar2 = *param_1;
    pcVar3 = "{";
    do {
      uVar7 = *(uint *)(iVar2 + 4);
      uVar5 = uVar7 ^ 0x7fffffff;
      if (uVar6 < uVar5) {
        uVar5 = uVar6;
      }
      FUN_01284394(iVar2,pcVar3,uVar5);
      if (uVar7 == 0x7fffffff) goto LAB_00eea048;
      pcVar3 = pcVar3 + uVar5;
      uVar6 = uVar6 - uVar5;
    } while (uVar6 != 0);
    FUN_0096b2b0(&local_30,*param_1,&DAT_0053249b,6);
    if ((char)local_30 == '\x04') {
      uVar6 = 1;
      iVar2 = *param_1;
      pcVar3 = ":";
      do {
        uVar7 = *(uint *)(iVar2 + 4);
        uVar5 = uVar7 ^ 0x7fffffff;
        if (uVar6 < uVar5) {
          uVar5 = uVar6;
        }
        FUN_01284394(iVar2,pcVar3,uVar5);
        if (uVar7 == 0x7fffffff) goto LAB_00eea048;
        pcVar3 = pcVar3 + uVar5;
        uVar6 = uVar6 - uVar5;
      } while (uVar6 != 0);
      if (*param_4 != 10) {
                    /* WARNING: Could not recover jumptable at 0x00ee8a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(&DAT_00ee8a4c + *(int *)(&DAT_00ee8a4c + *param_4 * 4)))();
        return uVar1;
      }
      uVar6 = 4;
      iVar2 = *param_1;
      puVar4 = &DAT_0056d030;
      do {
        uVar7 = *(uint *)(iVar2 + 4);
        uVar5 = uVar7 ^ 0x7fffffff;
        if (uVar6 < uVar5) {
          uVar5 = uVar6;
        }
        FUN_01284394(iVar2,puVar4,uVar5);
        if (uVar7 == 0x7fffffff) goto LAB_00eea048;
        puVar4 = puVar4 + uVar5;
        uVar6 = uVar6 - uVar5;
      } while (uVar6 != 0);
      uVar6 = 1;
      iVar2 = *param_1;
      pcVar3 = "}";
      do {
        uVar7 = *(uint *)(iVar2 + 4);
        uVar5 = uVar7 ^ 0x7fffffff;
        if (uVar6 < uVar5) {
          uVar5 = uVar6;
        }
        FUN_01284394(iVar2,pcVar3,uVar5);
        if (uVar7 == 0x7fffffff) goto LAB_00eea048;
        pcVar3 = pcVar3 + uVar5;
        uVar6 = uVar6 - uVar5;
      } while (uVar6 != 0);
      uVar6 = 1;
      iVar2 = *param_1;
      pcVar3 = "}";
      while( true ) {
        uVar7 = *(uint *)(iVar2 + 4);
        uVar5 = uVar7 ^ 0x7fffffff;
        if (uVar6 < uVar5) {
          uVar5 = uVar6;
        }
        FUN_01284394(iVar2,pcVar3,uVar5);
        if (uVar7 == 0x7fffffff) break;
        pcVar3 = pcVar3 + uVar5;
        uVar6 = uVar6 - uVar5;
        if (uVar6 == 0) {
          return 0;
        }
      }
      local_30 = 2;
      local_2c = &DAT_01d2e7b8;
    }
  }
LAB_00eea054:
  uVar1 = FUN_01966f50(local_30,local_2c);
  return uVar1;
LAB_00eea048:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
  goto LAB_00eea054;
}

