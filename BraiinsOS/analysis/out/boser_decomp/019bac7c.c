// FUN_019bac7c @ 019bac7c size=1112 calls_out=9 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_019bac7c(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iVar14;
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
  int *****local_90;
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
  int *****local_48;
  undefined4 **local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_1 == 0) {
    uVar1 = *param_2;
    uVar7 = 0x15;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar5 = &UNK_00526bc1;
  }
  else {
    if (*param_1 != 1) {
      DataMemoryBarrier(0xb);
      if (param_1[5] != 0) {
        local_48 = (int *****)(param_1 + 1);
        local_90 = (int *****)&local_48;
        FUN_019a768c(param_1 + 5,1,&local_90,&DAT_01d27c3c,&DAT_01d27c50);
      }
      uVar8 = param_2[2];
      uVar10 = param_1[3];
      if ((uVar8 & 0x800000) == 0) {
        uVar9 = param_1[4];
        if (uVar10 < uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar9,uVar10,uVar10,&DAT_01d280f0);
        }
        uVar10 = uVar10 - uVar9;
        piVar13 = (int *)(param_1[2] + uVar9 * 0x1c);
      }
      else {
        piVar13 = (int *)param_1[2];
      }
      FUN_0197b690(&local_d0);
      local_b4 = (undefined1)((uVar8 & 0x800000) >> 0x17);
      local_a4 = &DAT_01d28100;
      local_a8 = &local_c0;
      local_c0 = local_d0;
      local_bc = puStack_cc;
      local_b8 = puStack_c8;
      local_a0 = 0;
      local_ac = param_2;
      local_9c = local_b4;
      if (uVar10 != 0) {
        piVar2 = piVar13 + uVar10 * 7;
        do {
          iVar3 = piVar13[6];
          if (iVar3 == 0) {
            uVar8 = piVar13[1];
            local_68 = &local_ac;
            local_64 = 0;
            if (*piVar13 == 0) {
              local_90 = (int *****)0x0;
              FUN_01be0690(uVar8,0,0xf,0,&local_90);
              uVar8 = (uint)local_90 & 0xfffffffe;
            }
            local_90 = (int *****)&DAT_00000003;
            local_48 = (int *****)0x2;
            iVar3 = FUN_0197f9fc(&local_68,uVar8,&local_90,&local_48,0);
            local_68[3] = (undefined4 *)((int)local_68[3] + 1);
            if (iVar3 != 0) {
LAB_019bafec:
              puVar6 = local_b8;
              if (local_c0 == -0x80000000) {
                if ((char)local_bc != '\x03') {
                  return 1;
                }
                uVar1 = *local_b8;
                puVar12 = (undefined4 *)local_b8[1];
                UNRECOVERED_JUMPTABLE = (code *)*puVar12;
                if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                  (*UNRECOVERED_JUMPTABLE)(uVar1);
                }
                if (puVar12[1] != 0) {
                  thunk_FUN_01be4678(uVar1);
                }
              }
              else {
                if (local_c0 == 0) {
                  return 1;
                }
                puVar6 = local_bc;
              }
              thunk_FUN_01be4678(puVar6);
              return 1;
            }
          }
          else {
            iVar14 = 0;
            iVar4 = piVar13[5];
            do {
              uVar8 = piVar13[1];
              local_98 = &local_ac;
              local_94 = 0;
              if (*piVar13 == 0) {
                local_90 = (int *****)0x0;
                FUN_01be0690(uVar8,0,0xf,0,&local_90);
                uVar8 = (uint)local_90 & 0xfffffffe;
              }
              iVar11 = iVar4 + iVar14;
              if (*(int *)(iVar11 + 0x20) == -0x80000000) {
                local_90 = (int *****)&DAT_00000003;
              }
              else {
                uVar7 = *(undefined4 *)(iVar11 + 0x24);
                uVar1 = *(undefined4 *)(iVar11 + 0x28);
                FUN_012fbd94(&local_48,uVar7,uVar1);
                if (local_48 == (int *****)&DAT_00000001) {
                  local_48 = (int *****)0x2;
                }
                else {
                  FUN_0189bc58(&local_48,local_44,local_40);
                  if (local_48 != (int *****)0x2) {
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
                local_90 = local_48;
                local_70 = uVar7;
                local_6c = uVar1;
              }
              local_48 = (int *****)0x2;
              if (*(int ******)(iVar11 + 0x10) != (int *****)0x2) {
                local_44 = *(undefined4 ***)(iVar11 + 0x18);
                local_40 = *(undefined4 *)(iVar11 + 0x1c);
                local_48 = *(int ******)(iVar11 + 0x10);
              }
              puVar6 = (undefined4 *)(iVar4 + iVar14);
              iVar11 = FUN_0197f9fc(&local_98,uVar8,&local_90,&local_48,*puVar6,puVar6[1],puVar6[2],
                                    puVar6[3]);
              local_98[3] = (undefined4 *)((int)local_98[3] + 1);
              if (iVar11 != 0) goto LAB_019bafec;
              iVar14 = iVar14 + 0x2c;
            } while (iVar3 * 0x2c != iVar14);
          }
          piVar13 = piVar13 + 7;
        } while (piVar13 != piVar2);
      }
      if (local_c0 == -0x80000000) {
        FUN_0197acb4((uint)&local_c0 | 4);
      }
      else if (local_c0 != 0) {
        thunk_FUN_01be4678(local_bc);
      }
      return 0;
    }
    uVar1 = *param_2;
    uVar7 = 0x12;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    puVar5 = &UNK_00526bd6;
  }
                    /* WARNING: Could not recover jumptable at 0x019bacd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar1,puVar5,uVar7);
  return uVar1;
}

