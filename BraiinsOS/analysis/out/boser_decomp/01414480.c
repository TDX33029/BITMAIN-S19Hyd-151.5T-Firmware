// FUN_01414480 @ 01414480 size=120 calls_out=2 calls_in=6
// strings: 

void FUN_01414480(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  uVar6 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar5 = (uint *)((int)uVar6 + (int)((ulonglong)uVar6 >> 0x20));
  if ((char)puVar5[4] == '\0') {
    FUN_019ae6ac(&local_28);
    *puVar5 = local_28;
    puVar5[1] = uStack_24;
    puVar5[2] = uStack_20;
    puVar5[3] = uStack_1c;
    *(undefined1 *)(puVar5 + 4) = 1;
  }
  uVar1 = *puVar5;
  uVar3 = puVar5[1];
  uVar4 = puVar5[2];
  uVar2 = puVar5[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar2;
  *param_1 = 2;
  param_1[1] = 0;
  *puVar5 = uVar1 + 1;
  puVar5[1] = uVar3 + (0xfffffffe < uVar1);
  return;
}

