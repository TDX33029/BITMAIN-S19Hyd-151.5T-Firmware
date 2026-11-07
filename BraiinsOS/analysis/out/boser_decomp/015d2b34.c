// FUN_015d2b34 @ 015d2b34 size=420 calls_out=1 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015d2b34(undefined4 *param_1,int *param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  int local_38;
  
  uVar11 = param_2[1];
  iVar14 = *param_2;
  uVar5 = param_3 >> 0x19;
  local_38 = 0;
  while( true ) {
    param_3 = uVar11 & param_3;
    uVar9 = *(uint *)(iVar14 + param_3);
    uVar1 = uVar9 ^ uVar5 * 0x1010101;
    uVar1 = ~uVar1 & 0x80808080 & uVar1 + 0xfefefeff;
    while (uVar1 != 0) {
      uVar10 = uVar1 - 1 & uVar1;
      uVar13 = param_3 + ((uint)LZCOUNT(uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 |
                                        (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18) >> 3) & uVar11;
      iVar3 = iVar14 + -0x10 + uVar13 * -0x10;
      uVar1 = uVar10;
      if (param_6 == *(int *)(iVar3 + 8)) {
        iVar3 = thunk_FUN_01bed842(param_5,*(undefined4 *)(iVar3 + 4),param_6);
        if (iVar3 == 0) {
          puVar2 = (uint *)(iVar14 + (uVar13 - 4 & uVar11));
          uVar11 = *puVar2;
          uVar5 = *(uint *)(iVar14 + uVar13) & 0x80808080 & *(uint *)(iVar14 + uVar13) << 1;
          iVar3 = iVar14 + uVar13 * -0x10;
          uVar4 = 0x80;
          iVar7 = param_2[3];
          if (((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                             (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) +
              ((uint)LZCOUNT(uVar11 & 0x80808080 & uVar11 << 1) >> 3) < 4) {
            param_2[2] = param_2[2] + 1;
            uVar4 = 0xff;
          }
          *(undefined1 *)(iVar14 + uVar13) = uVar4;
          *(undefined1 *)(puVar2 + 1) = uVar4;
          param_2[3] = iVar7 + -1;
          uVar6 = *(undefined4 *)(iVar3 + -0xc);
          uVar8 = *(undefined4 *)(iVar3 + -8);
          uVar12 = *(undefined4 *)(iVar3 + -4);
          *param_1 = *(undefined4 *)(iVar3 + -0x10);
          param_1[1] = uVar6;
          param_1[2] = uVar8;
          param_1[3] = uVar12;
          return;
        }
      }
    }
    if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) break;
    local_38 = local_38 + 4;
    param_3 = param_3 + local_38;
  }
  *param_1 = 0x80000000;
  return;
}

