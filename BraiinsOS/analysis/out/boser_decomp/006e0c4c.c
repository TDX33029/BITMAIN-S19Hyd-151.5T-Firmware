// FUN_006e0c4c @ 006e0c4c size=1088 calls_out=9 calls_in=24
// strings: 

void FUN_006e0c4c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint *puVar15;
  undefined4 uVar16;
  uint uVar17;
  uint local_bc;
  undefined *local_b8;
  uint local_ac;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_28;
  
  iVar12 = param_3[2];
  uVar14 = param_3[1];
  uVar4 = FUN_01adafd4(*param_2,param_2[1],param_2[2],param_2[3],uVar14,iVar12);
  iVar9 = param_2[5];
  local_ac = param_2[6];
  if (param_2[9] == 0) {
    FUN_006ba9a8(param_2 + 7);
  }
  piVar5 = param_2 + 4;
  puVar15 = (uint *)param_2[7];
  uVar17 = param_2[8];
  bVar2 = false;
  iVar10 = 0;
  bVar3 = false;
  uVar11 = uVar4;
  do {
    uVar11 = uVar17 & uVar11;
    uVar6 = *(uint *)((int)puVar15 + uVar11);
    uVar7 = uVar6 ^ (uVar4 >> 0x19) * 0x1010101;
    for (uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      local_b8 = &DAT_01d307c8;
      uVar13 = puVar15[-1 - (uVar11 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                                     (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >>
                                      3) & uVar17)];
      if (local_ac <= uVar13) {
LAB_006e1078:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar13,local_ac,local_b8);
      }
      iVar8 = uVar13 * 0x54 + iVar9;
      if ((iVar12 == *(int *)(iVar8 + 8)) &&
         (iVar8 = thunk_FUN_01bed842(uVar14,*(undefined4 *)(iVar8 + 4),iVar12), iVar8 == 0)) {
        local_ac = param_2[6];
        if (local_ac <= uVar13) {
          local_b8 = &DAT_01d307d8;
          goto LAB_006e1078;
        }
        iVar9 = uVar13 * 0x54 + param_2[5];
        uVar16 = *(undefined4 *)(iVar9 + 0xc);
        local_78 = *(undefined4 *)(iVar9 + 0x10);
        uStack_74 = *(undefined4 *)(iVar9 + 0x14);
        uStack_70 = *(undefined4 *)(iVar9 + 0x18);
        uStack_6c = *(undefined4 *)(iVar9 + 0x1c);
        uStack_68 = *(undefined4 *)(iVar9 + 0x20);
        local_64 = *(undefined4 *)(iVar9 + 0x24);
        uStack_60 = *(undefined4 *)(iVar9 + 0x28);
        uStack_5c = *(undefined4 *)(iVar9 + 0x2c);
        uStack_58 = *(undefined4 *)(iVar9 + 0x30);
        uStack_54 = *(undefined4 *)(iVar9 + 0x34);
        local_50 = *(undefined4 *)(iVar9 + 0x38);
        uStack_4c = *(undefined4 *)(iVar9 + 0x3c);
        uStack_48 = *(undefined4 *)(iVar9 + 0x40);
        uStack_44 = *(undefined4 *)(iVar9 + 0x44);
        uStack_40 = *(undefined4 *)(iVar9 + 0x48);
        uStack_3c = *(undefined4 *)(iVar9 + 0x4c);
        FUN_01bed4e2((undefined4 *)(iVar9 + 0xc),param_4,0x44);
        FUN_019bb7e0(*param_3,uVar14);
        goto LAB_006e1008;
      }
    }
    if (bVar2) {
      if (bVar3) goto LAB_006e0e08;
      bVar2 = true;
      bVar3 = false;
    }
    else {
      uVar7 = uVar6 & 0x80808080;
      if (uVar7 == 0) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        local_bc = uVar11 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                           (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) &
                   uVar17;
LAB_006e0e08:
        if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
        bVar2 = true;
        bVar3 = true;
      }
    }
    iVar10 = iVar10 + 4;
    uVar11 = uVar11 + iVar10;
  } while( true );
  uVar11 = (uint)*(char *)((int)puVar15 + local_bc);
  if (-1 < (int)uVar11) {
    uVar11 = *puVar15 & 0x80808080;
    uVar7 = LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                    uVar11 >> 0x18);
    uVar11 = (uint)*(byte *)((int)puVar15 + (uVar7 >> 3));
    local_bc = uVar7 >> 3;
  }
  iVar10 = param_2[10];
  uVar7 = param_2[6];
  iVar9 = param_2[9];
  bVar1 = (byte)(uVar4 >> 0x19);
  *(byte *)((int)puVar15 + local_bc) = bVar1;
  *(byte *)((int)puVar15 + (uVar17 & local_bc - 4) + 4) = bVar1;
  puVar15[-1 - local_bc] = uVar7;
  iVar12 = param_2[6];
  param_2[9] = iVar9 - (uVar11 & 1);
  param_2[10] = iVar10 + 1;
  if (iVar12 == param_2[4]) {
    uVar11 = 0x1861861;
    if ((uint)(param_2[9] + param_2[10]) < 0x1861861) {
      uVar11 = param_2[9] + param_2[10];
    }
    if (1 < uVar11 - iVar12) {
      iVar9 = FUN_0132b728(piVar5,iVar12,uVar11 - iVar12,4,0x54);
      iVar12 = param_2[6];
      if (iVar9 == -0x7fffffff) goto LAB_006e0fa4;
    }
    FUN_0132b704(piVar5,iVar12,1,4,0x54);
    iVar12 = param_2[6];
  }
LAB_006e0fa4:
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  FUN_01bed4e2(&uStack_6c,param_4,0x44);
  local_28 = uVar4;
  if (iVar12 == *piVar5) {
    FUN_006e4ef8(piVar5);
  }
  FUN_01bed4e2(iVar12 * 0x54 + param_2[5],&local_78,0x54);
  param_2[6] = iVar12 + 1;
  uVar16 = 0x80000000;
LAB_006e1008:
  *param_1 = uVar16;
  param_1[1] = local_78;
  param_1[2] = uStack_74;
  param_1[3] = uStack_70;
  param_1[4] = uStack_6c;
  param_1[5] = uStack_68;
  param_1[6] = local_64;
  param_1[7] = uStack_60;
  param_1[8] = uStack_5c;
  param_1[9] = uStack_58;
  param_1[10] = uStack_54;
  param_1[0xb] = local_50;
  param_1[0xc] = uStack_4c;
  param_1[0xd] = uStack_48;
  param_1[0xe] = uStack_44;
  param_1[0xf] = uStack_40;
  param_1[0x10] = uStack_3c;
  return;
}

