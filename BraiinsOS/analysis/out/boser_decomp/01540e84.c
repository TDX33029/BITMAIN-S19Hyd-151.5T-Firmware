// FUN_01540e84 @ 01540e84 size=280 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_01540e84(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int local_28;
  
  if (param_1[3] != 0) {
    uVar6 = FUN_0155d010(param_1 + 4);
    uVar1 = uVar6 >> 0x19;
    iVar10 = *param_1;
    uVar12 = param_1[1];
    local_28 = 0;
    while( true ) {
      uVar6 = uVar12 & uVar6;
      uVar11 = *(uint *)(iVar10 + uVar6);
      uVar7 = uVar11 ^ uVar1 * 0x1010101;
      uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
      while (uVar7 != 0) {
        uVar2 = uVar7 >> 8;
        uVar3 = uVar7 >> 0x10;
        uVar4 = uVar7 >> 0x18;
        uVar5 = uVar7 << 0x18;
        uVar7 = uVar7 - 1 & uVar7;
        puVar8 = (undefined4 *)
                 (iVar10 + -8 +
                 (uVar6 + ((uint)LZCOUNT(uVar5 | (uVar2 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 |
                                         uVar4) >> 3) & uVar12) * -8);
        if ((param_3 == puVar8[1]) &&
           (iVar9 = thunk_FUN_01bed842(param_2,*puVar8,param_3), iVar9 == 0)) {
          return 1;
        }
      }
      if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
      local_28 = local_28 + 4;
      uVar6 = uVar6 + local_28;
    }
  }
  return 0;
}

