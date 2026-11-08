// FUN_007103d0 @ 007103d0 size=48 calls_out=1 calls_in=2
// strings: 

void FUN_007103d0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(**(int **)(param_2 + 0xc) * 4 + 0x534fb0);
  uVar2 = FUN_007110d0(param_2);
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 1) = uVar2;
  return;
}

