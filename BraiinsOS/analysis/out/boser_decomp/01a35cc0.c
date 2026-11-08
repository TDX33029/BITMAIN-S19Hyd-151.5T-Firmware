// FUN_01a35cc0 @ 01a35cc0 size=324 calls_out=4 calls_in=0
// strings: 

void FUN_01a35cc0(undefined1 *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int local_30;
  
  uVar3 = FUN_01a308e4(param_2[4],param_2[5],param_2[6],param_2[7],param_3);
  uVar1 = uVar3 >> 0x19;
  iVar7 = *param_2;
  uVar8 = param_2[1];
  local_30 = 0;
  do {
    uVar3 = uVar8 & uVar3;
    uVar4 = *(uint *)(iVar7 + uVar3);
    uVar5 = uVar4 ^ uVar1 * 0x1010101;
    uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
    while (uVar5 != 0) {
      uVar9 = uVar3 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                     (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar8;
      iVar6 = thunk_FUN_01bed842(param_3,iVar7 + -0x20 + uVar9 * -0x20,0x10);
      uVar5 = uVar5 - 1 & uVar5;
      if (iVar6 == 0) {
        iVar7 = iVar7 + uVar9 * -0x20;
        FUN_01a31070(param_2,iVar7);
        FUN_01bed4e2(param_1 + 1,iVar7 + -0x10,0x10);
        uVar2 = 1;
        goto LAB_01a35df8;
      }
    }
    uVar2 = 0;
    if ((uVar4 & 0x80808080 & uVar4 << 1) != 0) {
LAB_01a35df8:
      *param_1 = uVar2;
      return;
    }
    local_30 = local_30 + 4;
    uVar3 = uVar3 + local_30;
  } while( true );
}

