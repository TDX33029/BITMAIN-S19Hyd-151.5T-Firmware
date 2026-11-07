// FUN_0181e83c @ 0181e83c size=436 calls_out=3 calls_in=2
// strings: 

void FUN_0181e83c(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int local_50;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar1 = FUN_01743c30(param_1[4],param_1[5],param_1[6],param_1[7],param_2);
  uVar6 = uVar1 >> 0x19;
  iVar9 = *param_1;
  uVar11 = param_1[1];
  local_50 = 0;
  do {
    uVar1 = uVar11 & uVar1;
    uVar2 = *(uint *)(iVar9 + uVar1);
    uVar3 = uVar2 ^ uVar6 * 0x1010101;
    uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
    while (uVar3 != 0) {
      uVar10 = uVar1 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                      (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar11;
      iVar4 = FUN_01744014(param_2,iVar9 + -0x18 + uVar10 * -0x18);
      uVar3 = uVar3 - 1 & uVar3;
      if (iVar4 != 0) {
        iVar4 = ((int)(uVar10 * 0x18) >> 3) * -0x55555555;
        puVar5 = (uint *)(iVar9 + (iVar4 - 4U & uVar11));
        uVar1 = *puVar5;
        uVar6 = *(uint *)(iVar9 + iVar4) & 0x80808080 & *(uint *)(iVar9 + iVar4) << 1;
        uVar8 = 0x80;
        if (((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8
                           | uVar6 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar1 & 0x80808080 & uVar1 << 1) >> 3) < 4) {
          param_1[2] = param_1[2] + 1;
          uVar8 = 0xff;
        }
        iVar7 = iVar9 + uVar10 * -0x18;
        *(undefined1 *)(iVar9 + iVar4) = uVar8;
        iVar9 = param_1[3];
        *(undefined1 *)(puVar5 + 1) = uVar8;
        param_1[3] = iVar9 + -1;
        local_40 = *(uint *)(iVar7 + -0x18);
        uStack_3c = *(undefined4 *)(iVar7 + -0x14);
        uStack_38 = *(undefined4 *)(iVar7 + -0x10);
        uStack_34 = *(undefined4 *)(iVar7 + -0xc);
        uStack_30 = *(undefined4 *)(iVar7 + -8);
        uStack_2c = *(undefined4 *)(iVar7 + -4);
        if ((local_40 & 0xff) == 3) {
          return;
        }
        FUN_0177266c(&local_40);
        return;
      }
    }
    if ((uVar2 & 0x80808080 & uVar2 << 1) != 0) {
      return;
    }
    local_50 = local_50 + 4;
    uVar1 = uVar1 + local_50;
  } while( true );
}

