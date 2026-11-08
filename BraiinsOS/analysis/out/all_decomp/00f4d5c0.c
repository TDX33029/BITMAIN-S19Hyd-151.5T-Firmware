// FUN_00f4d5c0 @ 00f4d5c0 size=384 calls_out=4 calls_in=1
// strings: 

void FUN_00f4d5c0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  undefined4 local_2c [3];
  
  uVar5 = *(uint *)(param_2 + 0x14);
  uVar7 = 0;
  if (uVar5 < *(uint *)(param_2 + 0x10)) {
    uVar2 = *(uint *)(param_2 + 0x10) - uVar5;
    iVar3 = *(int *)(param_2 + 0xc) + uVar5;
    do {
      uVar4 = (uint)*(byte *)(iVar3 + uVar7);
      if (9 < uVar4 - 0x30) {
        if (uVar4 == 0x2e) {
          FUN_00f4d108(param_1,param_2,param_3,iVar3,param_5,param_6,uVar7);
          return;
        }
        if (uVar4 == 0x45 || uVar4 == 0x65) {
          FUN_00f4d3b8(param_1,param_2,param_3,iVar3,param_5,param_6,uVar7);
          return;
        }
        goto LAB_00f4d658;
      }
      iVar6 = uVar5 + 1 + uVar7;
      uVar7 = uVar7 + 1;
      *(int *)(param_2 + 0x14) = iVar6;
    } while (uVar2 != uVar7);
    uVar7 = uVar2;
  }
LAB_00f4d658:
  dVar8 = (double)FUN_01845f30();
  uVar5 = uVar7;
  if ((int)uVar7 < 0) {
    uVar5 = -uVar7;
  }
  while (0x134 < uVar5) {
    if (dVar8 == 0.0) goto LAB_00f4d704;
    if (uVar7 < 0x80000000) goto LAB_00f4d6d8;
    dVar8 = dVar8 / 1e+308;
    uVar7 = uVar7 + 0x134;
    uVar5 = uVar7;
    if ((int)uVar7 < 0) {
      uVar5 = -uVar7;
    }
  }
  if ((int)uVar7 < 0) {
    dVar8 = dVar8 / (double)(&DAT_0040ddb8)[uVar5];
  }
  else {
    dVar8 = dVar8 * (double)(&DAT_0040ddb8)[uVar5];
    if (SUB84(dVar8,0) == 0 && ((uint)((ulonglong)dVar8 >> 0x20) & 0x7fffffff) == 0x7ff00000) {
LAB_00f4d6d8:
      local_2c[0] = 0xe;
      uVar1 = FUN_00f4c908(param_2,local_2c);
      param_1[1] = uVar1;
      *param_1 = 1;
      return;
    }
  }
LAB_00f4d704:
  dVar9 = -dVar8;
  if (param_3 != 0) {
    dVar9 = dVar8;
  }
  *(double *)(param_1 + 2) = dVar9;
  *param_1 = 0;
  return;
}

