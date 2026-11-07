// FUN_0091dd40 @ 0091dd40 size=532 calls_out=7 calls_in=5
// strings: 

void FUN_0091dd40(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int local_1e8;
  undefined1 auStack_1e0 [12];
  uint local_1d4;
  int *local_1cc;
  int local_198 [28];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined1 *local_120;
  int local_11c;
  int *local_118;
  int local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint local_e0 [2];
  int *local_d8;
  undefined1 auStack_d4 [4];
  undefined4 local_d0;
  int local_cc;
  undefined1 auStack_98 [116];
  
  piVar3 = *(int **)(param_2 + 0xbc);
  if (piVar3 == *(int **)(param_2 + 0xc4)) {
LAB_0091dd70:
    *param_1 = 2;
    param_1[2] = 0x80000016;
    return;
  }
  iVar2 = *piVar3;
  *(int **)(param_2 + 0xbc) = piVar3 + 0x30;
  if (iVar2 == 4) goto LAB_0091dd70;
  FUN_016dd1aa(auStack_1e0,piVar3 + 0x1c,0x48);
  FUN_016dd1aa((uint)local_198 | 4,piVar3 + 1,0x6c);
  local_e0[0] = 0;
  if (local_1d4 != 0x80000003) {
    local_e0[0] = (uint)(0x80000001 < local_1d4);
    if (0x80000001 < local_1d4) {
      piVar3 = local_1cc;
    }
  }
  local_198[0] = iVar2;
  FUN_01676758(&local_128,auStack_1e0);
  local_d8 = piVar3;
  FUN_016dd1aa(auStack_d4,&local_128,0x48);
  if (local_cc == 6) {
    iVar2 = thunk_FUN_016dd50a(local_d0,&DAT_003e8611,6);
    if (iVar2 == 0) {
      local_120 = (undefined1 *)0x80000015;
      goto LAB_0091deb4;
    }
    local_1e8 = 6;
    piVar3 = (int *)thunk_FUN_016d4a50();
    if (piVar3 == (int *)0x0) {
      uVar1 = 1;
      local_cc = 6;
      goto LAB_0091de60;
    }
  }
  else {
    if (local_cc < 0) {
      uVar1 = 0;
LAB_0091de60:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar1,local_cc);
    }
    if (local_cc == 0) {
      piVar3 = (int *)&DAT_00000001;
      local_1e8 = 0;
    }
    else {
      piVar3 = (int *)thunk_FUN_016d4a50(local_cc);
      if (piVar3 == (int *)0x0) {
        uVar1 = 1;
        goto LAB_0091de60;
      }
      local_1e8 = local_cc;
    }
  }
  FUN_016dd1aa(piVar3,local_d0,local_cc);
  local_120 = &DAT_8000000c;
LAB_0091deb4:
  FUN_00919614(auStack_d4);
  local_11c = local_1e8;
  local_128 = 2;
  local_114 = local_cc;
  local_118 = piVar3;
  FUN_016dd1aa(local_e0,auStack_1e0,0x48);
  FUN_016dd1aa(auStack_98,local_198,0x70);
  if (*(int *)(param_2 + 0x48) != 4) {
    FUN_00919614(param_2);
    FUN_008f91a8((int *)(param_2 + 0x48));
  }
  FUN_016dd1aa(param_2,local_e0,0xb8);
  *param_1 = local_128;
  param_1[1] = uStack_124;
  param_1[2] = local_120;
  param_1[3] = local_11c;
  param_1[4] = local_118;
  param_1[5] = local_114;
  param_1[6] = local_110;
  param_1[7] = uStack_10c;
  param_1[8] = uStack_108;
  param_1[9] = uStack_104;
  param_1[10] = uStack_100;
  param_1[0xb] = uStack_fc;
  return;
}

