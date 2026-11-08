// FUN_0129ac1c @ 0129ac1c size=2176 calls_out=11 calls_in=4
// strings: 

void FUN_0129ac1c(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 *puVar25;
  undefined4 uVar26;
  undefined4 extraout_r1;
  char *pcVar27;
  undefined4 uVar28;
  char *pcVar29;
  undefined4 *puVar30;
  uint uVar31;
  undefined4 uVar32;
  int iVar33;
  undefined4 *puVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined8 uVar37;
  char *local_2b8;
  int local_2b4;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint local_a0;
  undefined8 uStack_9c;
  uint local_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint local_68;
  undefined8 local_64;
  uint local_58;
  undefined8 uStack_54;
  uint local_4c;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint local_30;
  undefined8 uStack_2c;
  
  pcVar27 = *(char **)(param_2 + 8);
  uVar28 = 0;
  iVar5 = (int)pcVar27 * 0x16c;
  if ("/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/client.rs"
      < pcVar27) {
LAB_0129ac50:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar28,iVar5);
  }
  if (iVar5 == 0) {
    local_2b4 = 4;
    local_2b8 = (char *)0x0;
  }
  else {
    uVar28 = 4;
    puVar30 = *(undefined4 **)(param_2 + 4);
    local_2b4 = FUN_01298504(iVar5,4);
    uStack_90 = CONCAT44(uStack_48._4_4_,(undefined4)uStack_48);
    if (local_2b4 == 0) goto LAB_0129ac50;
    iVar33 = 0;
    local_2b8 = pcVar27;
    if (pcVar27 != (char *)0x0) {
      pcVar29 = (char *)0x0;
      puVar34 = puVar30;
      uStack_2c = CONCAT44(uStack_2c._4_4_,(undefined4)uStack_2c);
      uStack_54 = CONCAT44(uStack_54._4_4_,(undefined4)uStack_54);
      do {
        if (iVar5 == iVar33) break;
        uVar28 = puVar34[7];
        uVar6 = puVar34[0x49];
        uVar7 = puVar34[0x4a];
        uVar35 = puVar34[0x47];
        uVar36 = puVar34[0x48];
        if (puVar34[0x23] == -0x80000000) {
          local_190 = 0x80000000;
        }
        else {
          uStack_48 = uStack_90;
          FUN_006666fc(&local_190,*(undefined4 *)((int)puVar30 + iVar33 + 0x90),
                       *(undefined4 *)((int)puVar30 + iVar33 + 0x94));
          uStack_90 = uStack_48;
        }
        if (puVar34[0x26] == -0x80000000) {
          local_180 = 0x80000000;
        }
        else {
          uStack_48 = uStack_90;
          FUN_006666fc(&local_180,*(undefined4 *)((int)puVar30 + iVar33 + 0x9c),
                       *(undefined4 *)((int)puVar30 + iVar33 + 0xa0));
          uStack_90 = uStack_48;
        }
        uVar8 = puVar34[0x4b];
        uVar9 = puVar34[0x4c];
        uVar10 = puVar34[0x4d];
        uVar11 = puVar34[0x4e];
        uVar12 = puVar34[0x4f];
        uVar13 = puVar34[0x50];
        if (puVar34[0x29] == -0x80000000) {
          local_170 = 0x80000000;
        }
        else {
          uStack_48 = uStack_90;
          FUN_006666fc(&local_170,*(undefined4 *)((int)puVar30 + iVar33 + 0xa8),
                       *(undefined4 *)((int)puVar30 + iVar33 + 0xac));
          uStack_90 = uStack_48;
        }
        if (puVar34[0x2c] == -0x80000000) {
          local_160 = 0x80000000;
        }
        else {
          uStack_48 = uStack_90;
          FUN_006666fc(&local_160,*(undefined4 *)((int)puVar30 + iVar33 + 0xb4),
                       *(undefined4 *)((int)puVar30 + iVar33 + 0xb8));
          uStack_90 = uStack_48;
        }
        if (puVar34[0x2f] == -0x80000000) {
          local_150 = 0x80000000;
        }
        else {
          uStack_48 = uStack_90;
          FUN_006666fc(&local_150,*(undefined4 *)((int)puVar30 + iVar33 + 0xc0),
                       *(undefined4 *)((int)puVar30 + iVar33 + 0xc4));
          uStack_90 = uStack_48;
        }
        if (puVar34[0x32] == -0x80000000) {
          local_140 = 0x80000000;
        }
        else {
          uStack_48 = uStack_90;
          FUN_006666fc(&local_140,*(undefined4 *)((int)puVar30 + iVar33 + 0xcc),
                       *(undefined4 *)((int)puVar30 + iVar33 + 0xd0));
          uStack_90 = uStack_48;
        }
        if (puVar34[0x35] == -0x80000000) {
          local_130 = 0x80000000;
        }
        else {
          uStack_48 = uStack_90;
          FUN_006666fc(&local_130,*(undefined4 *)((int)puVar30 + iVar33 + 0xd8),
                       *(undefined4 *)((int)puVar30 + iVar33 + 0xdc));
          uStack_90 = uStack_48;
        }
        if (puVar34[0x38] == -0x80000000) {
          local_120 = 0x80000000;
        }
        else {
          uStack_48 = uStack_90;
          FUN_006666fc(&local_120,*(undefined4 *)((int)puVar30 + iVar33 + 0xe4),
                       *(undefined4 *)((int)puVar30 + iVar33 + 0xe8));
          uStack_90 = uStack_48;
        }
        uStack_48 = uStack_90;
        FUN_01299e64(&local_110,puVar34[9],puVar34[10]);
        FUN_016c0ed4(&local_100,puVar34[0xc],puVar34[0xd]);
        FUN_01299e64(&local_f0,puVar34[0xf],puVar34[0x10]);
        if (puVar34[0x3b] == -0x80000000) {
          local_e0 = 0x80000000;
        }
        else {
          FUN_006666fc(&local_e0,*(undefined4 *)((int)puVar30 + iVar33 + 0xf0),
                       *(undefined4 *)((int)puVar30 + iVar33 + 0xf4));
        }
        if (puVar34[0x3e] == -0x80000000) {
          local_d0 = 0x80000000;
        }
        else {
          FUN_006666fc(&local_d0,*(undefined4 *)((int)puVar30 + iVar33 + 0xfc),
                       *(undefined4 *)((int)puVar30 + iVar33 + 0x100));
        }
        if (puVar34[0x41] == -0x80000000) {
          local_c0 = 0x80000000;
        }
        else {
          FUN_006666fc(&local_c0,*(undefined4 *)((int)puVar30 + iVar33 + 0x108),
                       *(undefined4 *)((int)puVar30 + iVar33 + 0x10c));
        }
        uVar14 = puVar34[1];
        uVar26 = *puVar34;
        if (puVar34[0x44] == -0x80000000) {
          local_b0 = 0x80000000;
        }
        else {
          FUN_006666fc(&local_b0,*(undefined4 *)((int)puVar30 + iVar33 + 0x114),
                       *(undefined4 *)((int)puVar30 + iVar33 + 0x118));
        }
        uVar15 = puVar34[0x51];
        uVar16 = puVar34[0x52];
        FUN_01299598(&local_30,puVar34[0x12],puVar34[0x13]);
        FUN_0129ab68(&local_58,puVar34[0x15],puVar34[0x16]);
        local_a0 = local_30;
        local_94 = local_58;
        uStack_9c = uStack_2c;
        uStack_90 = uStack_54;
        FUN_0129ac1c(&local_88,puVar34 + 0x17);
        FUN_0129a930(&local_78,puVar34[0x1b],puVar34[0x1c]);
        uVar17 = puVar34[2];
        uVar18 = puVar34[3];
        uVar19 = puVar34[0x53];
        uVar20 = puVar34[0x54];
        uVar21 = puVar34[0x55];
        uVar31 = puVar34[4];
        uVar22 = puVar34[0x56];
        uVar23 = puVar34[0x57];
        uVar24 = puVar34[0x58];
        uVar37 = CONCAT44(extraout_r1,uVar24);
        if (uVar31 == 5) {
          local_68 = 5;
          uVar37 = local_64;
        }
        else {
          if (3 < uVar31) {
            uVar37 = (**(code **)(*(int *)((int)puVar30 + iVar33 + 0x18) + 0x1c))
                               (*(undefined4 *)((int)puVar30 + iVar33 + 0x14));
          }
          local_68 = uVar31;
        }
        uVar1 = *(undefined1 *)(puVar34 + 0x5a);
        uVar32 = puVar34[0x59];
        local_64 = uVar37;
        FUN_01299fb0(&local_40,puVar34[0x1e],puVar34[0x1f]);
        FUN_0129a030(&local_30,puVar34[0x21],puVar34[0x22]);
        uVar31 = local_30;
        uVar4 = uStack_38;
        uVar3 = uStack_3c;
        uVar2 = local_40;
        pcVar29 = pcVar29 + 1;
        puVar34 = puVar34 + 0x5b;
        local_40 = local_110;
        uStack_3c = uStack_10c;
        uStack_38 = uStack_108;
        local_58 = local_a0;
        local_4c = local_94;
        local_30 = local_68;
        puVar25 = (undefined4 *)(local_2b4 + iVar33);
        *puVar25 = uVar26;
        iVar33 = iVar33 + 0x16c;
        puVar25[1] = uVar14;
        puVar25[2] = uVar17;
        puVar25[3] = uVar18;
        puVar25[4] = local_68;
        *(undefined8 *)(puVar25 + 5) = local_64;
        puVar25[7] = uVar28;
        puVar25[8] = local_110;
        puVar25[9] = uStack_10c;
        puVar25[10] = uStack_108;
        puVar25[0xb] = local_100;
        puVar25[0xc] = uStack_fc;
        puVar25[0xd] = uStack_f8;
        puVar25[0xe] = local_f0;
        puVar25[0xf] = uStack_ec;
        puVar25[0x10] = uStack_e8;
        puVar25[0x11] = local_a0;
        *(undefined8 *)(puVar25 + 0x12) = uStack_9c;
        puVar25[0x14] = local_94;
        *(undefined8 *)(puVar25 + 0x15) = uStack_90;
        puVar25[0x17] = local_88;
        puVar25[0x18] = uStack_84;
        puVar25[0x19] = uStack_80;
        puVar25[0x1a] = local_78;
        puVar25[0x1b] = uStack_74;
        puVar25[0x1c] = uStack_70;
        puVar25[0x1d] = uVar2;
        puVar25[0x1e] = uVar3;
        puVar25[0x1f] = uVar4;
        puVar25[0x20] = uVar31;
        *(undefined8 *)(puVar25 + 0x21) = uStack_2c;
        puVar25[0x23] = local_190;
        puVar25[0x24] = uStack_18c;
        puVar25[0x25] = uStack_188;
        puVar25[0x26] = local_180;
        puVar25[0x27] = uStack_17c;
        puVar25[0x28] = uStack_178;
        puVar25[0x29] = local_170;
        puVar25[0x2a] = uStack_16c;
        puVar25[0x2b] = uStack_168;
        puVar25[0x2c] = local_160;
        puVar25[0x2d] = uStack_15c;
        puVar25[0x2e] = uStack_158;
        puVar25[0x2f] = local_150;
        puVar25[0x30] = uStack_14c;
        puVar25[0x31] = uStack_148;
        puVar25[0x32] = local_140;
        puVar25[0x33] = uStack_13c;
        puVar25[0x34] = uStack_138;
        puVar25[0x35] = local_130;
        puVar25[0x36] = uStack_12c;
        puVar25[0x37] = uStack_128;
        puVar25[0x38] = local_120;
        puVar25[0x39] = uStack_11c;
        puVar25[0x3a] = uStack_118;
        puVar25[0x3b] = local_e0;
        puVar25[0x3c] = uStack_dc;
        puVar25[0x3d] = uStack_d8;
        puVar25[0x3e] = local_d0;
        puVar25[0x3f] = uStack_cc;
        puVar25[0x40] = uStack_c8;
        puVar25[0x41] = local_c0;
        puVar25[0x42] = uStack_bc;
        puVar25[0x43] = uStack_b8;
        puVar25[0x44] = local_b0;
        puVar25[0x45] = uStack_ac;
        puVar25[0x46] = uStack_a8;
        *(undefined1 *)(puVar25 + 0x5a) = uVar1;
        puVar25[0x57] = uVar23;
        puVar25[0x58] = uVar24;
        puVar25[0x59] = uVar32;
        puVar25[0x4f] = uVar12;
        puVar25[0x50] = uVar13;
        puVar25[0x51] = uVar15;
        puVar25[0x52] = uVar16;
        puVar25[0x53] = uVar19;
        puVar25[0x54] = uVar20;
        puVar25[0x55] = uVar21;
        puVar25[0x56] = uVar22;
        puVar25[0x47] = uVar35;
        puVar25[0x48] = uVar36;
        puVar25[0x49] = uVar6;
        puVar25[0x4a] = uVar7;
        puVar25[0x4b] = uVar8;
        puVar25[0x4c] = uVar9;
        puVar25[0x4d] = uVar10;
        puVar25[0x4e] = uVar11;
        uStack_2c = local_64;
        uStack_54 = uStack_9c;
      } while (pcVar27 != pcVar29);
    }
  }
  *param_1 = local_2b8;
  param_1[1] = local_2b4;
  param_1[2] = pcVar27;
  return;
}

