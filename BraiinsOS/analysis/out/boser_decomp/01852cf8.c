// FUN_01852cf8 @ 01852cf8 size=988 calls_out=11 calls_in=1
// strings: reqwest::retry | reqwest::retry | could retry! | shouldn't retry! | reqwest::retry | reqwest::retry

void FUN_01852cf8(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_158;
  int local_154;
  int local_150 [15];
  ushort local_114;
  char *local_c0;
  int *local_bc;
  int *local_b8;
  undefined4 local_b4;
  undefined *local_b0;
  
  piVar5 = param_2 + 0x6a;
  while( true ) {
    while ((char)*piVar5 != '\0') {
      if ((char)*piVar5 == '\x01') {
        cVar1 = *(char *)((int)param_2 + 0x1a9);
        *(undefined1 *)((int)param_2 + 0x1a9) = 0;
        if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("`Ready` polled after completionevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/transport/service/grpc_timeout.rs:43"
                       ,0x1f,&DAT_01d2cd90);
        }
        FUN_01705ae8(piVar5);
        *(char *)piVar5 = '\x02';
      }
      else {
        iVar4 = *param_2;
        iVar6 = param_2[1];
        *param_2 = 3;
        param_2[1] = 0;
        if (iVar4 == 3 && iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c(&DAT_0056bc28,0x20,&DAT_01d1f0a0);
        }
        local_158 = iVar4;
        local_154 = iVar6;
        FUN_01bed4e2(local_150,param_2 + 2,0x90);
        FUN_0182dcf0(&local_c0,param_2 + 0x62,&local_158);
        if (*param_2 != 3 || param_2[1] != 0) {
          FUN_01852704(param_2);
        }
        FUN_01bed4e2(param_2,&local_c0,0x98);
        FUN_01bed4e2(&local_c0,&local_158,0x98);
        iVar4 = FUN_0185657c(param_2 + 0x26,&local_c0);
        FUN_01705ae8(piVar5);
        *(undefined1 *)(param_2 + 0x6a) = 0;
        param_2[0x6b] = iVar4;
        param_2[0x6c] = (int)&DAT_01d1f190;
      }
    }
    (**(code **)(param_2[0x6c] + 0xc))(&local_c0,param_2[0x6b],param_3);
    if (local_c0 == (char *)0x4 && local_bc == (int *)0x0) {
      *param_1 = 4;
      param_1[1] = 0;
      return;
    }
    FUN_01bed4e2(&local_158,&local_c0,0x68);
    if (*param_2 == 3 && param_2[1] == 0) goto LAB_01853014;
    iVar4 = param_2[0x62];
    pcVar3 = (char *)((uint)local_114 << 0x10);
    if (local_158 == 3 && local_154 == 0) {
      pcVar3 = (char *)0x1;
    }
    if (iVar4 != 2) break;
    local_c0 = pcVar3;
    local_bc = local_150;
    local_b8 = param_2;
    iVar4 = (**(code **)(param_2[100] + 0xc))
                      (param_2[99] + (*(int *)(param_2[100] + 8) - 1U & 0xfffffff8) + 8,&local_c0);
    if (iVar4 == 0) goto joined_r0x01852f78;
    if (4 < DAT_01d51b00) {
      local_b4 = 0xe;
      local_bc = (int *)&DAT_0000000e;
      local_b0 = &DAT_01d1e3a4;
      local_b8 = (int *)0x50c837;
      local_c0 = "reqwest::retry";
      FUN_015fb650("could retry!",0x19,5,&local_c0);
    }
    if ((param_2[0x65] != 0) && (iVar4 = FUN_01aa5c48(param_2[0x65] + 8), iVar4 == 0)) {
      if (3 < DAT_01d51b00) {
        local_b4 = 0xe;
        local_bc = (int *)&DAT_0000000e;
        local_b0 = &DAT_01d1e3b4;
        local_b8 = (int *)0x50c837;
        local_c0 = "reqwest::retry";
        FUN_015fb650("retryable but could not withdraw from budget",0x59,4,&local_c0);
      }
      goto LAB_01853014;
    }
    param_2[0x67] = param_2[0x67] + 1;
    FUN_01705ae8(piVar5);
    *(undefined2 *)(param_2 + 0x6a) = 0x101;
    FUN_018531a4(&local_158);
  }
  if ((iVar4 != 0 && ((uint)pcVar3 & 1) != 0) && (*(int *)(local_150[0] + 0x5c) != 0)) {
    (**(code **)(*(int *)(local_150[0] + 0x60) + 0x18))();
  }
joined_r0x01852f78:
  if (4 < DAT_01d51b00) {
    local_b4 = 0xe;
    local_bc = (int *)&DAT_0000000e;
    local_b0 = &DAT_01d1e394;
    local_b8 = (int *)0x50c837;
    local_c0 = "reqwest::retry";
    FUN_015fb650("shouldn\'t retry!",0x21,5,&local_c0);
  }
  iVar4 = param_2[0x65];
  if (iVar4 != 0) {
    iVar6 = *(int *)(iVar4 + 0x48);
    FUN_01aa583c(iVar4 + 8);
    piVar5 = (int *)(iVar4 + 0x44);
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = *piVar5 + iVar6;
    DataMemoryBarrier(0xb);
  }
LAB_01853014:
  FUN_01bed4e2(param_1,&local_158,0x68);
  return;
}

