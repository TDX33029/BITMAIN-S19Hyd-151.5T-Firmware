// FUN_017a15c4 @ 017a15c4 size=1836 calls_out=5 calls_in=2
// strings: 

void FUN_017a15c4(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  undefined8 uVar20;
  uint local_154;
  uint local_150;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  uint local_108;
  int local_104;
  uint local_fc;
  int local_f8;
  uint local_f4;
  uint local_f0;
  int local_ec;
  int local_e8;
  uint local_e4;
  undefined1 auStack_e0 [4];
  uint local_dc;
  int local_d8;
  uint local_d4;
  uint local_d0;
  int local_cc;
  int local_c8;
  uint local_c4;
  int local_b4;
  int local_b0;
  uint local_a8;
  int local_a4;
  int local_8c;
  int local_60;
  uint local_5c;
  int local_38;
  int local_34;
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  FUN_016dd1aa(auStack_e0,param_1 + 0xc,0xb0,0);
  uVar2 = *(uint *)(param_1 + 0x10);
  local_10c = *(int *)(param_1 + 0x14);
  local_120 = *(int *)(param_1 + 0x20);
  local_11c = *(int *)(param_1 + 0x24);
  local_110 = *(int *)(param_1 + 0x38);
  iVar3 = *(int *)(param_1 + 0x3c);
  uVar4 = *(uint *)(param_1 + 0x44);
  iVar5 = *(int *)(param_1 + 0x48);
  local_104 = *(int *)(param_1 + 0x60);
  local_118 = *(int *)(param_1 + 0x8c);
  local_108 = *(uint *)(param_1 + 0x90);
  local_114 = *(int *)(param_1 + 0xb8);
  iVar6 = *(int *)(param_1 + 0x9a8);
  uVar7 = *(uint *)(param_1 + 0x9ac);
  uVar12 = *(uint *)(param_1 + 0x18);
  uVar14 = *(uint *)(param_1 + 0x1c);
  uVar13 = *(uint *)(param_1 + 0x28);
  iVar16 = *(int *)(param_1 + 0xb4);
  uVar8 = *(undefined4 *)(param_1 + 0x9b0);
  if ((*(int *)(param_1 + 0x994) != 0) && (*(int *)(param_1 + 0x9a0) == 0)) {
    uVar20 = FUN_017a0de4(*(int *)(param_1 + 0x994),*(undefined4 *)(param_1 + 0x998),1,
                          *(undefined4 *)(param_1 + 0x99c),param_1 + 0xc,
                          *(undefined4 *)(param_1 + 0x2c8),*(undefined4 *)(param_1 + 0x2cc),
                          *(undefined4 *)(param_1 + 0x2d0));
    iVar9 = (int)uVar20;
    *(int *)(param_1 + 0x9a0) = iVar9;
    if (iVar9 == 0) {
      uVar20 = CONCAT44((int)((ulonglong)uVar20 >> 0x20),0xffffffc0);
      goto LAB_017a1a50;
    }
    *(int *)(param_1 + 0x9a4) = iVar9;
  }
  iVar9 = *(int *)(param_1 + 0x9a4);
  *(undefined4 *)(param_1 + 0x9a8) = 0;
  *(undefined4 *)(param_1 + 0x9ac) = 0;
  *(undefined4 *)(param_1 + 0x9b0) = 0;
  uVar17 = uVar7;
  if (iVar9 == 0) {
    bVar15 = false;
    if (param_2 == 2) {
      iVar10 = param_3 + 1;
      *(int *)(param_1 + 600) = iVar10;
      *(undefined4 *)(param_1 + 0x25c) = 0;
      iVar1 = 0;
      if (iVar6 == 0) goto LAB_017a1cb0;
      uVar11 = -(uint)(iVar10 == 0);
    }
    else {
      iVar10 = *(int *)(param_1 + 600);
      iVar1 = *(int *)(param_1 + 0x25c);
      if (iVar6 == 0) {
LAB_017a1cb0:
        param_3 = iVar10 - 1;
        uVar11 = iVar1 - (uint)(iVar10 == 0);
        bVar15 = false;
        uVar17 = 0;
      }
      else {
        param_3 = iVar10 - 1;
        uVar11 = iVar1 - (uint)(iVar10 == 0);
      }
    }
LAB_017a1764:
    if (uVar11 == 0xffffffff && param_3 == 0xffffffff) {
LAB_017a1adc:
      if ((int)uVar4 < 1) {
        uVar11 = 0xffffffff;
        param_3 = 0xffffffff;
        local_150 = 0xffffffff;
        local_154 = 0xffffffff;
      }
      else {
        local_150 = 0xffffffff;
        uVar11 = (int)uVar4 >> 0x1f;
        local_154 = 0xffffffff;
        param_3 = uVar4;
      }
    }
    else {
LAB_017a1770:
      local_154 = uVar11;
      local_150 = param_3;
    }
  }
  else {
    if (*(int *)(param_1 + 0x9a0) == 0) {
      local_110 = *(int *)(iVar9 + 0x1324);
      if (param_2 != 2) goto LAB_017a16f0;
LAB_017a1c50:
      iVar10 = 0;
      iVar1 = param_3 + 1;
      *(int *)(param_1 + 600) = iVar1;
      *(undefined4 *)(param_1 + 0x25c) = 0;
      if (iVar6 != 0) goto LAB_017a1704;
LAB_017a1c64:
      uVar11 = iVar10 - (uint)(iVar1 == 0);
      uVar17 = *(uint *)(iVar9 + 4);
    }
    else {
      if (param_2 == 2) goto LAB_017a1c50;
LAB_017a16f0:
      iVar1 = *(int *)(param_1 + 600);
      iVar10 = *(int *)(param_1 + 0x25c);
      if (iVar6 == 0) goto LAB_017a1c64;
LAB_017a1704:
      uVar11 = iVar10 - (uint)(iVar1 == 0);
    }
    param_3 = iVar1 - 1;
    if (*(int *)(iVar9 + 0xac) != 0) {
      bVar15 = true;
      goto LAB_017a1764;
    }
    bVar15 = false;
    if ((uint)(param_3 <= *(uint *)(&DAT_00450fd4 + *(int *)(iVar9 + 0x110) * 4)) <= -uVar11) {
      if (uVar11 != 0xffffffff || param_3 != 0xffffffff) {
        if (iVar5 != 1) goto LAB_017a1770;
        goto LAB_017a1748;
      }
      bVar15 = false;
      if (iVar5 != 2) {
        bVar15 = iVar3 == 0;
      }
      goto LAB_017a1adc;
    }
    if (iVar5 == 2) goto LAB_017a1770;
LAB_017a1748:
    bVar15 = iVar3 == 0;
    local_154 = uVar11;
    local_150 = param_3;
  }
  FUN_01799ec4(&local_fc,local_110,param_3,uVar11,uVar17,bVar15);
  if (local_104 == 1) {
    local_fc = 0x1b;
  }
  if (uVar2 != 0) {
    local_fc = uVar2;
  }
  if (uVar12 == 0) {
    uVar12 = local_f4;
  }
  if (local_10c == 0) {
    local_10c = local_f8;
  }
  local_d0 = uVar14;
  if (uVar14 == 0) {
    local_d0 = local_f0;
  }
  if (local_120 == 0) {
    local_120 = local_ec;
  }
  if (local_11c == 0) {
    local_11c = local_e8;
  }
  local_c4 = uVar13;
  if (uVar13 == 0) {
    local_c4 = local_e4;
  }
  if (bVar15 == true) {
    if (!(uVar11 == 0 && (0x20000000 < param_3) <= uVar11)) {
      if (!(uVar11 != 0xffffffff || param_3 != 0xffffffff)) goto LAB_017a1864;
      goto LAB_017a1c00;
    }
    if (param_3 < 0x40) {
      if (5 < local_fc) {
        local_fc = 6;
      }
      uVar13 = local_fc + 1;
      uVar2 = local_fc;
    }
    else {
      uVar2 = 0x20 - LZCOUNT(param_3 - 1);
      if (local_fc <= uVar2) {
        uVar2 = local_fc;
      }
      local_fc = uVar2;
      uVar13 = local_fc + 1;
      uVar2 = local_fc;
    }
LAB_017a1bac:
    if (uVar13 <= uVar12) {
      uVar12 = uVar13;
    }
    if (uVar2 < local_10c - (uint)(5 < local_c4)) {
      local_10c = (5 < local_c4) + uVar2;
    }
  }
  else {
    if (uVar17 < 0x20000001 && (uVar11 == 0 && (0x20000000 < param_3) <= uVar11)) {
      if (uVar17 + param_3 < 0x40) {
        uVar2 = 6;
      }
      else {
        uVar2 = 0x20 - LZCOUNT((uVar17 + param_3) - 1);
      }
      if (uVar2 <= local_fc) {
        local_fc = uVar2;
      }
LAB_017a1b50:
      if (uVar17 != 0) {
        uVar11 = uVar11 + CARRY4(param_3,uVar17);
        uVar13 = 1 << (local_fc - 0x20 & 0xff) | 1U >> (0x20 - local_fc & 0xff);
        uVar2 = 1 << (local_fc & 0xff);
        if (uVar13 <= uVar11 && (uint)(param_3 + uVar17 <= uVar2) <= uVar13 - uVar11) {
          uVar13 = uVar13 + CARRY4(uVar17,uVar2);
          if (uVar13 == 0 && (0x3fffffff < uVar17 + uVar2) <= uVar13) {
            iVar1 = LZCOUNT((uVar17 + uVar2) - 1);
            uVar2 = 0x20 - iVar1;
            uVar13 = 0x21 - iVar1;
          }
          else {
            uVar13 = 0x1f;
            uVar2 = 0x1e;
          }
          goto LAB_017a1bac;
        }
      }
LAB_017a1c00:
      uVar13 = local_fc + 1;
      uVar2 = local_fc;
      goto LAB_017a1bac;
    }
    if (!(uVar11 == 0xffffffff && param_3 == 0xffffffff)) goto LAB_017a1b50;
  }
LAB_017a1864:
  local_dc = local_fc;
  if (local_fc < 10) {
    local_dc = 10;
  }
  bVar15 = local_c4 - 3 < 3;
  uVar2 = local_d0;
  if (5 < local_d0) {
    uVar2 = 6;
  }
  if (uVar2 < 4) {
    uVar2 = 4;
  }
  uVar13 = uVar2 + 0x18;
  if (uVar12 < uVar2 + 0x18) {
    uVar13 = uVar12;
  }
  local_d4 = uVar12;
  if (local_108 < 2 && bVar15) {
    local_d4 = uVar13;
  }
  if (local_118 == 0) {
    bVar19 = 0xf < local_fc;
    bVar18 = local_fc == 0x10;
    if (0x10 < local_fc) {
      bVar19 = 5 < local_c4;
      bVar18 = local_c4 == 6;
    }
    local_118 = 2 - (uint)(bVar19 && !bVar18);
  }
  if (local_104 == 0) {
    bVar19 = 5 < local_c4;
    bVar18 = local_c4 == 6;
    if (6 < local_c4) {
      bVar19 = 0x19 < local_fc;
      bVar18 = local_fc == 0x1a;
    }
    local_104 = 2 - (uint)(bVar19 && !bVar18);
  }
  if (local_108 == 0) {
    if (local_fc < 0x12) {
      local_108 = 0;
    }
    else {
      local_108 = (uint)bVar15;
    }
    local_108 = 2 - local_108;
  }
  if (iVar16 == 0) {
    iVar16 = 0x20000;
  }
  if (local_114 == 0) {
    if (local_110 < 10) {
      local_114 = 2;
    }
    else {
      local_114 = 1;
    }
  }
  local_d8 = local_10c;
  local_cc = local_120;
  local_c8 = local_11c;
  local_b4 = local_110;
  local_8c = local_104;
  local_60 = local_118;
  local_5c = local_108;
  iVar1 = 0;
  local_34 = local_114;
  local_b0 = iVar3;
  local_a8 = uVar4;
  local_a4 = iVar5;
  local_38 = iVar16;
  uVar20 = FUN_0179f364(param_1,iVar6,uVar7,uVar8,0,iVar9,auStack_e0);
  if ((uint)uVar20 < 0xffffff89) {
    *(undefined4 *)(param_1 + 0x958) = 0;
    *(undefined4 *)(param_1 + 0x95c) = 0;
    if (*(int *)(param_1 + 300) == 0) {
      iVar1 = (uint)(local_154 == 0 && *(uint *)(param_1 + 0x250) == local_150) +
              *(uint *)(param_1 + 0x250);
    }
    uVar20 = 0;
    *(int *)(param_1 + 0x960) = iVar1;
    *(undefined4 *)(param_1 + 0x970) = 0;
    *(undefined4 *)(param_1 + 0x96c) = 0;
    *(undefined4 *)(param_1 + 0x974) = 1;
    *(undefined4 *)(param_1 + 0x978) = 0;
  }
LAB_017a1a50:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

