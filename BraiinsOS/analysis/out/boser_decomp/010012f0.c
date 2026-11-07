// FUN_010012f0 @ 010012f0 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_010012f0(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      uVar2 = FUN_00facf38(param_2[1],param_2[2]);
    }
    else {
      uVar2 = FUN_011d8814(param_2[1],param_2[2]);
    }
    *(undefined8 *)(param_1 + 1) = uVar2;
  }
  *param_1 = iVar1;
  return;
}

