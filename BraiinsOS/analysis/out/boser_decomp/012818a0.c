// FUN_012818a0 @ 012818a0 size=92 calls_out=2 calls_in=4
// strings: 

void FUN_012818a0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint local_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  uVar6 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar5 = (uint *)((int)uVar6 + (int)((ulonglong)uVar6 >> 0x20));
  if ((char)puVar5[4] == '\0') {
    FUN_019ae6ac(&local_20);
    *puVar5 = local_20;
    puVar5[1] = uStack_1c;
    puVar5[2] = uStack_18;
    puVar5[3] = uStack_14;
    *(undefined1 *)(puVar5 + 4) = 1;
  }
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *puVar5 = uVar1 + 1;
  puVar5[1] = uVar2 + (0xfffffffe < uVar1);
  return;
}

