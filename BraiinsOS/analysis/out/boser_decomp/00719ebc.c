// FUN_00719ebc @ 00719ebc size=304 calls_out=0 calls_in=3
// strings: 

void FUN_00719ebc(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined2 local_24;
  undefined1 local_22;
  undefined1 local_20 [16];
  
  puVar4 = (uint *)*param_2;
  uVar5 = param_2[1];
  if (uVar5 < 4) {
    *(undefined2 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar1 = 0x13;
    param_1[3] = 0;
    *(uint **)(param_1 + 4) = puVar4;
    *(uint **)(param_1 + 8) = puVar4;
  }
  else {
    puVar2 = puVar4 + 1;
    uVar3 = *puVar4;
    *param_2 = (int)puVar2;
    param_2[1] = uVar5 - 4;
    if (uVar3 < 0xfffffff0) {
      uVar1 = 4;
    }
    else {
      if (uVar3 != 0xffffffff) {
        uVar1 = 0x10;
        goto LAB_00719f44;
      }
      if (uVar5 - 4 < 8) {
        puVar4 = (uint *)((uint)local_20 | 7);
        *(char *)((int)puVar4 + 3) = (char)((uint)puVar2 >> 0x18);
        *(short *)((int)puVar4 + 1) = (short)((uint)puVar2 >> 8);
        uVar1 = 0x13;
        local_24 = 0;
        param_2 = (int *)puVar4[1];
        uVar3 = *puVar4;
        local_22 = 0;
LAB_00719fcc:
        *param_1 = uVar1;
        *(undefined2 *)(param_1 + 1) = local_24;
        param_1[3] = local_22;
        *(uint **)(param_1 + 4) = puVar2;
        *(uint *)(param_1 + 8) = uVar3;
        *(int **)(param_1 + 0xc) = param_2;
        return;
      }
      uVar3 = *puVar2;
      puVar2 = (uint *)puVar4[2];
      *param_2 = (int)(puVar4 + 3);
      param_2[1] = uVar5 - 0xc;
      if (puVar2 != (uint *)0x0) {
        uVar1 = 0x38;
        goto LAB_00719fcc;
      }
      uVar1 = 8;
    }
    param_1[8] = uVar1;
    uVar1 = 0x4f;
    *(uint *)(param_1 + 4) = uVar3;
  }
LAB_00719f44:
  *param_1 = uVar1;
  return;
}

