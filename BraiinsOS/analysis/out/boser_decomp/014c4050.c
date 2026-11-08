// FUN_014c4050 @ 014c4050 size=360 calls_out=1 calls_in=2
// strings: 

int * FUN_014c4050(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  int local_2c;
  
  if (param_1[3] != 0) {
    uVar2 = FUN_014c14b4(param_1[4],param_1[5],param_1[6],param_1[7],param_2,param_3);
    uVar1 = uVar2 >> 0x19;
    iVar5 = *param_1;
    local_2c = 0;
    while( true ) {
      uVar2 = param_1[1] & uVar2;
      uVar10 = *(uint *)(iVar5 + uVar2);
      uVar3 = uVar10 ^ uVar1 * 0x1010101;
      uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
      while (uVar3 != 0) {
        uVar9 = param_2 & 0xff;
        uVar7 = uVar2 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                       (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) &
                param_1[1];
        uVar3 = uVar3 - 1 & uVar3;
        pbVar8 = (byte *)(iVar5 + -0xe8 + uVar7 * -0xe8);
        uVar11 = (uint)*pbVar8;
        if ((uVar9 != 3) == (uVar11 != 3)) {
          uVar6 = (uint)(uVar11 != 3 && uVar9 != uVar11);
          bVar12 = uVar9 == 3 || (uVar11 == 3 || uVar9 == uVar11);
          if (bVar12) {
            uVar6 = param_3 & 0xff;
          }
          if (bVar12 && uVar6 == pbVar8[1]) {
            piVar4 = (int *)(uVar7 * -0xe8 + iVar5 + -0xe4);
            if (*piVar4 - 3U < 2) {
              return (int *)0x0;
            }
            return piVar4;
          }
        }
      }
      if ((uVar10 & 0x80808080 & uVar10 << 1) != 0) break;
      local_2c = local_2c + 4;
      uVar2 = uVar2 + local_2c;
    }
  }
  return (int *)0x0;
}

