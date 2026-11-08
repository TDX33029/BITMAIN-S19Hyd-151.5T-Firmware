// FUN_00b31d4c @ 00b31d4c size=3424 calls_out=31 calls_in=1
// strings: already runningevent bosminer-plus/bosminer-plus-tuner/src/devel_api.rs:682bosminer_plus_tuner::devel_apibosminer-plus/bosminer-plus-tuner/src/devel_api.rs | no miner manager

undefined8 FUN_00b31d4c(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  int *piVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  int *unaff_r7;
  int *piVar24;
  uint *puVar25;
  int iVar26;
  int *piVar27;
  int *piVar28;
  uint *puVar29;
  int iVar30;
  bool bVar31;
  uint uVar32;
  undefined8 uVar33;
  undefined4 local_3f90;
  undefined4 local_3f8c;
  undefined1 local_3f88;
  undefined4 local_3f84;
  undefined4 local_3f80;
  undefined4 local_3f7c;
  undefined4 local_3f78;
  undefined4 local_3f74;
  undefined4 local_3f70;
  undefined4 local_3f6c;
  undefined4 local_3f58;
  undefined1 *local_3f48;
  undefined1 *local_3f38;
  undefined1 *local_3f28;
  undefined4 local_3f24;
  undefined4 local_3f20;
  undefined4 local_3f1c;
  undefined1 local_3f18;
  undefined4 local_3f10;
  undefined4 local_3f0c;
  undefined4 local_3f08;
  undefined1 local_3efc;
  uint local_3ef8;
  undefined4 local_3ef0;
  undefined4 local_3eec;
  uint local_3ee8;
  int iStack_3ee4;
  int iStack_3ee0;
  int iStack_3edc;
  int iStack_3ed8;
  int iStack_3ed4;
  undefined1 auStack_3ecc [12];
  undefined1 auStack_3ec0 [160];
  uint local_3e20;
  int local_3e1c;
  uint local_3e18;
  uint uStack_3e14;
  uint uStack_3e10;
  uint uStack_3e0c;
  uint local_3e08;
  uint uStack_3e04;
  uint uStack_3e00;
  uint uStack_3dfc;
  uint uStack_3df8;
  uint uStack_3df4;
  uint local_3df0;
  uint uStack_3dec;
  uint local_3de8;
  uint local_3de0;
  uint local_3ddc;
  uint local_3dd8;
  undefined8 local_3dd0;
  uint local_3dc8;
  uint local_3dc4;
  undefined1 local_3dc0;
  undefined1 local_3dbf;
  undefined1 auStack_3dbe [438];
  undefined4 local_3c08;
  undefined4 local_3c04;
  undefined4 local_3c00;
  undefined1 auStack_3bf8 [1032];
  int *local_37f0;
  int iStack_37ec;
  int *piStack_37e8;
  int *local_37e0;
  int *local_37dc;
  int *local_37d8;
  int *local_37d4 [3];
  undefined4 local_37c8;
  undefined1 *local_37b8;
  undefined1 *local_37a8;
  undefined1 *local_3798;
  undefined4 local_3790;
  undefined4 local_378c;
  undefined1 local_3788;
  undefined4 local_3780;
  undefined4 local_377c;
  undefined4 local_3778;
  undefined1 local_376c;
  int local_31a8;
  undefined1 local_31a4;
  undefined1 auStack_3c0 [440];
  undefined1 auStack_208 [320];
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint local_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined2 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  
  puVar25 = (uint *)(param_1 + 0xc);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x2e)) {
  case 0:
    *(undefined2 *)(param_1 + 0xb) = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[2] = param_1[7];
    param_1[0xc] = param_1[7] + 0x300;
    param_1[0xd] = -1;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(0x1872238);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(0x1872238);
  case 4:
    goto switchD_00b31d8c_caseD_4;
  case 5:
    goto switchD_00b31d8c_caseD_5;
  }
  iVar20 = FUN_00c81384(puVar25,param_2);
  if (iVar20 == 0) {
    uVar3 = 3;
  }
  else {
    if (*puVar25 != 0) {
      FUN_00c81a4c(*puVar25,param_1[0xd],1);
    }
    iVar22 = 2;
    puVar29 = (uint *)(iVar20 + 0xb8);
    uVar18 = *puVar29;
    unaff_r7 = (int *)-(*(int *)(iVar20 + 0xbc) + (uint)(uVar18 >= 5));
    if ((uint)(uVar18 < 5) <= (uint)-*(int *)(iVar20 + 0xbc)) {
      iVar22 = uVar18 - 5;
    }
    if (iVar22 == 0) {
      *puVar25 = 5;
      param_1[0xd] = 0;
    }
    else if (iVar22 == 1) {
      iVar22 = *(int *)(iVar20 + 0xbc);
      iVar26 = *(int *)(iVar20 + 0xc0);
      iVar30 = *(int *)(iVar20 + 0xc4);
      iVar23 = *(int *)(iVar20 + 200);
      unaff_r7 = *(int **)(iVar20 + 0xcc);
      *puVar25 = *puVar29;
      param_1[0xd] = iVar22;
      param_1[0xe] = iVar26;
      param_1[0xf] = iVar30;
      param_1[0x10] = iVar23;
      param_1[0x11] = (int)unaff_r7;
    }
    else {
      iVar22 = *(int *)(iVar20 + 0xbc);
      iVar26 = *(int *)(iVar20 + 0xc0);
      iVar30 = *(int *)(iVar20 + 0xc4);
      iVar23 = *(int *)(iVar20 + 200);
      unaff_r7 = *(int **)(iVar20 + 0xcc);
      *puVar25 = *puVar29;
      param_1[0xd] = iVar22;
      param_1[0xe] = iVar26;
      param_1[0xf] = iVar30;
      param_1[0x10] = iVar23;
      param_1[0x11] = (int)unaff_r7;
    }
    FUN_00c822ec();
    param_1[0x12] = param_1[2] + 0x468;
    param_1[0x13] = -1;
switchD_00b31d8c_caseD_4:
    iVar20 = FUN_00c8101c(param_1 + 0x12,param_2);
    if (iVar20 != 0) {
      param_1[3] = iVar20;
      *(undefined1 *)((int)param_1 + 0x2d) = 1;
      if (param_1[0x12] != 0) {
        FUN_00c8204c(param_1[0x12],param_1[0x13],1);
        iVar20 = param_1[3];
      }
      if (*(int *)(iVar20 + 0x20) == 0) {
        iVar20 = FUN_00b31650(param_1[2]);
        if (iVar20 == 0) {
          local_37d8 = (int *)FUN_00c70f88("no miner manager",0x10);
LAB_00b326f8:
          *(undefined1 *)(param_1 + 0xb) = 0;
          unaff_r7 = local_37d8;
          goto LAB_00b32700;
        }
        param_1[4] = iVar20;
        *(undefined1 *)(param_1 + 0xb) = 1;
        piVar11 = *(int **)(iVar20 + 0x3d0);
        do {
          iVar20 = *piVar11;
          bVar31 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar31);
        *piVar11 = iVar20 + 1;
        if (iVar20 < 0) {
LAB_00b32aa8:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xb32aa8);
          (*pcVar1)();
        }
        *(undefined1 *)((int)param_1 + 0x2b) = 1;
        piVar24 = *(int **)(param_1[2] + 0x4b0);
        do {
          iVar20 = *piVar24;
          bVar31 = (bool)hasExclusiveAccess(piVar24);
        } while (!bVar31);
        *piVar24 = iVar20 + 1;
        if (iVar20 < 0) goto LAB_00b32aa8;
        *(undefined1 *)((int)param_1 + 0x2a) = 1;
        piVar27 = *(int **)(param_1[2] + 0x2f8);
        uVar4 = *(undefined4 *)(param_1[2] + 0x2fc);
        do {
          iVar20 = *piVar27;
          bVar31 = (bool)hasExclusiveAccess(piVar27);
        } while (!bVar31);
        *piVar27 = iVar20 + 1;
        if (iVar20 < 0) goto LAB_00b32aa8;
        piVar28 = piVar27 + 0x31;
        do {
          bVar31 = (bool)hasExclusiveAccess(piVar28);
        } while (!bVar31);
        *piVar28 = *piVar28 + 1;
        *(undefined1 *)((int)param_1 + 0x29) = 1;
        local_37dc = (int *)0x0;
        local_37e0 = (int *)0x5;
        local_377c = 0;
        local_3780 = 0;
        local_376c = 0;
        local_3778 = 0x80000000;
        local_3788 = 0;
        local_378c = 0;
        local_3790 = 0;
        local_3798 = &DAT_3b9aca00;
        local_37a8 = &DAT_3b9aca00;
        local_37b8 = &DAT_3b9aca00;
        local_37c8 = 0;
        FUN_00d07910(&local_3e20,&local_37e0);
        *(undefined1 *)(param_1 + 10) = 1;
        local_3f6c = 0;
        local_3f70 = 5;
        local_3f24 = 0;
        local_3f28 = &DAT_3b9aca00;
        local_3f38 = &DAT_3b9aca00;
        local_3f48 = &DAT_3b9aca00;
        local_3f58 = 0;
        local_3f74 = 0;
        local_3f78 = 0;
        local_3f7c = 0;
        local_3f80 = 4;
        local_3f84 = 0;
        local_3f88 = 0;
        local_3f8c = 0;
        local_3f90 = 0;
        local_3f20 = 0;
        local_3f1c = 0;
        local_3f18 = 0;
        local_3f0c = 0;
        local_3f10 = 0;
        local_3ef8 = local_3e20;
        local_3efc = 0;
        local_3f08 = 0x80000000;
        *(undefined1 *)((int)param_1 + 0x27) = 1;
        *param_1 = local_3e1c;
        param_1[1] = local_3e18;
        uVar33 = FUN_00d06d88();
        uVar13 = (undefined4)((ulonglong)uVar33 >> 0x20);
        param_1[5] = (int)uVar33;
        *(undefined1 *)((int)param_1 + 0x26) = 1;
        *(undefined1 *)((int)param_1 + 0x25) = 1;
        local_3ef0 = uVar13;
        uVar33 = FUN_00d06ea4();
        uVar14 = (undefined4)((ulonglong)uVar33 >> 0x20);
        param_1[6] = (int)uVar33;
        iVar20 = param_1[4];
        *(undefined1 *)(param_1 + 9) = 1;
        *(undefined1 *)((int)param_1 + 0x23) = 1;
        *(undefined1 *)(param_1 + 0xb) = 0;
        local_3ee8 = *puVar25;
        iStack_3ee4 = param_1[0xd];
        iStack_3ee0 = param_1[0xe];
        iStack_3edc = param_1[0xf];
        iStack_3ed8 = param_1[0x10];
        iStack_3ed4 = param_1[0x11];
        local_3eec = uVar14;
        FUN_00cdfdf4(auStack_3ecc,*(undefined4 *)(param_1[2] + 0x49c),
                     *(undefined4 *)(param_1[2] + 0x4a0));
        *(undefined1 *)((int)param_1 + 0x2a) = 0;
        *(undefined1 *)(param_1 + 10) = 0;
        FUN_016dd1aa(auStack_3ec0,&local_3f90,0xa0);
        piVar28 = *(int **)(param_1[2] + 0x4a4);
        do {
          iVar22 = *piVar28;
          bVar31 = (bool)hasExclusiveAccess(piVar28);
        } while (!bVar31);
        *piVar28 = iVar22 + 1;
        if (iVar22 < 0) goto LAB_00b32aa8;
        puVar25 = (uint *)param_1[2];
        *(undefined1 *)((int)param_1 + 0x2b) = 0;
        uVar18 = puVar25[0x81];
        FUN_00b108fc(auStack_208,puVar25 + 0x1a);
        local_c8 = puVar25[0x6a];
        uStack_c4 = puVar25[0x6b];
        uStack_c0 = puVar25[0x6c];
        uStack_bc = puVar25[0x6d];
        local_b8 = puVar25[0x6e];
        uStack_b4 = puVar25[0x6f];
        uStack_b0 = puVar25[0x70];
        uStack_ac = puVar25[0x71];
        uStack_a8 = puVar25[0x72];
        local_a4 = puVar25[0x73];
        uStack_a0 = puVar25[0x74];
        uStack_9c = puVar25[0x75];
        uStack_98 = puVar25[0x76];
        uStack_94 = puVar25[0x77];
        local_68 = puVar25[0x82];
        local_64 = puVar25[0x83];
        local_60 = (undefined2)puVar25[0x84];
        local_70 = puVar25[0x80];
        local_90 = puVar25[0x78];
        uStack_8c = puVar25[0x79];
        uStack_88 = puVar25[0x7a];
        uStack_84 = puVar25[0x7b];
        local_80 = puVar25[0x7c];
        uStack_7c = puVar25[0x7d];
        uStack_78 = puVar25[0x7e];
        uStack_74 = puVar25[0x7f];
        bVar31 = (*puVar25 & 1) != 0;
        if (!bVar31) {
          local_48 = puVar25[2];
          uStack_44 = puVar25[3];
          uStack_40 = puVar25[4];
          uStack_3c = puVar25[5];
        }
        uVar5 = puVar25[0xc];
        uVar15 = puVar25[0xd];
        uVar6 = puVar25[0x10];
        uVar16 = puVar25[0x11];
        uVar3 = *(undefined1 *)((int)puVar25 + 0x61);
        uVar2 = puVar25[0x18];
        uVar7 = puVar25[0x12];
        uVar8 = puVar25[0xe];
        uVar9 = puVar25[0x16];
        uVar33 = *(undefined8 *)(puVar25 + 0x14);
        uVar32 = puVar25[0x17];
        local_6c = uVar18;
        FUN_00ccdbf4(&local_58,puVar25[0x87],puVar25[0x88]);
        FUN_016dd1aa((uint)auStack_3c0 | 6,auStack_208,0x1b0);
        local_3e18 = local_48;
        uStack_3e14 = uStack_44;
        uStack_3e10 = uStack_40;
        uStack_3e0c = uStack_3c;
        local_3e08 = puVar25[6];
        uStack_3e04 = puVar25[7];
        uStack_3e00 = puVar25[8];
        uStack_3dfc = puVar25[9];
        uStack_3df8 = puVar25[10];
        uStack_3df4 = puVar25[0xb];
        local_3c04 = uStack_54;
        local_3c08 = local_58;
        local_3c00 = uStack_50;
        FUN_016dd1aa(auStack_3bf8,puVar25 + 0x8a,0x60);
        local_3e1c = 0;
        local_3e20 = (uint)bVar31;
        local_3de8 = uVar8;
        local_3dd8 = uVar7;
        local_3dd0 = uVar33;
        local_3dc8 = uVar9;
        local_3dc4 = uVar32;
        local_3dc0 = (char)uVar2;
        local_3dbf = uVar3;
        local_3df0 = uVar5;
        uStack_3dec = uVar15;
        local_3de0 = uVar6;
        local_3ddc = uVar16;
        FUN_016dd1aa(auStack_3dbe,auStack_3c0,0x1b6);
        piVar10 = *(int **)(param_1[2] + 0x2f0);
        uVar17 = *(undefined4 *)(param_1[2] + 0x2f4);
        do {
          iVar22 = *piVar10;
          bVar31 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar31);
        *piVar10 = iVar22 + 1;
        if (iVar22 < 0) goto LAB_00b32aa8;
        piVar19 = piVar10 + 0x29;
        do {
          bVar31 = (bool)hasExclusiveAccess(piVar19);
        } while (!bVar31);
        *piVar19 = *piVar19 + 1;
        *(undefined1 *)((int)param_1 + 0x29) = 0;
        *(undefined1 *)((int)param_1 + 0x23) = 0;
        *(undefined1 *)((int)param_1 + 0x25) = 0;
        piVar19 = *(int **)(param_1[2] + 0x4bc);
        piVar21 = piVar19 + 0x21;
        do {
          bVar31 = (bool)hasExclusiveAccess(piVar21);
        } while (!bVar31);
        *piVar21 = *piVar21 + 1;
        do {
          iVar22 = *piVar19;
          bVar31 = (bool)hasExclusiveAccess(piVar19);
        } while (!bVar31);
        *piVar19 = iVar22 + 1;
        if (iVar22 < 0) goto LAB_00b32aa8;
        FUN_00d57218(&local_37e0,iVar20,&local_3ee8,auStack_3ecc,piVar24,&local_3f90,piVar28,piVar11
                     ,&local_3e20,piVar10,uVar17,uVar13,uVar14,piVar27,uVar4,piVar19);
        piVar27 = local_37d8;
        piVar24 = local_37dc;
        piVar11 = local_37e0;
        if (local_37e0 == (int *)0x2 && local_37dc == (int *)0x0) {
          iVar20 = param_1[6];
          *(undefined2 *)((int)param_1 + 0x22) = 0;
          piVar11 = (int *)(iVar20 + 0x84);
          DataMemoryBarrier(0xb);
          do {
            iVar22 = *piVar11;
            bVar31 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar31);
          *piVar11 = iVar22 + -1;
          DataMemoryBarrier(0xb);
          if (iVar22 == 1) {
            FUN_00c747ec(iVar20 + 0x20);
            puVar25 = (uint *)(iVar20 + 0x48);
            DataMemoryBarrier(0xb);
            do {
              uVar18 = *puVar25;
              bVar31 = (bool)hasExclusiveAccess(puVar25);
            } while (!bVar31);
            *puVar25 = uVar18 | 2;
            DataMemoryBarrier(0xb);
            if (uVar18 == 0) {
              iVar22 = *(int *)(iVar20 + 0x40);
              *(undefined4 *)(iVar20 + 0x40) = 0;
              DataMemoryBarrier(0xb);
              do {
                bVar31 = (bool)hasExclusiveAccess(puVar25);
              } while (!bVar31);
              *puVar25 = 0;
              if (iVar22 != 0) {
                (**(code **)(iVar22 + 4))(*(undefined4 *)(iVar20 + 0x44));
              }
            }
          }
          piVar11 = (int *)param_1[6];
          DataMemoryBarrier(0xb);
          do {
            iVar20 = *piVar11;
            bVar31 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar31);
          *piVar11 = iVar20 + -1;
          if (iVar20 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00d064cc(param_1[6]);
          }
          iVar20 = param_1[5];
          *(undefined2 *)(param_1 + 9) = 0;
          piVar11 = (int *)(iVar20 + 0x84);
          DataMemoryBarrier(0xb);
          do {
            iVar22 = *piVar11;
            bVar31 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar31);
          *piVar11 = iVar22 + -1;
          DataMemoryBarrier(0xb);
          if (iVar22 == 1) {
            FUN_00c74f48(iVar20 + 0x20);
            puVar25 = (uint *)(iVar20 + 0x48);
            DataMemoryBarrier(0xb);
            do {
              uVar18 = *puVar25;
              bVar31 = (bool)hasExclusiveAccess(puVar25);
            } while (!bVar31);
            *puVar25 = uVar18 | 2;
            DataMemoryBarrier(0xb);
            if (uVar18 == 0) {
              iVar22 = *(int *)(iVar20 + 0x40);
              *(undefined4 *)(iVar20 + 0x40) = 0;
              DataMemoryBarrier(0xb);
              do {
                bVar31 = (bool)hasExclusiveAccess(puVar25);
              } while (!bVar31);
              *puVar25 = 0;
              if (iVar22 != 0) {
                (**(code **)(iVar22 + 4))(*(undefined4 *)(iVar20 + 0x44));
              }
            }
          }
          piVar11 = (int *)param_1[5];
          DataMemoryBarrier(0xb);
          do {
            iVar20 = *piVar11;
            bVar31 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar31);
          *piVar11 = iVar20 + -1;
          if (iVar20 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00d04c88(param_1[5]);
          }
          iVar20 = *param_1;
          *(undefined1 *)((int)param_1 + 0x26) = 0;
          piVar11 = (int *)(iVar20 + 0x11c);
          do {
            iVar22 = *piVar11;
            bVar31 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar31);
          *piVar11 = iVar22 + -1;
          if (iVar22 == 1) {
            FUN_0163b708(iVar20 + 0x108);
          }
          piVar11 = (int *)*param_1;
          DataMemoryBarrier(0xb);
          do {
            iVar20 = *piVar11;
            bVar31 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar31);
          *piVar11 = iVar20 + -1;
          if (iVar20 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00d04b1c(*param_1);
          }
          *(undefined2 *)((int)param_1 + 0x27) = 0;
          *(undefined1 *)((int)param_1 + 0x29) = 0;
          *(undefined2 *)((int)param_1 + 0x2a) = 0;
          goto LAB_00b326f8;
        }
        FUN_016dd1aa(&local_3e20,local_37d4,0x62c);
        *(undefined1 *)((int)param_1 + 0x22) = 1;
        param_1[0x10] = (int)piVar11;
        param_1[0x11] = (int)piVar24;
        param_1[0x12] = (int)piVar27;
        FUN_016dd1aa(param_1 + 0x13,&local_3e20,0x62c);
        uVar33 = FUN_0076cb08(2,0);
        *(undefined8 *)(param_1 + 0xc) = uVar33;
        *(undefined1 *)((int)param_1 + 0x21) = 1;
        piVar11 = *(int **)(param_1[2] + 0x4a8);
        do {
          iVar20 = *piVar11;
          bVar31 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar31);
        *piVar11 = iVar20 + 1;
        if (iVar20 < 0) goto LAB_00b32aa8;
        param_1[0xe] = (int)piVar11;
        *(undefined1 *)(param_1 + 8) = 1;
        puVar12 = (undefined4 *)thunk_FUN_016d4a50(5);
        if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4();
        }
        *(undefined1 *)(puVar12 + 1) = 0x72;
        *puVar12 = 0x656e7574;
        *(undefined1 *)(param_1 + 0x1b1) = 0;
        param_1[0x19e] = 5;
        param_1[0x19f] = (int)puVar12;
        param_1[0x1a0] = 5;
        param_1[0x1a1] = (int)(param_1 + 0xd);
switchD_00b31d8c_caseD_5:
        unaff_r7 = param_1 + 0x19e;
        FUN_00b331c4(&local_37e0,unaff_r7,param_2);
        if (local_37e0 == (int *)0x2) {
          uVar3 = 5;
          goto LAB_00b31f60;
        }
        local_37f0 = local_37e0;
        iStack_37ec = (int)local_37dc;
        piStack_37e8 = local_37d8;
        if ((char)param_1[0x1b1] == '\x03') {
          FUN_00b335a4(param_1 + 0x1a2);
          *(undefined1 *)((int)param_1 + 0x6c5) = 0;
        }
        else if (((char)param_1[0x1b1] == '\0') && (*unaff_r7 != 0)) {
          thunk_FUN_016d3fb4(param_1[0x19f]);
        }
        *(undefined1 *)(param_1 + 8) = 0;
        *(undefined1 *)((int)param_1 + 0x22) = 0;
        FUN_016dd1aa(&local_37e0,param_1 + 0x10,0x638);
        local_31a8 = param_1[0xe];
        *(undefined1 *)(param_1 + 9) = 0;
        local_31a4 = 0;
        piVar11 = (int *)FUN_00d40db4(&local_37f0,&local_37e0,param_1[6]);
        if (*piVar11 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar31 = (bool)hasExclusiveAccess(piVar11);
          if (!bVar31) goto LAB_00b32790;
          *piVar11 = 0x84;
        }
        else {
          ClearExclusiveLocal();
LAB_00b32790:
          (**(code **)(piVar11[2] + 0x10))();
        }
        iVar20 = param_1[3];
        *(undefined1 *)((int)param_1 + 0x21) = 0;
        *(undefined2 *)((int)param_1 + 0x26) = 0;
        local_37e0 = *(int **)(iVar20 + 0x20);
        iVar30 = param_1[1];
        local_37dc = *(int **)(iVar20 + 0x24);
        local_37d8 = *(int **)(iVar20 + 0x28);
        local_37d4[0] = *(int **)(iVar20 + 0x2c);
        iVar22 = param_1[5];
        iVar26 = param_1[0xc];
        *(int *)(iVar20 + 0x24) = *param_1;
        *(int *)(iVar20 + 0x20) = iVar26;
        *(int *)(iVar20 + 0x28) = iVar30;
        *(int *)(iVar20 + 0x2c) = iVar22;
        if (local_37e0 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar20 = *local_37e0;
            bVar31 = (bool)hasExclusiveAccess(local_37e0);
          } while (!bVar31);
          *local_37e0 = iVar20 + -1;
          if (iVar20 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00790cd0(local_37e0);
          }
          piVar11 = local_37dc;
          piVar24 = local_37dc + 0x47;
          do {
            iVar20 = *piVar24;
            bVar31 = (bool)hasExclusiveAccess(piVar24);
          } while (!bVar31);
          *piVar24 = iVar20 + -1;
          if (iVar20 == 1) {
            FUN_0163b708(local_37dc + 0x42);
          }
          DataMemoryBarrier(0xb);
          do {
            iVar20 = *piVar11;
            bVar31 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar31);
          *piVar11 = iVar20 + -1;
          if (iVar20 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00d04b1c(local_37dc);
          }
          piVar11 = local_37d4[0];
          DataMemoryBarrier(0xb);
          piVar24 = local_37d4[0] + 0x21;
          do {
            iVar20 = *piVar24;
            bVar31 = (bool)hasExclusiveAccess(piVar24);
          } while (!bVar31);
          *piVar24 = iVar20 + -1;
          DataMemoryBarrier(0xb);
          if (iVar20 == 1) {
            FUN_00c74f48(local_37d4[0] + 8);
            puVar25 = (uint *)(piVar11 + 0x12);
            DataMemoryBarrier(0xb);
            do {
              uVar18 = *puVar25;
              bVar31 = (bool)hasExclusiveAccess(puVar25);
            } while (!bVar31);
            *puVar25 = uVar18 | 2;
            DataMemoryBarrier(0xb);
            if (uVar18 == 0) {
              iVar20 = piVar11[0x10];
              piVar11[0x10] = 0;
              DataMemoryBarrier(0xb);
              do {
                bVar31 = (bool)hasExclusiveAccess(puVar25);
              } while (!bVar31);
              *puVar25 = 0;
              if (iVar20 != 0) {
                (**(code **)(iVar20 + 4))(piVar11[0x11]);
              }
            }
          }
          DataMemoryBarrier(0xb);
          do {
            iVar20 = *local_37d4[0];
            bVar31 = (bool)hasExclusiveAccess(local_37d4[0]);
          } while (!bVar31);
          *local_37d4[0] = iVar20 + -1;
          if (iVar20 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00d04c88(local_37d4[0]);
          }
        }
        *(undefined1 *)((int)param_1 + 0x2d) = 0;
        FUN_00c822ec(param_1[3]);
        piVar11 = (int *)param_1[0xd];
        *(undefined1 *)(param_1 + 8) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar20 = *piVar11;
          bVar31 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar31);
        *piVar11 = iVar20 + -1;
        if (iVar20 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00790cd0(param_1[0xd]);
        }
        unaff_r7 = (int *)0x0;
        *(undefined1 *)((int)param_1 + 0x23) = 0;
        *(undefined2 *)((int)param_1 + 0x21) = 0;
        *(undefined2 *)(param_1 + 9) = 0;
        *(undefined1 *)(param_1 + 10) = 0;
        *(undefined2 *)((int)param_1 + 0x26) = 0;
        *(undefined1 *)((int)param_1 + 0x29) = 0;
        *(undefined4 *)((int)param_1 + 0x2a) = 0;
      }
      else {
        unaff_r7 = (int *)FUN_00c70f88("already runningevent bosminer-plus/bosminer-plus-tuner/src/devel_api.rs:682bosminer_plus_tuner::devel_apibosminer-plus/bosminer-plus-tuner/src/devel_api.rs"
                                       ,0xf);
LAB_00b32700:
        FUN_00c822ec(param_1[3]);
        *(undefined1 *)((int)param_1 + 0x2d) = 0;
      }
      *(undefined1 *)((int)param_1 + 0x2e) = 1;
      uVar4 = 0;
      goto LAB_00b329ac;
    }
    uVar3 = 4;
  }
LAB_00b31f60:
  *(undefined1 *)((int)param_1 + 0x2e) = uVar3;
  uVar4 = 1;
LAB_00b329ac:
  return CONCAT44(unaff_r7,uVar4);
}

