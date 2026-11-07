// FUN_012750bc @ 012750bc size=656 calls_out=4 calls_in=1
// strings: 

void FUN_012750bc(uint *param_1,undefined4 *param_2,uint *param_3,uint *param_4)

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
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_6c;
  int local_50;
  
  uVar12 = param_3[1];
  uVar13 = param_3[2];
  uVar3 = FUN_01930380(param_2[4],param_2[5],param_2[6],param_2[7],uVar12,uVar13);
  if (param_2[2] == 0) {
    FUN_0126fa44(param_2,param_2 + 4);
  }
  puVar11 = (uint *)*param_2;
  uVar14 = param_2[1];
  bVar2 = false;
  local_50 = 0;
  uVar9 = uVar3;
  do {
    uVar9 = uVar14 & uVar9;
    uVar4 = *(uint *)((int)puVar11 + uVar9);
    uVar5 = uVar4 ^ (uVar3 >> 0x19) * 0x1010101;
    for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar6 = uVar9 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                     (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar14;
      if ((uVar13 == puVar11[uVar6 * -6 + -4]) &&
         (iVar7 = thunk_FUN_01bed842(uVar12,puVar11[uVar6 * -6 + -5],uVar13), iVar7 == 0)) {
        uVar3 = puVar11[uVar6 * -6 + -2];
        uVar13 = puVar11[uVar6 * -6 + -1];
        *param_1 = puVar11[uVar6 * -6 + -3];
        param_1[1] = uVar3;
        param_1[2] = uVar13;
        uVar3 = param_4[1];
        uVar13 = param_4[2];
        puVar11[uVar6 * -6 + -3] = *param_4;
        puVar11[uVar6 * -6 + -2] = uVar3;
        puVar11[uVar6 * -6 + -1] = uVar13;
        FUN_019bb7e0(*param_3,uVar12);
        return;
      }
    }
    uVar5 = uVar4 & 0x80808080;
    if (bVar2) {
LAB_0127522c:
      if ((uVar5 & uVar4 << 1) != 0) {
        uVar12 = (uint)*(char *)((int)puVar11 + local_6c);
        if (-1 < (int)uVar12) {
          uVar12 = *puVar11 & 0x80808080;
          uVar13 = LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                           (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18);
          uVar12 = (uint)*(byte *)((int)puVar11 + (uVar13 >> 3));
          local_6c = uVar13 >> 3;
        }
        uVar13 = *param_3;
        uVar4 = param_3[1];
        uVar6 = param_3[2];
        uVar9 = *param_4;
        uVar5 = param_4[1];
        uVar10 = param_4[2];
        iVar7 = param_2[2];
        iVar8 = param_2[3];
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar11 + local_6c) = bVar1;
        param_2[2] = iVar7 - (uVar12 & 1);
        *(byte *)((int)puVar11 + (uVar14 & local_6c - 4) + 4) = bVar1;
        param_2[3] = iVar8 + 1;
        puVar11[local_6c * -6 + -6] = uVar13;
        puVar11[local_6c * -6 + -5] = uVar4;
        puVar11[local_6c * -6 + -4] = uVar6;
        puVar11[local_6c * -6 + -3] = uVar9;
        puVar11[local_6c * -6 + -2] = uVar5;
        puVar11[local_6c * -6 + -1] = uVar10;
        *param_1 = 0x80000000;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar5 != 0) {
        local_6c = uVar9 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                          (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                   uVar14;
        goto LAB_0127522c;
      }
      bVar2 = false;
    }
    local_50 = local_50 + 4;
    uVar9 = local_50 + uVar9;
  } while( true );
}

