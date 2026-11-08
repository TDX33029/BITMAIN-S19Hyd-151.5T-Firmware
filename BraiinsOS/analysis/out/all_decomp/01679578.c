// FUN_01679578 @ 01679578 size=2404 calls_out=11 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01679578(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  byte *pbVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  byte *pbVar16;
  bool bVar17;
  int local_b0;
  byte *local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  uint local_9c;
  undefined *local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined *local_88;
  undefined *local_84;
  undefined4 local_80;
  char *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined *local_64;
  undefined4 local_60;
  byte *local_58;
  uint local_54;
  undefined4 local_50;
  byte *local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  byte **local_28;
  
  uVar9 = *(uint *)(param_2 + 0xc);
  pbVar16 = *(byte **)(param_2 + 8);
  if (uVar9 < 2) {
    *(byte **)(param_2 + 8) = pbVar16;
    *(uint *)(param_2 + 0xc) = uVar9;
  }
  else {
    *(byte **)(param_2 + 8) = pbVar16;
    *(uint *)(param_2 + 0xc) = uVar9;
    if (*pbVar16 == 0x30) {
      bVar1 = pbVar16[1];
      local_58 = pbVar16;
      local_54 = uVar9;
      if (bVar1 == 0x62) {
        local_7c = &DAT_0041440d;
        local_88 = &DAT_00313000;
        local_98 = &DAT_00313000;
        local_78 = 5;
        local_84 = (undefined *)CONCAT31(local_84._1_3_,0x5f);
        local_74 = CONCAT13(local_74._3_1_,0x313000);
        local_64 = &DAT_0041442c;
        local_68 = 3;
        iVar2 = 1;
        local_70 = &DAT_0041442a;
        local_80 = 2;
        local_8c = 0;
        local_94 = 0;
        local_60 = 0xe;
        local_6c = 2;
        uVar8 = (uint)*pbVar16;
        if ((uVar8 == 0x30) && (pbVar16[1] == 0x62)) {
          pbVar11 = pbVar16 + 2;
          uVar7 = uVar9 - 2;
          iVar2 = 2;
          *(byte **)(param_2 + 8) = pbVar11;
          *(uint *)(param_2 + 0xc) = uVar7;
          if (uVar7 == 0) goto LAB_01679b68;
          bVar1 = pbVar16[2];
          uVar8 = uVar9 - 3;
          *(byte **)(param_2 + 8) = pbVar16 + 3;
          *(uint *)(param_2 + 0xc) = uVar8;
          if ((bVar1 & 0xfe) != 0x30) {
            *(byte **)(param_2 + 8) = pbVar11;
            *(uint *)(param_2 + 0xc) = uVar7;
            goto LAB_01679b68;
          }
          FUN_0166a310(&local_50,&local_88,param_2);
          if (local_50 != 3) {
            local_b0 = local_50;
            local_a8 = local_48;
            local_ac = local_4c;
            local_9c = local_3c;
            local_a4 = local_44;
            local_a0 = local_40;
            if (local_50 == 1) {
              local_b0 = 2;
            }
            goto LAB_01679b70;
          }
          iVar2 = *(int *)(param_2 + 8);
          *(byte **)(param_2 + 8) = pbVar11;
          uVar8 = iVar2 - (int)pbVar11;
          *(uint *)(param_2 + 0xc) = uVar7;
          if (uVar7 < uVar8) goto LAB_01679ed4;
          *(byte **)(param_2 + 8) = pbVar11 + uVar8;
          *(uint *)(param_2 + 0xc) = uVar7 - uVar8;
          local_4c = pbVar11;
        }
        else {
LAB_01679b68:
          local_b0 = iVar2;
          local_a8 = 4;
          local_ac = (byte *)0x0;
          local_9c = uVar8;
          local_a4 = 0;
          local_a0 = 0;
LAB_01679b70:
          local_28 = &local_58;
          uStack_38 = local_68;
          puStack_34 = local_64;
          uStack_30 = local_60;
          iStack_2c = param_2;
          FUN_00953084(&local_50,&local_b0,&uStack_38);
          local_b0 = local_50;
          local_ac = local_4c;
          local_a8 = local_48;
          local_a4 = local_44;
          local_a0 = local_40;
          local_9c = local_3c;
          if (local_50 != 3) {
LAB_01679dc4:
            bVar17 = local_50 == 1;
            if (bVar17) {
              local_50 = 2;
            }
            param_1[3] = local_44;
            param_1[4] = local_40;
            param_1[5] = local_3c;
            ppuVar5 = (undefined **)(param_1 + 1);
            *ppuVar5 = local_4c;
            param_1[2] = local_48;
            ppuVar15 = &local_98;
            if (!bVar17) {
              ppuVar15 = ppuVar5;
            }
            local_98 = *ppuVar5;
            local_94 = param_1[2];
            local_90 = param_1[3];
            local_8c = param_1[4];
            local_88 = (undefined *)param_1[5];
            goto LAB_01679e08;
          }
        }
        FUN_01679f78(&local_98,local_4c);
        iVar2 = local_94;
        FUN_0167a21c(&local_50,local_94,local_90,2);
        if (local_98 != (undefined *)0x0) {
          thunk_FUN_016d3fb4(iVar2);
        }
        if ((char)local_50 != '\x01') goto LAB_01679da8;
        *(byte **)(param_2 + 8) = pbVar16;
        *(uint *)(param_2 + 0xc) = uVar9;
        local_8c = 0;
        local_90 = 0;
        local_98 = (undefined *)0x0;
        local_94 = 4;
        puVar3 = (undefined1 *)thunk_FUN_016d4a50(1);
        if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(1,1);
        }
      }
      else {
        if (bVar1 == 0x6f) {
          local_7c = &DAT_0041440d;
          local_78 = 5;
          local_84 = (undefined *)CONCAT31(local_84._1_3_,0x5f);
          local_88 = &DAT_00373000;
          local_98 = &DAT_00373000;
          local_74 = CONCAT13(local_74._3_1_,0x373000);
          local_64 = &DAT_0041444f;
          local_68 = 3;
          iVar2 = 1;
          local_70 = &DAT_0041444d;
          local_80 = 2;
          local_8c = 0;
          local_94 = 0;
          local_60 = 0xd;
          local_6c = 2;
          uVar8 = (uint)*pbVar16;
          if ((uVar8 == 0x30) && (pbVar16[1] == 0x6f)) {
            pbVar11 = pbVar16 + 2;
            uVar7 = uVar9 - 2;
            iVar2 = 2;
            *(byte **)(param_2 + 8) = pbVar11;
            *(uint *)(param_2 + 0xc) = uVar7;
            if (uVar7 == 0) goto LAB_01679a30;
            bVar1 = pbVar16[2];
            uVar8 = uVar9 - 3;
            *(byte **)(param_2 + 8) = pbVar16 + 3;
            *(uint *)(param_2 + 0xc) = uVar8;
            if ((bVar1 & 0xf8) != 0x30) {
              *(byte **)(param_2 + 8) = pbVar11;
              *(uint *)(param_2 + 0xc) = uVar7;
              goto LAB_01679a30;
            }
            FUN_0166a310(&local_50,&local_88,param_2);
            if (local_50 != 3) {
              local_b0 = local_50;
              local_a8 = local_48;
              local_ac = local_4c;
              local_9c = local_3c;
              local_a4 = local_44;
              local_a0 = local_40;
              if (local_50 == 1) {
                local_b0 = 2;
              }
              goto LAB_01679a38;
            }
            iVar2 = *(int *)(param_2 + 8);
            *(byte **)(param_2 + 8) = pbVar11;
            uVar8 = iVar2 - (int)pbVar11;
            *(uint *)(param_2 + 0xc) = uVar7;
            if (uVar7 < uVar8) goto LAB_01679ed4;
            *(byte **)(param_2 + 8) = pbVar11 + uVar8;
            *(uint *)(param_2 + 0xc) = uVar7 - uVar8;
            local_4c = pbVar11;
          }
          else {
LAB_01679a30:
            local_b0 = iVar2;
            local_a8 = 4;
            local_ac = (byte *)0x0;
            local_9c = uVar8;
            local_a4 = 0;
            local_a0 = 0;
LAB_01679a38:
            local_28 = &local_58;
            uStack_38 = local_68;
            puStack_34 = local_64;
            uStack_30 = local_60;
            iStack_2c = param_2;
            FUN_00953084(&local_50,&local_b0,&uStack_38);
            local_b0 = local_50;
            local_ac = local_4c;
            local_a8 = local_48;
            local_a4 = local_44;
            local_a0 = local_40;
            local_9c = local_3c;
            if (local_50 != 3) goto LAB_01679dc4;
          }
          ppuVar15 = &local_98;
          FUN_01679f78(ppuVar15,local_4c);
          iVar2 = local_94;
          FUN_0167a21c(&local_50,local_94,local_90,8);
          if (local_98 != (undefined *)0x0) {
            thunk_FUN_016d3fb4(iVar2);
          }
          if ((char)local_50 == '\x01') {
            *(byte **)(param_2 + 8) = pbVar16;
            *(uint *)(param_2 + 0xc) = uVar9;
            local_8c = 0;
            local_90 = 0;
            local_98 = (undefined *)0x0;
            local_94 = 4;
            puVar3 = (undefined1 *)thunk_FUN_016d4a50(1);
            if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(1,1);
            }
            *puVar3 = local_50._1_1_;
            local_50 = 2;
            param_1[1] = (int)local_98;
            param_1[2] = local_94;
            param_1[3] = local_90;
            param_1[4] = (int)puVar3;
            param_1[5] = (int)&DAT_018ad99c;
            local_98 = (undefined *)param_1[1];
            local_94 = param_1[2];
            local_90 = param_1[3];
            local_8c = param_1[4];
            local_88 = (undefined *)param_1[5];
            goto LAB_01679e08;
          }
          goto LAB_01679da8;
        }
        if (bVar1 != 0x78) goto LAB_016796d0;
        local_7c = "0x";
        local_70 = &DAT_0041443a;
        local_74 = 3;
        local_80 = 5;
        local_84 = &DAT_0041440d;
        local_8c = CONCAT31(local_8c._1_3_,0x5f);
        iVar2 = 1;
        local_6c = 0x13;
        local_78 = 2;
        local_88 = (undefined *)0x2;
        iVar6 = 4;
        local_90 = 0;
        local_98 = (undefined *)0x0;
        uVar8 = (uint)*pbVar16;
        if ((uVar8 != 0x30) || (pbVar16[1] != 0x78)) {
          local_a0 = 0;
          local_a4 = 0;
          local_ac = (byte *)0x0;
LAB_01679c78:
          local_28 = &local_58;
          uStack_38 = local_74;
          puStack_34 = local_70;
          uStack_30 = local_6c;
          local_b0 = iVar2;
          local_a8 = iVar6;
          local_9c = uVar8;
          iStack_2c = param_2;
          FUN_00953084(&local_50,&local_b0,&uStack_38);
          local_b0 = local_50;
          local_ac = local_4c;
          local_a8 = local_48;
          local_a4 = local_44;
          local_a0 = local_40;
          local_9c = local_3c;
          if (local_50 == 3) goto LAB_01679ce8;
          goto LAB_01679dc4;
        }
        pbVar11 = pbVar16 + 2;
        uVar8 = uVar9 - 2;
        *(byte **)(param_2 + 8) = pbVar11;
        *(uint *)(param_2 + 0xc) = uVar8;
        FUN_016794d0(&local_50,param_2);
        if ((local_50 != 3) || (FUN_01669e10(&local_50,&local_8c,param_2), local_50 != 3)) {
          iVar2 = local_50;
          if (local_50 == 1) {
            iVar2 = 2;
          }
          local_a0 = local_40;
          iVar6 = local_48;
          uVar8 = local_3c;
          local_ac = local_4c;
          local_a4 = local_44;
          goto LAB_01679c78;
        }
        iVar2 = *(int *)(param_2 + 8);
        *(byte **)(param_2 + 8) = pbVar11;
        uVar7 = iVar2 - (int)pbVar11;
        *(uint *)(param_2 + 0xc) = uVar8;
        if (uVar8 < uVar7) {
LAB_01679ed4:
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ad9c8);
        }
        *(byte **)(param_2 + 8) = pbVar11 + uVar7;
        *(uint *)(param_2 + 0xc) = uVar8 - uVar7;
        local_4c = pbVar11;
LAB_01679ce8:
        FUN_01679f78(&local_98,local_4c);
        FUN_0167a21c(&local_50,local_94,local_90,0x10);
        if (local_98 != (undefined *)0x0) {
          thunk_FUN_016d3fb4(local_94);
        }
        if ((char)local_50 != '\x01') goto LAB_01679da8;
        *(byte **)(param_2 + 8) = pbVar16;
        *(uint *)(param_2 + 0xc) = uVar9;
        local_8c = 0;
        local_90 = 0;
        local_98 = (undefined *)0x0;
        local_94 = 4;
        puVar3 = (undefined1 *)thunk_FUN_016d4a50(1);
        if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(1,1);
        }
      }
      ppuVar15 = &local_98;
      *puVar3 = local_50._1_1_;
      local_50 = 2;
      param_1[1] = (int)local_98;
      param_1[2] = local_94;
      param_1[3] = local_90;
      param_1[4] = (int)puVar3;
      param_1[5] = (int)&DAT_018ad99c;
      local_98 = (undefined *)param_1[1];
      local_94 = param_1[2];
      local_90 = param_1[3];
      local_8c = param_1[4];
      local_88 = (undefined *)param_1[5];
LAB_01679e08:
      puVar4 = *ppuVar15;
      puVar10 = ppuVar15[1];
      puVar12 = ppuVar15[2];
      puVar13 = ppuVar15[3];
      puVar14 = ppuVar15[4];
      *param_1 = local_50;
      param_1[1] = (int)puVar4;
      param_1[2] = (int)puVar10;
      param_1[3] = (int)puVar12;
      param_1[4] = (int)puVar13;
      param_1[5] = (int)puVar14;
      return;
    }
  }
LAB_016796d0:
  FUN_01679184(&local_98,param_2);
  if (local_98 != (undefined *)0x3) {
    *param_1 = (int)local_98;
    param_1[1] = local_94;
    param_1[2] = local_90;
    param_1[3] = local_8c;
    param_1[4] = (int)local_88;
    param_1[5] = (int)local_84;
    return;
  }
  FUN_01679f78(&local_98);
  FUN_0167a21c(&local_50,local_94,local_90,10);
  if (local_98 != (undefined *)0x0) {
    thunk_FUN_016d3fb4(local_94);
  }
  if ((char)local_50 == '\x01') {
    local_94 = 4;
    local_8c = 0;
    local_90 = 0;
    local_98 = (undefined *)0x0;
    puVar3 = (undefined1 *)thunk_FUN_016d4a50(1);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(1,1);
    }
    *puVar3 = local_50._1_1_;
    param_1[3] = local_90;
    param_1[4] = (int)puVar3;
    *(byte **)(param_2 + 8) = pbVar16;
    param_1[2] = local_94;
    param_1[5] = (int)&DAT_018ad99c;
    *(uint *)(param_2 + 0xc) = uVar9;
    *param_1 = 2;
    param_1[1] = 0;
    return;
  }
LAB_01679da8:
  param_1[2] = local_48;
  param_1[3] = local_44;
  *param_1 = 3;
  return;
}

