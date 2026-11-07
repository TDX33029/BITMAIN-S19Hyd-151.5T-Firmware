// FUN_0071d324 @ 0071d324 size=332 calls_out=1 calls_in=3
// strings: 

void FUN_0071d324(char *param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6,uint param_7)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_2c;
  char local_2a;
  int local_28;
  int local_24;
  char local_20;
  undefined2 local_1f;
  char local_1d;
  uint local_1c;
  int local_18;
  uint local_14;
  
  if ((param_5 & 0x3f) == 0x16) {
    cVar1 = *(char *)(param_2 + 0x78);
    param_1[4] = '\x01';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    iVar4 = *(int *)(param_3 + 0x110);
    uVar2 = *(ushort *)(param_3 + 0xda);
    *param_1 = 'O';
    uVar6 = param_7;
    if (uVar2 < 5) {
      uVar6 = param_7 + iVar4;
    }
    if (cVar1 == '\0') {
      uVar6 = param_7;
    }
    *(uint *)(param_1 + 8) = uVar6;
    return;
  }
  if (param_5 != 0x18) {
    *param_1 = 'O';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    return;
  }
  local_28 = *(int *)(param_2 + 0x60);
  uVar6 = *(uint *)(param_3 + 0x110);
  if (uVar6 <= *(uint *)(param_2 + 100)) {
    uVar5 = *(uint *)(param_3 + 0xd8) >> 8;
    lVar3 = (ulonglong)(uVar5 & 0xff) * (ulonglong)param_7;
    param_7 = (uint)lVar3;
    if ((int)((ulonglong)lVar3 >> 0x20) != 0) {
      local_20 = '8';
      local_14 = uVar5;
      local_1c = param_7;
      local_18 = local_28;
      goto LAB_0071d3d8;
    }
    uVar5 = *(uint *)(param_2 + 100) - uVar6;
    local_28 = local_28 + uVar6;
    if (param_7 <= uVar5) {
      local_24 = uVar5 - param_7;
      local_28 = local_28 + param_7;
      FUN_007194a0(&local_20,&local_28);
      if (local_20 == 'O') {
        param_1[4] = '\x01';
        param_1[5] = '\0';
        param_1[6] = '\0';
        param_1[7] = '\0';
        *(uint *)(param_1 + 8) = local_1c + uVar6;
        *param_1 = 'O';
        return;
      }
      local_2a = local_1d;
      local_2c = local_1f;
      goto LAB_0071d3d8;
    }
  }
  local_20 = '\x13';
  local_14 = 0;
  local_1c = param_7;
  local_18 = local_28;
LAB_0071d3d8:
  *param_1 = local_20;
  *(undefined2 *)(param_1 + 1) = local_2c;
  param_1[3] = local_2a;
  *(uint *)(param_1 + 4) = local_1c;
  *(int *)(param_1 + 8) = local_18;
  *(uint *)(param_1 + 0xc) = local_14;
  return;
}

