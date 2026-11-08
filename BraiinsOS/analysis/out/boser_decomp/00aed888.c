// FUN_00aed888 @ 00aed888 size=1912 calls_out=8 calls_in=2
// strings: 0.0.0.0:80 | 0.0.0.0:4028 | 0.0.0.0:50051 | 127.0.0.1:4029 | http://127.0.0.1:8000 | /www/boser

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00aed888(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  undefined *puVar45;
  undefined *puVar46;
  int local_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 local_80;
  int local_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int local_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  
  FUN_01304ef0(&local_80,"0.0.0.0:80",10);
  iVar29 = iStack_64;
  iVar25 = local_68;
  iVar21 = local_6c;
  iVar17 = local_70;
  iVar13 = iStack_74;
  iVar9 = iStack_78;
  iVar5 = local_7c;
  iVar1 = local_80;
  if ((short)local_80 == 2) {
    puVar45 = &UNK_01c105c0;
  }
  else {
    FUN_01304ef0(&local_80,"0.0.0.0:4028",0xc);
    iVar30 = iStack_64;
    iVar26 = local_68;
    iVar22 = local_6c;
    iVar18 = local_70;
    iVar14 = iStack_74;
    iVar10 = iStack_78;
    iVar6 = local_7c;
    iVar2 = local_80;
    if ((short)local_80 != 2) {
      FUN_01304ef0(&local_80,"0.0.0.0:50051",0xd);
      iVar31 = iStack_64;
      iVar27 = local_68;
      iVar23 = local_6c;
      iVar19 = local_70;
      iVar15 = iStack_74;
      iVar11 = iStack_78;
      iVar7 = local_7c;
      iVar3 = local_80;
      if ((short)local_80 == 2) {
        local_c0 = CONCAT31(local_c0._1_3_,local_80._2_1_);
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: bad default grpc address",0x1d,&local_c0,&DAT_01c103f8,&DAT_01c105e0);
      }
      FUN_01304ef0(&local_80,"127.0.0.1:4029",0xe);
      iVar32 = iStack_64;
      iVar28 = local_68;
      iVar24 = local_6c;
      iVar20 = local_70;
      iVar16 = iStack_74;
      iVar12 = iStack_78;
      iVar8 = local_7c;
      iVar4 = local_80;
      if ((short)local_80 == 2) {
        local_c0 = CONCAT31(local_c0._1_3_,local_80._2_1_);
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_0056b668,0x20,&local_c0,&DAT_01c103f8,&DAT_01c105f0);
      }
      local_b8 = 0;
      local_c0 = 0;
      local_b0 = 0;
      FUN_01ac814c(&local_80,&local_c0,"http://127.0.0.1:8000",0x15);
      if (local_80 != 2) {
        local_90 = local_80;
        iStack_8c = local_7c;
        iStack_88 = iStack_78;
        iStack_84 = iStack_74;
        local_c0 = local_68;
        iStack_bc = iStack_64;
        local_b8 = iStack_60;
        iStack_b4 = iStack_5c;
        local_b0 = iStack_58;
        iStack_ac = iStack_54;
        local_a8 = local_50;
        iStack_a4 = iStack_4c;
        iStack_a0 = iStack_48;
        iStack_9c = iStack_44;
        iStack_98 = iStack_40;
        iStack_94 = iStack_3c;
        iVar33 = thunk_FUN_01be5118();
        if (iVar33 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,10);
        }
        FUN_01bed4e2(iVar33,"/www/boser",10);
        iVar34 = thunk_FUN_01be5118(10);
        if (iVar34 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,10);
        }
        FUN_01bed4e2(iVar34,"/www/boser",10);
        FUN_019a66e4(&local_38,iVar34,10,"static",6);
        iVar35 = thunk_FUN_01be5118(10);
        if (iVar35 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,10);
        }
        FUN_01bed4e2(iVar35,"/www/boser",10);
        FUN_019a66e4(&local_80,iVar35,10,"var",3);
        iVar36 = thunk_FUN_01be5118(0x15);
        if (iVar36 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x15);
        }
        FUN_01bed4e2(iVar36,"/etc/web_storage.json",0x15);
        iVar37 = thunk_FUN_01be5118(0x12);
        if (iVar37 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x12);
        }
        FUN_01bed4e2(iVar37,"/etc/bosminer.toml",0x12);
        iVar38 = thunk_FUN_01be5118(0x23);
        if (iVar38 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x23);
        }
        FUN_01bed4e2(iVar38,"/tmp/post_install/stock_config.json",0x23);
        iVar39 = thunk_FUN_01be5118(0x24);
        if (iVar39 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x24);
        }
        FUN_01bed4e2(iVar39,"/tmp/post_install/custom_config.json",0x24);
        iVar40 = thunk_FUN_01be5118(0x11);
        if (iVar40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x11);
        }
        FUN_01bed4e2(iVar40,"/tmp/firmware.tar",0x11);
        iVar41 = thunk_FUN_01be5118(0x11);
        if (iVar41 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x11);
        }
        FUN_01bed4e2(iVar41,"/etc/crontabs/bos",0x11);
        iVar42 = thunk_FUN_01be5118(0xf);
        if (iVar42 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0xf);
        }
        FUN_01bed4e2(iVar42,"/etc/boser.toml",0xf);
        iVar43 = thunk_FUN_01be5118(0x1f);
        if (iVar43 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x1f);
        }
        FUN_01bed4e2(iVar43,"/etc/bosminer-experimental.tomlAddrParseError/api/v1/actions",0x1f);
        iVar44 = thunk_FUN_01be5118(0x1b);
        if (iVar44 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x1b);
        }
        FUN_01bed4e2(iVar44,"/etc/bosminer-settings.json",0x1b);
        param_1[0x39] = iVar1;
        param_1[0x3a] = iVar5;
        param_1[0x3b] = iVar9;
        param_1[0x3c] = iVar13;
        param_1[0x3d] = iVar17;
        param_1[0x3e] = iVar21;
        param_1[0x3f] = iVar25;
        param_1[0x40] = iVar29;
        param_1[0x41] = iVar2;
        param_1[0x42] = iVar6;
        param_1[0x43] = iVar10;
        param_1[0x44] = iVar14;
        param_1[0x45] = iVar18;
        param_1[0x46] = iVar22;
        param_1[0x47] = iVar26;
        param_1[0x48] = iVar30;
        param_1[0x49] = iVar3;
        param_1[0x4a] = iVar7;
        param_1[0x4b] = iVar11;
        param_1[0x4c] = iVar15;
        param_1[0x4d] = iVar19;
        param_1[0x4e] = iVar23;
        param_1[0x4f] = iVar27;
        param_1[0x50] = iVar31;
        param_1[0x51] = iVar4;
        param_1[0x52] = iVar8;
        param_1[0x53] = iVar12;
        param_1[0x54] = iVar16;
        param_1[0x55] = iVar20;
        param_1[0x56] = iVar24;
        param_1[0x57] = iVar28;
        param_1[0x58] = iVar32;
        param_1[0x36] = -0x80000000;
        *param_1 = local_90;
        param_1[1] = iStack_8c;
        param_1[2] = iStack_88;
        param_1[3] = iStack_84;
        param_1[4] = local_70;
        param_1[5] = local_6c;
        param_1[6] = local_c0;
        param_1[7] = iStack_bc;
        param_1[8] = local_b8;
        param_1[9] = iStack_b4;
        param_1[10] = local_b0;
        param_1[0xb] = iStack_ac;
        param_1[0xc] = local_a8;
        param_1[0xd] = iStack_a4;
        param_1[0xe] = iStack_a0;
        param_1[0xf] = iStack_9c;
        param_1[0x10] = iStack_98;
        param_1[0x11] = iStack_94;
        param_1[0x14] = 10;
        param_1[0x12] = 10;
        param_1[0x13] = iVar33;
        param_1[0x15] = local_38;
        param_1[0x16] = iStack_34;
        param_1[0x17] = iStack_30;
        param_1[0x18] = local_80;
        param_1[0x19] = local_7c;
        param_1[0x1a] = iStack_78;
        *(undefined2 *)(param_1 + 0x5a) = 1;
        *(undefined2 *)(param_1 + 0x59) = 0;
        *(undefined1 *)((int)param_1 + 0x16a) = 2;
        param_1[0x26] = 0x24;
        param_1[0x25] = iVar39;
        param_1[0x24] = 0x24;
        param_1[0x23] = 0x23;
        param_1[0x20] = 0x12;
        param_1[0x21] = 0x23;
        param_1[0x22] = iVar38;
        param_1[0x35] = 0x1b;
        param_1[0x2f] = 0xf;
        param_1[0x30] = 0x1f;
        param_1[0x1d] = 0x15;
        param_1[0x32] = 0x1f;
        param_1[0x1e] = 0x12;
        param_1[0x2a] = 0x11;
        param_1[0x1b] = 0x15;
        param_1[0x1f] = iVar37;
        param_1[0x28] = iVar40;
        param_1[0x1c] = iVar36;
        param_1[0x27] = 0x11;
        param_1[0x2c] = 0x11;
        param_1[0x29] = 0x11;
        param_1[0x2b] = iVar41;
        param_1[0x2d] = 0xf;
        param_1[0x34] = iVar44;
        param_1[0x33] = 0x1b;
        param_1[0x2e] = iVar42;
        param_1[0x31] = iVar43;
        FUN_019bb7e0(10,iVar35);
        FUN_019bb7e0(10,iVar34);
        return;
      }
      puVar45 = &DAT_01c10600;
      puVar46 = &DAT_01c10408;
      goto LAB_00aedf5c;
    }
    puVar45 = &DAT_01c105d0;
  }
  puVar46 = &DAT_01c103f8;
  local_7c._0_1_ = local_80._2_1_;
LAB_00aedf5c:
  local_c0 = CONCAT31(local_c0._1_3_,(undefined1)local_7c);
                    /* WARNING: Subroutine does not return */
  FUN_013073dc("BUG: bad default value",0x16,&local_c0,puVar46,puVar45);
}

