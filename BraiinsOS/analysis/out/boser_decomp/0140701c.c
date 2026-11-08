// FUN_0140701c @ 0140701c size=168 calls_out=3 calls_in=1
// strings: internal error: entered unreachable code

void FUN_0140701c(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_01401994(param_2);
  if (uVar1 == 0) {
    return;
  }
  uVar3 = uVar1 & 0xfffffffc;
  switch(uVar1 & 3) {
  case 0:
    if (*(int *)(uVar3 + 8) != 0) goto LAB_014070c8;
    uVar1 = *(uint *)(param_1 + 0xc);
    iVar2 = param_1;
    break;
  case 1:
    iVar2 = param_1 + 0x18;
    if (*(int *)(uVar3 + 8) != 0) {
LAB_014070c4:
      param_1 = iVar2;
      goto LAB_014070c8;
    }
    uVar1 = *(uint *)(param_1 + 0x24);
    break;
  case 2:
    iVar2 = param_1 + 0x30;
    if (*(int *)(uVar3 + 8) != 0) goto LAB_014070c4;
    uVar1 = *(uint *)(param_1 + 0x3c);
    break;
  case 3:
    goto switchD_01407044_caseD_3;
  }
  param_1 = iVar2;
  if (uVar1 != uVar3) {
switchD_01407044_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf3a68);
  }
LAB_014070c8:
  FUN_013fc740(param_1);
  return;
}

