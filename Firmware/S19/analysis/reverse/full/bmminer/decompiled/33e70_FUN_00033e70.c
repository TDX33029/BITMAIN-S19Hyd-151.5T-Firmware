// FUN_00033e70 @ 00033e70  size=216  callers=1
// program: bmminer


void FUN_00033e70(undefined1 *param_1,char *param_2)

{
  longlong lVar1;
  size_t sVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uStack_38;
  undefined4 local_34;
  uint local_30 [6];
  
  local_30[0] = 0;
  local_34 = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  sVar2 = strlen(param_2);
  if (sVar2 == 0) {
    local_34._0_1_ = 0;
    uVar3 = 0;
  }
  else {
    pbVar8 = (byte *)(param_2 + -1);
    pbVar7 = pbVar8 + sVar2;
    uVar3 = 0;
    while( true ) {
      pbVar8 = pbVar8 + 1;
      uVar6 = *(uint *)(&DAT_0006dd1c + (uint)*pbVar8 * 4);
      puVar4 = local_30 + 5;
      while( true ) {
        lVar1 = (ulonglong)uVar3 * 0x3a + (ulonglong)uVar6;
        uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
        puVar5 = puVar4 + -1;
        *puVar4 = (uint)lVar1;
        if (&uStack_38 == puVar5) break;
        uVar3 = *puVar5;
        puVar4 = puVar5;
      }
      if (pbVar7 == pbVar8) break;
      uVar3 = local_30[5];
    }
    uVar3 = local_30[0] << 0x18 | (local_30[0] >> 8 & 0xff) << 0x10 |
            (local_30[0] >> 0x10 & 0xff) << 8 | local_30[0] >> 0x18;
  }
  puVar5 = local_30;
  *param_1 = (undefined1)local_34;
  puVar4 = (uint *)(param_1 + 1);
  while( true ) {
    *puVar4 = uVar3;
    if (puVar4 + 1 == (uint *)(param_1 + 0x19)) break;
    puVar5 = puVar5 + 1;
    uVar3 = *puVar5;
    uVar3 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
            uVar3 >> 0x18;
    puVar4 = puVar4 + 1;
  }
  return;
}

