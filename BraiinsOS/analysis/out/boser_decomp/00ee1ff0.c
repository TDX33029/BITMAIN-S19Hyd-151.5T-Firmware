// FUN_00ee1ff0 @ 00ee1ff0 size=788 calls_out=7 calls_in=1
// strings: a UUID string | $serde_json::private::RawValue

undefined4
FUN_00ee1ff0(char *param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  ulonglong in_d0;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined1 auStack_40 [16];
  
  if (*param_1 == '\x01') {
    if ((param_3 != 0x1e) ||
       (iVar3 = thunk_FUN_01bed842(param_2,"$serde_json::private::RawValue",0x1e), iVar3 != 0)) {
      local_48 = 10;
      uVar1 = FUN_01966fbc(&local_48,0,0);
      return uVar1;
    }
    iVar3 = thunk_FUN_01be5118(0x11);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x11);
    }
    FUN_01bed4e2(iVar3,"expected RawValue",0x11);
    uVar1 = FUN_01966564(auStack_40 + 0x24);
    return uVar1;
  }
  piVar7 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar8 = 1;
    iVar3 = *piVar7;
    pcVar5 = ",";
    do {
      uVar6 = *(uint *)(iVar3 + 4);
      uVar4 = uVar6 ^ 0x7fffffff;
      if (uVar8 < uVar4) {
        uVar4 = uVar8;
      }
      FUN_01284394(iVar3,pcVar5,uVar4);
      if (uVar6 == 0x7fffffff) goto LAB_00ee22d4;
      pcVar5 = pcVar5 + uVar4;
      uVar8 = uVar8 - uVar4;
    } while (uVar8 != 0);
  }
  iVar3 = *piVar7;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_48,iVar3,param_2,param_3);
  if ((char)local_48 == '\x04') {
    uVar8 = 1;
    iVar3 = *piVar7;
    pcVar5 = ":";
    do {
      uVar6 = *(uint *)(iVar3 + 4);
      uVar4 = uVar6 ^ 0x7fffffff;
      if (uVar8 < uVar4) {
        uVar4 = uVar8;
      }
      FUN_01284394(iVar3,pcVar5,uVar4);
      if (uVar6 == 0x7fffffff) goto LAB_00ee22d4;
      pcVar5 = pcVar5 + uVar4;
      uVar8 = uVar8 - uVar4;
    } while (uVar8 != 0);
    if ((param_5 & 1) == 0) {
      uVar8 = 4;
      iVar3 = *piVar7;
      puVar2 = &DAT_0056d030;
      do {
        uVar6 = *(uint *)(iVar3 + 4);
        uVar4 = uVar6 ^ 0x7fffffff;
        if (uVar8 < uVar4) {
          uVar4 = uVar8;
        }
        FUN_01284394(iVar3,puVar2,uVar4);
        if (uVar6 == 0x7fffffff) goto LAB_00ee21f4;
        puVar2 = puVar2 + uVar4;
        uVar8 = uVar8 - uVar4;
      } while (uVar8 != 0);
    }
    else {
      uVar8 = (uint)(in_d0 >> 0x20);
      if ((int)in_d0 == 0 && (in_d0 & 0xfffff00000000) == 0) {
        if ((int)in_d0 != 0 || (uVar8 & 0x7fffffff) != 0x7ff00000) goto LAB_00ee2234;
      }
      else if ((uVar8 & 0x7fffffff) < 0x7ff00000) {
LAB_00ee2234:
        iVar3 = FUN_01afb0f8(&local_48);
        FUN_00a5208c(&local_50,*piVar7,&local_48,iVar3 - (int)&local_48);
        if ((char)local_50 == '\x04') {
          return 0;
        }
        uVar1 = FUN_01966f50(local_50,local_4c);
        return uVar1;
      }
      uVar8 = 4;
      iVar3 = *piVar7;
      puVar2 = &DAT_0056d030;
      do {
        uVar6 = *(uint *)(iVar3 + 4);
        uVar4 = uVar6 ^ 0x7fffffff;
        if (uVar8 < uVar4) {
          uVar4 = uVar8;
        }
        FUN_01284394(iVar3,puVar2,uVar4);
        if (uVar6 == 0x7fffffff) goto LAB_00ee21f4;
        puVar2 = puVar2 + uVar4;
        uVar8 = uVar8 - uVar4;
      } while (uVar8 != 0);
    }
    return 0;
  }
LAB_00ee22e0:
  uVar1 = FUN_01966f50(local_48,local_44);
  return uVar1;
LAB_00ee22d4:
  local_48 = 2;
  local_44 = &DAT_01d2e7b8;
  goto LAB_00ee22e0;
LAB_00ee21f4:
  local_48 = 2;
  local_44 = &DAT_01d2e7b8;
  goto LAB_00ee22e0;
}

