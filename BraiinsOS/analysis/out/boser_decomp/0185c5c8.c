// FUN_0185c5c8 @ 0185c5c8 size=904 calls_out=6 calls_in=4
// strings: size overflows MAX_SIZE

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0185c5c8(int *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_r2;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined **local_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  uint uStack_100;
  int local_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  undefined4 local_c4;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  int local_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_98;
  int local_94;
  int iStack_90;
  int local_88;
  int local_84;
  int local_80;
  int local_78;
  int local_74;
  int local_70;
  undefined **local_68;
  undefined1 *local_64;
  int local_60;
  int local_5c;
  uint local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  FUN_01414348(&local_68,2);
  if (local_68 == (undefined **)0x3 && local_64 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("size overflows MAX_SIZE",0x17,&local_c0,&DAT_01d2f38c,&DAT_01d1e424);
  }
  local_110 = local_68;
  iStack_10c = (int)local_64;
  iStack_108 = local_60;
  iStack_104 = local_5c;
  uStack_100 = local_58;
  local_fc = local_54;
  iStack_f8 = local_50;
  iStack_f4 = iStack_4c;
  iStack_f0 = iStack_48;
  iStack_ec = iStack_44;
  local_e8 = local_40;
  iStack_e4 = iStack_3c;
  iStack_e0 = iStack_38;
  iStack_dc = iStack_34;
  iStack_d8 = iStack_30;
  iStack_d4 = iStack_2c;
  local_c4 = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d0 = 0;
  iVar4 = 0;
  while (((byte)(&DAT_0050da9f)[-iVar4] == 9 || ((byte)(&DAT_0050da9f)[-iVar4] - 0x20 < 0x5f))) {
    bVar8 = iVar4 == -2;
    iVar4 = iVar4 + -1;
    if (bVar8) {
      local_58 = local_58 & 0xffffff00;
      local_5c = 0;
      local_64 = &DAT_0050da9f;
      local_60 = 3;
      local_68 = &PTR_FUN_01d1f218;
      FUN_0141d310(&local_c0,&local_110,&local_d0,&local_68);
      if ((char)local_b0 != '\x02') {
        (**(code **)(local_c0 + 0x10))(&uStack_b4,uStack_bc,uStack_b8);
      }
      local_a4 = 8;
      local_94 = 10;
      local_a0 = 0;
      local_a8 = 0;
      local_98 = 1;
      local_50 = 0;
      local_54 = 2;
      local_60 = 1;
      local_68 = (undefined **)0x0;
      local_80 = 0;
      local_84 = 4;
      local_88 = 0;
      local_70 = 0;
      local_74 = 4;
      local_78 = 0;
      uVar9 = thunk_FUN_01bee35a(1,0x2c0);
      puVar5 = (uint *)((int)uVar9 + (int)((ulonglong)uVar9 >> 0x20));
      local_c8 = 0;
      local_d0 = 0;
      local_cc = extraout_r2;
      if ((char)puVar5[4] == '\0') {
        FUN_019ae6ac(&local_c0);
        *puVar5 = local_c0;
        puVar5[1] = uStack_bc;
        puVar5[2] = uStack_b8;
        puVar5[3] = uStack_b4;
        *(undefined1 *)(puVar5 + 4) = 1;
      }
      uVar6 = *puVar5;
      uVar7 = puVar5[1];
      uVar1 = puVar5[2];
      uVar2 = puVar5[3];
      *puVar5 = uVar6 + 1;
      puVar5[1] = uVar7 + (0xfffffffe < uVar6);
      *param_1 = (int)local_110;
      param_1[1] = iStack_10c;
      param_1[2] = iStack_108;
      param_1[3] = iStack_104;
      param_1[4] = uStack_100;
      param_1[5] = local_fc;
      param_1[6] = iStack_f8;
      param_1[7] = iStack_f4;
      param_1[8] = iStack_f0;
      param_1[9] = iStack_ec;
      param_1[10] = local_e8;
      param_1[0xb] = iStack_e4;
      param_1[0xc] = iStack_e0;
      param_1[0xd] = iStack_dc;
      param_1[0xe] = iStack_d8;
      param_1[0xf] = iStack_d4;
      param_1[0x71] = 3;
      param_1[0x78] = local_a8;
      param_1[0x79] = local_a4;
      param_1[0x7a] = local_a0;
      param_1[0x6e] = local_98;
      param_1[0x6f] = local_94;
      param_1[0x70] = iStack_90;
      param_1[0x12] = (int)local_68;
      param_1[0x13] = (int)local_64;
      param_1[0x14] = local_60;
      param_1[0x15] = local_5c;
      param_1[0x16] = local_58;
      param_1[0x17] = local_54;
      param_1[0x18] = local_50;
      param_1[0x19] = iStack_4c;
      param_1[0x7b] = local_88;
      param_1[0x7c] = local_84;
      param_1[0x7d] = local_80;
      param_1[0x7e] = local_78;
      param_1[0x7f] = local_74;
      param_1[0x80] = local_70;
      param_1[0x1a] = 2;
      param_1[0x81] = local_d0;
      param_1[0x82] = local_cc;
      param_1[0x83] = local_c8;
      param_1[0x84] = -0x80000000;
      puVar3 = (undefined4 *)((uint)&local_c0 | 4);
      *puVar3 = &DAT_0056d238;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      param_1[0x4c] = 0;
      param_1[0x50] = 0;
      param_1[0x4a] = 0x5a;
      param_1[0x4e] = 0xf;
      param_1[0x52] = 0xf;
      param_1[0x56] = 0x1e;
      param_1[0x10] = 1;
      param_1[0x11] = 3;
      param_1[0x48] = (int)&DAT_3b9aca00;
      param_1[0x60] = (int)&DAT_3b9aca00;
      param_1[0x5c] = (int)&DAT_3b9aca00;
      param_1[0x4b] = 0;
      param_1[0x4f] = 0;
      param_1[0x53] = 0;
      param_1[0x57] = 0;
      param_1[0x54] = 0;
      param_1[0x58] = 0;
      param_1[0x61] = local_c0;
      param_1[0x62] = uStack_bc;
      param_1[99] = uStack_b8;
      param_1[100] = uStack_b4;
      param_1[0x65] = local_b0;
      *(undefined2 *)(param_1 + 0x8b) = 0x100;
      *(undefined2 *)((int)param_1 + 0x247) = 0x404;
      param_1[0x68] = uVar1;
      param_1[0x69] = uVar2;
      param_1[0x66] = uVar6;
      param_1[0x8a] = 0x1010101;
      param_1[0x67] = uVar7;
      *(undefined4 *)((int)param_1 + 0x22e) = 0;
      param_1[0x87] = -1;
      param_1[0x88] = 0;
      param_1[0x89] = 0x10101;
      param_1[0x6c] = 0;
      param_1[0x6a] = 0;
      *(undefined1 *)((int)param_1 + 0x232) = 0;
      *(undefined4 *)((int)param_1 + 0x233) = 0x2000001;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(0,0,&DAT_01d2e4bc);
}

