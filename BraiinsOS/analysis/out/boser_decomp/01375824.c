// FUN_01375824 @ 01375824 size=484 calls_out=8 calls_in=3
// strings: assertion failed: payload_len_be[0..5].iter().all(|b| *b == 0)event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/headers.rs:155

void FUN_01375824(int *param_1,int *param_2,int *param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  undefined8 uVar13;
  int local_60;
  undefined2 local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  char local_30 [4];
  uint local_2c;
  
  iVar6 = param_2[4];
  local_5c = 0x904;
  local_58 = *param_2;
  local_54 = param_2[1];
  local_50 = param_2[2];
  iStack_4c = param_2[3];
  uVar9 = *(uint *)(*param_3 + 4);
  local_60 = iVar6;
  FUN_013b6efc(&local_60,param_3);
  uVar3 = local_50;
  uVar10 = *(uint *)(*param_3 + 4);
  uVar8 = uVar10 ^ 0x7fffffff;
  if ((uint)param_3[1] < uVar8) {
    uVar8 = param_3[1];
  }
  if (uVar8 < local_50) {
    FUN_01375774(param_3,&local_58,uVar8);
    local_48 = local_58;
    iStack_44 = local_54;
    uStack_40 = local_50;
    iStack_3c = iStack_4c;
    local_38 = iVar6;
  }
  else {
    if (local_50 != 0) {
      iVar6 = local_54;
      uVar5 = local_50;
      do {
        uVar13 = FUN_013b1200(*param_3,param_3[1]);
        uVar7 = (uint)((ulonglong)uVar13 >> 0x20);
        if (uVar5 <= uVar7) {
          uVar7 = uVar5;
        }
        FUN_01bed4e2((int)uVar13,iVar6,uVar7);
        FUN_013b1198(param_3,uVar7);
        iVar6 = iVar6 + uVar7;
        uVar5 = uVar5 - uVar7;
      } while (uVar5 != 0);
    }
    local_48 = 0;
  }
  param_3 = (int *)*param_3;
  iVar6 = 0;
  local_30[0] = '\0';
  local_30[1] = '\0';
  local_30[2] = '\0';
  local_30[3] = '\0';
  uVar5 = param_3[1];
  uVar10 = uVar5 - uVar10;
  local_2c = uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
             uVar10 >> 0x18;
  puVar4 = (undefined2 *)((uint)local_30 | 5);
  while (iVar6 != 5) {
    pcVar1 = local_30 + iVar6;
    iVar6 = iVar6 + 1;
    if (*pcVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: payload_len_be[0..5].iter().all(|b| *b == 0)event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/headers.rs:155"
                   ,0x3e,&DAT_01ce99cc);
    }
  }
  uVar10 = uVar9 + 3;
  bVar12 = 0xfffffffb < uVar9;
  bVar11 = uVar9 == 0xfffffffc;
  if (uVar9 < 0xfffffffd) {
    bVar12 = uVar5 <= uVar10;
    bVar11 = uVar10 == uVar5;
  }
  if (!bVar12 || bVar11) {
    iVar6 = *param_3;
    uVar2 = *(undefined1 *)(puVar4 + 1);
    *(undefined2 *)(iVar6 + uVar9) = *puVar4;
    *(undefined1 *)((undefined2 *)(iVar6 + uVar9) + 1) = uVar2;
    if (local_48 != 0) {
      uVar9 = uVar9 + 4;
      if ((uint)param_3[1] <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar9,param_3[1],&DAT_01ce99ec);
      }
      *(char *)(*param_3 + uVar9) = *(char *)(*param_3 + uVar9) + -4;
    }
    *param_1 = local_48;
    param_1[1] = iStack_44;
    param_1[2] = uStack_40;
    param_1[3] = iStack_3c;
    param_1[4] = local_38;
    if (uVar3 <= uVar8) {
      (**(code **)(local_58 + 0x10))(&iStack_4c,local_54,local_50);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012faff4(uVar9,uVar10,uVar5,&DAT_01ce99dc);
}

