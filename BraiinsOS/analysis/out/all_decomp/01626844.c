// FUN_01626844 @ 01626844 size=248 calls_out=4 calls_in=2
// strings: 

undefined8 FUN_01626844(void)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 local_c0;
  undefined4 local_bc;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint *local_14;
  
  local_a0 = thunk_FUN_016d4a50(0x90);
  if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x90);
  }
  *(undefined4 *)(local_a0 + 0x80) = 0;
  *(undefined4 *)(local_a0 + 0x84) = 0;
  *(undefined4 *)(local_a0 + 0x88) = 0;
  *(undefined4 *)(local_a0 + 0x8c) = 0;
  local_bc = 1;
  local_c0 = 1;
  local_3c = 1;
  local_48 = 0;
  local_60 = 0;
  local_78 = 0;
  local_80 = 0;
  local_9c = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_38 = 0;
  local_40 = 0;
  local_44 = 0;
  local_14 = (uint *)0x0;
  local_50 = local_a0;
  local_4c = local_a0;
  iVar4 = FUN_016d51b0(&local_14,0x20,0xa0);
  puVar3 = local_14;
  if ((iVar4 != 0) || (local_14 == (uint *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(0x20,0xa0);
  }
  FUN_016dd1aa(local_14,&local_c0,0xa0);
  do {
    uVar5 = *puVar3;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = uVar5 + 1;
  puVar6 = (uint *)(uVar5 + 1);
  puVar2 = (uint *)uVar5;
  if (uVar5 < 0x80000000) {
    puVar6 = puVar3;
    puVar2 = puVar3;
  }
  if ((int)uVar5 < 0) {
    software_udf(0xfdee,0x1626920);
    return CONCAT44(puVar6,puVar2);
  }
  return CONCAT44(puVar6,puVar2);
}

