// FUN_01997b8c @ 01997b8c size=296 calls_out=0 calls_in=2
// strings: 

void FUN_01997b8c(undefined1 *param_1,undefined4 *param_2,byte param_3)

{
  undefined1 uVar1;
  byte bVar2;
  uint *puVar3;
  undefined2 *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  
  if (7 < param_3 - 1) {
switchD_01997bac_caseD_3:
    param_1[1] = param_3;
    *param_1 = 0x19;
    return;
  }
  switch(param_3) {
  case 1:
    puVar3 = (uint *)*param_2;
    if (param_2[1] != 0) {
      puVar5 = (uint *)((int)puVar3 + 1);
      uVar6 = (uint)(byte)*puVar3;
      iVar7 = param_2[1] + -1;
LAB_01997c7c:
      *param_2 = puVar5;
      param_2[1] = iVar7;
      *(uint *)(param_1 + 8) = uVar6;
      *param_1 = 0x52;
      *(undefined4 *)(param_1 + 0xc) = 0;
      return;
    }
    break;
  case 2:
    puVar3 = (uint *)*param_2;
    if (1 < (uint)param_2[1]) {
      iVar7 = param_2[1] - 2;
      puVar5 = (uint *)((int)puVar3 + 2);
      uVar6 = (uint)(ushort)*puVar3;
      goto LAB_01997c7c;
    }
    break;
  default:
    goto switchD_01997bac_caseD_3;
  case 4:
    puVar3 = (uint *)*param_2;
    if (3 < (uint)param_2[1]) {
      iVar7 = param_2[1] - 4;
      puVar5 = puVar3 + 1;
      uVar6 = *puVar3;
      goto LAB_01997c7c;
    }
    break;
  case 8:
    puVar4 = (undefined2 *)*param_2;
    if (7 < (uint)param_2[1]) {
      uVar1 = *(undefined1 *)(puVar4 + 1);
      uVar6 = *(uint *)((int)puVar4 + 3);
      bVar2 = *(byte *)((int)puVar4 + 7);
      *param_2 = puVar4 + 4;
      param_2[1] = param_2[1] - 8;
      *(uint *)(param_1 + 8) = (uint)CONCAT12(uVar1,*puVar4) | uVar6 << 0x18;
      *(uint *)(param_1 + 0xc) = uVar6 >> 8 | (uint)bVar2 << 0x18;
      *param_1 = 0x52;
      return;
    }
    param_1[8] = (char)puVar4;
    *(undefined4 *)(param_1 + 0xc) = 0;
    param_1[0xb] = (char)((uint)puVar4 >> 0x18);
    *(undefined2 **)(param_1 + 4) = puVar4;
    *(short *)(param_1 + 9) = (short)((uint)puVar4 >> 8);
    goto LAB_01997c54;
  }
  *(uint **)(param_1 + 4) = puVar3;
  *(uint **)(param_1 + 8) = puVar3;
  *(undefined4 *)(param_1 + 0xc) = 0;
LAB_01997c54:
  *param_1 = 0x13;
  return;
}

