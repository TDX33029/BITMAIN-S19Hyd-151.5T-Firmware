// FUN_0170797c @ 0170797c size=172 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_0170797c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  FUN_01781f64(&DAT_018de72c,0,0,0);
  iVar2 = *(int *)(param_1 + 0x134);
  if (param_1 == DAT_018de74c) {
    DAT_018de74c = iVar2;
  }
  else if (*(int *)(param_1 + 0x138) != 0) {
    *(int *)(*(int *)(param_1 + 0x138) + 0x134) = iVar2;
  }
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x138) = *(undefined4 *)(param_1 + 0x138);
  }
  FUN_01781fc4(&DAT_018de72c);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x130) != 0) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x130) + 4) + 8))();
    uVar1 = *(undefined4 *)(param_1 + 0x130);
  }
  FUN_0177aafc(uVar1);
  uVar1 = FUN_0177aafc(param_1);
  return uVar1;
}

