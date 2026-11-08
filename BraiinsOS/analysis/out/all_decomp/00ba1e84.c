// FUN_00ba1e84 @ 00ba1e84 size=564 calls_out=5 calls_in=4
// strings: 

void FUN_00ba1e84(uint *param_1,uint *param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined1 auStack_328 [304];
  uint local_1f8;
  int local_1f4;
  uint local_1f0;
  uint local_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  uint local_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  uint uStack_1c8;
  uint local_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  uint local_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  uint local_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint uStack_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  undefined2 local_180;
  uint local_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  uint local_168;
  uint uStack_164;
  uint uStack_160;
  
  uVar14 = param_2[0x68];
  uVar8 = param_2[0x67];
  uVar10 = param_2[0x81];
  if (uVar14 == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(uVar14);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar14);
    }
  }
  FUN_016dd1aa(iVar2,uVar8,uVar14);
  FUN_00ba20ec(&local_168,param_2 + 0x1a);
  FUN_016dd1aa(auStack_328,&local_168,0x130);
  local_1e8 = param_2[0x6a];
  uStack_1e4 = param_2[0x6b];
  uStack_1e0 = param_2[0x6c];
  uStack_1dc = param_2[0x6d];
  local_1d8 = param_2[0x6e];
  uStack_1d4 = param_2[0x6f];
  uStack_1d0 = param_2[0x70];
  uStack_1cc = param_2[0x71];
  uStack_1c8 = param_2[0x72];
  local_1c4 = param_2[0x73];
  uStack_1c0 = param_2[0x74];
  uStack_1bc = param_2[0x75];
  uStack_1b8 = param_2[0x76];
  uStack_1b4 = param_2[0x77];
  local_188 = param_2[0x82];
  local_184 = param_2[0x83];
  local_180 = (undefined2)param_2[0x84];
  local_190 = param_2[0x80];
  local_1b0 = param_2[0x78];
  uStack_1ac = param_2[0x79];
  uStack_1a8 = param_2[0x7a];
  uStack_1a4 = param_2[0x7b];
  local_1a0 = param_2[0x7c];
  uStack_19c = param_2[0x7d];
  uStack_198 = param_2[0x7e];
  uStack_194 = param_2[0x7f];
  bVar16 = (*param_2 & 1) == 0;
  if (bVar16) {
    local_178 = param_2[2];
    uStack_174 = param_2[3];
    uStack_170 = param_2[4];
    uStack_16c = param_2[5];
  }
  uVar3 = param_2[0xc];
  uVar6 = param_2[0xd];
  uVar4 = param_2[0x10];
  uVar7 = param_2[0x11];
  uVar1 = *(undefined1 *)((int)param_2 + 0x61);
  uVar8 = param_2[0x18];
  uVar5 = param_2[0x12];
  uVar13 = param_2[0xe];
  uVar15 = param_2[0x16];
  uVar17 = *(undefined8 *)(param_2 + 0x14);
  uVar18 = param_2[0x17];
  local_1f8 = uVar14;
  local_1f4 = iVar2;
  local_1f0 = uVar14;
  local_18c = uVar10;
  FUN_00ccdbf4(&local_168,param_2[0x87],param_2[0x88]);
  FUN_016dd1aa(param_1 + 0x1a,auStack_328,0x1b0);
  *param_1 = (uint)!bVar16;
  param_1[1] = 0;
  param_1[2] = local_178;
  param_1[3] = uStack_174;
  param_1[4] = uStack_170;
  param_1[5] = uStack_16c;
  uVar10 = param_2[7];
  uVar14 = param_2[8];
  uVar9 = param_2[9];
  uVar11 = param_2[10];
  uVar12 = param_2[0xb];
  param_1[6] = param_2[6];
  param_1[7] = uVar10;
  param_1[8] = uVar14;
  param_1[9] = uVar9;
  param_1[10] = uVar11;
  param_1[0xb] = uVar12;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar6;
  param_1[0x10] = uVar4;
  *(undefined1 *)((int)param_1 + 0x61) = uVar1;
  *(char *)(param_1 + 0x18) = (char)uVar8;
  param_1[0x12] = uVar5;
  param_1[0x11] = uVar7;
  param_1[0xe] = uVar13;
  param_1[0x17] = uVar18;
  param_1[0x16] = uVar15;
  *(undefined8 *)(param_1 + 0x14) = uVar17;
  param_1[0x86] = local_168;
  param_1[0x87] = uStack_164;
  param_1[0x88] = uStack_160;
  return;
}

