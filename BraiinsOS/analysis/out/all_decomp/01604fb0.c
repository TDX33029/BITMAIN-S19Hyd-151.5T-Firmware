// FUN_01604fb0 @ 01604fb0 size=1200 calls_out=8 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_01604fb0(int *param_1,undefined4 *param_2)

{
  int *******pppppppiVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *******pppppppiVar6;
  undefined4 *puVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int *piVar15;
  undefined4 uVar16;
  int local_d0;
  undefined4 *puStack_cc;
  undefined4 *puStack_c8;
  int local_c0;
  undefined4 *local_bc;
  undefined4 *local_b8;
  undefined1 local_b4;
  undefined4 *local_ac;
  int *local_a8;
  undefined *local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 **local_98;
  undefined4 local_94;
  int *******local_90;
  undefined4 **local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 **local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int *******local_48;
  undefined4 **local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0160500c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_00410dd2,0x15);
    return uVar2;
  }
  if (*param_1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x01604fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_00410de7,0x12);
    return uVar2;
  }
  DataMemoryBarrier(0xb);
  if (param_1[5] == 0) {
    uVar9 = param_2[2];
    uVar11 = param_1[3];
  }
  else {
    local_48 = (int *******)(param_1 + 1);
    local_90 = (int *******)&local_48;
    FUN_015eedc4(param_1 + 5,1,&local_90,&DAT_018ab004,&DAT_018ab018);
    uVar9 = param_2[2];
    uVar11 = param_1[3];
  }
  if ((uVar9 & 0x800000) == 0) {
    uVar10 = param_1[4];
    if (uVar11 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar10,uVar11,uVar11,&DAT_018ab51c);
    }
    uVar11 = uVar11 - uVar10;
    piVar15 = (int *)(param_1[2] + uVar10 * 0x1c);
  }
  else {
    piVar15 = (int *)param_1[2];
  }
  FUN_015bff34(&local_d0);
  local_b4 = (undefined1)((uVar9 & 0x800000) >> 0x17);
  local_a4 = &DAT_018ab52c;
  local_a8 = &local_c0;
  local_c0 = local_d0;
  local_bc = puStack_cc;
  local_b8 = puStack_c8;
  local_a0 = 0;
  local_ac = param_2;
  local_9c = local_b4;
  if (uVar11 != 0) {
    piVar3 = piVar15 + uVar11 * 7;
    do {
      iVar4 = piVar15[6];
      if (iVar4 == 0) {
        uVar11 = piVar15[1];
        local_68 = &local_ac;
        local_64 = 0;
        if (*piVar15 == 0) {
          local_90 = (int *******)0x0;
          FUN_018430e4(uVar11,0,0xf,0,&local_90);
          uVar11 = (uint)local_90 & 0xfffffffe;
        }
        local_90 = (int *******)0x3;
        local_48 = (int *******)&SUB_00000002;
        iVar4 = FUN_015c428c(&local_68,uVar11,&local_90,&local_48,0);
        local_68[3] = (undefined4 *)((int)local_68[3] + 1);
        if (iVar4 != 0) {
LAB_0160538c:
          puVar7 = local_b8;
          if (local_c0 == -0x80000000) {
            if ((char)local_bc != '\x03') {
              return 1;
            }
            uVar2 = *local_b8;
            puVar13 = (undefined4 *)local_b8[1];
            pcVar8 = (code *)*puVar13;
            if (pcVar8 != (code *)0x0) {
              (*pcVar8)(uVar2);
            }
            if (puVar13[1] != 0) {
              thunk_FUN_016d3fb4(uVar2);
            }
          }
          else {
            if (local_c0 == 0) {
              return 1;
            }
            puVar7 = local_bc;
          }
          thunk_FUN_016d3fb4(puVar7);
          return 1;
        }
      }
      else {
        iVar14 = 0;
        iVar5 = piVar15[5];
        do {
          uVar11 = piVar15[1];
          local_98 = &local_ac;
          local_94 = 0;
          if (*piVar15 == 0) {
            local_90 = (int *******)0x0;
            FUN_018430e4(uVar11,0,0xf,0,&local_90);
            uVar11 = (uint)local_90 & 0xfffffffe;
          }
          iVar12 = iVar5 + iVar14;
          if (*(int *)(iVar12 + 0x20) == -0x80000000) {
            local_90 = (int *******)0x3;
            pppppppiVar6 = (int *******)&SUB_00000002;
            pppppppiVar1 = *(int ********)(iVar12 + 0x10);
            if (*(int ********)(iVar12 + 0x10) != (int *******)&SUB_00000002) {
LAB_016051c0:
              pppppppiVar6 = pppppppiVar1;
              local_44 = *(undefined4 ***)(iVar12 + 0x18);
              local_40 = *(undefined4 *)(iVar12 + 0x1c);
            }
          }
          else {
            uVar16 = *(undefined4 *)(iVar12 + 0x24);
            uVar2 = *(undefined4 *)(iVar12 + 0x28);
            FUN_00fab1e0(&local_48,uVar16,uVar2);
            if (local_48 == (int *******)&DAT_00000001) {
              local_48 = (int *******)&SUB_00000002;
            }
            else {
              FUN_014fadec(&local_48,local_44,local_40);
              if (local_48 != (int *******)&SUB_00000002) {
                local_68 = local_44;
                local_64 = local_40;
                uStack_60 = uStack_3c;
                local_5c = local_38;
                uStack_58 = uStack_34;
                uStack_54 = uStack_30;
                uStack_50 = uStack_2c;
              }
            }
            local_8c = local_68;
            uStack_88 = local_64;
            uStack_84 = uStack_60;
            local_80 = local_5c;
            uStack_7c = uStack_58;
            uStack_78 = uStack_54;
            uStack_74 = uStack_50;
            pppppppiVar6 = (int *******)&SUB_00000002;
            pppppppiVar1 = *(int ********)(iVar12 + 0x10);
            local_90 = local_48;
            local_70 = uVar16;
            local_6c = uVar2;
            if (*(int ********)(iVar12 + 0x10) != (int *******)&SUB_00000002) goto LAB_016051c0;
          }
          puVar7 = (undefined4 *)(iVar5 + iVar14);
          local_48 = pppppppiVar6;
          iVar12 = FUN_015c428c(&local_98,uVar11,&local_90,&local_48,*puVar7,puVar7[1],puVar7[2],
                                puVar7[3]);
          local_98[3] = (undefined4 *)((int)local_98[3] + 1);
          if (iVar12 != 0) goto LAB_0160538c;
          iVar14 = iVar14 + 0x2c;
        } while (iVar4 * 0x2c != iVar14);
      }
      piVar15 = piVar15 + 7;
    } while (piVar15 != piVar3);
  }
  puVar7 = local_b8;
  if (local_c0 == -0x80000000) {
    if ((char)local_bc != '\x03') {
      return 0;
    }
    uVar2 = *local_b8;
    puVar13 = (undefined4 *)local_b8[1];
    pcVar8 = (code *)*puVar13;
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(uVar2);
    }
    if (puVar13[1] != 0) {
      thunk_FUN_016d3fb4(uVar2);
    }
  }
  else {
    if (local_c0 == 0) {
      return 0;
    }
    puVar7 = local_bc;
  }
  thunk_FUN_016d3fb4(puVar7);
  return 0;
}

