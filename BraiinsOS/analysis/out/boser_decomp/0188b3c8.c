// FUN_0188b3c8 @ 0188b3c8 size=160 calls_out=5 calls_in=2
// strings: 

void FUN_0188b3c8(int param_1)

{
  switch(*(undefined1 *)(param_1 + 0x1b0)) {
  case 0:
    FUN_0178e1c4(param_1);
    return;
  default:
    goto switchD_0188b3e4_caseD_1;
  case 3:
    FUN_0188b050(param_1 + 0x1b8);
    goto LAB_0188b478;
  case 4:
    FUN_0188b2bc(param_1 + 0x1b8);
    goto LAB_0188b46c;
  case 5:
    FUN_0188b050(param_1 + 0x1c0);
    *(undefined1 *)(param_1 + 0x1b2) = 0;
    break;
  case 6:
    FUN_0188af90(param_1 + 0x1d4);
    *(undefined1 *)(param_1 + 0x1b3) = 0;
    FUN_0184f010(param_1 + 0x1b8);
    *(undefined1 *)(param_1 + 0x1b4) = 0;
  }
  if (*(int *)(param_1 + 0x70) == 9) {
    *(undefined1 *)(param_1 + 0x1b6) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x1b5) = 0;
  }
LAB_0188b46c:
  *(undefined2 *)(param_1 + 0x1b5) = 0;
LAB_0188b478:
  *(undefined1 *)(param_1 + 0x1b7) = 0;
switchD_0188b3e4_caseD_1:
  return;
}

