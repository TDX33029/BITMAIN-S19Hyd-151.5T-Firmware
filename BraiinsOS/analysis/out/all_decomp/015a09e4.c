// FUN_015a09e4 @ 015a09e4 size=256 calls_out=3 calls_in=0
// strings: 

void FUN_015a09e4(int *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int local_28;
  int local_24;
  int local_20;
  
  if (0x7f < param_2) {
    iVar4 = 1;
    local_20 = 0;
    local_24 = 1;
    local_28 = 0;
    do {
      iVar2 = local_20;
      if (local_20 == local_28) {
        FUN_006029c0(&local_28);
        iVar4 = local_24;
      }
      iVar7 = iVar2 + 1;
      *(char *)(iVar4 + iVar2) = (char)param_2;
      param_2 = param_2 >> 8;
      local_20 = iVar7;
    } while (param_2 != 0);
    if (iVar7 == local_28) {
      FUN_006029c0(&local_28);
    }
    pbVar5 = (byte *)(local_24 + iVar7);
    *pbVar5 = (byte)iVar7 | 0x80;
    uVar6 = 0;
    do {
      bVar1 = *(byte *)(local_24 + uVar6);
      *(byte *)(local_24 + uVar6) = pbVar5[-uVar6];
      pbVar5[-uVar6] = bVar1;
      uVar6 = uVar6 + 1;
    } while (iVar2 + 2U >> 1 != uVar6);
    *param_1 = local_28;
    param_1[1] = local_24;
    param_1[2] = iVar2 + 2;
    return;
  }
  puVar3 = (undefined1 *)thunk_FUN_016d4a50(1);
  if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(1,1);
  }
  *param_1 = 1;
  param_1[1] = (int)puVar3;
  param_1[2] = 1;
  *puVar3 = (char)param_2;
  return;
}

