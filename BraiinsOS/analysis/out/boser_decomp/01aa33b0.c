// FUN_01aa33b0 @ 01aa33b0 size=588 calls_out=4 calls_in=3
// strings: 

uint FUN_01aa33b0(undefined4 *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  uint local_48;
  int local_34;
  
  uVar12 = param_1[4];
  uVar16 = param_2[1];
  uVar17 = param_2[2];
  uVar11 = param_1[5];
  uVar13 = param_1[6];
  uVar14 = param_1[7];
  uVar18 = FUN_01adafd4(uVar12,uVar11,uVar13,uVar14,uVar16,uVar17);
  uVar15 = (uint)uVar18;
  if (param_1[2] == 0) {
    FUN_01a9cfec(param_1,(int)((ulonglong)uVar18 >> 0x20),uVar12,uVar11,uVar13,uVar14);
  }
  uVar1 = uVar15 >> 0x19;
  puVar8 = (uint *)*param_1;
  uVar9 = param_1[1];
  bVar3 = false;
  local_34 = 0;
  do {
    uVar15 = uVar9 & uVar15;
    uVar4 = *(uint *)((int)puVar8 + uVar15);
    uVar5 = uVar4 ^ uVar1 * 0x1010101;
    for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar6 = uVar15 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                      (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar9;
      if ((uVar17 == puVar8[uVar6 * -4 + -2]) &&
         (iVar7 = thunk_FUN_01bed842(uVar16,puVar8[uVar6 * -4 + -3],uVar17), iVar7 == 0)) {
        uVar17 = puVar8[uVar6 * -4 + -1];
        uVar15 = *param_2;
        puVar8[uVar6 * -4 + -1] = param_3;
        FUN_019bb7e0(uVar15,uVar16);
        return uVar17;
      }
    }
    uVar5 = uVar4 & 0x80808080;
    if (bVar3) {
LAB_01aa34f0:
      if ((uVar5 & uVar4 << 1) != 0) {
        uVar15 = (uint)*(char *)((int)puVar8 + local_48);
        if (-1 < (int)uVar15) {
          uVar15 = *puVar8 & 0x80808080;
          uVar16 = LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                           (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18);
          uVar15 = (uint)*(byte *)((int)puVar8 + (uVar16 >> 3));
          local_48 = uVar16 >> 3;
        }
        iVar7 = param_1[3];
        iVar10 = param_1[2];
        bVar2 = (byte)((ulonglong)uVar18 >> 0x18) >> 1;
        *(byte *)((int)puVar8 + local_48) = bVar2;
        param_1[2] = iVar10 - (uVar15 & 1);
        param_1[3] = iVar7 + 1;
        *(byte *)((int)puVar8 + (uVar9 & local_48 - 4) + 4) = bVar2;
        uVar15 = param_2[1];
        uVar16 = param_2[2];
        puVar8[local_48 * -4 + -4] = *param_2;
        puVar8[local_48 * -4 + -3] = uVar15;
        puVar8[local_48 * -4 + -2] = uVar16;
        puVar8[local_48 * -4 + -1] = param_3;
        return 0;
      }
      bVar3 = true;
    }
    else {
      if (uVar5 != 0) {
        local_48 = uVar15 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                           (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                   uVar9;
        goto LAB_01aa34f0;
      }
      bVar3 = false;
    }
    local_34 = local_34 + 4;
    uVar15 = local_34 + uVar15;
  } while( true );
}

