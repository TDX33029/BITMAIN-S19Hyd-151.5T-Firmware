// FUN_0158b5b8 @ 0158b5b8 size=3100 calls_out=28 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0158b5b8(uint *param_1,int param_2)

{
  undefined3 uVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  int *piVar11;
  uint extraout_r2;
  undefined4 uVar12;
  uint extraout_r3;
  undefined4 uVar13;
  int iVar14;
  undefined2 *puVar15;
  bool bVar16;
  uint local_120;
  uint local_118;
  uint local_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  int local_100;
  int local_fc;
  uint local_f8;
  int local_f0;
  int local_ec;
  uint local_e8;
  uint local_e0;
  uint local_dc;
  uint uStack_d8;
  uint local_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined4 local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint local_b0 [2];
  int local_a8;
  undefined1 local_a4;
  undefined4 local_a0 [2];
  undefined4 local_98;
  undefined4 local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  undefined4 local_74;
  uint local_70;
  undefined4 local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined4 local_50;
  uint local_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  
  FUN_0158c2a4(&local_90);
  if ((char)local_90 == '\x01') goto LAB_0158b5e4;
  if (local_90._1_1_ != '\x01') {
    uVar12 = *(undefined4 *)(param_2 + 0x1c);
    uVar13 = *(undefined4 *)(param_2 + 0x20);
    local_c8 = 5;
LAB_0158bf14:
    local_8c = FUN_01966fbc(&local_c8,uVar12,uVar13);
LAB_0158b5e4:
    param_1[1] = local_8c;
    *(undefined1 *)param_1 = 6;
    return;
  }
  uVar6 = local_90 >> 0x10 & 0xff;
  if (uVar6 < 0x66) {
    if (uVar6 == 0x22) {
      FUN_0157653c(param_2 + 0xc);
      *(undefined4 *)(param_2 + 8) = 0;
      FUN_01576784(&local_c8,param_2 + 0xc,param_2);
      if (local_c8 == 2) {
        param_1[1] = local_c4;
        goto LAB_0158b998;
      }
      if ((local_c8 & 1) == 0) {
        FUN_012739c4(&local_118,local_c4,local_c0);
      }
      else {
        FUN_01273944(&local_118);
      }
LAB_0158bc68:
      if ((char)local_118 != '\x06') {
LAB_0158bc74:
        *param_1 = local_118;
        param_1[1] = local_114;
        param_1[2] = uStack_110;
        param_1[3] = uStack_10c;
        param_1[4] = uStack_108;
        param_1[5] = uStack_104;
        return;
      }
      uVar6 = local_114;
      goto LAB_0158c038;
    }
    if (uVar6 != 0x2d) {
      if (uVar6 != 0x5b) goto LAB_0158b8cc;
      cVar3 = *(char *)(param_2 + 0x2c) + -1;
      *(char *)(param_2 + 0x2c) = cVar3;
      if (cVar3 == '\0') {
LAB_0158c010:
        uVar12 = *(undefined4 *)(param_2 + 0x1c);
        uVar13 = *(undefined4 *)(param_2 + 0x20);
        local_c8 = 0x18;
        goto LAB_0158bf14;
      }
      iVar7 = param_2 + 0xc;
      FUN_0157653c();
      puVar15 = (undefined2 *)((uint)&local_90 | 1);
      iVar14 = 0;
      bVar16 = true;
      local_60 = 0;
      local_120 = 8;
      local_64 = 8;
      local_68 = 0;
      while( true ) {
        uVar6 = local_60;
        FUN_0158c2a4(&local_34,param_2);
        if ((char)local_34 == '\x01') break;
        if (local_34._1_1_ != '\x01') {
          local_c8 = 2;
          uVar6 = FUN_01966fbc(&local_c8,*(undefined4 *)(param_2 + 0x1c),
                               *(undefined4 *)(param_2 + 0x20));
          goto LAB_0158ba5c;
        }
        if (local_34._2_1_ == ']') {
          uVar4 = 4;
          local_88 = local_64;
          local_84 = local_60;
          local_8c = local_68;
          goto LAB_0158ba68;
        }
        if (!bVar16) {
          if (local_34._2_1_ != ',') {
            local_c8 = 7;
            uVar6 = FUN_01966fbc(&local_c8,*(undefined4 *)(param_2 + 0x1c),
                                 *(undefined4 *)(param_2 + 0x20));
            goto LAB_0158ba5c;
          }
          FUN_0157653c(iVar7);
          FUN_0158c2a4(&local_34,param_2);
          if ((char)local_34 != '\0') break;
          if (local_34._1_1_ != '\x01') {
            local_c8 = 5;
            uVar6 = FUN_01966fbc(&local_c8,*(undefined4 *)(param_2 + 0x1c),
                                 *(undefined4 *)(param_2 + 0x20));
            goto LAB_0158ba5c;
          }
          if (local_34._2_1_ == ']') {
            local_c8 = 0x15;
            uVar6 = FUN_01966fbc(&local_c8,*(undefined4 *)(param_2 + 0x1c),
                                 *(undefined4 *)(param_2 + 0x20));
            goto LAB_0158ba5c;
          }
        }
        FUN_0158b5b8(&local_c8,param_2);
        if ((char)local_c8 == '\x06') {
          uVar6 = local_c4;
          goto LAB_0158ba5c;
        }
        uVar1 = *(undefined3 *)((uint)&local_c8 | 1);
        local_74 = CONCAT13(local_74._3_1_,uVar1);
        iVar2 = local_74;
        local_50 = local_c0;
        local_74._2_1_ = (undefined1)((uint3)uVar1 >> 0x10);
        local_74._0_2_ = (undefined2)uVar1;
        *(undefined1 *)(puVar15 + 1) = local_74._2_1_;
        local_90 = CONCAT31(local_90._1_3_,(char)local_c8);
        *puVar15 = (undefined2)local_74;
        local_8c = local_c4;
        local_88 = local_c0;
        local_84 = local_bc;
        uStack_80 = uStack_b8;
        uStack_7c = uStack_b4;
        local_74 = iVar2;
        if (uVar6 == local_68) {
          FUN_01969b6c(&local_68);
          local_120 = local_64;
        }
        local_60 = uVar6 + 1;
        puVar8 = (uint *)(local_120 + iVar14);
        iVar14 = iVar14 + 0x18;
        *puVar8 = local_90;
        puVar8[1] = local_8c;
        puVar8[2] = local_88;
        puVar8[3] = local_84;
        puVar8[4] = uStack_80;
        puVar8[5] = uStack_7c;
        bVar16 = false;
      }
      uVar6 = local_30;
LAB_0158ba5c:
      FUN_00949b70(&local_68);
      uVar4 = 6;
      local_88 = extraout_r2;
      local_84 = extraout_r3;
      local_8c = uVar6;
LAB_0158ba68:
      *(char *)(param_2 + 0x2c) = *(char *)(param_2 + 0x2c) + '\x01';
      local_90 = CONCAT31(local_90._1_3_,uVar4);
      FUN_0158c2a4(&local_34,param_2);
      if ((char)local_34 != '\x01') {
        if (local_34._1_1_ == '\x01') {
          if (local_34._2_1_ == ']') {
            FUN_0157653c(iVar7);
            local_114 = local_8c;
            local_c0 = local_88;
            local_bc = local_84;
            uStack_b8 = uStack_80;
            uStack_b4 = uStack_7c;
            local_c8._0_1_ = (char)local_90;
            local_c8 = local_90;
            local_c4 = local_114;
            if ((char)local_c8 == '\x06') {
              local_118 = CONCAT31(local_118._1_3_,6);
            }
            else {
              local_118 = local_90;
              uStack_110 = local_c0;
              uStack_10c = local_bc;
              uStack_108 = uStack_b8;
              uStack_104 = uStack_b4;
            }
            goto LAB_0158bc68;
          }
          if (local_34._2_1_ == ',') {
            FUN_0157653c(iVar7);
            FUN_0158c2a4(&local_68,param_2);
            uVar6 = local_68 & 0xff;
            if (uVar6 != 1) {
              uVar10 = local_68 >> 8 & 0xff;
              bVar16 = uVar10 == 1;
              if (bVar16) {
                uVar10 = local_68 >> 0x10 & 0xff;
              }
              if (bVar16 && uVar10 == 0x5d) {
                local_50 = 0x15;
                local_30 = FUN_01966fbc(&local_50,*(undefined4 *)(param_2 + 0x1c),
                                        *(undefined4 *)(param_2 + 0x20));
                goto LAB_0158baa4;
              }
            }
            local_50 = 0x16;
            local_30 = FUN_01966fbc(&local_50,*(undefined4 *)(param_2 + 0x1c),
                                    *(undefined4 *)(param_2 + 0x20));
            if (uVar6 != 0) {
              FUN_015834e8(&local_64);
            }
          }
          else {
            local_50 = 0x16;
            local_30 = FUN_01966fbc(&local_50,*(undefined4 *)(param_2 + 0x1c),
                                    *(undefined4 *)(param_2 + 0x20));
          }
        }
        else {
          local_50 = 2;
          local_30 = FUN_01966fbc(&local_50,*(undefined4 *)(param_2 + 0x1c),
                                  *(undefined4 *)(param_2 + 0x20));
        }
      }
LAB_0158baa4:
      local_c8 = local_90;
      uVar6 = local_c8;
      local_c4 = local_8c;
      local_c0 = local_88;
      local_bc = local_84;
      uStack_b8 = uStack_80;
      uStack_b4 = uStack_7c;
      local_c8._0_1_ = (char)local_90;
      local_c8 = uVar6;
      local_b0[0] = local_30;
      if ((char)local_c8 == '\x06') {
        local_114 = local_8c;
        local_118 = CONCAT31(local_118._1_3_,6);
        FUN_015834e8(local_b0);
      }
      else {
        local_118 = CONCAT31(local_118._1_3_,6);
        local_114 = local_30;
        FUN_00db4764(&local_c8);
      }
      goto LAB_0158bc68;
    }
    FUN_0157653c(param_2 + 0xc);
    FUN_0158c43c(&local_100,param_2,0);
    if (local_100 != 3 || local_fc != 0) {
      piVar11 = &local_100;
LAB_0158ba34:
      FUN_01964e98(&local_118,piVar11);
      goto LAB_0158bc68;
    }
    local_e8 = local_f8;
  }
  else {
    if (0x73 < uVar6) {
      if (uVar6 == 0x74) {
        FUN_0157653c(param_2 + 0xc);
        local_8c = FUN_0158c3a4(param_2,"rue",3);
        if (local_8c != 0) goto LAB_0158b5e4;
        uVar5 = 0x101;
        goto LAB_0158b958;
      }
      if (uVar6 != 0x7b) goto LAB_0158b8cc;
      cVar3 = *(char *)(param_2 + 0x2c) + -1;
      *(char *)(param_2 + 0x2c) = cVar3;
      if (cVar3 == '\0') goto LAB_0158c010;
      FUN_0157653c(param_2 + 0xc);
      local_a4 = 1;
      local_a8 = param_2;
      FUN_0158f7f4(&local_c8,&local_a8);
      iVar7 = local_a8;
      if ((char)local_c8 == '\x01') {
        uVar6 = local_c4;
        goto LAB_0158b880;
      }
      if (local_c8._1_1_ == '\x01') {
        iVar14 = local_a8 + 0xc;
        FUN_0157653c(iVar14);
        *(undefined4 *)(iVar7 + 8) = 0;
        FUN_01576784(&local_c8,iVar14,iVar7);
        uVar6 = local_c4;
        if (local_c8 == 2) {
LAB_0158b880:
          uVar4 = 6;
          local_dc = uVar6;
          goto LAB_0158bb78;
        }
        FUN_01969b9c(&local_90,local_c4,local_c0);
        uVar6 = local_8c;
        uVar10 = local_90;
        if (local_90 == 0x80000001) goto LAB_0158b880;
        if (local_90 == 0x80000000) {
          FUN_0158f950(&local_c8,iVar7);
          uVar10 = local_c4;
          uVar6 = local_c8;
          if (local_c8 == 0) {
            local_dc = local_c4;
            uVar4 = 6;
            goto LAB_0158bb78;
          }
          FUN_019664a4(&local_c8,local_c8,local_c4);
          if ((char)local_c8 == '\x06') {
            local_dc = FUN_019677a8(local_c4);
            local_e0 = CONCAT31(local_e0._1_3_,6);
          }
          else {
            local_e0 = local_c8;
            local_dc = local_c4;
            uStack_d8 = local_c0;
            local_d4 = local_bc;
            uStack_d0 = uStack_b8;
            uStack_cc = uStack_b4;
          }
          if (uVar10 != 0) {
            thunk_FUN_01be4678(uVar6);
          }
        }
        else {
          if (local_90 == 0x80000002) goto LAB_0158b880;
          local_98 = 0;
          local_a0[0] = 0;
          FUN_0158fa64(&local_e0,&local_a8);
          if ((char)local_e0 == '\x06') {
            FUN_019bb7e0(uVar10,uVar6);
          }
          else {
            FUN_0196b484(&local_c8,local_a0,&local_90,&local_e0);
            if ((char)local_c8 != '\x06') {
              FUN_00e0febc(&local_c8);
            }
            puVar8 = (uint *)((uint)&local_90 | 4);
            puVar9 = (uint *)((uint)&local_c8 | 4);
            while( true ) {
              FUN_0158f7f4(&local_50,&local_a8);
              iVar7 = local_a8;
              if ((char)local_50 == '\x01') break;
              if (local_50._1_1_ != '\x01') {
LAB_0158bf2c:
                FUN_01bed4e2((uint)&local_c8 | 3,local_a0,0xc);
                local_e0 = CONCAT31(local_e0._1_3_,5);
                FUN_01bed4e2((uint)&local_e0 | 1,&local_c8,0xf);
                goto LAB_0158bb7c;
              }
              iVar14 = local_a8 + 0xc;
              FUN_0157653c(iVar14);
              *(undefined4 *)(iVar7 + 8) = 0;
              FUN_01576784(&local_50,iVar14,iVar7);
              uVar6 = local_4c;
              if (local_50 == 2) goto LAB_0158bff8;
              FUN_012c1060(&local_34,local_4c,local_48);
              uVar12 = local_2c;
              uVar10 = local_30;
              iVar7 = local_34;
              if (local_34 == -0x80000000) {
                uVar6 = local_30;
                goto LAB_0158bff8;
              }
              uVar6 = local_30;
              if (local_34 == -0x7fffffff) goto LAB_0158bff8;
              FUN_0158fa64(&local_50,&local_a8);
              uVar6 = local_4c;
              if ((char)local_50 == '\x06') {
                FUN_019bb7e0(iVar7,uVar10);
LAB_0158bff4:
                goto LAB_0158bff8;
              }
              *puVar9 = local_50;
              puVar9[1] = local_4c;
              puVar9[2] = local_48;
              puVar9[3] = uStack_44;
              puVar9[4] = uStack_40;
              puVar9[5] = uStack_3c;
              local_90 = local_c8;
              local_8c = local_c4;
              local_88 = local_c0;
              local_84 = local_bc;
              uStack_80 = uStack_b8;
              uStack_7c = uStack_b4;
              uStack_78 = local_b0[0];
              if (iVar7 == -0x80000000) goto LAB_0158bf2c;
              uVar6 = uVar10;
              if (iVar7 == -0x7fffffff) goto LAB_0158bff4;
              local_6c = uVar12;
              local_70 = uVar10;
              local_74 = iVar7;
              local_68 = *puVar8;
              local_64 = puVar8[1];
              local_60 = puVar8[2];
              uStack_5c = puVar8[3];
              uStack_58 = puVar8[4];
              uStack_54 = puVar8[5];
              FUN_0196b484(&local_c8,local_a0,&local_74);
              if ((char)local_c8 != '\x06') {
                FUN_00e0febc(&local_c8);
              }
            }
            uVar6 = local_4c;
LAB_0158bff8:
            local_e0 = CONCAT31(local_e0._1_3_,6);
            local_dc = uVar6;
          }
          FUN_0196afa8(local_a0);
        }
      }
      else {
        local_d4 = 0;
        local_dc = 0;
        uVar4 = 5;
LAB_0158bb78:
        local_e0 = CONCAT31(local_e0._1_3_,uVar4);
      }
LAB_0158bb7c:
      *(char *)(param_2 + 0x2c) = *(char *)(param_2 + 0x2c) + '\x01';
      FUN_0158c2a4(&local_50);
      if ((char)local_50 == '\x01') {
LAB_0158bba8:
        local_c8 = local_e0;
        uVar6 = local_c8;
        local_c4 = local_dc;
        local_c0 = uStack_d8;
        local_bc = local_d4;
        uStack_b8 = uStack_d0;
        uStack_b4 = uStack_cc;
        local_c8._0_1_ = (char)local_e0;
        local_c8 = uVar6;
        local_b0[0] = local_4c;
        if ((char)local_c8 == '\x06') {
          local_114 = local_dc;
          local_118 = CONCAT31(local_118._1_3_,6);
          FUN_015834e8(local_b0);
        }
        else {
          local_118 = CONCAT31(local_118._1_3_,6);
          local_114 = local_4c;
          FUN_00db4764(&local_c8);
        }
      }
      else {
        if (local_50._1_1_ != '\x01') {
          local_90 = 3;
          local_4c = FUN_01966fbc(&local_90,*(undefined4 *)(param_2 + 0x1c),
                                  *(undefined4 *)(param_2 + 0x20));
          goto LAB_0158bba8;
        }
        if (local_50._2_1_ != '}') {
          if (local_50._2_1_ == ',') {
            local_90 = 0x15;
            local_4c = FUN_01966fbc(&local_90,*(undefined4 *)(param_2 + 0x1c),
                                    *(undefined4 *)(param_2 + 0x20));
          }
          else {
            local_90 = 0x16;
            local_4c = FUN_01966fbc(&local_90,*(undefined4 *)(param_2 + 0x1c),
                                    *(undefined4 *)(param_2 + 0x20));
          }
          goto LAB_0158bba8;
        }
        FUN_0157653c(param_2 + 0xc);
        local_c8 = local_e0;
        uVar6 = local_c8;
        local_c4 = local_dc;
        local_c0 = uStack_d8;
        local_bc = local_d4;
        uStack_b8 = uStack_d0;
        uStack_b4 = uStack_cc;
        local_c8._0_1_ = (char)local_e0;
        if ((char)local_c8 == '\x06') {
          local_118 = CONCAT31(local_118._1_3_,6);
        }
        else {
          local_118 = local_e0;
          uStack_110 = uStack_d8;
          uStack_10c = local_d4;
          uStack_108 = uStack_d0;
          uStack_104 = uStack_cc;
        }
        local_114 = local_dc;
        local_c8 = uVar6;
      }
      goto LAB_0158bc68;
    }
    if (uVar6 == 0x66) {
      FUN_0157653c(param_2 + 0xc);
      local_8c = FUN_0158c3a4(param_2,&DAT_0056efac,4);
      if (local_8c != 0) goto LAB_0158b5e4;
      uVar5 = 1;
LAB_0158b958:
      local_118 = CONCAT22(local_118._2_2_,uVar5);
      goto LAB_0158bc74;
    }
    if (uVar6 == 0x6e) {
      FUN_0157653c(param_2 + 0xc);
      local_8c = FUN_0158c3a4(param_2,"ull",3);
      if (local_8c != 0) goto LAB_0158b5e4;
      local_118 = local_118 & 0xffffff00;
      goto LAB_0158bc74;
    }
LAB_0158b8cc:
    if (uVar6 - 0x30 < 10) {
      FUN_0158c43c(&local_f0,param_2,1);
      if (local_f0 != 3 || local_ec != 0) {
        piVar11 = &local_f0;
        goto LAB_0158ba34;
      }
      goto LAB_0158b990;
    }
    local_c8 = 10;
    uVar6 = FUN_01966fbc(&local_c8,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
LAB_0158c038:
    local_e8 = FUN_012c6694(uVar6,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
  }
LAB_0158b990:
  param_1[1] = local_e8;
LAB_0158b998:
  *(undefined1 *)param_1 = 6;
  return;
}

