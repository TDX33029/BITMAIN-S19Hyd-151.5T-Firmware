// FUN_00919d00 @ 00919d00 size=976 calls_out=11 calls_in=0
// strings: no more values in next_value_seed; internal error in ValueDeserializer

void FUN_00919d00(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 local_338;
  undefined4 local_334;
  undefined1 auStack_330 [72];
  int local_2e8 [3];
  undefined4 local_2dc;
  undefined4 local_2d4;
  int *local_278;
  int *local_274;
  undefined4 local_270;
  int *local_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  int local_258;
  int local_254;
  int local_250;
  undefined1 auStack_238 [12];
  uint local_22c;
  undefined4 local_228;
  undefined4 local_224;
  int local_1f0 [28];
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined1 auStack_174 [4];
  undefined4 local_170;
  int local_16c;
  undefined1 auStack_128 [72];
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined1 auStack_98 [116];
  
  iVar2 = *(int *)(param_2 + 0x20);
  uVar6 = *(undefined4 *)(param_2 + 0x10);
  piVar5 = *(int **)(param_2 + 0x14);
  iVar4 = *(int *)(param_2 + 0x18);
  if ((iVar2 != 0) && (iVar3 = iVar2 * 4 + 4, iVar2 + iVar3 != -5)) {
    thunk_FUN_016d3fb4(*(int *)(param_2 + 0x1c) - iVar3);
  }
  local_268 = *(undefined4 *)(param_2 + 0x30);
  uStack_264 = *(undefined4 *)(param_2 + 0x34);
  uStack_260 = *(undefined4 *)(param_2 + 0x38);
  local_2e8[0] = 4;
  local_26c = piVar5 + iVar4 * 0x30;
  local_258 = -0x7fffffff;
  local_278 = piVar5;
  local_274 = piVar5;
  local_270 = uVar6;
  if (iVar4 != 0) {
    do {
      local_274 = piVar5 + 0x30;
      iVar2 = *piVar5;
      if (iVar2 == 4) break;
      FUN_016dd1aa(auStack_238,piVar5 + 0x1c,0x48);
      FUN_016dd1aa((uint)local_1f0 | 4,piVar5 + 1,0x6c);
      uVar6 = 0;
      if ((local_22c != 0x80000003) && (0x80000001 < local_22c)) {
        uVar6 = 1;
        local_338 = local_228;
        local_334 = local_224;
      }
      local_1f0[0] = iVar2;
      FUN_01676758(auStack_128,auStack_238);
      local_178 = local_334;
      local_17c = local_338;
      local_180 = uVar6;
      FUN_016dd1aa(auStack_174,auStack_128,0x48);
      bVar1 = true;
      if (local_16c == 5) {
        iVar2 = thunk_FUN_016dd50a(local_170,&DAT_00377f5d,5);
        bVar1 = false;
        if (iVar2 != 0) {
          bVar1 = true;
        }
      }
      FUN_00919614(auStack_174);
      FUN_016dd1aa(&local_e0,auStack_238,0x48);
      FUN_016dd1aa(auStack_98,local_1f0,0x70);
      if (local_2e8[0] != 4) {
        FUN_00919614(auStack_330);
        FUN_008f91a8(local_2e8);
      }
      FUN_016dd1aa(auStack_330,&local_e0,0xb8);
      iVar2 = local_2e8[0];
      if (!bVar1) {
        if (local_258 == -0x7fffffff) {
          local_2e8[0] = 4;
          if (iVar2 == 4) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("no more values in next_value_seed, internal error in ValueDeserializer",
                         0x8d,&DAT_0187eedc);
          }
          FUN_016dd1aa(local_1f0,auStack_330,0x48);
                    /* WARNING: Could not recover jumptable at 0x00919fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_00919ff0 + *(int *)(&UNK_00919ff0 + iVar2 * 4)))
                    (&UNK_00919ff0,local_2d4,*(int *)(&UNK_00919ff0 + iVar2 * 4),local_2dc);
          return;
        }
        FUN_009244cc(&local_e0,&DAT_00377f5d,5);
        *param_1 = local_e0;
        param_1[1] = iStack_dc;
        param_1[2] = iStack_d8;
        param_1[3] = iStack_d4;
        param_1[4] = iStack_d0;
        param_1[5] = iStack_cc;
LAB_0091a3b8:
        iVar2 = local_258;
        param_1[6] = local_c8;
        param_1[7] = iStack_c4;
        param_1[8] = iStack_c0;
        param_1[9] = iStack_bc;
        param_1[10] = iStack_b8;
        param_1[0xb] = iStack_b4;
        if ((-0x7fffffff < local_258) && (FUN_0094abc0(local_254,local_250), iVar2 != 0)) {
          thunk_FUN_016d3fb4(local_254);
        }
        FUN_009248d4(&local_278);
        goto LAB_0091a384;
      }
      FUN_0091a568(&local_e0,auStack_330);
      if (local_e0 != 2) {
        *param_1 = local_e0;
        param_1[1] = iStack_dc;
        param_1[2] = iStack_d8;
        param_1[3] = iStack_d4;
        param_1[4] = iStack_d0;
        param_1[5] = iStack_cc;
        goto LAB_0091a3b8;
      }
      piVar5 = local_274;
    } while (local_274 != local_26c);
  }
  *param_1 = 2;
  iVar2 = local_258;
  if (local_258 == -0x7fffffff) {
    iVar2 = -0x80000000;
  }
  param_1[1] = iVar2;
  param_1[2] = local_254;
  param_1[3] = local_250;
  FUN_009248d4(&local_278);
LAB_0091a384:
  if (local_2e8[0] != 4) {
    FUN_00919614(auStack_330);
    FUN_008f91a8(local_2e8);
  }
  return;
}

