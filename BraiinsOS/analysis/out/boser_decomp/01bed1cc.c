// FUN_01bed1cc @ 01bed1cc size=546 calls_out=2 calls_in=1
// strings: 

void FUN_01bed1cc(uint param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint local_f0;
  uint local_ec;
  uint local_e8 [49];
  
  uVar6 = param_3 * param_2;
  local_f0 = 1;
  local_ec = 0;
  if (uVar6 != 0) {
    uVar11 = param_1 + (uVar6 - param_3);
    local_e8[0] = param_3;
    local_e8[1] = param_3;
    uVar5 = param_3;
    puVar7 = local_e8 + 1;
    uVar9 = param_3;
    while (uVar5 = uVar5 + uVar9 + param_3, puVar7[1] = uVar5, uVar5 < uVar6) {
      uVar9 = puVar7[1];
      uVar5 = *puVar7;
      puVar7 = puVar7 + 1;
    }
    iVar10 = 1;
    for (; uVar6 = local_f0, param_1 < uVar11; param_1 = param_1 + param_3) {
      if ((local_f0 & 3) == 3) {
        iVar8 = iVar10 + 2;
        FUN_01bed030(param_1,param_3,param_4,param_5,iVar10,local_e8);
        uVar5 = local_ec << 0x1e;
        local_ec = local_ec >> 2;
        local_f0 = uVar5 | uVar6 >> 2 | 1;
      }
      else {
        uVar5 = iVar10 - 1;
        if (local_e8[uVar5] < uVar11 - param_1) {
          FUN_01bed030(param_1,param_3,param_4,param_5,iVar10,local_e8);
        }
        else {
          FUN_01bed0bc(param_1,param_3,param_4,param_5,&local_f0,iVar10,0,local_e8);
          uVar6 = local_f0;
        }
        if (iVar10 == 1) {
          iVar8 = 0;
          uVar6 = local_f0 >> 0x1f;
          local_f0 = local_f0 << 1 | 1;
          local_ec = uVar6 | local_ec << 1;
        }
        else {
          if (uVar5 < 0x20) {
            uVar9 = uVar6 >> (0x20 - uVar5 & 0xff);
            local_f0 = uVar6 << (uVar5 & 0xff) | 1;
            uVar6 = local_ec;
          }
          else {
            uVar5 = iVar10 - 0x21;
            uVar9 = 0;
            local_f0 = 1;
          }
          iVar8 = 1;
          local_ec = uVar6 << (uVar5 & 0xff) | uVar9;
        }
      }
      iVar10 = iVar8;
    }
    FUN_01bed0bc(param_1,param_3,param_4,param_5,&local_f0,iVar10,0,local_e8);
    while( true ) {
      while (iVar10 != 1) {
        uVar6 = param_1 - param_3;
        if (iVar10 < 2) goto LAB_01bed3bc;
        uVar5 = local_f0 >> 0x1e;
        iVar8 = iVar10 + -2;
        local_f0 = (local_f0 & 0x3fffffff) << 1 ^ 3 | uVar5 << 0x1f;
        local_ec = (uVar5 | local_ec << 2) >> 1;
        FUN_01bed0bc(param_1 - (local_e8[iVar8] + param_3),param_3,param_4,param_5,&local_f0,
                     iVar10 + -1,1,local_e8);
        local_ec = local_f0 >> 0x1f | local_ec << 1;
        local_f0 = local_f0 << 1 | 1;
        FUN_01bed0bc(uVar6,param_3,param_4,param_5,&local_f0,iVar8,1,local_e8);
        param_1 = uVar6;
        iVar10 = iVar8;
      }
      if ((local_f0 == 1) && (local_ec == 0)) break;
      uVar6 = param_1 - param_3;
LAB_01bed3bc:
      iVar8 = local_f0 - 1;
      bVar2 = (byte)iVar8;
      bVar3 = (byte)((uint)iVar8 >> 8);
      bVar4 = (byte)((uint)iVar8 >> 0x10);
      bVar1 = (byte)((uint)iVar8 >> 0x18);
      uVar5 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1)
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
      if (uVar5 == 0) {
        bVar2 = (byte)local_ec;
        bVar3 = (byte)(local_ec >> 8);
        bVar4 = (byte)(local_ec >> 0x10);
        bVar1 = (byte)(local_ec >> 0x18);
        iVar8 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1)
                                         << 1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                      bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) <<
                        0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                                bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                              bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                            bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                        (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1)
                                         << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                      bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8
                        | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                           bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                         bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                       bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
        uVar5 = iVar8 + 0x20;
        if (iVar8 != 0) goto LAB_01bed308;
      }
      else {
LAB_01bed308:
        iVar10 = iVar10 + uVar5;
        if (uVar5 < 0x20) {
          local_f0 = local_f0 >> uVar5 | local_ec << (0x20 - uVar5 & 0xff);
          local_ec = local_ec >> uVar5;
        }
        else {
          local_f0 = local_ec >> (uVar5 - 0x20 & 0xff);
          local_ec = 0;
        }
      }
      param_1 = uVar6;
    }
  }
  return;
}

