// FUN_01741050 @ 01741050 size=1052 calls_out=4 calls_in=1
// strings: 

void FUN_01741050(undefined4 *param_1,undefined4 *param_2,byte *param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int *piVar17;
  undefined4 uVar18;
  uint uVar19;
  int *piVar20;
  undefined4 uVar21;
  undefined4 local_330;
  undefined4 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 local_280;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined2 local_254;
  int *local_250;
  uint *local_24c;
  int *local_248;
  undefined4 local_244;
  undefined1 auStack_240 [72];
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 local_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined1 auStack_1c8 [112];
  undefined1 auStack_158 [72];
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint local_f8;
  uint *local_f4;
  uint uStack_f0;
  uint uStack_ec;
  
  piVar17 = (int *)param_2[0x2e];
  do {
    iVar8 = *piVar17;
    bVar7 = (bool)hasExclusiveAccess(piVar17);
  } while (!bVar7);
  *piVar17 = iVar8 + 1;
  if (-1 < iVar8) {
    piVar20 = (int *)param_2[0x39];
    uVar21 = param_2[0x2f];
    if (piVar20 != (int *)0x0) {
      do {
        iVar8 = *piVar20;
        bVar7 = (bool)hasExclusiveAccess(piVar20);
      } while (!bVar7);
      *piVar20 = iVar8 + 1;
      if (iVar8 < 0) goto LAB_01741468;
    }
    uVar13 = param_2[0x37];
    uVar11 = param_2[0x34];
    uVar2 = *(undefined1 *)((int)param_2 + 0xe2);
    local_2b8._0_3_ = (undefined3)*(undefined4 *)((int)param_2 + 0xd9);
    local_2b8._3_1_ = (undefined1)uVar13;
    uVar18 = param_2[0x30];
    uVar14 = param_2[0x31];
    uVar16 = param_2[0x32];
    uVar15 = param_2[0x33];
    local_250 = (int *)param_2[0x18];
    uVar12 = param_2[0x35];
    uVar3 = *(undefined1 *)(param_2 + 0x38);
    uVar4 = *(undefined1 *)(param_2 + 0x36);
    uVar5 = *(undefined1 *)((int)param_2 + 0xe1);
    do {
      iVar8 = *local_250;
      bVar7 = (bool)hasExclusiveAccess(local_250);
    } while (!bVar7);
    *local_250 = iVar8 + 1;
    if (-1 < iVar8) {
      local_248 = (int *)param_2[0x1a];
      puVar9 = (uint *)param_2[0x19];
      if (local_248 != (int *)0x0) {
        do {
          iVar8 = *local_248;
          bVar7 = (bool)hasExclusiveAccess(local_248);
        } while (!bVar7);
        *local_248 = iVar8 + 1;
        if (iVar8 < 0) goto LAB_01741468;
        local_330 = param_2[0x1b];
      }
      local_2b0 = *param_2;
      local_2ac = param_2[1];
      local_2a8 = param_2[2];
      local_2a4 = param_2[3];
      local_2a0 = param_2[4];
      local_29c = param_2[5];
      local_298 = param_2[6];
      local_270 = param_2[0x10];
      local_268 = param_2[0x12];
      local_264 = param_2[0x13];
      local_260 = param_2[0x14];
      local_25c = param_2[0x15];
      local_258 = param_2[0x16];
      local_254 = *(undefined2 *)(param_2 + 0x17);
      local_290 = param_2[8];
      local_288 = param_2[10];
      uStack_284 = param_2[0xb];
      local_278 = param_2[0xe];
      local_274 = param_2[0xf];
      uVar6 = *(undefined1 *)((int)param_2 + 0xea);
      local_294 = param_2[7];
      local_280 = param_2[0xc];
      local_28c = param_2[9];
      local_244 = local_330;
      local_24c = puVar9;
      FUN_01743390(auStack_240,param_2 + 0x1c);
      uVar19 = (uint)*param_3;
      if (uVar19 == 0) {
        local_f8 = 0;
      }
      else if (uVar19 == 1) {
        local_f8 = (uint)param_3[1] << 8;
      }
      else {
        puVar9 = (uint *)FUN_014333b0();
        puVar10 = *(undefined4 **)(param_3 + 4);
        (**(code **)*puVar10)(&local_f8,puVar10 + 3,puVar10[1],puVar10[2]);
        *puVar9 = local_f8;
        puVar9[1] = (uint)local_f4;
        puVar9[2] = uStack_f0;
        puVar9[3] = uStack_ec;
        local_f8 = 0;
      }
      local_f8 = local_f8 | uVar19;
      local_f4 = puVar9;
      (*(code *)**(undefined4 **)(param_3 + 8))
                (&uStack_f0,param_3 + 0x14,*(undefined4 *)(param_3 + 0xc),
                 *(undefined4 *)(param_3 + 0x10));
      FUN_01441788(&local_1f8,&local_f8);
      local_110 = *(undefined4 *)param_3;
      uStack_10c = *(undefined4 *)(param_3 + 4);
      uStack_108 = *(undefined4 *)(param_3 + 8);
      uStack_104 = *(undefined4 *)(param_3 + 0xc);
      uStack_100 = *(undefined4 *)(param_3 + 0x10);
      uStack_fc = *(undefined4 *)(param_3 + 0x14);
      FUN_01bed4e2(auStack_158,auStack_240,0x48);
      param_1[0x41] = local_1f8;
      param_1[0x42] = uStack_1f4;
      param_1[0x43] = uStack_1f0;
      param_1[0x44] = uStack_1ec;
      param_1[0x45] = uStack_1e8;
      param_1[0x46] = local_1e4;
      param_1[0x47] = uStack_1e0;
      param_1[0x48] = uStack_1dc;
      param_1[0x49] = uStack_1d8;
      param_1[0x4a] = uStack_1d4;
      param_1[0x4b] = uStack_1d0;
      FUN_01bed4e2(auStack_1c8,&local_2b0,0x70);
      *(undefined4 *)((int)param_1 + 0xf9) = local_2b8;
      param_1[0x3f] = uVar13;
      FUN_01bed4e2((uint)&local_f8 | 4,auStack_1c8,0xd0);
      *param_1 = 6;
      FUN_01bed4e2(param_1 + 1,&local_f8,0xd4);
      *(undefined1 *)((int)param_1 + 0x135) = uVar6;
      *(undefined1 *)(param_1 + 0x4d) = uVar6;
      *(undefined1 *)((int)param_1 + 0x102) = uVar2;
      *(undefined1 *)((int)param_1 + 0x101) = uVar5;
      *(undefined1 *)(param_1 + 0x40) = uVar3;
      *(undefined1 *)(param_1 + 0x3e) = uVar4;
      param_1[0x37] = uVar21;
      param_1[0x38] = uVar18;
      param_1[0x39] = uVar14;
      param_1[0x3a] = uVar16;
      param_1[0x3b] = uVar15;
      param_1[0x3c] = uVar11;
      param_1[0x4c] = piVar20;
      param_1[0x36] = piVar17;
      param_1[0x3d] = uVar12;
      return;
    }
  }
LAB_01741468:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1741468);
  (*pcVar1)();
}

