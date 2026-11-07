// FUN_018fe374 @ 018fe374 size=168 calls_out=3 calls_in=3
// strings: 

undefined8 FUN_018fe374(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_54 [12];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar4 = (**(code **)(*(int *)(param_1 + 0xc) + 0x18))(*(undefined4 *)(param_1 + 8));
  iVar3 = (int)((ulonglong)uVar4 >> 0x20);
  uVar1 = (undefined4)uVar4;
  uVar2 = (**(code **)(*(int *)(param_1 + 0x14) + 0x14))(*(undefined4 *)(param_1 + 0x10));
  FUN_018fe59c(&local_78,uVar1,*(undefined4 *)(iVar3 + 0xc),uVar2);
  FUN_018fe73c(auStack_54,uVar1,*(undefined4 *)(iVar3 + 0xc));
  local_48 = local_78;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  uStack_3c = uStack_6c;
  local_38 = local_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  uStack_28 = uStack_58;
  uVar4 = (**(code **)(*(int *)(param_1 + 0x14) + 0x10))
                    (*(undefined4 *)(param_1 + 0x10),&local_48,auStack_54);
  FUN_01443048(uVar1,iVar3);
  return uVar4;
}

