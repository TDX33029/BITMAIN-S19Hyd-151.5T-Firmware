// FUN_0128cc5c @ 0128cc5c size=852 calls_out=4 calls_in=2
// strings: 

void FUN_0128cc5c(uint *param_1,char *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int extraout_r2;
  int iVar6;
  uint uVar7;
  int extraout_r3;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_88 [25];
  
  if (*param_2 == '\0') {
    uVar4 = (uint)*(ushort *)(param_2 + 2);
    uVar14 = FUN_0128ebec(&DAT_00404b88,param_2,uVar4 - 1,-(uint)(uVar4 == 0));
    uVar10 = ((uint)uVar14 ^ 1) + (int)((ulonglong)uVar14 >> 0x20);
    uVar7 = uVar10 - 1;
    if (0xb < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar7,0xc,&DAT_01c261d8);
    }
    uVar5 = *(uint *)(&DAT_00404b88 + uVar7 * 8);
    *param_1 = uVar10;
    iVar6 = *(int *)(&DAT_00404b8c + uVar7 * 8);
    param_1[2] = uVar4 - uVar5;
    param_1[3] = -(iVar6 + (uint)(uVar4 < uVar5));
  }
  else if (*param_2 == '\x01') {
    uVar7 = param_3 * -0x3d70a3d7 + 0x51eb850;
    uVar10 = (uint)*(ushort *)(param_2 + 2);
    if (((uVar7 >> 4 | param_3 * -0x70000000) < 0xa3d70b) ||
       (((param_3 & 3) == 0 && (0x28f5c28 < (uVar7 >> 2 | param_3 * 0x40000000))))) {
      local_8c = 0x14f;
      local_90 = 0x5b;
      local_88[0x12] = 0x112;
      local_88[0xe] = 0xd5;
      local_88[10] = 0x98;
      local_88[4] = 0x3c;
      local_88[8] = 0x79;
      local_88[0xc] = 0xb6;
      local_88[0x10] = 0xf4;
      local_88[0x14] = 0x131;
    }
    else {
      local_8c = 0x14e;
      local_90 = 0x5a;
      local_88[0x12] = 0x111;
      local_88[0xe] = 0xd4;
      local_88[10] = 0x97;
      local_88[4] = 0x3b;
      local_88[8] = 0x78;
      local_88[0xc] = 0xb5;
      local_88[0x10] = 0xf3;
      local_88[0x14] = 0x130;
    }
    local_88[6] = local_90;
    local_88[0x13] = 0;
    local_88[0x15] = 0;
    local_88[0x16] = local_8c;
    local_88[0x17] = 0;
    local_88[0xb] = 0;
    local_88[0xd] = 0;
    local_88[0xf] = 0;
    local_88[0x11] = 0;
    local_88[2] = 0x1f;
    local_88[3] = 0;
    local_88[5] = 0;
    local_88[7] = 0;
    local_88[9] = 0;
    local_88[1] = 0;
    local_88[0] = 0;
    uVar14 = FUN_0128ebec(local_88,0,uVar10,0);
    uVar4 = ((uint)uVar14 ^ 1) + (int)((ulonglong)uVar14 >> 0x20);
    uVar7 = uVar4 - 1;
    if (0xb < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar7,0xc,&DAT_01c261e8);
    }
    *param_1 = uVar4;
    uVar4 = local_88[uVar7 * 2];
    uVar7 = local_88[uVar7 * 2 + 1];
    uVar5 = uVar10 - uVar4;
    param_1[2] = uVar5 + 1;
    param_1[3] = (uint)(0xfffffffe < uVar5) - (uVar7 + (uVar10 < uVar4));
  }
  else {
    uVar7 = param_3 * -0x3d70a3d7 + 0x51eb850;
    uVar10 = (uint)(byte)param_2[1];
    bVar1 = param_2[2];
    bVar2 = param_2[3];
    if ((uVar7 >> 4 | param_3 * -0x70000000) < 0xa3d70b) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
      if ((param_3 & 3) == 0) {
        uVar4 = (uint)(0x28f5c28 < (uVar7 >> 2 | param_3 * 0x40000000));
      }
    }
    uVar7 = uVar10 - 1;
    if (0xb < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar7,0xc,&DAT_01c261f8);
    }
    lVar13 = FUN_0128cfc4(param_3,uVar10,1,0);
    FUN_01bf0fb0((int)(lVar13 + 4),(int)((ulonglong)(lVar13 + 4) >> 0x20),7,0);
    iVar6 = extraout_r2;
    if (extraout_r3 < 0) {
      iVar6 = extraout_r2 + 7;
    }
    *param_1 = uVar10;
    uVar4 = uVar10 == 2 & uVar4;
    sVar3 = (short)(((uint)bVar2 - iVar6) * 0x4925 >> 0x10);
    uVar5 = (uint)(short)((short)((uint)bVar2 - iVar6) + ((sVar3 >> 1) - (sVar3 >> 0xf)) * -7);
    iVar6 = ((int)uVar5 >> 0x1f) + (uint)(0xfffffff8 < uVar5);
    uVar10 = uVar5 + 7;
    if (-1 < (int)uVar5) {
      iVar6 = (int)uVar5 >> 0x1f;
      uVar10 = uVar5;
    }
    lVar13 = (ulonglong)bVar1 * 7 + CONCAT44(iVar6,uVar10);
    uVar5 = (uint)lVar13;
    iVar9 = (int)((ulonglong)lVar13 >> 0x20);
    uVar8 = uVar5 - 6;
    uVar11 = iVar9 - (uint)(uVar5 < 6);
    iVar6 = *(int *)(&DAT_00404c34 + uVar7 * 8) +
            (uint)CARRY4(*(uint *)(&DAT_00404c30 + uVar7 * 8),uVar4);
    bVar12 = *(uint *)(&DAT_00404c30 + uVar7 * 8) + uVar4 < uVar8;
    uVar10 = iVar9 - (uint)(uVar5 < 0xd);
    uVar7 = uVar5 - 0xd;
    if ((int)(iVar6 - (uVar11 + bVar12)) < 0 ==
        (SBORROW4(iVar6,uVar11) != SBORROW4(iVar6 - uVar11,(uint)bVar12))) {
      uVar10 = uVar11;
      uVar7 = uVar8;
    }
    param_1[2] = uVar7;
    param_1[3] = uVar10;
  }
  return;
}

