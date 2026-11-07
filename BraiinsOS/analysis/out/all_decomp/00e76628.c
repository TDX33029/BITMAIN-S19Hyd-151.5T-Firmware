// FUN_00e76628 @ 00e76628 size=160 calls_out=0 calls_in=0
// strings: 

void FUN_00e76628(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  piVar2 = param_2 + 2;
  puVar3 = (uint *)(param_1 + 8);
  if (*param_2 == 0) {
    iVar4 = *piVar2;
    iVar6 = param_2[3];
    *puVar3 = 0;
    *param_1 = 2;
    *(int *)(param_1 + 0x10) = iVar4;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(int *)(param_1 + 0x14) = iVar6;
    return;
  }
  if (*param_2 == 1) {
    iVar4 = *piVar2;
    uVar5 = param_2[3];
    *param_1 = 2;
    *puVar3 = uVar5 >> 0x1f;
    *(int *)(param_1 + 0x10) = iVar4;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(uint *)(param_1 + 0x14) = uVar5;
    return;
  }
  uVar7 = *(undefined8 *)piVar2;
  *puVar3 = 2;
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (((uint)((ulonglong)uVar7 >> 0x20) & 0x7fffffff) < 0x7ff00000) {
    uVar1 = 2;
  }
  *param_1 = uVar1;
  return;
}

