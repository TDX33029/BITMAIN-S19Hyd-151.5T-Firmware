// FUN_01741960 @ 01741960 size=160 calls_out=5 calls_in=2
// strings: 

void FUN_01741960(int param_1)

{
  switch(*(undefined1 *)(param_1 + 0x1b0)) {
  case 0:
    FUN_0178e1c4(param_1);
    return;
  default:
    goto switchD_0174197c_caseD_1;
  case 3:
    FUN_017415e8(param_1 + 0x1b8);
    goto LAB_01741a10;
  case 4:
    FUN_01741854(param_1 + 0x1b8);
    goto LAB_01741a04;
  case 5:
    FUN_017415e8(param_1 + 0x1c0);
    *(undefined1 *)(param_1 + 0x1b2) = 0;
    break;
  case 6:
    FUN_01741528(param_1 + 0x1d4);
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
LAB_01741a04:
  *(undefined2 *)(param_1 + 0x1b5) = 0;
LAB_01741a10:
  *(undefined1 *)(param_1 + 0x1b7) = 0;
switchD_0174197c_caseD_1:
  return;
}

