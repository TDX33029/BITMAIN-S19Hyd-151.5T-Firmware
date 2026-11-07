// FUN_00a88920 @ 00a88920 size=884 calls_out=12 calls_in=0
// strings: 

void FUN_00a88920(int param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  undefined4 uVar12;
  longlong *plVar13;
  undefined4 uVar14;
  uint uVar15;
  uint *puVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint *puVar21;
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
  undefined4 local_74;
  undefined4 local_70;
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
  
  puVar16 = (uint *)(param_1 + 0x428);
  FUN_01ab9a7c(puVar16);
  uVar12 = *param_2;
  uVar14 = param_2[1];
  puVar11 = *(uint **)(param_1 + 0x420);
  uVar15 = *(uint *)(param_1 + 0x424);
  uVar19 = uVar12;
  uVar20 = uVar14;
  puVar21 = puVar11;
  uVar7 = uVar15;
  uVar6 = FUN_012672ac(0,0,puVar16);
  if ((uVar6 & 0xfd) == 0) {
    return;
  }
  FUN_01267a20(param_1,param_2);
  bVar1 = *(byte *)(param_1 + 0x41d);
  if ((bVar1 & 4) == 0) {
    bVar17 = (bVar1 & 8) == 0;
    bVar2 = bVar1;
    if (!bVar17) {
      bVar2 = *(byte *)(param_1 + 0x41c);
    }
    if (bVar17 || (bVar2 & 1) == 0) {
      return;
    }
  }
  FUN_01ab9f1c(&local_60,puVar16,uVar12,uVar14,uVar19,uVar20,puVar21,uVar7);
  puVar21 = local_58;
  if (local_4c != 0) {
    local_40 = local_60;
    local_3c = local_5c;
    local_38 = local_58;
    iStack_34 = local_54;
    local_30 = (int *)local_50;
    local_2c = (uint ***)local_4c;
    if ((*local_58 & (uint)puVar11) == 0 && (local_58[1] & uVar15) == 0) {
      local_60 = local_58;
      local_5c = local_54;
      local_58 = (uint *)local_50;
      local_b0 = puVar21;
      iStack_ac = local_54;
      uStack_a8 = local_50;
      local_a4 = local_4c;
      uVar18 = FUN_01ab96a8();
      uVar19 = (undefined4)uVar18;
      uVar7 = (uint)((ulonglong)uVar18 >> 0x20) & 1;
      iVar8 = FUN_01ab8a24(uVar19);
      if (iVar8 != 0) {
        plVar13 = (longlong *)(iVar8 + 8);
        iVar9 = *(int *)(iVar8 + 0x10) + -1;
        iVar10 = *(int *)(iVar8 + 0x14) - (uint)(*(int *)(iVar8 + 0x10) == 0);
        *(int *)(iVar8 + 0x10) = iVar9;
        *(int *)(iVar8 + 0x14) = iVar10;
        if (iVar9 == 0 && iVar10 == 0) {
          FUN_019ac130(&local_40,1);
          puVar5 = local_38;
          uVar6 = local_3c;
          puVar4 = local_40;
          local_60 = *(uint **)(iVar8 + 0x18);
          local_58 = *(uint **)(iVar8 + 0x20);
          local_5c = *(int *)(iVar8 + 0x1c);
          local_7c = local_3c;
          local_80 = local_40;
          local_78 = local_38;
          FUN_019ac248(&local_40,&local_80,&local_60);
          *(uint **)(iVar8 + 0x18) = puVar4;
          *(uint *)(iVar8 + 0x1c) = uVar6;
          *(uint **)(iVar8 + 0x20) = puVar5;
          lVar3 = ZEXT48(local_38) * 1000000000 + CONCAT44(iStack_34 * 1000000000,local_30) +
                  *plVar13;
          if (((uint)local_40 & 1) != 0) {
            lVar3 = *plVar13;
          }
          *plVar13 = lVar3;
        }
      }
      if ((bVar1 & 4) == 0) {
        FUN_01ac2a34(uVar19,uVar7);
        FUN_01ab4580(&local_b0);
        return;
      }
      local_4c = puVar21[0xc];
      local_94 = *(undefined4 *)(local_4c + 0x24);
      local_90 = *(undefined4 *)(local_4c + 0x28);
      local_84 = &DAT_01d2f070;
      local_8c = &local_80;
      local_64 = &local_9c;
      local_6c = &local_8c;
      local_70 = 0;
      local_5c = 0;
      local_60 = (uint *)0x2;
      local_50 = (uint ***)&local_6c;
      local_98 = 1;
      local_9c = &DAT_01d2f7e0;
      local_88 = &DAT_01d2f090;
      local_7c = 1;
      local_80 = &DAT_01d2f7e0;
      local_68 = 1;
      local_78 = (uint *)local_94;
      local_74 = local_90;
      local_58 = (uint *)uVar12;
      local_54 = uVar14;
      FUN_01ac2a34(uVar19,uVar7);
      local_38 = local_b0;
      iStack_34 = iStack_ac;
      local_30 = (int *)uStack_a8;
      local_2c = (uint ***)local_a4;
      local_40 = puVar11;
      local_3c = uVar15;
      FUN_01ab4580(&local_38);
      local_44 = &local_60;
      local_2c = &local_44;
      local_30 = &local_48;
      local_48 = param_1 + 0x410;
      local_40 = puVar11;
      local_3c = uVar15;
      local_38 = puVar16;
      FUN_01ab23ec(&local_40);
      return;
    }
    FUN_01ab4580();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c(&DAT_00531972,0x1d,&DAT_01d2f080);
}

