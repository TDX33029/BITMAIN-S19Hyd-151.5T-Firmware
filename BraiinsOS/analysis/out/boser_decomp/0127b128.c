// FUN_0127b128 @ 0127b128 size=260 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_0127b128(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_2c;
  
  if (param_1[3] != 0) {
    uVar2 = FUN_01a308e4(param_1[4],param_1[5],param_1[6],param_1[7],param_2);
    uVar1 = uVar2 >> 0x19;
    iVar7 = *param_1;
    uVar6 = param_1[1];
    local_2c = 0;
    while( true ) {
      uVar2 = uVar6 & uVar2;
      uVar3 = *(uint *)(iVar7 + uVar2);
      uVar4 = uVar3 ^ uVar1 * 0x1010101;
      uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
      while (uVar4 != 0) {
        iVar5 = thunk_FUN_01bed842(param_2,iVar7 + -0x10 +
                                           (uVar2 + ((uint)LZCOUNT(uVar4 << 0x18 |
                                                                   (uVar4 >> 8 & 0xff) << 0x10 |
                                                                   (uVar4 >> 0x10 & 0xff) << 8 |
                                                                   uVar4 >> 0x18) >> 3) & uVar6) *
                                           -0x10,0x10);
        uVar4 = uVar4 - 1 & uVar4;
        if (iVar5 == 0) {
          return 1;
        }
      }
      if ((uVar3 & 0x80808080 & uVar3 << 1) != 0) break;
      local_2c = local_2c + 4;
      uVar2 = uVar2 + local_2c;
    }
  }
  return 0;
}

