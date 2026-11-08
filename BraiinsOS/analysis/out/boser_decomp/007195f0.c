// FUN_007195f0 @ 007195f0 size=308 calls_out=0 calls_in=5
// strings: 

void FUN_007195f0(undefined1 *param_1,uint *param_2,byte param_3)

{
  undefined1 uVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  
  if (7 < param_3 - 1) {
switchD_00719610_caseD_3:
    param_1[1] = param_3;
    uVar1 = 0x19;
    goto LAB_0071973c;
  }
  switch(param_3) {
  case 1:
    puVar4 = (ushort *)*param_2;
    if (param_2[1] != 0) {
      puVar2 = (ushort *)((int)puVar4 + 1);
      uVar9 = (uint)(byte)*puVar4;
      uVar8 = param_2[1] - 1;
LAB_00719704:
      *param_2 = (uint)puVar2;
      param_2[1] = uVar8;
      *(uint *)(param_1 + 8) = uVar9;
      *param_1 = 0x4f;
      *(undefined4 *)(param_1 + 0xc) = 0;
      return;
    }
    break;
  case 2:
    puVar4 = (ushort *)*param_2;
    if (1 < param_2[1]) {
      uVar8 = param_2[1] - 2;
      puVar2 = puVar4 + 1;
      uVar9 = (uint)*puVar4;
      goto LAB_00719704;
    }
    break;
  default:
    goto switchD_00719610_caseD_3;
  case 4:
    puVar3 = (undefined4 *)*param_2;
    uVar6 = 0;
    if (3 < param_2[1]) {
      puVar5 = puVar3 + 1;
      uVar7 = *puVar3;
      uVar9 = param_2[1] - 4;
LAB_0071972c:
      *param_2 = (uint)puVar5;
      param_2[1] = uVar9;
      uVar1 = 0x4f;
      *(undefined4 *)(param_1 + 8) = uVar7;
      *(undefined4 *)(param_1 + 0xc) = uVar6;
      goto LAB_0071973c;
    }
    *(undefined4 **)(param_1 + 8) = puVar3;
    *(undefined4 *)(param_1 + 0xc) = 0;
    param_1[7] = (char)((uint)puVar3 >> 0x18);
    *(short *)(param_1 + 5) = (short)((uint)puVar3 >> 8);
    *(int *)(param_1 + 1) = (int)puVar3 << 0x18;
    goto LAB_007196d8;
  case 8:
    puVar5 = (undefined4 *)*param_2;
    if (7 < param_2[1]) {
      uVar7 = *puVar5;
      uVar9 = param_2[1] - 8;
      uVar6 = puVar5[1];
      puVar5 = puVar5 + 2;
      goto LAB_0071972c;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    param_1[0xb] = (char)((uint)puVar5 >> 0x18);
    *(short *)(param_1 + 9) = (short)((uint)puVar5 >> 8);
    *(uint *)(param_1 + 5) = (uint)puVar5 >> 8 | (int)puVar5 << 0x18;
    *(int *)(param_1 + 1) = (int)puVar5 << 0x18;
LAB_007196d8:
    uVar1 = 0x13;
    goto LAB_0071973c;
  }
  *(ushort **)(param_1 + 4) = puVar4;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar1 = 0x13;
  *(ushort **)(param_1 + 8) = puVar4;
LAB_0071973c:
  *param_1 = uVar1;
  return;
}

