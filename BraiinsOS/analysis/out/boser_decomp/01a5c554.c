// FUN_01a5c554 @ 01a5c554 size=180 calls_out=4 calls_in=3
// strings: 

void FUN_01a5c554(undefined4 param_1,uint param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 *puStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_78;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  if ((param_2 & 1) == 0) {
    uVar2 = thunk_FUN_01bee35a(param_1,0x2c0);
    puVar1 = (uint *)((int)uVar2 + (int)((ulonglong)uVar2 >> 0x20));
    if ((char)puVar1[4] == '\0') {
      FUN_019ae6ac(&local_30);
      *puVar1 = local_30;
      puVar1[1] = uStack_2c;
      puVar1[2] = uStack_28;
      puVar1[3] = uStack_24;
      *(undefined1 *)(puVar1 + 4) = 1;
    }
    local_a8 = *puVar1;
    uStack_a4 = puVar1[1];
    uStack_a0 = puVar1[2];
    uStack_9c = puVar1[3];
    *puVar1 = local_a8 + 1;
    puVar1[1] = uStack_a4 + (0xfffffffe < local_a8);
    uStack_98 = 0;
    uStack_94 = 8;
    local_90 = 0;
    puStack_8c = &DAT_0056d238;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    local_78 = 0x80000000;
  }
  else {
    FUN_01a4c5c8(&local_a8,param_3);
  }
  FUN_01bed4e2(param_1,&local_a8,0x78);
  return;
}

