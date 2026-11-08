// FUN_01befa3c @ 01befa3c size=44 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_01befa3c(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_3 < 0) {
    puVar2 = (undefined4 *)FUN_01be3244();
    uVar1 = 0xffffffff;
    *puVar2 = 0x16;
  }
  else {
    uVar1 = 0;
    *param_1 = param_3;
    param_1[1] = 0;
    param_1[2] = (uint)(param_2 == 0) << 7;
  }
  return uVar1;
}

