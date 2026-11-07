// FUN_01ab917c @ 01ab917c size=592 calls_out=3 calls_in=2
// strings: 

void FUN_01ab917c(undefined4 *param_1,int *param_2,uint param_3,uint param_4,undefined4 param_5)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint local_40;
  int local_3c;
  
  uVar3 = FUN_01ab2af4(param_2[4],param_2[5],param_2[6],param_2[7],param_3,param_4);
  if (param_2[2] == 0) {
    FUN_01aafd94(param_2,param_2 + 4);
  }
  puVar4 = (uint *)*param_2;
  uVar6 = param_2[1];
  bVar2 = false;
  local_3c = 0;
  uVar9 = uVar3;
  do {
    uVar9 = uVar6 & uVar9;
    uVar11 = *(uint *)((int)puVar4 + uVar9);
    uVar7 = uVar11 ^ (uVar3 >> 0x19) * 0x1010101;
    uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
    while (uVar7 != 0) {
      uVar5 = uVar9 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                     (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar6;
      uVar7 = uVar7 - 1 & uVar7;
      if (param_3 == puVar4[uVar5 * -0x58 + -0x58] && param_4 == (puVar4 + uVar5 * -0x58 + -0x58)[1]
         ) {
        FUN_01bed4e2(param_1,puVar4 + uVar5 * -0x58 + -0x56,0x158);
        FUN_01bed4e2(puVar4 + uVar5 * -0x58 + -0x56,param_5,0x158);
        return;
      }
    }
    uVar7 = uVar11 & 0x80808080;
    if (bVar2) {
LAB_01ab92a4:
      if ((uVar7 & uVar11 << 1) != 0) {
        uVar9 = (uint)*(char *)((int)puVar4 + local_40);
        if (-1 < (int)uVar9) {
          uVar9 = *puVar4 & 0x80808080;
          uVar7 = LZCOUNT((*puVar4 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                          (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18);
          uVar9 = (uint)*(byte *)((int)puVar4 + (uVar7 >> 3));
          local_40 = uVar7 >> 3;
        }
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar4 + local_40) = bVar1;
        *(byte *)((int)puVar4 + (uVar6 & local_40 - 4) + 4) = bVar1;
        iVar10 = param_2[2];
        iVar8 = param_2[3];
        puVar4[local_40 * -0x58 + -0x57] = param_4;
        puVar4[local_40 * -0x58 + -0x58] = param_3;
        param_2[2] = iVar10 - (uVar9 & 1);
        param_2[3] = iVar8 + 1;
        FUN_01bed4e2(puVar4 + local_40 * -0x58 + -0x56,param_5,0x158);
        *param_1 = 2;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar7 != 0) {
        local_40 = uVar9 + ((uint)LZCOUNT((uVar11 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                          (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar6
        ;
        goto LAB_01ab92a4;
      }
      bVar2 = false;
    }
    local_3c = local_3c + 4;
    uVar9 = local_3c + uVar9;
  } while( true );
}

