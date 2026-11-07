// FUN_0004aa94 @ 0004aa94  size=40  callers=1
// program: bmminer


void FUN_0004aa94(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + -4);
  iVar1 = 0x31;
  do {
    iVar2 = iVar1 + 1;
    puVar3 = puVar3 + 1;
    FUN_00045c40(iVar1,*puVar3);
    iVar1 = iVar2;
  } while (iVar2 != 0x39);
  return;
}

