// FUN_00ee0f5c @ 00ee0f5c size=616 calls_out=7 calls_in=6
// strings: a UUID string | $serde_json::private::RawValue

undefined4
FUN_00ee0f5c(char *param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5)

{
  undefined4 uVar1;
  char *pcVar2;
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
  undefined1 auStack_48 [36];
  
  if (*param_1 == '\x01') {
    if ((param_3 == 0x1e) &&
       (iVar4 = thunk_FUN_01bed842(param_2,"$serde_json::private::RawValue",0x1e), iVar4 == 0)) {
      iVar4 = thunk_FUN_01be5118(0x11);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x11);
      }
      FUN_01bed4e2(iVar4,"expected RawValue",0x11);
      uVar1 = FUN_01966564(auStack_48 + 0x2c);
      return uVar1;
    }
    local_50 = 10;
    uVar1 = FUN_01966fbc(&local_50,0,0);
  }
  else {
    piVar6 = *(int **)(param_1 + 4);
    if (param_1[1] != '\x01') {
      uVar7 = 1;
      iVar4 = *piVar6;
      pcVar2 = ",";
      do {
        uVar8 = *(uint *)(iVar4 + 4);
        uVar5 = uVar8 ^ 0x7fffffff;
        if (uVar7 < uVar5) {
          uVar5 = uVar7;
        }
        FUN_01284394(iVar4,pcVar2,uVar5);
        if (uVar8 == 0x7fffffff) goto LAB_00ee1198;
        pcVar2 = pcVar2 + uVar5;
        uVar7 = uVar7 - uVar5;
      } while (uVar7 != 0);
    }
    iVar4 = *piVar6;
    param_1[1] = '\x02';
    FUN_0096b2b0(&local_50,iVar4,param_2,param_3);
    if ((char)local_50 != '\x04') goto LAB_00ee11b8;
    uVar7 = 1;
    iVar4 = *piVar6;
    pcVar2 = ":";
    do {
      uVar8 = *(uint *)(iVar4 + 4);
      uVar5 = uVar8 ^ 0x7fffffff;
      if (uVar7 < uVar5) {
        uVar5 = uVar7;
      }
      FUN_01284394(iVar4,pcVar2,uVar5);
      if (uVar8 == 0x7fffffff) goto LAB_00ee1198;
      pcVar2 = pcVar2 + uVar5;
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
        if (uVar8 == 0x7fffffff) {
          local_50 = 2;
          local_4c = &DAT_01d2e7b8;
          goto LAB_00ee11b8;
        }
        puVar3 = puVar3 + uVar5;
        uVar7 = uVar7 - uVar5;
      } while (uVar7 != 0);
      uVar1 = 0;
    }
    else {
      uVar9 = FUN_019ce0bc(&local_50,param_5);
      FUN_00a5208c(&local_58,*piVar6,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
      uVar1 = 0;
      if ((char)local_58 != '\x04') {
        uVar1 = FUN_01966f50(local_58,local_54);
      }
    }
  }
  return uVar1;
LAB_00ee1198:
  local_50 = 2;
  local_4c = &DAT_01d2e7b8;
LAB_00ee11b8:
  uVar1 = FUN_01966f50(local_50,local_4c);
  return uVar1;
}

