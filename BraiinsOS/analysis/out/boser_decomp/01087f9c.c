// FUN_01087f9c @ 01087f9c size=72 calls_out=2 calls_in=2
// strings: 

void FUN_01087f9c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  switch(*(undefined1 *)(param_1 + 0x98)) {
  case 0:
    param_1 = param_1 + 0x40;
    goto switchD_01087fb8_caseD_3;
  case 1:
  case 2:
    return;
  case 3:
  case 4:
  case 5:
  case 6:
  case 9:
    goto switchD_01087fb8_caseD_3;
  case 7:
    uVar1 = *(undefined4 *)(param_1 + 0xa4);
    uVar2 = *(undefined4 *)(param_1 + 0xa8);
    break;
  case 8:
    uVar1 = *(undefined4 *)(param_1 + 0xa0);
    uVar2 = *(undefined4 *)(param_1 + 0xa4);
    break;
  default:
    return;
  }
  FUN_019bb7e0(uVar1,uVar2);
switchD_01087fb8_caseD_3:
  FUN_0103be5c(param_1);
  return;
}

