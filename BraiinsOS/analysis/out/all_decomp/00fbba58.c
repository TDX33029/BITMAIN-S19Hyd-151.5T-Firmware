// FUN_00fbba58 @ 00fbba58 size=340 calls_out=3 calls_in=2
// strings: 

uint FUN_00fbba58(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_860;
  int *local_85c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_440;
  uint local_420 [258];
  
  do {
    iVar4 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xfbbba8);
    (*pcVar1)();
  }
  iVar4 = 0;
  do {
    local_420[iVar4 * 4] = (uint)&DAT_01040efc;
    iVar5 = iVar4 + 1;
    local_420[iVar4 * 4 + 1] = 0;
    local_420[iVar4 * 4 + 2] = 0;
    local_420[iVar4 * 4 + 3] = 0;
    iVar4 = iVar5;
  } while (iVar5 != 0x40);
  local_860 = 0;
  local_85c = param_1;
  FUN_016dd1aa((uint)&local_860 | 8,local_420,0x400);
  local_450 = 1;
  local_440 = 0;
  local_44c = 0;
  local_454 = 0;
  local_458 = 0;
  local_420[0x101] = 0;
  iVar4 = FUN_016d51b0(local_420 + 0x101,0x20,0x440);
  uVar3 = local_420[0x101];
  if ((iVar4 != 0) || (local_420[0x101] == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(0x20,0x440);
  }
  FUN_016dd1aa(local_420[0x101],&local_860,0x440);
  puVar6 = (uint *)(uVar3 & 0xffffffe0);
  puVar7 = (uint *)(param_1 + 0x20);
  uVar9 = param_1[0x20];
  do {
    while( true ) {
      *puVar6 = uVar9;
      uVar8 = *puVar7;
      if (uVar8 == uVar9) break;
      ClearExclusiveLocal();
      uVar9 = uVar8;
    }
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(puVar7);
    uVar9 = uVar8;
  } while (!bVar2);
  *puVar7 = (uint)puVar6;
  return uVar3;
}

