// FUN_016579c4 @ 016579c4 size=828 calls_out=14 calls_in=1
// strings: 

void FUN_016579c4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 **ppuVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  undefined8 unaff_d8;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 *local_e8;
  int local_e0;
  undefined4 *local_d8;
  undefined4 *local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  int local_64;
  int local_60;
  int local_5c;
  undefined4 *local_58;
  undefined8 local_54;
  uint uStack_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined2 local_34;
  
  uVar10 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar8 = (uint *)((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20));
  if ((char)puVar8[4] == '\0') {
    FUN_019ae6ac(&local_58);
    *puVar8 = (uint)local_58;
    puVar8[1] = (uint)(undefined4 *)local_54;
    puVar8[2] = (uint)local_54._4_4_;
    puVar8[3] = uStack_4c;
    *(undefined1 *)(puVar8 + 4) = 1;
  }
  local_b8 = *puVar8;
  uStack_b4 = puVar8[1];
  uStack_b0 = puVar8[2];
  uStack_ac = puVar8[3];
  *puVar8 = local_b8 + 1;
  puVar8[1] = uStack_b4 + (0xfffffffe < local_b8);
  local_c8 = &DAT_0056d238;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  local_90 = 0x2c;
  local_a4 = 0x2c;
  bVar1 = false;
  local_80 = 1;
  local_88 = 0;
  local_8c = 1;
  local_98 = 0;
  local_a0 = param_2;
  local_9c = param_3;
  local_94 = param_3;
  local_84 = param_3;
  do {
    uVar10 = FUN_01a5c3e4(&local_a4);
    local_48 = (uint)((ulonglong)uVar10 >> 0x20);
    if ((int)uVar10 == 0) {
      local_58 = local_c8;
      local_54 = CONCAT44(uStack_c0,uStack_c4);
      uStack_4c = uStack_bc;
      local_48 = local_b8;
      local_44 = uStack_b4;
      local_40 = uStack_b0;
      local_3c = uStack_ac;
      if (bVar1) {
        *param_1 = local_c8;
        param_1[1] = uStack_c4;
        param_1[2] = uStack_c0;
        param_1[3] = uStack_bc;
        param_1[4] = local_b8;
        param_1[5] = uStack_b4;
        param_1[6] = uStack_b0;
        param_1[7] = uStack_ac;
        *(undefined8 *)(param_1 + 8) = unaff_d8;
      }
      else {
        *param_1 = 0;
        ppuVar6 = &local_58;
LAB_01657c80:
        FUN_0165a1f4(ppuVar6);
      }
      return;
    }
    local_34 = 1;
    local_3c = 0;
    local_40 = CONCAT31(local_40._1_3_,1);
    local_44 = 0x3d;
    uStack_4c = 0;
    local_58 = (undefined4 *)0x3d;
    local_38 = local_48;
    local_54 = uVar10;
    FUN_01318634(&local_7c,&local_58);
    puVar2 = local_78;
    if ((local_74 == 2) && (iVar9 = local_78[1], iVar9 != 0)) {
      uVar3 = *local_78;
      lVar11 = FUN_0165a0a4(local_78[2],local_78[3]);
      puVar7 = (undefined4 *)((ulonglong)lVar11 >> 0x20);
      if ((iVar9 == param_5) && (iVar4 = thunk_FUN_01bed842(uVar3,param_4,param_5), iVar4 == 0)) {
        FUN_01657d5c(&local_58,(int)lVar11,puVar7);
        if ((char)local_58 != '\0') {
          *param_1 = 0;
          FUN_0134aee0(local_7c,puVar2,4,8);
          ppuVar6 = &local_c8;
          goto LAB_01657c80;
        }
        unaff_d8 = CONCAT44(uStack_4c,local_54._4_4_);
        bVar1 = true;
      }
      else {
        uVar5 = 0;
        if (iVar9 < 0) {
LAB_01657ce4:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar5,local_e0);
        }
        local_e0 = FUN_01298504(iVar9,1);
        if (local_e0 == 0) {
          uVar5 = 1;
          local_e0 = iVar9;
          goto LAB_01657ce4;
        }
        FUN_01bed4e2(local_e0,uVar3,iVar9);
        uVar3 = 0;
        local_64 = iVar9;
        local_60 = local_e0;
        local_5c = iVar9;
        if (lVar11 < 0) {
LAB_01657cfc:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar3,local_e8);
        }
        if (puVar7 == (undefined4 *)0x0) {
          local_e8 = (undefined4 *)0x1;
          local_d8 = (undefined4 *)0x0;
        }
        else {
          local_e8 = (undefined4 *)FUN_01298504(puVar7,1);
          if (local_e8 == (undefined4 *)0x0) {
            uVar3 = 1;
            local_e8 = puVar7;
            goto LAB_01657cfc;
          }
          local_d8 = puVar7;
        }
        FUN_01bed4e2(local_e8,(int)lVar11,puVar7);
        local_58 = local_d8;
        local_54._0_4_ = local_e8;
        local_54._4_4_ = puVar7;
        FUN_0165b034(&local_70,&local_c8,&local_64,&local_58);
        if (local_70 != -0x80000000) {
          FUN_0134bd64(local_70,local_6c);
        }
      }
    }
    FUN_0134aee0(local_7c,puVar2,4,8);
  } while( true );
}

