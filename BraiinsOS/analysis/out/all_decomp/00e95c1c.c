// FUN_00e95c1c @ 00e95c1c size=1088 calls_out=11 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x00e961e4) */
/* WARNING: Removing unreachable block (ram,0x00e96230) */
/* WARNING: Removing unreachable block (ram,0x00e96238) */
/* WARNING: Removing unreachable block (ram,0x00e96244) */
/* WARNING: Removing unreachable block (ram,0x00e96248) */
/* WARNING: Removing unreachable block (ram,0x00e96278) */
/* WARNING: Removing unreachable block (ram,0x00e9627c) */

void FUN_00e95c1c(undefined1 *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_r1;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  undefined1 *puStack_74;
  undefined4 uStack_70;
  int local_6c;
  undefined1 *local_68;
  undefined4 local_64;
  uint local_60;
  int local_5c;
  undefined1 *local_58;
  uint local_50;
  uint local_4c;
  uint uStack_48;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined1 uStack_25;
  
  local_58 = &uStack_25;
  if ((undefined1 *)param_3[0x18] != &DAT_3b9aca00) {
    local_5c = 0;
    local_60 = 1;
    FUN_015f3b0c(&local_40,0);
    local_50 = local_40;
    local_4c = local_3c;
    uStack_48 = local_38;
    FUN_015f3c24(&local_40,param_3 + 0x16,&local_50);
    uVar7 = 1;
    if ((local_40 & 1) != 0) {
      local_34 = 0;
      local_30 = 0;
      local_38 = 0;
    }
    uVar8 = 1;
    if (((local_34 != 0 || local_34 < (0xfa < local_38)) &&
        (uVar8 = 3, local_34 != 0 || local_34 < (0xffff < local_38))) && (uVar8 = 9, local_34 == 0))
    {
      uVar8 = 5;
    }
    uVar3 = param_3[0x13];
    uVar9 = 5;
    if (local_30 < 0x10000) {
      uVar9 = 3;
    }
    if (local_30 < 0xfb) {
      uVar9 = 1;
    }
    uVar6 = uVar9 + local_60 + uVar8;
    if (((uVar3 != 0 || uVar3 < (0xfa < param_3[0x12])) &&
        (uVar7 = 3, uVar3 != 0 || uVar3 < (0xffff < param_3[0x12]))) && (uVar7 = 9, uVar3 == 0)) {
      uVar7 = 5;
    }
    uVar3 = uVar6 + uVar7;
    uVar1 = uVar3 + 0x11;
    uVar4 = param_3[0xd];
    uVar11 = 1;
    if (((uVar4 != 0 || uVar4 < (0xfa < param_3[0xc])) &&
        (uVar11 = 3, uVar4 != 0 || uVar4 < (0xffff < param_3[0xc]))) && (uVar11 = 9, uVar4 == 0)) {
      uVar11 = 5;
    }
    uVar4 = 0xf;
    if ((int)*param_3 < 0) {
      uVar4 = *param_3;
    }
                    /* WARNING: Could not recover jumptable at 0x00e95e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00e95e80 + *(int *)(&DAT_00e95e80 + uVar4 * 4)))
              (local_5c + (uint)CARRY4(local_60,uVar8) + (uint)CARRY4(uVar9,local_60 + uVar8) +
               (uint)CARRY4(uVar6,uVar7) + (uint)(0xffffffee < uVar3) + (uint)CARRY4(uVar1,uVar11),
               uVar1 + uVar11);
    return;
  }
  uVar7 = param_3[7];
  local_60 = 0x13;
  if (((uVar7 != 0 || uVar7 < (0xfa < param_3[6])) &&
      (local_60 = 0x15, uVar7 != 0 || uVar7 < (0xffff < param_3[6]))) &&
     (local_60 = 0x1b, uVar7 == 0)) {
    local_60 = 0x17;
  }
  uVar8 = *param_3;
  uVar7 = param_3[1];
  local_5c = 0;
  iVar2 = 1;
  iVar5 = uVar7 - (0xfa >= uVar8);
  if (uVar7 != 0 || uVar7 < (0xfa < uVar8)) {
    iVar2 = 3;
    iVar5 = uVar7 - (0xffff >= uVar8);
    if ((uVar7 != 0 || uVar7 < (0xffff < uVar8)) && (iVar2 = 9, uVar7 == 0)) {
      iVar2 = 5;
    }
  }
  iVar10 = local_60 + iVar2;
  local_68 = (undefined1 *)thunk_FUN_016d4a50(iVar10,iVar2,iVar5);
  if (local_68 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar10);
  }
  *local_68 = 1;
  local_64 = 1;
  local_6c = iVar10;
  FUN_00e9f5fc(param_3 + 2,&local_6c);
  FUN_00f09308(&local_6c,extraout_r1,*param_3,param_3[1]);
  if (local_6c == -0x80000000) {
    FUN_00e7b0b0(&local_84);
    uVar8 = local_84 >> 8 | local_80 << 0x18;
    local_4c = local_80;
  }
  else {
    local_78 = local_6c;
    puStack_74 = local_68;
    uStack_70 = local_64;
    FUN_00f5ef18(&local_88,&local_78);
    if (local_88 != 0) {
      local_3c = local_84;
      local_38 = local_80;
      local_34 = local_7c;
      local_40 = local_88;
      FUN_01665a20(&local_50,param_2 + 0x10,&local_40,param_2 + 0x34);
      if (((char)local_50 != '\x04') && (uVar7 = local_50 & 0xff, uVar7 != 4)) {
        uVar8 = local_50 >> 8 | local_4c << 0x18;
        FUN_005c7920(param_3);
        if (uVar7 == 4) goto LAB_00e96934;
        goto LAB_00e968f0;
      }
      FUN_005c7920(param_3);
      goto LAB_00e96934;
    }
    uVar8 = local_84 >> 8 | local_80 << 0x18;
    local_4c = local_80;
  }
  uVar7 = local_84 & 0xff;
  FUN_005c7920(param_3);
  if (uVar7 != 4) {
LAB_00e968f0:
    local_90 = uVar7 | uVar8 << 8;
    local_8c = local_4c & 0xffffff00 | uVar8 >> 0x18;
    FUN_014b3ad4(param_1,&local_90);
    return;
  }
LAB_00e96934:
  *param_1 = 4;
  return;
}

