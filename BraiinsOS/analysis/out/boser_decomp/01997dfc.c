// FUN_01997dfc @ 01997dfc size=236 calls_out=0 calls_in=1
// strings: 

void FUN_01997dfc(undefined1 *param_1,undefined4 *param_2,undefined1 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint *unaff_r4;
  undefined4 in_r12;
  
  uVar2 = 0x1a;
  switch(param_3) {
  case 1:
    unaff_r4 = (uint *)*param_2;
    if (param_2[1] == 0) {
LAB_01997ea0:
      in_r12 = 0;
      uVar2 = 0x13;
switchD_01997e1c_caseD_3:
      param_1[1] = param_3;
      *param_1 = uVar2;
      *(uint **)(param_1 + 4) = unaff_r4;
      *(uint **)(param_1 + 8) = unaff_r4;
      *(undefined4 *)(param_1 + 0xc) = in_r12;
      return;
    }
    uVar4 = (uint)(byte)*unaff_r4;
    *param_2 = (byte *)((int)unaff_r4 + 1);
    param_2[1] = param_2[1] + -1;
    break;
  case 2:
    unaff_r4 = (uint *)*param_2;
    if ((uint)param_2[1] < 2) goto LAB_01997ea0;
    uVar4 = (uint)(ushort)*unaff_r4;
    *param_2 = (ushort *)((int)unaff_r4 + 2);
    param_2[1] = param_2[1] - 2;
    break;
  default:
    goto switchD_01997e1c_caseD_3;
  case 4:
    unaff_r4 = (uint *)*param_2;
    if ((uint)param_2[1] < 4) goto LAB_01997ea0;
    uVar4 = *unaff_r4;
    *param_2 = unaff_r4 + 1;
    param_2[1] = param_2[1] - 4;
    break;
  case 8:
    unaff_r4 = (uint *)*param_2;
    if ((uint)param_2[1] < 8) goto LAB_01997ea0;
    bVar1 = *(byte *)((int)unaff_r4 + 7);
    uVar3 = *(uint *)((int)unaff_r4 + 3);
    uVar4 = *unaff_r4;
    *param_2 = unaff_r4 + 2;
    param_2[1] = param_2[1] - 8;
    uVar2 = 0x38;
    if (bVar1 != 0 || uVar3 >> 8 != 0) goto LAB_01997ee8;
    uVar4 = (uint)(uint3)uVar4 | uVar3 << 0x18;
  }
  uVar2 = 0x52;
  *(uint *)(param_1 + 4) = uVar4;
LAB_01997ee8:
  *param_1 = uVar2;
  return;
}

