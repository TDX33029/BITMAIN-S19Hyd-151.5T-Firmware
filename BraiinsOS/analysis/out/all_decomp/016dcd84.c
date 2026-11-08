// FUN_016dcd84 @ 016dcd84 size=272 calls_out=2 calls_in=1
// strings: 

void FUN_016dcd84(int param_1,int param_2,code *param_3,undefined4 param_4,uint *param_5,int param_6
                 ,uint param_7,int param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint local_120;
  int local_10c [58];
  
  iVar10 = 1;
  uVar9 = *param_5;
  local_120 = param_5[1];
  local_10c[0] = param_1;
  while ((uVar5 = local_120, uVar9 != 1 || (local_120 != 0))) {
    iVar11 = param_1 - *(int *)(param_8 + param_6 * 4);
    iVar6 = (*param_3)(iVar11,local_10c[0],param_4);
    if (iVar6 < 1) break;
    if (param_6 < 2) {
      uVar7 = 0;
    }
    else {
      uVar7 = (param_7 ^ 1) & 1;
    }
    if (uVar7 != 0) {
      iVar8 = *(int *)(param_6 * 4 + param_8 + -8);
      iVar6 = (*param_3)(param_1 + -param_2,iVar11,param_4);
      if ((-1 < iVar6) ||
         (iVar6 = (*param_3)((-param_2 - iVar8) + param_1,iVar11,param_4), -1 < iVar6))
      goto LAB_016dcdb0;
    }
    iVar6 = uVar9 - 1;
    bVar2 = (byte)iVar6;
    bVar3 = (byte)((uint)iVar6 >> 8);
    bVar4 = (byte)((uint)iVar6 >> 0x10);
    bVar1 = (byte)((uint)iVar6 >> 0x18);
    uVar7 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) <<
                                     1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                  bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18
                    | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                       << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                    bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                      0x10 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                              bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                            bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                    (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) <<
                                     1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                  bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
    local_10c[iVar10] = iVar11;
    if (uVar7 == 0) {
      bVar2 = (byte)local_120;
      bVar3 = (byte)(local_120 >> 8);
      bVar4 = (byte)(local_120 >> 0x10);
      bVar1 = (byte)(local_120 >> 0x18);
      iVar6 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1)
                                       << 1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                    bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) <<
                      0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                              bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                            bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                      (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1)
                                       << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                    bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                      (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1)
                                       << 1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                    bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
      uVar7 = iVar6 + 0x20;
      if (iVar6 != 0) goto LAB_016dcdd0;
    }
    else {
LAB_016dcdd0:
      param_6 = param_6 + uVar7;
      if (uVar7 < 0x20) {
        uVar9 = uVar9 >> uVar7 | local_120 << (0x20 - uVar7 & 0xff);
        local_120 = local_120 >> uVar7;
      }
      else {
        local_120 = 0;
        uVar9 = uVar5 >> (uVar7 - 0x20 & 0xff);
      }
    }
    iVar10 = iVar10 + 1;
    param_7 = 0;
    param_1 = iVar11;
  }
  if (param_7 != 0) {
    return;
  }
LAB_016dcdb0:
  FUN_016dcc9c(param_2,local_10c,iVar10);
  FUN_016dccf8(param_1,param_2,param_3,param_4,param_6,param_8);
  return;
}

