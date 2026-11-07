// FUN_01657e94 @ 01657e94 size=256 calls_out=4 calls_in=8
// strings: reached max `enter` depth

void FUN_01657e94(int *param_1)

{
  bool bVar1;
  int *extraout_r2;
  int extraout_r3;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar6 = thunk_FUN_016de0ee();
  piVar3 = (int *)((int)uVar6 + extraout_r3);
  if ((char)piVar3[0xe] != '\x01') {
    if ((char)piVar3[0xe] == '\x02') {
      *param_1 = 3;
      return;
    }
    FUN_015e8e6c(piVar3,FUN_01655ec4);
    *(undefined1 *)(piVar3 + 0xe) = 1;
  }
  if (*piVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_018aca90);
  }
  *piVar3 = -1;
  do {
    iVar2 = *extraout_r2;
    bVar1 = (bool)hasExclusiveAccess(extraout_r2);
  } while (!bVar1);
  *extraout_r2 = iVar2 + 1;
  if (iVar2 < 0) {
    software_udf(0xfdee,0x1657f84);
    return;
  }
  iVar5 = piVar3[1];
  iVar4 = piVar3[2];
  piVar3[1] = (uint)((uVar6 & 0x100000000) != 0);
  piVar3[2] = (int)extraout_r2;
  iVar2 = piVar3[3] + 1;
  *piVar3 = *piVar3 + 1;
  if (piVar3[3] == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("reached max `enter` depth",0x33,&DAT_018aca80);
  }
  *param_1 = iVar5;
  param_1[1] = iVar4;
  param_1[2] = iVar2;
  piVar3[3] = iVar2;
  return;
}

