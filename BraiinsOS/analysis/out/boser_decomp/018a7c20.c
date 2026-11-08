// FUN_018a7c20 @ 018a7c20 size=560 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_018a7c20(int param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 local_48;
  int iStack_44;
  undefined1 *puStack_40;
  undefined1 local_39;
  undefined4 *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  
  iVar6 = *(int *)(param_1 + 4);
  uVar7 = 1;
  iVar8 = *(int *)(param_1 + 8);
  uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053340d,1);
  if (iVar8 != 0) {
    iVar8 = iVar8 << 4;
    bVar2 = false;
    do {
      uVar1 = uVar3 & 1;
      uVar3 = 1;
      if (uVar1 == 0) {
        if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
          if (bVar2) {
            iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00533bc1,2);
            uVar3 = 1;
            if (iVar4 != 0) goto LAB_018a7e14;
          }
          local_38 = (undefined4 *)(iVar6 + 0xc);
          uVar3 = FUN_01303d90(param_2,&DAT_0051dac5,0x14,&DAT_00570440,8,iVar6,&LAB_018c3e68,
                               &DAT_0051dad9,0x15,&local_38,FUN_015fc038);
        }
        else {
          uVar5 = *param_2;
          iVar4 = param_2[1];
          if (!bVar2) {
            iVar4 = (**(code **)(iVar4 + 0xc))(uVar5,"\n",1);
            if (iVar4 != 0) goto LAB_018a7e14;
            uVar5 = *param_2;
            iVar4 = param_2[1];
          }
          local_30 = param_2[2];
          uStack_2c = param_2[3];
          local_39 = 1;
          puStack_40 = &local_39;
          local_34 = &DAT_01ce45f8;
          local_38 = &local_48;
          local_28 = iVar6 + 0xc;
          local_48 = uVar5;
          iStack_44 = iVar4;
          iVar4 = FUN_01303d90(&local_38,&DAT_0051dac5,0x14,&DAT_00570440,8,iVar6,&LAB_018c3e68,
                               &DAT_0051dad9,0x15,&local_28,FUN_015fc038);
          if (iVar4 == 0) {
            uVar3 = (**(code **)(local_34 + 0xc))(local_38,&DAT_005312e2,2);
          }
          else {
            uVar3 = 1;
          }
        }
      }
LAB_018a7e14:
      iVar6 = iVar6 + 0x10;
      iVar8 = iVar8 + -0x10;
      bVar2 = true;
    } while (iVar8 != 0);
  }
  if (uVar3 == 0) {
    uVar7 = (**(code **)(param_2[1] + 0xc))(*param_2,"]",1);
  }
  return uVar7;
}

