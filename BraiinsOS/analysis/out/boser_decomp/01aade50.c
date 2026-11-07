// FUN_01aade50 @ 01aade50 size=268 calls_out=2 calls_in=2
// strings: 

void FUN_01aade50(int *param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int local_60 [4];
  undefined *local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined1 auStack_30 [8];
  undefined4 local_28;
  
  iVar3 = *(int *)(param_3 + 0x24);
  FUN_01aadf6c(local_60,*(undefined4 *)(param_3 + 8));
  bVar4 = iVar3 == local_60[0];
  local_60[0] = 2;
  if (bVar4) {
    FUN_01aadf6c(auStack_30,*(undefined4 *)(param_3 + 8));
    local_38 = local_28;
    local_60[1] = 0;
    local_60[0] = 0;
    local_40 = 0;
    local_48 = 0;
    local_50 = (undefined *)0x0;
    FUN_01aacd68(param_2,local_60,&DAT_01d2eb3c);
    *(undefined1 *)(param_1 + 0xf) = 1;
    iVar3 = *(int *)(param_3 + 8);
    if (local_50 == (undefined *)0x0) {
      local_4c = 3;
    }
    iVar2 = *(int *)(param_3 + 0x28);
    param_1[9] = *(int *)(param_3 + 0x24);
    param_1[10] = iVar2;
    param_1[0xb] = local_48;
    param_1[0xc] = iStack_44;
    puVar1 = &DAT_005314c9;
    if (local_50 != (undefined *)0x0) {
      puVar1 = local_50;
    }
    param_1[0xd] = local_40;
    param_1[0xe] = local_3c;
    param_1[1] = local_60[2];
    param_1[2] = iVar3;
    param_1[5] = (int)puVar1;
    param_1[3] = (int)&DAT_005314c0;
    param_1[6] = local_4c;
    param_1[4] = 9;
    param_1[8] = 1;
    param_1[7] = (int)&DAT_01d2f7e0;
  }
  *param_1 = local_60[0];
  return;
}

