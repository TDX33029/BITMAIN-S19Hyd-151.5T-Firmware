// FUN_00c55b74 @ 00c55b74 size=688 calls_out=2 calls_in=1
// strings: 

void FUN_00c55b74(uint *param_1,int *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint *param_7)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint *unaff_r11;
  bool bVar13;
  uint local_44;
  
  uVar5 = FUN_00c55848(param_2[4],param_2[5],param_2[6],param_2[7],param_3,param_4,param_5,param_6);
  if (param_2[2] == 0) {
    FUN_00c56728(param_2,param_2 + 4);
  }
  puVar6 = (uint *)*param_2;
  uVar9 = param_2[1];
  iVar11 = 0;
  bVar4 = false;
  uVar10 = uVar5;
  do {
    uVar10 = uVar9 & uVar10;
    uVar7 = *(uint *)((int)puVar6 + uVar10);
    uVar12 = uVar7 ^ (uVar5 >> 0x19) * 0x1010101;
    uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff;
    while (uVar12 != 0) {
      uVar8 = uVar10 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                      (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) & uVar9;
      bVar2 = param_3 == puVar6[uVar8 * -0x14 + -0x14];
      bVar3 = param_4 == puVar6[uVar8 * -0x14 + -0x13];
      bVar13 = bVar2 && bVar3;
      if (bVar2 && bVar3) {
        unaff_r11 = param_1;
      }
      uVar12 = uVar12 - 1 & uVar12;
      if (bVar2 && bVar3) {
        bVar13 = param_5 == puVar6[uVar8 * -0x14 + -0x12] &&
                 param_6 == puVar6[uVar8 * -0x14 + -0x11];
        param_1 = unaff_r11;
      }
      if (bVar13) {
        uVar5 = puVar6[uVar8 * -0x14 + -0xf];
        uVar10 = puVar6[uVar8 * -0x14 + -0xe];
        uVar9 = puVar6[uVar8 * -0x14 + -0xd];
        uVar7 = puVar6[uVar8 * -0x14 + -0xc];
        *param_1 = puVar6[uVar8 * -0x14 + -0x10];
        param_1[1] = uVar5;
        param_1[2] = uVar10;
        param_1[3] = uVar9;
        param_1[4] = uVar7;
        uVar5 = puVar6[uVar8 * -0x14 + -10];
        uVar10 = puVar6[uVar8 * -0x14 + -9];
        uVar9 = puVar6[uVar8 * -0x14 + -8];
        uVar7 = puVar6[uVar8 * -0x14 + -7];
        param_1[5] = puVar6[uVar8 * -0x14 + -0xb];
        param_1[6] = uVar5;
        param_1[7] = uVar10;
        param_1[8] = uVar9;
        param_1[9] = uVar7;
        uVar5 = puVar6[uVar8 * -0x14 + -5];
        uVar10 = puVar6[uVar8 * -0x14 + -4];
        uVar9 = puVar6[uVar8 * -0x14 + -3];
        uVar7 = puVar6[uVar8 * -0x14 + -2];
        uVar12 = puVar6[uVar8 * -0x14 + -1];
        param_1[10] = puVar6[uVar8 * -0x14 + -6];
        param_1[0xb] = uVar5;
        param_1[0xc] = uVar10;
        param_1[0xd] = uVar9;
        param_1[0xe] = uVar7;
        param_1[0xf] = uVar12;
        uVar5 = param_7[1];
        uVar10 = param_7[2];
        uVar9 = param_7[3];
        uVar7 = param_7[4];
        puVar6[uVar8 * -0x14 + -0x10] = *param_7;
        puVar6[uVar8 * -0x14 + -0xf] = uVar5;
        puVar6[uVar8 * -0x14 + -0xe] = uVar10;
        puVar6[uVar8 * -0x14 + -0xd] = uVar9;
        puVar6[uVar8 * -0x14 + -0xc] = uVar7;
        uVar5 = param_7[6];
        uVar10 = param_7[7];
        uVar9 = param_7[8];
        uVar7 = param_7[9];
        puVar6[uVar8 * -0x14 + -0xb] = param_7[5];
        puVar6[uVar8 * -0x14 + -10] = uVar5;
        puVar6[uVar8 * -0x14 + -9] = uVar10;
        puVar6[uVar8 * -0x14 + -8] = uVar9;
        puVar6[uVar8 * -0x14 + -7] = uVar7;
        uVar5 = param_7[0xb];
        uVar10 = param_7[0xc];
        uVar9 = param_7[0xd];
        uVar7 = param_7[0xe];
        uVar12 = param_7[0xf];
        puVar6[uVar8 * -0x14 + -6] = param_7[10];
        puVar6[uVar8 * -0x14 + -5] = uVar5;
        puVar6[uVar8 * -0x14 + -4] = uVar10;
        puVar6[uVar8 * -0x14 + -3] = uVar9;
        puVar6[uVar8 * -0x14 + -2] = uVar7;
        puVar6[uVar8 * -0x14 + -1] = uVar12;
        return;
      }
    }
    uVar12 = uVar7 & 0x80808080;
    if (bVar4) {
LAB_00c55cdc:
      if ((uVar12 & uVar7 << 1) != 0) {
        uVar10 = (uint)*(char *)((int)puVar6 + local_44);
        if (-1 < (int)uVar10) {
          uVar10 = *puVar6 & 0x80808080;
          uVar7 = LZCOUNT((*puVar6 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                          (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18);
          uVar10 = (uint)*(byte *)((int)puVar6 + (uVar7 >> 3));
          local_44 = uVar7 >> 3;
        }
        param_2[2] = param_2[2] - (uVar10 & 1);
        param_2[3] = param_2[3] + 1;
        bVar1 = (byte)(uVar5 >> 0x19);
        *(byte *)((int)puVar6 + local_44) = bVar1;
        *(byte *)((int)puVar6 + (local_44 - 4 & uVar9) + 4) = bVar1;
        puVar6[local_44 * -0x14 + -0x14] = param_3;
        puVar6[local_44 * -0x14 + -0x13] = param_4;
        puVar6[local_44 * -0x14 + -0x12] = param_5;
        puVar6[local_44 * -0x14 + -0x11] = param_6;
        uVar5 = param_7[1];
        uVar10 = param_7[2];
        uVar9 = param_7[3];
        uVar7 = param_7[4];
        puVar6[local_44 * -0x14 + -0x10] = *param_7;
        puVar6[local_44 * -0x14 + -0xf] = uVar5;
        puVar6[local_44 * -0x14 + -0xe] = uVar10;
        puVar6[local_44 * -0x14 + -0xd] = uVar9;
        puVar6[local_44 * -0x14 + -0xc] = uVar7;
        uVar5 = param_7[6];
        uVar10 = param_7[7];
        uVar9 = param_7[8];
        uVar7 = param_7[9];
        puVar6[local_44 * -0x14 + -0xb] = param_7[5];
        puVar6[local_44 * -0x14 + -10] = uVar5;
        puVar6[local_44 * -0x14 + -9] = uVar10;
        puVar6[local_44 * -0x14 + -8] = uVar9;
        puVar6[local_44 * -0x14 + -7] = uVar7;
        uVar5 = param_7[0xb];
        uVar10 = param_7[0xc];
        uVar9 = param_7[0xd];
        uVar7 = param_7[0xe];
        uVar12 = param_7[0xf];
        puVar6[local_44 * -0x14 + -6] = param_7[10];
        puVar6[local_44 * -0x14 + -5] = uVar5;
        puVar6[local_44 * -0x14 + -4] = uVar10;
        puVar6[local_44 * -0x14 + -3] = uVar9;
        puVar6[local_44 * -0x14 + -2] = uVar7;
        puVar6[local_44 * -0x14 + -1] = uVar12;
        param_1[2] = (uint)&DAT_3b9aca00;
        return;
      }
      bVar4 = true;
    }
    else {
      if (uVar12 != 0) {
        local_44 = uVar10 + ((uint)LZCOUNT((uVar7 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                           (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                   uVar9;
        goto LAB_00c55cdc;
      }
      bVar4 = false;
    }
    iVar11 = iVar11 + 4;
    uVar10 = iVar11 + uVar10;
  } while( true );
}

