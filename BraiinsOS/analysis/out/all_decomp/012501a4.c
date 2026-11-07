// FUN_012501a4 @ 012501a4 size=828 calls_out=6 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012501a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  uint **ppuVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  uint *local_98;
  uint *local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  uint local_6c;
  uint *local_68;
  uint local_64;
  uint *local_60;
  uint *local_5c;
  uint local_58;
  uint *local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint *local_34;
  uint *local_30;
  uint local_2c;
  int local_28;
  
  local_98 = *(uint **)(param_1 + 4);
  uStack_88 = param_5;
  local_94 = local_98 + *(int *)(param_1 + 8) * 5;
  local_78 = 0;
  local_80 = 0;
  local_90 = param_2;
  uStack_8c = param_3;
  local_84 = param_4;
  puVar1 = (uint *)FUN_01159950(&local_98);
  if (puVar1 == (uint *)0x0) {
    FUN_011588f0(&local_98);
    local_60 = (uint *)&DAT_00000004;
    uVar8 = 0;
    local_58 = 0;
    goto LAB_0125048c;
  }
  puVar7 = (uint *)0x0;
  puVar11 = (uint *)1;
  uVar8 = 0;
  local_34 = puVar1;
  if (local_80 != 0) {
    (**(code **)(local_7c + 0x10))(&local_60);
    puVar7 = local_60;
    puVar11 = local_5c;
    uVar8 = local_58;
  }
  puVar2 = (uint *)0x0;
  uVar10 = 0;
  puVar14 = (uint *)1;
  if (local_78 != 0) {
    (**(code **)(local_74 + 0x10))(&local_60);
    puVar2 = local_60;
    uVar10 = local_58;
    puVar14 = local_5c;
  }
  iVar3 = (int)puVar7 + (int)puVar2;
  if (CARRY4((uint)puVar7,(uint)puVar2)) {
    iVar3 = -1;
  }
  if (local_98 == (uint *)0x0) {
    if (((uint)puVar14 & (uint)puVar11) != 0) goto LAB_012502c4;
    puVar7 = (uint *)0x0;
    ppuVar9 = &local_60;
  }
  else {
    ppuVar9 = &local_60;
    puVar7 = (uint *)0x0;
    if ((((local_94 == local_98) && (puVar11 != (uint *)0x0)) && (local_94 == local_98)) &&
       (puVar14 != (uint *)0x0)) {
LAB_012502c4:
      puVar7 = (uint *)(uVar10 + uVar8);
      ppuVar9 = &local_30;
    }
  }
  *ppuVar9 = puVar7;
  uVar8 = iVar3 + 1;
  if (iVar3 == -1) {
    uVar8 = 0xffffffff;
  }
  uVar4 = 0;
  uVar10 = uVar8;
  if (uVar8 < 5) {
    uVar10 = 4;
  }
  bVar17 = 0x3ffffffe < uVar8;
  bVar16 = uVar8 == 0x3fffffff;
  uVar15 = uVar10 * 4;
  if (uVar8 < 0x40000000) {
    bVar17 = 0x7ffffffb < uVar15;
    bVar16 = uVar15 == 0x7ffffffc;
  }
  if (!bVar17 || bVar16) {
    puVar7 = (uint *)thunk_FUN_016d4a50(uVar15);
    if (puVar7 != (uint *)0x0) {
      *puVar7 = (uint)puVar1;
      local_64 = 1;
      local_60 = local_98;
      local_5c = local_94;
      local_58 = local_90;
      local_54 = (uint *)uStack_8c;
      uStack_50 = uStack_88;
      local_4c = local_84;
      local_48 = local_80;
      local_44 = local_7c;
      local_40 = local_78;
      local_3c = local_74;
      local_6c = uVar10;
      local_68 = puVar7;
      while (uVar8 = local_64, uVar10 = FUN_01159950(&local_60), uVar10 != 0) {
        local_38 = uVar10;
        if (uVar8 == local_6c) {
          puVar1 = (uint *)0x0;
          uVar15 = 1;
          iVar3 = 0;
          if (local_48 != 0) {
            (**(code **)(local_44 + 0x10))(&local_30);
            puVar1 = local_30;
            uVar15 = local_2c;
            iVar3 = local_28;
          }
          puVar7 = (uint *)0x0;
          iVar12 = 0;
          uVar13 = 1;
          if (local_40 != 0) {
            (**(code **)(local_3c + 0x10))(&local_30);
            puVar7 = local_30;
            iVar12 = local_28;
            uVar13 = local_2c;
          }
          iVar5 = (int)puVar1 + (int)puVar7;
          if (CARRY4((uint)puVar1,(uint)puVar7)) {
            iVar5 = -1;
          }
          if (local_60 == (uint *)0x0) {
            if ((uVar13 & uVar15) == 0) goto LAB_01250474;
LAB_01250360:
            puVar1 = (uint *)(iVar12 + iVar3);
            ppuVar9 = &local_34;
          }
          else {
            puVar1 = (uint *)0x0;
            if (((local_5c == local_60) && (uVar15 != 0)) && (local_5c == local_60)) {
              ppuVar9 = &local_30;
              if (uVar13 != 0) goto LAB_01250360;
            }
            else {
LAB_01250474:
              puVar1 = (uint *)0x0;
              ppuVar9 = &local_30;
            }
          }
          *ppuVar9 = puVar1;
          iVar3 = iVar5 + 1;
          if (iVar5 == -1) {
            iVar3 = -1;
          }
          FUN_011cf828(&local_6c,uVar8,iVar3,4,4);
          puVar7 = local_68;
        }
        puVar7[uVar8] = uVar10;
        local_64 = uVar8 + 1;
      }
      FUN_011588f0(&local_60);
      local_60 = local_68;
      local_58 = local_6c;
LAB_0125048c:
      local_54 = local_60 + uVar8;
      local_5c = local_60;
      puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x10);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x10);
      }
      *puVar6 = local_60;
      puVar6[1] = local_5c;
      puVar6[2] = local_58;
      puVar6[3] = local_54;
      return;
    }
    uVar4 = 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar4,uVar15);
}

