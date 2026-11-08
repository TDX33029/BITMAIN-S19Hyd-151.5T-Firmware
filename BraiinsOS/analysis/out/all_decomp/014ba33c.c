// FUN_014ba33c @ 014ba33c size=1080 calls_out=11 calls_in=1
// strings: 

uint * FUN_014ba33c(uint *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 **ppuVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint uStack_234;
  uint uStack_230;
  uint local_22c;
  undefined *local_228;
  int local_224;
  int iStack_220;
  int iStack_21c;
  int local_218;
  int iStack_214;
  int iStack_210;
  int iStack_20c;
  uint local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 *local_188;
  uint local_184;
  uint local_180;
  uint *local_178;
  uint local_174;
  uint uStack_170;
  int iStack_16c;
  int iStack_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  uint local_140;
  int iStack_13c;
  int local_138;
  undefined2 local_134;
  undefined1 local_132;
  int local_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  undefined4 **local_d8;
  undefined1 *local_d4;
  undefined1 auStack_d0 [144];
  uint *local_40;
  uint *local_2c;
  
  if (*param_2 == 3 && param_2[1] == 0) {
    puVar10 = (uint *)param_2[2];
    uVar4 = *param_1;
    *param_1 = 2;
    if (uVar4 != 2) {
      local_d4 = (undefined1 *)0x0;
      local_d8 = (undefined4 **)0x3;
      puVar8 = &uStack_234;
      uStack_234 = uVar4;
      uStack_230 = param_1[1];
      local_22c = param_1[2];
      local_40 = puVar10;
LAB_014ba4a4:
      FUN_0147c5c4(puVar8,&local_d8);
      return (undefined4 *)0x0;
    }
    if ((char)param_1[5] == '\0') {
      uVar4 = param_1[4];
      DataMemoryBarrier(0xb);
      puVar8 = (uint *)(uVar4 + 8);
      do {
        local_178 = (uint *)*puVar8;
        bVar2 = (bool)hasExclusiveAccess(puVar8);
      } while (!bVar2);
      *puVar8 = 3;
      DataMemoryBarrier(0xb);
      if ((undefined4 *)0x1 < local_178) {
        if (local_178 == (undefined4 *)0x2) {
          pcVar7 = (char *)(uVar4 + 0x14);
          do {
            DataMemoryBarrier(0xb);
            do {
              cVar1 = *pcVar7;
              bVar2 = (bool)hasExclusiveAccess(pcVar7);
            } while (!bVar2);
            *pcVar7 = '\x01';
            DataMemoryBarrier(0xb);
          } while (cVar1 != '\0');
          iVar9 = *(int *)(uVar4 + 0xc);
          *(undefined4 *)(uVar4 + 0xc) = 0;
          DataMemoryBarrier(0xb);
          *(undefined1 *)(uVar4 + 0x14) = 0;
          DataMemoryBarrier(0xb);
          if (iVar9 != 0) {
            (**(code **)(iVar9 + 4))(*(undefined4 *)(uVar4 + 0x10));
          }
        }
        else if (local_178 != (undefined4 *)0x3) {
          local_d8 = &local_178;
          local_d4 = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00570d95,&local_d8,&DAT_018af288);
        }
      }
      uVar4 = param_1[3];
      if (*(char *)(uVar4 + 0x7c) == '\0') {
        *(undefined1 *)(uVar4 + 0x7c) = 1;
      }
      puVar8 = (uint *)(uVar4 + 0x80);
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar8);
      } while (!bVar2);
      *puVar8 = *puVar8 | 1;
      FUN_0163b708(uVar4 + 0x60);
      local_224 = 0;
      local_228 = &DAT_018a4fb0;
      FUN_0148e164(&local_d8,param_1[3],&local_228);
      ppuVar3 = local_d8;
      if (local_d8 != (undefined4 **)0x5 || local_d4 != (undefined1 *)0x0) {
        FUN_016dd1aa(&local_178,auStack_d0,0xa0);
        if ((((uint)local_d8 & 6) != 4) &&
           (FUN_016dd1aa(&local_228,&local_178,0xa0),
           local_d8 != (undefined4 **)0x3 || local_d4 != (undefined1 *)0x0)) {
          local_178 = (uint *)local_d8;
          local_174 = (uint)local_d4;
          FUN_016dd1aa(&uStack_170,&local_228,0x90);
          local_188 = (undefined4 *)local_198;
          local_184 = uStack_194;
          local_180 = uStack_190;
          puVar5 = (uint *)thunk_FUN_016d4a50(0xc);
          if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0xc);
          }
          *(undefined1 *)(puVar5 + 2) = 4;
          *puVar5 = 0;
          local_d8 = (undefined4 **)puVar10;
          local_2c = puVar5;
          puVar6 = (undefined4 *)thunk_FUN_016d4a50(4);
          if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,4);
          }
          *puVar6 = puVar10;
          *puVar5 = (uint)puVar6;
          puVar5[1] = (uint)&DAT_018a5314;
          local_d8 = ppuVar3;
          FUN_016dd1aa(auStack_d0,&local_228,0x90);
          puVar8 = (uint *)&local_188;
          local_40 = puVar5;
          goto LAB_014ba4a4;
        }
      }
    }
  }
  else {
    local_228 = (undefined *)param_2[0x12];
    local_224 = param_2[0x13];
    iStack_220 = param_2[0x14];
    iStack_21c = param_2[0x15];
    local_218 = param_2[0x16];
    iStack_214 = param_2[0x17];
    iStack_210 = param_2[0x18];
    iStack_20c = param_2[0x19];
    local_180 = param_1[2];
    local_188 = (undefined4 *)*param_1;
    local_184 = param_1[1];
    *param_1 = 2;
    if (local_188 != (undefined4 *)0x2) {
      local_130 = param_2[0x12];
      iStack_12c = param_2[0x13];
      iStack_128 = param_2[0x14];
      iStack_124 = param_2[0x15];
      local_120 = param_2[0x16];
      iStack_11c = param_2[0x17];
      iStack_118 = param_2[0x18];
      iStack_114 = param_2[0x19];
      local_134 = (undefined2)param_2[0x11];
      local_174 = 0;
      local_178 = (undefined4 *)0x0;
      local_132 = 2;
      local_138 = 0;
      local_140 = local_140 & 0xffff0000;
      local_144 = 0;
      local_148 = 4;
      local_14c = 0;
      local_150 = 0;
      local_154 = 4;
      local_158 = 0;
      local_15c = 0;
      local_160 = 2;
      FUN_01015c1c(&local_178);
      local_178 = (uint *)*param_2;
      local_174 = param_2[1];
      uStack_170 = param_2[2];
      iStack_16c = param_2[3];
      iStack_168 = param_2[4];
      local_164 = param_2[5];
      local_160 = param_2[6];
      local_15c = param_2[7];
      local_158 = param_2[8];
      local_154 = param_2[9];
      local_150 = param_2[10];
      local_14c = param_2[0xb];
      local_148 = param_2[0xc];
      local_144 = param_2[0xd];
      local_140 = param_2[0xe];
      iStack_13c = param_2[0xf];
      local_132 = *(undefined1 *)((int)param_2 + 0x46);
      local_138 = param_2[0x10];
      FUN_016dd1aa(auStack_d0,&local_178,0x68);
      local_d4 = (undefined1 *)0x0;
      local_d8 = (undefined4 **)0x4;
      local_178 = local_188;
      local_174 = local_184;
      uStack_170 = local_180;
      FUN_0147c5c4(&local_178,&local_d8);
      return (undefined4 *)0x0;
    }
    puVar10 = (uint *)thunk_FUN_016d4a50(0xc);
    if (puVar10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    *(undefined1 *)(puVar10 + 2) = 3;
    *puVar10 = 0;
    FUN_014ba880(&local_228);
    FUN_01015c1c(param_2);
    iVar9 = param_2[0x10];
    if (iVar9 != 0) {
      FUN_0148eea4(iVar9);
      thunk_FUN_016d3fb4(iVar9);
      return puVar10;
    }
  }
  return puVar10;
}

