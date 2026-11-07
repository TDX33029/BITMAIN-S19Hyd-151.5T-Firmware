// FUN_00f977fc @ 00f977fc size=656 calls_out=7 calls_in=1
// strings: 

int FUN_00f977fc(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  bool bVar7;
  undefined3 uStack_108;
  undefined1 local_105;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined3 uStack_fc;
  undefined3 uStack_f8;
  uint local_e8;
  int local_e4;
  int iStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_b4;
  undefined1 local_ac;
  undefined1 local_a8;
  undefined1 local_a4;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_9a;
  undefined1 local_96;
  undefined2 local_92;
  undefined1 local_90;
  undefined1 local_8c;
  undefined1 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_7e;
  undefined1 local_7a;
  undefined2 local_76;
  undefined1 local_74;
  undefined1 local_70;
  undefined1 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_62;
  undefined1 local_5e;
  undefined2 local_5a;
  undefined1 local_58;
  undefined1 local_54;
  undefined1 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 local_46;
  undefined1 local_42;
  undefined2 local_3e;
  undefined1 local_3c;
  undefined1 local_2e;
  undefined2 local_2d;
  undefined1 local_2b;
  
  local_d4 = 1;
  local_2b = 8;
  local_c8 = 4;
  local_3c = 4;
  local_e8 = 2;
  local_c4 = 0;
  local_cc = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_b4 = 0;
  local_3e = 0;
  local_42 = 3;
  local_46 = 3;
  local_4a = 3;
  local_4c = 0;
  local_50 = 3;
  local_54 = 3;
  local_58 = 3;
  local_5a = 0;
  local_5e = 3;
  local_62 = 3;
  local_66 = 3;
  local_68 = 0;
  local_6c = 3;
  local_70 = 3;
  local_74 = 3;
  local_76 = 0;
  local_7a = 3;
  local_7e = 3;
  local_82 = 3;
  local_84 = 0;
  local_88 = 3;
  local_8c = 3;
  local_90 = 3;
  local_92 = 0;
  local_96 = 3;
  local_9a = 3;
  local_9e = 3;
  local_a0 = 0;
  local_2e = 0;
  local_a4 = 3;
  local_a8 = 3;
  local_ac = 3;
  local_2d = 0x202;
  local_c0 = 0x80000001;
  iVar1 = thunk_FUN_016d4a50(0xc0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc0);
  }
  FUN_016dd1aa(iVar1,&local_e8,0xc0);
  FUN_00f9545c(iVar1,param_1);
  iVar6 = param_3[2];
  if (iVar6 == 0) {
    bVar7 = true;
    uVar2 = 0;
  }
  else {
    bVar7 = iVar6 != 1;
    if (bVar7) {
      uVar2 = 3;
      piVar3 = param_3;
    }
    else {
      iVar6 = 0;
      uVar2 = 2;
      param_3[2] = 0;
      piVar3 = (int *)param_3[1];
    }
    bVar7 = !bVar7;
    uStack_fc = (undefined3)((uint)piVar3[2] >> 8);
    uStack_100._0_3_ = (undefined3)((uint)piVar3[1] >> 8);
    uStack_100 = CONCAT13((char)piVar3[2],(undefined3)uStack_100);
    local_105 = (undefined1)*piVar3;
    uStack_104._0_3_ = (undefined3)((uint)*piVar3 >> 8);
    uStack_104 = CONCAT13((char)piVar3[1],(undefined3)uStack_104);
  }
  local_d8 = param_2[2];
  iStack_e0 = *param_2;
  iStack_dc = param_2[1];
  local_d4 = CONCAT31(local_d4._1_3_,2);
  local_c4 = CONCAT31(uStack_fc,uStack_100._3_1_);
  local_e8 = local_e8 & 0xffffff00;
  local_e4 = CONCAT31(uStack_f8,2);
  local_d0 = CONCAT31((int3)_uStack_108,uVar2);
  local_cc._1_3_ = (undefined3)uStack_104;
  local_cc = CONCAT31(local_cc._1_3_,(char)((uint)_uStack_108 >> 0x18));
  local_c8._0_1_ = (undefined1)((uint)uStack_104 >> 0x18);
  local_c8 = CONCAT31((int3)uStack_100,(undefined1)local_c8);
  FUN_00f96218(iVar1,&local_e8);
  if (*param_4 != -0x80000000) {
    local_e4 = *param_4;
    iStack_e0 = param_4[1];
    iStack_dc = param_4[2];
    local_e8 = CONCAT31(local_e8._1_3_,4);
    FUN_00f959b8(iVar1,0xf,&local_e8);
  }
  if (bVar7) {
    iVar4 = param_3[1];
    puVar5 = (undefined4 *)(iVar4 + 4);
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (puVar5[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar5);
      }
      puVar5 = puVar5 + 3;
    }
    if (*param_3 != 0) {
      thunk_FUN_016d3fb4(iVar4);
    }
  }
  return iVar1;
}

