// FUN_00a79ca4 @ 00a79ca4 size=1612 calls_out=18 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x00a7a1d0) */
/* WARNING: Removing unreachable block (ram,0x00a7a228) */
/* WARNING: Removing unreachable block (ram,0x00a7a230) */
/* WARNING: Removing unreachable block (ram,0x00a7a23c) */
/* WARNING: Removing unreachable block (ram,0x00a7a240) */
/* WARNING: Removing unreachable block (ram,0x00a7a270) */
/* WARNING: Removing unreachable block (ram,0x00a7a274) */

void FUN_00a79ca4(undefined1 *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_r1;
  uint uVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_84;
  uint local_80;
  uint local_7c;
  int iStack_78;
  undefined4 uStack_74;
  uint local_70;
  uint local_6c;
  undefined1 *local_68;
  uint local_60;
  uint local_5c;
  uint auStack_58 [2];
  undefined4 local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined1 uStack_31;
  
  local_68 = &uStack_31;
  if ((undefined1 *)param_3[0x18] != &DAT_3b9aca00) {
    local_6c = 0;
    local_70 = 1;
    FUN_019ac130(&local_50,0);
    local_60 = local_50;
    local_5c = local_4c;
    auStack_58[0] = local_48;
    FUN_019ac248(&local_50,param_3 + 0x16,&local_60);
    uVar2 = 1;
    if ((local_50 & 1) != 0) {
      local_44 = 0;
      local_48 = 0;
    }
    uVar5 = 1;
    if (((local_44 != 0 || local_44 < (0xfa < local_48)) &&
        (uVar5 = 3, local_44 != 0 || local_44 < (0xffff < local_48))) && (uVar5 = 9, local_44 == 0))
    {
      uVar5 = 5;
    }
    uVar8 = 5;
    if ((local_50 & 1) != 0) {
      local_40 = 0;
    }
    if (local_40 < 0x10000) {
      uVar8 = 3;
    }
    if (local_40 < 0xfb) {
      uVar8 = 1;
    }
    uVar10 = uVar5 + uVar8 + local_70;
    uVar4 = uVar10 + 0x10;
    uVar11 = param_3[0x13];
    if (((uVar11 != 0 || uVar11 < (0xfa < param_3[0x12])) &&
        (uVar2 = 3, uVar11 != 0 || uVar11 < (0xffff < param_3[0x12]))) && (uVar2 = 9, uVar11 == 0))
    {
      uVar2 = 5;
    }
    uVar11 = uVar4 + uVar2;
    uVar12 = param_3[0xd];
    uVar1 = uVar11 + 1;
    uVar3 = 1;
    if (((uVar12 != 0 || uVar12 < (0xfa < param_3[0xc])) &&
        (uVar3 = 3, uVar12 != 0 || uVar12 < (0xffff < param_3[0xc]))) && (uVar3 = 9, uVar12 == 0)) {
      uVar3 = 5;
    }
    uVar12 = 0xf;
    if ((int)*param_3 < 0) {
      uVar12 = *param_3;
    }
                    /* WARNING: Could not recover jumptable at 0x00a79eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00a79eb0 + *(int *)(&DAT_00a79eb0 + uVar12 * 4)))
              (CARRY4(uVar5,uVar8) + local_6c + (uint)CARRY4(uVar5 + uVar8,local_70) +
               (uint)(0xffffffef < uVar10) + (uint)CARRY4(uVar4,uVar2) + (uint)(0xfffffffe < uVar11)
               + (uint)CARRY4(uVar1,uVar3),uVar1 + uVar3);
    return;
  }
  uVar5 = param_3[7];
  uVar2 = 0x13;
  if (((uVar5 != 0 || uVar5 < (0xfa < param_3[6])) &&
      (uVar2 = 0x15, uVar5 != 0 || uVar5 < (0xffff < param_3[6]))) && (uVar2 = 0x1b, uVar5 == 0)) {
    uVar2 = 0x17;
  }
  uVar8 = *param_3;
  uVar10 = param_3[1];
  uVar5 = 1;
  iVar6 = uVar10 - (0xfa >= uVar8);
  if (uVar10 != 0 || uVar10 < (0xfa < uVar8)) {
    uVar5 = 3;
    iVar6 = uVar10 - (0xffff >= uVar8);
    if ((uVar10 != 0 || uVar10 < (0xffff < uVar8)) && (uVar5 = 9, uVar10 == 0)) {
      uVar5 = 5;
    }
  }
  uVar8 = uVar2 + uVar5;
  local_6c = (uint)CARRY4(uVar2,uVar5);
  if (uVar8 == 0) {
    iVar6 = 1;
    uVar8 = 0;
  }
  else {
    local_70 = uVar8;
    iVar6 = FUN_01298504(uVar8,1,uVar5,iVar6);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar8);
    }
  }
  local_68 = (undefined1 *)0x0;
  local_50 = CONCAT31(local_50._1_3_,1);
  local_70 = uVar8;
  local_6c = iVar6;
  FUN_01ac6d2c(&local_70,&local_50,(int)&local_50 + 1);
  FUN_009dcbf4(param_3 + 2,&local_70);
  FUN_009c9810(&local_70,extraout_r1,*param_3,param_3[1]);
  if (local_70 == 0x80000000) {
    FUN_00ad9e88(&local_84);
    uVar5 = local_84 >> 8 | local_80 << 0x18;
    uVar2 = local_80;
  }
  else {
    local_7c = local_70;
    iStack_78 = local_6c;
    uStack_74 = local_68;
    FUN_01283524(&local_98,&local_7c);
    if (local_98 != 0) {
      local_44 = local_8c;
      local_48 = local_90;
      local_4c = local_94;
      local_50 = local_98;
      if (*(uint *)(param_2 + 0x18) < local_90) {
        FUN_01a3b320(&local_60,0x14);
        uVar8 = local_60 & 0xff;
        uVar5 = local_60 >> 8 | local_5c << 0x18;
LAB_00a7a37c:
        uVar2 = local_5c;
        (**(code **)(local_50 + 0x10))(&local_44,local_94,local_48);
        if (uVar8 != 4) {
          FUN_00abc960(param_3);
          goto LAB_00a7a3c8;
        }
      }
      else {
        uVar5 = *(uint *)(param_2 + 0x24);
        uVar2 = local_90 - uVar5;
        if ((int)uVar5 < 0) {
          if (uVar5 <= local_90) goto LAB_00a7a410;
        }
        else if (local_90 < uVar5) {
LAB_00a7a410:
          FUN_019a18a8(&local_60,0x14,&DAT_0052ce76,0x2f);
          uVar2 = local_5c;
          if (((char)local_60 != '\x04') && (uVar8 = local_60 & 0xff, uVar8 != 4)) {
            uVar5 = local_60 >> 8 | local_5c << 0x18;
            goto LAB_00a7a37c;
          }
        }
        piVar9 = (int *)(param_2 + 0x34);
        uVar5 = *(uint *)(param_2 + 0x1c);
        if ((uint)(*(int *)(param_2 + 0x3c) - *(int *)(param_2 + 0x38)) < uVar5 + uVar2) {
          FUN_01283c9c(piVar9);
        }
        if (*(char *)(param_2 + 0x28) == '\0') {
          local_5c = 0;
          local_60 = uVar2;
          if (8 < uVar5) goto LAB_00a7aea8;
          FUN_01284394(piVar9,&local_60,uVar5);
        }
        else {
          if (8 < uVar5) {
LAB_00a7aea8:
            FUN_01284588(uVar5,8);
                    /* WARNING: Does not return */
            pcVar7 = (code *)software_udf(0xfdee,0xa7aecc);
            (*pcVar7)();
          }
          local_5c = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                     uVar2 >> 0x18;
          local_60 = 0;
          FUN_01284394(piVar9,(int)auStack_58 - uVar5,uVar5);
        }
        iVar6 = *(int *)(param_2 + 0x38);
        uVar2 = *(int *)(param_2 + 0x3c) - iVar6;
        if (uVar2 < local_90) {
          FUN_01283c9c(piVar9,local_90);
          iVar6 = *(int *)(param_2 + 0x38);
          uVar2 = *(int *)(param_2 + 0x3c) - iVar6;
        }
        FUN_01bed4e2(*piVar9 + iVar6,local_94,local_90);
        if (uVar2 < local_90) {
          local_60 = local_90;
          local_5c = uVar2;
                    /* WARNING: Subroutine does not return */
          FUN_01284540(&local_60);
        }
        pcVar7 = *(code **)(local_98 + 0x10);
        *(uint *)(param_2 + 0x38) = iVar6 + local_90;
        (*pcVar7)(&local_44,local_4c,local_48);
      }
      FUN_00abc960(param_3);
      goto LAB_00a7a56c;
    }
    uVar5 = local_94 >> 8 | local_90 << 0x18;
    local_84 = local_94;
    uVar2 = local_90;
  }
  uVar8 = local_84 & 0xff;
  FUN_00abc960(param_3);
  if (uVar8 != 4) {
LAB_00a7a3c8:
    local_50 = uVar8 | uVar5 << 8;
    local_4c = uVar2 & 0xffffff00 | uVar5 >> 0x18;
    FUN_0175191c(param_1,&local_50);
    return;
  }
LAB_00a7a56c:
  *param_1 = 4;
  return;
}

