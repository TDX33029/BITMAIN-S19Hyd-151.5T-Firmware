// FUN_013348fc @ 013348fc size=428 calls_out=10 calls_in=0
// strings: 

void FUN_013348fc(int *param_1)

{
  bool bVar1;
  int *piVar2;
  uint extraout_r1;
  int extraout_r2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int local_2c;
  int local_28;
  char local_24;
  
  iVar4 = *param_1;
  iVar5 = param_1[1];
  *param_1 = 1;
  param_1[1] = 2;
  if (iVar4 == 1) {
    if (iVar5 == 2) {
      local_2c = iVar5;
                    /* WARNING: Subroutine does not return */
      FUN_01304210(1,&DAT_005288a8,&local_2c,0);
    }
    DataMemoryBarrier(0xb);
    *(int *)(param_1[2] + 200) = iVar5;
    return;
  }
  if ((char)param_1[3] == '\0') {
    uVar6 = thunk_FUN_01bee35a(0,param_1,0x1cc);
    piVar2 = (int *)((int)uVar6 + extraout_r2);
    iVar4 = *(int *)((int)((ulonglong)uVar6 >> 0x20) + 8);
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
    if (*(int *)(iVar4 + 0xd4) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013079d0(&DAT_01d06c80);
    }
    FUN_01bf0fd4(*piVar2);
    iVar3 = 10;
    do {
      if (*(uint *)(iVar4 + 0xd4) <= extraout_r1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(extraout_r1,*(uint *)(iVar4 + 0xd4),&DAT_01d06c90);
      }
      FUN_0069e2f4(&local_2c,*(int *)(iVar4 + 0xd0) + extraout_r1 * 0x40);
      if (local_2c == 0) {
        iVar4 = *(int *)(local_28 + 0x10);
        if (iVar4 == *(int *)(local_28 + 8)) {
          FUN_01a54b48();
        }
        *(int *)(*(int *)(local_28 + 0xc) + iVar4 * 4) = iVar5;
        *(int *)(local_28 + 0x10) = iVar4 + 1;
        FUN_00a97e8c(local_28,local_24);
        return;
      }
      if (local_24 != '\x02') {
        FUN_00a97e8c(local_28);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_01334b0c(iVar5);
  return;
}

