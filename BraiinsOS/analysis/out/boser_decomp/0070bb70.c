// FUN_0070bb70 @ 0070bb70 size=560 calls_out=3 calls_in=20
// strings: 

void FUN_0070bb70(undefined4 *param_1,int *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint local_3c;
  int local_38;
  
  iVar11 = param_2[4];
  iVar12 = param_2[5];
  iVar14 = param_2[6];
  iVar15 = param_2[7];
  uVar6 = FUN_01656218(iVar11,iVar12,iVar14,iVar15,param_3);
  if (param_2[2] == 0) {
    FUN_00708b7c(param_2,1,iVar11,iVar12,iVar14,iVar15);
  }
  puVar7 = (uint *)*param_2;
  uVar10 = param_2[1];
  bVar5 = false;
  local_38 = 0;
  uVar9 = uVar6;
  do {
    uVar9 = uVar10 & uVar9;
    uVar16 = *(uint *)((int)puVar7 + uVar9);
    uVar13 = uVar16 ^ (uVar6 >> 0x19) * 0x1010101;
    uVar13 = ~uVar13 & 0x80808080 & uVar13 + 0xfefefeff;
    while (uVar13 != 0) {
      uVar8 = uVar13 >> 8;
      uVar1 = uVar13 >> 0x10;
      uVar2 = uVar13 >> 0x18;
      uVar3 = uVar13 << 0x18;
      uVar13 = uVar13 - 1 & uVar13;
      uVar8 = uVar9 + ((uint)LZCOUNT(uVar3 | (uVar8 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2)
                      >> 3) & uVar10;
      if (param_3 == puVar7[uVar8 * -0x24 + -0x24]) {
        FUN_01bed4e2(param_1,puVar7 + uVar8 * -0x24 + -0x23,0x8c);
        FUN_01bed4e2(puVar7 + uVar8 * -0x24 + -0x23,param_4,0x8c);
        return;
      }
    }
    uVar13 = uVar16 & 0x80808080;
    if (bVar5) {
LAB_0070bc78:
      if ((uVar13 & uVar16 << 1) != 0) {
        uVar9 = (uint)*(char *)((int)puVar7 + local_3c);
        if (-1 < (int)uVar9) {
          uVar9 = *puVar7 & 0x80808080;
          uVar13 = LZCOUNT((*puVar7 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                           (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18);
          uVar9 = (uint)*(byte *)((int)puVar7 + (uVar13 >> 3));
          local_3c = uVar13 >> 3;
        }
        param_2[2] = param_2[2] - (uVar9 & 1);
        param_2[3] = param_2[3] + 1;
        bVar4 = (byte)(uVar6 >> 0x19);
        *(byte *)((int)puVar7 + local_3c) = bVar4;
        *(byte *)((int)puVar7 + (uVar10 & local_3c - 4) + 4) = bVar4;
        puVar7[local_3c * -0x24 + -0x24] = param_3;
        FUN_01bed4e2(puVar7 + local_3c * -0x24 + -0x23,param_4,0x8c);
        *param_1 = 4;
        return;
      }
      bVar5 = true;
    }
    else {
      if (uVar13 != 0) {
        local_3c = uVar9 + ((uint)LZCOUNT((uVar16 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                          (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) &
                   uVar10;
        goto LAB_0070bc78;
      }
      bVar5 = false;
    }
    local_38 = local_38 + 4;
    uVar9 = local_38 + uVar9;
  } while( true );
}

