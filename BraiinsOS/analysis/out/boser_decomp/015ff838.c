// FUN_015ff838 @ 015ff838 size=388 calls_out=9 calls_in=1
// strings: 

void FUN_015ff838(int param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  uint extraout_r1;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = thunk_FUN_01bee35a(param_1,0x1cc);
  piVar2 = (int *)((int)uVar5 + (int)((ulonglong)uVar5 >> 0x20));
  if ((char)piVar2[1] == '\0') {
    do {
      bVar1 = (bool)hasExclusiveAccess(0x1d4f0ac);
    } while (!bVar1);
    if (DAT_01d4f0ac == 0) {
      DAT_01d4f0ac = DAT_01d4f0ac + 1;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_004c1978,0x57,&DAT_01d06d10);
    }
    iVar3 = DAT_01d4f0ac + 1;
    *piVar2 = DAT_01d4f0ac;
    DAT_01d4f0ac = iVar3;
    *(undefined1 *)(piVar2 + 1) = 1;
  }
  if (*(int *)(param_1 + 0x304) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013079d0(&DAT_01d06c80);
  }
  FUN_01bf0fd4(*piVar2);
  iVar3 = 0;
  do {
    if (*(uint *)(param_1 + 0x304) <= extraout_r1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(extraout_r1,*(uint *)(param_1 + 0x304),&DAT_01d06c90);
    }
    iVar3 = iVar3 + 1;
    piVar2 = (int *)(*(int *)(param_1 + 0x300) + extraout_r1 * 0x40);
    do {
      if (*piVar2 != 0) {
        ClearExclusiveLocal();
        goto LAB_015ff8f0;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = 1;
    DataMemoryBarrier(0xb);
    uVar4 = 0;
    if ((DAT_01d51b08 & 0x7fffffff) != 0) {
      uVar4 = FUN_0197ac0c();
      uVar4 = uVar4 ^ 1;
    }
    if ((char)piVar2[1] == '\0') {
      iVar3 = piVar2[4];
      if (iVar3 == piVar2[2]) {
        FUN_0155a420();
      }
      *(undefined4 *)(piVar2[3] + iVar3 * 4) = param_2;
      piVar2[4] = iVar3 + 1;
      FUN_00a97e8c(piVar2,uVar4);
      return;
    }
    FUN_00a97e8c(piVar2,uVar4);
LAB_015ff8f0:
    if (iVar3 == 10) {
      FUN_015ffa1c(param_2);
      return;
    }
  } while( true );
}

