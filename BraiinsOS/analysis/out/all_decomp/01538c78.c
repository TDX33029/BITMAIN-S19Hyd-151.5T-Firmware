// FUN_01538c78 @ 01538c78 size=1784 calls_out=6 calls_in=0
// strings: operation not supported | operation not supported

void FUN_01538c78(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_108;
  int local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  undefined1 local_db;
  undefined1 local_da;
  undefined1 local_d9;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined1 local_d4;
  undefined1 local_d3;
  undefined1 local_d2;
  undefined1 local_d1;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined1 local_ca;
  undefined1 local_c9;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined1 local_c2;
  undefined1 local_c1;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined1 local_be;
  undefined1 local_bd;
  undefined1 local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  uint uStack_60;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  FUN_01555ec8(&local_108);
  iVar1 = *param_2;
  (**(code **)(*(int *)(iVar1 + 0x14) + 0x14))(&local_fc,*(undefined4 *)(iVar1 + 0x10));
  if (local_100 < local_fc) {
    puVar6 = &DAT_018a8a68;
  }
  else if (local_100 - local_fc < local_fc) {
    puVar6 = &DAT_018a8a78;
  }
  else {
    uVar2 = (local_100 - local_fc) - local_fc;
    if (uVar2 < local_f8) {
      puVar6 = &DAT_018a8a88;
    }
    else {
      uVar2 = uVar2 - local_f8;
      if (local_f8 <= uVar2) {
        uVar7 = *(undefined4 *)(iVar1 + 0x10);
        iVar8 = *(int *)(iVar1 + 0x14);
        local_9c = 0;
        local_a0 = 0;
        local_a4 = 0;
        local_a8 = 0;
        local_ac = 0;
        local_b0 = 0;
        local_b4 = 0;
        local_b8 = 0;
        local_98 = 0x20;
        if (0x20 < local_fc) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,local_fc,0x20,&DAT_018a7ef4);
        }
        iVar3 = local_104 + local_fc;
        iVar4 = iVar3 + local_fc;
        iVar5 = iVar4 + local_f8;
        iVar9 = uVar2 - local_f8;
        iVar10 = iVar5 + local_f8;
        FUN_016dd1aa(&local_b8,local_104,local_fc);
        local_98 = local_fc;
        local_80 = local_b8;
        iStack_7c = local_b4;
        iStack_78 = local_b0;
        iStack_74 = local_ac;
        local_70 = local_a8;
        iStack_6c = local_a4;
        iStack_68 = local_a0;
        iStack_64 = local_9c;
        uStack_60 = local_fc;
        (**(code **)(iVar8 + 0x18))(&local_58,uVar7,&local_80,iVar4,local_f8,iVar10,iVar9);
        iVar8 = local_58;
        if (local_58 == 3) {
          local_50 = 0;
          local_54 = 1;
          local_58 = 0;
          FUN_0154e5f8(&local_58,0,0x17,1,1);
          iVar1 = local_50;
          FUN_016dd1aa(local_54 + local_50,"operation not supported",0x17);
          param_1[2] = -0x7fffffe0;
          param_1[3] = local_58;
          param_1[4] = local_54;
          param_1[5] = iVar1 + 0x17;
          *param_1 = 3;
          iVar1 = iVar1 + 0x17;
          iVar8 = local_58;
          iVar3 = local_54;
          iVar4 = local_ac;
        }
        else {
          local_bc = (undefined1)local_54;
          local_cc = (undefined1)local_44;
          local_ce = local_44._2_1_;
          local_bf = local_54._3_1_;
          local_d6 = local_3c._2_1_;
          local_c5 = local_4c._1_1_;
          local_c7 = local_4c._3_1_;
          local_d8 = (undefined1)local_38;
          local_be = local_54._2_1_;
          local_cd = local_44._1_1_;
          local_d1 = local_40._1_1_;
          local_d9 = local_38._1_1_;
          local_c6 = local_4c._2_1_;
          local_cf = local_44._3_1_;
          local_da = local_38._2_1_;
          local_c3 = local_50._3_1_;
          local_d0 = (undefined1)local_40;
          local_d7 = local_3c._3_1_;
          local_db = local_38._3_1_;
          local_cb = local_48._3_1_;
          local_c1 = local_50._1_1_;
          local_d5 = local_3c._1_1_;
          local_f0 = local_34;
          iStack_ec = iStack_30;
          iStack_e8 = iStack_2c;
          iStack_e4 = iStack_28;
          local_ca = local_48._2_1_;
          local_d4 = (undefined1)local_3c;
          local_bd = local_54._1_1_;
          local_c0 = (undefined1)local_50;
          local_c2 = local_50._2_1_;
          uVar7 = *(undefined4 *)(iVar1 + 0x10);
          iVar1 = *(int *)(iVar1 + 0x14);
          local_c4 = (undefined1)local_4c;
          local_c8 = (undefined1)local_48;
          local_c9 = local_48._1_1_;
          local_d2 = local_40._2_1_;
          local_d3 = local_40._3_1_;
          local_3c = 0;
          local_40 = 0;
          local_44 = 0;
          local_48 = 0;
          local_4c = 0;
          local_50 = 0;
          local_54 = 0;
          local_58 = 0;
          FUN_016dd1aa(&local_58,iVar3,local_fc);
          local_38 = local_fc;
          local_80 = local_58;
          iStack_7c = local_54;
          iStack_78 = local_50;
          iStack_74 = local_4c;
          local_70 = local_48;
          iStack_6c = local_44;
          iStack_68 = local_40;
          iStack_64 = local_3c;
          uStack_60 = local_fc;
          (**(code **)(iVar1 + 0x18))(&local_b8,uVar7,&local_80,iVar5,local_f8,iVar10,iVar9);
          if (local_b8 == 3) {
            local_50 = 0;
            local_54 = 1;
            local_58 = 0;
            FUN_0154e5f8(&local_58,0,0x17,1,1);
            iVar1 = local_50;
            FUN_016dd1aa(local_54 + local_50,"operation not supported",0x17);
            param_1[2] = -0x7fffffe0;
            param_1[3] = local_58;
            param_1[4] = local_54;
            param_1[5] = iVar1 + 0x17;
            *param_1 = 3;
            local_bc = 0;
            local_bd = 0;
            local_be = 0;
            local_bf = 0;
            local_c0 = 0;
            local_c1 = 0;
            local_c2 = 0;
            local_c3 = 0;
            local_c4 = 0;
            local_c5 = 0;
            local_c6 = 0;
            local_c7 = 0;
            local_c8 = 0;
            local_c9 = 0;
            local_ca = 0;
            local_cb = 0;
            local_cc = 0;
            local_cd = 0;
            local_ce = 0;
            local_cf = 0;
            local_d0 = 0;
            local_d1 = 0;
            local_d2 = 0;
            local_d3 = 0;
            local_d4 = 0;
            local_d5 = 0;
            local_d6 = 0;
            local_d7 = 0;
            local_d8 = 0;
            local_d9 = 0;
            local_da = 0;
            local_db = 0;
            iVar1 = iVar1 + 0x17;
            iVar8 = local_58;
            iVar3 = local_54;
            iVar4 = local_ac;
          }
          else {
            *(undefined1 *)((int)param_1 + 0x22) = local_da;
            *(undefined1 *)((int)param_1 + 0x17) = local_cf;
            *(undefined1 *)((int)param_1 + 0x16) = local_ce;
            *(undefined1 *)((int)param_1 + 0x15) = local_cd;
            *(undefined1 *)(param_1 + 5) = local_cc;
            *(undefined1 *)((int)param_1 + 0x13) = local_cb;
            *(undefined1 *)((int)param_1 + 0x12) = local_ca;
            *(undefined1 *)((int)param_1 + 0x11) = local_c9;
            *(undefined1 *)(param_1 + 4) = local_c8;
            *(undefined1 *)((int)param_1 + 0xf) = local_c7;
            *(undefined1 *)((int)param_1 + 0xe) = local_c6;
            *(undefined1 *)((int)param_1 + 0xd) = local_c5;
            *(undefined1 *)(param_1 + 3) = local_c4;
            *(undefined1 *)((int)param_1 + 0xb) = local_c3;
            *(undefined1 *)((int)param_1 + 0x1f) = local_d7;
            *(undefined1 *)((int)param_1 + 10) = local_c2;
            *(undefined1 *)((int)param_1 + 9) = local_c1;
            *(undefined1 *)((int)param_1 + 0x21) = local_d9;
            *(undefined1 *)(param_1 + 8) = local_d8;
            *(undefined1 *)(param_1 + 2) = local_c0;
            *(undefined1 *)((int)param_1 + 0x1e) = local_d6;
            *(undefined1 *)(param_1 + 7) = local_d4;
            *(undefined1 *)((int)param_1 + 7) = local_bf;
            *(undefined1 *)((int)param_1 + 6) = local_be;
            *(undefined1 *)((int)param_1 + 5) = local_bd;
            *(undefined1 *)(param_1 + 1) = local_bc;
            param_1[9] = local_f0;
            param_1[10] = iStack_ec;
            param_1[0xb] = iStack_e8;
            param_1[0xc] = iStack_e4;
            *(undefined1 *)((int)param_1 + 0x23) = local_db;
            *(undefined1 *)((int)param_1 + 0x1d) = local_d5;
            *(undefined1 *)((int)param_1 + 0x1b) = local_d3;
            *(undefined1 *)((int)param_1 + 0x1a) = local_d2;
            *(undefined1 *)((int)param_1 + 0x19) = local_d1;
            *(undefined1 *)(param_1 + 6) = local_d0;
            *param_1 = iVar8;
            param_1[0xd] = local_b8;
            param_1[0xe] = local_b4;
            param_1[0xf] = local_b0;
            param_1[0x10] = local_ac;
            param_1[0x11] = local_a8;
            param_1[0x12] = local_a4;
            param_1[0x13] = local_a0;
            param_1[0x14] = local_9c;
            param_1[0x15] = local_98;
            param_1[0x16] = iStack_94;
            param_1[0x17] = iStack_90;
            param_1[0x18] = iStack_8c;
            param_1[0x19] = iStack_88;
            iVar1 = iStack_e8;
            iVar8 = local_f0;
            iVar3 = iStack_ec;
            iVar4 = iStack_e4;
            local_58 = local_b8;
            local_54 = local_b4;
            local_50 = local_b0;
            local_4c = local_ac;
            local_48 = local_a8;
            local_44 = local_a4;
            local_40 = local_a0;
            local_3c = local_9c;
            local_38 = local_98;
          }
        }
        local_ac = iVar4;
        local_b4 = iVar3;
        local_b8 = iVar8;
        local_b0 = iVar1;
        if (local_108 != 0) {
          thunk_FUN_016d3fb4(local_104);
        }
        return;
      }
      puVar6 = &DAT_018a8a98;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_00418e0f,0x13,puVar6);
}

