// FUN_00f2bff0 @ 00f2bff0 size=660 calls_out=4 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x00f2c02c) */

void FUN_00f2bff0(undefined4 *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  uint in_stack_00000008;
  undefined4 local_30 [3];
  
  while( true ) {
    if (*(char *)(param_2 + 0x2c) == '\x01') {
      uVar4 = (uint)*(byte *)(param_2 + 0x2d);
    }
    else {
      pbVar5 = *(byte **)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x1c) == 0) {
        *(byte **)(param_2 + 0x18) = pbVar5;
        if (*(int *)(param_2 + 0x1c) == 0) {
          *(byte **)(param_2 + 0x18) = pbVar5;
          goto LAB_00f2c19c;
        }
        bVar2 = *pbVar5;
        *(byte **)(param_2 + 0x18) = pbVar5 + 1;
        iVar6 = *(int *)(param_2 + 0x24) + 1;
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
        if (bVar2 == 10) {
          *(int *)(param_2 + 0x28) = iVar6 + *(int *)(param_2 + 0x28);
          *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
          iVar6 = 0;
        }
        *(byte *)(param_2 + 0x2d) = bVar2;
        *(undefined1 *)(param_2 + 0x2c) = 1;
        *(int *)(param_2 + 0x24) = iVar6;
        goto joined_r0x00f2c170;
      }
      bVar2 = *pbVar5;
      uVar4 = (uint)bVar2;
      *(byte **)(param_2 + 0x18) = pbVar5 + 1;
      iVar6 = *(int *)(param_2 + 0x24) + 1;
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
      if (uVar4 == 10) {
        *(int *)(param_2 + 0x28) = iVar6 + *(int *)(param_2 + 0x28);
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        iVar6 = 0;
      }
      *(byte *)(param_2 + 0x2d) = bVar2;
      *(undefined1 *)(param_2 + 0x2c) = 1;
      *(int *)(param_2 + 0x24) = iVar6;
    }
    if (9 < uVar4 - 0x30) break;
    uVar1 = *(undefined1 *)(param_2 + 0x2d);
    *(undefined1 *)(param_2 + 0x2c) = 0;
    if (*(int *)(param_2 + 0xc) != -0x80000000) {
      iVar6 = *(int *)(param_2 + 0x14);
      if (iVar6 == *(int *)(param_2 + 0xc)) {
        FUN_006029c0(param_2 + 0xc);
      }
      *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar6) = uVar1;
      *(int *)(param_2 + 0x14) = iVar6 + 1;
    }
  }
  bVar2 = *(byte *)(param_2 + 0x2d);
joined_r0x00f2c170:
  if ((bVar2 | 0x20) == 0x65) {
    FUN_00f2b8d8(param_1,param_2,param_3);
    return;
  }
LAB_00f2c19c:
  dVar7 = (double)FUN_01845f30();
  uVar4 = in_stack_00000008;
  if ((int)in_stack_00000008 < 0) {
    uVar4 = -in_stack_00000008;
  }
  while (0x134 < uVar4) {
    if (dVar7 == 0.0) goto LAB_00f2c250;
    if (in_stack_00000008 < 0x80000000) goto LAB_00f2c220;
    dVar7 = dVar7 / 1e+308;
    in_stack_00000008 = in_stack_00000008 + 0x134;
    uVar4 = in_stack_00000008;
    if ((int)in_stack_00000008 < 0) {
      uVar4 = -in_stack_00000008;
    }
  }
  if ((int)in_stack_00000008 < 0) {
    dVar7 = dVar7 / (double)(&DAT_0040ddb8)[uVar4];
  }
  else {
    dVar7 = dVar7 * (double)(&DAT_0040ddb8)[uVar4];
    if (SUB84(dVar7,0) == 0 && ((uint)((ulonglong)dVar7 >> 0x20) & 0x7fffffff) == 0x7ff00000) {
LAB_00f2c220:
      local_30[0] = 0xe;
      uVar3 = FUN_0157c50c(local_30,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24))
      ;
      param_1[1] = uVar3;
      *param_1 = 1;
      return;
    }
  }
LAB_00f2c250:
  dVar8 = -dVar7;
  if (param_3 != 0) {
    dVar8 = dVar7;
  }
  *(double *)(param_1 + 2) = dVar8;
  *param_1 = 0;
  return;
}

