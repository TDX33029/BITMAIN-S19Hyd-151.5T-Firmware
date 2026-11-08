// FUN_01097ad8 @ 01097ad8 size=312 calls_out=4 calls_in=3
// strings: 

void FUN_01097ad8(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x28);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x28);
  }
  uVar7 = thunk_FUN_016de0ee(puVar1,0x2c0);
  puVar4 = (uint *)((int)uVar7 + (int)((ulonglong)uVar7 >> 0x20));
  if ((char)puVar4[4] == '\0') {
    FUN_015f62e4(&local_28);
    *puVar4 = local_28;
    puVar4[1] = uStack_24;
    puVar4[2] = uStack_20;
    puVar4[3] = uStack_1c;
    *(undefined1 *)(puVar4 + 4) = 1;
  }
  puVar1[2] = &DAT_005674cc;
  *param_1 = 5;
  *(undefined1 *)((int)param_1 + 0x7a) = 4;
  *(undefined1 *)((int)param_1 + 0x72) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar3 = *puVar4;
  uVar2 = puVar4[1];
  uVar6 = puVar4[2];
  uVar5 = puVar4[3];
  puVar1[6] = uVar3;
  puVar1[7] = uVar2;
  puVar1[8] = uVar6;
  puVar1[9] = uVar5;
  puVar1[3] = 0;
  puVar4[1] = uVar2 + (0xfffffffe < uVar3);
  *(undefined4 *)((int)param_1 + 0x76) = 0x20000;
  *puVar4 = uVar3 + 1;
  param_1[0x1a] = 0x20;
  puVar1[1] = 1;
  *puVar1 = 1;
  *(undefined2 *)(param_1 + 0x1c) = 1;
  puVar1[4] = 0;
  puVar1[5] = 0;
  param_1[6] = &DAT_3b9aca00;
  param_1[10] = &DAT_3b9aca00;
  param_1[0xe] = &DAT_3b9aca00;
  param_1[0x12] = &DAT_3b9aca00;
  *(undefined2 *)((int)param_1 + 0x73) = 1;
  *(undefined1 *)((int)param_1 + 0x75) = 1;
  param_1[0x17] = puVar1;
  param_1[0x18] = 1;
  param_1[0x19] = 2;
  param_1[0x1b] = 2;
  param_1[0x14] = 0x80000000;
  return;
}

