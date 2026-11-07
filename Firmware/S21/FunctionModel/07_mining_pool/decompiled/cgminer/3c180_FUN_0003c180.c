// FUN_0003c180 @ 0003c180  size=48  callers=0
// program: cgminer


undefined4 FUN_0003c180(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_2 + 0x4c) = param_3;
  uVar1 = FUN_0002d974();
  FUN_0002a654(uVar1,param_2,0);
  FUN_0003b884(uVar1);
  return 1;
}

