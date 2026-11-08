// FUN_013e7ec4 @ 013e7ec4 size=560 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_013e7ec4(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_48;
  int iStack_44;
  undefined1 *puStack_40;
  undefined1 local_39;
  undefined4 *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  
  uVar6 = 1;
  uVar3 = (**(code **)(param_3[1] + 0xc))(*param_3,&DAT_0053340d,1);
  if (param_2 != 0) {
    param_2 = param_2 * 0xf0;
    bVar2 = false;
    do {
      uVar1 = uVar3 & 1;
      uVar3 = 1;
      if (uVar1 == 0) {
        if ((*(byte *)((int)param_3 + 10) & 0x80) == 0) {
          if (bVar2) {
            iVar4 = (**(code **)(param_3[1] + 0xc))(*param_3,&DAT_00533bc1,2);
            uVar3 = 1;
            if (iVar4 != 0) goto LAB_013e80b8;
          }
          local_38 = (undefined4 *)(param_1 + 0xe8);
          uVar3 = FUN_01303d90(param_3,&DAT_00475b78,0xd,&DAT_005319eb,2,param_1,FUN_013e7de4,
                               &DAT_0056ce38,4,&local_38,&LAB_013cf0dc);
        }
        else {
          uVar5 = *param_3;
          iVar4 = param_3[1];
          if (!bVar2) {
            iVar4 = (**(code **)(iVar4 + 0xc))(uVar5,"\n",1);
            if (iVar4 != 0) goto LAB_013e80b8;
            uVar5 = *param_3;
            iVar4 = param_3[1];
          }
          local_30 = param_3[2];
          uStack_2c = param_3[3];
          local_39 = 1;
          puStack_40 = &local_39;
          local_34 = &DAT_01ce45f8;
          local_38 = &local_48;
          local_28 = param_1 + 0xe8;
          local_48 = uVar5;
          iStack_44 = iVar4;
          iVar4 = FUN_01303d90(&local_38,&DAT_00475b78,0xd,&DAT_005319eb,2,param_1,FUN_013e7de4,
                               &DAT_0056ce38,4,&local_28,&LAB_013cf0dc);
          if (iVar4 == 0) {
            uVar3 = (**(code **)(local_34 + 0xc))(local_38,&DAT_005312e2,2);
          }
          else {
            uVar3 = 1;
          }
        }
      }
LAB_013e80b8:
      param_1 = param_1 + 0xf0;
      param_2 = param_2 + -0xf0;
      bVar2 = true;
    } while (param_2 != 0);
  }
  if (uVar3 == 0) {
    uVar6 = (**(code **)(param_3[1] + 0xc))(*param_3,"]",1);
  }
  return uVar6;
}

