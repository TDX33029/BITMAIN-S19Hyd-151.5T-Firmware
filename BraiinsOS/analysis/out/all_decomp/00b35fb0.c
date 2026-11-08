// FUN_00b35fb0 @ 00b35fb0 size=2140 calls_out=11 calls_in=0
// strings: 

void FUN_00b35fb0(uint *param_1,undefined4 *param_2,uint *param_3,int *param_4,uint param_5,
                 undefined4 param_6,uint *param_7,uint param_8,uint param_9)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 *puVar22;
  uint uVar23;
  bool bVar24;
  undefined8 unaff_d8;
  uint uVar25;
  undefined8 uVar26;
  int local_6a0;
  int iStack_69c;
  undefined4 local_698;
  undefined4 local_694;
  undefined1 auStack_660 [88];
  char local_608;
  uint local_600;
  int iStack_5fc;
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  int local_5f0;
  int iStack_5ec;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 local_5d0;
  undefined4 local_5cc;
  uint local_5a0;
  int iStack_59c;
  undefined4 local_598;
  undefined4 local_590;
  undefined4 uStack_58c;
  undefined4 local_588;
  undefined1 local_580;
  undefined1 *local_570;
  undefined8 local_568;
  int *local_560;
  int local_558;
  int local_554;
  int *local_54c;
  undefined4 local_548;
  int *local_544;
  undefined4 local_540;
  int *local_53c;
  int *local_538;
  undefined4 local_534;
  undefined1 local_530;
  undefined4 local_52c;
  undefined4 local_528;
  undefined4 local_524;
  undefined4 local_520;
  undefined4 local_51c;
  undefined1 auStack_518 [320];
  undefined1 auStack_3d8 [440];
  uint local_220;
  int local_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  int iStack_210;
  int iStack_20c;
  int local_200;
  undefined4 local_1fc;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  int local_1b0;
  int local_1ac;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  uint local_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint local_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  undefined2 local_78;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  
  do {
    iVar6 = *param_4;
    bVar24 = (bool)hasExclusiveAccess(param_4);
  } while (!bVar24);
  *param_4 = iVar6 + 1;
  if (iVar6 < 0) goto LAB_00b36818;
  uVar26 = FUN_00b353d8(param_6);
  FUN_015f3b0c(&local_220,1);
  uVar5 = local_218;
  iVar6 = local_21c;
  uVar10 = local_220;
  (**(code **)((int)((ulonglong)uVar26 >> 0x20) + 0x14))(&local_220,(int)uVar26);
  local_600 = local_220;
  iStack_5fc = local_21c;
  local_5f8 = local_218;
  uStack_5f4 = uStack_214;
  local_5f0 = iStack_210;
  iStack_5ec = iStack_20c;
  local_5e8 = *param_2;
  uStack_5e4 = param_2[1];
  uStack_5e0 = param_2[2];
  uStack_5dc = param_2[3];
  uStack_5d8 = param_2[4];
  uStack_5d4 = param_2[5];
  local_5d0 = 7;
  local_698 = 4;
  local_570 = &DAT_3b9aca00;
  local_5cc = 0;
  local_694 = 0;
  local_568 = uVar26;
  FUN_016dd1aa(auStack_660,param_6,0x60);
  local_5a0 = uVar10;
  iStack_59c = iVar6;
  local_598 = uVar5;
  local_590 = 300;
  uStack_58c = 0;
  local_580 = 0;
  local_588 = 0;
  iVar6 = 0;
  if (local_608 == '\x01') {
    iVar18 = 2;
    if ((uint)(local_600 < 5) <= (uint)-iStack_5fc) {
      iVar18 = local_600 - 5;
    }
    if (iVar18 == 2) {
      unaff_d8 = CONCAT44(uStack_5f4,local_5f8);
      local_554 = iStack_5ec;
      local_558 = local_5f0;
      uVar10 = local_600;
      iVar6 = iStack_5fc;
    }
    else {
      if (iVar18 != 1) goto LAB_00b36160;
      unaff_d8 = CONCAT44(uStack_5f4,local_5f8);
      uVar10 = 7;
    }
  }
  else {
LAB_00b36160:
    uVar10 = 5;
  }
  local_560 = param_4;
  piVar7 = (int *)thunk_FUN_016d4a50(200);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,200);
  }
  *piVar7 = 1;
  piVar7[1] = 1;
  FUN_016dd606(piVar7 + 2,0,0x84);
  piVar7[0x24] = uVar10;
  piVar7[0x25] = iVar6;
  local_6a0 = (int)unaff_d8;
  iStack_69c = (int)((ulonglong)unaff_d8 >> 0x20);
  piVar7[0x2a] = 0;
  piVar7[0x28] = local_558;
  piVar7[0x29] = local_554;
  piVar7[0x2b] = 0;
  piVar7[0x2c] = 0;
  piVar7[0x2d] = 0;
  piVar7[0x2e] = 0;
  piVar7[0x2f] = 1;
  piVar7[0x30] = 1;
  piVar7[0x26] = local_6a0;
  piVar7[0x27] = iStack_69c;
  do {
    iVar6 = *piVar7;
    bVar24 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar24);
  *piVar7 = iVar6 + 1;
  if (-1 < iVar6) {
    piVar8 = (int *)thunk_FUN_016d4a50(0xd0);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0xd0);
    }
    *piVar8 = 1;
    piVar8[1] = 1;
    FUN_016dd606(piVar8 + 2,0,0x94);
    piVar8[0x28] = 7;
    piVar8[0x29] = 0;
    piVar8[0x31] = 1;
    piVar8[0x30] = 0;
    piVar8[0x32] = 1;
    do {
      iVar6 = *piVar8;
      bVar24 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar24);
    *piVar8 = iVar6 + 1;
    if (-1 < iVar6) {
      local_548 = 0;
      local_54c = piVar8;
      piVar9 = (int *)thunk_FUN_016d4a50(0xac);
      if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xac);
      }
      piVar9[0x28] = 0;
      *piVar9 = 1;
      piVar9[1] = 1;
      FUN_016dd606(piVar9 + 2,0,0x95);
      piVar9[0x29] = 1;
      piVar9[0x2a] = 1;
      do {
        iVar6 = *piVar9;
        bVar24 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar24);
      *piVar9 = iVar6 + 1;
      if (-1 < iVar6) {
        local_540 = 0;
        local_544 = piVar9;
        local_200 = thunk_FUN_016d4a50(400);
        if (local_200 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,400);
        }
        *(undefined4 *)(local_200 + 0x180) = 0;
        *(undefined4 *)(local_200 + 0x184) = 0;
        *(undefined4 *)(local_200 + 0x188) = 0;
        *(undefined4 *)(local_200 + 0x18c) = 0;
        local_1a8 = 0;
        local_1c0 = 0;
        local_1d8 = 0;
        local_1e0 = 0;
        local_1fc = 0;
        local_1bc = 0;
        local_1b8 = 0;
        local_1b4 = 0;
        local_198 = 0;
        local_1a0 = 0;
        local_1a4 = 0;
        local_538 = (int *)0x0;
        local_21c = 1;
        local_220 = 1;
        local_19c = 1;
        local_1b0 = local_200;
        local_1ac = local_200;
        iVar6 = FUN_016d51b0(&local_538,0x20,0xa0);
        piVar4 = local_538;
        if ((iVar6 != 0) || (local_538 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(0x20,0xa0);
        }
        FUN_016dd1aa(local_538,&local_220,0xa0);
        do {
          iVar6 = *piVar4;
          bVar24 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar24);
        *piVar4 = iVar6 + 1;
        if (-1 < iVar6) {
          local_53c = piVar4;
          FUN_016dd1aa(auStack_518,&local_698,0x140);
          local_528 = 4;
          uVar10 = param_7[0x81];
          local_51c = 0;
          local_520 = 0;
          local_524 = 0;
          local_52c = 0;
          local_530 = 0;
          local_534 = 0;
          local_538 = (int *)0x0;
          FUN_00b108fc(&local_220);
          local_e0 = param_7[0x6a];
          uStack_dc = param_7[0x6b];
          uStack_d8 = param_7[0x6c];
          uStack_d4 = param_7[0x6d];
          local_d0 = param_7[0x6e];
          uStack_cc = param_7[0x6f];
          uStack_c8 = param_7[0x70];
          uStack_c4 = param_7[0x71];
          uStack_c0 = param_7[0x72];
          local_bc = param_7[0x73];
          uStack_b8 = param_7[0x74];
          uStack_b4 = param_7[0x75];
          uStack_b0 = param_7[0x76];
          uStack_ac = param_7[0x77];
          local_78 = (undefined2)param_7[0x84];
          local_80 = param_7[0x82];
          local_88 = param_7[0x80];
          local_7c = param_7[0x83];
          local_a8 = param_7[0x78];
          uStack_a4 = param_7[0x79];
          uStack_a0 = param_7[0x7a];
          uStack_9c = param_7[0x7b];
          local_98 = param_7[0x7c];
          uStack_94 = param_7[0x7d];
          uStack_90 = param_7[0x7e];
          uStack_8c = param_7[0x7f];
          bVar24 = (*param_7 & 1) != 0;
          if (!bVar24) {
            local_48 = param_7[2];
            local_44 = param_7[3];
            local_40 = param_7[4];
            local_3c = param_7[5];
          }
          uVar11 = param_7[0xc];
          uVar16 = param_7[0xd];
          uVar12 = param_7[0x10];
          uVar17 = param_7[0x11];
          uVar2 = *(undefined1 *)((int)param_7 + 0x61);
          uVar3 = param_7[0x18];
          uVar13 = param_7[0x12];
          uVar14 = param_7[0xe];
          uVar15 = param_7[0x16];
          uVar26 = *(undefined8 *)(param_7 + 0x14);
          uVar25 = param_7[0x17];
          local_84 = uVar10;
          FUN_00ccdbf4(&local_58,param_7[0x87],param_7[0x88]);
          FUN_016dd1aa((uint)auStack_3d8 | 6,&local_220,0x1b0);
          param_1[2] = local_48;
          param_1[3] = local_44;
          param_1[4] = local_40;
          param_1[5] = local_3c;
          uVar10 = param_7[7];
          uVar19 = param_7[8];
          uVar20 = param_7[9];
          uVar21 = param_7[10];
          uVar23 = param_7[0xb];
          param_1[6] = param_7[6];
          param_1[7] = uVar10;
          param_1[8] = uVar19;
          param_1[9] = uVar20;
          param_1[10] = uVar21;
          param_1[0xb] = uVar23;
          param_1[0x86] = local_58;
          param_1[0x87] = local_54;
          param_1[0x88] = local_50;
          FUN_016dd1aa(param_1 + 0x8a,param_7 + 0x8a,0x60);
          FUN_016dd1aa(param_1 + 0xc0,&local_538,0x160);
          uVar10 = param_3[1];
          uVar19 = param_3[2];
          param_1[0x126] = *param_3;
          param_1[0x127] = uVar10;
          param_1[0x129] = param_5;
          param_1[0x128] = uVar19;
          FUN_016dd1aa(param_1 + 0xa2,param_6,0x60);
          *param_1 = (uint)bVar24;
          param_1[1] = 0;
          param_1[0xc] = uVar11;
          param_1[0xd] = uVar16;
          param_1[0x10] = uVar12;
          param_1[0x11] = uVar17;
          param_1[0xe] = uVar14;
          *(undefined1 *)((int)param_1 + 0x61) = uVar2;
          *(char *)(param_1 + 0x18) = (char)uVar3;
          param_1[0x16] = uVar15;
          param_1[0x12] = uVar13;
          param_1[0xba] = (uint)piVar7;
          param_1[0xbb] = 0;
          param_1[0x17] = uVar25;
          *(undefined8 *)(param_1 + 0x14) = uVar26;
          FUN_016dd1aa((int)param_1 + 0x62,auStack_3d8,0x1b6);
          param_1[0x134] = 4;
          param_1[0x11e] = 4;
          param_1[0x143] = 4;
          param_1[0x118] = 3;
          param_1[0xbe] = (uint)piVar8;
          param_1[0x12e] = (uint)piVar8;
          *(undefined1 *)(param_1 + 0x132) = 0;
          param_1[0x13e] = 0;
          *(undefined1 *)(param_1 + 0x13d) = 0;
          param_1[0x13b] = 0;
          param_1[0x13c] = 0;
          *(undefined1 *)(param_1 + 0x13a) = 0;
          param_1[0x133] = 0;
          param_1[0x135] = 0;
          param_1[0x136] = 0;
          param_1[0x137] = 0;
          param_1[0x138] = (uint)piVar9;
          param_1[0x139] = 0;
          param_1[0xbc] = (uint)piVar9;
          param_1[0xbd] = 0;
          param_1[0xbf] = 0;
          param_1[0x11a] = 0;
          param_1[0x11b] = 0;
          *(undefined1 *)(param_1 + 0x11c) = 0;
          param_1[0x11d] = 0;
          param_1[0x11f] = 0;
          param_1[0x120] = 0;
          param_1[0x121] = 0;
          param_1[0x122] = 0;
          param_1[0x12a] = param_8;
          param_1[299] = param_9;
          param_1[300] = (uint)param_4;
          param_1[0x12d] = (uint)piVar7;
          param_1[0x12f] = (uint)piVar4;
          param_1[0x130] = 0;
          param_1[0x131] = 0;
          param_1[0x13f] = 0;
          param_1[0x140] = 0;
          param_1[0x142] = 0;
          param_1[0x144] = 0;
          param_1[0x145] = 0;
          param_1[0x146] = 0;
          param_1[0x147] = (uint)piVar4;
          *(undefined1 *)(param_1 + 0x141) = 0;
          FUN_00b1042c(param_7 + 0x1a);
          puVar22 = (undefined4 *)(param_7[0x87] + 4);
          for (uVar10 = param_7[0x88]; uVar10 != 0; uVar10 = uVar10 - 1) {
            if (puVar22[-1] != 0) {
              thunk_FUN_016d3fb4(*puVar22);
            }
            puVar22 = puVar22 + 4;
          }
          if (param_7[0x86] != 0) {
            thunk_FUN_016d3fb4(param_7[0x87]);
          }
          return;
        }
      }
    }
  }
LAB_00b36818:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xb36818);
  (*pcVar1)();
}

