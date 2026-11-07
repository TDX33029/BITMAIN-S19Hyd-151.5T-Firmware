// FUN_01428440 @ 01428440 size=1068 calls_out=11 calls_in=1
// strings: 

uint * FUN_01428440(uint *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint uStack_22c;
  uint uStack_228;
  uint local_224;
  undefined **local_220;
  int local_21c;
  int iStack_218;
  int iStack_214;
  int local_210;
  int iStack_20c;
  int iStack_208;
  int iStack_204;
  uint local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 *local_180;
  uint local_17c;
  uint local_178;
  uint *local_170;
  uint local_16c;
  uint uStack_168;
  int iStack_164;
  int iStack_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  uint local_138;
  int iStack_134;
  int local_130;
  undefined2 local_12c;
  undefined1 local_12a;
  int local_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined4 **local_d0;
  undefined1 *local_cc;
  undefined1 auStack_c8 [144];
  uint *local_38;
  
  if (*param_2 == 3 && param_2[1] == 0) {
    puVar10 = (uint *)param_2[2];
    uVar4 = *param_1;
    *param_1 = 2;
    if (uVar4 != 2) {
      local_cc = (undefined1 *)0x0;
      local_d0 = (undefined4 **)0x3;
      puVar8 = &uStack_22c;
      uStack_22c = uVar4;
      uStack_228 = param_1[1];
      local_224 = param_1[2];
      local_38 = puVar10;
LAB_014285a8:
      FUN_0141c464(puVar8,&local_d0);
      return (undefined4 *)0x0;
    }
    if ((char)param_1[5] == '\0') {
      uVar4 = param_1[4];
      DataMemoryBarrier(0xb);
      puVar8 = (uint *)(uVar4 + 8);
      do {
        local_170 = (uint *)*puVar8;
        bVar2 = (bool)hasExclusiveAccess(puVar8);
      } while (!bVar2);
      *puVar8 = 3;
      DataMemoryBarrier(0xb);
      if ((undefined4 *)0x1 < local_170) {
        if (local_170 == (undefined4 *)0x2) {
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
        else if (local_170 != (undefined4 *)0x3) {
          local_d0 = &local_170;
          local_cc = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00570d95,&local_d0,&DAT_018af288);
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
      local_21c = 0;
      local_220 = &PTR_LAB_018a3cf4;
      FUN_0143fde8(&local_d0,param_1[3],&local_220);
      puVar3 = local_cc;
      if (((local_d0 != (undefined4 **)0x5 || local_cc != (undefined1 *)0x0) &&
          (FUN_016dd1aa(&local_170,auStack_c8,0xa0), ((uint)local_d0 & 6) != 4)) &&
         (FUN_016dd1aa(&local_220,&local_170,0xa0),
         local_d0 != (undefined4 **)0x3 || puVar3 != (undefined1 *)0x0)) {
        local_170 = (uint *)local_d0;
        local_16c = (uint)puVar3;
        FUN_016dd1aa(&uStack_168,&local_220,0x90);
        local_180 = (undefined4 *)local_190;
        local_17c = uStack_18c;
        local_178 = uStack_188;
        puVar5 = (uint *)thunk_FUN_016d4a50(0xc);
        if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        *(undefined1 *)(puVar5 + 2) = 4;
        *puVar5 = 0;
        local_d0 = (undefined4 **)puVar10;
        puVar6 = (undefined4 *)thunk_FUN_016d4a50(4);
        if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,4);
        }
        *puVar6 = puVar10;
        *puVar5 = (uint)puVar6;
        puVar5[1] = (uint)&DAT_018a3e18;
        FUN_016dd1aa(&local_d0,&local_170,0x98);
        puVar8 = (uint *)&local_180;
        local_38 = puVar5;
        goto LAB_014285a8;
      }
    }
  }
  else {
    local_220 = (undefined **)param_2[0x12];
    local_21c = param_2[0x13];
    iStack_218 = param_2[0x14];
    iStack_214 = param_2[0x15];
    local_210 = param_2[0x16];
    iStack_20c = param_2[0x17];
    iStack_208 = param_2[0x18];
    iStack_204 = param_2[0x19];
    local_178 = param_1[2];
    local_180 = (undefined4 *)*param_1;
    local_17c = param_1[1];
    *param_1 = 2;
    if (local_180 != (undefined4 *)0x2) {
      local_128 = param_2[0x12];
      iStack_124 = param_2[0x13];
      iStack_120 = param_2[0x14];
      iStack_11c = param_2[0x15];
      local_118 = param_2[0x16];
      iStack_114 = param_2[0x17];
      iStack_110 = param_2[0x18];
      iStack_10c = param_2[0x19];
      local_12c = (undefined2)param_2[0x11];
      local_16c = 0;
      local_170 = (undefined4 *)0x0;
      local_12a = 2;
      local_130 = 0;
      local_138 = local_138 & 0xffff0000;
      local_13c = 0;
      local_140 = 4;
      local_144 = 0;
      local_148 = 0;
      local_14c = 4;
      local_150 = 0;
      local_154 = 0;
      local_158 = 2;
      FUN_00a517d8(&local_170);
      local_170 = (uint *)*param_2;
      local_16c = param_2[1];
      uStack_168 = param_2[2];
      iStack_164 = param_2[3];
      iStack_160 = param_2[4];
      local_15c = param_2[5];
      local_158 = param_2[6];
      local_154 = param_2[7];
      local_150 = param_2[8];
      local_14c = param_2[9];
      local_148 = param_2[10];
      local_144 = param_2[0xb];
      local_140 = param_2[0xc];
      local_13c = param_2[0xd];
      local_138 = param_2[0xe];
      iStack_134 = param_2[0xf];
      local_12a = *(undefined1 *)((int)param_2 + 0x46);
      local_130 = param_2[0x10];
      FUN_016dd1aa(auStack_c8,&local_170,0x68);
      local_cc = (undefined1 *)0x0;
      local_d0 = (undefined4 **)0x4;
      local_170 = local_180;
      local_16c = local_17c;
      uStack_168 = local_178;
      FUN_0141c464(&local_170,&local_d0);
      return (undefined4 *)0x0;
    }
    puVar10 = (uint *)thunk_FUN_016d4a50(0xc);
    if (puVar10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    *(undefined1 *)(puVar10 + 2) = 3;
    *puVar10 = 0;
    FUN_0141852c(&local_220);
    FUN_00a517d8(param_2);
    iVar9 = param_2[0x10];
    if (iVar9 != 0) {
      FUN_0148eea4(iVar9);
      thunk_FUN_016d3fb4(iVar9);
      return puVar10;
    }
  }
  return puVar10;
}

