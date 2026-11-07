// FUN_00617928 @ 00617928 size=280 calls_out=0 calls_in=3
// strings: 

void FUN_00617928(undefined1 *param_1,int *param_2,byte param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (7 < param_3 - 1) {
switchD_00617948_caseD_3:
    param_1[1] = param_3;
    *param_1 = 0x19;
    return;
  }
  switch(param_3) {
  case 1:
    puVar1 = (uint *)*param_2;
    if (param_2[1] == 0) {
LAB_006179b0:
      *(uint **)(param_1 + 4) = puVar1;
      *(uint **)(param_1 + 8) = puVar1;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *param_1 = 0x13;
      return;
    }
    puVar2 = (uint *)((int)puVar1 + 1);
    uVar3 = (uint)(byte)*puVar1;
    iVar5 = param_2[1] + -1;
    break;
  case 2:
    puVar1 = (uint *)*param_2;
    if ((uint)param_2[1] < 2) goto LAB_006179b0;
    iVar5 = param_2[1] - 2;
    puVar2 = (uint *)((int)puVar1 + 2);
    uVar3 = (uint)(ushort)*puVar1;
    break;
  default:
    goto switchD_00617948_caseD_3;
  case 4:
    puVar1 = (uint *)*param_2;
    if ((uint)param_2[1] < 4) goto LAB_006179b0;
    iVar5 = param_2[1] - 4;
    puVar2 = puVar1 + 1;
    uVar3 = *puVar1;
    break;
  case 8:
    puVar1 = (uint *)*param_2;
    if ((uint)param_2[1] < 8) {
      param_1[8] = (char)puVar1;
      *(undefined4 *)(param_1 + 0xc) = 0;
      param_1[0xb] = (char)((uint)puVar1 >> 0x18);
      *(uint **)(param_1 + 4) = puVar1;
      *(short *)(param_1 + 9) = (short)((uint)puVar1 >> 8);
      *param_1 = 0x13;
      return;
    }
    uVar4 = *puVar1;
    uVar3 = puVar1[1];
    *param_2 = (int)(puVar1 + 2);
    param_2[1] = param_2[1] - 8;
    *(uint *)(param_1 + 8) = uVar4;
    *(uint *)(param_1 + 0xc) = uVar3;
    *param_1 = 0x4f;
    return;
  }
  *param_2 = (int)puVar2;
  param_2[1] = iVar5;
  *(uint *)(param_1 + 8) = uVar3;
  *param_1 = 0x4f;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

