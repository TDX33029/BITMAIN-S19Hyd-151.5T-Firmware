// FUN_0091aa64 @ 0091aa64 size=1960 calls_out=12 calls_in=0
// strings: no more values in next_value_seed; internal error in ValueDeserializer

/* WARNING: Removing unreachable block (ram,0x0091b8e4) */
/* WARNING: Removing unreachable block (ram,0x0091b698) */
/* WARNING: Removing unreachable block (ram,0x0091b930) */
/* WARNING: Removing unreachable block (ram,0x0091b994) */
/* WARNING: Removing unreachable block (ram,0x0091b7e0) */
/* WARNING: Removing unreachable block (ram,0x0091b7e8) */
/* WARNING: Removing unreachable block (ram,0x0091b718) */
/* WARNING: Removing unreachable block (ram,0x0091b614) */
/* WARNING: Removing unreachable block (ram,0x0091b92c) */

void FUN_0091aa64(int *param_1,int param_2)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int local_398;
  int local_340;
  undefined4 local_318;
  undefined4 local_314;
  undefined1 auStack_310 [72];
  int local_2c8 [3];
  undefined4 local_2bc;
  undefined4 local_2b4;
  undefined4 local_2a0;
  int *local_258;
  int *local_254;
  undefined4 local_250;
  int *local_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined1 auStack_238 [12];
  uint local_22c;
  undefined4 local_228;
  undefined4 local_224;
  int local_1f0 [28];
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined1 auStack_174 [4];
  int *local_170;
  int local_16c;
  undefined1 auStack_128 [72];
  int local_e0;
  undefined4 local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined1 auStack_98 [116];
  
  iVar3 = *(int *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x10);
  piVar5 = *(int **)(param_2 + 0x14);
  iVar6 = *(int *)(param_2 + 0x18);
  if ((iVar3 != 0) && (iVar4 = iVar3 * 4 + 4, iVar3 + iVar4 != -5)) {
    thunk_FUN_016d3fb4(*(int *)(param_2 + 0x1c) - iVar4);
  }
  local_248 = *(undefined4 *)(param_2 + 0x30);
  uStack_244 = *(undefined4 *)(param_2 + 0x34);
  uStack_240 = *(undefined4 *)(param_2 + 0x38);
  local_2c8[0] = 4;
  local_24c = piVar5 + iVar6 * 0x30;
  local_258 = piVar5;
  local_250 = uVar7;
  if (iVar6 != 0) {
    uVar8 = 0x80000000;
LAB_0091abb0:
    local_254 = piVar5 + 0x30;
    iVar3 = *piVar5;
    if (iVar3 == 4) goto LAB_0091b69c;
    FUN_016dd1aa(auStack_238,piVar5 + 0x1c,0x48);
    FUN_016dd1aa((uint)local_1f0 | 4,piVar5 + 1,0x6c);
    uVar7 = 0;
    if ((local_22c != 0x80000003) && (0x80000001 < local_22c)) {
      uVar7 = 1;
      local_318 = local_228;
      local_314 = local_224;
    }
    local_1f0[0] = iVar3;
    FUN_01676758(auStack_128,auStack_238);
    local_178 = local_314;
    local_17c = local_318;
    local_180 = uVar7;
    FUN_016dd1aa(auStack_174,auStack_128,0x48);
    if (local_16c == 8) {
      iVar3 = thunk_FUN_016dd50a(local_170,&DAT_00569fa0,8);
      if (iVar3 != 0) goto LAB_0091acc0;
      uVar7 = 2;
    }
    else if (local_16c == 4) {
      if (*local_170 != 0x74726f70) goto LAB_0091acc0;
      uVar7 = 1;
    }
    else if ((local_16c == 2) && ((short)*local_170 == 0x7069)) {
      uVar7 = 0;
    }
    else {
LAB_0091acc0:
      uVar7 = 3;
    }
    FUN_00919614(auStack_174);
    FUN_016dd1aa(&local_e0,auStack_238,0x48);
    FUN_016dd1aa(auStack_98,local_1f0,0x70);
    if (local_2c8[0] != 4) {
      FUN_00919614(auStack_310);
      FUN_008f91a8(local_2c8);
    }
    FUN_016dd1aa(auStack_310,&local_e0,0xb8);
    iVar3 = local_2c8[0];
    switch(uVar7) {
    case 0:
      if (uVar8 == 0x80000000) {
        FUN_0091bba4(&local_e0,auStack_310);
        local_398 = local_d4;
        if (local_e0 == 2) {
          local_340 = local_d8;
          uVar8 = local_dc;
          goto LAB_0091aba0;
        }
        param_1[4] = local_d0;
        param_1[5] = iStack_cc;
        param_1[6] = local_c8;
        param_1[7] = iStack_c4;
        param_1[8] = local_c0;
        param_1[9] = iStack_bc;
        param_1[10] = iStack_b8;
        param_1[0xb] = iStack_b4;
        param_1[2] = local_d8;
        *param_1 = local_e0;
        param_1[1] = local_dc;
        uVar8 = 0;
        param_1[3] = local_d4;
      }
      else {
        FUN_009244cc(&local_e0,"ip",2);
LAB_0091b964:
        *param_1 = local_e0;
        param_1[1] = local_dc;
        param_1[2] = local_d8;
        param_1[3] = local_d4;
        param_1[4] = local_d0;
        param_1[5] = iStack_cc;
        param_1[6] = local_c8;
        param_1[7] = iStack_c4;
        param_1[8] = local_c0;
        param_1[9] = iStack_bc;
        param_1[10] = iStack_b8;
        param_1[0xb] = iStack_b4;
      }
      bVar1 = true;
      goto LAB_0091b7ec;
    case 1:
      local_2c8[0] = 4;
      if (iVar3 != 4) {
        FUN_016dd1aa(local_1f0,auStack_310,0x48);
                    /* WARNING: Could not recover jumptable at 0x0091af3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_0091af40 + *(int *)(&UNK_0091af40 + iVar3 * 4)))
                  (&UNK_0091af40,local_2b4,*(int *)(&UNK_0091af40 + iVar3 * 4),local_2bc);
        return;
      }
      break;
    case 2:
      local_2c8[0] = 4;
      if (iVar3 != 4) {
        FUN_016dd1aa(local_1f0,auStack_310,0x48);
                    /* WARNING: Could not recover jumptable at 0x0091ae10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_0091ae14 + *(int *)(&UNK_0091ae14 + iVar3 * 4)))
                  (local_2a0,local_2b4,&UNK_0091ae14,local_2bc);
        return;
      }
      break;
    case 3:
      FUN_0091a568(&local_e0,auStack_310);
      if (local_e0 != 2) goto LAB_0091b964;
LAB_0091aba0:
      piVar5 = local_254;
      if (local_254 == local_24c) goto LAB_0091b69c;
      goto LAB_0091abb0;
    }
    local_2c8[0] = 4;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("no more values in next_value_seed, internal error in ValueDeserializer",0x8d,
                 &DAT_0187eedc);
  }
  uVar8 = 0;
  bVar1 = true;
  local_254 = piVar5;
LAB_0091b5d4:
  FUN_009243d8(&local_e0,"ip",2);
  if (local_e0 == 2) {
    local_398 = local_d4;
    uVar9 = local_dc;
    iVar3 = local_d8;
    goto LAB_0091b6dc;
  }
  bVar1 = true;
  param_1[4] = local_d0;
  param_1[5] = iStack_cc;
  param_1[6] = local_c8;
  param_1[7] = iStack_c4;
  param_1[8] = local_c0;
  param_1[9] = iStack_bc;
  param_1[10] = iStack_b8;
  param_1[0xb] = iStack_b4;
  *param_1 = local_e0;
  param_1[1] = local_dc;
  param_1[2] = local_d8;
  uVar8 = 0;
  param_1[3] = local_d4;
LAB_0091b7ec:
  if (bVar1 && (uVar8 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_340);
  }
  FUN_009248d4(&local_258);
LAB_0091b808:
  if (local_2c8[0] != 4) {
    FUN_00919614(auStack_310);
    FUN_008f91a8(local_2c8);
  }
  return;
LAB_0091b69c:
  bVar1 = uVar8 == 0x80000000;
  if (uVar8 == 0x80000000) {
    goto LAB_0091b5d4;
  }
  uVar9 = uVar8;
  iVar3 = local_340;
LAB_0091b6dc:
  FUN_009243d8(&local_e0,&DAT_00569248,4);
  uVar2 = (undefined2)local_dc;
  if (local_e0 == 2) {
    FUN_009243d8(&local_e0,&DAT_00569fa0,8);
    if (local_e0 == 2) {
      param_1[4] = local_dc;
      *(undefined2 *)(param_1 + 7) = uVar2;
      *param_1 = 2;
      param_1[1] = uVar9;
      param_1[2] = iVar3;
      param_1[3] = local_398;
      param_1[5] = local_d8;
      param_1[6] = local_d4;
      FUN_009248d4(&local_258);
      goto LAB_0091b808;
    }
    param_1[4] = local_d0;
    param_1[5] = iStack_cc;
    param_1[6] = local_c8;
    param_1[7] = iStack_c4;
    param_1[8] = local_c0;
    param_1[9] = iStack_bc;
    param_1[10] = iStack_b8;
    param_1[0xb] = iStack_b4;
    *param_1 = local_e0;
    param_1[1] = local_dc;
    param_1[2] = local_d8;
    param_1[3] = local_d4;
  }
  else {
    FUN_016dd1aa((int)param_1 + 6,(int)&local_dc + 2,0x2a);
    *(undefined2 *)(param_1 + 1) = (undefined2)local_dc;
    *param_1 = local_e0;
  }
  if (uVar9 != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  goto LAB_0091b7ec;
}

