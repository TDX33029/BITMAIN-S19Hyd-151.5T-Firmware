// FUN_012f31d0 @ 012f31d0 size=900 calls_out=11 calls_in=1
// strings: 

void FUN_012f31d0(undefined4 *param_1)

{
  undefined4 **ppuVar1;
  undefined4 **ppuVar2;
  undefined4 **ppuVar3;
  undefined4 **ppuVar4;
  int iVar5;
  int *piVar6;
  undefined4 **ppuVar7;
  undefined4 **ppuVar8;
  undefined4 **ppuVar9;
  int iVar10;
  int local_280;
  undefined *local_27c;
  int local_278;
  int local_274;
  undefined *local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 **local_238;
  undefined4 **local_234;
  undefined4 **ppuStack_230;
  undefined4 **ppuStack_22c;
  undefined1 auStack_228 [160];
  undefined1 auStack_188 [160];
  undefined4 **local_e8;
  undefined4 **local_e4;
  undefined4 **local_e0;
  undefined4 **local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 **local_38;
  undefined4 **local_34;
  undefined4 **local_30;
  undefined4 *local_2c;
  undefined4 **local_28;
  
  piVar6 = *(int **)*param_1;
  *(int *)*param_1 = 0;
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac42c);
  }
  iVar10 = *piVar6;
  uStack_254 = 0;
  uStack_250 = 0xffffffff;
  local_24c = 0xffffffff;
  local_258 = 0;
  local_25c = 0xc1f1;
  local_260 = &DAT_003b7d5a;
  local_27c = &DAT_003b7d5a;
  local_278 = 0xc1f1;
  local_244 = 0xc1f1;
  local_280 = 1;
  local_23c = 100;
  local_240 = 0;
  local_248 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_64 = 0;
  local_68 = 0;
  local_6c = 4;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_7c = 4;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  local_8c = 4;
  local_90 = 0;
  local_94 = 0;
  local_98 = 0;
  local_9c = 4;
  local_a0 = 0;
  local_a4 = 0;
  local_a8 = 4;
  local_ac = 0;
  local_b0 = 0;
  local_b4 = 4;
  local_b8 = 0;
  local_bc = 0;
  local_c0 = 0;
  local_c4 = 4;
  local_c8 = 0;
  local_cc = 0;
  local_d0 = 0;
  local_d4 = 1;
  local_d8 = 0;
  local_dc = (undefined4 **)((uint)local_dc & 0xffffff00);
  local_e0 = (undefined4 **)0x0;
  local_e4 = (undefined4 **)&DAT_00000001;
  local_e8 = (undefined4 **)0x0;
  local_3c = 0;
  local_40 = 0;
  local_54 = 0;
  local_58 = 0;
  local_5c = 1;
  local_60 = 0;
  FUN_012f45b0(&local_38,&local_e8,&local_280);
  if (local_38 == (undefined4 **)&DAT_00000004) {
    iVar5 = FUN_012f5598(&local_e8);
    ppuVar9 = local_dc;
    ppuVar8 = local_e0;
    ppuVar7 = local_e4;
    ppuVar1 = local_e8;
    if (iVar5 != 0) {
      FUN_016dd1aa(auStack_188,&local_d8,0xa0);
      if (ppuVar1 != (undefined4 **)&DAT_80000000) {
        FUN_016dd1aa(auStack_228,auStack_188,0xa0);
        local_238 = ppuVar1;
        local_234 = ppuVar7;
        ppuStack_230 = ppuVar8;
        ppuStack_22c = ppuVar9;
        FUN_0132f050(&local_e8,&local_280);
        ppuVar4 = local_e0;
        ppuVar3 = local_e4;
        ppuVar2 = local_e8;
        if (local_e8 == (undefined4 **)&DAT_00000004) {
          FUN_016dd1aa(auStack_188,auStack_228,0xa0);
          if (local_280 == 0) {
            if (local_27c == (undefined *)0x0) {
              (**(code **)(local_274 + 0x30))(local_278,local_248);
            }
            else if (local_278 != 0) {
              thunk_FUN_016d3fb4();
            }
          }
          local_e8 = ppuVar1;
          local_e4 = ppuVar7;
          local_e0 = ppuVar8;
          local_dc = ppuVar9;
          FUN_016dd1aa(&local_d8,auStack_188,0xa0);
          iVar5 = thunk_FUN_016d4a50(0xb0);
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0xb0);
          }
          FUN_016dd1aa(iVar5,&local_e8,0xb0);
          *(int *)(iVar10 + 4) = iVar5;
          return;
        }
        FUN_012f3664(&local_238);
        ppuVar7 = ppuVar2;
        ppuVar8 = ppuVar3;
        ppuVar9 = ppuVar4;
      }
      goto LAB_012f34ac;
    }
    local_2c = &DAT_018d88b4;
    DataMemoryBarrier(0xb);
    if (DAT_018d88b4 != 0) {
      local_28 = &local_2c;
      local_38 = &local_28;
      FUN_015eedc4(&DAT_018d88b4,0,&local_38,&DAT_0188f03c,&DAT_0188e9dc);
    }
    iVar10 = *(int *)(DAT_018d88b8 + 0x68);
    ppuVar7 = (undefined4 **)0x3;
    if (*(char *)(iVar10 + 0xc) == '\x01') {
      ppuVar8 = *(undefined4 ***)(iVar10 + 4);
      ppuVar9 = *(undefined4 ***)(iVar10 + 8);
    }
    else {
      ppuVar8 = (undefined4 **)&DAT_00000001;
      ppuVar9 = (undefined4 **)0x0;
    }
  }
  else {
    ppuVar7 = local_38;
    ppuVar8 = local_34;
    ppuVar9 = local_30;
  }
  FUN_012f3664(&local_e8);
LAB_012f34ac:
  if (local_280 == 0) {
    if (local_27c == (undefined *)0x0) {
      (**(code **)(local_274 + 0x30))(local_278,local_248);
    }
    else if (local_278 != 0) {
      thunk_FUN_016d3fb4();
    }
  }
  local_e8 = ppuVar7;
  local_e4 = ppuVar8;
  local_e0 = ppuVar9;
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_e8,&DAT_0188f258,&DAT_0188f958);
}

