// FUN_006e0134 @ 006e0134 size=148 calls_out=2 calls_in=1
// strings: 

void FUN_006e0134(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar6 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar2 = (uint *)((int)uVar6 + (int)((ulonglong)uVar6 >> 0x20));
  if ((char)puVar2[4] == '\0') {
    FUN_019ae6ac(&local_30);
    *puVar2 = local_30;
    puVar2[1] = uStack_2c;
    puVar2[2] = uStack_28;
    puVar2[3] = uStack_24;
    *(undefined1 *)(puVar2 + 4) = 1;
  }
  uVar4 = *puVar2;
  uVar1 = puVar2[1];
  uVar5 = puVar2[2];
  param_1[6] = 0;
  param_1[5] = 8;
  param_1[4] = 0;
  uVar3 = puVar2[3];
  *puVar2 = uVar4 + 1;
  puVar2[1] = uVar1 + (0xfffffffe < uVar4);
  param_1[7] = (uint)&DAT_0056d238;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[3] = uVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar5;
  *param_1 = uVar4;
  return;
}

