// FUN_014acd60 @ 014acd60 size=688 calls_out=7 calls_in=2
// strings: internal error: entered unreachable code | internal error: entered unreachable code

/* WARNING: Removing unreachable block (ram,0x014acff8) */
/* WARNING: Removing unreachable block (ram,0x014ad010) */

int FUN_014acd60(undefined1 *param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
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
  uint local_30;
  undefined4 local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    uVar3 = 4;
    uVar4 = *param_2;
    pcVar2 = &DAT_0056d030;
    break;
  case 1:
    uVar4 = *param_2;
    pcVar2 = "true\x1e\x05";
    if (param_1[1] == '\0') {
      pcVar2 = "f";
    }
    uVar3 = 5;
    if (param_1[1] != '\0') {
      uVar3 = 4;
    }
    break;
  case 2:
    FUN_006cbb84(param_1 + 8,*param_2);
    return 0;
  case 3:
    FUN_006bc51c(&local_58,*param_2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    if ((char)local_58 == '\x04') {
      return 0;
    }
    local_30 = local_58;
    local_2c = local_54;
    goto LAB_014acff0;
  case 4:
    iVar7 = *(int *)(param_1 + 8);
    iVar6 = *(int *)(param_1 + 0xc);
    uVar4 = *param_2;
    bVar5 = true;
    FUN_01ac6cbc(uVar4,&DAT_0053340d,1);
    if (iVar6 != 0) {
      iVar6 = iVar6 * 0x18;
      do {
        if (!bVar5) {
          FUN_01ac6cbc(uVar4,",",1);
        }
        iVar1 = FUN_014acd60(iVar7,param_2);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar7 = iVar7 + 0x18;
        iVar6 = iVar6 + -0x18;
        bVar5 = false;
      } while (iVar6 != 0);
    }
    uVar3 = 1;
    pcVar2 = "]";
    break;
  case 5:
    uVar4 = *param_2;
    iVar6 = *(int *)(param_1 + 0xc);
    FUN_01ac6cbc(uVar4,"{",1);
    iVar7 = 0x100;
    if (iVar6 == 0) {
      FUN_01ac6cbc(uVar4,"}",1);
      iVar7 = 0;
    }
    local_50 = *(int *)(param_1 + 4);
    local_4c = *(undefined4 *)(param_1 + 8);
    if (local_50 == 0) {
      iVar6 = 0;
    }
    local_58 = (uint)(local_50 != 0);
    local_44 = 0;
    local_54 = 0;
    local_48 = local_58;
    local_40 = local_50;
    local_3c = local_4c;
    local_38 = iVar6;
    while( true ) {
      uVar8 = FUN_01a41998(&local_58);
      iVar6 = (int)uVar8;
      if (iVar6 == 0) {
        if (iVar7 == 0) {
          return 0;
        }
        FUN_01ac6cbc(uVar4,"}",1);
        return 0;
      }
      if (iVar7 != 0x100) {
        FUN_01ac6cbc(uVar4,",",1);
      }
      FUN_006bc51c(&local_30,uVar4,*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 8));
      if ((char)local_30 != '\x04') break;
      FUN_01ac6cbc(uVar4,":",1);
      iVar6 = FUN_014acd60((int)((ulonglong)uVar8 >> 0x20),param_2);
      iVar7 = 0x200;
      if (iVar6 != 0) {
        return iVar6;
      }
    }
LAB_014acff0:
    iVar6 = FUN_01966f50(local_30,local_2c);
    return iVar6;
  }
  FUN_01ac6cbc(uVar4,pcVar2,uVar3);
  return 0;
}

