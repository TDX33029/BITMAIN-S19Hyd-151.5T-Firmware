// FUN_0071262c @ 0071262c size=456 calls_out=8 calls_in=1
// strings: 

void FUN_0071262c(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  int *local_128;
  undefined4 *puStack_124;
  int *piStack_120;
  undefined1 *puStack_11c;
  undefined1 auStack_118 [240];
  undefined4 local_28;
  undefined4 local_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[10]) {
  case '\0':
    param_2[6] = param_2[1];
    param_2[4] = *param_2;
    param_2[5] = param_2[3];
    param_2[7] = param_2[2];
    iVar1 = *(int *)(*param_2 + 0x60);
    param_2[9] = -1;
    param_2[8] = iVar1 + 0x310;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01859fe4);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01859fe4);
  }
  iVar1 = FUN_006f59b4(param_2 + 8,param_3);
  if (iVar1 == 0) {
    param_1[2] = 0x3b9aca01;
    *(undefined1 *)(param_2 + 10) = 3;
    return;
  }
  iVar2 = param_2[8];
  if (iVar2 != 0) {
    FUN_006f5fbc(iVar2,param_2[9],1);
  }
  if (*(int *)(iVar1 + 0x2c) != 0) {
    uVar8 = *(uint *)(iVar1 + 0x20);
    uVar6 = *(uint *)(iVar1 + 0x28);
    uVar4 = uVar6 - uVar8;
    if (uVar6 < uVar8) {
      uVar4 = uVar6;
    }
    if (*(uint *)(*(int *)(iVar1 + 0x24) + uVar4 * 0xf8 + 0xf0) <= (uint)param_2[5]) {
      *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + -1;
      uVar5 = uVar6 + 1;
      puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x24) + uVar6 * 0xf8);
      local_28 = *puVar3;
      uVar4 = uVar5 - uVar8;
      if (uVar5 < uVar8) {
        uVar4 = uVar5;
      }
      local_24 = puVar3[1];
      puVar7 = (undefined1 *)puVar3[2];
      *(uint *)(iVar1 + 0x28) = uVar4;
      FUN_016dd1aa(auStack_118,puVar3 + 3,0xec);
      goto LAB_007127b8;
    }
  }
  piStack_120 = param_2 + 5;
  iVar2 = *(int *)(param_2[4] + 0x60);
  puStack_124 = &DAT_0157d360;
  puStack_11c = &LAB_00fac484;
  local_128 = param_2 + 6;
  FUN_00600d2c(&local_138,&DAT_00586da1,&local_128);
  local_148 = local_138;
  uStack_144 = uStack_134;
  uStack_140 = uStack_130;
  FUN_00709fe0(*(undefined4 *)(iVar2 + 0x548),&local_148);
  puVar7 = &DAT_3b9aca00;
LAB_007127b8:
  FUN_006f625c(iVar1);
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[2] = puVar7;
  FUN_016dd1aa(param_1 + 3,auStack_118,0xec);
  *(undefined1 *)(param_2 + 10) = 1;
  return;
}

