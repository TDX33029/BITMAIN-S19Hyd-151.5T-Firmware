// FUN_00a938f8 @ 00a938f8 size=48 calls_out=0 calls_in=2
// strings: 

void FUN_00a938f8(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_2;
  uVar2 = (**(code **)(param_2[2] + *(int *)(&DAT_00535250 + iVar1 * 4)))(param_2[1]);
  *param_1 = iVar1;
  *(undefined8 *)(param_1 + 1) = uVar2;
  return;
}

