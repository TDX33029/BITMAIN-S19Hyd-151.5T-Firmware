// FUN_00a88ce0 @ 00a88ce0 size=892 calls_out=12 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a88ce0(int param_1,undefined4 *param_2)

{
  byte bVar1;
  longlong lVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint *puVar20;
  uint *local_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  int local_a4;
  undefined4 *local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  uint **local_8c;
  undefined *local_88;
  undefined *local_84;
  uint *local_80;
  undefined4 local_7c;
  uint *local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint ***local_6c;
  undefined4 local_68;
  undefined4 **local_64;
  uint *local_60;
  int local_5c;
  uint *local_58;
  int local_54;
  uint ***local_50;
  uint local_4c;
  int local_48;
  uint **local_44;
  uint *local_40;
  uint local_3c;
  uint *local_38;
  int iStack_34;
  int *local_30;
  uint ***local_2c;
  
  puVar15 = (uint *)(param_1 + 0x428);
  FUN_01ab9c10(puVar15);
  uVar6 = *(uint *)(param_1 + 0x424);
  uVar10 = *param_2;
  uVar11 = param_2[1];
  puVar14 = *(uint **)(param_1 + 0x420);
  uVar18 = uVar10;
  uVar19 = uVar11;
  puVar20 = puVar14;
  uVar13 = uVar6;
  uVar7 = FUN_012672ac(0,0,puVar15);
  if ((uVar7 & 0xfd) == 0) {
    return;
  }
  bVar5 = FUN_01267bbc(param_1,param_2);
  bVar1 = *(byte *)(param_1 + 0x41d);
  if ((bVar1 & 2) == 0) {
    bVar16 = (bVar1 & 8) == 0;
    if (!bVar16) {
      bVar5 = *(byte *)(param_1 + 0x41c);
    }
    if (bVar16 || (bVar5 & 1) == 0) {
      return;
    }
  }
  FUN_01ab9f1c(&local_60,puVar15,uVar10,uVar11,uVar18,uVar19,puVar20,uVar13);
  puVar20 = local_58;
  if (local_4c != 0) {
    local_40 = local_60;
    local_3c = local_5c;
    local_38 = local_58;
    iStack_34 = local_54;
    local_30 = (int *)local_50;
    local_2c = (uint ***)local_4c;
    if ((*local_58 & (uint)puVar14) == 0 && (local_58[1] & uVar6) == 0) {
      local_60 = local_58;
      local_5c = local_54;
      local_58 = (uint *)local_50;
      local_b0 = puVar20;
      iStack_ac = local_54;
      uStack_a8 = local_50;
      local_a4 = local_4c;
      uVar17 = FUN_01ab96a8(puVar20);
      uVar13 = (uint)((ulonglong)uVar17 >> 0x20) & 1;
      plVar8 = (longlong *)FUN_01ab8a24();
      if (plVar8 != (longlong *)0x0) {
        puVar12 = (uint *)(plVar8 + 2);
        uVar7 = *puVar12;
        iVar9 = *(int *)((int)plVar8 + 0x14);
        if (uVar7 == 0 && iVar9 == 0) {
          FUN_019ac130(&local_40,1);
          puVar4 = local_38;
          uVar7 = local_3c;
          puVar3 = local_40;
          local_60 = *(uint **)(plVar8 + 3);
          local_5c = *(int *)((int)plVar8 + 0x1c);
          local_58 = (uint *)plVar8[4];
          local_7c = local_3c;
          local_80 = local_40;
          local_78 = local_38;
          FUN_019ac248(&local_40,&local_80,&local_60);
          *(uint **)(plVar8 + 3) = puVar3;
          *(uint *)((int)plVar8 + 0x1c) = uVar7;
          *(uint **)(plVar8 + 4) = puVar4;
          lVar2 = ZEXT48(local_38) * 1000000000 + CONCAT44(iStack_34 * 1000000000,local_30) +
                  *plVar8;
          if (((uint)local_40 & 1) != 0) {
            lVar2 = *plVar8;
          }
          *plVar8 = lVar2;
          uVar7 = *puVar12;
          iVar9 = *(int *)((int)plVar8 + 0x14);
        }
        *puVar12 = uVar7 + 1;
        *(uint *)((int)plVar8 + 0x14) = iVar9 + (uint)(0xfffffffe < uVar7);
      }
      if ((bVar1 & 2) == 0) {
        FUN_01ac2a34((int)uVar17,uVar13);
        FUN_01ab4580(&local_b0);
        return;
      }
      local_4c = puVar20[0xc];
      local_94 = *(undefined4 *)(local_4c + 0x24);
      local_90 = *(undefined4 *)(local_4c + 0x28);
      local_84 = &DAT_01d2f070;
      local_88 = &DAT_01d2f0e8;
      local_8c = &local_80;
      uStack_70 = 0;
      local_64 = &local_9c;
      local_6c = &local_8c;
      local_60 = (uint *)0x2;
      local_50 = (uint ***)&local_6c;
      local_98 = 1;
      local_9c = &DAT_01d2f7e0;
      local_7c = 1;
      local_80 = &DAT_01d2f7e0;
      local_68 = 1;
      local_5c = 0;
      local_78 = (uint *)local_94;
      uStack_74 = local_90;
      local_58 = (uint *)uVar10;
      local_54 = uVar11;
      FUN_01ac2a34((int)uVar17,uVar13);
      local_38 = local_b0;
      iStack_34 = iStack_ac;
      local_30 = (int *)uStack_a8;
      local_2c = (uint ***)local_a4;
      local_40 = puVar14;
      local_3c = uVar6;
      FUN_01ab4580(&local_38);
      local_44 = &local_60;
      local_2c = &local_44;
      local_30 = &local_48;
      local_48 = param_1 + 0x410;
      local_40 = puVar14;
      local_3c = uVar6;
      local_38 = puVar15;
      FUN_01ab23ec(&local_40);
      return;
    }
    FUN_01ab4580();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c(&DAT_00531972,0x1d,&DAT_01d2f0d8);
}

