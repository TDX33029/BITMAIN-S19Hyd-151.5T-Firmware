// FUN_01211650 @ 01211650 size=1776 calls_out=18 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01211650(int param_1,undefined4 *param_2)

{
  longlong lVar1;
  uint ****ppppuVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint ****ppppuVar10;
  undefined4 ****ppppuVar11;
  uint ****ppppuVar12;
  longlong *plVar13;
  undefined4 ***pppuVar14;
  uint ****ppppuVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  uint ****ppppuVar20;
  uint ****ppppuVar21;
  uint ****local_b0;
  uint uStack_ac;
  uint ****ppppuStack_a8;
  undefined4 ****local_a4;
  undefined4 *local_9c;
  undefined4 local_98;
  uint ****local_94;
  undefined4 ***local_90;
  undefined4 ****local_8c;
  undefined *local_88;
  undefined *local_84;
  uint ****local_80;
  uint local_7c;
  uint ****local_78;
  undefined4 ***local_74;
  undefined4 local_70;
  undefined4 ****local_6c;
  undefined4 local_68;
  undefined4 **local_64;
  uint ****local_60;
  uint local_5c;
  uint ****local_58;
  uint local_54;
  uint ****local_50;
  undefined4 ****local_4c;
  uint ***local_48;
  undefined4 ****local_44;
  uint ****local_40;
  uint local_3c;
  uint ****local_38;
  uint local_34;
  uint ****local_30;
  undefined4 ****local_2c;
  
  ppppuVar10 = (uint ****)(param_1 + 0x900);
  FUN_01ab9a7c(ppppuVar10);
  ppppuVar15 = (uint ****)*param_2;
  uVar17 = param_2[1];
  ppppuVar12 = *(uint *****)(param_1 + 0x8f8);
  uVar16 = *(uint *)(param_1 + 0x8fc);
  ppppuVar20 = ppppuVar15;
  uVar5 = uVar17;
  ppppuVar21 = ppppuVar12;
  uVar18 = uVar16;
  uVar3 = FUN_012672ac(0,0,ppppuVar10);
  ppppuVar11 = (undefined4 ****)(param_1 + 0x480);
  if ((uVar3 & 0xfd) == 0) {
LAB_012119b4:
    pppuVar14 = *(undefined4 ****)(param_1 + 0x478);
    uVar18 = *(uint *)(param_1 + 0x47c);
    uVar5 = FUN_0120be0c(0,0,ppppuVar11);
    if ((uVar5 & 0xfd) == 0) {
      return;
    }
    iVar6 = FUN_01ab6a58(param_1,param_2);
    if (iVar6 != 0) {
      piVar8 = (int *)FUN_01ac25d8(param_1 + 0x60);
      if (*piVar8 != 0) {
        FUN_01306fc8(&DAT_01c25374);
        goto LAB_01211d24;
      }
      if (piVar8[3] != 0) {
        piVar8[3] = piVar8[3] + -1;
      }
      *piVar8 = 0;
    }
    if (((*(byte *)(param_1 + 0x475) & 4) == 0) &&
       (((*(byte *)(param_1 + 0x475) & 8) == 0 || (*(char *)(param_1 + 0x474) != '\x01')))) {
      return;
    }
    FUN_01ab440c(&local_60,ppppuVar10,(int)ppppuVar15 + -1);
    ppppuVar20 = local_60;
    if (local_60 == (uint ****)0x0) goto LAB_01211d28;
    local_34 = local_5c;
    local_3c = 0;
    local_40 = (uint ****)0x0;
    local_38 = local_60;
    local_30 = local_58;
    local_2c = ppppuVar11;
    if (((uint)*local_60 & (uint)pppuVar14) == 0 && ((uint)local_60[1] & uVar18) == 0) {
      local_b0 = local_60;
      uStack_ac = local_5c;
      ppppuStack_a8 = local_58;
      local_a4 = ppppuVar11;
      uVar19 = FUN_01ab96a8(local_60);
      uVar4 = (undefined4)uVar19;
      uVar5 = (uint)((ulonglong)uVar19 >> 0x20) & 1;
      iVar6 = FUN_01ab8a24(uVar4);
      if (iVar6 != 0) {
        plVar13 = (longlong *)(iVar6 + 8);
        iVar7 = *(int *)(iVar6 + 0x10) + -1;
        iVar9 = *(int *)(iVar6 + 0x14) - (uint)(*(int *)(iVar6 + 0x10) == 0);
        *(int *)(iVar6 + 0x10) = iVar7;
        *(int *)(iVar6 + 0x14) = iVar9;
        if (iVar7 == 0 && iVar9 == 0) {
          FUN_019ac130(&local_40,1);
          ppppuVar10 = local_38;
          uVar3 = local_3c;
          ppppuVar21 = local_40;
          local_60 = *(uint *****)(iVar6 + 0x18);
          local_5c = *(uint *)(iVar6 + 0x1c);
          local_58 = *(uint *****)(iVar6 + 0x20);
          local_7c = local_3c;
          local_80 = local_40;
          local_78 = local_38;
          FUN_019ac248(&local_40,&local_80,&local_60);
          *(uint *****)(iVar6 + 0x18) = ppppuVar21;
          *(uint *)(iVar6 + 0x1c) = uVar3;
          *(uint *****)(iVar6 + 0x20) = ppppuVar10;
          lVar1 = ZEXT48(local_38) * 1000000000 + CONCAT44(local_34 * 1000000000,local_30) +
                  *plVar13;
          if (((uint)local_40 & 1) != 0) {
            lVar1 = *plVar13;
          }
          *plVar13 = lVar1;
        }
      }
      if ((*(byte *)(param_1 + 0x475) & 4) == 0) {
        FUN_01ac2a34(uVar4,uVar5);
        FUN_01ab4580(&local_b0);
        return;
      }
      local_4c = (undefined4 ****)ppppuVar20[0xc];
      local_94 = (uint ****)local_4c[9];
      local_90 = local_4c[10];
      local_84 = &DAT_01c24094;
      local_8c = &local_80;
      local_64 = &local_9c;
      local_6c = &local_8c;
      local_70 = 0;
      local_5c = 0;
      local_60 = (uint ****)0x2;
      local_50 = (uint ****)&local_6c;
      local_98 = 1;
      local_9c = &DAT_01d2f7e0;
      local_88 = &DAT_01d2f090;
      local_7c = 1;
      local_80 = (uint ****)&DAT_01d2f7e0;
      local_68 = 1;
      local_78 = local_94;
      local_74 = local_90;
      local_58 = ppppuVar15;
      local_54 = uVar17;
      FUN_01ac2a34(uVar4,uVar5);
      local_38 = local_b0;
      local_34 = uStack_ac;
      local_30 = ppppuStack_a8;
      local_2c = local_a4;
      local_40 = (uint ****)pppuVar14;
      local_3c = uVar18;
      FUN_01ab4580(&local_38);
      local_44 = &local_60;
      local_2c = &local_44;
      local_30 = &local_48;
      local_48 = (uint ***)(param_1 + 0x410);
      local_40 = (uint ****)pppuVar14;
      local_3c = uVar18;
      local_38 = ppppuVar11;
      FUN_01206e14(&local_40);
      return;
    }
  }
  else {
    FUN_01267a20(ppppuVar11,param_2);
    if (((*(byte *)(param_1 + 0x8f5) & 4) == 0) &&
       (((*(byte *)(param_1 + 0x8f5) & 8) == 0 || (*(char *)(param_1 + 0x8f4) != '\x01'))))
    goto LAB_012119b4;
    FUN_01ab9f1c(&local_60,ppppuVar10,ppppuVar15,uVar17,ppppuVar20,uVar5,ppppuVar21,uVar18);
    ppppuVar20 = local_58;
    if (local_4c == (undefined4 ****)0x0) goto LAB_01211d28;
    local_40 = local_60;
    local_3c = local_5c;
    local_38 = local_58;
    local_34 = local_54;
    local_30 = local_50;
    local_2c = local_4c;
    if (((uint)*local_58 & (uint)ppppuVar12) == 0 && ((uint)local_58[1] & uVar16) == 0) {
      local_60 = local_58;
      local_5c = local_54;
      local_58 = local_50;
      local_b0 = ppppuVar20;
      uStack_ac = local_54;
      ppppuStack_a8 = local_50;
      local_a4 = local_4c;
      uVar19 = FUN_01ab96a8();
      uVar4 = (undefined4)uVar19;
      uVar5 = (uint)((ulonglong)uVar19 >> 0x20) & 1;
      iVar6 = FUN_01ab8a24(uVar4);
      if (iVar6 != 0) {
        plVar13 = (longlong *)(iVar6 + 8);
        iVar7 = *(int *)(iVar6 + 0x10) + -1;
        iVar9 = *(int *)(iVar6 + 0x14) - (uint)(*(int *)(iVar6 + 0x10) == 0);
        *(int *)(iVar6 + 0x10) = iVar7;
        *(int *)(iVar6 + 0x14) = iVar9;
        if (iVar7 == 0 && iVar9 == 0) {
          FUN_019ac130(&local_40,1);
          ppppuVar2 = local_38;
          uVar18 = local_3c;
          ppppuVar21 = local_40;
          local_60 = *(uint *****)(iVar6 + 0x18);
          local_58 = *(uint *****)(iVar6 + 0x20);
          local_5c = *(uint *)(iVar6 + 0x1c);
          local_7c = local_3c;
          local_80 = local_40;
          local_78 = local_38;
          FUN_019ac248(&local_40,&local_80,&local_60);
          *(uint *****)(iVar6 + 0x18) = ppppuVar21;
          *(uint *)(iVar6 + 0x1c) = uVar18;
          *(uint *****)(iVar6 + 0x20) = ppppuVar2;
          lVar1 = ZEXT48(local_38) * 1000000000 + CONCAT44(local_34 * 1000000000,local_30) +
                  *plVar13;
          if (((uint)local_40 & 1) != 0) {
            lVar1 = *plVar13;
          }
          *plVar13 = lVar1;
        }
      }
      if ((*(byte *)(param_1 + 0x8f5) & 4) == 0) {
        FUN_01ac2a34(uVar4,uVar5);
        FUN_01ab4580(&local_b0);
      }
      else {
        local_4c = (undefined4 ****)ppppuVar20[0xc];
        local_94 = (uint ****)local_4c[9];
        local_90 = local_4c[10];
        local_84 = &DAT_01c24094;
        local_8c = &local_80;
        local_70 = 0;
        local_5c = 0;
        local_60 = (uint ****)0x2;
        local_50 = (uint ****)&local_6c;
        local_64 = &local_9c;
        local_6c = &local_8c;
        local_98 = 1;
        local_9c = &DAT_01d2f7e0;
        local_88 = &DAT_01d2f090;
        local_7c = 1;
        local_80 = (uint ****)&DAT_01d2f7e0;
        local_68 = 1;
        local_78 = local_94;
        local_74 = local_90;
        local_58 = ppppuVar15;
        local_54 = uVar17;
        FUN_01ac2a34(uVar4,uVar5);
        local_38 = local_b0;
        local_34 = uStack_ac;
        local_30 = ppppuStack_a8;
        local_2c = local_a4;
        local_40 = ppppuVar12;
        local_3c = uVar16;
        FUN_01ab4580(&local_38);
        local_44 = &local_60;
        local_2c = &local_44;
        local_30 = &local_48;
        local_48 = (uint ***)(param_1 + 0x890);
        local_40 = ppppuVar12;
        local_3c = uVar16;
        local_38 = ppppuVar10;
        FUN_01208308(&local_40);
      }
      goto LAB_012119b4;
    }
  }
LAB_01211d24:
  FUN_01ab4580();
LAB_01211d28:
                    /* WARNING: Subroutine does not return */
  FUN_0130739c(&DAT_00531972,0x1d,&DAT_01d2f080);
}

