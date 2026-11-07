// FUN_01274bd8 @ 01274bd8 size=352 calls_out=2 calls_in=5
// strings: 

void FUN_01274bd8(int *param_1,uint param_2)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int local_30;
  int iStack_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if (param_2 == 0) {
    param_1[2] = 0;
    return;
  }
  if (param_2 == 1) {
    return;
  }
  if ((param_2 ^ param_2 - 1) <= param_2 - 1) {
    iVar9 = param_1[2];
    if (iVar9 != 0) {
      iVar6 = param_1[1];
      iVar7 = 0;
      uVar8 = 0;
      do {
        lVar2 = (ulonglong)param_2 * (ulonglong)*(uint *)(iVar6 + iVar7) + (ulonglong)uVar8;
        uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
        *(int *)(iVar6 + iVar7) = (int)lVar2;
        iVar7 = iVar7 + 4;
      } while (iVar9 * 4 != iVar7);
      if (uVar8 != 0) {
        if (iVar9 == *param_1) {
          FUN_0127ac28();
          iVar6 = param_1[1];
        }
        *(uint *)(iVar6 + iVar9 * 4) = uVar8;
        param_1[2] = iVar9 + 1;
      }
    }
    return;
  }
  local_1c = param_1[2];
  local_24 = *param_1;
  local_20 = param_1[1];
  *param_1 = 0;
  param_1[1] = 4;
  param_1[2] = 0;
  if (local_24 == -0x80000000) {
    if (*(int *)(local_20 + 8) == 0) {
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      return;
    }
  }
  else if (local_1c == 0) {
    *param_1 = local_24;
    param_1[1] = local_20;
    param_1[2] = 0;
    return;
  }
  bVar3 = (byte)param_2;
  bVar4 = (byte)(param_2 >> 8);
  bVar5 = (byte)(param_2 >> 0x10);
  bVar1 = (byte)(param_2 >> 0x18);
  FUN_0127ae58(&local_30,&local_24,0,
               LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                        << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                     bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                       0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                               bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                             bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                       (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1)
                                        << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                     bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8
                       | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1
                                          ) << 1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)));
  *param_1 = local_30;
  param_1[1] = iStack_2c;
  param_1[2] = local_28;
  return;
}

