// FUN_01ad4f50 @ 01ad4f50 size=856 calls_out=9 calls_in=2
// strings: internal error: entered unreachable code | internal error: entered unreachable code

/* WARNING: Removing unreachable block (ram,0x01ad5290) */
/* WARNING: Removing unreachable block (ram,0x01ad52a8) */

int FUN_01ad4f50(undefined1 *param_1,undefined4 *param_2)

{
  int iVar1;
  ulonglong *puVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  uint local_58;
  undefined4 uStack_54;
  uint local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    uVar5 = *param_2;
    goto LAB_01ad4f94;
  case 1:
    uVar5 = *param_2;
    pcVar3 = "true\x1e\x05";
    if (param_1[1] == '\0') {
      pcVar3 = "f";
    }
    uVar10 = CONCAT44(5,pcVar3);
    if (param_1[1] != '\0') {
      uVar10 = CONCAT44(4,pcVar3);
    }
    break;
  case 2:
    puVar2 = (ulonglong *)(param_1 + 0x10);
    iVar7 = *(int *)(param_1 + 8);
    uVar5 = *param_2;
    if (iVar7 != 2) {
      if (iVar7 == 1) {
        uVar10 = FUN_0196bd9c(&local_50,1,(int)*puVar2,*(undefined4 *)(param_1 + 0x14));
      }
      else {
        uVar10 = FUN_01415f98(&local_50,iVar7,(int)*puVar2,*(undefined4 *)(param_1 + 0x14));
      }
      break;
    }
    uVar9 = *puVar2;
    uVar4 = (uint)(uVar9 >> 0x20);
    if ((int)uVar9 == 0 && (uVar9 & 0xfffff00000000) == 0) {
      if ((int)uVar9 != 0 || (uVar4 & 0x7fffffff) != 0x7ff00000) goto LAB_01ad5268;
    }
    else if ((uVar4 & 0x7fffffff) < 0x7ff00000) {
LAB_01ad5268:
      iVar7 = FUN_01afb0f8(&local_50);
      uVar10 = CONCAT44(iVar7 - (int)&local_50,&local_50);
      break;
    }
LAB_01ad4f94:
    uVar10 = 0x40056d030;
    break;
  case 3:
    FUN_012650dc(&local_50,*param_2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    if ((char)local_50 == '\x04') {
      return 0;
    }
    local_58 = local_50;
    uStack_54 = local_4c;
    goto LAB_01ad5288;
  case 4:
    iVar8 = *(int *)(param_1 + 8);
    iVar7 = *(int *)(param_1 + 0xc);
    uVar5 = *param_2;
    bVar6 = true;
    FUN_01ac6cbc(uVar5,&DAT_0053340d,1);
    if (iVar7 != 0) {
      iVar7 = iVar7 * 0x18;
      do {
        if (!bVar6) {
          FUN_01ac6cbc(uVar5,",",1);
        }
        iVar1 = FUN_01ad4f50(iVar8,param_2);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar8 = iVar8 + 0x18;
        iVar7 = iVar7 + -0x18;
        bVar6 = false;
      } while (iVar7 != 0);
    }
    uVar10 = 0x100533b58;
    break;
  case 5:
    uVar5 = *param_2;
    iVar7 = *(int *)(param_1 + 0xc);
    FUN_01ac6cbc(uVar5,"{",1);
    iVar8 = 0x100;
    if (iVar7 == 0) {
      FUN_01ac6cbc(uVar5,"}",1);
      iVar8 = 0;
    }
    local_48 = *(int *)(param_1 + 4);
    local_44 = *(undefined4 *)(param_1 + 8);
    if (local_48 == 0) {
      iVar7 = 0;
    }
    local_50 = (uint)(local_48 != 0);
    local_3c = 0;
    local_4c = 0;
    local_40 = local_50;
    local_38 = local_48;
    local_34 = local_44;
    local_30 = iVar7;
    while( true ) {
      uVar10 = FUN_01a41998(&local_50);
      iVar7 = (int)uVar10;
      if (iVar7 == 0) {
        if (iVar8 == 0) {
          return 0;
        }
        FUN_01ac6cbc(uVar5,"}",1);
        return 0;
      }
      if (iVar8 != 0x100) {
        FUN_01ac6cbc(uVar5,",",1);
      }
      FUN_012650dc(&local_58,uVar5,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
      if ((char)local_58 != '\x04') break;
      FUN_01ac6cbc(uVar5,":",1);
      iVar7 = FUN_01ad4f50((int)((ulonglong)uVar10 >> 0x20),param_2);
      iVar8 = 0x200;
      if (iVar7 != 0) {
        return iVar7;
      }
    }
LAB_01ad5288:
    iVar7 = FUN_01966f50(local_58,uStack_54);
    return iVar7;
  }
  FUN_01ac6cbc(uVar5,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
  return 0;
}

