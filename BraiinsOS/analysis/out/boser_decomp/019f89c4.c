// FUN_019f89c4 @ 019f89c4 size=252 calls_out=7 calls_in=6
// strings: `EnterGuard` values dropped out of order. Guards returned by `tokio::runtime::Handle::enter()` must be dropped in the reverse order as they were acquired.

void FUN_019f89c4(int *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = thunk_FUN_01bee35a(param_1,0x20);
  piVar3 = (int *)((int)uVar6 + (int)((ulonglong)uVar6 >> 0x20));
  if ((char)piVar3[0xe] != '\x01') {
    if ((char)piVar3[0xe] == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_019b0950(&DAT_01d301c0);
    }
    FUN_019a2bcc(piVar3,&LAB_019efb68);
    *(undefined1 *)(piVar3 + 0xe) = 1;
  }
  if (piVar3[3] == param_2) {
    iVar4 = *param_1;
    iVar5 = param_1[1];
    iVar2 = *piVar3;
    *param_1 = 2;
    if (iVar2 != 0) {
      FUN_01306fc8(&DAT_01d29b28);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x19f8aac);
      (*pcVar1)();
    }
    *piVar3 = -1;
    FUN_019f8b10(piVar3 + 1);
    piVar3[1] = iVar4;
    piVar3[2] = iVar5;
    piVar3[3] = param_2 + -1;
    *piVar3 = *piVar3 + 1;
  }
  else if (((DAT_01d51b08 & 0x7fffffff) == 0) || (iVar2 = FUN_0197ac0c(), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("`EnterGuard` values dropped out of order. Guards returned by `tokio::runtime::Handle::enter()` must be dropped in the reverse order as they were acquired."
                 ,0x135,&DAT_01d29b38);
  }
  return;
}

