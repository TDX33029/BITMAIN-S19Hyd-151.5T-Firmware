// FUN_01b256ac @ 01b256ac size=132 calls_out=0 calls_in=6
// strings: 

bool FUN_01b256ac(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((*(int *)(param_1[2] + 4) == 0x3e1) &&
      (puVar2 = *(undefined4 **)(param_1[2] + 8), puVar2 != (undefined4 *)0x0)) &&
     (*(int *)*puVar2 - 0x3e2U < 3)) {
    return false;
  }
  if (param_2 == 0) {
    iVar1 = *(int *)(*param_1 + 0x18);
  }
  else {
    iVar1 = *(int *)(*param_1 + 0x24);
  }
  return iVar1 != 0;
}

