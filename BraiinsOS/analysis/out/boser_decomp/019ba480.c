// FUN_019ba480 @ 019ba480 size=92 calls_out=2 calls_in=1
// strings: 

void FUN_019ba480(uint *param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = FUN_01bf033e(param_2,param_2,0,0,0);
  if (lVar3 == -1) {
    puVar1 = (uint *)FUN_01be3244();
    uVar2 = *puVar1;
    param_1[1] = 0;
    param_1[2] = uVar2;
  }
  else {
    *(longlong *)(param_1 + 2) = lVar3;
  }
  *param_1 = (uint)(lVar3 == -1);
  return;
}

