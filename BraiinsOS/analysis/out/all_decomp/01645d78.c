// FUN_01645d78 @ 01645d78 size=52 calls_out=0 calls_in=0
// strings: 

void FUN_01645d78(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_1 + 4);
  for (iVar3 = *(int *)(param_1 + 0x100); iVar3 != 0; iVar3 = iVar3 + -1) {
    piVar1 = puVar4 + -1;
    uVar2 = *puVar4;
    puVar4 = puVar4 + 2;
    (**(code **)(*piVar1 + 0xc))(uVar2);
  }
  return;
}

