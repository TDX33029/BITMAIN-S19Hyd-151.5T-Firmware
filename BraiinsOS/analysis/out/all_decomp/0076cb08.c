// FUN_0076cb08 @ 0076cb08 size=244 calls_out=4 calls_in=6
// strings: 

undefined8 FUN_0076cb08(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_80 = FUN_0164ec90(&DAT_0185bc0c);
  local_84 = 1;
  local_88 = 1;
  local_54 = 0;
  local_58 = 4;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = 0;
  local_70 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_30 = 0;
  local_44 = 4;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_28 = 0;
  local_2c = 4;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 4;
  local_14 = 0;
  local_78 = param_1;
  local_74 = param_2;
  puVar3 = (uint *)thunk_FUN_016d4a50(0x78);
  if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x78);
  }
  FUN_016dd1aa(puVar3,&local_88,0x78);
  do {
    uVar4 = *puVar3;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = uVar4 + 1;
  puVar5 = (uint *)(uVar4 + 1);
  puVar2 = (uint *)uVar4;
  if (uVar4 < 0x80000000) {
    puVar5 = puVar3;
    puVar2 = puVar3;
  }
  if ((int)uVar4 < 0) {
    software_udf(0xfdee,0x76cbec);
    return CONCAT44(puVar5,puVar2);
  }
  return CONCAT44(puVar5,puVar2);
}

