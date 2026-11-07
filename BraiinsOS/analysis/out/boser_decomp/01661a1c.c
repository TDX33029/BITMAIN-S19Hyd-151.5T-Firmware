// FUN_01661a1c @ 01661a1c size=1520 calls_out=2 calls_in=2
// strings: 

undefined8
FUN_01661a1c(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int local_e4;
  uint local_b8;
  uint local_ac;
  uint local_a8 [33];
  
  local_e4 = param_6;
  uVar10 = param_1 >> 1 & 0x55555555 | param_2 & 0xaaaaaaaa;
  uVar14 = 0;
  uVar12 = 0;
  iVar5 = 0x400;
  do {
    uVar9 = uVar10 & 0xf;
    iVar6 = iVar5 + -0x100;
    uVar15 = uVar10 >> 1;
    uVar10 = uVar10 >> 8;
    iVar5 = iVar5 + (uVar15 & 0x78);
    uVar14 = *(uint *)(&UNK_004c3368 + iVar6 + uVar9 * 8) | uVar14 |
             *(uint *)(&UNK_004c3368 + iVar5 + -0x80);
    uVar12 = *(uint *)((int)(&UNK_004c3368 + iVar6 + uVar9 * 8) + 4) | uVar12 |
             *(uint *)(&UNK_004c3368 + iVar5 + -0x7c);
    iVar5 = iVar6;
  } while (iVar6 != 0);
  uVar15 = 0;
  uVar10 = param_1 & 0x55555555 | (param_2 & 0x55555555) << 1;
  local_ac = 0;
  iVar5 = 0x400;
  do {
    uVar3 = uVar10 & 0xf;
    iVar6 = iVar5 + -0x100;
    uVar9 = uVar10 >> 1;
    uVar10 = uVar10 >> 8;
    iVar5 = iVar5 + (uVar9 & 0x78);
    uVar15 = *(uint *)(&UNK_004c3368 + iVar6 + uVar3 * 8) | uVar15 |
             *(uint *)(&UNK_004c3368 + iVar5 + -0x80);
    local_ac = *(uint *)((int)(&UNK_004c3368 + iVar6 + uVar3 * 8) + 4) | local_ac |
               *(uint *)(&UNK_004c3368 + iVar5 + -0x7c);
    iVar5 = iVar6;
  } while (iVar6 != 0);
  uVar9 = 0;
  FUN_01bed93e(local_a8 + 2,0,0x78);
  uVar10 = 0;
  iVar5 = 0x800;
  do {
    iVar6 = iVar5 + -0x100;
    iVar5 = iVar5 + (param_3 >> 1 & 0x78);
    uVar9 = *(uint *)(&UNK_004c1b28 + iVar6 + (param_3 & 0xf) * 8) | uVar9 |
            *(uint *)(&UNK_004c1b28 + iVar5 + -0x80);
    uVar10 = *(uint *)((int)(&UNK_004c1b28 + iVar6 + (param_3 & 0xf) * 8) + 4) | uVar10 |
             *(uint *)(&UNK_004c1b28 + iVar5 + -0x7c);
    param_3 = param_3 >> 8 | param_4 << 0x18;
    param_4 = param_4 >> 8;
    iVar5 = iVar6;
  } while (iVar6 != 0);
  local_a8[1] = uVar10 & 0xfcfcfcfc;
  local_a8[0] = uVar9;
  uVar3 = (param_5 & 0xfc0) << 0xc | param_5 << 0x1a | param_5 >> 2 & 0xfc00 |
          param_5 >> 0x10 & 0xfc;
  iVar5 = 1;
  do {
    iVar6 = *(int *)(&UNK_004c2328 + iVar5 * 4);
    if (1 < iVar6 - 1U) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(iVar6 - 1U,2,&DAT_01d06df4);
    }
    iVar13 = iVar5 + 1;
    iVar7 = 0x800;
    uVar11 = 0;
    uVar4 = 0;
    do {
      iVar1 = iVar7 + (uVar9 >> 1 & 0x78) + iVar6 * 0x800;
      iVar2 = iVar7 + (uVar9 & 0xf) * 8 + iVar6 * 0x800;
      iVar7 = iVar7 + -0x100;
      uVar4 = *(uint *)(&UNK_004c2368 + iVar2 + -0x8fc) | uVar4 |
              *(uint *)(&UNK_004c2368 + iVar1 + -0x87c);
      uVar11 = *(uint *)(&UNK_004c2368 + iVar2 + -0x900) | uVar11 |
               *(uint *)(&UNK_004c2368 + iVar1 + -0x880);
      uVar9 = uVar9 >> 8 | uVar10 << 0x18;
      uVar10 = uVar10 >> 8;
    } while (iVar7 != 0);
    local_a8[iVar5 * 2] = uVar11;
    local_a8[iVar5 * 2 + 1] = uVar4 & 0xfcfcfcfc;
    uVar10 = uVar4;
    uVar9 = uVar11;
    iVar5 = iVar13;
  } while (iVar13 != 0x10);
  if (param_6 != 0) {
    uVar10 = uVar15;
    do {
      uVar15 = uVar14;
      local_b8 = local_ac;
      iVar5 = 0;
      local_ac = uVar12;
      uVar14 = uVar10;
      do {
        uVar12 = (local_ac ^ uVar15) & uVar3;
        uVar10 = uVar12 ^ *(uint *)((int)local_a8 + iVar5 + 4) ^ local_ac;
        iVar6 = ((uVar10 & 0xffffff) >> 0x12) * 8;
        uVar11 = uVar10 >> 0x17 & 0xfffffff8;
        iVar7 = ((uVar10 & 0xffff) >> 10) * 8;
        iVar13 = ((uVar10 & 0xff) >> 2) * 8;
        uVar4 = uVar12 ^ *(uint *)((int)local_a8 + iVar5) ^ uVar15;
        uVar10 = uVar4 >> 0x17 & 0xfffffff8;
        uVar12 = uVar4 >> 0xf & 0x1f8;
        uVar9 = uVar4 >> 7 & 0x1f8;
        iVar1 = (uVar4 & 0xfc) * 2;
        uVar14 = *(uint *)(&DAT_004c3f68 + uVar11) ^ uVar14 ^ *(uint *)(&DAT_004c4168 + iVar6) ^
                 *(uint *)(&DAT_004c4368 + iVar7) ^ *(uint *)(&DAT_004c4568 + iVar13) ^
                 *(uint *)(&DAT_004c4768 + uVar10) ^ *(uint *)(&DAT_004c4968 + uVar12) ^
                 *(uint *)(&DAT_004c4b68 + uVar9) ^ *(uint *)(&DAT_004c4d68 + iVar1);
        uVar12 = *(uint *)(&DAT_004c3f6c + uVar11) ^ local_b8 ^ *(uint *)(&DAT_004c416c + iVar6) ^
                 *(uint *)(&DAT_004c436c + iVar7) ^ *(uint *)(&DAT_004c456c + iVar13) ^
                 *(uint *)(&DAT_004c476c + uVar10) ^ *(uint *)(&DAT_004c496c + uVar12) ^
                 *(uint *)(&DAT_004c4b6c + uVar9) ^ *(uint *)(&DAT_004c4d6c + iVar1);
        uVar10 = (uVar12 ^ uVar14) & uVar3;
        uVar9 = *(uint *)((int)local_a8 + iVar5 + 0xc) ^ uVar10 ^ uVar12;
        iVar6 = ((uVar9 & 0xffffff) >> 0x12) * 8;
        uVar8 = uVar9 >> 0x17 & 0xfffffff8;
        iVar7 = ((uVar9 & 0xffff) >> 10) * 8;
        iVar13 = ((uVar9 & 0xff) >> 2) * 8;
        uVar10 = *(uint *)((int)local_a8 + iVar5 + 8) ^ uVar10 ^ uVar14;
        uVar9 = uVar10 >> 0x17 & 0xfffffff8;
        uVar4 = uVar10 >> 0xf & 0x1f8;
        uVar11 = uVar10 >> 7 & 0x1f8;
        iVar1 = (uVar10 & 0xfc) * 2;
        uVar15 = *(uint *)(&DAT_004c3f68 + uVar8) ^ *(uint *)(&DAT_004c4168 + iVar6) ^
                 *(uint *)(&DAT_004c4368 + iVar7) ^ *(uint *)(&DAT_004c4568 + iVar13) ^
                 *(uint *)(&DAT_004c4768 + uVar9) ^ *(uint *)(&DAT_004c4968 + uVar4) ^
                 *(uint *)(&DAT_004c4b68 + uVar11) ^ *(uint *)(&DAT_004c4d68 + iVar1) ^ uVar15;
        iVar5 = iVar5 + 0x10;
        local_ac = *(uint *)(&DAT_004c3f6c + uVar8) ^ *(uint *)(&DAT_004c416c + iVar6) ^
                   *(uint *)(&DAT_004c436c + iVar7) ^ *(uint *)(&DAT_004c456c + iVar13) ^
                   *(uint *)(&DAT_004c476c + uVar9) ^ *(uint *)(&DAT_004c496c + uVar4) ^
                   *(uint *)(&DAT_004c4b6c + uVar11) ^ *(uint *)(&DAT_004c4d6c + iVar1) ^ local_ac;
        local_b8 = uVar12;
      } while (iVar5 != 0x80);
      local_e4 = local_e4 + -1;
      uVar10 = uVar15;
    } while (local_e4 != 0);
  }
  uVar10 = local_ac >> 3 & 0xf0f0f0f | (uVar15 & 0x78787878) << 1;
  uVar15 = uVar12 >> 3 & 0xf0f0f0f | (uVar14 & 0x78787878) << 1;
  uVar14 = 0;
  uVar12 = 0;
  iVar5 = 0x800;
  do {
    uVar9 = uVar15 & 0xf;
    iVar6 = iVar5 + -0x100;
    iVar5 = iVar5 + (uVar15 >> 1 & 0x78);
    uVar15 = uVar15 >> 8 | uVar10 << 0x18;
    uVar10 = uVar10 >> 8;
    uVar14 = *(uint *)(&UNK_004c3768 + iVar6 + uVar9 * 8) | uVar14 |
             *(uint *)(&UNK_004c3768 + iVar5 + -0x80);
    uVar12 = *(uint *)((int)(&UNK_004c3768 + iVar6 + uVar9 * 8) + 4) | uVar12 |
             *(uint *)(&UNK_004c3768 + iVar5 + -0x7c);
    iVar5 = iVar6;
  } while (iVar6 != 0);
  return CONCAT44(uVar12,uVar14);
}

