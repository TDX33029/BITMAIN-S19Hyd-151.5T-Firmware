// FUN_01be5878 @ 01be5878 size=40 calls_out=2 calls_in=127
// strings: 

undefined4 FUN_01be5878(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (param_2 < 4) {
    return 0x16;
  }
  iVar1 = FUN_01be402c(param_2,param_3);
  if (iVar1 == 0) {
    puVar3 = (undefined4 *)FUN_01be3244();
    uVar2 = *puVar3;
  }
  else {
    uVar2 = 0;
    *param_1 = iVar1;
  }
  return uVar2;
}

