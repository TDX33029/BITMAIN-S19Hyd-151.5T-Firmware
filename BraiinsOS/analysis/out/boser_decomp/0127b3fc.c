// FUN_0127b3fc @ 0127b3fc size=344 calls_out=2 calls_in=0
// strings: 

void FUN_0127b3fc(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int local_30;
  
  uVar1 = FUN_01a308e4(param_1[4],param_1[5],param_1[6],param_1[7],param_2);
  uVar7 = uVar1 >> 0x19;
  iVar8 = *param_1;
  uVar10 = param_1[1];
  local_30 = 0;
  while( true ) {
    uVar1 = uVar10 & uVar1;
    uVar2 = *(uint *)(iVar8 + uVar1);
    uVar3 = uVar2 ^ uVar7 * 0x1010101;
    uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
    while (uVar3 != 0) {
      uVar9 = uVar1 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                     (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar10;
      iVar4 = thunk_FUN_01bed842(param_2,iVar8 + -0x10 + uVar9 * -0x10,0x10);
      uVar3 = uVar3 - 1 & uVar3;
      if (iVar4 == 0) {
        puVar5 = (uint *)(iVar8 + (uVar9 - 4 & uVar10));
        uVar7 = *puVar5;
        uVar1 = *(uint *)(iVar8 + uVar9) & 0x80808080 & *(uint *)(iVar8 + uVar9) << 1;
        uVar6 = 0x80;
        iVar4 = param_1[3];
        if (((uint)LZCOUNT(uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8
                           | uVar1 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar7 & 0x80808080 & uVar7 << 1) >> 3) < 4) {
          param_1[2] = param_1[2] + 1;
          uVar6 = 0xff;
        }
        *(undefined1 *)(iVar8 + uVar9) = uVar6;
        *(undefined1 *)(puVar5 + 1) = uVar6;
        param_1[3] = iVar4 + -1;
        return;
      }
    }
    if ((uVar2 & 0x80808080 & uVar2 << 1) != 0) break;
    local_30 = local_30 + 4;
    uVar1 = uVar1 + local_30;
  }
  return;
}

