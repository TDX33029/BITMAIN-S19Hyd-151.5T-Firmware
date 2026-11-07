// FUN_0160dadc @ 0160dadc size=148 calls_out=2 calls_in=1
// strings: 

void FUN_0160dadc(undefined4 *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  uVar6 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar2 = (uint *)((int)uVar6 + (int)((ulonglong)uVar6 >> 0x20));
  if ((char)puVar2[4] == '\0') {
    FUN_019ae6ac(&local_28);
    *puVar2 = local_28;
    puVar2[1] = uStack_24;
    puVar2[2] = uStack_20;
    puVar2[3] = uStack_1c;
    *(undefined1 *)(puVar2 + 4) = 1;
  }
  uVar3 = *puVar2;
  param_1[8] = 0xffffffff;
  param_1[9] = 0xffffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  uVar1 = puVar2[1];
  uVar5 = puVar2[2];
  uVar4 = puVar2[3];
  *puVar2 = uVar3 + 1;
  puVar2[1] = uVar1 + (0xfffffffe < uVar3);
  *param_1 = &DAT_0056d238;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = uVar3;
  param_1[5] = uVar1;
  param_1[6] = uVar5;
  param_1[7] = uVar4;
  return;
}

