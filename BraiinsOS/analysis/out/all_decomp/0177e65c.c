// FUN_0177e65c @ 0177e65c size=636 calls_out=10 calls_in=0
// strings: RNDGETENTCNT on /dev/urandom indicates that the entropy pool does not have enough entropy. Rather than continue with poor entropy; this process will block until entropy is available.  | getrandom | <unknown> | %s: getrandom indicates that the entropy pool has not been initialized. Rather than continue with poor entropy; this process will block until entropy is available.  | RNDGETENTCNT on /dev/urandom failed. We cannot determine if the kernel has enough entropy and must abort. 

undefined8 FUN_0177e65c(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_24;
  
  local_24 = DAT_018ddaf8;
  if (DAT_018dfe94 == 1) {
    if (DAT_018dfe90 != 1) {
      local_3c = local_3c & 0xffffff00;
      do {
        iVar1 = FUN_016d6968(0x180,&local_3c,1);
        if (iVar1 != -1) goto LAB_0177e7c4;
        piVar2 = (int *)FUN_016d2bc8();
      } while (*piVar2 == 4);
      if (*piVar2 == 0xb) {
        pcVar3 = (char *)FUN_016d636c(0x1f);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = "<unknown>";
        }
        iVar5 = 10;
        iVar4 = 1;
        FUN_016db0c6(&DAT_018db5c0,
                     "%s: getrandom indicates that the entropy pool has not been initialized. Rather than continue with poor entropy, this process will block until entropy is available.\n"
                     ,pcVar3);
        while (iVar1 = FUN_016d6968(0x180,&local_3c,1,0), iVar1 == -1) {
          if (*piVar2 != 4) {
            iVar5 = iVar5 + -1;
            if (iVar5 == 0) goto LAB_0177e7f8;
            local_38 = 0;
            local_34 = 0;
            iVar4 = iVar4 * 10;
            local_2c = 0;
            if (0x3b9ac9fe < iVar4) {
              iVar4 = 999999999;
            }
            local_30 = iVar4;
            FUN_016dff86(&local_38);
          }
        }
LAB_0177e7c4:
        if (iVar1 == 1) {
          DAT_018dfe90 = 1;
          goto LAB_0177e748;
        }
      }
LAB_0177e7f8:
      FUN_016db380("getrandom");
                    /* WARNING: Subroutine does not return */
      FUN_016d2c24();
    }
  }
  else {
    if (DAT_018dfe94 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c24(param_1,&PTR_018bc3f4,0);
    }
    while( true ) {
      local_3c = 0;
      iVar1 = FUN_016d6590(DAT_018dfe8c,0x80045200,&local_3c);
      if (iVar1 != 0) {
        FUN_016db246("RNDGETENTCNT on /dev/urandom failed. We cannot determine if the kernel has enough entropy and must abort.\n"
                     ,1,0x6a,&DAT_018db5c0);
                    /* WARNING: Subroutine does not return */
        FUN_016d2c24();
      }
      if (0xff < (int)local_3c) break;
      FUN_016db246("RNDGETENTCNT on /dev/urandom indicates that the entropy pool does not have enough entropy. Rather than continue with poor entropy, this process will block until entropy is available.\n"
                   ,1,0xb7,&DAT_018db5c0);
      local_30 = 250000000;
      local_38 = iVar1;
      local_34 = iVar1;
      local_2c = iVar1;
      FUN_016dff86(&local_38);
    }
    DAT_018dfe90 = 1;
  }
LAB_0177e748:
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

