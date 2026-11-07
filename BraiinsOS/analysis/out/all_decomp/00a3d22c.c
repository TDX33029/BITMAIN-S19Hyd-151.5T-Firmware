// FUN_00a3d22c @ 00a3d22c size=1060 calls_out=11 calls_in=1
// strings: licenseevent bosminer-plus/bosminer-plus/src/bos_mgmt.rs:1513event bosminer-plus/bosminer-plus/src/bos_mgmt.rs:1497event bosminer-plus/bosminer-plus/src/bos_mgmt.rs:1559event bosminer-plus/bosminer-plus/src/bos_mgmt.rs:1534event bosminer-plus/bosminer-plus/src/bos_mgmt.rs:1575 | licenseevent bosminer-plus/bosminer-plus/src/bos_mgmt.rs:1513event bosminer-plus/bosminer-plus/src/bos_mgmt.rs:1497event bosminer-plus/bosminer-plus/src/bos_mgmt.rs:1559event bosminer-plus/bosminer-plus/src/bos_mgmt.rs:1534event bosminer-plus/bosminer-plus/src/bos_mgmt.rs:1575 | no more values in next_value_seed; internal error in ValueDeserializer

/* WARNING: Removing unreachable block (ram,0x00a3d9d4) */

void FUN_00a3d22c(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int local_32c;
  int local_328;
  undefined4 local_318;
  undefined4 local_314;
  undefined1 auStack_310 [72];
  int local_2c8 [3];
  undefined4 local_2bc;
  undefined4 local_2b4;
  int *local_258;
  int *local_254;
  int local_250;
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
  iVar6 = *(int *)(param_2 + 0x10);
  piVar7 = *(int **)(param_2 + 0x14);
  iVar4 = *(int *)(param_2 + 0x18);
  if ((iVar2 != 0) && (iVar3 = iVar2 * 4 + 4, iVar2 + iVar3 != -5)) {
    thunk_FUN_016d3fb4(*(int *)(param_2 + 0x1c) - iVar3);
  }
  local_2c8[0] = 4;
  local_248 = *(undefined4 *)(param_2 + 0x30);
  uStack_244 = *(undefined4 *)(param_2 + 0x34);
  uStack_240 = *(undefined4 *)(param_2 + 0x38);
  local_24c = piVar7 + iVar4 * 0x30;
  local_258 = piVar7;
  local_250 = iVar6;
  if (iVar4 == 0) {
    local_254 = piVar7;
  }
  else {
    piVar8 = piVar7;
    do {
      local_254 = piVar8 + 0x30;
      iVar2 = *piVar8;
      piVar7 = local_24c;
      if (iVar2 == 4) break;
      FUN_016dd1aa(auStack_238,piVar8 + 0x1c,0x48);
      FUN_016dd1aa((uint)local_1f0 | 4,piVar8 + 1,0x6c);
      uVar5 = 0;
      if ((local_22c != 0x80000003) && (0x80000001 < local_22c)) {
        uVar5 = 1;
        local_318 = local_228;
        local_314 = local_224;
      }
      local_1f0[0] = iVar2;
      FUN_01676758(auStack_128,auStack_238);
      local_178 = local_314;
      local_17c = local_318;
      local_180 = uVar5;
      FUN_016dd1aa(auStack_174,auStack_128,0x48);
      bVar1 = true;
      if (local_16c == 7) {
        iVar2 = thunk_FUN_016dd50a(local_170,
                                   "licenseevent bosminer-plus/bosminer-plus/src/bos_mgmt.rs:1513event bosminer-plus/bosminer-plus/src/bos_mgmt.rs:1497event bosminer-plus/bosminer-plus/src/bos_mgmt.rs:1559event bosminer-plus/bosminer-plus/src/bos_mgmt.rs:1534event bosminer-plus/bosminer-plus/src/bos_mgmt.rs:1575"
                                   ,7);
        bVar1 = false;
        if (iVar2 != 0) {
          bVar1 = true;
        }
      }
      FUN_00a33a48(&local_180);
      FUN_016dd1aa(&local_e0,auStack_238,0x48);
      FUN_016dd1aa(auStack_98,local_1f0,0x70);
      if (local_2c8[0] != 4) {
        FUN_00f4b664(auStack_310);
        FUN_00a3c980(local_2c8);
      }
      FUN_016dd1aa(auStack_310,&local_e0,0xb8);
      iVar2 = local_2c8[0];
      if (!bVar1) {
        local_2c8[0] = 4;
        if (iVar2 == 4) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478("no more values in next_value_seed, internal error in ValueDeserializer",0x8d
                       ,&DAT_0187eedc);
        }
        FUN_016dd1aa(local_1f0,auStack_310,0x48);
                    /* WARNING: Could not recover jumptable at 0x00a3d548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_00a3d54c + *(int *)(&UNK_00a3d54c + iVar2 * 4)))
                  (&UNK_00a3d54c,local_2b4,*(int *)(&UNK_00a3d54c + iVar2 * 4),local_2bc);
        return;
      }
      FUN_00a3cdd8(&local_e0,auStack_310);
      if (local_e0 != 2) {
        *param_1 = local_e0;
        param_1[1] = iStack_dc;
        param_1[2] = iStack_d8;
        param_1[3] = iStack_d4;
        param_1[4] = iStack_d0;
        param_1[5] = iStack_cc;
        param_1[6] = local_c8;
        param_1[7] = iStack_c4;
        param_1[8] = iStack_c0;
        param_1[9] = iStack_bc;
        param_1[10] = iStack_b8;
        param_1[0xb] = iStack_b4;
        iVar2 = ((uint)((int)local_24c - (int)local_254) >> 6) * -0x55555555 + 1;
        piVar7 = local_254;
        while (iVar2 = iVar2 + -1, iVar2 != 0) {
          FUN_00a85df8(piVar7);
          piVar7 = piVar7 + 0x30;
        }
        goto LAB_00a3d958;
      }
      piVar7 = local_24c;
      piVar8 = local_254;
    } while (local_254 != local_24c);
  }
  *param_1 = 2;
  param_1[4] = 0x3b9aca01;
  param_1[2] = local_328;
  param_1[3] = local_32c;
  iVar2 = ((uint)((int)piVar7 - (int)local_254) >> 6) * -0x55555555 + 1;
  piVar7 = local_254;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_00a85df8(piVar7);
    piVar7 = piVar7 + 0x30;
  }
LAB_00a3d958:
  if (local_250 != 0) {
    thunk_FUN_016d3fb4(local_258);
  }
  if (local_2c8[0] != 4) {
    FUN_00f4b664(auStack_310);
    FUN_00a3c980(local_2c8);
  }
  return;
}

