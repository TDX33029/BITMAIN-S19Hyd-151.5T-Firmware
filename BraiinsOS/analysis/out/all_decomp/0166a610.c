// FUN_0166a610 @ 0166a610 size=404 calls_out=3 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x016d40ee) */
/* WARNING: Removing unreachable block (ram,0x014b47f4) */
/* WARNING: Removing unreachable block (ram,0x016d395c) */
/* WARNING: Removing unreachable block (ram,0x016d3fd8) */
/* WARNING: Removing unreachable block (ram,0x016d3fea) */
/* WARNING: Removing unreachable block (ram,0x016d3ffc) */
/* WARNING: Removing unreachable block (ram,0x016d4014) */
/* WARNING: Removing unreachable block (ram,0x016d4018) */
/* WARNING: Removing unreachable block (ram,0x016d401a) */
/* WARNING: Removing unreachable block (ram,0x016d4022) */
/* WARNING: Removing unreachable block (ram,0x016d4024) */
/* WARNING: Removing unreachable block (ram,0x016d402a) */
/* WARNING: Removing unreachable block (ram,0x016d402c) */
/* WARNING: Removing unreachable block (ram,0x016d4032) */
/* WARNING: Removing unreachable block (ram,0x016d4034) */
/* WARNING: Removing unreachable block (ram,0x016d403a) */
/* WARNING: Removing unreachable block (ram,0x016d403c) */
/* WARNING: Removing unreachable block (ram,0x016d4040) */
/* WARNING: Removing unreachable block (ram,0x016d4042) */
/* WARNING: Removing unreachable block (ram,0x016d4066) */
/* WARNING: Removing unreachable block (ram,0x016d4074) */
/* WARNING: Removing unreachable block (ram,0x016d4076) */
/* WARNING: Removing unreachable block (ram,0x016d4078) */
/* WARNING: Removing unreachable block (ram,0x016d40b0) */
/* WARNING: Removing unreachable block (ram,0x016d40e4) */
/* WARNING: Removing unreachable block (ram,0x016d40b8) */
/* WARNING: Removing unreachable block (ram,0x016d40d0) */
/* WARNING: Removing unreachable block (ram,0x016d407e) */
/* WARNING: Removing unreachable block (ram,0x016d40aa) */
/* WARNING: Removing unreachable block (ram,0x016d4084) */
/* WARNING: Removing unreachable block (ram,0x016d408c) */
/* WARNING: Removing unreachable block (ram,0x016d4094) */
/* WARNING: Removing unreachable block (ram,0x016d409c) */
/* WARNING: Removing unreachable block (ram,0x016d40a4) */
/* WARNING: Removing unreachable block (ram,0x0166a740) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0166a610(int *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  undefined1 auStack_48 [24];
  int local_30;
  undefined1 local_2c;
  undefined1 auStack_2b [19];
  
  iVar3 = *(int *)(param_2 + 0xc);
  pbVar2 = *(byte **)(param_2 + 8);
  if (iVar3 == 0) {
LAB_0166a6ec:
    *(byte **)(param_2 + 8) = pbVar2;
    *(int *)(param_2 + 0xc) = iVar3;
    FUN_0166ef68(&local_30);
    if (local_30 == 3) {
      local_30 = 3;
      local_2c = 10;
    }
    else {
      FUN_016dd1aa(auStack_48,auStack_2b,0x13);
      if (local_30 == 1) {
        *(undefined1 *)(param_1 + 1) = local_2c;
        FUN_016dd1aa((int)param_1 + 5,auStack_48,0x13);
        *param_1 = 1;
        return;
      }
    }
    *(undefined1 *)(param_1 + 1) = local_2c;
    *param_1 = local_30;
    FUN_016dd1aa((int)param_1 + 5,auStack_48,0x13);
    return;
  }
  bVar1 = *pbVar2;
  *(byte **)(param_2 + 8) = pbVar2 + 1;
  *(int *)(param_2 + 0xc) = iVar3 + -1;
  if (bVar1 != 9) {
    uVar4 = bVar1 - 0x20;
    bVar5 = 6 < uVar4;
    if (bVar5) {
      uVar4 = bVar1 - 0x28;
    }
    if ((bVar5 && 0x56 < uVar4) && (-1 < (char)bVar1)) {
      *(byte **)(param_2 + 8) = pbVar2;
      *(int *)(param_2 + 0xc) = iVar3;
      goto LAB_0166a6ec;
    }
  }
  local_5c = CONCAT31(local_5c._1_3_,bVar1);
  *param_1 = 3;
  param_1[1] = local_5c;
  param_1[2] = local_58;
  param_1[3] = local_54;
  param_1[4] = local_50;
  param_1[5] = iStack_4c;
  return;
}

