// FUN_0181de90 @ 0181de90 size=524 calls_out=4 calls_in=2
// strings: 

bool FUN_0181de90(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint local_50;
  int local_4c;
  
  uVar3 = FUN_01743c30(param_1[4],param_1[5],param_1[6],param_1[7],param_2);
  if (param_1[2] == 0) {
    FUN_0181e0b8(param_1,param_1 + 4);
  }
  puVar10 = (uint *)*param_1;
  uVar16 = param_1[1];
  bVar2 = false;
  local_4c = 0;
  uVar13 = uVar3;
  do {
    uVar13 = uVar16 & uVar13;
    uVar15 = *(uint *)((int)puVar10 + uVar13);
    uVar4 = uVar15 ^ (uVar3 >> 0x19) * 0x1010101;
    uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
    while (uVar7 = uVar4, uVar7 != 0) {
      iVar5 = FUN_01744014(param_2,*param_1 +
                                   (uVar13 + ((uint)LZCOUNT(uVar7 << 0x18 |
                                                            (uVar7 >> 8 & 0xff) << 0x10 |
                                                            (uVar7 >> 0x10 & 0xff) << 8 |
                                                            uVar7 >> 0x18) >> 3) & uVar16) * -0x18 +
                                   -0x18);
      uVar4 = uVar7 - 1 & uVar7;
      if (iVar5 != 0) {
        FUN_0177266c(param_2);
        goto LAB_0181dfe0;
      }
    }
    uVar4 = uVar15 & 0x80808080;
    if (bVar2) goto LAB_0181df94;
    if (uVar4 == 0) {
      bVar2 = false;
    }
    else {
      local_50 = uVar13 + ((uint)LZCOUNT((uVar15 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                         (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar16
      ;
LAB_0181df94:
      if ((uVar4 & uVar15 << 1) != 0) {
        if (-1 < *(char *)((int)puVar10 + local_50)) {
          uVar13 = *puVar10 & 0x80808080;
          local_50 = (uint)LZCOUNT((*puVar10 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                   (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
        }
        iVar5 = *param_1;
        uVar6 = *param_2;
        uVar8 = param_2[1];
        uVar9 = param_2[2];
        uVar11 = param_2[3];
        uVar12 = param_2[4];
        uVar14 = param_2[5];
        bVar1 = *(byte *)(iVar5 + local_50);
        uVar13 = param_1[1];
        param_1[3] = param_1[3] + 1;
        param_1[2] = param_1[2] - (bVar1 & 1);
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)(iVar5 + local_50) = bVar1;
        *(byte *)(iVar5 + (uVar13 & local_50 - 4) + 4) = bVar1;
        iVar5 = iVar5 + local_50 * -0x18;
        *(undefined4 *)(iVar5 + -0x18) = uVar6;
        *(undefined4 *)(iVar5 + -0x14) = uVar8;
        *(undefined4 *)(iVar5 + -0x10) = uVar9;
        *(undefined4 *)(iVar5 + -0xc) = uVar11;
        *(undefined4 *)(iVar5 + -8) = uVar12;
        *(undefined4 *)(iVar5 + -4) = uVar14;
LAB_0181dfe0:
        return uVar7 != 0;
      }
      bVar2 = true;
    }
    local_4c = local_4c + 4;
    uVar13 = local_4c + uVar13;
  } while( true );
}

