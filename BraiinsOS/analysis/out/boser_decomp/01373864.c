// FUN_01373864 @ 01373864 size=640 calls_out=10 calls_in=3
// strings: assertion failed: payload_len_be[0..5].iter().all(|b| *b == 0)event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/headers.rs:155

void FUN_01373864(int *param_1,int param_2,undefined4 param_3,int *param_4)

{
  char *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
  int local_e8;
  undefined1 local_e4;
  undefined1 local_e3;
  int local_e0;
  int local_dc;
  uint local_d8;
  int iStack_d4;
  int local_d0;
  uint local_cc;
  uint uStack_c8;
  int iStack_c4;
  int local_c0;
  uint local_30 [3];
  
  local_e4 = *(undefined1 *)(param_2 + 0xa8);
  iVar6 = *(int *)(param_2 + 0xa0);
  local_e3 = 5;
  uVar8 = *(uint *)(param_2 + 0xa4);
  local_e8 = iVar6;
  FUN_01bed4e2(&local_d0,param_2,0xa0);
  FUN_01373b64(&local_e0,&local_d0,param_3);
  uVar11 = *(uint *)(*param_4 + 4);
  FUN_013b6efc(&local_e8,param_4);
  uVar10 = *(uint *)(*param_4 + 4);
  local_30[0] = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                uVar8 >> 0x18;
  uVar8 = uVar10 ^ 0x7fffffff;
  if ((uint)param_4[1] < uVar8) {
    uVar8 = param_4[1];
  }
  if (uVar8 < 4) {
    local_d0 = 4;
    local_cc = uVar8;
                    /* WARNING: Subroutine does not return */
    FUN_01284540(&local_d0);
  }
  puVar7 = local_30;
  uVar8 = 4;
  do {
    uVar14 = FUN_013b1200(*param_4,param_4[1]);
    uVar5 = (uint)((ulonglong)uVar14 >> 0x20);
    if (uVar8 <= uVar5) {
      uVar5 = uVar8;
    }
    FUN_01bed4e2((int)uVar14,puVar7,uVar5);
    FUN_013b1198(param_4,uVar5);
    uVar3 = local_d8;
    puVar7 = (uint *)((int)puVar7 + uVar5);
    uVar8 = uVar8 - uVar5;
  } while (uVar8 != 0);
  uVar8 = *(uint *)(*param_4 + 4) ^ 0x7fffffff;
  if ((uint)param_4[1] < uVar8) {
    uVar8 = param_4[1];
  }
  if (uVar8 < local_d8) {
    FUN_01375774(param_4,&local_e0,uVar8);
    local_d0 = local_e0;
    local_cc = local_dc;
    uStack_c8 = local_d8;
    iStack_c4 = iStack_d4;
    local_c0 = iVar6;
  }
  else {
    if (local_d8 != 0) {
      uVar5 = local_d8;
      iVar6 = local_dc;
      do {
        uVar14 = FUN_013b1200(*param_4,param_4[1]);
        uVar9 = (uint)((ulonglong)uVar14 >> 0x20);
        if (uVar5 <= uVar9) {
          uVar9 = uVar5;
        }
        FUN_01bed4e2((int)uVar14,iVar6,uVar9);
        FUN_013b1198(param_4,uVar9);
        iVar6 = iVar6 + uVar9;
        uVar5 = uVar5 - uVar9;
      } while (uVar5 != 0);
    }
    local_d0 = 0;
  }
  param_4 = (int *)*param_4;
  iVar6 = 0;
  local_30[0] = 0;
  uVar5 = param_4[1];
  uVar10 = uVar5 - uVar10;
  local_30[1] = uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                uVar10 >> 0x18;
  puVar4 = (undefined2 *)((uint)local_30 | 5);
  while (iVar6 != 5) {
    pcVar1 = (char *)((int)local_30 + iVar6);
    iVar6 = iVar6 + 1;
    if (*pcVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: payload_len_be[0..5].iter().all(|b| *b == 0)event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/headers.rs:155"
                   ,0x3e,&DAT_01ce99cc);
    }
  }
  uVar10 = uVar11 + 3;
  bVar13 = 0xfffffffb < uVar11;
  bVar12 = uVar11 == 0xfffffffc;
  if (uVar11 < 0xfffffffd) {
    bVar13 = uVar5 <= uVar10;
    bVar12 = uVar10 == uVar5;
  }
  if (!bVar13 || bVar12) {
    iVar6 = *param_4;
    uVar2 = *(undefined1 *)(puVar4 + 1);
    *(undefined2 *)(iVar6 + uVar11) = *puVar4;
    *(undefined1 *)((undefined2 *)(iVar6 + uVar11) + 1) = uVar2;
    if (local_d0 != 0) {
      uVar11 = uVar11 + 4;
      if ((uint)param_4[1] <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar11,param_4[1],&DAT_01ce99ec);
      }
      *(char *)(*param_4 + uVar11) = *(char *)(*param_4 + uVar11) + -4;
    }
    *param_1 = local_d0;
    param_1[1] = local_cc;
    param_1[2] = uStack_c8;
    param_1[3] = iStack_c4;
    param_1[4] = local_c0;
    if (uVar3 <= uVar8) {
      (**(code **)(local_e0 + 0x10))(&iStack_d4,local_dc,local_d8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012faff4(uVar11,uVar10,uVar5,&DAT_01ce99dc);
}

