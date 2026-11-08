// FUN_006e58b4 @ 006e58b4 size=264 calls_out=2 calls_in=5
// strings: 

undefined4 FUN_006e58b4(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_28;
  
  if (param_1[3] != 0) {
    uVar2 = FUN_006c561c(param_1[4],param_1[5],param_1[6],param_1[7],param_2,param_3);
    uVar1 = uVar2 >> 0x19;
    uVar5 = param_1[1];
    iVar7 = *param_1;
    local_28 = 0;
    while( true ) {
      uVar2 = uVar5 & uVar2;
      uVar6 = *(uint *)(iVar7 + uVar2);
      uVar3 = uVar6 ^ uVar1 * 0x1010101;
      for (uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3)
      {
        iVar4 = iVar7 + (uVar2 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                                (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) &
                        uVar5) * -8;
        if ((param_3 == *(int *)(iVar4 + -4)) &&
           (iVar4 = thunk_FUN_01bed842(param_2,*(undefined4 *)(iVar4 + -8),param_3), iVar4 == 0)) {
          return 1;
        }
      }
      if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
      local_28 = local_28 + 4;
      uVar2 = uVar2 + local_28;
    }
  }
  return 0;
}

