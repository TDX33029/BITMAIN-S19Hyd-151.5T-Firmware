// FUN_0157f594 @ 0157f594 size=808 calls_out=8 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x0157f8bc) */

int FUN_0157f594(undefined1 *param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    uVar5 = *(undefined4 *)*param_2;
    pcVar3 = &DAT_00567318;
LAB_0157f634:
    uVar7 = 4;
    break;
  case 1:
    uVar5 = *(undefined4 *)*param_2;
    if (param_1[1] != '\0') {
      pcVar3 = "true\x1e\x05";
      goto LAB_0157f634;
    }
    uVar7 = 5;
    pcVar3 = &DAT_00414fdc;
    break;
  case 2:
    iVar6 = FUN_0157fdec(param_1 + 8,*param_2);
    return iVar6;
  case 3:
    FUN_0157f904(&local_58,*param_2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    goto LAB_0157f7c8;
  case 4:
    iVar6 = FUN_0157f454(param_2,param_1 + 4);
    return iVar6;
  case 5:
    puVar4 = (undefined4 *)*param_2;
    iVar6 = *(int *)(param_1 + 0xc);
    FUN_0157a340(&local_58,*puVar4,&DAT_004144eb,1);
    if ((char)local_58 != '\x04') {
LAB_0157f8ac:
      iVar6 = FUN_0157c4a0(local_58,local_54);
      return iVar6;
    }
    bVar1 = true;
    if (iVar6 == 0) {
      FUN_0157a340(&local_58,*puVar4,"}",1);
      if ((char)local_58 != '\x04') goto LAB_0157f8ac;
      bVar1 = false;
    }
    local_50 = *(int *)(param_1 + 4);
    local_4c = *(undefined4 *)(param_1 + 8);
    local_38 = 0;
    if (local_50 != 0) {
      local_38 = iVar6;
    }
    local_58 = (uint)(local_50 != 0);
    local_44 = 0;
    local_54 = 0;
    local_48 = local_58;
    local_40 = local_50;
    local_3c = local_4c;
    uVar8 = FUN_00f45584(&local_58);
    iVar2 = (int)uVar8;
    if (iVar2 == 0) {
      if (!bVar1) {
        return 0;
      }
    }
    else {
      uVar5 = *(undefined4 *)(iVar2 + 4);
      uVar7 = *(undefined4 *)(iVar2 + 8);
      if (iVar6 == 0) {
        FUN_0157a340(&local_30,*puVar4,&DAT_004144ea,1);
        if ((char)local_30 != '\x04') goto LAB_0157f898;
      }
      FUN_0157f904(&local_30,puVar4,uVar5,uVar7);
      if ((char)local_30 != '\x04') {
LAB_0157f898:
        iVar6 = FUN_0157c4a0(local_30,local_2c);
        return iVar6;
      }
      FUN_0157a340(&local_30,*puVar4,&DAT_00418eb8,1);
      if ((char)local_30 != '\x04') goto LAB_0157f898;
      iVar6 = FUN_0157f594((int)((ulonglong)uVar8 >> 0x20),param_2);
      if (iVar6 != 0) {
        return iVar6;
      }
      while( true ) {
        uVar8 = FUN_00f45584(&local_58);
        iVar6 = (int)uVar8;
        if (iVar6 == 0) break;
        uVar5 = *(undefined4 *)(iVar6 + 4);
        uVar7 = *(undefined4 *)(iVar6 + 8);
        FUN_0157a340(&local_30,*puVar4,&DAT_004144ea,1);
        if ((char)local_30 != '\x04') goto LAB_0157f898;
        FUN_0157f904(&local_30,puVar4,uVar5,uVar7);
        if ((char)local_30 != '\x04') goto LAB_0157f898;
        FUN_0157a340(&local_30,*puVar4,&DAT_00418eb8,1);
        if ((char)local_30 != '\x04') goto LAB_0157f898;
        iVar6 = FUN_0157f594((int)((ulonglong)uVar8 >> 0x20),param_2);
        if (iVar6 != 0) {
          return iVar6;
        }
      }
    }
    uVar5 = *puVar4;
    uVar7 = 1;
    pcVar3 = "}";
  }
  FUN_0157a340(&local_58,uVar5,pcVar3,uVar7);
LAB_0157f7c8:
  if ((char)local_58 == '\x04') {
    return 0;
  }
  iVar6 = FUN_0157c4a0(local_58,local_54);
  return iVar6;
}

