// FUN_01541508 @ 01541508 size=624 calls_out=4 calls_in=2
// strings: 

void FUN_01541508(uint *param_1,undefined4 *param_2,uint *param_3,uint *param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint local_70;
  
  uVar15 = param_3[2];
  uVar7 = param_3[1];
  uVar3 = FUN_01676700(param_2 + 4,uVar7,uVar15);
  if (param_2[2] == 0) {
    FUN_0152fb54(param_2,param_2 + 4);
  }
  iVar10 = 0;
  puVar8 = (uint *)*param_2;
  uVar16 = param_2[1];
  bVar2 = false;
  uVar14 = uVar3;
  do {
    uVar14 = uVar16 & uVar14;
    uVar13 = *(uint *)((int)puVar8 + uVar14);
    uVar4 = uVar13 ^ (uVar3 >> 0x19) * 0x1010101;
    for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar5 = uVar14 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                      (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar16;
      if (uVar15 == puVar8[uVar5 * -8 + -6]) {
        iVar6 = thunk_FUN_01bed842(uVar7,puVar8[uVar5 * -8 + -7],uVar15);
        if (iVar6 == 0) {
          uVar3 = puVar8[uVar5 * -8 + -4];
          uVar15 = puVar8[uVar5 * -8 + -3];
          uVar14 = puVar8[uVar5 * -8 + -2];
          uVar16 = puVar8[uVar5 * -8 + -1];
          *param_1 = puVar8[uVar5 * -8 + -5];
          param_1[1] = uVar3;
          param_1[2] = uVar15;
          param_1[3] = uVar14;
          param_1[4] = uVar16;
          uVar3 = param_4[1];
          uVar15 = param_4[2];
          uVar14 = param_4[3];
          uVar16 = param_4[4];
          puVar8[uVar5 * -8 + -5] = *param_4;
          puVar8[uVar5 * -8 + -4] = uVar3;
          puVar8[uVar5 * -8 + -3] = uVar15;
          puVar8[uVar5 * -8 + -2] = uVar14;
          puVar8[uVar5 * -8 + -1] = uVar16;
          FUN_019bb7e0(*param_3,uVar7);
          return;
        }
      }
    }
    uVar4 = uVar13 & 0x80808080;
    if (bVar2) {
LAB_01541650:
      if ((uVar4 & uVar13 << 1) != 0) {
        uVar7 = (uint)*(char *)((int)puVar8 + local_70);
        if (-1 < (int)uVar7) {
          uVar7 = *puVar8 & 0x80808080;
          uVar15 = LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8
                           | uVar7 >> 0x18);
          uVar7 = (uint)*(byte *)((int)puVar8 + (uVar15 >> 3));
          local_70 = uVar15 >> 3;
        }
        uVar4 = *param_3;
        uVar5 = param_3[1];
        uVar11 = param_3[2];
        uVar15 = *param_4;
        uVar14 = param_4[1];
        uVar13 = param_4[2];
        uVar9 = param_4[3];
        uVar12 = param_4[4];
        iVar10 = param_2[3];
        param_2[2] = param_2[2] - (uVar7 & 1);
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar8 + local_70) = bVar1;
        *(byte *)((int)puVar8 + (uVar16 & local_70 - 4) + 4) = bVar1;
        param_2[3] = iVar10 + 1;
        puVar8[local_70 * -8 + -8] = uVar4;
        puVar8[local_70 * -8 + -7] = uVar5;
        puVar8[local_70 * -8 + -6] = uVar11;
        puVar8[local_70 * -8 + -5] = uVar15;
        puVar8[local_70 * -8 + -4] = uVar14;
        puVar8[local_70 * -8 + -3] = uVar13;
        puVar8[local_70 * -8 + -2] = uVar9;
        puVar8[local_70 * -8 + -1] = uVar12;
        *param_1 = 0;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar4 != 0) {
        local_70 = uVar14 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                           (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                   uVar16;
        goto LAB_01541650;
      }
      bVar2 = false;
    }
    iVar10 = iVar10 + 4;
    uVar14 = iVar10 + uVar14;
  } while( true );
}

