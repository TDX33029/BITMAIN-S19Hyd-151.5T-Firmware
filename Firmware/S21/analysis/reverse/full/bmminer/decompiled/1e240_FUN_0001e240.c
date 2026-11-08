// FUN_0001e240 @ 0001e240  size=92  callers=0
// program: bmminer


int FUN_0001e240(int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  
  pcVar3 = FUN_00020018;
  iVar4 = 0;
  while( true ) {
    iVar1 = (*pcVar3)();
    iVar2 = (**(code **)(iVar1 + 0x18))();
    iVar4 = iVar4 + 1;
    if (iVar2 == param_1) {
      return iVar1;
    }
    (**(code **)(iVar1 + 0x128))(iVar1);
    if (iVar4 == 3) break;
    pcVar3 = *(code **)(&UNK_0009a570 + iVar4 * 4);
  }
  return 0;
}

