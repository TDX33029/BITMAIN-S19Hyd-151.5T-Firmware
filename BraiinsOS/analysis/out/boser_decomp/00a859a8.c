// FUN_00a859a8 @ 00a859a8 size=164 calls_out=5 calls_in=2
// strings: 

void FUN_00a859a8(int param_1)

{
  switch(*(undefined1 *)(param_1 + 0x170)) {
  case 0:
    FUN_0178e1c4(param_1);
    return;
  default:
    goto switchD_00a859c4_caseD_1;
  case 3:
    FUN_00a857d0(param_1 + 0x178);
    goto LAB_00a85a5c;
  case 4:
    FUN_00a858b4(param_1 + 0x178);
    goto LAB_00a85a50;
  case 5:
    FUN_00a857d0(param_1 + 0x180);
    *(undefined1 *)(param_1 + 0x172) = 0;
    break;
  case 6:
    FUN_00a84bf0(param_1 + 0x194);
    *(undefined1 *)(param_1 + 0x173) = 0;
    FUN_0184f010(param_1 + 0x178);
    *(undefined1 *)(param_1 + 0x174) = 0;
  }
  if (*(int *)(param_1 + 0x70) == 3 && *(int *)(param_1 + 0x74) == 0) {
    *(undefined1 *)(param_1 + 0x176) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x175) = 0;
  }
LAB_00a85a50:
  *(undefined2 *)(param_1 + 0x175) = 0;
LAB_00a85a5c:
  *(undefined1 *)(param_1 + 0x177) = 0;
switchD_00a859c4_caseD_1:
  return;
}

