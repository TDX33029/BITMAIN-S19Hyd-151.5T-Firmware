// FUN_014d9664 @ 014d9664 size=556 calls_out=3 calls_in=2
// strings: 

void FUN_014d9664(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 ulonglong param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_30 [3];
  
  iVar8 = *(int *)(param_2 + 0x14);
  uVar3 = iVar8 + 1;
  *(uint *)(param_2 + 0x14) = uVar3;
  if (*(uint *)(param_2 + 0x10) <= uVar3) {
    local_30[0] = 5;
    uVar1 = FUN_012c6b30(param_2,local_30);
    *param_1 = 1;
    param_1[1] = uVar1;
    return;
  }
  iVar6 = 0;
  iVar7 = 2;
  do {
    uVar10 = (uint)(param_5 >> 0x20);
    uVar9 = (uint)*(byte *)((uVar3 + *(int *)(param_2 + 0xc)) - iVar6);
    uVar4 = uVar9 - 0x30;
    uVar5 = uVar4 & 0xff;
    if (9 < uVar5) {
      if (iVar6 == 0) {
        local_30[0] = 0xd;
        uVar1 = FUN_012c6b30(param_2,local_30);
        *param_1 = 1;
        param_1[1] = uVar1;
        return;
      }
      if ((uVar9 | 0x20) == 0x65) {
        FUN_012c734c(param_1,param_2,param_3);
        return;
      }
      break;
    }
    if ((0x19999998 < uVar10 && (uint)((uint)param_5 < 0x99999999) <= 0x19999999 - uVar10) &&
       ((param_5 != 0x1999999999999999 || (5 < uVar5)))) {
      uVar3 = *(uint *)(param_2 + 0x14);
      if (*(uint *)(param_2 + 0x10) <= uVar3) goto LAB_012c7508;
      goto LAB_012c74c4;
    }
    iVar2 = iVar8 + iVar7;
    iVar6 = iVar6 + -1;
    iVar7 = iVar7 + 1;
    param_5 = (param_5 & 0xffffffff) * 10 + (CONCAT44(uVar10 * 10,uVar4) & 0xffffffff000000ff);
    *(int *)(param_2 + 0x14) = iVar2;
  } while (uVar3 - *(uint *)(param_2 + 0x10) != iVar6);
  FUN_01674238(param_1,param_2,param_3);
  return;
  while( true ) {
    uVar3 = uVar3 + 1;
    *(uint *)(param_2 + 0x14) = uVar3;
    if (*(uint *)(param_2 + 0x10) == uVar3) break;
LAB_012c74c4:
    uVar4 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar3);
    if (9 < uVar4 - 0x30) {
      if ((uVar4 | 0x20) == 0x65) {
        FUN_012c734c(param_1,param_2,param_3);
        return;
      }
      break;
    }
  }
LAB_012c7508:
  FUN_01674238();
  return;
}

