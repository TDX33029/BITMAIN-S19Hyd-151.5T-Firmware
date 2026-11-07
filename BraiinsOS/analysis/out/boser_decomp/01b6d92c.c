// FUN_01b6d92c @ 01b6d92c size=416 calls_out=7 calls_in=0
// strings: getrandom | /dev/urandom | failed to open /dev/urandom | failed to get flags from urandom fd | failed to set FD_CLOEXEC on urandom fd

undefined8 FUN_01b6d92c(void)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined1 local_1d;
  int local_1c;
  
  local_1c = DAT_01d53560;
  local_1d = 0;
  iVar1 = FUN_01b6d618(&local_1d,1,0,0);
  if (iVar1 == 1) {
    DAT_01d5333c = 1;
    DAT_01d53338 = 1;
LAB_01b6d994:
    if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
      FUN_01be31f4();
    }
    return 0;
  }
  if (iVar1 == -1) {
    piVar2 = (int *)FUN_01be3244();
    if (*piVar2 == 0xb) {
      DAT_01d5333c = 1;
      goto LAB_01b6d994;
    }
    if (*piVar2 == 0x26) {
      do {
        iVar1 = FUN_01be34a6("/dev/urandom",0);
        if (iVar1 != -1) {
          if (-1 < iVar1) {
            uVar4 = FUN_01be3388(iVar1,1);
            if (uVar4 == 0xffffffff) {
              if (*piVar2 != 0x26) {
                pcVar3 = "failed to get flags from urandom fd";
                goto LAB_01b6d9fc;
              }
            }
            else {
              iVar5 = FUN_01be3388(iVar1,2,uVar4 | 1);
              if (iVar5 == -1) {
                pcVar3 = "failed to set FD_CLOEXEC on urandom fd";
                goto LAB_01b6d9fc;
              }
            }
            DAT_01d5333c = 2;
            DAT_01d53334 = iVar1;
            goto LAB_01b6d994;
          }
          break;
        }
      } while (*piVar2 == 4);
      pcVar3 = "failed to open /dev/urandom";
      goto LAB_01b6d9fc;
    }
  }
  pcVar3 = "getrandom";
LAB_01b6d9fc:
  FUN_01beb6bc(pcVar3);
                    /* WARNING: Subroutine does not return */
  FUN_01be32a0();
}

