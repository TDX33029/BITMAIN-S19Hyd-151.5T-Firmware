// FUN_015f1494 @ 015f1494 size=580 calls_out=2 calls_in=2
// strings: 

void FUN_015f1494(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *extraout_r2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  
  uVar10 = thunk_FUN_01bee35a(param_1,0x2c0,param_1);
  puVar4 = (uint *)((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20));
  if ((char)puVar4[4] == '\0') {
    FUN_019ae6ac(&local_48);
    *puVar4 = local_48;
    puVar4[1] = uStack_44;
    puVar4[2] = uStack_40;
    puVar4[3] = uStack_3c;
    *(undefined1 *)(puVar4 + 4) = 1;
  }
  uVar3 = *puVar4;
  uVar9 = puVar4[1];
  uVar6 = puVar4[2];
  uVar1 = puVar4[3];
  uVar5 = uVar9 + (0xfffffffe < uVar3);
  *puVar4 = uVar3 + 1;
  puVar4[1] = uVar5;
  uVar7 = uVar9 + (0xfffffffd < uVar3);
  *puVar4 = uVar3 + 2;
  puVar4[1] = uVar7;
  uVar8 = uVar9 + (0xfffffffc < uVar3);
  *puVar4 = uVar3 + 3;
  puVar4[1] = uVar8;
  uVar2 = uVar9 + (0xfffffffb < uVar3);
  *puVar4 = uVar3 + 4;
  puVar4[1] = uVar2;
  *puVar4 = uVar3 + 5;
  puVar4[1] = uVar9 + (0xfffffffa < uVar3);
  *extraout_r2 = &DAT_0056d238;
  extraout_r2[1] = 0;
  extraout_r2[2] = 0;
  extraout_r2[3] = 0;
  extraout_r2[4] = uVar3;
  extraout_r2[5] = uVar9;
  extraout_r2[6] = uVar6;
  extraout_r2[7] = uVar1;
  extraout_r2[8] = &DAT_0056d238;
  extraout_r2[9] = 0;
  extraout_r2[10] = 0;
  extraout_r2[0xb] = 0;
  extraout_r2[0xc] = uVar3 + 1;
  extraout_r2[0xd] = uVar5;
  extraout_r2[0xe] = uVar6;
  extraout_r2[0xf] = uVar1;
  extraout_r2[0x28] = 0;
  extraout_r2[0x2a] = 0;
  extraout_r2[0x29] = 8;
  extraout_r2[0x10] = &DAT_0056d238;
  extraout_r2[0x11] = 0;
  extraout_r2[0x12] = 0;
  extraout_r2[0x13] = 0;
  extraout_r2[0x14] = uVar3 + 2;
  extraout_r2[0x15] = uVar7;
  extraout_r2[0x16] = uVar6;
  extraout_r2[0x17] = uVar1;
  extraout_r2[0x18] = &DAT_0056d238;
  extraout_r2[0x19] = 0;
  extraout_r2[0x1a] = 0;
  extraout_r2[0x1b] = 0;
  extraout_r2[0x1c] = uVar3 + 3;
  extraout_r2[0x1d] = uVar8;
  extraout_r2[0x1e] = uVar6;
  extraout_r2[0x1f] = uVar1;
  extraout_r2[0x20] = &DAT_0056d238;
  extraout_r2[0x21] = 0;
  extraout_r2[0x22] = 0;
  extraout_r2[0x23] = 0;
  extraout_r2[0x24] = uVar3 + 4;
  extraout_r2[0x27] = uVar1;
  extraout_r2[0x25] = uVar2;
  extraout_r2[0x26] = uVar6;
  return;
}

