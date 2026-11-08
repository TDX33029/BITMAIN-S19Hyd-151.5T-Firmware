// FUN_0166e96c @ 0166e96c size=744 calls_out=4 calls_in=1
// strings: 

void FUN_0166e96c(uint *param_1,undefined4 *param_2,uint *param_3,uint *param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  uint *puVar17;
  uint local_74;
  int local_64;
  
  uVar3 = FUN_016768ec(param_2 + 4,param_3);
  if (param_2[2] == 0) {
    FUN_01667934(param_2,1,param_2 + 4);
  }
  uVar16 = param_2[1];
  uVar4 = param_3[2];
  puVar17 = (uint *)*param_2;
  piVar15 = (int *)*param_3;
  bVar2 = false;
  local_64 = 0;
  uVar10 = uVar3;
  do {
    uVar10 = uVar16 & uVar10;
    uVar5 = *(uint *)((int)puVar17 + uVar10);
    uVar6 = uVar5 ^ (uVar3 >> 0x19) * 0x1010101;
    for (uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar7 = uVar10 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                      (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) & uVar16;
      piVar9 = (int *)puVar17[uVar7 * -8 + -8];
      if ((piVar15 == piVar9) ||
         ((piVar15[4] == piVar9[4] && (iVar8 = thunk_FUN_01bed842(piVar15[3],piVar9[3]), iVar8 == 0)
          ))) {
        if ((uVar4 == puVar17[uVar7 * -8 + -6]) &&
           (iVar8 = thunk_FUN_01bed842(param_3[1],puVar17[uVar7 * -8 + -7],uVar4), iVar8 == 0)) {
          uVar3 = puVar17[uVar7 * -8 + -4];
          uVar10 = puVar17[uVar7 * -8 + -3];
          uVar4 = puVar17[uVar7 * -8 + -2];
          uVar16 = puVar17[uVar7 * -8 + -1];
          *param_1 = puVar17[uVar7 * -8 + -5];
          param_1[1] = uVar3;
          param_1[2] = uVar10;
          param_1[3] = uVar4;
          param_1[4] = uVar16;
          uVar3 = param_4[1];
          uVar10 = param_4[2];
          uVar4 = param_4[3];
          uVar16 = param_4[4];
          puVar17[uVar7 * -8 + -5] = *param_4;
          puVar17[uVar7 * -8 + -4] = uVar3;
          puVar17[uVar7 * -8 + -3] = uVar10;
          puVar17[uVar7 * -8 + -2] = uVar4;
          puVar17[uVar7 * -8 + -1] = uVar16;
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar15;
            bVar2 = (bool)hasExclusiveAccess(piVar15);
          } while (!bVar2);
          *piVar15 = iVar8 + -1;
          if (iVar8 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01670d04(*param_3);
            return;
          }
          return;
        }
      }
    }
    uVar6 = uVar5 & 0x80808080;
    if (bVar2) {
LAB_0166eb04:
      if ((uVar6 & uVar5 << 1) != 0) {
        uVar10 = (uint)*(char *)((int)puVar17 + local_74);
        if (-1 < (int)uVar10) {
          uVar10 = *puVar17 & 0x80808080;
          uVar4 = LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                          (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18);
          uVar10 = (uint)*(byte *)((int)puVar17 + (uVar4 >> 3));
          local_74 = uVar4 >> 3;
        }
        uVar5 = *param_3;
        uVar11 = param_3[1];
        uVar13 = param_3[2];
        uVar4 = *param_4;
        uVar6 = param_4[1];
        uVar7 = param_4[2];
        uVar12 = param_4[3];
        uVar14 = param_4[4];
        iVar8 = param_2[3];
        param_2[2] = param_2[2] - (uVar10 & 1);
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar17 + local_74) = bVar1;
        *(byte *)((int)puVar17 + (uVar16 & local_74 - 4) + 4) = bVar1;
        param_2[3] = iVar8 + 1;
        puVar17[local_74 * -8 + -8] = uVar5;
        puVar17[local_74 * -8 + -7] = uVar11;
        puVar17[local_74 * -8 + -6] = uVar13;
        puVar17[local_74 * -8 + -5] = uVar4;
        puVar17[local_74 * -8 + -4] = uVar6;
        puVar17[local_74 * -8 + -3] = uVar7;
        puVar17[local_74 * -8 + -2] = uVar12;
        puVar17[local_74 * -8 + -1] = uVar14;
        *param_1 = 2;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar6 != 0) {
        local_74 = uVar10 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                           (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                   uVar16;
        goto LAB_0166eb04;
      }
      bVar2 = false;
    }
    local_64 = local_64 + 4;
    uVar10 = local_64 + uVar10;
  } while( true );
}

