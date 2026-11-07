// FUN_0101800c @ 0101800c size=700 calls_out=4 calls_in=3
// strings: 

void FUN_0101800c(uint *param_1,undefined4 *param_2,uint *param_3,uint *param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint local_7c;
  uint local_58;
  uint uStack_44;
  
  uVar12 = param_3[2];
  uVar15 = param_3[1];
  uVar3 = FUN_01adafd4(param_2[4],param_2[5],param_2[6],param_2[7],uVar15,uVar12);
  if (param_2[2] == 0) {
    FUN_0118f488(param_2,param_2 + 4);
  }
  uVar9 = param_2[1];
  puVar16 = (uint *)*param_2;
  iVar8 = 0;
  bVar2 = false;
  uVar10 = uVar3;
  do {
    uVar10 = uVar9 & uVar10;
    uVar4 = *(uint *)((int)puVar16 + uVar10);
    uVar5 = uVar4 ^ (uVar3 >> 0x19) * 0x1010101;
    for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar6 = uVar10 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                      (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar9;
      if ((uVar12 == puVar16[uVar6 * -10 + -8]) &&
         (iVar7 = thunk_FUN_01bed842(uVar15,puVar16[uVar6 * -10 + -9]), iVar7 == 0)) {
        uVar3 = puVar16[uVar6 * -10 + -5];
        uVar12 = puVar16[uVar6 * -10 + -4];
        uVar10 = puVar16[uVar6 * -10 + -3];
        uVar9 = puVar16[uVar6 * -10 + -2];
        uVar4 = puVar16[uVar6 * -10 + -1];
        *param_1 = puVar16[uVar6 * -10 + -6];
        param_1[1] = uVar3;
        param_1[2] = uVar12;
        param_1[3] = uVar10;
        param_1[4] = uVar9;
        param_1[5] = uVar4;
        uVar3 = param_4[1];
        uVar12 = param_4[2];
        uVar10 = param_4[3];
        uVar9 = param_4[4];
        uVar4 = param_4[5];
        puVar16[uVar6 * -10 + -6] = *param_4;
        puVar16[uVar6 * -10 + -5] = uVar3;
        puVar16[uVar6 * -10 + -4] = uVar12;
        puVar16[uVar6 * -10 + -3] = uVar10;
        puVar16[uVar6 * -10 + -2] = uVar9;
        puVar16[uVar6 * -10 + -1] = uVar4;
        FUN_019bb7e0(*param_3,uVar15);
        return;
      }
    }
    uVar5 = uVar4 & 0x80808080;
    if (bVar2) {
LAB_01018164:
      if ((uVar5 & uVar4 << 1) != 0) {
        local_58 = (uint)*(char *)((int)puVar16 + local_7c);
        if (-1 < (int)local_58) {
          uVar12 = *puVar16 & 0x80808080;
          uVar12 = LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                           (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18);
          local_58 = (uint)*(byte *)((int)puVar16 + (uVar12 >> 3));
          local_7c = uVar12 >> 3;
        }
        uVar10 = *param_3;
        uVar6 = param_3[1];
        uVar13 = param_3[2];
        uVar12 = *param_4;
        uVar15 = param_4[1];
        uVar4 = param_4[2];
        uVar5 = param_4[3];
        uVar11 = param_4[4];
        uVar14 = param_4[5];
        iVar8 = param_2[2];
        iVar7 = param_2[3];
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar16 + local_7c) = bVar1;
        param_2[2] = iVar8 - (local_58 & 1);
        *(byte *)((int)puVar16 + (uVar9 & local_7c - 4) + 4) = bVar1;
        param_2[3] = iVar7 + 1;
        puVar16[local_7c * -10 + -10] = uVar10;
        puVar16[local_7c * -10 + -9] = uVar6;
        puVar16[local_7c * -10 + -8] = uVar13;
        puVar16[local_7c * -10 + -7] = uStack_44;
        puVar16[local_7c * -10 + -6] = uVar12;
        puVar16[local_7c * -10 + -5] = uVar15;
        puVar16[local_7c * -10 + -4] = uVar4;
        puVar16[local_7c * -10 + -3] = uVar5;
        puVar16[local_7c * -10 + -2] = uVar11;
        puVar16[local_7c * -10 + -1] = uVar14;
        param_1[2] = 0x80000000;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar5 != 0) {
        local_7c = uVar10 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                           (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                   uVar9;
        goto LAB_01018164;
      }
      bVar2 = false;
    }
    iVar8 = iVar8 + 4;
    uVar10 = iVar8 + uVar10;
  } while( true );
}

