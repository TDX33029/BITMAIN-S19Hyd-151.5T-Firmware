// FUN_00719d5c @ 00719d5c size=320 calls_out=1 calls_in=1
// strings: 

void FUN_00719d5c(undefined1 *param_1,undefined4 *param_2,byte param_3)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  byte local_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  uint *puStack_1d;
  uint *puStack_19;
  
  if (7 < param_3 - 1) {
switchD_00719d88_caseD_3:
    uVar1 = 0x1a;
    local_20 = param_3;
    goto LAB_00719e4c;
  }
  puVar2 = (undefined2 *)((uint)&local_20 | 4);
  switch(param_3) {
  case 1:
    puStack_1d = (uint *)*param_2;
    if (param_2[1] != 0) {
      iVar5 = param_2[1] + -1;
      puVar4 = (uint *)((int)puStack_1d + 1);
      uVar3 = (uint)(byte)*puStack_1d;
LAB_00719e80:
      *param_2 = puVar4;
      param_2[1] = iVar5;
LAB_00719e84:
      uVar1 = 0x4f;
      *(uint *)(param_1 + 4) = uVar3;
LAB_00719e8c:
      *param_1 = uVar1;
      return;
    }
    goto LAB_00719e04;
  case 2:
    puStack_1d = (uint *)*param_2;
    if (1 < (uint)param_2[1]) {
      iVar5 = param_2[1] - 2;
      puVar4 = (uint *)((int)puStack_1d + 2);
      uVar3 = (uint)(ushort)*puStack_1d;
      goto LAB_00719e80;
    }
LAB_00719e04:
    puStack_19 = puStack_1d;
    break;
  default:
    goto switchD_00719d88_caseD_3;
  case 4:
    puStack_19 = (uint *)*param_2;
    if (3 < (uint)param_2[1]) {
      iVar5 = param_2[1] - 4;
      puVar4 = puStack_19 + 1;
      uVar3 = *puStack_19;
      goto LAB_00719e80;
    }
    puStack_1d = (uint *)CONCAT31(puStack_1d._1_3_,(char)puStack_19);
    *(char *)(puVar2 + 1) = (char)((uint)puStack_19 >> 0x18);
    *puVar2 = (short)((uint)puStack_19 >> 8);
    uStack_1e = 0;
    local_20 = 0;
    uStack_1f = 0;
    break;
  case 8:
    puStack_1d = (uint *)*param_2;
    if (7 < (uint)param_2[1]) {
      uVar3 = *puStack_1d;
      uVar6 = puStack_1d[1];
      *param_2 = puStack_1d + 2;
      param_2[1] = param_2[1] - 8;
      uVar1 = 0x38;
      if (uVar6 != 0) goto LAB_00719e8c;
      goto LAB_00719e84;
    }
    *(char *)(puVar2 + 3) = (char)((uint)puStack_1d >> 0x18);
    puVar2[2] = (short)((uint)puStack_1d >> 8);
    puStack_19._0_1_ = SUB41(puStack_1d,0);
    local_20 = 0;
    uStack_1f = 0;
    uStack_1e = 0;
  }
  uVar1 = 0x13;
LAB_00719e4c:
  *param_1 = uVar1;
  FUN_01bed4e2(param_1 + 1,&local_20,0xb);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

