// FUN_0121e4a0 @ 0121e4a0 size=16768 calls_out=79 calls_in=1
// strings: reqwest-internal-sync-runtime | RUST_MIN_STACK | core thread panicked | tx only taken on error | core thread exited early | tx only taken on error

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xfffff9d0 */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0121ffec) */
/* WARNING: Removing unreachable block (ram,0x0121ed24) */
/* WARNING: Removing unreachable block (ram,0x018a6690) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0121e4a0(undefined4 *param_1,dword *param_2,Elf32_Ehdr *param_3,undefined4 param_4,
                 undefined1 param_5)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  char cVar5;
  word wVar6;
  word wVar7;
  word wVar8;
  word wVar9;
  Elf32_Ehdr *pEVar10;
  Elf32_Ehdr *pEVar11;
  Elf32_Ehdr *pEVar12;
  Elf32_Ehdr *pEVar13;
  Elf32_Ehdr *pEVar14;
  Elf32_Ehdr *pEVar15;
  Elf32_Ehdr *pEVar16;
  Elf32_Ehdr *pEVar17;
  Elf32_Ehdr *pEVar18;
  char cVar19;
  int iVar20;
  uint uVar21;
  Elf32_Ehdr *pEVar22;
  Elf32_Ehdr *pEVar23;
  Elf32_Ehdr *pEVar24;
  Elf32_Ehdr *pEVar25;
  undefined4 *puVar26;
  int iVar27;
  uint uVar28;
  Elf32_Ehdr *pEVar29;
  Elf32_Ehdr *pEVar30;
  uint *puVar31;
  byte *pbVar32;
  uint uVar33;
  uint uVar34;
  char *pcVar35;
  uint uVar36;
  int *piVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  code *pcVar41;
  byte bVar42;
  Elf32_Ehdr *extraout_r2;
  int iVar43;
  dword *pdVar44;
  dword dVar45;
  Elf32_Ehdr *pEVar46;
  uint extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  undefined4 uVar47;
  dword dVar48;
  undefined1 auVar49 [4];
  uint uVar50;
  undefined4 uVar51;
  word *pwVar52;
  Elf32_Ehdr **ppEVar53;
  dword dVar54;
  uint uVar55;
  undefined4 uVar56;
  uint uVar57;
  dword dVar58;
  undefined1 auVar59 [4];
  undefined4 uVar60;
  undefined4 uVar61;
  char cVar62;
  uint uVar63;
  undefined1 auVar64 [4];
  int *piVar65;
  dword *pdVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  dword *pdVar70;
  Elf32_Ehdr *extraout_r12;
  Elf32_Ehdr *extraout_r12_00;
  uint uVar71;
  undefined1 uVar72;
  bool bVar73;
  undefined8 uVar74;
  undefined1 uStack00000000;
  undefined *local_1060 [7];
  Elf32_Ehdr **local_1044;
  undefined2 *local_1040;
  undefined2 *local_103c;
  Elf32_Ehdr **local_1038;
  Elf32_Ehdr **local_1034;
  uint local_1030;
  undefined4 local_102c;
  uint local_1028;
  Elf32_Ehdr *local_1024;
  uint local_1020;
  Elf32_Ehdr *local_101c;
  undefined4 local_1018;
  undefined4 local_1014;
  uint local_1010;
  undefined4 local_100c;
  Elf32_Ehdr *local_1008;
  Elf32_Ehdr *local_1004;
  uint local_1000;
  uint local_ffc;
  dword local_ff8;
  Elf32_Ehdr *local_ff4;
  Elf32_Ehdr **local_ff0;
  Elf32_Ehdr **local_fec;
  Elf32_Ehdr *local_fe8;
  Elf32_Ehdr **local_fe4;
  Elf32_Ehdr **local_fe0;
  Elf32_Ehdr *local_fdc;
  dword *local_fd8;
  Elf32_Ehdr *local_fd4;
  byte *local_fd0;
  Elf32_Ehdr **local_fcc;
  dword *local_fc8;
  Elf32_Ehdr *local_fc4;
  Elf32_Ehdr *local_fc0;
  Elf32_Ehdr *local_fbc;
  undefined4 *local_fb8;
  Elf32_Ehdr *local_fb4;
  Elf32_Ehdr *local_fb0;
  Elf32_Ehdr *local_fac;
  Elf32_Ehdr *local_fa8;
  Elf32_Ehdr *local_fa4;
  Elf32_Ehdr *local_fa0;
  Elf32_Ehdr *local_f9c;
  uint local_f98;
  uint local_f94;
  undefined1 auStack_f90 [200];
  undefined4 local_ec8;
  undefined4 local_ec4;
  undefined1 local_ec0;
  Elf32_Ehdr *local_eb8;
  Elf32_Ehdr *pEStack_eb4;
  Elf32_Ehdr *pEStack_eb0;
  Elf32_Ehdr *local_ea8;
  undefined4 local_ea4;
  Elf32_Ehdr *local_ea0;
  undefined1 local_e98 [8];
  Elf32_Ehdr *local_e90;
  Elf32_Ehdr *local_e88;
  Elf32_Ehdr *local_e84;
  Elf32_Ehdr *pEStack_e80;
  Elf32_Ehdr *pEStack_e7c;
  Elf32_Ehdr *pEStack_e78;
  Elf32_Ehdr *local_e74;
  dword local_e70;
  dword dStack_e6c;
  Elf32_Ehdr *pEStack_e68;
  Elf32_Ehdr *local_e64;
  Elf32_Ehdr *local_e60;
  Elf32_Ehdr *local_e5c;
  Elf32_Ehdr *local_e58;
  Elf32_Ehdr *local_e54;
  Elf32_Ehdr *local_e50;
  Elf32_Ehdr *pEStack_e4c;
  Elf32_Ehdr *local_e38;
  Elf32_Ehdr *local_e34;
  Elf32_Ehdr *local_e30;
  Elf32_Ehdr *local_e2c;
  Elf32_Ehdr *local_e28;
  Elf32_Ehdr *local_e24;
  Elf32_Ehdr *pEStack_e20;
  dword dStack_e1c;
  Elf32_Ehdr *pEStack_e18;
  Elf32_Ehdr *pEStack_e14;
  Elf32_Ehdr *local_e10;
  Elf32_Ehdr *pEStack_e0c;
  Elf32_Ehdr *pEStack_e08;
  Elf32_Ehdr *pEStack_e04;
  Elf32_Ehdr *pEStack_e00;
  Elf32_Ehdr *pEStack_dfc;
  uint local_df8;
  undefined4 local_df4;
  Elf32_Ehdr *local_df0;
  Elf32_Ehdr *local_dec;
  Elf32_Ehdr *pEStack_de8;
  Elf32_Ehdr *local_de4;
  Elf32_Ehdr *local_de0;
  Elf32_Ehdr *local_ddc;
  Elf32_Ehdr *local_dd8;
  Elf32_Ehdr *local_dd4;
  undefined4 local_dd0;
  undefined4 local_dcc;
  undefined4 local_dc8;
  Elf32_Ehdr *local_dc4;
  Elf32_Ehdr *local_dc0;
  Elf32_Ehdr *pEStack_dbc;
  Elf32_Ehdr *local_db8;
  undefined1 local_db4;
  undefined4 local_db0;
  int *local_d88;
  undefined1 *local_cf8;
  undefined4 local_cf0;
  undefined4 uStack_cec;
  undefined4 local_ce8;
  undefined4 local_ce0;
  undefined4 local_cdc;
  undefined4 local_cd8;
  undefined4 local_cd0;
  undefined4 local_ccc;
  undefined4 local_cc8;
  undefined4 local_cc0;
  undefined4 local_cbc;
  undefined4 local_cb8;
  undefined1 *local_ca8;
  undefined1 *local_c98;
  undefined1 *local_c88;
  undefined1 *local_c78;
  Elf32_Ehdr *pEStack_c74;
  Elf32_Ehdr *pEStack_c70;
  Elf32_Ehdr *pEStack_c6c;
  Elf32_Ehdr *pEStack_c68;
  Elf32_Ehdr *pEStack_c64;
  Elf32_Ehdr *local_c60;
  Elf32_Ehdr *local_c5c;
  Elf32_Ehdr *local_c58;
  Elf32_Ehdr *local_c54;
  undefined4 local_c50;
  undefined4 local_c48;
  Elf32_Ehdr *local_c44;
  Elf32_Ehdr *local_c40;
  Elf32_Ehdr *local_c3c;
  Elf32_Ehdr *local_c38;
  undefined4 local_c34;
  Elf32_Ehdr *local_c30;
  Elf32_Ehdr *pEStack_c2c;
  Elf32_Ehdr *pEStack_c28;
  Elf32_Ehdr *pEStack_c24;
  undefined4 local_c20;
  undefined4 uStack_c1c;
  Elf32_Ehdr *pEStack_c18;
  Elf32_Ehdr *pEStack_c14;
  Elf32_Ehdr *pEStack_c10;
  Elf32_Ehdr *local_c0c;
  Elf32_Ehdr *local_c08;
  Elf32_Ehdr *local_c04;
  Elf32_Ehdr *local_c00;
  undefined4 uStack_bfc;
  Elf32_Ehdr *pEStack_bf8;
  Elf32_Ehdr *local_bf4;
  Elf32_Ehdr *local_bf0;
  Elf32_Ehdr *local_bec;
  undefined4 local_be8;
  undefined4 local_bdc;
  undefined4 local_bd8;
  undefined4 local_bd4;
  undefined2 uStack_bd0;
  undefined4 local_bce;
  undefined4 local_bca;
  undefined1 local_bc6;
  undefined4 local_bc5;
  undefined1 local_bc1;
  undefined2 uStack_bb0;
  Elf32_Ehdr *local_ba8;
  Elf32_Ehdr *local_ba4;
  undefined1 local_ba0 [8];
  Elf32_Ehdr *local_b98;
  Elf32_Ehdr *local_b90;
  Elf32_Ehdr *local_b8c;
  Elf32_Ehdr *local_b88;
  Elf32_Ehdr *pEStack_b84;
  Elf32_Ehdr *local_b80;
  Elf32_Ehdr *local_b7c;
  undefined1 *local_b78;
  dword local_b74;
  Elf32_Ehdr *local_b70;
  Elf32_Ehdr *local_b6c;
  Elf32_Ehdr *local_b68;
  Elf32_Ehdr *local_b64;
  Elf32_Ehdr *local_b60;
  Elf32_Ehdr *local_b5c;
  Elf32_Ehdr *local_b58;
  Elf32_Ehdr *pEStack_b54;
  Elf32_Ehdr *local_b50;
  Elf32_Ehdr *local_b4c;
  Elf32_Ehdr *local_b48;
  Elf32_Ehdr *pEStack_b44;
  Elf32_Ehdr *pEStack_b40;
  Elf32_Ehdr *local_b3c;
  Elf32_Ehdr *local_b38;
  Elf32_Ehdr *local_b34;
  Elf32_Ehdr *local_b30;
  Elf32_Ehdr *pEStack_b2c;
  Elf32_Ehdr *local_b28;
  Elf32_Ehdr *pEStack_b24;
  Elf32_Ehdr *local_b20;
  Elf32_Ehdr *pEStack_b1c;
  Elf32_Ehdr *local_b18;
  Elf32_Ehdr *pEStack_b14;
  Elf32_Ehdr *local_b10;
  Elf32_Ehdr *pEStack_b0c;
  undefined4 local_b08;
  undefined1 local_af4;
  undefined2 local_af3;
  undefined1 local_af1;
  undefined4 local_af0;
  undefined4 local_aec;
  undefined4 local_ae8;
  undefined4 local_ae4;
  undefined4 local_ae0;
  undefined1 local_adc;
  word local_ad8 [8];
  Elf32_Ehdr *local_ac8;
  Elf32_Ehdr *local_ac4;
  undefined4 local_ac0;
  undefined4 local_abc;
  Elf32_Ehdr *local_ab8;
  Elf32_Ehdr *local_ab0;
  undefined1 *local_a50;
  undefined4 local_a48;
  undefined4 uStack_a44;
  undefined4 local_a40;
  undefined4 local_a38;
  undefined4 local_a34;
  undefined4 local_a30;
  undefined4 local_a28;
  undefined4 local_a24;
  undefined4 local_a20;
  undefined4 local_a18;
  undefined4 local_a14;
  undefined4 local_a10;
  undefined1 *local_a00;
  undefined1 *local_9f0;
  undefined1 *local_9e0;
  undefined1 *local_9d0;
  Elf32_Ehdr *pEStack_9cc;
  Elf32_Ehdr *pEStack_9c8;
  Elf32_Ehdr *pEStack_9c4;
  Elf32_Ehdr *pEStack_9c0;
  Elf32_Ehdr *pEStack_9bc;
  Elf32_Ehdr *local_9b8;
  Elf32_Ehdr *local_9b4;
  Elf32_Ehdr *local_9b0;
  Elf32_Ehdr *local_9ac;
  undefined4 local_9a8;
  undefined4 local_9a0;
  Elf32_Ehdr *local_99c;
  Elf32_Ehdr *local_998;
  Elf32_Ehdr *local_994;
  Elf32_Ehdr *local_990;
  undefined4 local_98c;
  Elf32_Ehdr *local_988;
  Elf32_Ehdr *pEStack_984;
  Elf32_Ehdr *pEStack_980;
  Elf32_Ehdr *pEStack_97c;
  undefined4 local_978;
  undefined4 uStack_974;
  Elf32_Ehdr *pEStack_970;
  Elf32_Ehdr *pEStack_96c;
  Elf32_Ehdr *pEStack_968;
  Elf32_Ehdr *local_964;
  Elf32_Ehdr *local_960;
  Elf32_Ehdr *local_95c;
  Elf32_Ehdr *local_958;
  undefined4 local_954;
  Elf32_Ehdr *local_950;
  Elf32_Ehdr *local_94c;
  Elf32_Ehdr *local_948;
  Elf32_Ehdr *local_944;
  undefined4 local_940;
  undefined4 local_934;
  undefined4 local_930;
  undefined4 local_92c;
  undefined2 uStack_928;
  undefined4 local_926;
  undefined4 local_922;
  undefined1 local_91e;
  undefined4 local_91d;
  undefined1 local_919;
  undefined2 uStack_908;
  Elf32_Ehdr *local_900;
  Elf32_Ehdr *local_8fc;
  Elf32_Ehdr *local_8f4;
  undefined1 local_8f0 [8];
  Elf32_Ehdr *local_8e8;
  Elf32_Ehdr *local_8e4;
  Elf32_Ehdr *local_8e0;
  Elf32_Ehdr *local_8dc;
  Elf32_Ehdr *local_8d8;
  Elf32_Ehdr *local_8d4;
  Elf32_Ehdr *local_8d0;
  Elf32_Ehdr *local_8cc;
  Elf32_Ehdr *local_8c8;
  Elf32_Ehdr *local_8c4;
  Elf32_Ehdr *local_8c0;
  Elf32_Ehdr *pEStack_8bc;
  Elf32_Ehdr *pEStack_8b8;
  Elf32_Ehdr *pEStack_8b4;
  Elf32_Ehdr *pEStack_8b0;
  Elf32_Ehdr *pEStack_8ac;
  uint local_820;
  uint uStack_81c;
  Elf32_Ehdr *pEStack_818;
  Elf32_Ehdr *local_810;
  Elf32_Ehdr *local_648;
  undefined1 local_640 [4];
  Elf32_Ehdr *local_63c;
  undefined1 local_638 [4];
  Elf32_Ehdr *local_634;
  undefined4 local_630;
  Elf32_Ehdr *local_62c;
  Elf32_Ehdr *local_628;
  Elf32_Ehdr *local_624;
  Elf32_Ehdr *local_620;
  Elf32_Ehdr *local_61c;
  Elf32_Ehdr *local_618;
  undefined4 local_614;
  Elf32_Ehdr *local_610;
  Elf32_Ehdr *local_60c;
  Elf32_Ehdr *local_608;
  Elf32_Ehdr *pEStack_604;
  Elf32_Ehdr *local_600;
  Elf32_Ehdr *local_5fc;
  undefined4 local_5f8;
  undefined1 local_5e8 [8];
  undefined *local_5e0;
  byte local_5dc [8];
  dword local_5d4;
  Elf32_Ehdr *local_5d0;
  Elf32_Ehdr *local_5cc;
  dword local_5c8;
  undefined1 local_5c4;
  dword local_5c0;
  dword local_5bc;
  int local_5b8;
  Elf32_Ehdr *local_5b4;
  Elf32_Ehdr *local_5b0;
  Elf32_Ehdr *local_5ac;
  Elf32_Ehdr *local_5a8;
  byte *local_5a4;
  uint local_5a0;
  int *local_59c;
  undefined1 local_598 [16];
  Elf32_Ehdr *local_588;
  Elf32_Ehdr *local_584;
  Elf32_Ehdr *local_580;
  Elf32_Ehdr *local_57c;
  Elf32_Ehdr *local_578;
  Elf32_Ehdr *local_574;
  uint local_570;
  uint uStack_56c;
  undefined4 local_568;
  undefined1 local_564 [4];
  Elf32_Ehdr *local_560;
  Elf32_Ehdr **local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined *local_234;
  undefined2 uStack_230;
  undefined1 local_22e;
  undefined1 local_22d;
  Elf32_Ehdr *local_210;
  Elf32_Ehdr *local_20c;
  Elf32_Ehdr *local_208;
  Elf32_Ehdr *local_204;
  Elf32_Ehdr *local_200;
  Elf32_Ehdr *local_1fc;
  Elf32_Ehdr *pEStack_1f8;
  Elf32_Ehdr *pEStack_1f4;
  Elf32_Ehdr *pEStack_1f0;
  Elf32_Ehdr *pEStack_1ec;
  Elf32_Ehdr *local_1e8;
  Elf32_Ehdr *pEStack_1e4;
  Elf32_Ehdr *pEStack_1e0;
  Elf32_Ehdr *pEStack_1dc;
  undefined1 local_1d8;
  undefined1 local_1d0 [8];
  Elf32_Ehdr *local_1c8;
  Elf32_Ehdr *local_1c4;
  Elf32_Ehdr *local_1c0;
  Elf32_Ehdr *local_1bc;
  dword dStack_1b8;
  dword dStack_1b4;
  Elf32_Ehdr *pEStack_1b0;
  Elf32_Ehdr *pEStack_1ac;
  Elf32_Ehdr *local_1a8;
  Elf32_Ehdr *pEStack_1a4;
  Elf32_Ehdr *pEStack_1a0;
  Elf32_Ehdr *pEStack_19c;
  Elf32_Ehdr *pEStack_198;
  Elf32_Ehdr *pEStack_194;
  undefined2 local_188;
  byte *local_174;
  undefined *local_170;
  Elf32_Ehdr *local_120;
  Elf32_Ehdr *local_11c;
  Elf32_Ehdr *local_118;
  Elf32_Ehdr *local_110;
  Elf32_Ehdr *local_10c;
  Elf32_Ehdr *local_108;
  Elf32_Ehdr *pEStack_104;
  Elf32_Ehdr *local_100;
  Elf32_Ehdr *pEStack_fc;
  Elf32_Ehdr *pEStack_f8;
  Elf32_Ehdr *pEStack_f4;
  undefined1 local_c0 [4];
  Elf32_Ehdr *local_bc;
  Elf32_Ehdr *local_b8;
  Elf32_Ehdr *local_b4;
  Elf32_Ehdr *local_b0;
  Elf32_Ehdr *local_ac;
  undefined4 local_a8;
  Elf32_Ehdr *local_a4;
  Elf32_Ehdr *local_a0;
  Elf32_Ehdr *local_98;
  Elf32_Ehdr *local_94;
  Elf32_Ehdr *local_90;
  Elf32_Ehdr *local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  Elf32_Ehdr *local_80;
  Elf32_Ehdr *pEStack_7c;
  Elf32_Ehdr *pEStack_78;
  
  local_fb8 = param_1;
  local_63c = (Elf32_Ehdr *)thunk_FUN_016d4a50(8);
  if (local_63c == (Elf32_Ehdr *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(2,8);
  }
  local_63c->e_ident_class = 0xff;
  local_63c->e_ident_data = 0xff;
  local_63c->e_ident_version = 0;
  local_63c->e_ident_osabi = 0;
  local_63c->e_ident_magic_num = 0xff;
  local_63c->e_ident_magic_str[0] = -1;
  local_63c->e_ident_magic_str[1] = '\0';
  local_63c->e_ident_magic_str[2] = '\0';
  local_640 = (undefined1  [4])0x2;
  local_638 = (undefined1  [4])0x2;
  uVar74 = FUN_00a5ee50(local_640);
  local_e64 = (Elf32_Ehdr *)thunk_FUN_016d4a50(0x68);
  if (local_e64 == (Elf32_Ehdr *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x68);
  }
  local_e50 = (Elf32_Ehdr *)CONCAT22(local_e50._2_2_,1);
  pEStack_e68 = (Elf32_Ehdr *)&SUB_00000002;
  local_e84 = (Elf32_Ehdr *)0x0;
  local_e88 = (Elf32_Ehdr *)0x0;
  local_e54 = (Elf32_Ehdr *)0x0;
  local_e58 = (Elf32_Ehdr *)&DAT_00000004;
  local_e5c = (Elf32_Ehdr *)0x0;
  local_e60 = (Elf32_Ehdr *)0x0;
  local_e2c = (Elf32_Ehdr *)0x0;
  local_e30 = (Elf32_Ehdr *)0x0;
  local_e34 = (Elf32_Ehdr *)0x0;
  local_e38 = (Elf32_Ehdr *)0x0;
  local_8e0 = (Elf32_Ehdr *)((uint)local_8e0 & 0xffffff00);
  local_8e4 = (Elf32_Ehdr *)0x0;
  local_8e8 = (Elf32_Ehdr *)0x3;
  local_8f0._4_4_ = "*/*";
  local_8f0._0_4_ = &DAT_018a4514;
  _local_e70 = uVar74;
  FUN_0145c6d0(local_640,&local_e88,&local_e38,(Elf32_Ehdr *)local_8f0);
  if ((byte)local_630 == 3) {
    local_1060[0] = &DAT_018a6184;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0040929f,0x17,&local_120,&DAT_018a62e4);
  }
  local_b90 = (Elf32_Ehdr *)local_640;
  local_b8c = local_63c;
  local_b88 = (Elf32_Ehdr *)local_638;
  pEStack_b84 = local_634;
  local_b80 = local_630;
  local_fc8 = param_2;
  local_fc4 = param_3;
  if ((byte)local_630 != 2) {
    (**(code **)((int)local_640 + 0x10))(&pEStack_b84,local_63c,local_638);
  }
  local_ba0._4_4_ = &DAT_00000008;
  local_11c = (Elf32_Ehdr *)&DAT_0000000a;
  local_120 = (Elf32_Ehdr *)&DAT_00000001;
  local_638 = (undefined1  [4])&DAT_00000001;
  local_b98 = (Elf32_Ehdr *)0x0;
  local_ba0._0_4_ = (Elf32_Ehdr *)0x0;
  local_628 = (Elf32_Ehdr *)0x0;
  local_62c = (Elf32_Ehdr *)&SUB_00000002;
  local_640 = (undefined1  [4])0x0;
  local_a8 = (Elf32_Ehdr *)0x0;
  local_ac = (Elf32_Ehdr *)&DAT_00000004;
  local_b0 = (Elf32_Ehdr *)0x0;
  local_e30 = (Elf32_Ehdr *)0x0;
  local_e34 = (Elf32_Ehdr *)0x4;
  local_e38 = (Elf32_Ehdr *)0x0;
  local_f9c = (Elf32_Ehdr *)local_8f0;
  uVar74 = thunk_FUN_016de0ee(2,0x2c0);
  piVar65 = (int *)((int)uVar74 + (int)((ulonglong)uVar74 >> 0x20));
  local_b88 = (Elf32_Ehdr *)0x0;
  local_b90 = (Elf32_Ehdr *)0x0;
  local_b8c = extraout_r2;
  if ((char)piVar65[4] == '\0') {
    FUN_015f62e4(local_8f0);
    *piVar65 = local_8f0._0_4_;
    piVar65[1] = local_8f0._4_4_;
    piVar65[2] = (int)local_8e8;
    piVar65[3] = (int)local_8e4;
    *(undefined1 *)(piVar65 + 4) = 1;
  }
  pEStack_bf8 = local_e30;
  uStack_bfc = local_e34;
  local_c00 = local_e38;
  local_fb0 = (Elf32_Ehdr *)*piVar65;
  local_fa0 = (Elf32_Ehdr *)piVar65[1];
  local_fa4 = (Elf32_Ehdr *)piVar65[2];
  local_fa8 = (Elf32_Ehdr *)piVar65[3];
  *piVar65 = (int)local_fb0->e_ident_magic_str;
  piVar65[1] = (int)(local_fa0->e_ident_magic_str + (((Elf32_Ehdr *)0xfffffffe < local_fb0) - 1));
  local_1d0._0_4_ = local_e88;
  local_1d0._4_4_ = local_e84;
  local_1c8 = pEStack_e80;
  local_1c4 = pEStack_e7c;
  local_1c0 = pEStack_e78;
  local_1bc = local_e74;
  pEStack_1b0 = pEStack_e68;
  pEStack_1ac = local_e64;
  local_1a8 = local_e60;
  pEStack_1a4 = local_e5c;
  pEStack_1a0 = local_e58;
  pEStack_19c = local_e54;
  pEStack_198 = local_e50;
  pEStack_194 = pEStack_e4c;
  local_80 = (Elf32_Ehdr *)local_ba0._0_4_;
  pEStack_7c = (Elf32_Ehdr *)local_ba0._4_4_;
  pEStack_78 = local_b98;
  local_bc = local_120;
  local_b8 = local_11c;
  local_b4 = local_118;
  local_110 = (Elf32_Ehdr *)local_640;
  local_10c = local_63c;
  local_108 = (Elf32_Ehdr *)local_638;
  pEStack_104 = local_634;
  local_100 = local_630;
  pEStack_fc = local_62c;
  pEStack_f8 = local_628;
  pEStack_f4 = local_624;
  local_e90 = local_a8;
  local_ea8 = local_e38;
  local_e98._4_4_ = local_ac;
  local_e98._0_4_ = local_b0;
  local_ea4 = local_e34;
  local_eb8 = local_b90;
  pEStack_eb4 = local_b8c;
  pEStack_eb0 = local_b88;
  local_ea0 = local_e30;
  local_8e8 = (Elf32_Ehdr *)0x0;
  local_8e4 = (Elf32_Ehdr *)0x0;
  local_8e0 = (Elf32_Ehdr *)0x0;
  local_8f0._4_4_ = &DAT_005674cc;
  pEStack_c74 = *(Elf32_Ehdr **)local_f9c;
  pEStack_c70 = *(Elf32_Ehdr **)&local_f9c->e_ident_class;
  pEStack_c6c = *(Elf32_Ehdr **)&local_f9c->e_ident_abiversion;
  pEStack_c68 = *(Elf32_Ehdr **)((int)local_f9c->e_ident_pad + 3);
  pEStack_c64 = *(Elf32_Ehdr **)&local_f9c->e_type;
  local_ec0 = 0;
  local_ec4 = 0;
  local_ec8 = 0;
  local_e38 = local_e88;
  local_e34 = local_e84;
  local_e30 = pEStack_e80;
  local_e2c = pEStack_e7c;
  local_e28 = pEStack_e78;
  local_e24 = local_e74;
  pEStack_e18 = pEStack_e68;
  pEStack_e14 = local_e64;
  local_e10 = local_e60;
  pEStack_e0c = local_e5c;
  pEStack_e08 = local_e58;
  pEStack_e04 = local_e54;
  pEStack_e00 = local_e50;
  pEStack_dfc = pEStack_e4c;
  local_df8 = 1;
  local_df4 = 3;
  local_df0 = (Elf32_Ehdr *)local_640;
  local_dec = local_63c;
  pEStack_de8 = (Elf32_Ehdr *)local_638;
  local_de4 = local_634;
  local_de0 = local_630;
  local_ddc = local_62c;
  local_dd8 = local_628;
  local_dd4 = local_624;
  local_cf0 = 0x5a;
  uStack_cec = 0;
  local_ce0 = 0xf;
  local_cd0 = 0xf;
  local_cc0 = 0x1e;
  local_cdc = 0;
  local_ccc = 0;
  local_cbc = 0;
  local_cf8 = &DAT_3b9aca00;
  local_db0 = 2;
  local_db8 = (Elf32_Ehdr *)0x0;
  local_dc0 = (Elf32_Ehdr *)0x0;
  local_dc8 = 0;
  local_dd0 = 0;
  local_ce8 = 0;
  local_cd8 = 0;
  local_cc8 = 0;
  local_c78 = &DAT_3b9aca00;
  local_c88 = &DAT_3b9aca00;
  local_c98 = &DAT_3b9aca00;
  local_ca8 = &DAT_3b9aca00;
  local_cb8 = 0;
  local_c34 = 3;
  local_c40 = local_120;
  local_fd0 = (byte *)&local_98;
  local_c44 = (Elf32_Ehdr *)local_c0;
  local_c3c = local_11c;
  local_c48 = 0;
  local_c50 = 0;
  local_c38 = local_118;
  local_c30 = local_98;
  pEStack_c2c = local_94;
  pEStack_c28 = local_90;
  pEStack_c24 = local_8c;
  local_c20 = local_88;
  uStack_c1c = uStack_84;
  pEStack_c18 = (Elf32_Ehdr *)local_ba0._0_4_;
  pEStack_c14 = (Elf32_Ehdr *)local_ba0._4_4_;
  pEStack_c10 = local_b98;
  local_c04 = local_a8;
  local_c08 = local_ac;
  local_c0c = local_b0;
  local_bd8 = 0;
  local_bf4 = local_b90;
  local_bf0 = local_b8c;
  uStack_bd0 = 0x101;
  local_bec = local_b88;
  uStack_bb0 = 0x404;
  local_bce = 0;
  local_bd4 = 0x10101;
  local_bdc = 0xffffffff;
  local_be8 = 0x80000000;
  local_bca = 0;
  local_bc5 = 0x2000001;
  local_bc6 = 0;
  local_bc1 = 2;
  local_c60 = local_fb0;
  local_c5c = local_fa0;
  local_c58 = local_fa4;
  local_c54 = local_fa8;
  local_210 = pEStack_c74;
  local_20c = pEStack_c70;
  local_208 = pEStack_c6c;
  local_204 = pEStack_c68;
  local_200 = pEStack_c64;
  _dStack_1b8 = _local_e70;
  _pEStack_e20 = _local_e70;
  local_620 = (Elf32_Ehdr *)thunk_FUN_016d4a50(0xc10);
  if (local_620 == (Elf32_Ehdr *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xc10);
  }
  local_620[0x3b].e_ident_class = 0;
  local_620[0x3b].e_ident_data = 0;
  local_620[0x3b].e_ident_version = 0;
  local_620[0x3b].e_ident_osabi = 0;
  local_620[0x3b].e_ident_abiversion = 0;
  local_620[0x3b].e_ident_pad[0] = 0;
  local_620[0x3b].e_ident_pad[1] = 0;
  local_620[0x3b].e_ident_pad[2] = 0;
  local_620[0x3b].e_ident_pad[3] = 0;
  local_620[0x3b].e_ident_pad[4] = 0;
  local_620[0x3b].e_ident_pad[5] = 0;
  local_620[0x3b].e_ident_pad[6] = 0;
  local_620[0x3b].e_type = 0;
  local_620[0x3b].e_machine = 0;
  local_63c = (Elf32_Ehdr *)&DAT_00000001;
  local_640 = (undefined1  [4])&DAT_00000001;
  local_5bc = 1;
  local_5c8 = 0;
  local_5e0 = (undefined *)0x0;
  local_5f8 = 0;
  local_600 = (Elf32_Ehdr *)0x0;
  local_61c = (Elf32_Ehdr *)0x0;
  local_5dc[0] = 0;
  local_5dc[1] = 0;
  local_5dc[2] = 0;
  local_5dc[3] = 0;
  local_5dc[4] = 0;
  local_5dc[5] = 0;
  local_5dc[6] = 0;
  local_5dc[7] = 0;
  local_5d4 = 0;
  local_5b8 = 0;
  local_5c0 = 0;
  local_5c4 = 0;
  local_8f0._0_4_ = (Elf32_Ehdr *)0x0;
  local_5d0 = local_620;
  local_5cc = local_620;
  iVar20 = FUN_016d51b0(local_8f0,0x20,0xa0);
  uVar56 = local_8f0._0_4_;
  if ((iVar20 != 0) || ((Elf32_Ehdr *)local_8f0._0_4_ == (Elf32_Ehdr *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(0x20,0xa0);
  }
  local_fbc = (Elf32_Ehdr *)&local_5e0;
  FUN_016dd1aa(local_8f0._0_4_,(Elf32_Ehdr *)local_640,0xa0);
  do {
    uVar21 = *(uint *)uVar56;
    bVar73 = (bool)hasExclusiveAccess(uVar56);
  } while (!bVar73);
  *(uint *)uVar56 = uVar21 + 1;
  if ((int)uVar21 < 0) goto LAB_01222774;
  local_ba8 = (Elf32_Ehdr *)uVar56;
  local_620 = (Elf32_Ehdr *)0x0;
  local_638 = (undefined1  [4])0x0;
  local_63c = (Elf32_Ehdr *)&DAT_00000001;
  local_640 = (undefined1  [4])&DAT_00000001;
  pEVar22 = (Elf32_Ehdr *)thunk_FUN_016d4a50(0x24);
  if (pEVar22 == (Elf32_Ehdr *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x24);
  }
  pEVar22->e_ident_magic_num = local_640[0];
  pEVar22->e_ident_magic_str[0] = local_640[1];
  pEVar22->e_ident_magic_str[1] = local_640[2];
  pEVar22->e_ident_magic_str[2] = local_640[3];
  *(Elf32_Ehdr **)&pEVar22->e_ident_class = local_63c;
  *(undefined2 *)&pEVar22->e_ident_abiversion = local_638._0_2_;
  *(undefined2 *)(pEVar22->e_ident_pad + 1) = local_638._2_2_;
  *(Elf32_Ehdr **)((int)pEVar22->e_ident_pad + 3) = local_634;
  *(Elf32_Ehdr **)&pEVar22->e_type = local_630;
  pEVar22->e_version = (dword)local_62c;
  pEVar22->e_entry = (dword)local_628;
  pEVar22->e_phoff = (dword)local_624;
  pEVar22->e_shoff = (dword)local_620;
  do {
    uVar21 = *(uint *)pEVar22;
    bVar73 = (bool)hasExclusiveAccess(pEVar22);
  } while (!bVar73);
  *(uint *)pEVar22 = uVar21 + 1;
  local_fcc = &local_8e8;
  local_fb4 = (Elf32_Ehdr *)local_640;
  local_f9c = pEVar22;
  if ((int)uVar21 < 0) goto LAB_01222774;
  local_fc0 = (Elf32_Ehdr *)local_ad8;
  local_ba4 = pEVar22;
  local_fac = (Elf32_Ehdr *)thunk_FUN_016d4a50(0x1d);
  if (local_fac == (Elf32_Ehdr *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x1d);
  }
  FUN_016dd1aa(local_fac,"reqwest-internal-sync-runtime",0x1d);
  local_b90 = (Elf32_Ehdr *)local_1d0._0_4_;
  local_b8c = (Elf32_Ehdr *)local_1d0._4_4_;
  local_b88 = local_1c8;
  pEStack_b84 = local_1c4;
  local_b80 = local_1c0;
  local_b7c = local_1bc;
  local_b70 = pEStack_1b0;
  local_b6c = pEStack_1ac;
  local_b68 = local_1a8;
  local_b64 = pEStack_1a4;
  local_b60 = pEStack_1a0;
  local_b5c = pEStack_19c;
  local_b58 = pEStack_198;
  pEStack_b54 = pEStack_194;
  local_b50 = (Elf32_Ehdr *)&DAT_00000001;
  local_b4c = (Elf32_Ehdr *)0x3;
  local_b48 = local_110;
  pEStack_b44 = local_10c;
  pEStack_b40 = local_108;
  local_b3c = pEStack_104;
  local_b38 = local_100;
  local_b34 = pEStack_fc;
  local_b30 = pEStack_f8;
  pEStack_b2c = pEStack_f4;
  local_a48 = 0x5a;
  uStack_a44 = 0;
  local_a38 = 0xf;
  local_a28 = 0xf;
  local_a18 = 0x1e;
  local_a34 = 0;
  local_a24 = 0;
  local_a14 = 0;
  local_a50 = &DAT_3b9aca00;
  local_b08 = 2;
  local_b10 = (Elf32_Ehdr *)0x0;
  local_b18 = (Elf32_Ehdr *)0x0;
  local_b20 = (Elf32_Ehdr *)0x0;
  local_b28 = (Elf32_Ehdr *)0x0;
  local_a40 = 0;
  local_a30 = 0;
  local_a20 = 0;
  local_9d0 = &DAT_3b9aca00;
  local_9e0 = &DAT_3b9aca00;
  local_9f0 = &DAT_3b9aca00;
  local_a00 = &DAT_3b9aca00;
  local_a10 = 0;
  pEStack_9cc = local_210;
  pEStack_9c8 = local_20c;
  pEStack_9c4 = local_208;
  pEStack_9c0 = local_204;
  pEStack_9bc = local_200;
  local_9b8 = local_fb0;
  local_9b4 = local_fa0;
  local_9b0 = local_fa4;
  local_9ac = local_fa8;
  local_98c = 3;
  local_998 = local_bc;
  local_99c = (Elf32_Ehdr *)local_c0;
  local_9a0 = 0;
  local_9a8 = 0;
  local_994 = local_b8;
  local_990 = local_b4;
  local_988 = local_98;
  pEStack_984 = local_94;
  pEStack_980 = local_90;
  pEStack_97c = local_8c;
  local_978 = local_88;
  uStack_974 = uStack_84;
  pEStack_970 = local_80;
  pEStack_96c = pEStack_7c;
  pEStack_968 = pEStack_78;
  local_95c = local_e90;
  local_960 = (Elf32_Ehdr *)local_e98._4_4_;
  local_964 = (Elf32_Ehdr *)local_e98._0_4_;
  local_950 = local_ea0;
  local_958 = local_ea8;
  local_954 = local_ea4;
  local_94c = local_eb8;
  local_948 = pEStack_eb4;
  uStack_928 = 0x101;
  local_944 = pEStack_eb0;
  uStack_908 = 0x404;
  local_92c = 0x10101;
  local_934 = 0xffffffff;
  local_940 = 0x80000000;
  local_91d = 0x2000001;
  local_91e = local_ec0;
  local_930 = 0;
  local_900 = (Elf32_Ehdr *)uVar56;
  local_919 = 2;
  local_926 = local_ec8;
  local_922 = local_ec4;
  local_118 = (Elf32_Ehdr *)0x1d;
  local_11c = local_fac;
  local_120 = (Elf32_Ehdr *)&DAT_0000001d;
  local_8fc = pEVar22;
  _local_b78 = _dStack_1b8;
  if (DAT_018dd980 == (char *)0x0) {
    FUN_015e9334(local_8f0,"RUST_MIN_STACK",0xe);
    uVar61 = local_8f0._4_4_;
    uVar60 = local_8f0._0_4_;
    pEVar22 = &Elf32_Ehdr_00200000;
    if ((Elf32_Ehdr *)local_8f0._0_4_ != (Elf32_Ehdr *)&DAT_80000000) {
      FUN_00fab1e0(local_640,local_8f0._4_4_,local_8e8);
      auVar49 = (undefined1  [4])&DAT_00000001;
      if (local_640 != (undefined1  [4])&DAT_00000001) {
        auVar49 = local_638;
      }
      if (local_640 != (undefined1  [4])&DAT_00000001 && auVar49 != (undefined1  [4])0x0) {
        if (auVar49 == (undefined1  [4])&DAT_00000001) {
          bVar42 = (byte)*(word *)&local_63c->e_ident_magic_num;
          if ((bVar42 == 0x2b) || (bVar42 == 0x2d)) goto LAB_0121ecf8;
        }
        else {
          bVar42 = (byte)*(word *)&local_63c->e_ident_magic_num;
        }
        pEVar23 = local_63c;
        if (bVar42 == 0x2b) {
          pEVar23 = (Elf32_Ehdr *)local_63c->e_ident_magic_str;
          auVar49 = (undefined1  [4])((int)&((Elf32_Ehdr *)((int)auVar49 + -0x34))->e_shstrndx + 1);
        }
        if ((Elf32_Ehdr *)&DAT_00000008 < (uint)auVar49) {
          pEVar22 = (Elf32_Ehdr *)0x0;
          do {
            if (auVar49 == (undefined1  [4])0x0) goto LAB_0121ecf8;
            uVar21 = (uint)(ZEXT48(pEVar22) * 10);
            if ((int)(ZEXT48(pEVar22) * 10 >> 0x20) != 0) break;
            uVar36 = (byte)*(word *)&pEVar23->e_ident_magic_num - 0x30;
            pEVar22 = (Elf32_Ehdr *)(uVar36 + uVar21);
            if (9 < uVar36) break;
            auVar49 = (undefined1  [4])
                      ((int)&((Elf32_Ehdr *)((int)auVar49 + -0x34))->e_shstrndx + 1);
            pEVar23 = (Elf32_Ehdr *)pEVar23->e_ident_magic_str;
          } while (!CARRY4(uVar36,uVar21));
LAB_0121fb3c:
          pEVar22 = &Elf32_Ehdr_00200000;
        }
        else {
          pEVar22 = (Elf32_Ehdr *)0x0;
          for (; auVar49 != (undefined1  [4])0x0;
              auVar49 = (undefined1  [4])
                        ((int)&((Elf32_Ehdr *)((int)auVar49 + -0x34))->e_shstrndx + 1)) {
            uVar21 = (byte)*(word *)&pEVar23->e_ident_magic_num - 0x30;
            if (9 < uVar21) goto LAB_0121fb3c;
            pEVar23 = (Elf32_Ehdr *)pEVar23->e_ident_magic_str;
            pEVar22 = (Elf32_Ehdr *)(uVar21 + (int)pEVar22 * 10);
          }
        }
      }
LAB_0121ecf8:
      if ((Elf32_Ehdr *)uVar60 != (Elf32_Ehdr *)0x0) {
        thunk_FUN_016d3fb4(uVar61);
      }
    }
    DAT_018dd980 = pEVar22->e_ident_magic_str;
  }
  else {
    pEVar22 = (Elf32_Ehdr *)(DAT_018dd980 + -1);
  }
  ClearExclusiveLocal();
  do {
    uVar21 = DAT_018dd9a8 + 1;
    uVar36 = DAT_018dd9ac + (0xfffffffe < DAT_018dd9a8);
    if (CARRY4(DAT_018dd9ac,(uint)(0xfffffffe < DAT_018dd9a8))) {
      FUN_015ee8c8();
      goto LAB_01222774;
    }
    bVar73 = (bool)hasExclusiveAccess(0x18dd9a8);
  } while (!bVar73);
  DAT_018dd9a8 = uVar21;
  DAT_018dd9ac = uVar36;
  pEVar23 = (Elf32_Ehdr *)FUN_015f8074(uVar21,uVar36,&local_120);
  local_8f4 = pEVar23;
  FUN_015fc56c(&local_b0,&local_8f4);
  local_634 = (Elf32_Ehdr *)0x0;
  local_638 = (undefined1  [4])0x0;
  local_63c = (Elf32_Ehdr *)&DAT_00000001;
  local_640 = (undefined1  [4])&DAT_00000001;
  pEVar24 = (Elf32_Ehdr *)thunk_FUN_016d4a50(0x18);
  if (pEVar24 == (Elf32_Ehdr *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  cVar62 = local_fb4->e_ident_magic_str[0];
  cVar19 = local_fb4->e_ident_magic_str[1];
  cVar5 = local_fb4->e_ident_magic_str[2];
  wVar6 = *(word *)&local_fb4->e_ident_class;
  wVar7 = *(word *)&local_fb4->e_ident_version;
  wVar8 = *(word *)&local_fb4->e_ident_abiversion;
  wVar9 = *(word *)(local_fb4->e_ident_pad + 1);
  dVar48 = *(dword *)(local_fb4->e_ident_pad + 3);
  dVar54 = *(dword *)&local_fb4->e_type;
  dVar58 = local_fb4->e_version;
  pEVar24->e_ident_magic_num = local_fb4->e_ident_magic_num;
  pEVar24->e_ident_magic_str[0] = cVar62;
  pEVar24->e_ident_magic_str[1] = cVar19;
  pEVar24->e_ident_magic_str[2] = cVar5;
  *(word *)&pEVar24->e_ident_class = wVar6;
  *(word *)&pEVar24->e_ident_version = wVar7;
  *(word *)&pEVar24->e_ident_abiversion = wVar8;
  *(word *)(pEVar24->e_ident_pad + 1) = wVar9;
  *(dword *)(pEVar24->e_ident_pad + 3) = dVar48;
  *(dword *)&pEVar24->e_type = dVar54;
  pEVar24->e_version = dVar58;
  do {
    uVar21 = *(uint *)pEVar24;
    bVar73 = (bool)hasExclusiveAccess(pEVar24);
  } while (!bVar73);
  *(uint *)pEVar24 = uVar21 + 1;
  local_fa0 = pEVar22;
  if (-1 < (int)uVar21) {
    FUN_016dd1aa(&local_8e0,&local_b90,0x298);
    pEVar22 = local_fa0;
    iVar20 = *(int *)&pEVar24->e_ident_abiversion;
    local_8f0._0_4_ = local_b0;
    local_8f0._4_4_ = local_ac;
    local_8e8 = local_a8;
    local_8e4 = local_a4;
    local_648 = pEVar24;
    if (iVar20 != 0) {
      piVar65 = (int *)(iVar20 + 0xc);
      do {
        iVar43 = *piVar65;
        bVar73 = (bool)hasExclusiveAccess(piVar65);
      } while (!bVar73);
      *piVar65 = iVar43 + 1;
      if (iVar43 < 0) {
        FUN_015f85e4(iVar20 + 8);
        goto LAB_01222774;
      }
    }
    FUN_016dd1aa(local_640,local_8f0,0x2b0);
    pEVar25 = (Elf32_Ehdr *)thunk_FUN_016d4a50(0x2b0);
    if (pEVar25 == (Elf32_Ehdr *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x2b0);
    }
    FUN_016dd1aa(pEVar25,local_8f0,0x2b0);
    do {
      uVar21 = *(uint *)pEVar23;
      bVar73 = (bool)hasExclusiveAccess(pEVar23);
    } while (!bVar73);
    *(uint *)pEVar23 = uVar21 + 1;
    if (-1 < (int)uVar21) {
      local_638 = (undefined1  [4])&DAT_018a6810;
      local_640 = (undefined1  [4])pEVar23;
      local_63c = pEVar25;
      puVar26 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar26 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *puVar26 = local_640;
      puVar26[1] = local_63c;
      puVar26[2] = local_638;
      FUN_015f6af4(local_640,pEVar22);
      pEVar22 = local_63c;
      auVar49 = local_640;
      if (local_640[0] != 4) {
        DataMemoryBarrier(0xb);
        do {
          uVar21 = *(uint *)pEVar24;
          bVar73 = (bool)hasExclusiveAccess(pEVar24);
        } while (!bVar73);
        *(uint *)pEVar24 = uVar21 - 1;
        if (uVar21 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01659070(pEVar24);
        }
        DataMemoryBarrier(0xb);
        do {
          uVar21 = *(uint *)pEVar23;
          bVar73 = (bool)hasExclusiveAccess(pEVar23);
        } while (!bVar73);
        *(uint *)pEVar23 = uVar21 - 1;
        if (uVar21 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015e92c0(pEVar23);
        }
        local_8f0._4_4_ = pEVar22;
        local_8f0._0_4_ = auVar49;
        local_640 = (undefined1  [4])((uint)local_640 & 0xffff0000);
        uVar21 = FUN_014c98b0(local_640,local_8f0);
        pEVar22 = local_f9c;
        pdVar70 = &local_f9c->e_shoff;
        do {
          uVar36 = *pdVar70;
          bVar73 = (bool)hasExclusiveAccess(pdVar70);
        } while (!bVar73);
        *pdVar70 = uVar36 | 4;
        DataMemoryBarrier(0xb);
        if ((uVar36 & 10) == 8) {
          (**(code **)(*(int *)&local_f9c->e_type + 8))(local_f9c->e_version);
        }
        if ((uVar36 & 2) != 0) {
          iVar27._0_2_ = *(undefined2 *)&pEVar22->e_ident_abiversion;
          iVar27._2_2_ = *(undefined2 *)(pEVar22->e_ident_pad + 1);
          iVar20 = *(int *)((int)pEVar22->e_ident_pad + 3);
          pEVar22->e_ident_abiversion = 0;
          pEVar22->e_ident_pad[0] = 0;
          pEVar22->e_ident_pad[1] = 0;
          pEVar22->e_ident_pad[2] = 0;
          if (iVar27 != 0 && iVar20 != 0) {
            FUN_0145d684(iVar20);
          }
        }
        DataMemoryBarrier(0xb);
        do {
          uVar36 = *(uint *)pEVar22;
          bVar73 = (bool)hasExclusiveAccess(pEVar22);
        } while (!bVar73);
        *(uint *)pEVar22 = uVar36 - 1;
        if (uVar36 == 1) {
          DataMemoryBarrier(0xb);
          FUN_014a45ec(pEVar22);
        }
LAB_0121f2fc:
        FUN_0148f928(uVar56);
        DataMemoryBarrier(0xb);
        do {
          uVar36 = *(uint *)uVar56;
          bVar73 = (bool)hasExclusiveAccess(uVar56);
        } while (!bVar73);
        *(uint *)uVar56 = uVar36 - 1;
        if (uVar36 == 1) {
          DataMemoryBarrier(0xb);
          FUN_014a44c0(uVar56);
        }
        local_fb8[1] = 0;
        local_fb8[2] = uVar21;
        *local_fb8 = 3;
        return;
      }
      local_b98 = local_63c;
      local_ba0._0_4_ = pEVar23;
      local_ba0._4_4_ = pEVar24;
      uVar74 = thunk_FUN_016de0ee(local_63c,0x248);
      uVar21 = *(uint *)((int)uVar74 + (int)((ulonglong)uVar74 >> 0x20));
      if (uVar21 < 3) {
        piVar65 = (int *)FUN_015f7ed0();
        puVar26 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      }
      else {
        piVar65 = (int *)(uVar21 - 8);
        do {
          iVar20 = *piVar65;
          bVar73 = (bool)hasExclusiveAccess(piVar65);
        } while (!bVar73);
        *piVar65 = iVar20 + 1;
        if (iVar20 < 0) goto LAB_01222774;
        puVar26 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      }
      if (puVar26 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *puVar26 = 1;
      puVar26[1] = 1;
      puVar26 = puVar26 + 2;
      *puVar26 = piVar65;
      uVar74 = thunk_FUN_016de0ee(1,0x40);
      iVar20 = (int)uVar74 + (int)((ulonglong)uVar74 >> 0x20);
      pdVar70 = &local_f9c->e_shoff;
LAB_0121ef80:
      if (*(char *)(iVar20 + 0x38) == '\x01') {
LAB_0121efc4:
        cVar62 = *(char *)(iVar20 + 0x31);
        uVar21 = (uint)*(byte *)(iVar20 + 0x30);
        cVar19 = cVar62;
        if (uVar21 == 1) {
          if (cVar62 != '\0') {
            cVar19 = cVar62 + -1;
            goto LAB_0121efe4;
          }
          FUN_016455a4(&DAT_018a4964,puVar26);
          goto LAB_0121ef7c;
        }
LAB_0121efe4:
        *(char *)(iVar20 + 0x31) = cVar19;
        uVar36 = *pdVar70;
        DataMemoryBarrier(0xb);
        if ((uVar36 & 2) == 0) goto LAB_0121eff8;
        goto LAB_0121f238;
      }
      uVar21 = 0;
      cVar62 = '\0';
      if (*(char *)(iVar20 + 0x38) != '\x02') {
        FUN_015e8e6c(iVar20,FUN_0148592c);
        *(undefined1 *)(iVar20 + 0x38) = 1;
        goto LAB_0121efc4;
      }
      uVar36 = *pdVar70;
      DataMemoryBarrier(0xb);
      if ((uVar36 & 2) != 0) goto LAB_0121f238;
LAB_0121eff8:
      if ((uVar36 & 4) != 0) {
        uVar36 = 1;
        goto LAB_0121f24c;
      }
      if ((uVar36 & 1) == 0) {
LAB_0121f068:
        uVar74 = FUN_0147518c(puVar26);
        local_f9c->e_entry = (int)uVar74;
        local_f9c->e_phoff = (int)((ulonglong)uVar74 >> 0x20);
        DataMemoryBarrier(0xb);
        do {
          uVar36 = *pdVar70;
          bVar73 = (bool)hasExclusiveAccess(pdVar70);
        } while (!bVar73);
        *pdVar70 = uVar36 | 1;
        DataMemoryBarrier(0xb);
        if ((uVar36 & 2) != 0) goto LAB_0121f238;
LAB_0121f09c:
        if (uVar21 != 0) {
          if (*(char *)(iVar20 + 0x38) != '\x01') {
            if (*(char *)(iVar20 + 0x38) == '\x02') goto LAB_0121ef7c;
            FUN_015e8e6c(iVar20,FUN_01655ec4);
            *(undefined1 *)(iVar20 + 0x38) = 1;
          }
          *(char *)(iVar20 + 0x31) = cVar62;
          *(undefined1 *)(iVar20 + 0x30) = 1;
        }
LAB_0121ef7c:
        FUN_015fbbf8();
        goto LAB_0121ef80;
      }
      if (((undefined4 *)local_f9c->e_phoff == puVar26) &&
         ((undefined *)local_f9c->e_entry == &DAT_018a4964)) goto LAB_0121f09c;
      DataMemoryBarrier(0xb);
      do {
        uVar36 = *pdVar70;
        bVar73 = (bool)hasExclusiveAccess(pdVar70);
      } while (!bVar73);
      *pdVar70 = uVar36 & 0xfffffffe;
      DataMemoryBarrier(0xb);
      if ((uVar36 & 2) == 0) {
        (**(code **)(local_f9c->e_entry + 0xc))(local_f9c->e_phoff);
        goto LAB_0121f068;
      }
      DataMemoryBarrier(0xb);
      do {
        bVar73 = (bool)hasExclusiveAccess(pdVar70);
      } while (!bVar73);
      *pdVar70 = *pdVar70 | 1;
      DataMemoryBarrier(0xb);
LAB_0121f238:
      uVar36._0_2_ = *(undefined2 *)&local_f9c->e_ident_abiversion;
      uVar36._2_2_ = *(undefined2 *)(local_f9c->e_ident_pad + 1);
      uVar21 = *(uint *)((int)local_f9c->e_ident_pad + 3);
      local_f9c->e_ident_abiversion = 0;
      local_f9c->e_ident_pad[0] = 0;
      local_f9c->e_ident_pad[1] = 0;
      local_f9c->e_ident_pad[2] = 0;
      uVar36 = uVar36 ^ 1;
LAB_0121f24c:
      DataMemoryBarrier(0xb);
      do {
        uVar28 = *(uint *)local_f9c;
        bVar73 = (bool)hasExclusiveAccess(local_f9c);
      } while (!bVar73);
      *(uint *)local_f9c = uVar28 - 1;
      if (uVar28 == 1) {
        DataMemoryBarrier(0xb);
        FUN_014a45ec(local_f9c);
      }
      FUN_009c3fc4(puVar26);
      if (uVar36 != 0) {
        FUN_014eb6cc();
        goto LAB_01222774;
      }
      if (uVar21 != 0) {
        FUN_016dea68(local_b98);
        DataMemoryBarrier(0xb);
        do {
          uVar36 = *(uint *)local_ba0._0_4_;
          bVar73 = (bool)hasExclusiveAccess(local_ba0._0_4_);
        } while (!bVar73);
        *(uint *)local_ba0._0_4_ = uVar36 - 1;
        if (uVar36 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015e92c0(local_ba0._0_4_);
        }
        DataMemoryBarrier(0xb);
        do {
          uVar36 = *(uint *)local_ba0._4_4_;
          bVar73 = (bool)hasExclusiveAccess(local_ba0._4_4_);
        } while (!bVar73);
        *(uint *)local_ba0._4_4_ = uVar36 - 1;
        if (uVar36 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01659070(local_ba0._4_4_);
        }
        goto LAB_0121f2fc;
      }
      local_638 = (undefined1  [4])uVar56;
      local_634 = (Elf32_Ehdr *)local_ba0._0_4_;
      local_63c = (Elf32_Ehdr *)&DAT_00000001;
      local_640 = (undefined1  [4])&DAT_00000001;
      local_62c = local_b98;
      local_630 = (Elf32_Ehdr *)local_ba0._4_4_;
      pEVar22 = (Elf32_Ehdr *)thunk_FUN_016d4a50(0x18);
      if (pEVar22 == (Elf32_Ehdr *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x18);
      }
      pEVar22->e_ident_magic_num = local_640[0];
      pEVar22->e_ident_magic_str[0] = local_640[1];
      pEVar22->e_ident_magic_str[1] = local_640[2];
      pEVar22->e_ident_magic_str[2] = local_640[3];
      *(Elf32_Ehdr **)&pEVar22->e_ident_class = local_63c;
      *(undefined2 *)&pEVar22->e_ident_abiversion = local_638._0_2_;
      *(undefined2 *)(pEVar22->e_ident_pad + 1) = local_638._2_2_;
      *(Elf32_Ehdr **)((int)pEVar22->e_ident_pad + 3) = local_634;
      *(Elf32_Ehdr **)&pEVar22->e_type = local_630;
      pEVar22->e_version = (dword)local_62c;
      local_b88 = (Elf32_Ehdr *)0x0;
      local_b90 = (Elf32_Ehdr *)0x0;
      local_b80 = (Elf32_Ehdr *)0x0;
      FUN_016b18bc(local_8f0,&local_b90,local_fc8,local_fc4);
      pEVar18 = pEStack_8b4;
      pEVar17 = pEStack_8b8;
      pEVar16 = pEStack_8bc;
      pEVar29 = local_8c0;
      pEVar15 = local_8c4;
      pEVar14 = local_8c8;
      pEVar13 = local_8cc;
      pEVar12 = local_8d0;
      pEVar11 = local_8d4;
      pEVar10 = local_8d8;
      pEVar30 = local_8dc;
      pEVar46 = local_8e0;
      pEVar25 = local_8e4;
      pEVar24 = local_8e8;
      pEVar23 = (Elf32_Ehdr *)local_8f0._4_4_;
      uVar56 = local_8f0._0_4_;
      if ((Elf32_Ehdr *)local_8f0._0_4_ == (Elf32_Ehdr *)&SUB_00000002) {
        local_b90 = (Elf32_Ehdr *)((uint)local_b90 & 0xffff0000);
        pEVar29 = (Elf32_Ehdr *)FUN_014c99d0(&local_b90,(uint)(byte)local_8f0[4]);
        pEVar23 = extraout_r12;
LAB_0121f4b0:
        pEVar24 = (Elf32_Ehdr *)0x3;
        bVar73 = true;
      }
      else {
        local_638 = (undefined1  [4])local_8e8;
        local_634 = local_8e4;
        local_630 = local_8e0;
        local_62c = local_8dc;
        local_628 = local_8d8;
        local_624 = local_8d4;
        local_620 = local_8d0;
        local_61c = local_8cc;
        local_618 = local_8c8;
        local_614 = local_8c4;
        local_610 = local_8c0;
        local_60c = pEStack_8bc;
        local_608 = pEStack_8b8;
        pEStack_604 = pEStack_8b4;
        local_600 = pEStack_8b0;
        local_5fc = pEStack_8ac;
        local_60c._0_1_ = (byte)pEStack_8bc;
        local_63c = (Elf32_Ehdr *)local_8f0._4_4_;
        local_640 = (undefined1  [4])local_8f0._0_4_;
        local_60c = pEVar16;
        if ((byte)local_60c == 0) {
          pEVar29 = (Elf32_Ehdr *)FUN_014c9680(local_640);
          pEVar23 = extraout_r12_00;
          goto LAB_0121f4b0;
        }
        local_8f0._0_4_ = local_8e8;
        local_8f0._4_4_ = local_8e4;
        local_8e8 = local_8e0;
        local_8e4 = local_8dc;
        local_8e0 = local_8d8;
        local_8dc = local_8d4;
        local_8d8 = local_8d0;
        local_8d4 = local_8cc;
        local_8d0 = local_8c8;
        local_8cc = local_8c4;
        local_8c8 = local_8c0;
        local_8c4 = pEStack_8bc;
        local_8c0 = pEStack_8b8;
        pEStack_8bc = pEStack_8b4;
        pEStack_8b8 = pEStack_8b0;
        pEStack_8b4 = pEStack_8ac;
        local_e38 = pEVar24;
        local_e34 = pEVar25;
        local_e30 = pEVar46;
        local_e2c = pEVar30;
        local_e28 = pEVar10;
        local_e24 = pEVar11;
        dStack_e1c = (dword)pEVar13;
        pEStack_e20 = pEVar12;
        pEStack_e18 = pEVar14;
        pEStack_e14 = pEVar15;
        local_e10 = pEVar29;
        pEStack_e0c = pEVar16;
        pEStack_e08 = pEVar17;
        pEStack_e04 = pEVar18;
        pEStack_e00 = pEStack_8b0;
        pEStack_dfc = pEStack_8ac;
        bVar73 = false;
        pEVar24 = (Elf32_Ehdr *)0x0;
      }
      do {
        uVar21 = *(uint *)pEVar22;
        bVar4 = (bool)hasExclusiveAccess(pEVar22);
      } while (!bVar4);
      *(uint *)pEVar22 = uVar21 + 1;
      if ((int)uVar21 < 0) goto LAB_01222774;
      local_ac0 = 0x1e;
      local_b50 = (Elf32_Ehdr *)uVar56;
      local_b8c = (Elf32_Ehdr *)0x0;
      local_ab8 = (Elf32_Ehdr *)0x0;
      local_abc = 0;
      local_b58 = (Elf32_Ehdr *)((uint)local_b58 & 0xffff0000);
      local_b5c = (Elf32_Ehdr *)0x0;
      local_b60 = (Elf32_Ehdr *)&DAT_00000004;
      local_b64 = (Elf32_Ehdr *)0x0;
      local_b68 = (Elf32_Ehdr *)0x0;
      local_b6c = (Elf32_Ehdr *)&DAT_00000004;
      local_b70 = (Elf32_Ehdr *)0x0;
      local_b74 = 0;
      local_b78 = &SUB_00000002;
      local_b48 = local_e38;
      pEStack_b44 = local_e34;
      pEStack_b40 = local_e30;
      local_b3c = local_e2c;
      local_b38 = local_e28;
      local_b34 = local_e24;
      local_b28 = pEStack_e18;
      pEStack_b24 = pEStack_e14;
      local_b20 = local_e10;
      pEStack_b1c = pEStack_e0c;
      local_b18 = pEStack_e08;
      pEStack_b14 = pEStack_e04;
      local_b10 = pEStack_e00;
      pEStack_b0c = pEStack_dfc;
      local_af3 = 0;
      local_ab0 = pEVar22;
      local_fc0->e_ident_magic_num = 3;
      local_fc0->e_ident_magic_str[0] = '\0';
      local_fc0->e_ident_magic_str[1] = '\0';
      local_fc0->e_ident_magic_str[2] = '\0';
      *(uint *)((int)local_fc0 + 4) = 0;
      local_b08 = 0;
      local_af1 = 0;
      local_af0 = 0;
      local_aec = 0;
      local_ae8 = 0;
      local_ae4 = 0;
      local_ae0 = 0;
      pdVar70 = (dword *)&pEStack_b84;
      local_af4 = 1;
      local_adc = 2;
      local_f9c = pEVar22;
      local_b90 = pEVar24;
      local_b88 = pEVar29;
      local_b4c = pEVar23;
      _local_b30 = _pEStack_e20;
      if (bVar73) {
LAB_0121f618:
        auVar59 = (undefined1  [4])local_b88;
        pEVar23 = local_b8c;
        auVar49 = (undefined1  [4])local_b90;
        pEVar22 = local_fc0;
        puVar31 = (uint *)((int)local_fc0 + 0x18);
        FUN_016dd1aa(auStack_f90,pdVar70,0xc4);
        local_570 = *puVar31;
        uStack_56c = *(uint *)((int)pEVar22 + 0x1c);
        pEStack_818 = local_ab8;
        local_560 = local_ab0;
LAB_0121f648:
        pEVar24 = local_560;
        local_f98 = local_570;
        local_f94 = uStack_56c;
      }
      else {
        if (pEStack_e20 != (Elf32_Ehdr *)0x0) {
          if (pEStack_e20 < local_e28) {
            if (pEStack_e20->e_ident_magic_str[(int)(local_e2c->e_ident_magic_str + -2)] < -0x40)
            goto LAB_0121f5cc;
          }
          else if (local_e28 != pEStack_e20) {
LAB_0121f5cc:
            local_1060[0] = &DAT_018af080;
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac();
          }
        }
        if ((uint)((int)local_e28 - (int)pEStack_e20) < 3) goto LAB_0121f618;
        iVar20 = thunk_FUN_016dd50a(&DAT_00418646,
                                    pEStack_e20->e_ident_magic_str +
                                    (int)(local_e2c->e_ident_magic_str + -2),3);
        if (iVar20 != 0) goto LAB_0121f618;
        uVar74 = FUN_016b39e8(&local_b50);
        FUN_01287164(local_8f0,(int)uVar74,(int)uVar74 + (int)((ulonglong)uVar74 >> 0x20));
        auVar59 = (undefined1  [4])local_8e8;
        pEVar22 = (Elf32_Ehdr *)local_8f0._4_4_;
        auVar49 = (undefined1  [4])local_8f0._0_4_;
        if ((Elf32_Ehdr *)local_8f0._0_4_ != (Elf32_Ehdr *)&DAT_80000000) {
          FUN_00fab1e0(local_640,local_8f0._4_4_,local_8e8);
          if (local_640 == (undefined1  [4])0x0) goto LAB_01221990;
LAB_01221abc:
          if (auVar49 != (undefined1  [4])0x0) {
            thunk_FUN_016d3fb4(pEVar22);
          }
          goto LAB_0121f618;
        }
        FUN_00fab1e0(local_640,local_8f0._4_4_,local_8e8);
        auVar49 = local_638;
        pEVar23 = local_63c;
        if (local_640 == (undefined1  [4])&DAT_00000001) goto LAB_0121f618;
        if (local_638 == (undefined1  [4])0x0) {
          pEVar22 = (Elf32_Ehdr *)&DAT_00000001;
        }
        else {
          pEVar22 = (Elf32_Ehdr *)thunk_FUN_016d4a50(local_638);
          if (pEVar22 == (Elf32_Ehdr *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,auVar49);
          }
        }
        FUN_016dd1aa(pEVar22,pEVar23,auVar49);
        auVar59 = auVar49;
LAB_01221990:
        uVar74 = FUN_016b3890(&local_b50);
        iVar20 = (int)uVar74;
        bVar73 = true;
        auVar64 = (undefined1  [4])&DAT_80000000;
        if (iVar20 != 0) {
          FUN_01287164(local_8f0,iVar20,iVar20 + (int)((ulonglong)uVar74 >> 0x20));
          auVar64 = (undefined1  [4])local_8f0._0_4_;
          if ((Elf32_Ehdr *)local_8f0._0_4_ == (Elf32_Ehdr *)&DAT_80000000) {
            FUN_00fab1e0(local_640);
            auVar64 = local_638;
            if (local_640 == (undefined1  [4])&DAT_00000001) goto LAB_01221a3c;
            if (local_638 == (undefined1  [4])0x0) {
              pEVar24 = (Elf32_Ehdr *)&DAT_00000001;
              pEVar23 = local_63c;
            }
            else {
              local_fa0 = local_63c;
              pEVar24 = (Elf32_Ehdr *)thunk_FUN_016d4a50();
              if (pEVar24 == (Elf32_Ehdr *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(1,auVar64);
              }
              pEVar23 = local_fa0;
            }
            local_fa4 = pEVar24;
            FUN_016dd1aa(pEVar24,pEVar23,auVar64);
            local_fa0 = (Elf32_Ehdr *)auVar64;
          }
          else {
            local_fa4 = (Elf32_Ehdr *)local_8f0._4_4_;
            local_fa0 = local_8e8;
            FUN_00fab1e0(local_640);
            if (local_640 != (undefined1  [4])0x0) {
              if (auVar64 != (undefined1  [4])0x0) {
                thunk_FUN_016d3fb4(local_fa4);
              }
LAB_01221a3c:
              auVar64 = (undefined1  [4])&DAT_80000000;
              bVar73 = true;
              goto LAB_01221aac;
            }
          }
          bVar73 = auVar64 == (undefined1  [4])&DAT_80000000;
        }
LAB_01221aac:
        if ((auVar59 == (undefined1  [4])0x0) && (bVar73)) goto LAB_01221abc;
        iVar20 = FUN_016b30fc(&local_b50);
        if (iVar20 != 0) {
          local_1060[0] = &DAT_018a46b8;
          pcVar35 = "has_authority means set_username shouldn\'t fail";
LAB_01222598:
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(pcVar35,0x2f,&local_120,&DAT_018a44e4);
        }
        iVar20 = FUN_016b2eac(&local_b50);
        if (iVar20 != 0) {
          local_1060[0] = &DAT_018a46c8;
          pcVar35 = "has_authority means set_password shouldn\'t fail";
          goto LAB_01222598;
        }
        if (auVar49 == (undefined1  [4])&DAT_80000000) goto LAB_0121f618;
        local_fa8 = (Elf32_Ehdr *)auVar64;
        local_c0 = auVar49;
        local_bc = pEVar22;
        local_b8 = (Elf32_Ehdr *)auVar59;
        FUN_016dd1aa(local_8f0,&local_b90,0xe8);
        local_94 = (Elf32_Ehdr *)thunk_FUN_016d4a50(6);
        if (local_94 == (Elf32_Ehdr *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,6);
        }
        local_94->e_ident_magic_num = 0x42;
        local_94->e_ident_magic_str[0] = 'a';
        local_94->e_ident_magic_str[1] = 's';
        local_94->e_ident_magic_str[2] = 'i';
        *(word *)&local_94->e_ident_class = 0x2063;
        uStack_230 = 0;
        local_98 = (Elf32_Ehdr *)&DAT_00000006;
        local_90 = (Elf32_Ehdr *)&DAT_00000006;
        local_22e = 0;
        FUN_016dd606(local_640,0,0x400);
        local_234 = &DAT_00408a19;
        local_240 = &local_98;
        local_1d0._0_4_ = local_c0;
        local_22d = 0;
        local_238 = 0;
        local_23c = 0;
        local_1d0._4_4_ = &DAT_006043a8;
        FUN_0145e3c4(&local_110,local_640,&DAT_005873a4,(Elf32_Ehdr *)local_1d0);
        pEVar23 = local_10c;
        pEVar22 = local_fa0;
        if ((((uint)local_110 & 0xff) < 5) && (((uint)local_110 & 0xff) != 3)) {
          if (local_fa8 != (Elf32_Ehdr *)&DAT_80000000) goto LAB_01221bf4;
        }
        else {
          local_fac = *(Elf32_Ehdr **)local_10c;
          puVar26 = *(undefined4 **)&local_10c->e_ident_class;
          pcVar41 = (code *)*puVar26;
          if (pcVar41 != (code *)0x0) {
            (*pcVar41)(local_fac);
          }
          if (puVar26[1] != 0) {
            thunk_FUN_016d3fb4(local_fac);
          }
          thunk_FUN_016d3fb4(pEVar23);
          if (local_fa8 != (Elf32_Ehdr *)&DAT_80000000) {
LAB_01221bf4:
            local_1c8 = pEVar22;
            local_1d0._4_4_ = local_fa4;
            local_10c = (Elf32_Ehdr *)&DAT_006043a8;
            local_1d0._0_4_ = local_fa8;
            local_110 = (Elf32_Ehdr *)local_1d0;
            FUN_0145e3c4(&local_210,local_640,&DAT_00590e71,&local_110);
            pEVar22 = local_20c;
            if ((4 < ((uint)local_210 & 0xff)) || (((uint)local_210 & 0xff) == 3)) {
              puVar26 = *(undefined4 **)&local_20c->e_ident_class;
              uVar21._0_1_ = local_20c->e_ident_magic_num;
              uVar21._1_1_ = local_20c->e_ident_magic_str[0];
              uVar21._2_1_ = local_20c->e_ident_magic_str[1];
              uVar21._3_1_ = local_20c->e_ident_magic_str[2];
              pcVar41 = (code *)*puVar26;
              if (pcVar41 != (code *)0x0) {
                (*pcVar41)(uVar21);
              }
              if (puVar26[1] != 0) {
                thunk_FUN_016d3fb4(uVar21);
              }
              thunk_FUN_016d3fb4(pEVar22);
            }
            if ((Elf32_Ehdr *)local_1d0._0_4_ != (Elf32_Ehdr *)0x0) {
              thunk_FUN_016d3fb4(local_1d0._4_4_);
            }
          }
        }
        FUN_0140f108(local_640);
        local_640 = (undefined1  [4])local_98;
        local_63c = local_94;
        local_638 = (undefined1  [4])local_90;
        FUN_00f5ef18(local_1d0,local_640);
        FUN_014a5038(local_640,local_1d0);
        if ((byte)local_630 == 2) {
          local_1060[0] = &DAT_018a4e80;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("base64 is always valid HeaderValue",0x22,&local_120,&DAT_018a62f4);
        }
        local_110 = (Elf32_Ehdr *)local_640;
        local_10c = local_63c;
        local_108 = (Elf32_Ehdr *)local_638;
        pEStack_104 = local_634;
        local_100 = (Elf32_Ehdr *)CONCAT31((int3)((uint)local_630 >> 8),1);
        if (local_c0 != (undefined1  [4])0x0) {
          thunk_FUN_016d3fb4(local_bc);
        }
        FUN_016dd1aa(local_640,local_8f0,0xe8);
        auVar59 = (undefined1  [4])local_8e8;
        pEVar23 = (Elf32_Ehdr *)local_8f0._4_4_;
        auVar49 = (undefined1  [4])local_8f0._0_4_;
        if (local_640 != (undefined1  [4])0x3 || local_63c != (Elf32_Ehdr *)0x0) {
          local_a4 = (Elf32_Ehdr *)0x0;
          local_a8 = (Elf32_Ehdr *)0x0;
          local_ac = (Elf32_Ehdr *)&DAT_00000010;
          local_b0 = (Elf32_Ehdr *)0x0;
          local_98 = local_110;
          local_94 = local_10c;
          local_90 = local_108;
          local_8c = pEStack_104;
          local_88 = CONCAT31((int3)((uint)local_100 >> 8),1);
          iVar20 = FUN_014c18b0(local_640);
          if (iVar20 != 0) {
            (**(code **)&local_98->e_type)(&local_8c,local_94,local_90);
            if (local_b0 != (Elf32_Ehdr *)0x0) {
              (**(code **)&local_b0->e_type)(&local_a4,0x10,0);
            }
LAB_01222714:
            local_1060[0] = &DAT_018a46a8;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_0040929f,0x17,&local_120,&DAT_018a62e4);
          }
          uVar21 = FUN_014c1c00(local_640,&local_b0);
          pEVar23 = local_b0;
          pEVar22 = local_624;
          local_fb4 = local_ac;
          uVar36 = 0;
          local_fac = local_a8;
          pEVar25 = (Elf32_Ehdr *)(uVar21 & 0xffff);
          uVar3 = (ushort)local_608;
          uVar21 = (uint)local_608 & 0xffff;
          local_fb0 = (Elf32_Ehdr *)((uint)local_ac & 0xff);
          local_fa4 = local_628;
          local_fa8 = local_618;
          local_fc4 = local_61c;
          pEVar24 = (Elf32_Ehdr *)(uVar21 & (uint)pEVar25);
          pEVar46 = local_61c;
          local_fc8 = pdVar70;
          local_fa0 = pEVar25;
          while( true ) {
            do {
              pEVar30 = pEVar24;
              pEVar24 = (Elf32_Ehdr *)0x0;
            } while (pEVar22 <= pEVar30);
            pEVar24 = (Elf32_Ehdr *)
                      (uint)*(ushort *)(local_fa4->e_ident_magic_str + (int)pEVar30 * 4 + -1);
            if (pEVar24 == (Elf32_Ehdr *)&DAT_0000ffff) break;
            uVar2 = *(ushort *)(local_fa4->e_ident_magic_str + (int)pEVar30 * 4 + -1 + 2);
            if (((int)pEVar30 - (uint)(uVar3 & uVar2) & uVar21) < uVar36) {
              local_210 = local_b0;
              local_20c = local_ac;
              local_208 = local_a8;
              local_204 = local_a4;
              local_1d0._0_4_ = *(undefined4 *)local_fd0;
              local_1d0._4_4_ = *(undefined4 *)(local_fd0 + 4);
              local_1c8 = *(Elf32_Ehdr **)(local_fd0 + 8);
              local_1c4 = *(Elf32_Ehdr **)(local_fd0 + 0xc);
              local_1c0 = *(Elf32_Ehdr **)(local_fd0 + 0x10);
              bVar73 = local_640 != (undefined1  [4])&SUB_00000002;
              bVar4 = local_63c != (Elf32_Ehdr *)0x0;
              iVar20 = FUN_0145da44(local_640,pEVar25,&local_210);
              if (iVar20 != 0) goto LAB_01222714;
              bVar73 = uVar36 >> 9 != 0 && (bVar73 || bVar4);
              local_fa4 = (Elf32_Ehdr *)(uint)bVar73;
              uVar36 = 0;
              uVar21 = (uint)local_fa8 & 0xffff;
              while( true ) {
                do {
                  pEVar22 = pEVar30;
                  pEVar30 = (Elf32_Ehdr *)0x0;
                } while (local_624 <= pEVar22);
                pcVar35 = local_628->e_ident_magic_str + (int)pEVar22 * 4 + -1;
                uVar3 = *(ushort *)pcVar35;
                uVar2 = (ushort)local_fa0;
                if (uVar3 == 0xffff) break;
                *(ushort *)pcVar35 = (ushort)uVar21;
                local_fa0 = (Elf32_Ehdr *)(uint)*(ushort *)(pcVar35 + 2);
                uVar36 = uVar36 + 1;
                *(ushort *)(pcVar35 + 2) = uVar2;
                uVar21 = (uint)uVar3;
                pEVar30 = (Elf32_Ehdr *)pEVar22->e_ident_magic_str;
              }
              *(ushort *)pcVar35 = (ushort)uVar21;
              *(ushort *)(pcVar35 + 2) = uVar2;
              pEVar22 = local_fc0;
              if ((bVar73 || 0x7f < uVar36) &&
                 (local_640 == (undefined1  [4])0x0 && local_63c == (Elf32_Ehdr *)0x0)) {
                local_63c = (Elf32_Ehdr *)0x0;
                local_640 = (undefined1  [4])&DAT_00000001;
              }
LAB_012221ac:
              auVar59 = local_638;
              pEVar23 = local_63c;
              auVar49 = local_640;
              pdVar70 = local_fc8;
              FUN_016dd1aa(auStack_f90,&local_634,0xc4);
              pEStack_818 = local_568;
              goto LAB_0121f648;
            }
            if ((Elf32_Ehdr *)(uint)uVar2 == pEVar25) {
              if (local_fa8 <= pEVar24) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(pEVar24,local_fa8,&DAT_018a44f4);
              }
              if ((pEVar46[(int)pEVar24].e_shoff != 0) != (pEVar23 == (Elf32_Ehdr *)0x0)) {
                if (pEVar46[(int)pEVar24].e_shoff == 0) {
                  if ((Elf32_Ehdr *)(uint)(byte)pEVar46[(int)pEVar24].e_flags == local_fb0) {
LAB_01221ed0:
                    pEVar25 = local_60c;
                    local_fd4 = pEVar23;
                    pEVar46 = pEVar46 + (int)pEVar24;
                    uVar28._0_1_ = pEVar46->e_ident_magic_num;
                    uVar28._1_1_ = pEVar46->e_ident_magic_str[0];
                    uVar28._2_1_ = pEVar46->e_ident_magic_str[1];
                    uVar28._3_1_ = pEVar46->e_ident_magic_str[2];
                    local_1c4 = pEVar24;
                    if (uVar28 == 1) {
                      pEVar22 = *(Elf32_Ehdr **)&pEVar46->e_ident_abiversion;
                      local_1c0 = *(Elf32_Ehdr **)local_fd0;
                      local_1bc = *(Elf32_Ehdr **)(local_fd0 + 4);
                      dStack_1b8 = *(dword *)(local_fd0 + 8);
                      dStack_1b4 = *(dword *)(local_fd0 + 0xc);
                      pEStack_1b0 = *(Elf32_Ehdr **)(local_fd0 + 0x10);
                      local_1c8 = (Elf32_Ehdr *)0x0;
                      local_1d0._0_4_ = &DAT_00000001;
                      local_1d0._4_4_ = pEVar22;
                      if (local_60c == local_614) {
                        FUN_0102ccf4(&local_614);
                      }
                      pcVar35 = local_610->e_ident_magic_str + (int)pEVar25 * 0x24 + -1;
                      *(undefined4 *)pcVar35 = local_1d0._0_4_;
                      *(undefined4 *)(pcVar35 + 4) = local_1d0._4_4_;
                      *(Elf32_Ehdr **)(pcVar35 + 8) = local_1c8;
                      *(Elf32_Ehdr **)(pcVar35 + 0xc) = local_1c4;
                      *(Elf32_Ehdr **)(pcVar35 + 0x10) = local_1c0;
                      *(Elf32_Ehdr **)(pcVar35 + 0x14) = local_1bc;
                      *(dword *)(pcVar35 + 0x18) = dStack_1b8;
                      *(dword *)(pcVar35 + 0x1c) = dStack_1b4;
                      *(Elf32_Ehdr **)(pcVar35 + 0x20) = pEStack_1b0;
                      local_60c = (Elf32_Ehdr *)pEVar25->e_ident_magic_str;
                      if (pEVar25 < pEVar22) {
                    /* WARNING: Subroutine does not return */
                        FUN_00faa4a4(pEVar22,local_60c,&DAT_018a6304);
                      }
                      *(Elf32_Ehdr **)&pEVar46->e_ident_abiversion = pEVar25;
                      pEVar46->e_ident_magic_num = 1;
                      pEVar46->e_ident_magic_str[0] = '\0';
                      pEVar46->e_ident_magic_str[1] = '\0';
                      pEVar46->e_ident_magic_str[2] = '\0';
                      *(undefined4 *)((int)local_610->e_ident_pad + (int)pEVar22 * 0x24 + -1) = 1;
                      *(Elf32_Ehdr **)((int)local_610->e_ident_pad + (int)pEVar22 * 0x24 + 3) =
                           pEVar25;
                    }
                    else {
                      local_1c0 = *(Elf32_Ehdr **)local_fd0;
                      local_1bc = *(Elf32_Ehdr **)(local_fd0 + 4);
                      dStack_1b8 = *(dword *)(local_fd0 + 8);
                      dStack_1b4 = *(dword *)(local_fd0 + 0xc);
                      pEStack_1b0 = *(Elf32_Ehdr **)(local_fd0 + 0x10);
                      local_1c8 = (Elf32_Ehdr *)0x0;
                      local_1d0._0_4_ = (Elf32_Ehdr *)0x0;
                      local_1d0._4_4_ = pEVar24;
                      if (local_60c == local_614) {
                        FUN_0102ccf4(&local_614);
                      }
                      pcVar35 = local_610->e_ident_magic_str + (int)pEVar25 * 0x24 + -1;
                      *(undefined4 *)pcVar35 = local_1d0._0_4_;
                      *(undefined4 *)(pcVar35 + 4) = local_1d0._4_4_;
                      *(Elf32_Ehdr **)(pcVar35 + 8) = local_1c8;
                      *(Elf32_Ehdr **)(pcVar35 + 0xc) = local_1c4;
                      *(Elf32_Ehdr **)(pcVar35 + 0x10) = local_1c0;
                      *(Elf32_Ehdr **)(pcVar35 + 0x14) = local_1bc;
                      *(dword *)(pcVar35 + 0x18) = dStack_1b8;
                      *(dword *)(pcVar35 + 0x1c) = dStack_1b4;
                      *(Elf32_Ehdr **)(pcVar35 + 0x20) = pEStack_1b0;
                      pEVar46->e_ident_magic_num = 1;
                      pEVar46->e_ident_magic_str[0] = '\0';
                      pEVar46->e_ident_magic_str[1] = '\0';
                      pEVar46->e_ident_magic_str[2] = '\0';
                      *(Elf32_Ehdr **)&pEVar46->e_ident_class = pEVar25;
                      *(Elf32_Ehdr **)&pEVar46->e_ident_abiversion = pEVar25;
                    }
                    pEVar22 = local_fc0;
                    local_60c = (Elf32_Ehdr *)pEVar25->e_ident_magic_str;
                    if (local_fd4 != (Elf32_Ehdr *)0x0) {
                      (**(code **)&local_fd4->e_type)(&local_a4,local_fb4,local_fac);
                    }
                    goto LAB_012221ac;
                  }
                }
                else if (*(Elf32_Ehdr **)&pEVar46[(int)pEVar24].e_ehsize == local_fac) {
                  iVar20 = thunk_FUN_016dd50a(pEVar46[(int)pEVar24].e_flags,local_fb4,local_fac);
                  pEVar25 = local_fa0;
                  pEVar46 = local_fc4;
                  if (iVar20 == 0) goto LAB_01221ed0;
                }
              }
            }
            uVar36 = uVar36 + 1;
            pEVar24 = (Elf32_Ehdr *)pEVar30->e_ident_magic_str;
          }
          local_204 = local_a4;
          local_210 = local_b0;
          local_208 = local_a8;
          local_20c = local_ac;
          local_1d0._0_4_ = *(undefined4 *)local_fd0;
          local_1d0._4_4_ = *(undefined4 *)(local_fd0 + 4);
          local_1c8 = *(Elf32_Ehdr **)(local_fd0 + 8);
          local_1c4 = *(Elf32_Ehdr **)(local_fd0 + 0xc);
          local_1c0 = *(Elf32_Ehdr **)(local_fd0 + 0x10);
          iVar20 = FUN_0145da44(local_640,pEVar25,&local_210);
          if (iVar20 != 0) goto LAB_01222714;
          if (local_624 <= pEVar30) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(pEVar30,local_624,&DAT_018a4504);
          }
          *(short *)(local_628->e_ident_magic_str + (int)pEVar30 * 4 + -1) = (short)local_fa8;
          *(short *)(local_628->e_ident_magic_str + (int)pEVar30 * 4 + -1 + 2) = (short)local_fa0;
          pEVar22 = local_fc0;
          goto LAB_012221ac;
        }
        FUN_016dd1aa(auStack_f90,&local_8e4,0xc4);
        local_f94 = uStack_81c;
        local_f98 = local_820;
        (**(code **)&local_110->e_type)(&pEStack_104,local_10c,local_108);
        pEVar24 = local_810;
        pEVar22 = local_fc0;
      }
      if (auVar49 == (undefined1  [4])0x3 && pEVar23 == (Elf32_Ehdr *)0x0) {
        local_fb8[1] = 0;
        local_fb8[2] = auVar59;
        *local_fb8 = 3;
        DataMemoryBarrier(0xb);
        do {
          uVar21 = *(uint *)pEVar24;
          bVar73 = (bool)hasExclusiveAccess(pEVar24);
        } while (!bVar73);
        *(uint *)pEVar24 = uVar21 - 1;
        goto LAB_01221904;
      }
      local_fa0 = pEStack_818;
      FUN_016dd1aa(pdVar70,auStack_f90,0xc4);
      local_634 = (Elf32_Ehdr *)0x0;
      local_5d0 = (Elf32_Ehdr *)0x0;
      local_63c = (Elf32_Ehdr *)&DAT_00000001;
      local_640 = (undefined1  [4])&DAT_00000001;
      local_638 = (undefined1  [4])&DAT_00000004;
      local_b90 = (Elf32_Ehdr *)auVar49;
      local_b8c = pEVar23;
      local_b88 = (Elf32_Ehdr *)auVar59;
      pEVar23 = (Elf32_Ehdr *)thunk_FUN_016d4a50(0x78);
      local_fa4 = pEVar24;
      if (pEVar23 == (Elf32_Ehdr *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x78);
      }
      FUN_016dd1aa(pEVar23,local_640,0x78);
      do {
        uVar21 = *(uint *)pEVar23;
        bVar73 = (bool)hasExclusiveAccess(pEVar23);
      } while (!bVar73);
      *(uint *)pEVar23 = uVar21 + 1;
      if ((int)uVar21 < 0) goto LAB_01222774;
      FUN_016dd1aa(local_640,&local_b90,0xb8);
      pEVar25 = *(Elf32_Ehdr **)pEVar22;
      pEVar24 = *(Elf32_Ehdr **)((int)pEVar22 + 4);
      if (pEVar25 == (Elf32_Ehdr *)0x3 && pEVar24 == (Elf32_Ehdr *)0x0) {
        pEVar22 = (Elf32_Ehdr *)0x0;
        pEVar24 = (Elf32_Ehdr *)&SUB_00000002;
      }
      else {
        pEVar46 = *(Elf32_Ehdr **)((int)pEVar22 + 8);
        pEVar22 = *(Elf32_Ehdr **)((int)pEVar22 + 0xc);
        local_fac = local_ac8;
        local_fb0 = local_ac4;
        if (pEVar25 == (Elf32_Ehdr *)&SUB_00000002 && pEVar24 == (Elf32_Ehdr *)0x0) {
          local_fa8 = (Elf32_Ehdr *)0x0;
          pEVar25 = (Elf32_Ehdr *)&SUB_00000002;
          local_fc4 = (Elf32_Ehdr *)0x0;
          pEVar24 = (Elf32_Ehdr *)&DAT_00000001;
        }
        else {
          local_fb4 = pEVar22;
          pEVar22 = (Elf32_Ehdr *)thunk_FUN_016d4a50(0x18);
          if (pEVar22 == (Elf32_Ehdr *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x18);
          }
          pEVar22->e_version = 0;
          pEVar22->e_ident_magic_num = 0;
          pEVar22->e_ident_magic_str[0] = '\0';
          pEVar22->e_ident_magic_str[1] = '\0';
          pEVar22->e_ident_magic_str[2] = '\0';
          pEVar30 = (Elf32_Ehdr *)thunk_FUN_016d4a50(8);
          if (pEVar30 == (Elf32_Ehdr *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,8);
          }
          pEVar30->e_ident_magic_num = 0;
          pEVar30->e_ident_magic_str[0] = '\0';
          pEVar30->e_ident_magic_str[1] = '\0';
          pEVar30->e_ident_magic_str[2] = '\0';
          pEVar30->e_ident_class = 0;
          pEVar30->e_ident_data = 0;
          pEVar30->e_ident_version = 0;
          pEVar30->e_ident_osabi = 0;
          local_8c4 = (Elf32_Ehdr *)0x0;
          local_8cc = (Elf32_Ehdr *)0x0;
          local_8d0 = (Elf32_Ehdr *)&DAT_00000001;
          local_8d4 = (Elf32_Ehdr *)&DAT_80000000;
          local_8d8 = (Elf32_Ehdr *)0x0;
          local_8f0._4_4_ = &DAT_00000001;
          local_8f0._0_4_ = &DAT_00000001;
          local_fa8 = pEVar24;
          local_8e8 = pEVar22;
          local_8e4 = pEVar22;
          local_8e0 = pEVar30;
          local_8dc = pEVar30;
          pEVar24 = (Elf32_Ehdr *)thunk_FUN_016d4a50(0x30);
          pEVar22 = local_fa8;
          ppEVar53 = local_fcc;
          if (pEVar24 == (Elf32_Ehdr *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x30);
          }
          pEVar24->e_ident_magic_num = local_8f0[0];
          pEVar24->e_ident_magic_str[0] = local_8f0[1];
          pEVar24->e_ident_magic_str[1] = local_8f0[2];
          pEVar24->e_ident_magic_str[2] = local_8f0[3];
          pEVar24->e_ident_class = local_8f0[4];
          pEVar24->e_ident_data = local_8f0[5];
          pEVar24->e_ident_version = local_8f0[6];
          pEVar24->e_ident_osabi = local_8f0[7];
          *(Elf32_Ehdr **)&pEVar24->e_ident_abiversion = local_8e8;
          *(Elf32_Ehdr **)(pEVar24->e_ident_pad + 3) = local_8e4;
          *(Elf32_Ehdr **)&pEVar24->e_type = local_8e0;
          pEVar24->e_version = (dword)local_8dc;
          pEVar24->e_entry = (dword)local_8d8;
          pEVar24->e_phoff = (dword)local_8d4;
          pEVar24->e_shoff = (dword)local_8d0;
          pEVar24->e_flags = (dword)local_8cc;
          *(Elf32_Ehdr **)&pEVar24->e_ehsize = local_8c8;
          *(Elf32_Ehdr **)&pEVar24->e_phnum = local_8c4;
          do {
            iVar20 = *(int *)pEVar24;
            bVar73 = (bool)hasExclusiveAccess(pEVar24);
          } while (!bVar73);
          *(int *)pEVar24 = iVar20 + 1;
          if (iVar20 < 0) goto LAB_01222774;
          puVar26 = (undefined4 *)thunk_FUN_016d4a50(0x1c);
          if (puVar26 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x1c);
          }
          *(undefined1 *)(puVar26 + 6) = 0;
          puVar26[4] = 0;
          *(undefined1 *)(puVar26 + 3) = 0;
          *puVar26 = 1;
          puVar26[1] = 1;
          puVar26[2] = 0;
          local_8f0._4_4_ = local_fb0;
          local_8f0._0_4_ = local_fac;
          local_8d4 = (Elf32_Ehdr *)puVar26;
          *ppEVar53 = pEVar25;
          ppEVar53[3] = local_fb4;
          ppEVar53[1] = pEVar22;
          local_8d0 = (Elf32_Ehdr *)((uint)local_8d0 & 0xffffff00);
          local_8d8 = pEVar24;
          ppEVar53[2] = pEVar46;
          local_fc0 = pEVar46;
          local_e38 = pEVar24;
          pEVar22 = (Elf32_Ehdr *)thunk_FUN_016d4a50(4);
          if (pEVar22 == (Elf32_Ehdr *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,4);
          }
          local_fac = (Elf32_Ehdr *)&DAT_018a56d0;
          *(Elf32_Ehdr **)pEVar22 = pEVar24;
          pEVar46 = (Elf32_Ehdr *)0x0;
          local_1d0._0_4_ = local_8f0._0_4_;
          local_1d0._4_4_ = local_8f0._4_4_;
          local_e38 = ppEVar53[2];
          local_e34 = ppEVar53[3];
          local_e30 = ppEVar53[4];
          local_e2c = ppEVar53[5];
          local_e28 = ppEVar53[6];
          local_e24 = ppEVar53[7];
          local_fc4 = local_fb4;
          local_ac8 = local_fc0;
          pEVar24 = pEVar25;
        }
        local_8f0._0_4_ = local_1d0._0_4_;
        local_8f0._4_4_ = local_1d0._4_4_;
        local_fc0 = (Elf32_Ehdr *)&local_8e0;
        local_8e0 = local_e38;
        local_8dc = local_e34;
        local_8d8 = local_e30;
        local_8d4 = local_e2c;
        local_8d0 = local_e28;
        local_8cc = local_e24;
        local_a4 = local_fb0;
        local_a8 = local_fac;
        local_fb4 = pEVar25;
        local_8e8 = pEVar25;
        local_8e4 = local_fa8;
        local_b0 = pEVar46;
        local_ac = pEVar22;
        if (((uint)pEVar24 & 1) != 0) {
          local_204 = (Elf32_Ehdr *)0x0;
          local_208 = (Elf32_Ehdr *)0x0;
          local_20c = (Elf32_Ehdr *)&DAT_00000018;
          local_210 = (Elf32_Ehdr *)0x0;
          FUN_010a6d6c(local_1d0,0x18,local_ac8,local_fc4);
          FUN_0145c6d0(&local_e38,local_640,&local_210,local_1d0);
          if ((char)local_e28 == '\x03') {
            local_1060[0] = &DAT_018a6184;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_0040929f,0x17,&local_120,&DAT_018a62e4);
          }
          local_110 = local_e38;
          local_10c = local_e34;
          local_108 = local_e30;
          pEStack_104 = local_e2c;
          local_100 = local_e28;
          if ((char)local_e28 != '\x02') {
            (**(code **)&local_e38->e_type)(&pEStack_104,local_e34,local_e30);
          }
        }
        if (local_5b8 != 0) {
          if (local_5b4 == (Elf32_Ehdr *)0x0) {
            if (*(code **)local_5ac != (code *)0x0) {
              (**(code **)local_5ac)(local_5b0);
            }
            iVar20._0_2_ = *(undefined2 *)&local_5ac->e_ident_class;
            iVar20._2_2_ = *(undefined2 *)&local_5ac->e_ident_version;
            if (iVar20 != 0) {
              thunk_FUN_016d3fb4(local_5b0);
            }
          }
          else {
            (**(code **)&local_5b4->e_type)(&local_5a8,local_5b0,local_5ac);
          }
        }
        local_fac = (Elf32_Ehdr *)local_8f0._0_4_;
        local_fb0 = (Elf32_Ehdr *)local_8f0._4_4_;
        local_5b4 = local_b0;
        local_5b8 = 1;
        local_5b0 = local_ac;
        local_5ac = local_a8;
        local_5a8 = local_a4;
        local_1d0._0_4_ = *(undefined4 *)local_fc0;
        local_1d0._4_4_ = *(uint *)((int)local_fc0 + 4);
        local_1c8 = *(Elf32_Ehdr **)((int)local_fc0 + 8);
        local_1c4 = *(Elf32_Ehdr **)((int)local_fc0 + 0xc);
        local_1c0 = *(Elf32_Ehdr **)((int)local_fc0 + 0x10);
        local_1bc = *(Elf32_Ehdr **)((int)local_fc0 + 0x14);
        pEVar22 = local_fa8;
        pEVar24 = local_fb4;
      }
      FUN_016dd1aa(&local_e38,local_640,0xb8);
      local_ff4 = local_de0;
      pEVar25 = local_de4;
      local_200 = (Elf32_Ehdr *)local_1d0._0_4_;
      local_1fc = (Elf32_Ehdr *)local_1d0._4_4_;
      pEStack_1f8 = local_1c8;
      pEStack_1f4 = local_1c4;
      pEStack_1f0 = local_1c0;
      pEStack_1ec = local_1bc;
      local_20c = local_fb0;
      local_210 = local_fac;
      local_fec = &local_208;
      local_208 = pEVar24;
      local_204 = pEVar22;
      if (local_de0 == (Elf32_Ehdr *)0x0) {
        local_ff8 = 1;
      }
      else {
        local_ff8 = thunk_FUN_016d4a50(local_de0);
        if (local_ff8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,local_ff4);
        }
      }
      FUN_016dd1aa(local_ff8,pEVar25,local_ff4);
      pEVar22 = local_fa4;
      local_1024 = local_dd8;
      local_101c = local_dd4;
      local_1018 = local_dd0;
      local_1014 = local_dcc;
      local_1e8 = local_dc4;
      pEStack_1e4 = local_dc0;
      pEStack_1e0 = pEStack_dbc;
      pEStack_1dc = local_db8;
      local_1d8 = local_db4;
      local_1010 = local_df8;
      local_100c = local_df4;
      local_1008 = local_df0;
      local_1004 = local_dec;
      local_102c = local_dc8;
      local_1028 = (uint)local_ddc >> 0x10;
      local_1020 = (uint)local_ddc & 0xffff;
      uVar21 = local_1020;
      if (local_d88 != (int *)0x0) {
        uVar21 = local_d88[3];
      }
      if (local_d88 != (int *)0x0 && uVar21 != 0) {
        iVar20 = *local_d88;
        uVar21 = local_d88[1];
        uVar36 = uVar21 & 0xd01ad739;
        local_fb0 = (Elf32_Ehdr *)0x0;
        while( true ) {
          local_fa8 = *(Elf32_Ehdr **)(iVar20 + uVar36);
          local_fac = (Elf32_Ehdr *)((uint)local_fa8 & 0x80808080);
          uVar28 = ((uint)local_fac ^ 0x80808080) & ((uint)local_fa8 ^ 0x68686868) + 0xfefefeff;
          while (uVar28 != 0) {
            uVar55 = uVar36 + ((uint)LZCOUNT(uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 |
                                             (uVar28 >> 0x10 & 0xff) << 8 | uVar28 >> 0x18) >> 3) &
                     uVar21;
            piVar65 = (int *)(iVar20 + -0x18 + uVar55 * -0x18);
            uVar28 = uVar28 - 1 & uVar28;
            if ((*piVar65 == -0x54519ed3 && piVar65[2] == -0x2fe528c7) &&
                (piVar65[1] == 0x70aa1af6 && piVar65[3] == 0x2c80ee9e)) {
              local_fa8 = (Elf32_Ehdr *)&DAT_00000001;
              iVar20 = iVar20 + uVar55 * -0x18;
              uVar74 = (**(code **)(*(int *)(iVar20 + -4) + 0x14))(*(undefined4 *)(iVar20 + -8));
              puVar31 = (uint *)uVar74;
              (**(code **)((int)((ulonglong)uVar74 >> 0x20) + 0xc))(local_640,puVar31);
              if ((local_640 != (undefined1  [4])0xabae612d ||
                  local_638 != (undefined1  [4])0xd01ad739) ||
                  (local_63c != (Elf32_Ehdr *)0x70aa1af6 || local_634 != (Elf32_Ehdr *)0x2c80ee9e))
              goto LAB_0121fcfc;
              pEVar24 = (Elf32_Ehdr *)0x0;
              if (puVar31 != (uint *)0x0) {
                pEVar24 = (Elf32_Ehdr *)puVar31[2];
                local_fe8 = pEVar24;
              }
              if (!(puVar31 == (uint *)0x0 || pEVar24 == (Elf32_Ehdr *)&DAT_3b9aca00))
              goto LAB_0121fd08;
              goto LAB_0121fcfc;
            }
          }
          if (((uint)local_fac & (int)local_fa8 << 1) != 0) break;
          local_fb0 = (Elf32_Ehdr *)&local_fb0->e_ident_class;
          uVar36 = (uint)((int)local_fb0 + uVar36) & uVar21;
        }
      }
LAB_0121fcfc:
      puVar31 = &local_f98;
      local_fe8 = local_fa0;
LAB_0121fd08:
      pEVar25 = local_e34;
      pEVar24 = local_e38;
      iVar43._0_2_ = *(undefined2 *)&pEVar22->e_ident_abiversion;
      iVar43._2_2_ = *(undefined2 *)(pEVar22->e_ident_pad + 1);
      if (iVar43 == 0) {
        local_fa8 = (Elf32_Ehdr *)0x1;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("core thread exited early",0x18,&DAT_018a6abc);
      }
      local_1000 = *puVar31;
      local_ffc = puVar31[1];
      FUN_016dd1aa(local_8f0,&local_e30,0xb0);
      uVar21 = *(uint *)(*(int *)&pEVar22->e_ident_abiversion + 0x80);
      DataMemoryBarrier(0xb);
      puVar31 = (uint *)(*(int *)&pEVar22->e_ident_abiversion + 0x80);
      while ((uVar21 & 1) == 0) {
        if (uVar21 + 2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_015bef44();
        }
        uVar36 = *puVar31;
        if (*puVar31 == uVar21) {
          DataMemoryBarrier(0xb);
LAB_0121fd8c:
          bVar73 = (bool)hasExclusiveAccess(puVar31);
          if (!bVar73) goto code_r0x0121fd98;
          *puVar31 = uVar21 + 2;
          DataMemoryBarrier(0xb);
          local_640 = (undefined1  [4])pEVar24;
          local_63c = pEVar25;
          FUN_016dd1aa(local_638,local_8f0,0xb0);
          pEVar24 = *(Elf32_Ehdr **)&pEVar22->e_ident_abiversion;
          pdVar70 = &pEVar24->e_flags;
          pdVar66 = &pEVar24->e_shoff;
          do {
            uVar21 = *pdVar70;
            bVar73 = (bool)hasExclusiveAccess(pdVar70);
          } while (!bVar73);
          *pdVar70 = uVar21 + 1;
          DataMemoryBarrier(0xb);
          uVar36 = uVar21 & 0xfffffff0;
          dVar48 = *pdVar66;
          DataMemoryBarrier(0xb);
          pEVar25 = (Elf32_Ehdr *)(uVar21 & 0xf);
          local_588 = pEVar23;
          if (uVar36 != *(uint *)(dVar48 + 0xc00)) {
            pEVar46 = (Elf32_Ehdr *)
                      (uint)(pEVar25 < (Elf32_Ehdr *)(uVar36 - *(uint *)(dVar48 + 0xc00) >> 4));
            dVar54 = dVar48;
            local_fac = pEVar25;
            local_fa8 = pEVar24;
            do {
              dVar48 = *(dword *)(dVar54 + 0xc04);
              DataMemoryBarrier(0xb);
              if (dVar48 == 0) {
                iVar20 = *(int *)(dVar54 + 0xc00);
                local_fa0 = pEVar46;
                dVar48 = thunk_FUN_016d4a50(0xc10);
                if (dVar48 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600874(8,0xc10);
                }
                *(int *)(dVar48 + 0xc00) = iVar20 + 0x10;
                pdVar44 = (dword *)(dVar54 + 0xc04);
                *(undefined4 *)(dVar48 + 0xc04) = 0;
                *(undefined4 *)(dVar48 + 0xc08) = 0;
                *(undefined4 *)(dVar48 + 0xc0c) = 0;
                dVar58 = *pdVar44;
                if (dVar58 != 0) {
LAB_0121fedc:
                  ClearExclusiveLocal();
                  DataMemoryBarrier(0xb);
                  pdVar44 = (dword *)(dVar58 + 0xc04);
                  *(int *)(dVar48 + 0xc00) = *(int *)(dVar58 + 0xc00) + 0x10;
                  dVar45 = *pdVar44;
                  if (dVar45 == 0) {
                    DataMemoryBarrier(0xb);
                    do {
                      bVar73 = (bool)hasExclusiveAccess(pdVar44);
                      if (bVar73) {
                        *pdVar44 = dVar48;
                        bVar73 = true;
                        goto LAB_0121ff30;
                      }
                      dVar45 = *pdVar44;
                    } while (dVar45 == 0);
                  }
LAB_0121ff28:
                  do {
                    bVar73 = false;
                    ClearExclusiveLocal();
LAB_0121ff30:
                    while( true ) {
                      DataMemoryBarrier(0xb);
                      if (bVar73) {
                        dVar48 = dVar58;
                        goto LAB_0121ff8c;
                      }
                      HintYield();
                      *(int *)(dVar48 + 0xc00) = *(int *)(dVar45 + 0xc00) + 0x10;
                      pdVar44 = (dword *)(dVar45 + 0xc04);
                      dVar45 = *pdVar44;
                      if (dVar45 != 0) break;
                      DataMemoryBarrier(0xb);
                      while (bVar73 = (bool)hasExclusiveAccess(pdVar44), !bVar73) {
                        dVar45 = *pdVar44;
                        if (dVar45 != 0) goto LAB_0121ff28;
                      }
                      *pdVar44 = dVar48;
                      bVar73 = true;
                    }
                  } while( true );
                }
                DataMemoryBarrier(0xb);
                while (bVar73 = (bool)hasExclusiveAccess(pdVar44), !bVar73) {
                  dVar58 = *pdVar44;
                  if (dVar58 != 0) goto LAB_0121fedc;
                }
                *pdVar44 = dVar48;
                DataMemoryBarrier(0xb);
LAB_0121ff8c:
                pEVar46 = local_fa0;
              }
              DataMemoryBarrier(0xb);
              if (((uint)pEVar46 & (uint)((~*(uint *)(dVar54 + 0xc08) & 0xffff) == 0)) == 0) {
                pEVar46 = (Elf32_Ehdr *)0x0;
              }
              else {
                if (*pdVar66 == dVar54) {
                  DataMemoryBarrier(0xb);
                  do {
                    bVar73 = (bool)hasExclusiveAccess(pdVar66);
                    if (bVar73) {
                      *pdVar66 = dVar48;
                      DataMemoryBarrier(0xb);
                      puVar31 = (uint *)(dVar54 + 0xc08);
                      do {
                        dVar58 = *pdVar70;
                        bVar73 = (bool)hasExclusiveAccess(pdVar70);
                      } while (!bVar73);
                      *pdVar70 = dVar58;
                      *(dword *)(dVar54 + 0xc0c) = dVar58;
                      DataMemoryBarrier(0xb);
                      do {
                        bVar73 = (bool)hasExclusiveAccess(puVar31);
                      } while (!bVar73);
                      *puVar31 = *puVar31 | 0x10000;
                      pEVar46 = (Elf32_Ehdr *)&DAT_00000001;
                      goto LAB_0121fe40;
                    }
                  } while (*pdVar66 == dVar54);
                }
                ClearExclusiveLocal();
                pEVar46 = (Elf32_Ehdr *)0x0;
              }
LAB_0121fe40:
              HintYield();
              dVar54 = dVar48;
            } while (*(uint *)(dVar48 + 0xc00) != uVar36);
            pEVar25 = local_fac;
            pEVar24 = local_fa8;
          }
          FUN_016dd52c(dVar48 + (int)pEVar25 * 0xc0,local_640,0xc0);
          puVar31 = (uint *)(dVar48 + 0xc08);
          DataMemoryBarrier(0xb);
          do {
            bVar73 = (bool)hasExclusiveAccess(puVar31);
          } while (!bVar73);
          *puVar31 = *puVar31 | 1 << ((uint)pEVar25 & 0xff);
          pdVar70 = &pEVar24[1].e_version;
          DataMemoryBarrier(0xb);
          do {
            uVar21 = *pdVar70;
            bVar73 = (bool)hasExclusiveAccess(pdVar70);
          } while (!bVar73);
          *pdVar70 = uVar21 | 2;
          DataMemoryBarrier(0xb);
          if (uVar21 == 0) {
            iVar20 = *(int *)(pEVar24[1].e_ident_pad + 3);
            uVar56._0_2_ = pEVar24[1].e_type;
            uVar56._2_2_ = pEVar24[1].e_machine;
            pEVar24[1].e_ident_pad[3] = 0;
            pEVar24[1].e_ident_pad[4] = 0;
            pEVar24[1].e_ident_pad[5] = 0;
            pEVar24[1].e_ident_pad[6] = 0;
            DataMemoryBarrier(0xb);
            do {
              bVar73 = (bool)hasExclusiveAccess(pdVar70);
            } while (!bVar73);
            *pdVar70 = 0;
            if (iVar20 != 0) {
              local_fa8 = (Elf32_Ehdr *)&DAT_00000001;
              (**(code **)(iVar20 + 4))(uVar56);
            }
          }
          goto LAB_01220358;
        }
LAB_0121fd54:
        uVar21 = uVar36;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      FUN_016dd1aa(local_1d0,local_8f0,0xb0);
      if (pEVar24 != (Elf32_Ehdr *)0x3 || pEVar25 != (Elf32_Ehdr *)0x0) {
        local_640 = (undefined1  [4])pEVar24;
        local_63c = pEVar25;
        FUN_016dd1aa(local_638,local_1d0,0xb0);
        local_1060[0] = &DAT_018a6acc;
        local_588 = pEVar23;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("core thread panicked",0x14,local_640,&DAT_018a6a4c);
      }
LAB_01220358:
      pEVar24 = local_fa4;
      local_1030 = (uint)*local_fec ^ 2 | (uint)local_fec[1];
      if (local_1030 == 0) {
        local_a8 = (Elf32_Ehdr *)((uint)local_a8 & 0xffffff00);
        local_b0 = pEVar23;
        if (local_fe8 == (Elf32_Ehdr *)&DAT_3b9aca00) {
          local_fa0 = (Elf32_Ehdr *)&DAT_3b9aca00;
        }
        else {
          FUN_0165a798(local_640);
          local_fac = (Elf32_Ehdr *)((char *)((int)local_640 + 1) + (local_1000 - 1));
          pEVar23 = (Elf32_Ehdr *)
                    (local_63c->e_ident_magic_str +
                    CARRY4((uint)local_640,local_1000) + local_ffc + -1);
          if ((int)local_ffc < 0 !=
              (int)(((uint)local_63c ^ (uint)pEVar23) & ~((uint)local_63c ^ local_ffc)) < 0) {
LAB_01220458:
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
          }
          local_fa0 = (Elf32_Ehdr *)
                      ((char *)((int)local_638 + 1) + (int)(local_fe8->e_ident_magic_str + -2));
          if (local_fa0 < (Elf32_Ehdr *)&DAT_3b9aca00) {
            local_fb0 = pEVar23;
          }
          else {
            bVar73 = (Elf32_Ehdr *)0xfffffffe < local_fac;
            local_fac = (Elf32_Ehdr *)local_fac->e_ident_magic_str;
            local_fb0 = (Elf32_Ehdr *)(pEVar23->e_ident_magic_str + (bVar73 - 1));
            if ((int)(((uint)pEVar23 ^ (uint)local_fb0) & ~(uint)pEVar23) < 0) goto LAB_01220458;
            local_fa0 = (Elf32_Ehdr *)&local_fa0[-0x1257032].e_ehsize;
          }
        }
        iVar20 = thunk_FUN_016de0ee();
        if (*(uint *)(iVar20 + 0x248) < 3) {
          piVar65 = (int *)FUN_015f7ed0();
          puVar26 = (undefined4 *)thunk_FUN_016d4a50(0xc);
        }
        else {
          piVar65 = (int *)(*(uint *)(iVar20 + 0x248) - 8);
          do {
            iVar20 = *piVar65;
            bVar73 = (bool)hasExclusiveAccess(piVar65);
          } while (!bVar73);
          *piVar65 = iVar20 + 1;
          if (iVar20 < 0) goto LAB_01222774;
          puVar26 = (undefined4 *)thunk_FUN_016d4a50(0xc);
        }
        if (puVar26 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        *puVar26 = 1;
        puVar26[1] = 1;
        local_fbc = (Elf32_Ehdr *)(puVar26 + 2);
        *(int **)local_fbc = piVar65;
        local_c0 = (undefined1  [4])&DAT_018a4964;
        pEVar23 = (Elf32_Ehdr *)((uint)&local_110 | 4);
        local_fa8 = pEVar23;
        local_110 = local_b0;
        local_10c = local_ac;
        local_108 = local_a8;
        local_bc = local_fbc;
        if (local_fa0 == (Elf32_Ehdr *)&DAT_3b9aca00) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((uint)local_a8 & 0xff) {
          case 0:
            local_10c = local_b0;
          case 3:
            FUN_01473398(local_640,pEVar23,local_c0);
            if (local_640 == (undefined1  [4])&DAT_00000005 && local_63c == (Elf32_Ehdr *)0x0) {
              local_108 = (Elf32_Ehdr *)CONCAT31(local_108._1_3_,3);
              FUN_015fbbf8();
              while( true ) {
                FUN_01473398(local_640,pEVar23,local_c0);
                if (local_640 != (undefined1  [4])&DAT_00000005 || local_63c != (Elf32_Ehdr *)0x0)
                break;
                local_108 = (Elf32_Ehdr *)CONCAT31(local_108._1_3_,3);
                FUN_015fbbf8();
              }
            }
            break;
          case 1:
            goto switchD_012205f0_caseD_1;
          case 2:
            goto switchD_012205f0_caseD_2;
          }
LAB_012216fc:
          pEVar23 = local_63c;
          auVar49 = local_640;
          local_fb0 = (Elf32_Ehdr *)local_638;
          FUN_016dd1aa(local_8f0,&local_634,0x4c);
          pEVar24 = local_10c;
          if (local_10c != (Elf32_Ehdr *)0x0) {
            pwVar52 = (word *)&local_10c->e_ident_abiversion;
            do {
              uVar50._0_1_ = local_10c[2].e_ident_abiversion;
              uVar50._1_1_ = local_10c[2].e_ident_pad[0];
              uVar50._2_1_ = local_10c[2].e_ident_pad[1];
              uVar50._3_1_ = local_10c[2].e_ident_pad[2];
              uVar21 = uVar50 | 4;
              bVar73 = (bool)hasExclusiveAccess(&local_10c[2].e_ident_abiversion);
            } while (!bVar73);
            pEVar24[2].e_ident_abiversion = (char)uVar21;
            pEVar24[2].e_ident_pad[0] = (char)(uVar21 >> 8);
            pEVar24[2].e_ident_pad[1] = (char)(uVar21 >> 0x10);
            pEVar24[2].e_ident_pad[2] = (char)(uVar21 >> 0x18);
            DataMemoryBarrier(0xb);
            if ((uVar50 & 10) == 8) {
              uVar40._0_2_ = local_10c[1].e_shnum;
              uVar40._2_2_ = local_10c[1].e_shstrndx;
              (**(code **)(*(int *)&local_10c[1].e_phnum + 8))(uVar40);
            }
            if ((uVar50 & 2) != 0) {
              FUN_016dd1aa(local_640,pwVar52,0x58);
              pEVar24->e_ident_abiversion = 4;
              pEVar24->e_ident_pad[0] = 0;
              pEVar24->e_ident_pad[1] = 0;
              pEVar24->e_ident_pad[2] = 0;
              *(undefined4 *)((int)pEVar24->e_ident_pad + 3) = 0;
              if (local_640 != (undefined1  [4])&DAT_00000004 || local_63c != (Elf32_Ehdr *)0x0) {
                FUN_0146b2dc(local_640);
              }
            }
            if (local_10c != (Elf32_Ehdr *)0x0) {
              DataMemoryBarrier(0xb);
              do {
                uVar21 = *(uint *)local_10c;
                bVar73 = (bool)hasExclusiveAccess(local_10c);
              } while (!bVar73);
              *(uint *)local_10c = uVar21 - 1;
              if (uVar21 == 1) {
                DataMemoryBarrier(0xb);
                FUN_014a545c(local_10c);
              }
            }
          }
          if (auVar49 == (undefined1  [4])&DAT_00000004 && pEVar23 == (Elf32_Ehdr *)0x0) {
            FUN_014eb6cc();
            goto LAB_01222774;
          }
          FUN_016dd1aa(local_1d0,local_8f0,0x4c);
          local_108 = (Elf32_Ehdr *)CONCAT31(local_108._1_3_,1);
          pEVar24 = pEVar22;
        }
        else {
          local_fb4 = (Elf32_Ehdr *)local_638;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((uint)local_a8 & 0xff) {
          case 0:
            local_10c = local_b0;
            break;
          case 1:
switchD_012205f0_caseD_1:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7ca0(&DAT_018a4a08);
          case 2:
switchD_012205f0_caseD_2:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7cc0(&DAT_018a4a08);
          }
          FUN_01473398(local_640,pEVar23,local_c0);
          if (local_640 != (undefined1  [4])&DAT_00000005 || local_63c != (Elf32_Ehdr *)0x0)
          goto LAB_012216fc;
          local_108 = (Elf32_Ehdr *)CONCAT31(local_108._1_3_,3);
          FUN_0165a798(local_640);
          pEVar23 = (Elf32_Ehdr *)0x0;
          auVar49 = (undefined1  [4])&DAT_00000004;
          bVar73 = (int)local_63c -
                   (int)(local_fb0->e_ident_magic_str + (((uint)local_640 < local_fac) - 1)) < 0 !=
                   (SBORROW4((int)local_63c,(int)local_fb0) !=
                   SBORROW4((int)local_63c - (int)local_fb0,(uint)((uint)local_640 < local_fac)));
          if (local_640 == (undefined1  [4])local_fac && local_63c == local_fb0) {
            bVar73 = (uint)local_638 < local_fa0;
          }
          if (bVar73) {
            local_1d0._4_4_ = local_fb0;
            local_1d0._0_4_ = local_fac;
            local_1c8 = local_fa0;
            local_8f0._0_4_ = local_640;
            local_8f0._4_4_ = local_63c;
            local_8e8 = (Elf32_Ehdr *)local_638;
            FUN_015f3c24(local_640,local_1d0,local_8f0);
            uVar55._0_1_ = local_fb4->e_ident_magic_num;
            uVar55._1_1_ = local_fb4->e_ident_magic_str[0];
            uVar55._2_1_ = local_fb4->e_ident_magic_str[1];
            uVar55._3_1_ = local_fb4->e_ident_magic_str[2];
            uVar60._0_2_ = *(undefined2 *)&local_fb4->e_ident_class;
            uVar60._2_2_ = *(undefined2 *)&local_fb4->e_ident_version;
            pEVar22 = local_630;
            if (((byte)local_640[0] & 1) != 0) {
              uVar55 = 0;
              uVar60 = 0;
              pEVar22 = (Elf32_Ehdr *)0x0;
            }
            FUN_015f8614(uVar55,uVar60,pEVar22);
            pEVar24 = local_fac;
            while( true ) {
              FUN_01473398(local_640,local_fa8,local_c0);
              pEVar22 = local_fa4;
              if (local_640 != (undefined1  [4])&DAT_00000005 || local_63c != (Elf32_Ehdr *)0x0)
              goto LAB_012216fc;
              local_108 = (Elf32_Ehdr *)CONCAT31(local_108._1_3_,3);
              FUN_0165a798(local_640);
              pEVar23 = (Elf32_Ehdr *)0x0;
              bVar73 = (int)local_63c -
                       (int)(local_fb0->e_ident_magic_str + (((uint)local_640 < pEVar24) - 1)) < 0
                       != (SBORROW4((int)local_63c,(int)local_fb0) !=
                          SBORROW4((int)local_63c - (int)local_fb0,(uint)((uint)local_640 < pEVar24)
                                  ));
              if (local_640 == (undefined1  [4])pEVar24 && local_63c == local_fb0) {
                bVar73 = (uint)local_638 < local_fa0;
              }
              if (!bVar73) break;
              local_1d0._0_4_ = pEVar24;
              local_1c8 = local_fa0;
              local_1d0._4_4_ = local_fb0;
              local_8f0._4_4_ = local_63c;
              local_8f0._0_4_ = local_640;
              local_8e8 = (Elf32_Ehdr *)local_638;
              FUN_015f3c24(local_640,local_1d0,local_8f0);
              uVar57._0_1_ = local_fb4->e_ident_magic_num;
              uVar57._1_1_ = local_fb4->e_ident_magic_str[0];
              uVar57._2_1_ = local_fb4->e_ident_magic_str[1];
              uVar57._3_1_ = local_fb4->e_ident_magic_str[2];
              uVar61._0_2_ = *(undefined2 *)&local_fb4->e_ident_class;
              uVar61._2_2_ = *(undefined2 *)&local_fb4->e_ident_version;
              pEVar22 = local_630;
              if (((byte)local_640[0] & 1) != 0) {
                uVar57 = 0;
                uVar61 = 0;
                pEVar22 = (Elf32_Ehdr *)0x0;
              }
              FUN_015f8614(uVar57,uVar61,pEVar22);
            }
            local_fb0 = (Elf32_Ehdr *)0x0;
            auVar49 = (undefined1  [4])&DAT_00000004;
            pEVar24 = local_fa4;
          }
          else {
            local_fb0 = (Elf32_Ehdr *)0x0;
            pEVar24 = local_fa4;
          }
        }
        FUN_01474f60(&local_110);
        FUN_009c3fc4(local_fbc);
        puVar26 = local_fb8;
        pEVar22 = local_fb0;
        goto joined_r0x01221354;
      }
      local_8f0._0_4_ = local_210;
      local_8f0._4_4_ = local_20c;
      local_8e8 = local_208;
      local_8e4 = local_204;
      local_8e0 = local_200;
      pEVar22 = (Elf32_Ehdr *)&local_8dc;
      local_8dc = local_1fc;
      local_8d8 = pEStack_1f8;
      local_8d4 = pEStack_1f4;
      local_8d0 = pEStack_1f0;
      local_8cc = pEStack_1ec;
      local_8c4 = (Elf32_Ehdr *)((uint)local_8c4 & 0xffffff00);
      local_8c8 = pEVar23;
      if (local_fe8 == (Elf32_Ehdr *)&DAT_3b9aca00) {
        pEVar23 = (Elf32_Ehdr *)&DAT_3b9aca00;
        local_fdc = pEStack_1f4;
      }
      else {
        FUN_0165a798(local_640);
        pEVar22 = (Elf32_Ehdr *)((char *)((int)local_640 + 1) + (local_1000 - 1));
        local_fdc = (Elf32_Ehdr *)
                    (local_63c->e_ident_magic_str +
                    CARRY4((uint)local_640,local_1000) + local_ffc + -1);
        if ((int)local_ffc < 0 !=
            (int)(((uint)local_63c ^ (uint)local_fdc) & ~((uint)local_63c ^ local_ffc)) < 0) {
LAB_012204f0:
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
        }
        pEVar23 = (Elf32_Ehdr *)
                  ((char *)((int)local_638 + 1) + (int)(local_fe8->e_ident_magic_str + -2));
        if ((Elf32_Ehdr *)&DAT_3b9aca00 <= pEVar23) {
          bVar73 = (Elf32_Ehdr *)0xfffffffe < pEVar22;
          pEVar22 = (Elf32_Ehdr *)pEVar22->e_ident_magic_str;
          if ((int)(((uint)local_fdc ^ (uint)(local_fdc->e_ident_magic_str + (bVar73 - 1))) &
                   ~(uint)local_fdc) < 0) goto LAB_012204f0;
          pEVar23 = (Elf32_Ehdr *)&pEVar23[-0x1257032].e_ehsize;
          local_fdc = (Elf32_Ehdr *)(local_fdc->e_ident_magic_str + (bVar73 - 1));
        }
      }
      local_fac = pEVar22;
      local_fa8 = pEVar23;
      iVar20 = thunk_FUN_016de0ee();
      if (*(uint *)(iVar20 + 0x248) < 3) {
        piVar65 = (int *)FUN_015f7ed0();
        puVar26 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      }
      else {
        piVar65 = (int *)(*(uint *)(iVar20 + 0x248) - 8);
        do {
          iVar20 = *piVar65;
          bVar73 = (bool)hasExclusiveAccess(piVar65);
        } while (!bVar73);
        *piVar65 = iVar20 + 1;
        if (iVar20 < 0) goto LAB_01222774;
        puVar26 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      }
      uVar72 = puVar26 == (undefined4 *)0x0;
      if ((bool)uVar72) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *puVar26 = 1;
      puVar26[1] = 1;
      local_e98._4_4_ = puVar26 + 2;
      *(int **)local_e98._4_4_ = piVar65;
      local_e98._0_4_ = &DAT_018a4964;
      local_118 = (Elf32_Ehdr *)0x0;
      local_120 = (Elf32_Ehdr *)local_e98;
      uVar36 = 0x12207f0;
      local_11c = local_120;
      FUN_016dd1aa(local_640,local_8f0,0xe0);
      local_fe0 = &local_1c8;
      local_1034 = &local_1c4;
      local_1044 = &local_a4;
      local_103c = (undefined2 *)((int)&local_a8 + 1);
      local_fd8 = &local_fbc[1].e_phoff;
      local_fb4 = (Elf32_Ehdr *)&local_fbc[2].e_ident_abiversion;
      local_fc0 = (Elf32_Ehdr *)&local_fbc->e_shnum;
      local_fc4 = (Elf32_Ehdr *)&local_fbc->e_ehsize;
      local_fd0 = &local_fbc->e_ident_abiversion;
      local_fc8 = &local_fbc->e_shoff;
      local_fe4 = &local_578;
      local_1038 = &local_584;
      local_1040 = (undefined2 *)((int)&local_568 + 1);
      local_fcc = &local_5d0;
      local_ff0 = &local_5a8;
      local_fd4 = (Elf32_Ehdr *)local_5e8;
      local_fa0 = (Elf32_Ehdr *)&local_610;
      uVar21 = extraout_r2_00;
LAB_01220888:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((uint)local_614 & 0xff) {
      case 0:
        local_614._0_2_ = CONCAT11(1,(byte)local_614);
        local_fa0->e_ident_magic_num = local_640[0];
        local_fa0->e_ident_magic_str[0] = local_640[1];
        local_fa0->e_ident_magic_str[1] = local_640[2];
        local_fa0->e_ident_magic_str[2] = local_640[3];
        *(Elf32_Ehdr **)&local_fa0->e_ident_class = local_63c;
        local_fa0->e_ident_abiversion = local_638[0];
        local_fa0->e_ident_pad[0] = local_638[1];
        local_fa0->e_ident_pad[1] = local_638[2];
        local_fa0->e_ident_pad[2] = local_638[3];
        *(Elf32_Ehdr **)(local_fa0->e_ident_pad + 3) = local_634;
        *(Elf32_Ehdr **)&local_fa0->e_type = local_630;
        local_fa0->e_version = (dword)local_62c;
        local_fa0->e_entry = (dword)local_628;
        local_fa0->e_phoff = (dword)local_624;
        local_fa0->e_shoff = (dword)local_620;
        local_fa0->e_flags = (dword)local_61c;
        local_564._0_3_ = 0;
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018a49f8);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018a49f8);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(local_564[0]) {
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_018a49c8);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_018a49c8);
        case 3:
          pEVar24 = local_fa4;
          if (local_588 != (Elf32_Ehdr *)0x0) goto LAB_01220a74;
          goto LAB_01220a38;
        case 4:
          if ((bool)uVar72) {
                    /* WARNING: Could not recover jumptable at 0x018a668c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((int)&param_5 * -0x3ffffff + 0x1ffffe30))
                      ((&switchD_012208e4::switchdataD_012208e8)[local_564[0]] &
                       (uVar36 >> (uVar21 & 0x1f) | uVar36 << 0x20 - (uVar21 & 0x1f)) &
                       (uint)local_1060);
            return;
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        break;
      case 4:
        goto switchD_01220894_caseD_4;
      }
      uVar21 = 0;
      local_564._1_2_ = 0x101;
      cVar62 = local_fa0->e_ident_magic_str[0];
      cVar19 = local_fa0->e_ident_magic_str[1];
      cVar5 = local_fa0->e_ident_magic_str[2];
      uVar47._0_1_ = local_fa0->e_ident_class;
      uVar47._1_1_ = local_fa0->e_ident_data;
      uVar47._2_1_ = local_fa0->e_ident_version;
      uVar47._3_1_ = local_fa0->e_ident_osabi;
      uVar51._0_1_ = local_fa0->e_ident_abiversion;
      uVar51._1_1_ = local_fa0->e_ident_pad[0];
      uVar51._2_1_ = local_fa0->e_ident_pad[1];
      uVar51._3_1_ = local_fa0->e_ident_pad[2];
      uVar56 = *(undefined4 *)(local_fa0->e_ident_pad + 3);
      wVar6 = local_fa0->e_type;
      wVar7 = local_fa0->e_machine;
      local_fd4->e_ident_magic_num = local_fa0->e_ident_magic_num;
      local_fd4->e_ident_magic_str[0] = cVar62;
      local_fd4->e_ident_magic_str[1] = cVar19;
      local_fd4->e_ident_magic_str[2] = cVar5;
      *(short *)&local_fd4->e_ident_class = (short)uVar47;
      *(short *)&local_fd4->e_ident_version = (short)((uint)uVar47 >> 0x10);
      *(short *)&local_fd4->e_ident_abiversion = (short)uVar51;
      *(short *)(local_fd4->e_ident_pad + 1) = (short)((uint)uVar51 >> 0x10);
      *(undefined4 *)((int)local_fd4->e_ident_pad + 3) = uVar56;
      local_fd4->e_type = wVar6;
      local_fd4->e_machine = wVar7;
      dVar48 = local_fa0->e_entry;
      dVar54 = local_fa0->e_phoff;
      dVar58 = local_fa0->e_shoff;
      dVar45 = local_fa0->e_flags;
      local_fd4->e_version = local_fa0->e_version;
      local_fd4->e_entry = dVar48;
      local_fd4->e_phoff = dVar54;
      local_fd4->e_shoff = dVar58;
      local_fd4->e_flags = dVar45;
      uVar67 = *(uint *)local_fd0;
      uVar71 = *(uint *)(local_fd0 + 4);
      uVar36 = 0x2000;
      if (uVar67 < 0x2000) {
        uVar36 = uVar67;
      }
      uVar63._0_1_ = local_fbc->e_ident_magic_num;
      uVar63._1_1_ = local_fbc->e_ident_magic_str[0];
      uVar63._2_1_ = local_fbc->e_ident_magic_str[1];
      uVar63._3_1_ = local_fbc->e_ident_magic_str[2];
      dVar48 = *(dword *)&local_fbc->e_ident_class;
      local_fc0->e_ident_magic_num = 0;
      local_fc0->e_ident_magic_str[0] = '\0';
      local_fc0->e_ident_magic_str[1] = '\0';
      local_fc0->e_ident_magic_str[2] = '\0';
      *(uint *)((int)local_fc0 + 4) = 0;
      *local_fc8 = uVar63;
      local_fc8[1] = dVar48;
      local_fc4->e_ident_magic_num = (char)uVar67;
      local_fc4->e_ident_magic_str[0] = (char)(uVar67 >> 8);
      local_fc4->e_ident_magic_str[1] = (char)(uVar67 >> 0x10);
      local_fc4->e_ident_magic_str[2] = (char)(uVar67 >> 0x18);
      *(short *)&local_fc4->e_ident_class = (short)uVar71;
      *(short *)&local_fc4->e_ident_version = (short)(uVar71 >> 0x10);
      if (uVar71 != 0) {
        uVar36 = 0x2000;
      }
      if ((uVar63 & 1) == 0) {
        uVar36 = 0x2000;
      }
      if (uVar36 == 0) {
        pEVar22 = (Elf32_Ehdr *)&DAT_00000001;
        uVar36 = 0;
      }
      else {
        pEVar22 = (Elf32_Ehdr *)FUN_016d38c8(uVar36,1);
        if (pEVar22 == (Elf32_Ehdr *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,uVar36);
        }
      }
      local_564._1_2_ = 0;
      pEVar24 = local_fcc[1];
      uVar28 = 0x20 - LZCOUNT(uVar36 >> 10);
      pEVar23 = local_fcc[2];
      if (6 < uVar28) {
        uVar28 = 7;
      }
      *(Elf32_Ehdr **)local_fb4 = *local_fcc;
      *(Elf32_Ehdr **)&local_fb4->e_ident_class = pEVar24;
      *(Elf32_Ehdr **)&local_fb4->e_ident_abiversion = pEVar23;
      local_59c = (int *)(uVar28 << 2 | 1);
      local_5a4 = (byte *)0x0;
      uVar28 = 0;
      local_5a8 = pEVar22;
      local_5a0 = uVar36;
      local_598._4_4_ = local_5e8._4_4_;
      local_598._0_4_ = local_5e8._0_4_;
      pEVar24 = local_fa4;
      do {
        if (((uVar63 & 1) != 0) &&
           (pEVar22 = (Elf32_Ehdr *)0x0, uVar21 == uVar67 && uVar28 == uVar71)) goto LAB_01220bdc;
        if (local_5a4 == (byte *)0x0) {
          pbVar32 = (byte *)0x0;
          if (local_5a0 == 0) {
            FUN_00f5f538(local_ff0,0x2000);
            FUN_016dd606(local_5a8->e_ident_magic_str + (int)(local_5a4 + -1),0,
                         local_5a0 - (int)local_5a4);
            pbVar32 = local_5a4;
          }
          (**(code **)(local_598._4_4_ + 0xc))
                    (local_ba0,local_598._0_4_,local_5a8->e_ident_magic_str + (int)(pbVar32 + -1),
                     local_5a0 - (int)pbVar32);
          uVar56 = local_ba0._0_4_;
          pEVar24 = local_fa4;
          if (local_ba0[0] == 4) {
            if ((Elf32_Ehdr *)local_ba0._4_4_ != (Elf32_Ehdr *)0x0) {
              if ((Elf32_Ehdr *)(local_5a0 - (int)local_5a4) < (uint)local_ba0._4_4_) {
                local_1d0._0_4_ = local_ba0._4_4_;
                local_1d0._4_4_ = (Elf32_Ehdr *)(local_5a0 - (int)local_5a4);
                    /* WARNING: Subroutine does not return */
                FUN_00f600c0(local_1d0);
              }
              local_5a4 = (byte *)(local_ba0._4_4_ + 1) + (int)(local_5a4 + -1);
              goto LAB_01220b28;
            }
            pEVar22 = (Elf32_Ehdr *)0x0;
            goto LAB_01220bdc;
          }
          local_fb0 = (Elf32_Ehdr *)local_ba0._4_4_;
          uVar72 = (char)local_568;
          uVar21 = (uint)local_568 & 0xff;
          pEVar22 = *(Elf32_Ehdr **)local_fb4;
          pEVar23 = *(Elf32_Ehdr **)&local_fb4->e_ident_class;
          local_568 = (Elf32_Ehdr *)CONCAT31(local_568._1_3_,3);
          if (uVar21 == 3) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8("tx only taken on error",0x16,&DAT_018a49e8);
          }
          uVar1 = *(undefined1 *)(local_1040 + 1);
          *local_103c = *local_1040;
          *(undefined1 *)(local_103c + 1) = uVar1;
          local_a8 = (Elf32_Ehdr *)CONCAT31(local_a8._1_3_,uVar72);
          local_b0 = pEVar22;
          local_ac = pEVar23;
          if (uVar21 == 2) {
            local_b8 = (Elf32_Ehdr *)CONCAT31(local_b8._1_3_,2);
            local_bc = (Elf32_Ehdr *)0x0;
            local_c0 = (undefined1  [4])0x0;
            local_1d0._0_4_ = (Elf32_Ehdr *)0x0;
            local_1c0 = (Elf32_Ehdr *)CONCAT31(local_1c0._1_3_,1);
            local_1d0._4_4_ = local_94;
            local_1c8 = local_90;
            local_1c4 = local_8c;
            goto LAB_012211a4;
          }
          uVar21 = pEVar22->e_shoff;
          pdVar70 = &pEVar22->e_shoff;
          DataMemoryBarrier(0xb);
          do {
            if (uVar21 == (pEVar22->e_entry ^ 0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_00408941,0x35,&DAT_018a4cd8);
            }
            uVar36 = *pdVar70;
            if (uVar36 == uVar21) {
              DataMemoryBarrier(0xb);
              do {
                bVar73 = (bool)hasExclusiveAccess(pdVar70);
                if (bVar73) {
                  *pdVar70 = uVar21 + 1;
                  bVar73 = true;
                  uVar21 = uVar36;
                  goto LAB_012210cc;
                }
                uVar36 = *pdVar70;
              } while (uVar36 == uVar21);
            }
            bVar73 = false;
            ClearExclusiveLocal();
            uVar21 = uVar36;
LAB_012210cc:
            DataMemoryBarrier(0xb);
          } while (!bVar73);
          do {
            uVar21 = *(uint *)pEVar22;
            bVar73 = (bool)hasExclusiveAccess(pEVar22);
          } while (!bVar73);
          *(uint *)pEVar22 = uVar21 + 1;
          if ((int)uVar21 < 0) break;
          pEVar23 = (Elf32_Ehdr *)thunk_FUN_016d4a50(0x1c);
          if (pEVar23 == (Elf32_Ehdr *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x1c);
          }
          *(undefined1 *)&pEVar23->e_entry = 0;
          pEVar23->e_type = 0;
          pEVar23->e_machine = 0;
          pEVar23->e_ident_pad[3] = 0;
          pEVar23->e_ident_magic_num = 1;
          pEVar23->e_ident_magic_str[0] = '\0';
          pEVar23->e_ident_magic_str[1] = '\0';
          pEVar23->e_ident_magic_str[2] = '\0';
          pEVar23->e_ident_class = 1;
          pEVar23->e_ident_data = 0;
          pEVar23->e_ident_version = 0;
          pEVar23->e_ident_osabi = 0;
          pEVar23->e_ident_abiversion = 0;
          pEVar23->e_ident_pad[0] = 0;
          pEVar23->e_ident_pad[1] = 0;
          pEVar23->e_ident_pad[2] = 0;
          local_b8 = (Elf32_Ehdr *)((uint)local_b8 & 0xffffff00);
          local_98 = (Elf32_Ehdr *)0x0;
          local_c0 = (undefined1  [4])pEVar22;
          local_bc = pEVar23;
          FUN_0147f848(local_1d0,local_c0,&local_98);
          if ((byte)local_1c0 != '\x02') {
LAB_012211a4:
            if ((Elf32_Ehdr *)local_1d0._0_4_ != (Elf32_Ehdr *)0x0) {
              (**(code **)(local_1d0._0_4_ + 0x10))(local_1034,local_1d0._4_4_,local_1c8);
            }
          }
          FUN_0146a410(local_c0);
          FUN_0146a410(&local_b0);
          local_94 = local_fb0;
          local_98 = (Elf32_Ehdr *)uVar56;
          local_1d0._0_2_ = 4;
          pEVar22 = (Elf32_Ehdr *)FUN_014c98b0(local_1d0,&local_98);
          goto LAB_01220bdc;
        }
LAB_01220b28:
        cVar62 = (char)local_568;
        *local_fd8 = (dword)local_5a4;
        local_fd8[1] = 0;
        if (cVar62 == '\x03') {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("tx only taken on error",0x16,&DAT_018a49d8);
        }
        FUN_00f5f8dc(&local_98,local_ff0);
        pEVar22 = local_8c;
        if (((uint)local_8c & 1) == 0) {
          local_584 = (Elf32_Ehdr *)&DAT_018ad580;
          local_580 = local_98;
          local_57c = local_94;
          local_578 = local_8c;
        }
        else {
          local_bc = (Elf32_Ehdr *)((int)local_98 - ((uint)local_8c >> 5));
          local_b8 = (Elf32_Ehdr *)(local_94->e_ident_magic_str + (((uint)local_8c >> 5) - 1));
          local_c0 = (undefined1  [4])(local_90->e_ident_magic_str + (((uint)local_8c >> 5) - 1));
          FUN_00f5ef18(&local_b0,local_c0);
          local_ea8 = (Elf32_Ehdr *)((uint)pEVar22 >> 5);
          if (local_a8 < local_ea8) {
            local_1c8 = (Elf32_Ehdr *)local_ba0;
            local_ba0._0_4_ = local_a8;
            local_1c4 = (Elf32_Ehdr *)FUN_007883b8;
            local_1d0._4_4_ = FUN_007883b8;
            local_1d0._0_4_ = &local_ea8;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00584155,local_1d0,&DAT_018a6700);
          }
          local_57c = (Elf32_Ehdr *)((int)local_a8 - (int)local_ea8);
          local_580 = (Elf32_Ehdr *)
                      (local_ea8->e_ident_magic_str + (int)(local_ac->e_ident_magic_str + -2));
          local_584 = local_b0;
          local_578 = local_a4;
        }
        local_574 = local_fb4;
        local_588 = (Elf32_Ehdr *)&DAT_00000001;
LAB_01220a74:
        pEVar22 = local_574;
        bVar42 = 1;
        if ((char)*(word *)&local_574->e_ident_abiversion != '\x02') {
          DataMemoryBarrier(0xb);
          if (*(int *)(*(uint *)local_574 + 0x1c) < 0) {
            iVar20 = FUN_0147fd3c(local_574,&local_120);
            pEVar23 = local_588;
            if (iVar20 != 0) {
LAB_01220eb0:
              local_564[0] = 3;
              uVar72 = 3;
              goto LAB_01220d34;
            }
            local_588 = (Elf32_Ehdr *)0x0;
            if (((uint)pEVar23 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_004090e8,0x1c,&DAT_018a5da0);
            }
            local_bc = local_1038[1];
            local_b8 = local_1038[2];
            local_b4 = local_1038[3];
            local_c0 = (undefined1  [4])*local_1038;
            if ((char)*(word *)&pEVar22->e_ident_abiversion == '\x02') {
              local_b0 = *local_1038;
              local_ac = local_1038[1];
              local_a8 = local_1038[2];
              local_a4 = local_1038[3];
              local_a0 = (Elf32_Ehdr *)CONCAT31(local_a0._1_3_,1);
            }
            else {
              FUN_0147f848(&local_b0,pEVar22,local_c0);
              if ((char)local_a0 == '\x02') {
LAB_01220a38:
                bVar42 = 2;
                if (((char)*(word *)&local_574->e_ident_abiversion != '\x02') &&
                   (DataMemoryBarrier(0xb), 0x7fffffff < *(uint *)(*(uint *)local_574 + 0x1c))) {
                  iVar20 = FUN_0147fd3c(local_574,&local_120);
                  if (iVar20 != 0) goto LAB_01220eb0;
                }
                goto LAB_01220a9c;
              }
            }
            pEVar24 = local_fa4;
            local_1d0._0_4_ = local_b0;
            local_1d0._4_4_ = local_ac;
            local_1c8 = local_a8;
            local_1c4 = local_a4;
            local_1c0 = local_a0;
            pEVar22 = local_1c0;
            local_1c0._0_1_ = (byte)local_a0;
            bVar42 = (byte)local_1c0;
            local_1c0 = pEVar22;
            if (local_b0 != (Elf32_Ehdr *)0x0) {
              (**(code **)&local_b0->e_type)(local_1034,local_ac,local_a8);
            }
          }
        }
LAB_01220a9c:
        pEVar22 = (Elf32_Ehdr *)0x0;
        if (local_588 != (Elf32_Ehdr *)0x0) {
          pEVar22 = local_584;
        }
        if (local_588 != (Elf32_Ehdr *)0x0 && pEVar22 != (Elf32_Ehdr *)0x0) {
          (**(code **)&pEVar22->e_type)(local_fe4,local_580,local_57c);
        }
        if (bVar42 != 2) goto LAB_01220b7c;
        uVar67._0_1_ = local_fc4->e_ident_magic_num;
        uVar67._1_1_ = local_fc4->e_ident_magic_str[0];
        uVar67._2_1_ = local_fc4->e_ident_magic_str[1];
        uVar67._3_1_ = local_fc4->e_ident_magic_str[2];
        uVar71._0_2_ = *(undefined2 *)&local_fc4->e_ident_class;
        uVar71._2_2_ = *(undefined2 *)&local_fc4->e_ident_version;
        uVar55 = *(uint *)local_fc0;
        uVar63 = *local_fc8;
        uVar36 = *local_fd8;
        uVar28 = local_fd8[1];
        uVar21 = uVar55 + uVar36;
        *(uint *)local_fc0 = uVar21;
        uVar28 = *(uint *)((int)local_fc0 + 4) + uVar28 + (uint)CARRY4(uVar55,uVar36);
        *(uint *)((int)local_fc0 + 4) = uVar28;
      } while( true );
    }
  }
  goto LAB_01222774;
code_r0x0121fd98:
  uVar36 = *puVar31;
  if (*puVar31 != uVar21) goto LAB_0121fd54;
  goto LAB_0121fd8c;
LAB_01220b7c:
  pbVar32 = (byte *)thunk_FUN_016d4a50(1);
  if (pbVar32 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(1,1);
  }
  *pbVar32 = bVar42 & 1;
  local_188 = 4;
  local_1d0._0_4_ = &SUB_00000002;
  local_170 = &DAT_018a51ac;
  local_174 = pbVar32;
  pEVar22 = (Elf32_Ehdr *)thunk_FUN_016d4a50(100);
  if (pEVar22 == (Elf32_Ehdr *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,100);
  }
  FUN_016dd1aa(pEVar22,local_1d0,100);
LAB_01220bdc:
  local_fb0 = pEVar22;
  if ((char)local_568 != '\x03') {
    FUN_0146a410(local_fb4);
  }
  uVar60 = local_598._4_4_;
  uVar56 = local_598._0_4_;
  if (*(code **)local_598._4_4_ != (code *)0x0) {
    (**(code **)local_598._4_4_)(local_598._0_4_);
  }
  if (*(int *)(uVar60 + 4) != 0) {
    thunk_FUN_016d3fb4(uVar56);
  }
  piVar65 = local_59c;
  if (((uint)local_59c & 1) == 0) {
    piVar37 = local_59c + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar20 = *piVar37;
      bVar73 = (bool)hasExclusiveAccess(piVar37);
    } while (!bVar73);
    *piVar37 = iVar20 + -1;
    if (iVar20 == 1) {
      DataMemoryBarrier(0xb);
      if (*local_59c != 0) {
        thunk_FUN_016d3fb4(local_59c[1]);
      }
      goto LAB_01220cb8;
    }
  }
  else if (local_5a0 + ((uint)local_59c >> 5) != 0) {
    piVar65 = (int *)((int)local_5a8 - ((uint)local_59c >> 5));
LAB_01220cb8:
    thunk_FUN_016d3fb4(piVar65);
  }
  local_564._0_3_ = 1;
  FUN_014751c4(local_fa0);
  pEVar22 = local_618;
  if (local_fb0 != (Elf32_Ehdr *)0x0) {
    pEVar23 = (Elf32_Ehdr *)0x0;
    auVar49 = (undefined1  [4])&DAT_00000004;
    if (local_618 != (Elf32_Ehdr *)0x0) {
      pwVar52 = (word *)&local_618->e_ident_abiversion;
      do {
        uVar69._0_1_ = local_618[2].e_ident_abiversion;
        uVar69._1_1_ = local_618[2].e_ident_pad[0];
        uVar69._2_1_ = local_618[2].e_ident_pad[1];
        uVar69._3_1_ = local_618[2].e_ident_pad[2];
        uVar21 = uVar69 | 4;
        bVar73 = (bool)hasExclusiveAccess(&local_618[2].e_ident_abiversion);
      } while (!bVar73);
      pEVar22[2].e_ident_abiversion = (char)uVar21;
      pEVar22[2].e_ident_pad[0] = (char)(uVar21 >> 8);
      pEVar22[2].e_ident_pad[1] = (char)(uVar21 >> 0x10);
      pEVar22[2].e_ident_pad[2] = (char)(uVar21 >> 0x18);
      DataMemoryBarrier(0xb);
      if ((uVar69 & 10) == 8) {
        uVar39._0_2_ = local_618[1].e_shnum;
        uVar39._2_2_ = local_618[1].e_shstrndx;
        (**(code **)(*(int *)&local_618[1].e_phnum + 8))(uVar39);
      }
      if ((uVar69 & 2) != 0) {
        FUN_016dd1aa(local_1d0,pwVar52,0x58);
        pEVar24 = local_fa4;
        pEVar22->e_ident_abiversion = 4;
        pEVar22->e_ident_pad[0] = 0;
        pEVar22->e_ident_pad[1] = 0;
        pEVar22->e_ident_pad[2] = 0;
        *(undefined4 *)((int)pEVar22->e_ident_pad + 3) = 0;
        if ((Elf32_Ehdr *)local_1d0._0_4_ != (Elf32_Ehdr *)&DAT_00000004 ||
            (Elf32_Ehdr *)local_1d0._4_4_ != (Elf32_Ehdr *)0x0) {
          FUN_0146b2dc(local_1d0);
        }
      }
      if (local_618 != (Elf32_Ehdr *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          uVar21 = *(uint *)local_618;
          bVar73 = (bool)hasExclusiveAccess(local_618);
        } while (!bVar73);
        *(uint *)local_618 = uVar21 - 1;
        if (uVar21 == 1) {
          DataMemoryBarrier(0xb);
          FUN_014a545c(local_618);
        }
      }
    }
    goto LAB_0122130c;
  }
  local_614._0_2_ = (word)(byte)local_614;
  local_610 = local_618;
switchD_01220894_caseD_4:
  FUN_01473398(local_1d0,local_fa0,local_e98);
  pEVar23 = (Elf32_Ehdr *)local_1d0._4_4_;
  auVar49 = (undefined1  [4])local_1d0._0_4_;
  if ((Elf32_Ehdr *)local_1d0._0_4_ == (Elf32_Ehdr *)&DAT_00000005 &&
      (Elf32_Ehdr *)local_1d0._4_4_ == (Elf32_Ehdr *)0x0) {
    uVar72 = 4;
LAB_01220d34:
    pEVar22 = local_fac;
    local_614 = (Elf32_Ehdr *)CONCAT31(local_614._1_3_,uVar72);
    uVar72 = local_fa8 == (Elf32_Ehdr *)&DAT_3b9aca00;
    if ((bool)uVar72) {
      uVar36 = 0x1220888;
      FUN_015fbbf8();
      uVar21 = extraout_r2_01;
    }
    else {
      FUN_0165a798(local_1d0);
      pEVar24 = local_fa4;
      pEVar23 = (Elf32_Ehdr *)0x0;
      bVar73 = local_1d0._4_4_ -
               (int)(local_fdc->e_ident_magic_str + (((uint)local_1d0._0_4_ < pEVar22) - 1)) < 0 !=
               (SBORROW4(local_1d0._4_4_,(int)local_fdc) !=
               SBORROW4(local_1d0._4_4_ - (int)local_fdc,(uint)((uint)local_1d0._0_4_ < pEVar22)));
      if ((Elf32_Ehdr *)local_1d0._0_4_ == pEVar22 && (Elf32_Ehdr *)local_1d0._4_4_ == local_fdc) {
        bVar73 = local_1c8 < local_fa8;
      }
      if (!bVar73) {
        auVar49 = (undefined1  [4])&DAT_00000004;
        local_fb0 = (Elf32_Ehdr *)0x0;
        goto LAB_01221328;
      }
      local_ac = local_fdc;
      local_a8 = local_fa8;
      local_110 = (Elf32_Ehdr *)local_1d0._0_4_;
      local_10c = (Elf32_Ehdr *)local_1d0._4_4_;
      local_108 = local_1c8;
      local_b0 = pEVar22;
      FUN_015f3c24(local_1d0,&local_b0,&local_110);
      uVar72 = ((byte)local_1d0[0] & 1) == 0;
      pEVar23 = *local_fe0;
      pEVar22 = local_fe0[1];
      pEVar25 = local_1c0;
      if (!(bool)uVar72) {
        pEVar23 = (Elf32_Ehdr *)0x0;
        pEVar22 = (Elf32_Ehdr *)0x0;
        pEVar25 = (Elf32_Ehdr *)0x0;
      }
      uVar36 = 0x1220df8;
      FUN_015f8614(pEVar23,pEVar22,pEVar25);
      uVar21 = extraout_r2_02;
    }
    goto LAB_01220888;
  }
  local_fb0 = local_1c8;
  FUN_016dd1aa(&local_110,local_1034,0x4c);
  pEVar22 = local_610;
  if (local_610 != (Elf32_Ehdr *)0x0) {
    pwVar52 = (word *)&local_610->e_ident_abiversion;
    do {
      uVar68._0_1_ = local_610[2].e_ident_abiversion;
      uVar68._1_1_ = local_610[2].e_ident_pad[0];
      uVar68._2_1_ = local_610[2].e_ident_pad[1];
      uVar68._3_1_ = local_610[2].e_ident_pad[2];
      uVar21 = uVar68 | 4;
      bVar73 = (bool)hasExclusiveAccess(&local_610[2].e_ident_abiversion);
    } while (!bVar73);
    pEVar22[2].e_ident_abiversion = (char)uVar21;
    pEVar22[2].e_ident_pad[0] = (char)(uVar21 >> 8);
    pEVar22[2].e_ident_pad[1] = (char)(uVar21 >> 0x10);
    pEVar22[2].e_ident_pad[2] = (char)(uVar21 >> 0x18);
    DataMemoryBarrier(0xb);
    if ((uVar68 & 10) == 8) {
      uVar38._0_2_ = local_610[1].e_shnum;
      uVar38._2_2_ = local_610[1].e_shstrndx;
      (**(code **)(*(int *)&local_610[1].e_phnum + 8))(uVar38);
    }
    if ((uVar68 & 2) != 0) {
      FUN_016dd1aa(local_1d0,pwVar52,0x58);
      pEVar24 = local_fa4;
      pEVar22->e_ident_abiversion = 4;
      pEVar22->e_ident_pad[0] = 0;
      pEVar22->e_ident_pad[1] = 0;
      pEVar22->e_ident_pad[2] = 0;
      *(undefined4 *)((int)pEVar22->e_ident_pad + 3) = 0;
      if ((Elf32_Ehdr *)local_1d0._0_4_ != (Elf32_Ehdr *)&DAT_00000004 ||
          (Elf32_Ehdr *)local_1d0._4_4_ != (Elf32_Ehdr *)0x0) {
        FUN_0146b2dc(local_1d0);
      }
    }
    if (local_610 != (Elf32_Ehdr *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        uVar21 = *(uint *)local_610;
        bVar73 = (bool)hasExclusiveAccess(local_610);
      } while (!bVar73);
      *(uint *)local_610 = uVar21 - 1;
      if (uVar21 == 1) {
        DataMemoryBarrier(0xb);
        FUN_014a545c(local_610);
      }
    }
  }
  if (auVar49 == (undefined1  [4])&DAT_00000004 && pEVar23 == (Elf32_Ehdr *)0x0) {
    FUN_014eb6cc();
LAB_01222774:
                    /* WARNING: Does not return */
    pcVar41 = (code *)software_udf(0xfdee,0x1222774);
    (*pcVar41)();
  }
  FUN_016dd1aa(local_1d0,&local_110,0x4c);
LAB_0122130c:
  local_614 = (Elf32_Ehdr *)CONCAT31(local_614._1_3_,1);
LAB_01221328:
  FUN_0147539c(local_640);
  local_fa8 = (Elf32_Ehdr *)0x0;
  (**(code **)((int)(local_e98._0_4_ + 9) + 3))(local_e98._4_4_);
  puVar26 = local_fb8;
  pEVar22 = local_fb0;
joined_r0x01221354:
  local_fb8 = puVar26;
  local_fb0 = pEVar22;
  if (((uint)auVar49 & 7) == 3) {
    local_640 = (undefined1  [4])local_1e8;
    local_63c = pEStack_1e4;
    local_638 = (undefined1  [4])pEStack_1e0;
    local_634 = pEStack_1dc;
LAB_01221838:
    uVar21 = (uint)local_630 >> 8;
    local_630 = (Elf32_Ehdr *)CONCAT31((int3)uVar21,local_1d8);
    uVar34._0_1_ = pEVar22->e_ident_magic_num;
    uVar34._1_1_ = pEVar22->e_ident_magic_str[0];
    uVar34._2_1_ = pEVar22->e_ident_magic_str[1];
    uVar34._3_1_ = pEVar22->e_ident_magic_str[2];
    bVar73 = uVar34 != 2;
    if (bVar73) {
      uVar34._0_2_ = pEVar22->e_type;
      uVar34._2_2_ = pEVar22->e_machine;
    }
    local_640 = (undefined1  [4])local_1e8;
    local_63c = pEStack_1e4;
    local_638 = (undefined1  [4])pEStack_1e0;
    local_634 = pEStack_1dc;
    if (bVar73 && uVar34 != 0) {
      thunk_FUN_016d3fb4(pEVar22->e_version);
    }
    ppEVar53 = (Elf32_Ehdr **)local_640;
    pEVar22->e_shoff = (dword)local_1024;
    pEVar22->e_flags = (dword)local_101c;
    pEVar22->e_ehsize = (undefined2)local_1018;
    pEVar22->e_phentsize = local_1018._2_2_;
    pEVar22->e_phnum = (undefined2)local_1014;
    pEVar22->e_shentsize = local_1014._2_2_;
    pEVar22->e_shnum = (undefined2)local_102c;
    pEVar22->e_shstrndx = local_102c._2_2_;
    *(short *)((int)&pEVar22->e_phoff + 2) = (short)local_1028;
    *(short *)&pEVar22->e_phoff = (short)local_1020;
    pEVar22->e_ident_magic_num = (undefined1)local_1010;
    pEVar22->e_ident_magic_str[0] = local_1010._1_1_;
    pEVar22->e_ident_magic_str[1] = local_1010._2_1_;
    pEVar22->e_ident_magic_str[2] = local_1010._3_1_;
    *(undefined2 *)&pEVar22->e_ident_class = (undefined2)local_100c;
    *(undefined2 *)&pEVar22->e_ident_version = local_100c._2_2_;
    *(Elf32_Ehdr **)&pEVar22->e_ident_abiversion = local_1008;
    *(Elf32_Ehdr **)((int)pEVar22->e_ident_pad + 3) = local_1004;
    *(Elf32_Ehdr **)&pEVar22->e_type = local_ff4;
    pEVar22->e_entry = (dword)local_ff4;
  }
  else {
    if (auVar49 != (undefined1  [4])&DAT_00000004) {
      do {
        uVar21 = *(uint *)pEVar24;
        bVar73 = (bool)hasExclusiveAccess(pEVar24);
      } while (!bVar73);
      *(uint *)pEVar24 = uVar21 + 1;
      if ((int)uVar21 < 0) goto LAB_01222774;
      *puVar26 = auVar49;
      puVar26[1] = pEVar23;
      puVar26[2] = pEVar22;
      FUN_016dd1aa(puVar26 + 3,local_1d0,0x4c);
      puVar26[0x1c] = pEVar24;
      puVar26[0x1a] = 0;
      puVar26[0x16] = local_1000;
      puVar26[0x17] = local_ffc;
      puVar26[0x18] = local_fe8;
      if (local_ff4 != (Elf32_Ehdr *)0x0) {
        thunk_FUN_016d3fb4(local_ff8);
      }
      goto LAB_012218ec;
    }
    if (pEVar22 != (Elf32_Ehdr *)0x0) {
      local_640 = (undefined1  [4])local_1e8;
      local_63c = pEStack_1e4;
      local_638 = (undefined1  [4])pEStack_1e0;
      local_634 = pEStack_1dc;
      goto LAB_01221838;
    }
    local_5e0 = &DAT_018a5134;
    local_5e8._4_4_ = &DAT_00000001;
    uVar21 = local_5f8 >> 0x10;
    local_5f8 = CONCAT22((short)uVar21,1);
    local_640 = (undefined1  [4])&SUB_00000002;
    pEVar22 = (Elf32_Ehdr *)thunk_FUN_016d4a50(100);
    if (pEVar22 == (Elf32_Ehdr *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,100);
    }
    FUN_016dd1aa(pEVar22,local_640,100);
    uVar33._0_1_ = pEVar22->e_ident_magic_num;
    uVar33._1_1_ = pEVar22->e_ident_magic_str[0];
    uVar33._2_1_ = pEVar22->e_ident_magic_str[1];
    uVar33._3_1_ = pEVar22->e_ident_magic_str[2];
    bVar73 = uVar33 != 2;
    if (bVar73) {
      uVar33._0_2_ = pEVar22->e_type;
      uVar33._2_2_ = pEVar22->e_machine;
    }
    if (bVar73 && uVar33 != 0) {
      thunk_FUN_016d3fb4(pEVar22->e_version);
    }
    pEVar22->e_shoff = (dword)local_1024;
    ppEVar53 = &local_1e8;
    pEVar22->e_flags = (dword)local_101c;
    pEVar22->e_ehsize = (undefined2)local_1018;
    pEVar22->e_phentsize = local_1018._2_2_;
    pEVar22->e_phnum = (undefined2)local_1014;
    pEVar22->e_shentsize = local_1014._2_2_;
    pEVar22->e_shnum = (undefined2)local_102c;
    pEVar22->e_shstrndx = local_102c._2_2_;
    *(short *)((int)&pEVar22->e_phoff + 2) = (short)local_1028;
    *(short *)&pEVar22->e_phoff = (short)local_1020;
    pEVar22->e_ident_magic_num = (undefined1)local_1010;
    pEVar22->e_ident_magic_str[0] = local_1010._1_1_;
    pEVar22->e_ident_magic_str[1] = local_1010._2_1_;
    pEVar22->e_ident_magic_str[2] = local_1010._3_1_;
    *(undefined2 *)&pEVar22->e_ident_class = (undefined2)local_100c;
    *(undefined2 *)&pEVar22->e_ident_version = local_100c._2_2_;
    *(Elf32_Ehdr **)&pEVar22->e_ident_abiversion = local_1008;
    *(Elf32_Ehdr **)((int)pEVar22->e_ident_pad + 3) = local_1004;
    *(Elf32_Ehdr **)&pEVar22->e_type = local_ff4;
    pEVar22->e_entry = (dword)local_ff4;
  }
  pEVar22->e_version = local_ff8;
  pEVar23 = ppEVar53[1];
  pEVar25 = ppEVar53[2];
  pEVar46 = ppEVar53[3];
  *(Elf32_Ehdr **)(pEVar22 + 1) = *ppEVar53;
  *(Elf32_Ehdr **)&pEVar22[1].e_ident_class = pEVar23;
  *(Elf32_Ehdr **)&pEVar22[1].e_ident_abiversion = pEVar25;
  *(Elf32_Ehdr **)(pEVar22[1].e_ident_pad + 3) = pEVar46;
  *(undefined1 *)&pEVar22[1].e_type = *(undefined1 *)(ppEVar53 + 4);
  local_fb8[1] = 0;
  local_fb8[2] = pEVar22;
  *local_fb8 = 3;
LAB_012218ec:
  DataMemoryBarrier(0xb);
  do {
    uVar21 = *(uint *)pEVar24;
    bVar73 = (bool)hasExclusiveAccess(pEVar24);
  } while (!bVar73);
  *(uint *)pEVar24 = uVar21 - 1;
LAB_01221904:
  if (uVar21 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014a5994(pEVar24);
  }
  DataMemoryBarrier(0xb);
  do {
    uVar21 = *(uint *)local_f9c;
    bVar73 = (bool)hasExclusiveAccess(local_f9c);
  } while (!bVar73);
  *(uint *)local_f9c = uVar21 - 1;
  if (uVar21 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014a5994();
    return;
  }
  return;
}

