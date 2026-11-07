// FUN_00ef28a4 @ 00ef28a4 size=1068 calls_out=11 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x00ef2c58) */
/* WARNING: Removing unreachable block (ram,0x00ef2ca8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ef28a4(int *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int local_68;
  undefined1 *local_64;
  int local_60;
  int *local_5c;
  uint local_58;
  undefined4 local_54;
  int iStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_64 = (undefined1 *)thunk_FUN_016d4a50(0x80);
  if (local_64 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x80);
  }
  local_60 = 0;
  iVar4 = 4;
  local_68 = 0x80;
  local_5c = &local_68;
  puVar2 = &DAT_00567318;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 1:
    iVar4 = 5;
    puVar2 = &DAT_00414fdc;
    if (param_2[1] != '\0') {
      iVar4 = 4;
      puVar2 = &DAT_00568b2c;
    }
  case 0:
    FUN_016dd1aa(local_64,puVar2,iVar4);
    local_60 = iVar4;
    break;
  case 2:
    FUN_00e5cedc(param_2 + 8,&local_68);
    break;
  case 3:
    FUN_00e5d350(&local_58,&local_68,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    if ((char)local_58 != '\x04') {
      iVar1 = FUN_0157c4a0(local_58,local_54);
      goto LAB_00ef297c;
    }
    break;
  case 4:
    iVar5 = *(int *)(param_2 + 8);
    iVar6 = *(int *)(param_2 + 0xc);
    *local_64 = 0x5b;
    iVar4 = 1;
    local_60 = 1;
    piVar3 = &local_68;
    if (iVar6 != 0) {
      iVar1 = FUN_00e5c920(iVar5,&local_5c);
      piVar3 = local_5c;
      if (iVar1 != 0) goto LAB_00ef297c;
      if (iVar6 != 1) {
        iVar4 = iVar6 * 0x18 + -0x18;
        do {
          iVar5 = iVar5 + 0x18;
          iVar1 = piVar3[2];
          if (*piVar3 == iVar1) {
            FUN_00edff4c(piVar3,iVar1,1,1,1);
            iVar1 = piVar3[2];
          }
          *(undefined1 *)(piVar3[1] + iVar1) = 0x2c;
          piVar3[2] = iVar1 + 1;
          iVar1 = FUN_00e5c920(iVar5,&local_5c);
          if (iVar1 != 0) goto LAB_00ef297c;
          iVar4 = iVar4 + -0x18;
        } while (iVar4 != 0);
      }
      piVar3 = local_5c;
      iVar4 = local_5c[2];
      if (*local_5c == iVar4) {
        FUN_00edff4c(local_5c,*local_5c,1,1,1);
        iVar4 = piVar3[2];
      }
    }
    *(undefined1 *)(piVar3[1] + iVar4) = 0x5d;
LAB_00ef2bb8:
    piVar3[2] = iVar4 + 1;
    break;
  case 5:
    *local_64 = 0x7b;
    iVar4 = 0x100;
    local_38 = *(int *)(param_2 + 0xc);
    local_60 = 1;
    if (local_38 == 0) {
      iVar4 = 0;
      local_64[1] = 0x7d;
      local_60 = 2;
    }
    iStack_50 = *(int *)(param_2 + 4);
    uStack_4c = *(undefined4 *)(param_2 + 8);
    if (iStack_50 == 0) {
      local_38 = 0;
    }
    local_54 = 0;
    local_58 = (uint)(iStack_50 != 0);
    local_44 = 0;
    local_48 = local_58;
    local_40 = iStack_50;
    local_3c = uStack_4c;
    do {
      uVar9 = FUN_00f45584(&local_58);
      piVar3 = local_5c;
      iVar1 = (int)uVar9;
      if (iVar1 == 0) {
        if (iVar4 == 0) goto LAB_00ef2bbc;
        iVar4 = local_5c[2];
        if (*local_5c == iVar4) {
          FUN_00edff4c(local_5c,iVar4,1,1,1);
          iVar4 = piVar3[2];
        }
        *(undefined1 *)(piVar3[1] + iVar4) = 0x7d;
        goto LAB_00ef2bb8;
      }
      uVar7 = *(undefined4 *)(iVar1 + 4);
      uVar8 = *(undefined4 *)(iVar1 + 8);
      if (iVar4 != 0x100) {
        if (local_68 == local_60) {
          FUN_00edff4c(&local_68,local_60,1,1,1);
        }
        local_64[local_60] = 0x2c;
        local_60 = local_60 + 1;
      }
      FUN_00e5d350(&local_30,&local_68,uVar7,uVar8);
      if ((char)local_30 != '\x04') {
        iVar1 = FUN_0157c4a0(local_30,local_2c);
        break;
      }
      if (local_68 == local_60) {
        FUN_00edff4c(&local_68,local_60,1,1,1);
      }
      local_64[local_60] = 0x3a;
      local_60 = local_60 + 1;
      iVar1 = FUN_00e5c920((int)((ulonglong)uVar9 >> 0x20),&local_5c);
      iVar4 = 0x200;
    } while (iVar1 == 0);
LAB_00ef297c:
    *param_1 = -0x80000000;
    param_1[1] = iVar1;
    if (local_68 == 0) {
      return;
    }
    thunk_FUN_016d3fb4(local_64);
    return;
  }
LAB_00ef2bbc:
  *param_1 = local_68;
  param_1[1] = (int)local_64;
  param_1[2] = local_60;
  return;
}

