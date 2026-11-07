// FUN_006b32d4 @ 006b32d4 size=240 calls_out=1 calls_in=3
// strings: 

void FUN_006b32d4(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_28;
  
  local_28 = param_3;
  while( true ) {
    uVar1 = *(ushort *)(param_2 + 0x81a);
    iVar8 = param_2 + 0x794;
    uVar7 = 0xffffffff;
    iVar6 = (uint)uVar1 * 0xc;
    do {
      if (iVar6 == 0) {
        uVar7 = (uint)uVar1;
        goto LAB_006b3378;
      }
      uVar5 = *(uint *)(iVar8 + 8);
      uVar4 = uVar5;
      if (param_5 < uVar5) {
        uVar4 = param_5;
      }
      iVar2 = FUN_01bed842(param_4,*(undefined4 *)(iVar8 + 4),uVar4);
      if (iVar2 == 0) {
        iVar2 = param_5 - uVar5;
      }
      iVar6 = iVar6 + -0xc;
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while ((char)((0 < iVar2) - (iVar2 < 0)) == '\x01');
    if (0 < iVar2 == iVar2 < 0) break;
LAB_006b3378:
    if (local_28 == 0) {
      uVar3 = 1;
      local_28 = 0;
LAB_006b33a0:
      *param_1 = uVar3;
      param_1[1] = param_2;
      param_1[2] = local_28;
      param_1[3] = uVar7;
      return;
    }
    local_28 = local_28 + -1;
    param_2 = *(int *)(param_2 + uVar7 * 4 + 0x820);
  }
  uVar3 = 0;
  goto LAB_006b33a0;
}

