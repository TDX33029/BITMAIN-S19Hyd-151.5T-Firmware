// FUN_015f16ec @ 015f16ec size=228 calls_out=1 calls_in=2
// strings: 

undefined1 FUN_015f16ec(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int local_28;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar5 = FUN_015f7180(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                         *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),param_2);
    uVar1 = uVar5 >> 0x19;
    iVar8 = *(int *)(param_1 + 0x20);
    local_28 = 0;
    while( true ) {
      uVar5 = *(uint *)(param_1 + 0x24) & uVar5;
      uVar9 = *(uint *)(iVar8 + uVar5);
      uVar6 = uVar9 ^ uVar1 * 0x1010101;
      uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
      while (uVar6 != 0) {
        uVar7 = uVar6 >> 8;
        uVar2 = uVar6 >> 0x10;
        uVar3 = uVar6 >> 0x18;
        uVar4 = uVar6 << 0x18;
        uVar6 = uVar6 - 1 & uVar6;
        uVar7 = uVar5 + ((uint)LZCOUNT(uVar4 | (uVar7 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3)
                        >> 3) & *(uint *)(param_1 + 0x24);
        if (param_2 == *(int *)(iVar8 + -8 + uVar7 * -8)) {
          return *(undefined1 *)(iVar8 + uVar7 * -8 + -4);
        }
      }
      if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) break;
      local_28 = local_28 + 4;
      uVar5 = uVar5 + local_28;
    }
  }
  return 2;
}

