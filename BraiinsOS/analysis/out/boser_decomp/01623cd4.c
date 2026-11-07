// FUN_01623cd4 @ 01623cd4 size=192 calls_out=1 calls_in=1
// strings: 

void FUN_01623cd4(undefined4 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint local_30;
  int local_2c;
  uint local_28;
  
  iVar6 = 0;
  iVar3 = 4;
  local_28 = 0;
  local_2c = 4;
  local_30 = 0;
  if (3 < param_3) {
    do {
      uVar2 = local_28;
      uVar4 = *(uint *)(param_2 + local_28 * 4);
      uVar1 = (uVar4 >> 0x10 & 0xff) << 8;
      if (local_28 == local_30) {
        FUN_015f5ab8(&local_30);
        iVar3 = local_2c;
      }
      puVar5 = (uint *)(iVar3 + iVar6);
      *puVar5 = (uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | uVar1) >> 0xc;
      iVar6 = iVar6 + 8;
      puVar5[1] = ((uVar1 & 0x1ff) >> 8) << 0x10 | (uVar4 >> 0x18) << 8 | (uVar1 & 0xfff) >> 9;
      local_28 = uVar2 + 1;
    } while (uVar2 != param_3 - 4 >> 2);
  }
  param_1[1] = local_30;
  param_1[2] = local_2c;
  param_1[3] = local_28;
  *param_1 = 0;
  return;
}

