// FUN_017975ac @ 017975ac size=160 calls_out=5 calls_in=1
// strings: 

void FUN_017975ac(int param_1)

{
  int iVar1;
  int iVar2;
  
  switch(*(undefined1 *)(param_1 + 0x180)) {
  case 0:
    FUN_0178e1c4(param_1);
    return;
  default:
    goto switchD_017975c8_caseD_1;
  case 3:
    FUN_0179729c(param_1 + 400);
    goto LAB_01797650;
  case 4:
    FUN_017972d8(param_1 + 0x198);
    iVar2 = 0x183;
    *(undefined1 *)(param_1 + 0x182) = 0;
    FUN_0178e78c(*(undefined4 *)(param_1 + 400));
    break;
  case 5:
    FUN_017971dc(param_1 + 0x194);
    iVar2 = 0x185;
    *(undefined1 *)(param_1 + 0x184) = 0;
    FUN_0178e78c(*(undefined4 *)(param_1 + 400));
  }
  iVar1 = *(int *)(param_1 + 0x70);
  *(undefined1 *)(param_1 + iVar2) = 0;
  if (iVar1 == 9) {
    *(undefined1 *)(param_1 + 0x187) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x186) = 0;
  }
LAB_01797650:
  *(undefined2 *)(param_1 + 0x186) = 0;
  *(undefined1 *)(param_1 + 0x188) = 0;
switchD_017975c8_caseD_1:
  return;
}

