// FUN_016590f4 @ 016590f4 size=324 calls_out=9 calls_in=1
// strings: 

void FUN_016590f4(int param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  uint extraout_r1;
  int iVar3;
  undefined8 uVar4;
  int local_24;
  int local_20;
  char local_1c;
  
  uVar4 = thunk_FUN_01bee35a(param_1,0x1cc);
  piVar2 = (int *)((int)uVar4 + (int)((ulonglong)uVar4 >> 0x20));
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
  iVar3 = 10;
  while( true ) {
    if (*(uint *)(param_1 + 0x304) <= extraout_r1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(extraout_r1,*(uint *)(param_1 + 0x304),&DAT_01d06c90);
    }
    FUN_0069e2f4(&local_24,*(int *)(param_1 + 0x300) + extraout_r1 * 0x40);
    if (local_24 == 0) break;
    if (local_1c != '\x02') {
      FUN_00a97e8c(local_20);
    }
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      FUN_01659294(param_2);
      return;
    }
  }
  iVar3 = *(int *)(local_20 + 0x10);
  if (iVar3 == *(int *)(local_20 + 8)) {
    FUN_01a54b48();
  }
  *(undefined4 *)(*(int *)(local_20 + 0xc) + iVar3 * 4) = param_2;
  *(int *)(local_20 + 0x10) = iVar3 + 1;
  FUN_00a97e8c(local_20,local_1c);
  return;
}

