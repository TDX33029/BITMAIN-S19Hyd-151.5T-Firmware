// FUN_00fe4528 @ 00fe4528 size=220 calls_out=3 calls_in=3
// strings: 

int FUN_00fe4528(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 *local_50 [5];
  uint local_3c [3];
  int local_30;
  uint local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_3c[2] = *param_1;
  local_30 = param_1[1];
  iVar4 = param_1[2];
  local_50[0] = &DAT_80000005;
  iVar5 = 0;
  local_1c = 0;
  if (local_3c[2] != 0) {
    local_1c = iVar4;
  }
  local_3c[0] = (uint)(local_3c[2] != 0);
  local_28 = 0;
  local_3c[1] = 0;
  local_2c = local_3c[0];
  local_24 = local_3c[2];
  local_20 = local_30;
  while (uVar7 = FUN_0165d304(local_3c), puVar2 = (undefined4 *)((ulonglong)uVar7 >> 0x20),
        (int)uVar7 != 0) {
    uVar3 = *(uint *)((int)uVar7 + 8);
    iVar1 = 0;
    iVar6 = 0;
    if (uVar3 != 0) {
      iVar6 = uVar3 + ((LZCOUNT(uVar3 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    }
    if ((undefined1 *)*puVar2 != &DAT_80000005) {
      iVar1 = FUN_00fe4444(puVar2);
    }
    iVar5 = iVar1 + iVar6 + iVar5 + ((LZCOUNT(iVar1 + iVar6 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
  }
  FUN_014880e4(local_50);
  return iVar5 + iVar4;
}

