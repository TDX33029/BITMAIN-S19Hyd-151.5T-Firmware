// FUN_00fea030 @ 00fea030 size=112 calls_out=2 calls_in=1
// strings: 

void FUN_00fea030(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*param_1 == 1) {
    iVar1 = param_1[1];
    puVar2 = (undefined4 *)param_1[2];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(iVar1);
    }
  }
  else {
    if (*param_1 != 0) goto LAB_00fea094;
    iVar1 = param_1[1];
    puVar2 = (undefined4 *)param_1[2];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(iVar1);
    }
  }
  if (puVar2[1] != 0) {
    thunk_FUN_01be4678(iVar1);
  }
LAB_00fea094:
  FUN_012d40d0(param_1[3],param_1[4]);
  return;
}

