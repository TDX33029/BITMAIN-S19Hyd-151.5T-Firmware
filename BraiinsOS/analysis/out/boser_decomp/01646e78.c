// FUN_01646e78 @ 01646e78 size=332 calls_out=4 calls_in=4
// strings: 

void FUN_01646e78(int *param_1,uint param_2)

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
  int local_38;
  int iStack_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  if (param_2 == 0) {
    iVar6 = 0;
LAB_01646ef0:
    param_1[2] = iVar6;
    return;
  }
  if (param_2 == 1) {
    return;
  }
  if ((param_2 ^ param_2 - 1) <= param_2 - 1) {
    iVar6 = param_1[2];
    if (iVar6 == 0) {
      return;
    }
    iVar7 = param_1[1];
    iVar9 = 0;
    uVar8 = 0;
    do {
      lVar2 = (ulonglong)param_2 * (ulonglong)*(uint *)(iVar7 + iVar9) + (ulonglong)uVar8;
      uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
      *(int *)(iVar7 + iVar9) = (int)lVar2;
      iVar9 = iVar9 + 4;
    } while (iVar6 * 4 != iVar9);
    if (uVar8 == 0) {
      return;
    }
    if (iVar6 == *param_1) {
      FUN_01a54b48(param_1);
      iVar7 = param_1[1];
    }
    *(uint *)(iVar7 + iVar6 * 4) = uVar8;
    iVar6 = iVar6 + 1;
    goto LAB_01646ef0;
  }
  iVar6 = *param_1;
  iVar9 = param_1[1];
  iVar7 = param_1[2];
  *param_1 = 0;
  param_1[1] = 4;
  param_1[2] = 0;
  if (iVar6 == -0x80000000) {
    if (*(int *)(iVar9 + 8) == 0) {
      FUN_0164a9cc(&local_38,*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar9 + 8));
      goto LAB_01646f9c;
    }
  }
  else if (iVar7 == 0) {
    local_30 = 0;
    local_38 = iVar6;
    iStack_34 = iVar9;
    goto LAB_01646f9c;
  }
  bVar3 = (byte)param_2;
  bVar4 = (byte)(param_2 >> 8);
  bVar5 = (byte)(param_2 >> 0x10);
  bVar1 = (byte)(param_2 >> 0x18);
  local_2c = iVar6;
  local_28 = iVar9;
  local_24 = iVar7;
  FUN_0164b560(&local_38,&local_2c,0,
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
LAB_01646f9c:
  FUN_0134aee0(0,4,4,4);
  *param_1 = local_38;
  param_1[1] = iStack_34;
  param_1[2] = local_30;
  return;
}

