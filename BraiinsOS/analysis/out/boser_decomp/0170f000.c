// FUN_0170f000 @ 0170f000 size=464 calls_out=5 calls_in=2
// strings: 

void FUN_0170f000(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int local_50;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar1 = FUN_01743c30(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                       *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),param_2);
  uVar6 = uVar1 >> 0x19;
  iVar10 = *(int *)(param_1 + 0x10);
  uVar11 = *(uint *)(param_1 + 0x14);
  local_50 = 0;
  while( true ) {
    uVar1 = uVar11 & uVar1;
    uVar2 = *(uint *)(iVar10 + uVar1);
    uVar3 = uVar2 ^ uVar6 * 0x1010101;
    uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
    while (uVar3 != 0) {
      uVar9 = uVar1 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                     (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar11;
      iVar4 = FUN_01744014(param_2,iVar10 + -0x18 + uVar9 * -0x18);
      uVar3 = uVar3 - 1 & uVar3;
      if (iVar4 != 0) {
        iVar4 = ((int)(uVar9 * 0x18) >> 3) * -0x55555555;
        puVar5 = (uint *)(iVar10 + (iVar4 - 4U & uVar11));
        uVar1 = *puVar5;
        uVar6 = *(uint *)(iVar10 + iVar4) & 0x80808080 & *(uint *)(iVar10 + iVar4) << 1;
        uVar8 = 0x80;
        if (((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8
                           | uVar6 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar1 & 0x80808080 & uVar1 << 1) >> 3) < 4) {
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          uVar8 = 0xff;
        }
        iVar7 = iVar10 + uVar9 * -0x18;
        *(undefined1 *)(iVar10 + iVar4) = uVar8;
        iVar10 = *(int *)(param_1 + 0x1c);
        *(undefined1 *)(puVar5 + 1) = uVar8;
        *(int *)(param_1 + 0x1c) = iVar10 + -1;
        local_40 = *(uint *)(iVar7 + -0x18);
        uStack_3c = *(undefined4 *)(iVar7 + -0x14);
        uStack_38 = *(undefined4 *)(iVar7 + -0x10);
        uStack_34 = *(undefined4 *)(iVar7 + -0xc);
        uStack_30 = *(undefined4 *)(iVar7 + -8);
        uStack_2c = *(undefined4 *)(iVar7 + -4);
        if ((local_40 & 0xff) != 3) {
          FUN_0177266c(&local_40);
        }
        goto LAB_0170f1ac;
      }
    }
    if ((uVar2 & 0x80808080 & uVar2 << 1) != 0) break;
    local_50 = local_50 + 4;
    uVar1 = uVar1 + local_50;
  }
LAB_0170f1ac:
  FUN_0181e654(&local_40,param_1 + 0x50,param_2);
  FUN_0170f364(&local_40);
  return;
}

