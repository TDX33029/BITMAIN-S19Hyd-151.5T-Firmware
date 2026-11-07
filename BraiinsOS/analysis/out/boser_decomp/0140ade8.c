// FUN_0140ade8 @ 0140ade8 size=176 calls_out=4 calls_in=3
// strings: 

undefined4 * FUN_0140ade8(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x28);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x28);
  }
  uVar7 = thunk_FUN_01bee35a(puVar1,0x2c0);
  puVar2 = (uint *)((int)uVar7 + (int)((ulonglong)uVar7 >> 0x20));
  if ((char)puVar2[4] == '\0') {
    FUN_019ae6ac(&local_30);
    *puVar2 = local_30;
    puVar2[1] = uStack_2c;
    puVar2[2] = uStack_28;
    puVar2[3] = uStack_24;
    *(undefined1 *)(puVar2 + 4) = 1;
  }
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  *puVar1 = 1;
  puVar1[1] = 1;
  uVar3 = puVar2[2];
  uVar6 = puVar2[3];
  *puVar2 = uVar4 + 1;
  puVar2[1] = uVar5 + (0xfffffffe < uVar4);
  puVar1[2] = &DAT_0056d238;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = uVar4;
  puVar1[7] = uVar5;
  puVar1[8] = uVar3;
  puVar1[9] = uVar6;
  return puVar1;
}

