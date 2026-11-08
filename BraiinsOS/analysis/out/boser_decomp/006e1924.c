// FUN_006e1924 @ 006e1924 size=476 calls_out=9 calls_in=1
// strings: 

void FUN_006e1924(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_10;
  int local_c;
  
  piVar4 = &local_10;
  iVar2 = param_1[0x94];
  if (iVar2 == 0) {
    iVar2 = 0;
    piVar4 = &local_c;
    piVar1 = param_1;
  }
  else {
    local_c = 1;
    piVar1 = (int *)param_1[0x95];
  }
  *piVar4 = iVar2;
  iVar2 = 0;
  if (local_c != 0) {
    iVar2 = local_10;
  }
  if (local_c != 0 && iVar2 != 0) {
    thunk_FUN_01be4678(piVar1);
  }
  iVar2 = param_1[1];
  if ((iVar2 != 0) && (iVar3 = iVar2 * 0x10 + 0x10, iVar2 + iVar3 != -5)) {
    thunk_FUN_01be4678(*param_1 - iVar3);
  }
  FUN_006b3e7c();
  FUN_006b35dc(param_1 + 0x10);
  FUN_006b3b28(param_1 + 0x18);
  iVar2 = param_1[0x25];
  if ((iVar2 != 0) && (iVar3 = iVar2 * 8 + 8, iVar2 + iVar3 != -5)) {
    thunk_FUN_01be4678(param_1[0x24] - iVar3);
  }
  iVar2 = param_1[0x2d];
  if ((iVar2 != 0) && (iVar3 = iVar2 * 8 + 8, iVar2 + iVar3 != -5)) {
    thunk_FUN_01be4678(param_1[0x2c] - iVar3);
  }
  FUN_006b3774();
  FUN_006b3cc0(param_1 + 0x3c);
  FUN_006b3cc0(param_1 + 0x44);
  FUN_006b3cc0();
  iVar2 = param_1[0x59];
  if ((iVar2 != 0) && (iVar3 = iVar2 * 0x10 + 0x10, iVar2 + iVar3 != -5)) {
    thunk_FUN_01be4678(param_1[0x58] - iVar3);
  }
  FUN_006b34e8(param_1 + 0x78);
  FUN_006b33c4(param_1 + 0x80);
  FUN_006b3cc0(param_1 + 0x88);
  FUN_006e1b00(param_1 + 0x6a);
  return;
}

