// FUN_01237d5c @ 01237d5c size=504 calls_out=8 calls_in=2
// strings: 

void FUN_01237d5c(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_2a8 [112];
  undefined1 auStack_238 [12];
  uint local_22c;
  undefined4 uStack_228;
  int iStack_224;
  int local_1f0 [29];
  undefined4 local_17c;
  undefined4 uStack_178;
  int iStack_174;
  undefined1 auStack_170 [4];
  undefined4 local_16c;
  int local_168;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined1 *local_120;
  int local_11c;
  uint local_118;
  int local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 auStack_e0 [72];
  undefined1 auStack_98 [116];
  
  piVar4 = *(int **)(param_2 + 0xbc);
  if (piVar4 == *(int **)(param_2 + 0xc4)) {
LAB_01237d90:
    *param_1 = 2;
    param_1[2] = &DAT_80000016;
    return;
  }
  iVar5 = *piVar4;
  *(int **)(param_2 + 0xbc) = piVar4 + 0x30;
  if (iVar5 == 4) goto LAB_01237d90;
  FUN_01bed4e2(auStack_238,piVar4 + 0x1c,0x48);
  FUN_01bed4e2(auStack_2a8,piVar4 + 1,0x6c);
  local_1f0[0] = iVar5;
  FUN_01bed4e2((uint)local_1f0 | 4,auStack_2a8,0x6c);
  local_17c = 0;
  if ((local_22c != 0x80000003) && (0x80000001 < local_22c)) {
    local_17c = 1;
  }
  FUN_01a60910(&local_128,auStack_238);
  uStack_178 = uStack_228;
  iStack_174 = iStack_224;
  FUN_01bed4e2(auStack_170,&local_128,0x48);
  if (local_168 == 6) {
    iVar5 = 6;
    iVar1 = thunk_FUN_01bed842(local_16c,&DAT_004e94a9,6);
    if (iVar1 == 0) {
      local_120 = (undefined1 *)0x80000015;
      local_118 = local_22c;
      goto LAB_01237ed8;
    }
    uVar2 = thunk_FUN_01be5118(6);
    iStack_224 = iVar5;
    if (uVar2 == 0) {
LAB_01237f50:
      uVar3 = 1;
LAB_01237e84:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar3,iStack_224);
    }
  }
  else {
    if (local_168 < 0) {
      uVar3 = 0;
      goto LAB_01237e84;
    }
    if (local_168 == 0) {
      uVar2 = 1;
      iVar5 = 0;
    }
    else {
      uVar2 = FUN_01298504(local_168,1);
      if (uVar2 == 0) {
        iStack_224 = local_168;
        goto LAB_01237f50;
      }
      iVar5 = local_168;
    }
  }
  FUN_01bed4e2(uVar2,local_16c,local_168);
  local_120 = &DAT_8000000c;
  local_118 = uVar2;
LAB_01237ed8:
  FUN_01272af8(auStack_170);
  local_128 = 2;
  local_114 = local_168;
  local_11c = iVar5;
  FUN_01bed4e2(auStack_e0,auStack_238,0x48);
  FUN_01bed4e2(auStack_98,local_1f0,0x70);
  FUN_01237bd0(param_2);
  FUN_01bed4e2(param_2,auStack_e0,0xb8);
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

