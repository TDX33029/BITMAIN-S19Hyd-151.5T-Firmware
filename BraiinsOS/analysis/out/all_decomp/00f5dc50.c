// FUN_00f5dc50 @ 00f5dc50 size=292 calls_out=3 calls_in=1
// strings: 

void FUN_00f5dc50(uint *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  undefined1 auStack_a8 [56];
  uint local_70;
  uint local_6c;
  byte local_68;
  undefined1 auStack_60 [56];
  uint local_28;
  uint local_24;
  
  FUN_016dd1aa(&local_d0,param_2,0x70);
  puVar1 = auStack_a8;
  uVar2 = (uint)local_68;
  puVar1[uVar2] = 0x80;
  uVar3 = uVar2 << 0x1b | ((local_b0 << 9 | uVar2 << 3) >> 8 & 0xff) << 0x10 |
          ((local_b0 & 0x7fffff) >> 7 & 0xff) << 8 | (local_b0 & 0x7fffff) >> 0xf;
  uVar4 = (local_b0 >> 0x17) << 0x18 | ((local_ac << 9 | local_b0 >> 0x17) >> 8 & 0xff) << 0x10 |
          ((local_ac & 0x7fffff) >> 7 & 0xff) << 8 | (local_ac & 0x7fffff) >> 0xf;
  if ((uVar2 == 0x3f) || (FUN_016dd606(auStack_a8 + uVar2 + 1,0), (uVar2 ^ 0x38) < 8)) {
    FUN_01585360(&local_d0,puVar1,1);
    puVar1 = auStack_60;
    FUN_016dd606(puVar1,0,0x38);
    local_28 = uVar4;
    local_24 = uVar3;
  }
  else {
    local_70 = uVar4;
    local_6c = uVar3;
  }
  FUN_01585360(&local_d0,puVar1,1);
  param_1[7] = local_b4 << 0x18 | (local_b4 >> 8 & 0xff) << 0x10 | (local_b4 >> 0x10 & 0xff) << 8 |
               local_b4 >> 0x18;
  param_1[6] = local_b8 << 0x18 | (local_b8 >> 8 & 0xff) << 0x10 | (local_b8 >> 0x10 & 0xff) << 8 |
               local_b8 >> 0x18;
  param_1[5] = local_bc << 0x18 | (local_bc >> 8 & 0xff) << 0x10 | (local_bc >> 0x10 & 0xff) << 8 |
               local_bc >> 0x18;
  param_1[4] = local_c0 << 0x18 | (local_c0 >> 8 & 0xff) << 0x10 | (local_c0 >> 0x10 & 0xff) << 8 |
               local_c0 >> 0x18;
  param_1[3] = uStack_c4 << 0x18 | (uStack_c4 >> 8 & 0xff) << 0x10 | (uStack_c4 >> 0x10 & 0xff) << 8
               | uStack_c4 >> 0x18;
  param_1[2] = uStack_c8 << 0x18 | (uStack_c8 >> 8 & 0xff) << 0x10 | (uStack_c8 >> 0x10 & 0xff) << 8
               | uStack_c8 >> 0x18;
  param_1[1] = uStack_cc << 0x18 | (uStack_cc >> 8 & 0xff) << 0x10 | (uStack_cc >> 0x10 & 0xff) << 8
               | uStack_cc >> 0x18;
  *param_1 = local_d0 << 0x18 | (local_d0 >> 8 & 0xff) << 0x10 | (local_d0 >> 0x10 & 0xff) << 8 |
             local_d0 >> 0x18;
  return;
}

