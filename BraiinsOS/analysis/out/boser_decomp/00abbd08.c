// FUN_00abbd08 @ 00abbd08 size=160 calls_out=1 calls_in=1
// strings: 

void FUN_00abbd08(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined1 local_38 [24];
  
  iVar2 = *param_2;
  puVar5 = (uint *)(param_1 + 8);
  if (iVar2 == 0) {
    uVar6 = *(undefined8 *)(param_2 + 2);
    uVar1 = 0;
    if (((uint)((ulonglong)uVar6 >> 0x20) & 0x7fffffff) < 0x7ff00000) {
      local_38[0] = 0;
      FUN_00db4764(local_38);
      uVar1 = 2;
    }
    *param_1 = uVar1;
    *puVar5 = 2;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x10) = uVar6;
  }
  else {
    iVar3 = param_2[2];
    uVar4 = param_2[3];
    *param_1 = 2;
    if (iVar2 != 1) {
      *puVar5 = uVar4 >> 0x1f;
    }
    *(int *)(param_1 + 0x10) = iVar3;
    if (iVar2 == 1) {
      *puVar5 = 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(uint *)(param_1 + 0x14) = uVar4;
  }
  return;
}

