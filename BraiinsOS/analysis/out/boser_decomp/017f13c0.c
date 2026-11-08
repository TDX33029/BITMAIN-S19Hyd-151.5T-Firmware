// FUN_017f13c0 @ 017f13c0 size=192 calls_out=5 calls_in=2
// strings: 

void FUN_017f13c0(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  
  iVar2 = *param_2;
  iVar4 = param_2[1];
  iVar5 = param_2[2];
  iVar1 = FUN_0139f0d0(*(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x38),iVar4,iVar5);
  piVar3 = (int *)*param_3;
  puVar6 = *(undefined1 **)(iVar1 + 0x18);
  iVar1 = *piVar3;
  FUN_017baf84(iVar1 + 0xb0,*(undefined4 *)param_3[1],*(undefined1 *)param_3[2],
               *(undefined4 *)param_3[3],param_2,param_1,iVar1 + 0xa8);
  FUN_01394640(*piVar3,param_2,param_1);
  iVar1 = FUN_0139f148(*(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x38),iVar4,iVar5);
  iVar2 = *(int *)(iVar1 + 0x50);
  *(undefined4 *)(iVar1 + 0x50) = 0;
  if (iVar2 != 0) {
    (**(code **)(iVar2 + 4))(*(undefined4 *)(iVar1 + 0x54));
  }
  FUN_013b1740(param_1,param_2,puVar6 != &DAT_3b9aca00);
  return;
}

