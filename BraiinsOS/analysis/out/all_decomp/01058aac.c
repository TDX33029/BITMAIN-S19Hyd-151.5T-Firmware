// FUN_01058aac @ 01058aac size=368 calls_out=3 calls_in=2
// strings: 

void FUN_01058aac(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  short *local_120;
  short *local_11c;
  int iStack_118;
  short *psStack_114;
  int local_110;
  short *local_10c;
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  short local_c8;
  undefined1 auStack_c6 [162];
  
  (**(code **)(param_4 + 0xc))(&local_110,param_3,param_2,param_5);
  if (local_110 == -0x80000000) {
    param_1[1] = local_10c;
    *param_1 = 1;
    return;
  }
  psVar3 = local_10c + local_108 * 0x74;
  local_120 = local_10c;
  local_11c = local_10c;
  iStack_118 = local_110;
  psStack_114 = psVar3;
  if (local_108 != 0) {
    psVar2 = local_10c;
    do {
      psVar4 = psVar2 + 0x74;
      if (*psVar2 == 2) goto LAB_01058be4;
      sVar1 = psVar2[0x24];
      local_110 = CONCAT22(local_110._2_2_,*psVar2);
      FUN_016dd1aa((uint)&local_110 | 2,psVar2 + 1,0x46);
      local_c8 = sVar1;
      FUN_016dd1aa(auStack_c6,psVar2 + 0x25,0x9e);
      iVar5 = *(int *)(param_2 + 0x2c);
      if (iVar5 == *(int *)(param_2 + 0x24)) {
        FUN_0104e528(param_2 + 0x24);
      }
      FUN_016dd1aa(iVar5 * 0xe8 + *(int *)(param_2 + 0x28),&local_110,0xe8);
      *(int *)(param_2 + 0x2c) = iVar5 + 1;
      psVar2 = psVar4;
    } while (psVar4 != psVar3);
    psVar4 = psVar3;
LAB_01058be4:
    local_11c = psVar4;
  }
  FUN_0104ea00(&local_120);
  param_1[1] = local_104;
  param_1[2] = local_100;
  *param_1 = 0;
  return;
}

