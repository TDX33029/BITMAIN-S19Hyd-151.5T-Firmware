// FUN_016da798 @ 016da798 size=724 calls_out=3 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x016da978) */
/* WARNING: Removing unreachable block (ram,0x016da992) */
/* WARNING: Removing unreachable block (ram,0x016da990) */
/* WARNING: Removing unreachable block (ram,0x016da970) */
/* WARNING: Removing unreachable block (ram,0x016da976) */
/* WARNING: Removing unreachable block (ram,0x016da8fa) */
/* WARNING: Removing unreachable block (ram,0x016da900) */
/* WARNING: Removing unreachable block (ram,0x016da906) */
/* WARNING: Removing unreachable block (ram,0x016da91c) */
/* WARNING: Removing unreachable block (ram,0x016da930) */
/* WARNING: Removing unreachable block (ram,0x016da94e) */
/* WARNING: Removing unreachable block (ram,0x016da9a4) */
/* WARNING: Removing unreachable block (ram,0x016da9c2) */

void FUN_016da798(int param_1,uint *param_2)

{
  undefined1 *puVar1;
  undefined1 *extraout_r1;
  uint uStack_14c;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  uint local_110;
  uint uStack_10c;
  uint local_108;
  uint local_f0;
  uint uStack_ec;
  uint local_e8;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d0;
  uint uStack_cc;
  uint local_c8;
  uint uStack_c4;
  
  if (param_1 < 0) {
    FUN_016d3496(0xfffffff7);
    return;
  }
  puVar1 = &DAT_0059e494;
  software_interrupt(0);
  if (param_1 == 0) {
    FUN_016dd606(param_2,0,0x98);
    param_2[4] = local_134 & 0xffff;
    param_2[5] = local_140;
    param_2[6] = local_13c;
    param_2[7] = local_138;
    param_2[0xe] = uStack_14c;
    param_2[0x13] = local_108;
    param_2[0x1c] = local_108;
    param_2[0x1b] = uStack_10c;
    param_2[0x14] = local_e0;
    param_2[0x1e] = local_e0;
    param_2[0x1f] = local_dc;
    param_2[0x15] = local_d8;
    param_2[0x20] = local_d8;
    param_2[0x23] = uStack_ec;
    param_2[0x16] = local_f0;
    param_2[0x12] = local_110;
    param_2[0x1a] = local_110;
    *(undefined8 *)(param_2 + 0xc) = local_128;
    *(undefined8 *)(param_2 + 0x10) = local_120;
    *(undefined8 *)(param_2 + 0x18) = local_130;
    param_2[0x22] = local_f0;
    param_2[9] = local_d0 & 0xfffff000 | uStack_cc >> 0x14;
    param_2[0x17] = local_e8;
    param_2[0x24] = local_e8;
    param_2[1] = local_c8 & 0xfffff000 | uStack_c4 >> 0x14;
    *param_2 = (uStack_c4 & 0xfff00) << 0xc | (local_c8 & 0xfff) << 8 | uStack_c4 & 0xff;
    param_2[8] = (local_d0 & 0xfff) << 8 | uStack_cc & 0xff | (uStack_cc & 0xfff00) << 0xc;
    puVar1 = extraout_r1;
  }
  else if (param_1 == -0x26) {
    software_interrupt(0);
    puVar1 = &DAT_0059e494;
  }
  FUN_016d3496(param_1,puVar1);
  return;
}

