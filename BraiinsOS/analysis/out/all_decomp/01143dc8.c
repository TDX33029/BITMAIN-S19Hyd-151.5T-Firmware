// FUN_01143dc8 @ 01143dc8 size=328 calls_out=3 calls_in=4
// strings: 

void FUN_01143dc8(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  uint in_stack_00000008;
  undefined4 local_2c [3];
  
  uVar2 = *(uint *)(param_2 + 0x14);
  if (uVar2 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar3 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar2);
      if (9 < uVar3 - 0x30) {
        if ((uVar3 | 0x20) == 0x65) {
          FUN_00f4d3b8(param_1,param_2,param_3);
          return;
        }
        break;
      }
      uVar2 = uVar2 + 1;
      *(uint *)(param_2 + 0x14) = uVar2;
    } while (*(uint *)(param_2 + 0x10) != uVar2);
  }
  dVar4 = (double)FUN_01845f30();
  uVar2 = in_stack_00000008;
  if ((int)in_stack_00000008 < 0) {
    uVar2 = -in_stack_00000008;
  }
  while (0x134 < uVar2) {
    if (dVar4 == 0.0) goto LAB_01143ef0;
    if (in_stack_00000008 < 0x80000000) goto LAB_01143ec4;
    dVar4 = dVar4 / 1e+308;
    in_stack_00000008 = in_stack_00000008 + 0x134;
    uVar2 = in_stack_00000008;
    if ((int)in_stack_00000008 < 0) {
      uVar2 = -in_stack_00000008;
    }
  }
  if ((int)in_stack_00000008 < 0) {
    dVar4 = dVar4 / (double)(&DAT_0040ddb8)[uVar2];
  }
  else {
    dVar4 = dVar4 * (double)(&DAT_0040ddb8)[uVar2];
    if (SUB84(dVar4,0) == 0 && ((uint)((ulonglong)dVar4 >> 0x20) & 0x7fffffff) == 0x7ff00000) {
LAB_01143ec4:
      local_2c[0] = 0xe;
      uVar1 = FUN_00f4c908(param_2,local_2c);
      param_1[1] = uVar1;
      *param_1 = 1;
      return;
    }
  }
LAB_01143ef0:
  dVar5 = -dVar4;
  if (param_3 != 0) {
    dVar5 = dVar4;
  }
  *(double *)(param_1 + 2) = dVar5;
  *param_1 = 0;
  return;
}

