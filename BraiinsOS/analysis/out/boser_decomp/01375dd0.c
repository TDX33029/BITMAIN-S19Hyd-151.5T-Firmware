// FUN_01375dd0 @ 01375dd0 size=516 calls_out=9 calls_in=3
// strings: assertion failed: payload_len_be[0..5].iter().all(|b| *b == 0)event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/headers.rs:155

void FUN_01375dd0(int *param_1,int param_2,undefined4 param_3,int *param_4)

{
  char *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  undefined8 uVar13;
  int local_e8;
  undefined1 local_e4;
  undefined1 local_e3;
  int local_e0;
  int local_dc;
  uint local_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  uint uStack_c8;
  int iStack_c4;
  int local_c0;
  char local_30 [4];
  uint local_2c;
  
  local_e4 = *(undefined1 *)(param_2 + 0xac);
  iVar8 = *(int *)(param_2 + 0xa8);
  local_e3 = 1;
  local_e8 = iVar8;
  FUN_01bed4e2(&local_d0,param_2,0xa0);
  FUN_01373b64(&local_e0,&local_d0,param_3);
  uVar10 = *(uint *)(*param_4 + 4);
  FUN_013b6efc(&local_e8,param_4);
  uVar3 = local_d8;
  uVar9 = *(uint *)(*param_4 + 4);
  uVar7 = uVar9 ^ 0x7fffffff;
  if ((uint)param_4[1] < uVar7) {
    uVar7 = param_4[1];
  }
  if (uVar7 < local_d8) {
    FUN_01375774(param_4,&local_e0,uVar7);
    local_d0 = local_e0;
    iStack_cc = local_dc;
    uStack_c8 = local_d8;
    iStack_c4 = iStack_d4;
    local_c0 = iVar8;
  }
  else {
    if (local_d8 != 0) {
      iVar8 = local_dc;
      uVar5 = local_d8;
      do {
        uVar13 = FUN_013b1200(*param_4,param_4[1]);
        uVar6 = (uint)((ulonglong)uVar13 >> 0x20);
        if (uVar5 <= uVar6) {
          uVar6 = uVar5;
        }
        FUN_01bed4e2((int)uVar13,iVar8,uVar6);
        FUN_013b1198(param_4,uVar6);
        iVar8 = iVar8 + uVar6;
        uVar5 = uVar5 - uVar6;
      } while (uVar5 != 0);
    }
    local_d0 = 0;
  }
  param_4 = (int *)*param_4;
  iVar8 = 0;
  local_30[0] = '\0';
  local_30[1] = '\0';
  local_30[2] = '\0';
  local_30[3] = '\0';
  uVar5 = param_4[1];
  uVar9 = uVar5 - uVar9;
  local_2c = uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
             uVar9 >> 0x18;
  puVar4 = (undefined2 *)((uint)local_30 | 5);
  while (iVar8 != 5) {
    pcVar1 = local_30 + iVar8;
    iVar8 = iVar8 + 1;
    if (*pcVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: payload_len_be[0..5].iter().all(|b| *b == 0)event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/headers.rs:155"
                   ,0x3e,&DAT_01ce99cc);
    }
  }
  uVar9 = uVar10 + 3;
  bVar12 = 0xfffffffb < uVar10;
  bVar11 = uVar10 == 0xfffffffc;
  if (uVar10 < 0xfffffffd) {
    bVar12 = uVar5 <= uVar9;
    bVar11 = uVar9 == uVar5;
  }
  if (!bVar12 || bVar11) {
    iVar8 = *param_4;
    uVar2 = *(undefined1 *)(puVar4 + 1);
    *(undefined2 *)(iVar8 + uVar10) = *puVar4;
    *(undefined1 *)((undefined2 *)(iVar8 + uVar10) + 1) = uVar2;
    if (local_d0 != 0) {
      uVar10 = uVar10 + 4;
      if ((uint)param_4[1] <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar10,param_4[1],&DAT_01ce99ec);
      }
      *(char *)(*param_4 + uVar10) = *(char *)(*param_4 + uVar10) + -4;
    }
    *param_1 = local_d0;
    param_1[1] = iStack_cc;
    param_1[2] = uStack_c8;
    param_1[3] = iStack_c4;
    param_1[4] = local_c0;
    if (uVar3 <= uVar7) {
      (**(code **)(local_e0 + 0x10))(&iStack_d4,local_dc,local_d8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012faff4(uVar10,uVar9,uVar5,&DAT_01ce99dc);
}

