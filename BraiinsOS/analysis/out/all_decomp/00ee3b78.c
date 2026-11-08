// FUN_00ee3b78 @ 00ee3b78 size=540 calls_out=1 calls_in=2
// strings: 

void FUN_00ee3b78(undefined4 *param_1,int *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  int local_30;
  
  iVar11 = *param_2;
  local_30 = 0;
  uVar1 = ((((((((param_3 & 0xff ^ 0x84222325) * 0x1b3 ^ (param_3 & 0xffff) >> 8) * 0x1b3 ^
               (param_3 & 0xffffff) >> 0x10) * 0x1b3 ^ param_3 >> 0x18) * 0x1b3 ^ param_4 & 0xff) *
             0x1b3 ^ (param_4 & 0xffff) >> 8) * 0x1b3 ^ (param_4 & 0xffffff) >> 0x10) * 0x1b3 ^
          param_4 >> 0x18) * 0x1b3;
  uVar9 = param_2[1];
  uVar3 = uVar1 >> 0x19;
  while( true ) {
    uVar1 = uVar1 & uVar9;
    uVar6 = *(uint *)(iVar11 + uVar1);
    uVar7 = uVar6 ^ uVar3 * 0x1010101;
    uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
    while (uVar7 != 0) {
      uVar13 = uVar1 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                      (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar9;
      puVar12 = (uint *)(iVar11 + -0x60 + uVar13 * -0x60);
      uVar7 = uVar7 - 1 & uVar7;
      if (param_3 == *puVar12 && param_4 == puVar12[1]) {
        iVar2 = ((int)(uVar13 * 0x60) >> 5) * -0x55555555;
        puVar12 = (uint *)(iVar11 + (iVar2 - 4U & uVar9));
        uVar1 = *puVar12;
        uVar3 = *(uint *)(iVar11 + iVar2) & 0x80808080 & *(uint *)(iVar11 + iVar2) << 1;
        uVar8 = 0x80;
        if (((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8
                           | uVar3 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar1 & 0x80808080 & uVar1 << 1) >> 3) < 4) {
          param_2[2] = param_2[2] + 1;
          uVar8 = 0xff;
        }
        iVar4 = iVar11 + uVar13 * -0x60;
        *(undefined1 *)(iVar11 + iVar2) = uVar8;
        *(undefined1 *)(puVar12 + 1) = uVar8;
        iVar11 = *(int *)(iVar4 + -0x50);
        param_2[3] = param_2[3] + -1;
        iVar2 = 3;
        if (iVar11 != 3) {
          uVar5 = *(undefined4 *)(iVar4 + -0x58);
          uVar10 = *(undefined4 *)(iVar4 + -0x54);
          FUN_016dd1aa(param_1 + 3,iVar4 + -0x4c,0x4c);
          *param_1 = uVar5;
          param_1[1] = uVar10;
          iVar2 = iVar11;
        }
        goto LAB_00ee3d88;
      }
    }
    iVar2 = 3;
    if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
    local_30 = local_30 + 4;
    uVar1 = uVar1 + local_30;
  }
LAB_00ee3d88:
  param_1[2] = iVar2;
  return;
}

