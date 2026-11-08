// FUN_0153a0ac @ 0153a0ac size=628 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_0153a0ac(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int local_38;
  int local_30;
  undefined4 *local_2c;
  undefined4 **local_28;
  
  if (*(int *)(param_1 + 0x5c) != 0) {
    uVar2 = FUN_0155d010(param_1 + 0x60,param_2,param_3);
    uVar1 = uVar2 >> 0x19;
    iVar7 = *(int *)(param_1 + 0x50);
    uVar8 = *(uint *)(param_1 + 0x54);
    local_38 = 0;
    while( true ) {
      uVar2 = uVar8 & uVar2;
      uVar11 = *(uint *)(iVar7 + uVar2);
      uVar3 = uVar11 ^ uVar1 * 0x1010101;
      uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
      while (uVar3 != 0) {
        uVar9 = uVar3 - 1 & uVar3;
        uVar10 = uVar2 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                        (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar8;
        puVar6 = (undefined4 *)(iVar7 + -0x10 + uVar10 * -0x10);
        uVar3 = uVar9;
        if ((param_3 == puVar6[1]) &&
           (iVar4 = thunk_FUN_01bed842(param_2,*puVar6,param_3), iVar4 == 0)) {
          iVar7 = iVar7 + uVar10 * -0x10;
          goto LAB_0153a1cc;
        }
      }
      if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
      local_38 = local_38 + 4;
      uVar2 = uVar2 + local_38;
    }
  }
  DataMemoryBarrier(0xb);
  if (DAT_01d4ecf8 != 0) {
    local_28 = &local_2c;
    local_2c = &DAT_01d4ecc8;
    FUN_019a768c(&DAT_01d4ecf8,1,&local_28,&DAT_01cfb6e8,&DAT_01d293e0);
  }
  if (DAT_01d4ecd4 == 0) {
    return 0;
  }
  uVar8 = FUN_0155d010(&DAT_01d4ecd8,param_2,param_3);
  uVar2 = DAT_01d4eccc;
  iVar4 = DAT_01d4ecc8;
  uVar1 = uVar8 >> 0x19;
  local_30 = 0;
  do {
    uVar8 = uVar2 & uVar8;
    uVar11 = *(uint *)(iVar4 + uVar8);
    uVar3 = uVar11 ^ uVar1 * 0x1010101;
    uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
    while (uVar3 != 0) {
      iVar7 = iVar4 + (uVar8 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                              (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) &
                      uVar2) * -0x10;
      uVar3 = uVar3 - 1 & uVar3;
      if ((param_3 == *(int *)(iVar7 + -0xc)) &&
         (iVar5 = thunk_FUN_01bed842(param_2,*(undefined4 *)(iVar7 + -0x10),param_3), iVar5 == 0)) {
LAB_0153a1cc:
        return *(undefined4 *)(iVar7 + -8);
      }
    }
    if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) {
      return 0;
    }
    local_30 = local_30 + 4;
    uVar8 = uVar8 + local_30;
  } while( true );
}

