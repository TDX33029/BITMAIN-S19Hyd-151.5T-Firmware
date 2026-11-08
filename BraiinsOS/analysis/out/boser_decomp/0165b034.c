// FUN_0165b034 @ 0165b034 size=636 calls_out=4 calls_in=2
// strings: 

void FUN_0165b034(uint *param_1,undefined4 *param_2,uint *param_3,uint *param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined8 uVar18;
  uint local_64;
  int local_54;
  
  uVar7 = param_2[4];
  uVar10 = param_2[5];
  uVar11 = param_2[6];
  uVar13 = param_2[7];
  uVar15 = param_3[1];
  uVar16 = param_3[2];
  uVar18 = FUN_01adafd4(uVar7,uVar10,uVar11,uVar13,uVar15,uVar16);
  uVar8 = (uint)uVar18;
  if (param_2[2] == 0) {
    FUN_0165a2c8(param_2,(int)((ulonglong)uVar18 >> 0x20),uVar7,uVar10,uVar11,uVar13);
  }
  uVar9 = uVar8 >> 0x19;
  uVar14 = param_2[1];
  puVar17 = (uint *)*param_2;
  bVar2 = false;
  local_54 = 0;
  do {
    uVar8 = uVar14 & uVar8;
    uVar12 = *(uint *)((int)puVar17 + uVar8);
    uVar3 = uVar12 ^ uVar9 * 0x1010101;
    for (uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar4 = uVar8 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                     (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar14;
      if ((uVar16 == puVar17[uVar4 * -6 + -4]) &&
         (iVar5 = thunk_FUN_01bed842(uVar15,puVar17[uVar4 * -6 + -5],uVar16), iVar5 == 0)) {
        uVar8 = puVar17[uVar4 * -6 + -2];
        uVar16 = puVar17[uVar4 * -6 + -1];
        *param_1 = puVar17[uVar4 * -6 + -3];
        param_1[1] = uVar8;
        param_1[2] = uVar16;
        uVar8 = param_4[1];
        uVar16 = param_4[2];
        puVar17[uVar4 * -6 + -3] = *param_4;
        puVar17[uVar4 * -6 + -2] = uVar8;
        puVar17[uVar4 * -6 + -1] = uVar16;
        FUN_0134bd64(*param_3,uVar15);
        return;
      }
    }
    uVar3 = uVar12 & 0x80808080;
    if (bVar2) {
LAB_0165b180:
      if ((uVar3 & uVar12 << 1) != 0) {
        uVar8 = (uint)*(char *)((int)puVar17 + local_64);
        if (-1 < (int)uVar8) {
          uVar8 = *puVar17 & 0x80808080;
          uVar15 = LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8
                           | uVar8 >> 0x18);
          uVar8 = (uint)*(byte *)((int)puVar17 + (uVar15 >> 3));
          local_64 = uVar15 >> 3;
        }
        uVar15 = *param_3;
        uVar9 = param_3[1];
        uVar12 = param_3[2];
        uVar16 = *param_4;
        uVar3 = param_4[1];
        uVar4 = param_4[2];
        iVar5 = param_2[2];
        iVar6 = param_2[3];
        bVar1 = (byte)((ulonglong)uVar18 >> 0x18) >> 1;
        *(byte *)((int)puVar17 + local_64) = bVar1;
        param_2[2] = iVar5 - (uVar8 & 1);
        *(byte *)((int)puVar17 + (uVar14 & local_64 - 4) + 4) = bVar1;
        param_2[3] = iVar6 + 1;
        puVar17[local_64 * -6 + -6] = uVar15;
        puVar17[local_64 * -6 + -5] = uVar9;
        puVar17[local_64 * -6 + -4] = uVar12;
        puVar17[local_64 * -6 + -3] = uVar16;
        puVar17[local_64 * -6 + -2] = uVar3;
        puVar17[local_64 * -6 + -1] = uVar4;
        *param_1 = 0x80000000;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar3 != 0) {
        local_64 = uVar8 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                          (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) &
                   uVar14;
        goto LAB_0165b180;
      }
      bVar2 = false;
    }
    local_54 = local_54 + 4;
    uVar8 = local_54 + uVar8;
  } while( true );
}

