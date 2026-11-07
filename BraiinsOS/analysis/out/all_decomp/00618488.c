// FUN_00618488 @ 00618488 size=216 calls_out=0 calls_in=1
// strings: 

void FUN_00618488(undefined1 *param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint *unaff_r4;
  undefined4 in_r12;
  
  uVar1 = 0x1a;
  switch(param_3) {
  case 1:
    unaff_r4 = (uint *)*param_2;
    if (param_2[1] == 0) {
LAB_0061852c:
      in_r12 = 0;
      uVar1 = 0x13;
switchD_006184a8_caseD_3:
      param_1[1] = param_3;
      *param_1 = uVar1;
      *(uint **)(param_1 + 4) = unaff_r4;
      *(uint **)(param_1 + 8) = unaff_r4;
      *(undefined4 *)(param_1 + 0xc) = in_r12;
      return;
    }
    uVar2 = (uint)(byte)*unaff_r4;
    *param_2 = (byte *)((int)unaff_r4 + 1);
    param_2[1] = param_2[1] + -1;
    break;
  case 2:
    unaff_r4 = (uint *)*param_2;
    if ((uint)param_2[1] < 2) goto LAB_0061852c;
    uVar2 = (uint)(ushort)*unaff_r4;
    *param_2 = (ushort *)((int)unaff_r4 + 2);
    param_2[1] = param_2[1] - 2;
    break;
  default:
    goto switchD_006184a8_caseD_3;
  case 4:
    unaff_r4 = (uint *)*param_2;
    if ((uint)param_2[1] < 4) goto LAB_0061852c;
    uVar2 = *unaff_r4;
    *param_2 = unaff_r4 + 1;
    param_2[1] = param_2[1] - 4;
    break;
  case 8:
    unaff_r4 = (uint *)*param_2;
    if ((uint)param_2[1] < 8) goto LAB_0061852c;
    uVar2 = *unaff_r4;
    uVar3 = unaff_r4[1];
    *param_2 = unaff_r4 + 2;
    param_2[1] = param_2[1] - 8;
    uVar1 = 0x38;
    if (uVar3 != 0) goto LAB_00618560;
  }
  uVar1 = 0x4f;
  *(uint *)(param_1 + 4) = uVar2;
LAB_00618560:
  *param_1 = uVar1;
  return;
}

