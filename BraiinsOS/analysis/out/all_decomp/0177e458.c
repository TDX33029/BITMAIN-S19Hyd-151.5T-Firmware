// FUN_0177e458 @ 0177e458 size=464 calls_out=7 calls_in=0
// strings: getrandom | /dev/urandom | failed to set FD_CLOEXEC on urandom fd | failed to open /dev/urandom | failed to get flags from urandom fd

undefined8 FUN_0177e458(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_15;
  int local_14;
  
  local_15 = 0;
  local_14 = DAT_018ddaf8;
  do {
    iVar1 = FUN_016d6968(0x180,&local_15,1);
    if (iVar1 != -1) {
      if (iVar1 != 1) goto LAB_0177e4b8;
      DAT_018dfe94 = 1;
      DAT_018dfe90 = 1;
      goto LAB_0177e57c;
    }
    piVar2 = (int *)FUN_016d2bc8();
    iVar1 = *piVar2;
  } while (iVar1 == 4);
  if (iVar1 == 0xb) {
    DAT_018dfe94 = 1;
LAB_0177e57c:
    if (local_14 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78();
    }
    return 0;
  }
  if (iVar1 != 0x26) {
LAB_0177e4b8:
    FUN_016db380("getrandom");
                    /* WARNING: Subroutine does not return */
    FUN_016d2c24();
  }
  do {
    iVar1 = FUN_016d2e2a("/dev/urandom",0);
    if (iVar1 != -1) {
      if (-1 < iVar1) {
        uVar3 = FUN_016d2d0c(iVar1,1);
        if (uVar3 == 0xffffffff) {
          if (*piVar2 != 0x26) {
            FUN_016db380("failed to get flags from urandom fd");
            goto LAB_0177e610;
          }
        }
        else {
          iVar4 = FUN_016d2d0c(iVar1,2,uVar3 | 1);
          if (iVar4 == -1) {
            FUN_016db380("failed to set FD_CLOEXEC on urandom fd");
            goto LAB_0177e610;
          }
        }
        DAT_018dfe94 = 2;
        DAT_018dfe8c = iVar1;
        goto LAB_0177e57c;
      }
      break;
    }
  } while (*piVar2 == 4);
  FUN_016db380("failed to open /dev/urandom");
LAB_0177e610:
                    /* WARNING: Subroutine does not return */
  FUN_016d2c24();
}

