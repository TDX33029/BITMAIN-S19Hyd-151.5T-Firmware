// FUN_01a41f28 @ 01a41f28 size=344 calls_out=2 calls_in=0
// strings: 

void FUN_01a41f28(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int local_28;
  
  iVar8 = *param_2;
  if (iVar8 == 0) {
    uVar9 = param_3[1];
    uVar4 = param_3[2];
    *param_1 = *param_3;
    param_1[1] = uVar9;
    param_1[2] = uVar4;
    param_1[3] = param_2;
    param_1[4] = 0;
    return;
  }
  uVar9 = param_3[1];
  uVar11 = param_3[2];
  local_28 = param_2[1];
  do {
    iVar5 = iVar8 + 0x10c;
    uVar1 = *(ushort *)(iVar8 + 0x192);
    uVar10 = 0xffffffff;
    iVar7 = (uint)uVar1 * 0xc;
    do {
      if (iVar7 == 0) {
        uVar10 = (uint)uVar1;
        goto LAB_01a41fd8;
      }
      uVar6 = *(uint *)(iVar5 + 8);
      uVar3 = uVar6;
      if (uVar11 < uVar6) {
        uVar3 = uVar11;
      }
      iVar2 = FUN_01bed842(uVar9,*(undefined4 *)(iVar5 + 4),uVar3);
      if (iVar2 == 0) {
        iVar2 = uVar11 - uVar6;
      }
      iVar7 = iVar7 + -0xc;
      uVar10 = uVar10 + 1;
      iVar5 = iVar5 + 0xc;
    } while ((char)((0 < iVar2) - (iVar2 < 0)) == '\x01');
    if (0 < iVar2 == iVar2 < 0) {
      *param_1 = 0x80000000;
      param_1[1] = iVar8;
      param_1[2] = local_28;
      param_1[4] = param_2;
      param_1[3] = uVar10;
      FUN_0134bd64(*param_3,uVar9);
      return;
    }
LAB_01a41fd8:
    if (local_28 == 0) {
      param_1[4] = iVar8;
      param_1[5] = 0;
      param_1[6] = uVar10;
      uVar9 = param_3[1];
      uVar4 = param_3[2];
      *param_1 = *param_3;
      param_1[1] = uVar9;
      param_1[2] = uVar4;
      param_1[3] = param_2;
      return;
    }
    local_28 = local_28 + -1;
    iVar8 = *(int *)(iVar8 + uVar10 * 4 + 0x198);
  } while( true );
}

