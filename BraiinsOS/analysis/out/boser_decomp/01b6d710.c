// FUN_01b6d710 @ 01b6d710 size=472 calls_out=11 calls_in=0
// strings: getrandom | <unknown> | %s: getrandom indicates that the entropy pool has not been initialized. Rather than continue with poor entropy; this process will block until entropy is available.  | RNDGETENTCNT on /dev/urandom failed. We cannot determine if the kernel has enough entropy and must abort.  | RNDGETENTCNT on /dev/urandom indicates that the entropy pool does not have enough entropy. Rather than continue with poor entropy; this process will block until entropy is available. 

undefined8 FUN_01b6d710(void)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  int local_34;
  undefined1 local_30 [8];
  undefined4 local_28;
  int local_1c;
  
  local_1c = DAT_01d53560;
  if (DAT_01d5333c != 1) {
    if (DAT_01d5333c == 2) {
      while( true ) {
        local_34 = 0;
        iVar1 = FUN_01be67dc(DAT_01d53334,0x80045200,&local_34);
        if (iVar1 != 0) break;
        if (0xff < local_34) {
          DAT_01d53338 = 1;
          goto LAB_01b6d7fc;
        }
        FUN_01beb4e0("RNDGETENTCNT on /dev/urandom indicates that the entropy pool does not have enough entropy. Rather than continue with poor entropy, this process will block until entropy is available.\n"
                     ,&DAT_01d50fd8);
        uVar4 = FUN_01bed93e(local_30,0,0x10);
        local_28 = 250000000;
        FUN_01bf01aa(uVar4,uVar4);
      }
      FUN_01beb4e0("RNDGETENTCNT on /dev/urandom failed. We cannot determine if the kernel has enough entropy and must abort.\n"
                   ,&DAT_01d50fd8);
    }
    goto LAB_01b6d7a4;
  }
  if (DAT_01d53338 == 1) goto LAB_01b6d7fc;
  local_30[0] = 0;
  iVar1 = FUN_01b6d618(local_30);
  if (iVar1 == -1) {
    piVar2 = (int *)FUN_01be3244();
    if (*piVar2 == 0xb) {
      pcVar3 = (char *)FUN_01be65d0(0x1f);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = "<unknown>";
      }
      FUN_01beb3de(&DAT_01d50fd8,
                   "%s: getrandom indicates that the entropy pool has not been initialized. Rather than continue with poor entropy, this process will block until entropy is available.\n"
                   ,pcVar3);
      iVar1 = FUN_01b6d618(local_30,1);
      goto LAB_01b6d7e8;
    }
  }
  else {
LAB_01b6d7e8:
    if (iVar1 == 1) {
      DAT_01d53338 = 1;
LAB_01b6d7fc:
      if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
        FUN_01be31f4();
      }
      return 0;
    }
  }
  FUN_01beb6bc("getrandom");
LAB_01b6d7a4:
                    /* WARNING: Subroutine does not return */
  FUN_01be32a0();
}

