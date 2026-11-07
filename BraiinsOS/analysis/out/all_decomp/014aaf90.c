// FUN_014aaf90 @ 014aaf90 size=384 calls_out=4 calls_in=2
// strings: 

void FUN_014aaf90(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *extraout_r2;
  undefined4 unaff_r5;
  undefined4 extraout_r12;
  undefined1 auStack_378 [152];
  undefined1 auStack_2e0 [152];
  undefined1 auStack_248 [240];
  uint local_158;
  int *piStack_154;
  undefined4 uStack_150;
  int *piStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  int *piStack_140;
  undefined4 uStack_13c;
  uint local_138;
  int *local_134;
  undefined4 local_130;
  int *local_12c;
  undefined4 local_128;
  undefined4 local_124;
  int *local_120;
  undefined4 local_11c;
  undefined1 auStack_118 [244];
  
  FUN_014ab194(auStack_378,(uint *)(param_2 + 0xf0));
  FUN_016dd1aa(auStack_248,param_3,0x98);
  uVar3 = FUN_0145db88(param_2,auStack_248);
  FUN_016dd1aa(auStack_2e0,auStack_378,0x98);
  local_12c = *(int **)(param_2 + 0xfc);
  local_134 = extraout_r2;
  if (local_12c != (int *)0x0) {
    do {
      iVar4 = *local_12c;
      local_134 = (int *)(iVar4 + 1);
      bVar2 = (bool)hasExclusiveAccess(local_12c);
    } while (!bVar2);
    *local_12c = (int)local_134;
    if (iVar4 < 0) goto LAB_014ab10c;
  }
  local_138 = *(uint *)(param_2 + 0xf0);
  local_130 = extraout_r12;
  if (1 < local_138) {
    local_134 = *(int **)(param_2 + 0xf4);
    do {
      iVar4 = *local_134;
      bVar2 = (bool)hasExclusiveAccess(local_134);
    } while (!bVar2);
    *local_134 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_014ab10c;
    local_130 = *(undefined4 *)(param_2 + 0xf8);
    unaff_r5 = 0;
  }
  local_120 = *(int **)(param_2 + 0x108);
  local_128 = *(undefined4 *)(param_2 + 0x100);
  local_124 = *(undefined4 *)(param_2 + 0x104);
  if (local_120 != (int *)0x0) {
    do {
      iVar4 = *local_120;
      bVar2 = (bool)hasExclusiveAccess(local_120);
    } while (!bVar2);
    *local_120 = iVar4 + 1;
    if (iVar4 < 0) {
LAB_014ab10c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x14ab10c);
      (*pcVar1)();
    }
    unaff_r5 = *(undefined4 *)(param_2 + 0x10c);
  }
  local_11c = unaff_r5;
  FUN_01475d88(auStack_118,param_2);
  local_158 = local_138;
  piStack_154 = local_134;
  uStack_150 = local_130;
  piStack_14c = local_12c;
  local_148 = local_128;
  uStack_144 = local_124;
  piStack_140 = local_120;
  uStack_13c = local_11c;
  FUN_016dd1aa(auStack_248,auStack_118,0xf0);
  FUN_016dd1aa(param_1,auStack_378,0x98);
  FUN_016dd1aa(param_1 + 0x98,auStack_248,0x110);
  *(undefined4 *)(param_1 + 0x1ac) = uVar3;
  *(undefined4 **)(param_1 + 0x1b0) = &DAT_018a448c;
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  return;
}

