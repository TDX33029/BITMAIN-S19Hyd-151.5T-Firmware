// FUN_006e63d8 @ 006e63d8 size=464 calls_out=3 calls_in=3
// strings: 

void FUN_006e63d8(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_38;
  int local_34;
  
  uVar3 = FUN_006c4c10(param_1[4],param_1[5],param_1[6],param_1[7],param_2);
  if (param_1[2] == 0) {
    FUN_006ba404(param_1,param_1 + 4);
  }
  puVar7 = (uint *)*param_1;
  uVar10 = param_1[1];
  bVar2 = false;
  local_34 = 0;
  uVar8 = uVar3;
  do {
    uVar8 = uVar10 & uVar8;
    uVar9 = *(uint *)((int)puVar7 + uVar8);
    uVar4 = uVar9 ^ (uVar3 >> 0x19) * 0x1010101;
    uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
    while (uVar4 != 0) {
      iVar5 = FUN_006bcafc(param_2,puVar7 + (uVar8 + ((uint)LZCOUNT(uVar4 << 0x18 |
                                                                    (uVar4 >> 8 & 0xff) << 0x10 |
                                                                    (uVar4 >> 0x10 & 0xff) << 8 |
                                                                    uVar4 >> 0x18) >> 3) & uVar10) *
                                            -3 + -3);
      uVar4 = uVar4 - 1 & uVar4;
      if (iVar5 != 0) {
        return;
      }
    }
    uVar4 = uVar9 & 0x80808080;
    if (bVar2) {
LAB_006e64d8:
      if ((uVar4 & uVar9 << 1) != 0) {
        uVar8 = (uint)*(char *)((int)puVar7 + local_38);
        if (-1 < (int)uVar8) {
          uVar8 = *puVar7 & 0x80808080;
          uVar4 = LZCOUNT((*puVar7 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                          (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18);
          uVar8 = (uint)*(byte *)((int)puVar7 + (uVar4 >> 3));
          local_38 = uVar4 >> 3;
        }
        iVar5 = param_1[3];
        iVar6 = param_1[2];
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar7 + local_38) = bVar1;
        param_1[2] = iVar6 - (uVar8 & 1);
        param_1[3] = iVar5 + 1;
        *(byte *)((int)puVar7 + (uVar10 & local_38 - 4) + 4) = bVar1;
        uVar3 = param_2[1];
        uVar8 = param_2[2];
        puVar7[local_38 * -3 + -3] = *param_2;
        puVar7[local_38 * -3 + -2] = uVar3;
        puVar7[local_38 * -3 + -1] = uVar8;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar4 != 0) {
        local_38 = uVar8 + ((uint)LZCOUNT((uVar9 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                          (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                   uVar10;
        goto LAB_006e64d8;
      }
      bVar2 = false;
    }
    local_34 = local_34 + 4;
    uVar8 = local_34 + uVar8;
  } while( true );
}

