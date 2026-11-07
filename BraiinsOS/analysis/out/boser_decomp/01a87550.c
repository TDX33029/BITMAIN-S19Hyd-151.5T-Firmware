// FUN_01a87550 @ 01a87550 size=192 calls_out=5 calls_in=2
// strings: 

void FUN_01a87550(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *param_2;
  iVar5 = param_2[1];
  iVar6 = param_2[2];
  iVar1 = FUN_01367c40(*(undefined4 *)(iVar4 + 0x34),*(undefined4 *)(iVar4 + 0x38),iVar5,iVar6);
  uVar2 = *param_3;
  puVar3 = *(undefined1 **)(iVar1 + 0x18);
  FUN_01a84d9c(param_3[1],*(undefined4 *)param_3[3],*(undefined1 *)param_3[4],param_3[5],param_2,
               param_1,param_3[2]);
  FUN_0135abbc(uVar2,param_2,param_1);
  iVar1 = FUN_01367cb8(*(undefined4 *)(iVar4 + 0x34),*(undefined4 *)(iVar4 + 0x38),iVar5,iVar6);
  iVar4 = *(int *)(iVar1 + 0x50);
  *(undefined4 *)(iVar1 + 0x50) = 0;
  if (iVar4 != 0) {
    (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar1 + 0x54));
  }
  FUN_01387ff4(param_1,param_2,puVar3 != &DAT_3b9aca00);
  return;
}

