// FUN_00709188 @ 00709188 size=96 calls_out=3 calls_in=4
// strings: 

void FUN_00709188(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_019ac130(&local_28,1);
  uVar1 = *(undefined4 *)(param_1 + 0x60);
  uVar2 = *(undefined4 *)(param_1 + 100);
  uVar3 = *(undefined4 *)(param_1 + 0x68);
  FUN_019fa158(&local_28,uVar1,local_28,local_24,local_20);
  FUN_019f598c(param_1,extraout_r1,local_28,local_24,local_20,1,uVar1,uVar2,uVar3);
  return;
}

