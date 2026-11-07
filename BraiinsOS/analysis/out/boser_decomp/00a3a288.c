// FUN_00a3a288 @ 00a3a288 size=208 calls_out=5 calls_in=0
// strings: 

int FUN_00a3a288(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined4 *puStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar3 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar2 = (uint *)((int)uVar3 + (int)((ulonglong)uVar3 >> 0x20));
  if ((char)puVar2[4] == '\0') {
    FUN_019ae6ac(&local_38);
    *puVar2 = local_38;
    puVar2[1] = uStack_34;
    puVar2[2] = uStack_30;
    puVar2[3] = uStack_2c;
    *(undefined1 *)(puVar2 + 4) = 1;
  }
  local_48 = *puVar2;
  uStack_44 = puVar2[1];
  uStack_40 = puVar2[2];
  uStack_3c = puVar2[3];
  *puVar2 = local_48 + 1;
  puVar2[1] = uStack_44 + (0xfffffffe < local_48);
  puStack_58 = &DAT_0056d238;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  iVar1 = FUN_00b3297c(&puStack_58,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
  FUN_0126f310(&puStack_58);
  if ((iVar1 == 0) && (DataMemoryBarrier(0xb), DAT_01d4cdc8 == 0)) {
    FUN_019e0044(&DAT_01d4cdb8);
  }
  return iVar1;
}

