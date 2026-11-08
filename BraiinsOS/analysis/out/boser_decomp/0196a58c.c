// FUN_0196a58c @ 0196a58c size=668 calls_out=8 calls_in=3
// strings: internal error: entered unreachable code | internal error: entered unreachable code

/* WARNING: Removing unreachable block (ram,0x0196a810) */
/* WARNING: Removing unreachable block (ram,0x0196a828) */

int FUN_0196a58c(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 uVar7;
  uint local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  uint local_30;
  undefined4 local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    uVar3 = 4;
    uVar1 = *(undefined4 *)*param_2;
    pcVar2 = &DAT_0056d030;
    break;
  case 1:
    pcVar2 = "true\x1e\x05";
    if (param_1[1] == '\0') {
      pcVar2 = "f";
    }
    uVar1 = *(undefined4 *)*param_2;
    uVar3 = 5;
    if (param_1[1] != '\0') {
      uVar3 = 4;
    }
    break;
  case 2:
    iVar4 = FUN_0196a980(param_1 + 8,*param_2);
    return iVar4;
  case 3:
    FUN_0196a1e4(&local_58,*param_2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    goto LAB_0196a7c8;
  case 4:
    iVar4 = FUN_0196a468(param_2,param_1 + 4);
    return iVar4;
  case 5:
    puVar5 = (undefined4 *)*param_2;
    iVar4 = *(int *)(param_1 + 0xc);
    FUN_01968ab4(&local_58,*puVar5,"{",1);
    if ((char)local_58 != '\x04') {
LAB_0196a7f0:
      iVar4 = FUN_01966f50(local_58,local_54);
      return iVar4;
    }
    iVar6 = 0x100;
    if (iVar4 == 0) {
      FUN_01968ab4(&local_58,*puVar5,"}",1);
      if ((char)local_58 != '\x04') goto LAB_0196a7f0;
      iVar6 = 0;
    }
    local_50 = *(int *)(param_1 + 4);
    local_4c = *(undefined4 *)(param_1 + 8);
    if (local_50 == 0) {
      iVar4 = 0;
    }
    local_58 = (uint)(local_50 != 0);
    local_44 = 0;
    local_54 = 0;
    local_48 = local_58;
    local_40 = local_50;
    local_3c = local_4c;
    local_38 = iVar4;
    while( true ) {
      uVar7 = FUN_01a41998(&local_58);
      iVar4 = (int)uVar7;
      if (iVar4 == 0) break;
      if (iVar6 != 0x100) {
        FUN_01968ab4(&local_30,*puVar5,",",1);
        if ((char)local_30 != '\x04') goto LAB_0196a808;
      }
      FUN_0196a1e4(&local_30,puVar5,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
      if ((char)local_30 != '\x04') goto LAB_0196a808;
      FUN_01968ab4(&local_30,*puVar5,":",1);
      if ((char)local_30 != '\x04') goto LAB_0196a808;
      iVar4 = FUN_0196a58c((int)((ulonglong)uVar7 >> 0x20),param_2);
      iVar6 = 0x200;
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    if (iVar6 == 0) {
      return 0;
    }
    uVar1 = *puVar5;
    uVar3 = 1;
    pcVar2 = "}";
  }
  FUN_01968ab4(&local_58,uVar1,pcVar2,uVar3);
LAB_0196a7c8:
  iVar4 = 0;
  if ((char)local_58 != '\x04') {
    local_30 = local_58;
    local_2c = local_54;
LAB_0196a808:
    iVar4 = FUN_01966f50(local_30,local_2c);
  }
  return iVar4;
}

