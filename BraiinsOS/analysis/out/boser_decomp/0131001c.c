// FUN_0131001c @ 0131001c size=1188 calls_out=18 calls_in=1
// strings: range step cannot be zero

void FUN_0131001c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 extraout_r3;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined8 uVar11;
  uint *local_c8;
  uint *local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  uint *local_b0;
  uint *local_ac;
  uint *local_a8;
  uint *local_a4;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  undefined1 local_84 [12];
  uint uStack_78;
  uint uStack_74;
  uint *local_6c;
  uint *local_68;
  uint *local_64;
  uint *local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  int local_4c;
  uint *local_48;
  uint *local_44;
  uint *local_40;
  int local_3c;
  undefined1 local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  
  FUN_0130b364(&local_60);
  local_ac = local_50;
  local_a8 = local_54;
  puVar2 = local_58;
  puVar1 = local_5c;
  if (local_60 == (uint *)0x0) {
    local_c4 = local_50;
    local_c8 = local_54;
    local_c0 = local_4c;
    iVar5 = local_4c;
    if (local_4c == 1) {
      local_60 = (uint *)0x80000003;
      uVar4 = 0x80000000;
      local_5c = (uint *)&DAT_80000000;
      if (*local_50 == 0x80000003) {
        uVar4 = local_50[1];
      }
      if (*local_50 != 0x80000003 || uVar4 != 0x80000000) {
        FUN_0130f600(&local_60);
        iVar5 = 1;
        goto LAB_013100cc;
      }
      FUN_0130f600(&local_60);
      uVar11 = FUN_0130aeb4(&local_c8);
      uVar3 = 0;
      local_b8 = extraout_r3;
    }
    else {
LAB_013100cc:
      local_b4 = 0;
      local_bc = 0;
      puVar7 = local_ac + iVar5 * 7;
      local_b0 = local_ac;
      local_a4 = puVar7;
      if (iVar5 != 0) {
        puVar8 = local_ac;
        do {
          puVar9 = puVar8 + 7;
          uVar10 = *puVar8;
          local_a0 = puVar8[1];
          uStack_9c = puVar8[2];
          uStack_98 = puVar8[3];
          uStack_94 = puVar8[4];
          uStack_90 = puVar8[5];
          uVar4 = puVar8[6];
          uStack_8c = uVar4;
          if (uVar10 == 0x80000006) goto LAB_01310390;
          iVar5 = 1;
          if (0x80000002 < uVar10) {
            iVar5 = uVar10 + 0x7ffffffd;
          }
          local_88 = uVar10;
          uStack_78 = uStack_94;
          uStack_74 = uStack_90;
          if (iVar5 != 0) {
            if (iVar5 == 1) {
              if (uVar4 == 0) {
                puVar6 = (uint *)thunk_FUN_01be5118(0x19);
                if (puVar6 == (uint *)0x0) {
                  local_ac = puVar9;
                    /* WARNING: Subroutine does not return */
                  FUN_00664620(1,0x19);
                }
                FUN_01bed4e2(puVar6,"range step cannot be zero",0x19);
                puVar8 = (uint *)&DAT_00000019;
              }
              else if (uVar10 == 0x80000001) {
                FUN_01310e5c(&local_60,local_a0);
                puVar6 = local_5c;
                puVar8 = local_60;
                if (local_60 == (uint *)&DAT_80000000) {
                  local_58 = (uint *)((uint)local_58 & 0xffffff00);
                  local_5c = (uint *)0x834;
                  local_60 = puVar6;
                  FUN_0130ef7c(&local_30,&local_60);
LAB_0131029c:
                  local_38 = 1;
                  local_3c = uVar4 - 1;
                  local_40 = local_28;
                  if (local_30 == (uint *)0x0) {
                    local_40 = (uint *)0x0;
                  }
                  local_60 = (uint *)(uint)(local_30 != (uint *)0x0);
                  local_4c = 0;
                  local_5c = (uint *)0x0;
                  local_58 = local_30;
                  local_54 = local_2c;
                  local_50 = local_60;
                  local_48 = local_30;
                  local_44 = local_2c;
                  FUN_0130e774(&local_6c,&local_60);
                  goto LAB_013102e8;
                }
              }
              else {
                FUN_01310fd4(&local_60,&local_88);
                puVar6 = local_58;
                puVar8 = local_5c;
                if (local_60 == (uint *)0x0) {
                  local_28 = local_54;
                  local_2c = local_58;
                  local_30 = local_5c;
                  goto LAB_0131029c;
                }
              }
            }
            else {
              FUN_01311348(&local_60,uStack_9c,uStack_98);
              puVar6 = local_5c;
              puVar8 = local_60;
              if (local_60 == (uint *)&DAT_80000000) {
                local_34 = local_5c;
                FUN_0130ee0c(&local_6c,&local_34,&local_30);
                goto LAB_013102e8;
              }
            }
LAB_01310494:
            local_ac = puVar9;
LAB_013103f0:
            FUN_0130f600(&local_88);
            FUN_0130f630(&local_b0);
            FUN_0130f9ac(&local_bc);
            FUN_0134bd64(puVar8,puVar6);
            goto LAB_01310420;
          }
          FUN_01310fd4(&local_60,local_84);
          puVar6 = local_58;
          puVar8 = local_5c;
          if (local_60 != (uint *)0x0) goto LAB_01310494;
          local_64 = local_54;
          local_68 = local_58;
          local_6c = local_5c;
LAB_013102e8:
          local_4c = 0;
          local_40 = local_64;
          if (local_6c == (uint *)0x0) {
            local_40 = local_6c;
          }
          local_48 = local_6c;
          local_44 = local_68;
          local_5c = (uint *)0x0;
          local_60 = local_6c;
          if (local_6c != (uint *)0x0) {
            local_60 = (uint *)&DAT_00000001;
          }
          local_58 = local_6c;
          local_54 = local_68;
          local_50 = local_60;
          while (uVar4 = FUN_0130f688(&local_60), (uVar4 & 1) != 0) {
            FUN_01310e5c(&local_6c);
            puVar6 = local_68;
            puVar8 = local_6c;
            if (local_6c != (uint *)&DAT_80000000) {
              local_ac = puVar9;
              do {
                FUN_0130f6c8(&local_30,&local_60);
              } while (local_30 != (uint *)0x0);
              goto LAB_013103f0;
            }
            FUN_0130f1cc(&local_bc,local_68);
          }
          do {
            FUN_0130f6c8(&local_30,&local_60);
          } while (local_30 != (uint *)0x0);
          FUN_0130f600(&local_88);
          puVar8 = puVar9;
        } while (puVar9 != puVar7);
        puVar9 = puVar7;
LAB_01310390:
        local_ac = puVar9;
      }
      FUN_0130f630(&local_b0);
      uVar11 = CONCAT44(local_b4,local_bc);
      uVar3 = 1;
    }
    param_1[1] = puVar1;
    param_1[2] = puVar2;
    param_1[3] = uVar3;
    param_1[4] = (int)uVar11;
    param_1[5] = local_b8;
    param_1[6] = (int)((ulonglong)uVar11 >> 0x20);
  }
  else {
    if (local_5c != (uint *)&DAT_00000001) {
      param_1[2] = local_58;
      param_1[1] = local_5c;
      param_1[3] = local_54;
      param_1[4] = local_50;
      uVar3 = 1;
      goto LAB_01310460;
    }
LAB_01310420:
    param_1[2] = param_3;
    param_1[1] = param_2;
    param_1[3] = 2;
  }
  uVar3 = 0;
LAB_01310460:
  *param_1 = uVar3;
  return;
}

