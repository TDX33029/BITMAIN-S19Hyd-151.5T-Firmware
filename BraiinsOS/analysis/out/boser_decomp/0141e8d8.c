// FUN_0141e8d8 @ 0141e8d8 size=280 calls_out=2 calls_in=2
// strings: internal error: entered unreachable code

int * FUN_0141e8d8(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  
  if (*param_1 == 2) {
    return (int *)0x0;
  }
  if ((*param_1 & 1) == 0) {
    uVar4 = param_1[5];
    uVar1 = *(uint *)(param_1[4] + 0x28);
    if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar4,uVar1,&DAT_01cf4600);
    }
    piVar3 = (int *)(*(int *)(param_1[4] + 0x24) + uVar4 * 0x30);
    if (param_1[2] == 0) {
      param_1[2] = 2;
      *param_1 = 2;
    }
    else {
      if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf4610);
      }
      uVar1 = piVar3[1];
      *param_1 = 1;
      param_1[1] = uVar1;
    }
    return piVar3 + 3;
  }
  uVar4 = param_1[1];
  uVar1 = *(uint *)(param_1[4] + 0x34);
  if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar4,uVar1,&DAT_01cf4620);
  }
  uVar1 = param_1[2];
  iVar2 = *(int *)(param_1[4] + 0x30) + uVar4 * 0x20;
  bVar5 = uVar1 == 1;
  if (bVar5) {
    uVar1 = param_1[3];
  }
  if (bVar5 && uVar4 == uVar1) {
    param_1[2] = 2;
  }
  else if (*(int *)(iVar2 + 8) != 0) {
    uVar1 = *(uint *)(iVar2 + 0xc);
    *param_1 = 1;
    param_1[1] = uVar1;
    goto LAB_0141e9ac;
  }
  *param_1 = 2;
LAB_0141e9ac:
  return (int *)(iVar2 + 0x10);
}

