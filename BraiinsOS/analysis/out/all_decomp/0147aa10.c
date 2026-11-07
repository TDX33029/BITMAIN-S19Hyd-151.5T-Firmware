// FUN_0147aa10 @ 0147aa10 size=1156 calls_out=5 calls_in=0
// strings: 

void FUN_0147aa10(undefined4 *param_1,undefined4 *param_2,byte *param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  undefined4 *local_330;
  int local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined1 local_2b5;
  undefined3 uStack_2b4;
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
  undefined8 local_240;
  undefined4 uStack_238;
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
  
  piVar8 = (int *)param_2[0x2e];
  puVar10 = &local_288;
  do {
    iVar11 = *piVar8;
    bVar17 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar17);
  *piVar8 = iVar11 + 1;
  if (-1 < iVar11) {
    piVar8 = (int *)param_2[0x39];
    uVar15 = param_2[0x2e];
    uVar14 = 0;
    uVar16 = param_2[0x2f];
    if (piVar8 != (int *)0x0) {
      do {
        iVar11 = *piVar8;
        bVar17 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar17);
      *piVar8 = iVar11 + 1;
      if (iVar11 < 0) goto LAB_0147ae90;
      uVar14 = param_2[0x39];
    }
    bVar17 = param_2[0x30] != 0;
    uVar9 = 0;
    if (bVar17) {
      uVar9 = param_2[0x31];
    }
    if (bVar17) {
      local_328 = uVar9;
    }
    iVar11 = param_2[0x32];
    bVar18 = iVar11 == 1;
    local_250 = (int *)param_2[0x18];
    puVar13 = (uint *)param_2[0x19];
    if (bVar18) {
      iVar11 = param_2[0x33];
    }
    if (bVar18) {
      local_32c = iVar11;
    }
    bVar19 = param_2[0x34] == 1;
    if (bVar19) {
      puVar10 = (undefined4 *)param_2[0x35];
    }
    uVar2 = *(undefined1 *)(param_2 + 0x38);
    if (bVar19) {
      local_330 = puVar10;
    }
    uVar3 = *(undefined1 *)((int)param_2 + 0xe1);
    uVar4 = *(undefined1 *)((int)param_2 + 0xe2);
    uVar5 = *(undefined1 *)(param_2 + 0x36);
    uVar9 = *(undefined4 *)((int)param_2 + 0xd9);
    uStack_2b4 = (undefined3)((uint)param_2[0x37] >> 8);
    do {
      iVar11 = *local_250;
      bVar7 = (bool)hasExclusiveAccess(local_250);
    } while (!bVar7);
    *local_250 = iVar11 + 1;
    if (-1 < iVar11) {
      local_248 = (int *)param_2[0x1a];
      if (local_248 != (int *)0x0) {
        do {
          iVar11 = *local_248;
          bVar7 = (bool)hasExclusiveAccess(local_248);
        } while (!bVar7);
        *local_248 = iVar11 + 1;
        if (iVar11 < 0) goto LAB_0147ae90;
        local_324 = param_2[0x1b];
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
      local_244 = local_324;
      uVar6 = *(undefined1 *)((int)param_2 + 0xea);
      local_274 = param_2[0xf];
      local_278 = param_2[0xe];
      local_294 = param_2[7];
      local_280 = param_2[0xc];
      local_28c = param_2[9];
      local_24c = puVar13;
      if (param_2[0x1e] == 0x3b9aca01) {
        local_240 = (**(code **)(param_2[0x1d] + 0x14))(param_2[0x1c]);
        uStack_238 = 0x3b9aca01;
      }
      else {
        FUN_0147f5c4(&local_240,param_2 + 0x1c);
      }
      uVar12 = (uint)*param_3;
      if (uVar12 == 0) {
        local_f8 = 0;
      }
      else if (uVar12 == 1) {
        local_f8 = (uint)param_3[1] << 8;
      }
      else {
        puVar10 = *(undefined4 **)(param_3 + 4);
        puVar13 = (uint *)thunk_FUN_016d4a50(0x10);
        if (puVar13 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x10);
        }
        (**(code **)*puVar10)(&local_f8,puVar10 + 3,puVar10[1],puVar10[2]);
        *puVar13 = local_f8;
        puVar13[1] = (uint)local_f4;
        puVar13[2] = uStack_f0;
        puVar13[3] = uStack_ec;
        local_f8 = 0;
      }
      local_f8 = local_f8 | uVar12;
      local_f4 = puVar13;
      (*(code *)**(undefined4 **)(param_3 + 8))
                (&uStack_f0,param_3 + 0x14,*(undefined4 *)(param_3 + 0xc),
                 *(undefined4 *)(param_3 + 0x10));
      FUN_010c8558(&local_1f8,&local_f8);
      local_110 = *(undefined4 *)param_3;
      uStack_10c = *(undefined4 *)(param_3 + 4);
      uStack_108 = *(undefined4 *)(param_3 + 8);
      uStack_104 = *(undefined4 *)(param_3 + 0xc);
      uStack_100 = *(undefined4 *)(param_3 + 0x10);
      uStack_fc = *(undefined4 *)(param_3 + 0x14);
      FUN_016dd1aa(auStack_158,&local_240,0x48);
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
      FUN_016dd1aa(auStack_1c8,&local_2b0,0x70);
      *(undefined4 *)((int)param_1 + 0xf9) = uVar9;
      local_2b5 = (undefined1)((uint)uVar9 >> 0x18);
      param_1[0x3f] = CONCAT31(uStack_2b4,local_2b5);
      FUN_016dd1aa((uint)&local_f8 | 4,auStack_1c8,0xd0);
      *param_1 = 6;
      FUN_016dd1aa(param_1 + 1,&local_f8,0xd4);
      *(undefined1 *)((int)param_1 + 0x135) = uVar6;
      *(undefined1 *)(param_1 + 0x4d) = uVar6;
      *(undefined1 *)((int)param_1 + 0x102) = uVar4;
      *(undefined1 *)((int)param_1 + 0x101) = uVar3;
      *(undefined1 *)(param_1 + 0x40) = uVar2;
      *(undefined1 *)(param_1 + 0x3e) = uVar5;
      param_1[0x37] = uVar16;
      param_1[0x38] = (uint)bVar17;
      param_1[0x39] = local_328;
      param_1[0x3a] = (uint)bVar18;
      param_1[0x3b] = local_32c;
      param_1[0x3c] = (uint)bVar19;
      param_1[0x4c] = uVar14;
      param_1[0x36] = uVar15;
      param_1[0x3d] = local_330;
      return;
    }
  }
LAB_0147ae90:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x147ae90);
  (*pcVar1)();
}

