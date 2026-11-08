// FUN_00ea8084 @ 00ea8084 size=1304 calls_out=8 calls_in=0
// strings: a Display implementation returned an error unexpectedly

/* WARNING: Removing unreachable block (ram,0x00ed374c) */

void FUN_00ea8084(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int local_28;
  undefined4 local_24;
  
  FUN_00f09308(param_1,param_2,param_2,0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_3) {
  case 0:
    iVar2 = param_1[2];
    if (*param_1 == iVar2) goto LAB_00ea8368;
    goto LAB_00ea80e4;
  case 1:
    iVar1 = param_1[2];
    iVar4 = *(int *)(param_3 + 8);
    iVar2 = *(int *)(param_3 + 0xc);
    if (*param_1 == iVar1) {
      local_28 = 1;
      FUN_00edff4c(param_1,iVar1,1,1);
      iVar1 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + iVar1) = 1;
    param_1[2] = iVar1 + 1;
    FUN_00f09308(param_1,iVar1,iVar2,0);
    if (iVar2 != 0) {
      puVar5 = (undefined4 *)(iVar4 + 4);
      iVar2 = iVar2 * 0xc;
      uVar7 = extraout_r1;
      do {
        uVar6 = puVar5[1];
        uVar8 = *puVar5;
        FUN_00f09308(param_1,uVar7,uVar6,0);
        iVar1 = param_1[2];
        if ((uint)(*param_1 - iVar1) < uVar6) {
          local_28 = 1;
          FUN_00edff4c(param_1,iVar1,uVar6,1);
          iVar1 = param_1[2];
        }
        puVar5 = puVar5 + 3;
        FUN_016dd1aa(param_1[1] + iVar1,uVar8,uVar6);
        iVar2 = iVar2 + -0xc;
        param_1[2] = iVar1 + uVar6;
        uVar7 = extraout_r1_00;
      } while (iVar2 != 0);
    }
    return;
  case 2:
    iVar2 = param_1[2];
    if (*param_1 == iVar2) {
      local_28 = 1;
      FUN_00edff4c(param_1,iVar2,1,1);
      iVar2 = param_1[2];
    }
    iVar1 = param_1[1];
    uVar3 = 2;
    break;
  case 3:
    iVar2 = param_1[2];
    if (*param_1 == iVar2) {
      local_28 = 1;
      FUN_00edff4c(param_1,iVar2,1,1);
      iVar2 = param_1[2];
    }
    iVar1 = param_1[1];
    uVar3 = 3;
    break;
  case 4:
    iVar2 = param_1[2];
    if (*param_1 == iVar2) {
      local_28 = 1;
      FUN_00edff4c(param_1,iVar2,1,1);
      iVar2 = param_1[2];
    }
    iVar1 = param_1[1];
    uVar3 = 4;
    break;
  case 5:
    iVar2 = param_1[2];
    uVar3 = param_3[1];
    if (*param_1 == iVar2) {
      local_28 = 1;
      FUN_00edff4c(param_1,iVar2,1,1);
      iVar2 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + iVar2) = 5;
    param_1[2] = iVar2 + 1;
    FUN_00e666d4(uVar3,param_1);
    return;
  case 6:
    FUN_00ea7a00(param_1,6,param_3 + 4);
    return;
  case 7:
    iVar2 = param_1[2];
    if (*param_1 == iVar2) {
      local_28 = 1;
      FUN_00edff4c(param_1,iVar2,1,1);
      iVar2 = param_1[2];
    }
    iVar1 = param_1[1];
    uVar3 = 7;
    goto LAB_00ea82a4;
  case 8:
    iVar2 = param_1[2];
    if (*param_1 == iVar2) {
      local_28 = 1;
      FUN_00edff4c(param_1,iVar2,1,1);
      iVar2 = param_1[2];
    }
    iVar1 = param_1[1];
    uVar3 = 8;
LAB_00ea82a4:
    uVar6 = *(uint *)(param_3 + 0xc);
    *(undefined1 *)(iVar1 + iVar2) = uVar3;
    param_1[2] = iVar2 + 1;
    uVar7 = *(undefined4 *)(param_3 + 8);
    FUN_00f09308(param_1,iVar2,uVar6,0);
    iVar2 = param_1[2];
    if ((uint)(*param_1 - iVar2) < uVar6) {
      local_28 = 1;
      FUN_00edff4c(param_1,iVar2,uVar6,1);
      iVar2 = param_1[2];
    }
    FUN_016dd1aa(param_1[1] + iVar2,uVar7,uVar6);
    iVar1 = *(int *)(param_3 + 0x10);
    iVar2 = iVar2 + uVar6;
    param_1[2] = iVar2;
    if (iVar1 == 2) {
      if (*param_1 == iVar2) {
        local_28 = 1;
        FUN_00edff4c(param_1,iVar2,1,1);
        iVar2 = param_1[2];
      }
      iVar1 = param_1[1];
      uVar3 = 2;
    }
    else {
      if (iVar1 != 1) {
        if (*param_1 == iVar2) {
LAB_00ea8368:
          local_28 = 1;
          FUN_00edff4c(param_1,iVar2,1,1);
          iVar2 = param_1[2];
        }
LAB_00ea80e4:
        iVar1 = param_1[1];
        uVar3 = 0;
        break;
      }
      if (*param_1 == iVar2) {
        local_28 = 1;
        FUN_00edff4c(param_1,iVar2,1,1);
        iVar2 = param_1[2];
      }
      iVar1 = param_1[1];
      uVar3 = 1;
    }
    *(undefined1 *)(iVar1 + iVar2) = uVar3;
    param_1[2] = iVar2 + 1;
    local_24 = 1;
    local_28 = 0;
    uVar9 = FUN_00efec9c(param_3 + 0x14,&local_28,&DAT_0187b3f4);
    uVar7 = local_24;
    iVar2 = local_28;
    if ((int)uVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,
                   (int)register0x00000054 + -0x19,&DAT_0187b40c,&DAT_018af130);
    }
    FUN_00f09308(param_1,(int)((ulonglong)uVar9 >> 0x20),0,0);
    iVar1 = param_1[2];
    FUN_016dd1aa(param_1[1] + iVar1,uVar7,0);
    param_1[2] = iVar1;
    if (iVar2 != 0) {
      thunk_FUN_016d3fb4(uVar7);
    }
    return;
  }
  *(undefined1 *)(iVar1 + iVar2) = uVar3;
  param_1[2] = iVar2 + 1;
  return;
}

