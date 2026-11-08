// FUN_006e5ac4 @ 006e5ac4 size=252 calls_out=2 calls_in=3
// strings: 

undefined4 FUN_006e5ac4(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int local_28;
  
  if (param_1[3] != 0) {
    uVar2 = FUN_006c4c10(param_1[4],param_1[5],param_1[6],param_1[7],param_2);
    uVar1 = uVar2 >> 0x19;
    iVar6 = *param_1;
    uVar5 = param_1[1];
    local_28 = 0;
    while( true ) {
      uVar2 = uVar5 & uVar2;
      uVar7 = *(uint *)(iVar6 + uVar2);
      uVar3 = uVar7 ^ uVar1 * 0x1010101;
      uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
      while (uVar3 != 0) {
        iVar4 = FUN_006bcafc(param_2,iVar6 + -0xc +
                                     (uVar2 + ((uint)LZCOUNT(uVar3 << 0x18 |
                                                             (uVar3 >> 8 & 0xff) << 0x10 |
                                                             (uVar3 >> 0x10 & 0xff) << 8 |
                                                             uVar3 >> 0x18) >> 3) & uVar5) * -0xc);
        uVar3 = uVar3 - 1 & uVar3;
        if (iVar4 != 0) {
          return 1;
        }
      }
      if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
      local_28 = local_28 + 4;
      uVar2 = uVar2 + local_28;
    }
  }
  return 0;
}

