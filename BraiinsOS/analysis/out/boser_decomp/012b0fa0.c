// FUN_012b0fa0 @ 012b0fa0 size=204 calls_out=1 calls_in=1
// strings: 

undefined4 * FUN_012b0fa0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_1[1];
  iVar5 = *param_1;
  do {
    if (iVar5 == iVar6) {
      return (undefined4 *)0x0;
    }
    iVar1 = *param_2;
    puVar4 = (undefined4 *)(iVar5 + 8);
    *param_1 = iVar5 + 0x10;
    piVar3 = (int *)(*(int *)(iVar1 + 4) + 4);
    for (iVar1 = *(int *)(iVar1 + 8) << 3; iVar1 != 0; iVar1 = iVar1 + -8) {
      if ((*piVar3 == *(int *)(iVar5 + 0xc)) &&
         (iVar2 = thunk_FUN_01bed842(piVar3[-1],*puVar4), iVar2 == 0)) goto LAB_012b1054;
      piVar3 = piVar3 + 2;
    }
    iVar1 = param_2[2] << 3;
    piVar3 = (int *)(param_2[1] + 4);
    while( true ) {
      if (iVar1 == 0) {
        return puVar4;
      }
      if ((*piVar3 == *(int *)(iVar5 + 0xc)) &&
         (iVar2 = thunk_FUN_01bed842(piVar3[-1],*puVar4), iVar2 == 0)) break;
      iVar1 = iVar1 + -8;
      piVar3 = piVar3 + 2;
    }
LAB_012b1054:
    iVar5 = iVar5 + 0x10;
  } while( true );
}

