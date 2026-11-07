// FUN_0083629c @ 0083629c size=624 calls_out=4 calls_in=0
// strings: 

void FUN_0083629c(undefined4 *param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 *local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  undefined1 auStack_34 [12];
  uint local_28;
  code *local_24;
  code *local_20;
  undefined *local_1c;
  
  uVar2 = thunk_FUN_016de0ee(param_1,0x2c0);
  puVar1 = (uint *)((int)uVar2 + (int)((ulonglong)uVar2 >> 0x20));
  if ((char)puVar1[4] == '\0') {
    FUN_015f62e4(&local_28);
    *puVar1 = local_28;
    puVar1[1] = (uint)local_24;
    puVar1[2] = (uint)local_20;
    puVar1[3] = (uint)local_1c;
    *(undefined1 *)(puVar1 + 4) = 1;
  }
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  local_3c = puVar1[3];
  *puVar1 = local_48 + 1;
  puVar1[1] = uStack_44 + (0xfffffffe < local_48);
  uStack_54 = 0;
  uStack_50 = 0;
  local_4c = 0;
  local_58 = &DAT_005674cc;
  FUN_00882e94(&local_58,8);
  local_20 = FUN_008732b8;
  local_1c = &DAT_002faf08;
  local_28._0_2_ = 0x1362;
  local_24 = FUN_008548dc;
  FUN_0088347c(auStack_34,&local_58,0x1362,&local_24);
  local_1c = &DAT_002faf08;
  local_20 = FUN_00873b64;
  local_24 = FUN_008548dc;
  local_28._0_2_ = 0x1366;
  FUN_0088347c(auStack_34,&local_58,0x1366,&local_24);
  local_1c = &DAT_002faf08;
  local_20 = FUN_0089d9d4;
  local_24 = FUN_008548dc;
  local_28._0_2_ = 0x1368;
  FUN_0088347c(auStack_34,&local_58,0x1368,&local_24);
  local_1c = &DAT_002faf08;
  local_20 = FUN_00824218;
  local_24 = FUN_008548dc;
  local_28._0_2_ = 0x1370;
  FUN_0088347c(auStack_34,&local_58,0x1370,&local_24);
  local_1c = &DAT_002faf08;
  local_20 = FUN_00836e18;
  local_24 = FUN_008548dc;
  local_28._0_2_ = 0x1372;
  FUN_0088347c(auStack_34,&local_58,0x1372,&local_24);
  local_1c = (undefined *)0xbebc20;
  local_20 = FUN_0083453c;
  local_24 = FUN_0084819c;
  local_28._0_2_ = 0x1398;
  FUN_0088347c(auStack_34,&local_58,0x1398,&local_24);
  local_24 = FUN_0084819c;
  local_20 = FUN_008338a8;
  local_1c = (undefined *)0x5f5e10;
  local_28._0_2_ = 0x1396;
  FUN_0088347c(auStack_34,&local_58,0x1396,&local_24);
  local_1c = (undefined *)0x5f5e10;
  local_20 = FUN_008a11d0;
  local_24 = FUN_0084819c;
  local_28 = CONCAT22(local_28._2_2_,0x1397);
  FUN_0088347c(auStack_34,&local_58,0x1397,&local_24);
  *param_1 = local_58;
  param_1[1] = uStack_54;
  param_1[2] = uStack_50;
  param_1[3] = local_4c;
  param_1[4] = local_48;
  param_1[5] = uStack_44;
  param_1[6] = uStack_40;
  param_1[7] = local_3c;
  return;
}

