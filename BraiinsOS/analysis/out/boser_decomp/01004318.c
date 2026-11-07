// FUN_01004318 @ 01004318 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_01004318(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      uVar2 = FUN_00facfc4(param_2[1],param_2[2]);
    }
    else {
      uVar2 = FUN_011d97e8(param_2[1],param_2[2]);
    }
    *(undefined8 *)(param_1 + 1) = uVar2;
  }
  *param_1 = iVar1;
  return;
}

