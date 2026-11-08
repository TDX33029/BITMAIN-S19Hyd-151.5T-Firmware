// FUN_016e2fc4 @ 016e2fc4 size=380 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_016e2fc4(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_44;
  int iStack_40;
  undefined1 *puStack_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  uVar6 = 1;
  uVar3 = (**(code **)(param_3[1] + 0xc))(*param_3,&DAT_0053340d,1);
  if (param_2 != 0) {
    param_2 = param_2 * 0x1c;
    bVar2 = false;
    do {
      uVar1 = uVar3 & 1;
      uVar3 = 1;
      if (uVar1 == 0) {
        if ((*(byte *)((int)param_3 + 10) & 0x80) == 0) {
          if (bVar2) {
            iVar4 = (**(code **)(param_3[1] + 0xc))(*param_3,&DAT_00533bc1,2);
            uVar3 = 1;
            if (iVar4 != 0) goto LAB_016e3104;
          }
          uVar3 = FUN_016e2bfc(param_1,param_3);
        }
        else {
          uVar5 = *param_3;
          iVar4 = param_3[1];
          if (!bVar2) {
            iVar4 = (**(code **)(iVar4 + 0xc))(uVar5,"\n",1);
            if (iVar4 != 0) goto LAB_016e3104;
            uVar5 = *param_3;
            iVar4 = param_3[1];
          }
          local_2c = param_3[2];
          uStack_28 = param_3[3];
          puStack_3c = &local_35;
          local_35 = 1;
          local_30 = &DAT_01ce45f8;
          local_34 = &uStack_44;
          uStack_44 = uVar5;
          iStack_40 = iVar4;
          iVar4 = FUN_016e2bfc(param_1,&local_34);
          if (iVar4 == 0) {
            uVar3 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
          }
          else {
            uVar3 = 1;
          }
        }
      }
LAB_016e3104:
      param_1 = param_1 + 0x1c;
      param_2 = param_2 + -0x1c;
      bVar2 = true;
    } while (param_2 != 0);
  }
  if (uVar3 == 0) {
    uVar6 = (**(code **)(param_3[1] + 0xc))(*param_3,"]",1);
  }
  return uVar6;
}

