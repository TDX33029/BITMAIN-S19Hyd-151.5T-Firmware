// FUN_00c012c8 @ 00c012c8 size=1120 calls_out=5 calls_in=3
// strings: 

void FUN_00c012c8(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  bool bVar20;
  bool bVar21;
  undefined8 uVar22;
  uint local_138;
  int local_134;
  undefined8 local_130;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  uint local_110;
  uint uStack_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  undefined1 auStack_e4 [4];
  uint local_e0;
  uint local_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  uint local_c8;
  undefined1 local_c4;
  uint local_c0;
  undefined1 local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  uint local_60;
  uint local_5c;
  uint local_58;
  undefined1 auStack_54 [12];
  uint local_48;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  
  uVar7 = param_2[0x34];
  bVar21 = 0x7fffffe < uVar7;
  bVar20 = uVar7 == 0x7ffffff;
  uVar1 = uVar7 * 0x20;
  if (uVar7 < 0x8000000) {
    bVar21 = 0x7ffffff7 < uVar1;
    bVar20 = uVar1 == 0x7ffffff8;
  }
  if (bVar21 && !bVar20) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar1);
  }
  if (uVar1 == 0) {
    local_134 = 8;
    local_138 = 0;
  }
  else {
    puVar13 = (undefined8 *)param_2[0x33];
    iVar2 = thunk_FUN_016d4a50(uVar1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,uVar1);
    }
    local_138 = uVar7;
    local_134 = iVar2;
    if (uVar7 != 0) {
      uVar17 = 0;
      uVar15 = 0;
      do {
        if (uVar1 == uVar17) break;
        iVar8 = *(int *)(puVar13 + 2);
        uVar9 = *(undefined4 *)((int)puVar13 + 0xc);
        uVar19 = *(undefined4 *)((int)puVar13 + 0x14);
        uVar22 = *puVar13;
        uVar5 = *(undefined4 *)(puVar13 + 3);
        if (iVar8 == 0) {
          iVar6 = 1;
        }
        else {
          iVar6 = thunk_FUN_016d4a50(iVar8);
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar8);
          }
        }
        FUN_016dd1aa(iVar6,uVar9,iVar8);
        puVar3 = (undefined8 *)(iVar2 + uVar17);
        uVar17 = uVar17 + 0x20;
        puVar13 = puVar13 + 4;
        *puVar3 = uVar22;
        iVar4 = iVar2 + uVar15 * 0x20;
        uVar15 = uVar15 + 1;
        *(int *)(iVar4 + 8) = iVar8;
        *(int *)(iVar4 + 0x10) = iVar8;
        *(int *)(iVar4 + 0xc) = iVar6;
        *(undefined4 *)(iVar4 + 0x14) = uVar19;
        *(undefined4 *)(iVar4 + 0x18) = uVar5;
      } while (uVar7 != uVar15);
    }
  }
  iVar8 = local_134;
  uVar1 = local_138;
  uVar15 = *param_2;
  iVar2 = 0;
  if ((uint)(uVar15 < 2) <= -param_2[1]) {
    iVar2 = uVar15 - 1;
  }
  if (iVar2 == 0) {
    FUN_00ce07ec(auStack_e4,param_2[0x16],param_2[0x17]);
    local_128 = param_2[4];
    uStack_124 = param_2[5];
    uStack_120 = param_2[6];
    uStack_11c = param_2[7];
    local_118 = param_2[8];
    uStack_114 = param_2[9];
    local_d0 = param_2[0x1a];
    uStack_cc = param_2[0x1b];
    local_b8 = param_2[0x20];
    local_130 = *(undefined8 *)(param_2 + 2);
    local_b4 = param_2[0x21];
    local_100 = *(undefined8 *)(param_2 + 0xe);
    local_f8 = *(undefined8 *)(param_2 + 0x10);
    local_a8 = *(undefined8 *)(param_2 + 0x24);
    local_a0 = *(undefined8 *)(param_2 + 0x26);
    local_b0 = param_2[0x22];
    local_c8 = param_2[0x1c];
    local_c0 = param_2[0x1e];
    local_bc = (undefined1)param_2[0x1f];
    local_108 = CONCAT44(local_108._4_4_,param_2[0xc]);
    local_f0 = param_2[0x12];
    local_ec = param_2[0x13];
    local_e8 = param_2[0x14];
    local_d8 = param_2[0x18];
    local_110 = param_2[10];
    uStack_10c = param_2[0xb];
    local_138 = uVar15 & 1;
  }
  else if (iVar2 == 1) {
    FUN_00ce07ec(&local_ec,param_2[0x14],param_2[0x15]);
    local_130 = *(undefined8 *)(param_2 + 2);
    local_128 = param_2[4];
    uStack_124 = param_2[5];
    uStack_120 = param_2[6];
    uStack_11c = param_2[7];
    local_118 = param_2[8];
    uStack_114 = param_2[9];
    local_110 = param_2[10];
    local_f0 = param_2[0x12];
    local_e0 = param_2[0x16];
    local_108 = *(undefined8 *)(param_2 + 0xc);
    local_100 = *(undefined8 *)(param_2 + 0xe);
    local_d8 = param_2[0x18];
    uStack_d4 = param_2[0x19];
    local_c4 = (undefined1)param_2[0x1d];
    local_c8 = param_2[0x1c];
    local_d0 = param_2[0x1a];
    local_f8 = *(undefined8 *)(param_2 + 0x10);
    local_138 = 2;
  }
  else {
    FUN_00ce07ec(auStack_54,param_2[0x14],param_2[0x15]);
    local_98 = param_2[2];
    uStack_94 = param_2[3];
    uStack_90 = param_2[4];
    uStack_8c = param_2[5];
    uStack_88 = param_2[6];
    uStack_84 = param_2[7];
    local_80 = param_2[8];
    uStack_7c = param_2[9];
    local_48 = param_2[0x16];
    local_70 = *(undefined8 *)(param_2 + 0xc);
    local_68 = *(undefined8 *)(param_2 + 0xe);
    local_60 = param_2[0x10];
    local_5c = param_2[0x11];
    local_58 = param_2[0x12];
    uStack_78 = param_2[10];
    FUN_00ce056c(&local_40,param_2[0x19],param_2[0x1a]);
    FUN_016dd1aa(&local_130,&local_98,0x58);
    local_138 = 3;
    local_d8 = local_40;
    uStack_d4 = uStack_3c;
    local_d0 = uStack_38;
  }
  local_134 = 0;
  uVar16 = param_2[0x2f];
  uVar18 = param_2[0x2e];
  uVar14 = param_2[0x30];
  uVar15 = param_2[0x29];
  uVar17 = param_2[0x2a];
  uVar10 = param_2[0x2b];
  uVar11 = param_2[0x2c];
  uVar12 = param_2[0x2d];
  *(uint *)(param_1 + 0xa0) = param_2[0x28];
  *(uint *)(param_1 + 0xa4) = uVar15;
  *(uint *)(param_1 + 0xa8) = uVar17;
  *(uint *)(param_1 + 0xac) = uVar10;
  *(uint *)(param_1 + 0xb0) = uVar11;
  *(uint *)(param_1 + 0xb4) = uVar12;
  *(uint *)(param_1 + 200) = uVar1;
  *(int *)(param_1 + 0xcc) = iVar8;
  *(uint *)(param_1 + 0xd0) = uVar7;
  FUN_016dd1aa(param_1,&local_138,0xa0);
  *(uint *)(param_1 + 0xb8) = uVar18;
  *(uint *)(param_1 + 0xbc) = uVar16;
  *(uint *)(param_1 + 0xc0) = uVar14;
  return;
}

