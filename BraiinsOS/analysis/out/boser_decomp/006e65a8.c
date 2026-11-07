// FUN_006e65a8 @ 006e65a8 size=548 calls_out=4 calls_in=1
// strings: 

void FUN_006e65a8(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_48;
  int local_34;
  
  uVar9 = param_2[1];
  uVar12 = param_2[2];
  uVar3 = FUN_01adafd4(param_1[4],param_1[5],param_1[6],param_1[7],uVar9,uVar12);
  if (param_1[2] == 0) {
    FUN_006b7a40(param_1,param_1 + 4);
  }
  puVar8 = (uint *)*param_1;
  uVar13 = param_1[1];
  bVar2 = false;
  local_34 = 0;
  uVar10 = uVar3;
  do {
    uVar10 = uVar13 & uVar10;
    uVar11 = *(uint *)((int)puVar8 + uVar10);
    uVar4 = uVar11 ^ (uVar3 >> 0x19) * 0x1010101;
    for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar5 = uVar10 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                      (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar13;
      if ((uVar12 == puVar8[uVar5 * -3 + -1]) &&
         (iVar6 = thunk_FUN_01bed842(uVar9,puVar8[uVar5 * -3 + -2],uVar12), iVar6 == 0)) {
        FUN_019bb7e0(*param_2,uVar9);
        return;
      }
    }
    uVar4 = uVar11 & 0x80808080;
    if (bVar2) {
LAB_006e66e8:
      if ((uVar4 & uVar11 << 1) != 0) {
        uVar9 = (uint)*(char *)((int)puVar8 + local_48);
        if (-1 < (int)uVar9) {
          uVar9 = *puVar8 & 0x80808080;
          uVar12 = LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8
                           | uVar9 >> 0x18);
          uVar9 = (uint)*(byte *)((int)puVar8 + (uVar12 >> 3));
          local_48 = uVar12 >> 3;
        }
        iVar6 = param_1[3];
        iVar7 = param_1[2];
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar8 + local_48) = bVar1;
        param_1[2] = iVar7 - (uVar9 & 1);
        param_1[3] = iVar6 + 1;
        *(byte *)((int)puVar8 + (uVar13 & local_48 - 4) + 4) = bVar1;
        uVar3 = param_2[1];
        uVar9 = param_2[2];
        puVar8[local_48 * -3 + -3] = *param_2;
        puVar8[local_48 * -3 + -2] = uVar3;
        puVar8[local_48 * -3 + -1] = uVar9;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar4 != 0) {
        local_48 = uVar10 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                           (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                   uVar13;
        goto LAB_006e66e8;
      }
      bVar2 = false;
    }
    local_34 = local_34 + 4;
    uVar10 = local_34 + uVar10;
  } while( true );
}

