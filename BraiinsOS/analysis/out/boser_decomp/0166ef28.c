// FUN_0166ef28 @ 0166ef28 size=624 calls_out=4 calls_in=1
// strings: 

void FUN_0166ef28(uint *param_1,undefined4 *param_2,int *param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint local_48;
  int local_40;
  
  uVar3 = FUN_01676068(param_2 + 4,param_3[3],param_3[4]);
  if (param_2[2] == 0) {
    FUN_01666b70(param_2,1,param_2 + 4);
  }
  puVar7 = (uint *)*param_2;
  uVar9 = param_2[1];
  bVar2 = false;
  local_40 = 0;
  uVar8 = uVar3;
  do {
    uVar8 = uVar9 & uVar8;
    uVar10 = *(uint *)((int)puVar7 + uVar8);
    uVar4 = uVar10 ^ (uVar3 >> 0x19) * 0x1010101;
    uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
    while (uVar4 != 0) {
      uVar5 = uVar8 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                     (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar9;
      iVar6 = FUN_01670d54(param_3,puVar7[uVar5 * -3 + -3]);
      uVar4 = uVar4 - 1 & uVar4;
      if (iVar6 != 0) {
        uVar3 = puVar7[uVar5 * -3 + -1];
        *param_1 = puVar7[uVar5 * -3 + -2];
        param_1[1] = uVar3;
        puVar7[uVar5 * -3 + -2] = param_5;
        puVar7[uVar5 * -3 + -1] = param_6;
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *param_3;
          bVar2 = (bool)hasExclusiveAccess(param_3);
        } while (!bVar2);
        *param_3 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01670d04(param_3);
          return;
        }
        return;
      }
    }
    uVar4 = uVar10 & 0x80808080;
    if (bVar2) {
LAB_0166f050:
      if ((uVar4 & uVar10 << 1) != 0) {
        uVar8 = (uint)*(char *)((int)puVar7 + local_48);
        if (-1 < (int)uVar8) {
          uVar8 = *puVar7 & 0x80808080;
          uVar4 = LZCOUNT((*puVar7 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                          (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18);
          uVar8 = (uint)*(byte *)((int)puVar7 + (uVar4 >> 3));
          local_48 = uVar4 >> 3;
        }
        iVar6 = param_2[2];
        iVar11 = param_2[3];
        *(undefined1 *)(param_1 + 1) = 6;
        param_2[2] = iVar6 - (uVar8 & 1);
        param_2[3] = iVar11 + 1;
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar7 + local_48) = bVar1;
        *(byte *)((int)puVar7 + (uVar9 & local_48 - 4) + 4) = bVar1;
        puVar7[local_48 * -3 + -3] = (uint)param_3;
        puVar7[local_48 * -3 + -2] = param_5;
        puVar7[local_48 * -3 + -1] = param_6;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar4 != 0) {
        local_48 = uVar8 + ((uint)LZCOUNT((uVar10 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                          (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar9
        ;
        goto LAB_0166f050;
      }
      bVar2 = false;
    }
    local_40 = local_40 + 4;
    uVar8 = local_40 + uVar8;
  } while( true );
}

