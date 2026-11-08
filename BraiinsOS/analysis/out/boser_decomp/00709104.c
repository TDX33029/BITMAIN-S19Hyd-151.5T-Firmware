// FUN_00709104 @ 00709104 size=100 calls_out=2 calls_in=3
// strings: 

void FUN_00709104(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_019e84a0(param_2,param_3);
  if (iVar1 == 0) {
    (*(code *)**(undefined4 **)(param_2 + 0x50))
              (&local_20,param_2 + 0x5c,*(undefined4 *)(param_2 + 0x54),
               *(undefined4 *)(param_2 + 0x58));
    FUN_00709188(param_2);
    *param_1 = local_20;
    param_1[1] = uStack_1c;
    param_1[2] = uStack_18;
    param_1[3] = uStack_14;
  }
  else {
    *param_1 = 0;
  }
  return;
}

