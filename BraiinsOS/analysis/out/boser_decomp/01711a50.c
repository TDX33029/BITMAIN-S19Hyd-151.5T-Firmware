// FUN_01711a50 @ 01711a50 size=1224 calls_out=11 calls_in=1
// strings: reqwest::retry | reqwest::retry | could retry! | shouldn't retry! | reqwest::retry | reqwest::retry

void FUN_01711a50(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  int local_158;
  int local_154;
  int local_150 [15];
  ushort local_114;
  char *local_c0;
  int *local_bc;
  int *local_b8;
  int local_b4;
  undefined *local_b0;
  
  piVar4 = param_2 + 0x6a;
  while( true ) {
    while ((char)*piVar4 != '\0') {
      if ((char)*piVar4 == '\x01') {
        cVar1 = *(char *)((int)param_2 + 0x1a9);
        *(undefined1 *)((int)param_2 + 0x1a9) = 0;
        if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("`Ready` polled after completionevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/transport/service/grpc_timeout.rs:43"
                       ,0x1f,&DAT_01d2cd90);
        }
        FUN_01705ae8(piVar4);
        *(char *)piVar4 = '\x02';
      }
      else {
        iVar2 = *param_2;
        iVar5 = param_2[1];
        *param_2 = 3;
        param_2[1] = 0;
        if (iVar2 == 3 && iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c(&DAT_0056bc28,0x20,&DAT_01d1f0a0);
        }
        local_158 = iVar2;
        local_154 = iVar5;
        FUN_01bed4e2(local_150,param_2 + 2,0x90);
        FUN_0170fd1c(&local_c0,param_2 + 0x62,&local_158);
        if (*param_2 != 3 || param_2[1] != 0) {
          FUN_01712008(param_2);
        }
        FUN_01bed4e2(param_2,&local_c0,0x98);
        FUN_01bed4e2(&local_c0,&local_158,0x98);
        iVar2 = FUN_01735320(param_2 + 0x26,&local_c0);
        FUN_01705ae8(piVar4);
        *(undefined1 *)(param_2 + 0x6a) = 0;
        param_2[0x6b] = iVar2;
        param_2[0x6c] = (int)&DAT_01d19578;
      }
    }
    (**(code **)(param_2[0x6c] + 0xc))(&local_c0,param_2[0x6b],param_3);
    if (local_c0 == (char *)0x4 && local_bc == (int *)0x0) {
      *param_1 = 4;
      param_1[1] = 0;
      return;
    }
    FUN_01bed4e2(&local_158,&local_c0,0x68);
    if (*param_2 == 3 && param_2[1] == 0) goto LAB_01711e58;
    iVar2 = param_2[0x62];
    pcVar3 = (char *)((uint)local_114 << 0x10);
    if (local_158 == 3 && local_154 == 0) {
      pcVar3 = (char *)0x1;
    }
    if (iVar2 == 1) break;
    if (iVar2 != 2) goto LAB_01711dcc;
    local_c0 = pcVar3;
    local_bc = local_150;
    local_b8 = param_2;
    iVar2 = (**(code **)(param_2[100] + 0xc))
                      (param_2[99] + (*(int *)(param_2[100] + 8) - 1U & 0xfffffff8) + 8,&local_c0);
    bVar6 = 4 < DAT_01d51b00;
    if (iVar2 == 0) {
LAB_01711e84:
      if (bVar6) goto LAB_01711de0;
      goto LAB_01711e20;
    }
LAB_01711b70:
    if (bVar6) {
      local_b4 = 0xe;
      local_bc = (int *)&DAT_0000000e;
      local_b0 = &DAT_01d191a4;
      local_b8 = (int *)0x50c837;
      local_c0 = "reqwest::retry";
      FUN_0193b350("could retry!",0x19,5,&local_c0);
    }
    if ((param_2[0x65] != 0) && (iVar2 = FUN_01aa5c48(param_2[0x65] + 8), iVar2 == 0)) {
      if (3 < DAT_01d51b00) {
        local_b4 = 0xe;
        local_bc = (int *)&DAT_0000000e;
        local_b0 = &DAT_01d191b4;
        local_b8 = (int *)0x50c837;
        local_c0 = "reqwest::retry";
        FUN_0193b350("retryable but could not withdraw from budget",0x59,4,&local_c0);
      }
      goto LAB_01711e58;
    }
    param_2[0x67] = param_2[0x67] + 1;
    FUN_01705ae8(piVar4);
    *(undefined2 *)(param_2 + 0x6a) = 0x101;
    FUN_01711fec(&local_158);
  }
  bVar6 = ((uint)pcVar3 & 1) != 0;
  iVar2 = 1;
  if (bVar6) {
    pcVar3 = *(char **)(local_150[0] + 0x5c);
    iVar2 = local_150[0];
  }
  if (bVar6 && pcVar3 != (char *)0x0) {
    uVar7 = (**(code **)(*(int *)(iVar2 + 0x60) + 0x18))();
    if ((int)uVar7 != 0) {
      uVar7 = (**(code **)((int)((ulonglong)uVar7 >> 0x20) + 0x18))();
      pcVar3 = (char *)uVar7;
      if ((pcVar3 != (char *)0x0) &&
         ((**(code **)((int)((ulonglong)uVar7 >> 0x20) + 0x1c))(&local_c0,pcVar3),
         (local_c0 == (char *)0xa20f1e1c && local_b8 == (int *)0xb1b7fe9d) &&
         (local_bc == (int *)0x9ce751f3 && local_b4 == 0x716290ad))) {
        cVar1 = *pcVar3;
        if (cVar1 == '\0') {
          if (pcVar3[1] == '\x02') {
            iVar2 = 7;
            iVar5 = 8;
            goto LAB_01711b4c;
          }
        }
        else {
          bVar6 = cVar1 == '\x01';
          if (bVar6) {
            cVar1 = pcVar3[1];
          }
          if (bVar6 && cVar1 == '\x02') {
            iVar2 = 0;
            iVar5 = 4;
LAB_01711b4c:
            bVar6 = 4 < DAT_01d51b00;
            if (*(int *)(pcVar3 + iVar5) != iVar2) goto LAB_01711e84;
            goto LAB_01711b70;
          }
        }
      }
    }
  }
LAB_01711dcc:
  if (4 < DAT_01d51b00) {
LAB_01711de0:
    local_b4 = 0xe;
    local_bc = (int *)&DAT_0000000e;
    local_b0 = &DAT_01d19194;
    local_b8 = (int *)0x50c837;
    local_c0 = "reqwest::retry";
    FUN_0193b350("shouldn\'t retry!",0x21,5,&local_c0);
  }
LAB_01711e20:
  iVar2 = param_2[0x65];
  if (iVar2 != 0) {
    iVar5 = *(int *)(iVar2 + 0x48);
    FUN_01aa583c(iVar2 + 8);
    piVar4 = (int *)(iVar2 + 0x44);
    DataMemoryBarrier(0xb);
    do {
      bVar6 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar6);
    *piVar4 = *piVar4 + iVar5;
    DataMemoryBarrier(0xb);
  }
LAB_01711e58:
  FUN_01bed4e2(param_1,&local_158,0x68);
  return;
}

