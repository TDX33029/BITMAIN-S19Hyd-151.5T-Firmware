// FUN_0132e3b4 @ 0132e3b4 size=1884 calls_out=12 calls_in=1
// strings: expected conditional to be a backreference or at least an expression for when the condition is true | expected 2 alternatives

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0132e3b4(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint **ppuVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *local_f8;
  uint local_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint *local_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint *local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint *local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 *local_98;
  uint local_94;
  uint *local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint *local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  undefined1 *local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 *local_44;
  int local_40;
  uint *local_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  if (*(uint *)(param_2 + 0x14) <= param_3) {
    param_1[5] = param_3;
    *param_1 = 1;
    param_1[1] = 1;
    return;
  }
  uVar2 = (uint)*(byte *)(*(int *)(param_2 + 0x10) + param_3);
  if (uVar2 < 0x2d) {
    if (uVar2 == 0x27) {
      FUN_0132e238(&local_98,param_2,param_3,&DAT_0052d60c,1,"\')",2,1);
      if (((uint)local_98 & 1) == 0) {
        local_b0 = local_90;
        uStack_ac = uStack_8c;
        uStack_a8 = uStack_88;
        uStack_a4 = uStack_84;
        uStack_a0 = uStack_80;
        local_e0 = local_90;
        uStack_dc = uStack_8c;
        uStack_d8 = uStack_88;
        uStack_d4 = uStack_84;
        uStack_d0 = uStack_80;
        goto LAB_0132e5dc;
      }
    }
    else {
      if (uVar2 != 0x2b) {
LAB_0132e480:
        if (9 < uVar2 - 0x30) {
          FUN_0132bb68(&local_98,param_2,param_3,param_4);
          if (((uint)local_98 & 1) != 0) {
            param_1[2] = local_90;
            param_1[3] = uStack_8c;
            param_1[4] = uStack_88;
            param_1[5] = uStack_84;
            *param_1 = 1;
            param_1[1] = local_94;
            return;
          }
          local_b0 = local_90;
          uStack_ac = uStack_8c;
          uStack_a8 = uStack_88;
          uStack_a4 = uStack_84;
          uStack_a0 = uStack_80;
          local_c8 = local_90;
          uStack_c4 = uStack_8c;
          uStack_c0 = uStack_88;
          uStack_bc = uStack_84;
          uStack_b8 = uStack_80;
          FUN_0132f1ec(&local_98,param_2,local_94);
          if (local_98 != (undefined4 *)&DAT_00000012) {
            param_1[3] = local_90;
            param_1[4] = uStack_8c;
            param_1[5] = uStack_88;
            param_1[1] = local_98;
            param_1[2] = local_94;
            ppuVar3 = &local_c8;
            *param_1 = 1;
            goto LAB_0132e648;
          }
          local_e0 = local_c8;
          uStack_dc = uStack_c4;
          uStack_d8 = uStack_c0;
          uStack_d4 = uStack_bc;
          uStack_d0 = uStack_b8;
          goto LAB_0132e5dc;
        }
      }
LAB_0132e48c:
      FUN_0132e238(&local_98,param_2,param_3,1,0,&DAT_0053341b,1,1);
      if (((uint)local_98 & 1) == 0) {
        local_b0 = local_90;
        uStack_ac = uStack_8c;
        uStack_a8 = uStack_88;
        uStack_a4 = uStack_84;
        uStack_a0 = uStack_80;
        local_e0 = local_90;
        uStack_dc = uStack_8c;
        uStack_d8 = uStack_88;
        uStack_d4 = uStack_84;
        uStack_d0 = uStack_80;
        goto LAB_0132e5dc;
      }
    }
    param_1[2] = local_90;
    param_1[3] = uStack_8c;
    param_1[4] = uStack_88;
    param_1[5] = uStack_84;
LAB_0132e550:
    *param_1 = 1;
    param_1[1] = local_94;
    return;
  }
  if (uVar2 == 0x2d) goto LAB_0132e48c;
  if (uVar2 != 0x3c) goto LAB_0132e480;
  FUN_0132e238(&local_98,param_2,param_3,"<",1,">)",2,1);
  if (((uint)local_98 & 1) != 0) {
    param_1[2] = local_90;
    param_1[3] = uStack_8c;
    param_1[4] = uStack_88;
    param_1[5] = uStack_84;
    goto LAB_0132e550;
  }
  local_b0 = local_90;
  uStack_ac = uStack_8c;
  uStack_a8 = uStack_88;
  uStack_a4 = uStack_84;
  uStack_a0 = uStack_80;
  local_e0 = local_90;
  uStack_dc = uStack_8c;
  uStack_d8 = uStack_88;
  uStack_d4 = uStack_84;
  uStack_d0 = uStack_80;
LAB_0132e5dc:
  uVar11 = local_94;
  local_f8 = local_e0;
  local_f4 = uStack_dc;
  uStack_f0 = uStack_d8;
  uStack_ec = uStack_d4;
  uStack_e8 = uStack_d0;
  FUN_0132bb68(&local_98,param_2,local_94,param_4);
  uVar1 = local_94;
  uVar2 = local_f4;
  if (((uint)local_98 & 1) == 0) {
    local_b0 = local_90;
    uStack_ac = uStack_8c;
    uStack_a8 = uStack_88;
    uStack_a4 = uStack_84;
    uStack_a0 = uStack_80;
    local_c8 = local_90;
    uStack_c4 = uStack_8c;
    uStack_c0 = uStack_88;
    uStack_bc = uStack_84;
    uStack_b8 = uStack_80;
    if (local_94 == uVar11) {
      if (local_f8 == (uint *)0x8000000a) {
        FUN_0132f1ec(&local_98,param_2);
        if (local_98 == (undefined4 *)&DAT_00000012) {
          param_1[1] = local_94;
          uVar4 = 0;
          iVar6 = 0xc;
          iVar7 = 8;
          uVar11 = uVar2;
          puVar12 = (undefined4 *)0x8000000f;
        }
        else {
          uVar4 = 1;
          param_1[3] = local_90;
          param_1[4] = uStack_8c;
          param_1[5] = uStack_88;
          iVar6 = 8;
          iVar7 = 4;
          uVar11 = local_94;
          puVar12 = local_98;
        }
      }
      else {
        puVar12 = (undefined4 *)0x63;
        iVar6 = thunk_FUN_01be5118(99);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,99);
        }
        FUN_01bed4e2(iVar6,
                     "expected conditional to be a backreference or at least an expression for when the condition is true"
                     ,99);
        param_1[3] = iVar6;
        param_1[1] = 0;
        param_1[2] = 99;
        uVar4 = 1;
        iVar6 = 0x14;
        iVar7 = 0x10;
      }
      *(undefined4 **)((int)param_1 + iVar7) = puVar12;
      *(uint *)((int)param_1 + iVar6) = uVar11;
      *param_1 = uVar4;
      if (local_c8 == (uint *)&DAT_80000005) {
        FUN_0132c2ac((uint)&local_c8 | 4);
      }
      else {
        FUN_0132bfa0(&local_c8);
      }
    }
    else {
      puVar10 = (undefined1 *)0x80000000;
      local_60 = (undefined1 *)0x80000000;
      if (local_90 == (uint *)&DAT_80000005) {
        puVar12 = (undefined4 *)((uint)&local_c8 | 4);
        local_48 = *puVar12;
        puVar9 = (undefined4 *)puVar12[1];
        iVar7 = puVar12[2];
        iVar6 = 0;
        local_44 = puVar9;
        local_40 = iVar7;
        if (iVar7 == 0) {
LAB_0132eb14:
                    /* WARNING: Subroutine does not return */
          FUN_0066651c(0,iVar6,&DAT_01ce631c);
        }
        puVar8 = (uint *)*puVar9;
        local_98 = (undefined4 *)puVar9[1];
        local_94 = puVar9[2];
        local_90 = (uint *)puVar9[3];
        uStack_8c = puVar9[4];
        FUN_01bed864(puVar9,puVar9 + 5,iVar7 * 0x14 + -0x14);
        iVar6 = iVar7 + -1;
        local_40 = iVar6;
        if (puVar8 == (uint *)0x80000013) goto LAB_0132eb14;
        puVar12 = (undefined4 *)((uint)&local_78 | 4);
        *puVar12 = local_98;
        puVar12[1] = local_94;
        puVar12[2] = local_90;
        puVar12[3] = uStack_8c;
        local_78 = puVar8;
        if (iVar6 == 1) {
          puVar10 = (undefined1 *)*puVar9;
          local_40 = 0;
          if (puVar10 == (undefined1 *)0x80000013) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("expected 2 alternatives",0x17,&DAT_01ce632c);
          }
          local_98 = (undefined4 *)puVar9[1];
          local_94 = puVar9[2];
          local_90 = (uint *)puVar9[3];
          uStack_8c = puVar9[4];
          FUN_0132bfa0(&local_60);
          puVar12 = (undefined4 *)((uint)&local_60 | 4);
          *puVar12 = local_98;
          puVar12[1] = local_94;
          puVar12[2] = local_90;
          puVar12[3] = uStack_8c;
          local_60 = puVar10;
          FUN_0132c2ac(&local_48);
        }
        else {
          FUN_0132bfa0(&local_60);
          puVar10 = &DAT_80000005;
          local_60 = &DAT_80000005;
          puVar12 = (undefined4 *)((uint)&local_60 | 4);
          *puVar12 = local_48;
          puVar12[1] = local_44;
          puVar12[2] = local_40;
        }
      }
      else {
        local_78 = local_90;
        uStack_74 = uStack_8c;
        uStack_70 = uStack_88;
        uStack_6c = uStack_84;
        uStack_68 = uStack_80;
      }
      puVar8 = local_f8;
      if (local_f8 == (uint *)0x8000000a) {
        local_34 = local_f4;
        local_38 = (uint *)0x8000000f;
      }
      else {
        local_38 = local_e0;
        local_34 = uStack_dc;
        uStack_30 = uStack_d8;
        uStack_2c = uStack_d4;
        uStack_28 = uStack_d0;
      }
      FUN_0132f1ec(&local_98,param_2,uVar1);
      uVar2 = local_94;
      if (local_98 == (undefined4 *)&DAT_00000012) {
        if (local_78 == (uint *)&DAT_80000000 && puVar10 == (undefined1 *)0x80000000) {
          *param_1 = 0;
          param_1[1] = local_94;
          param_1[2] = local_38;
          param_1[3] = local_34;
          param_1[4] = uStack_30;
          param_1[5] = uStack_2c;
          param_1[6] = uStack_28;
          FUN_0132bfa0(&local_60);
          FUN_0132bfa0(&local_78);
        }
        else {
          puVar5 = (uint *)thunk_FUN_01be5118(0x14);
          if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x14);
          }
          *puVar5 = (uint)local_38;
          puVar5[1] = local_34;
          puVar5[2] = uStack_30;
          puVar5[3] = uStack_2c;
          puVar5[4] = uStack_28;
          local_b0 = puVar5;
          puVar12 = (undefined4 *)thunk_FUN_01be5118(0x14);
          if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x14);
          }
          *puVar12 = local_78;
          puVar12[1] = uStack_74;
          puVar12[2] = uStack_70;
          puVar12[3] = uStack_6c;
          puVar12[4] = uStack_68;
          local_98 = puVar12;
          puVar9 = (undefined4 *)thunk_FUN_01be5118(0x14);
          if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x14);
          }
          *puVar9 = local_60;
          puVar9[1] = uStack_5c;
          puVar9[2] = uStack_58;
          puVar9[3] = uStack_54;
          puVar9[4] = uStack_50;
          *param_1 = 0;
          param_1[1] = uVar2;
          param_1[2] = &DAT_80000010;
          param_1[3] = puVar5;
          param_1[4] = puVar12;
          param_1[5] = puVar9;
        }
      }
      else {
        param_1[3] = local_90;
        param_1[4] = uStack_8c;
        param_1[5] = uStack_88;
        *param_1 = 1;
        param_1[1] = local_98;
        param_1[2] = local_94;
        FUN_0132bfa0(&local_38);
        FUN_0132bfa0(&local_60);
        FUN_0132bfa0(&local_78);
      }
      if (puVar8 != (uint *)0x8000000a) {
        return;
      }
    }
  }
  else {
    local_b0 = local_90;
    uStack_ac = uStack_8c;
    uStack_a8 = uStack_88;
    uStack_a4 = uStack_84;
    param_1[2] = local_90;
    param_1[3] = uStack_8c;
    param_1[4] = uStack_88;
    param_1[5] = uStack_84;
    *param_1 = 1;
    param_1[1] = local_94;
  }
  ppuVar3 = &local_f8;
LAB_0132e648:
  FUN_0132bfa0(ppuVar3);
  return;
}

