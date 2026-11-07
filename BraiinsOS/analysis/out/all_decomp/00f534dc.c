// FUN_00f534dc @ 00f534dc size=300 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_00f534dc(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_2c;
  
  if (param_1[3] == 0) {
    return 0;
  }
  uVar2 = FUN_00f5b6c8(param_1[4],param_1[5],param_1[6],param_1[7],*param_2,param_2[1],param_2[2],
                       param_2[3]);
  uVar1 = uVar2 >> 0x19;
  iVar6 = *param_1;
  uVar7 = param_1[1];
  local_2c = 0;
  while( true ) {
    uVar2 = uVar7 & uVar2;
    uVar3 = *(uint *)(iVar6 + uVar2);
    uVar4 = uVar3 ^ uVar1 * 0x1010101;
    uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
    while (uVar4 != 0) {
      iVar5 = thunk_FUN_016dd50a(param_2,iVar6 + -0x10 +
                                         (uVar2 + ((uint)LZCOUNT(uVar4 << 0x18 |
                                                                 (uVar4 >> 8 & 0xff) << 0x10 |
                                                                 (uVar4 >> 0x10 & 0xff) << 8 |
                                                                 uVar4 >> 0x18) >> 3) & uVar7) *
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
  return 0;
}

