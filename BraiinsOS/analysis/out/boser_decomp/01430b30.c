// FUN_01430b30 @ 01430b30 size=284 calls_out=2 calls_in=3
// strings: internal error: entered unreachable code

int * FUN_01430b30(uint *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  if (*param_1 == 2) {
    return (int *)0x0;
  }
  if ((*param_1 & 1) == 0) {
    uVar4 = param_1[5];
    uVar1 = *(uint *)(param_1[4] + 0x28);
    if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar4,uVar1,&DAT_01cf5508);
    }
    piVar2 = (int *)(uVar4 * 0x34 + *(int *)(param_1[4] + 0x24));
    if (param_1[2] == 0) {
      param_1[2] = 2;
      *param_1 = 2;
    }
    else {
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf5518);
      }
      uVar1 = piVar2[1];
      *param_1 = 1;
      param_1[1] = uVar1;
    }
    return piVar2 + 3;
  }
  uVar4 = param_1[1];
  uVar1 = *(uint *)(param_1[4] + 0x34);
  if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar4,uVar1,&DAT_01cf5528);
  }
  uVar1 = uVar4 * 9;
  iVar3 = *(int *)(param_1[4] + 0x30) + uVar4 * 0x24;
  if (param_1[2] == 1) {
    uVar1 = param_1[3];
  }
  if (param_1[2] == 1 && uVar4 == uVar1) {
    param_1[2] = 2;
  }
  else if (*(int *)(iVar3 + 8) != 0) {
    uVar1 = *(uint *)(iVar3 + 0xc);
    *param_1 = 1;
    param_1[1] = uVar1;
    goto LAB_01430c08;
  }
  *param_1 = 2;
LAB_01430c08:
  return (int *)(iVar3 + 0x10);
}

