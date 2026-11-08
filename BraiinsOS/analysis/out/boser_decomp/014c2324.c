// FUN_014c2324 @ 014c2324 size=652 calls_out=3 calls_in=2
// strings: 

void FUN_014c2324(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4,
                 undefined4 param_5)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  uint local_12c;
  undefined1 auStack_110 [236];
  
  uVar3 = FUN_014c14b4(param_2[4],param_2[5],param_2[6],param_2[7],param_3,param_4);
  if (param_2[2] == 0) {
    FUN_014bfeac(param_2,1,param_2 + 4);
  }
  puVar12 = (uint *)*param_2;
  uVar13 = param_2[1];
  iVar11 = 0;
  bVar2 = false;
  uVar7 = uVar3;
  do {
    uVar7 = uVar13 & uVar7;
    uVar14 = *(uint *)((int)puVar12 + uVar7);
    uVar4 = uVar14 ^ (uVar3 >> 0x19) * 0x1010101;
    for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar5 = uVar7 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                     (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar13;
      uVar9 = param_3 & 0xff;
      uVar6 = (uint)(byte)puVar12[uVar5 * -0x3a + -0x3a];
      if ((uVar9 != 3) == (uVar6 != 3)) {
        bVar1 = uVar6 != 3 && uVar9 != uVar6;
        uVar10 = (uint)(uVar9 != 3);
        bVar15 = uVar9 == 3 || (uVar6 == 3 || uVar9 == uVar6);
        if (bVar15) {
          bVar1 = *(byte *)((int)puVar12 + uVar5 * -0xe8 + -0xe7);
          uVar10 = param_4 & 0xff;
        }
        if (bVar15 && uVar10 == bVar1) {
          FUN_01bed4e2(param_1,puVar12 + uVar5 * -0x3a + -0x39,0xe4);
          FUN_01bed4e2(puVar12 + uVar5 * -0x3a + -0x39,param_5,0xe4);
          return;
        }
      }
    }
    uVar4 = uVar14 & 0x80808080;
    if (bVar2) {
LAB_014c248c:
      if ((uVar4 & uVar14 << 1) != 0) {
        uVar7 = (uint)*(char *)((int)puVar12 + local_12c);
        if (-1 < (int)uVar7) {
          uVar7 = *puVar12 & 0x80808080;
          uVar4 = LZCOUNT((*puVar12 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                          (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18);
          uVar7 = (uint)*(byte *)((int)puVar12 + (uVar4 >> 3));
          local_12c = uVar4 >> 3;
        }
        FUN_01bed4e2((uint)auStack_110 | 2,param_5,0xe4);
        iVar11 = param_2[2];
        iVar8 = param_2[3];
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar12 + local_12c) = bVar1;
        *(byte *)((int)puVar12 + (uVar13 & local_12c - 4) + 4) = bVar1;
        param_2[2] = iVar11 - (uVar7 & 1);
        *(char *)(puVar12 + local_12c * -0x3a + -0x3a) = (char)param_3;
        *(char *)((int)puVar12 + local_12c * -0xe8 + -0xe7) = (char)param_4;
        param_2[3] = iVar8 + 1;
        FUN_01bed4e2((int)puVar12 + local_12c * -0xe8 + -0xe6,auStack_110,0xe6);
        *param_1 = 5;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar4 != 0) {
        local_12c = uVar7 + ((uint)LZCOUNT((uVar14 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                           (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                    uVar13;
        goto LAB_014c248c;
      }
      bVar2 = false;
    }
    iVar11 = iVar11 + 4;
    uVar7 = iVar11 + uVar7;
  } while( true );
}

