// FUN_014475b4 @ 014475b4 size=384 calls_out=4 calls_in=0
// strings: 

void FUN_014475b4(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *extraout_r2;
  undefined4 unaff_r5;
  undefined4 extraout_r12;
  undefined1 auStack_348 [152];
  undefined1 auStack_2b0 [152];
  undefined1 auStack_218 [216];
  uint local_140;
  int *piStack_13c;
  undefined4 uStack_138;
  int *piStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  int *piStack_128;
  undefined4 uStack_124;
  uint local_120;
  int *local_11c;
  undefined4 local_118;
  int *local_114;
  undefined4 local_110;
  undefined4 local_10c;
  int *local_108;
  undefined4 local_104;
  undefined1 auStack_100 [220];
  
  FUN_0143e01c(auStack_348,(uint *)(param_2 + 0xd8));
  FUN_016dd1aa(auStack_218,param_3,0x98);
  uVar3 = FUN_01408efc(param_2,auStack_218);
  FUN_016dd1aa(auStack_2b0,auStack_348,0x98);
  local_114 = *(int **)(param_2 + 0xe4);
  local_11c = extraout_r2;
  if (local_114 != (int *)0x0) {
    do {
      iVar4 = *local_114;
      local_11c = (int *)(iVar4 + 1);
      bVar2 = (bool)hasExclusiveAccess(local_114);
    } while (!bVar2);
    *local_114 = (int)local_11c;
    if (iVar4 < 0) goto LAB_01447730;
  }
  local_120 = *(uint *)(param_2 + 0xd8);
  local_118 = extraout_r12;
  if (1 < local_120) {
    local_11c = *(int **)(param_2 + 0xdc);
    do {
      iVar4 = *local_11c;
      bVar2 = (bool)hasExclusiveAccess(local_11c);
    } while (!bVar2);
    *local_11c = iVar4 + 1;
    if (iVar4 < 0) goto LAB_01447730;
    local_118 = *(undefined4 *)(param_2 + 0xe0);
    unaff_r5 = 0;
  }
  local_108 = *(int **)(param_2 + 0xf0);
  local_110 = *(undefined4 *)(param_2 + 0xe8);
  local_10c = *(undefined4 *)(param_2 + 0xec);
  if (local_108 != (int *)0x0) {
    do {
      iVar4 = *local_108;
      bVar2 = (bool)hasExclusiveAccess(local_108);
    } while (!bVar2);
    *local_108 = iVar4 + 1;
    if (iVar4 < 0) {
LAB_01447730:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1447730);
      (*pcVar1)();
    }
    unaff_r5 = *(undefined4 *)(param_2 + 0xf4);
  }
  local_104 = unaff_r5;
  FUN_0142c098(auStack_100,param_2);
  local_140 = local_120;
  piStack_13c = local_11c;
  uStack_138 = local_118;
  piStack_134 = local_114;
  local_130 = local_110;
  uStack_12c = local_10c;
  piStack_128 = local_108;
  uStack_124 = local_104;
  FUN_016dd1aa(auStack_218,auStack_100,0xd8);
  FUN_016dd1aa(param_1,auStack_348,0x98);
  FUN_016dd1aa(param_1 + 0x98,auStack_218,0xf8);
  *(undefined4 *)(param_1 + 0x194) = uVar3;
  *(undefined4 **)(param_1 + 0x198) = &DAT_018a36ac;
  *(undefined1 *)(param_1 + 400) = 0;
  return;
}

