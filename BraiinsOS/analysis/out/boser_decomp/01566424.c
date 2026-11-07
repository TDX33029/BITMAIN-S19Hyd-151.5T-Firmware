// FUN_01566424 @ 01566424 size=76 calls_out=1 calls_in=2
// strings: 

void FUN_01566424(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)0x0;
  if (*param_1 != 0) {
    piVar2 = param_1;
  }
  while (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    piVar2 = (int *)(iVar1 + 0xc);
    iVar3 = *piVar2;
    iVar1 = *(int *)(iVar1 + 8);
    FUN_01676264(param_2,*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10));
    if (iVar3 == 0) {
      piVar2 = (int *)0x0;
    }
  }
  return;
}

