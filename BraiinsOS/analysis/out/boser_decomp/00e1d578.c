// FUN_00e1d578 @ 00e1d578 size=136 calls_out=2 calls_in=1
// strings: 

void FUN_00e1d578(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 4) {
    return;
  }
  if (iVar1 == 1) {
    iVar1 = param_1[1];
    puVar2 = (undefined4 *)param_1[2];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(iVar1);
    }
  }
  else {
    if (iVar1 != 0) goto LAB_00e1d5e4;
    iVar1 = param_1[1];
    puVar2 = (undefined4 *)param_1[2];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(iVar1);
    }
  }
  if (puVar2[1] != 0) {
    thunk_FUN_01be4678(iVar1);
  }
LAB_00e1d5e4:
  if (param_1[3] == 0) {
    return;
  }
  FUN_00f80320(param_1[3],param_1[4]);
  return;
}

