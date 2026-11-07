// FUN_015e8938 @ 015e8938 size=388 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_015e8938(int param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uStack_44;
  int iStack_40;
  undefined1 *puStack_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iVar6 = *(int *)(param_1 + 4);
  iVar8 = *(int *)(param_1 + 8);
  uVar5 = 1;
  uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053340d,1);
  if (iVar8 != 0) {
    iVar8 = iVar8 << 3;
    piVar7 = (int *)(iVar6 + 4);
    bVar2 = false;
    do {
      uVar1 = uVar3 & 1;
      uVar3 = 1;
      if (uVar1 == 0) {
        if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
          if (bVar2) {
            iVar6 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00533bc1,2);
            uVar3 = 1;
            if (iVar6 != 0) goto LAB_015e8a80;
          }
          uVar3 = (**(code **)(*piVar7 + 0xc))(piVar7[-1],param_2);
        }
        else {
          uVar4 = *param_2;
          iVar6 = param_2[1];
          if (!bVar2) {
            iVar6 = (**(code **)(iVar6 + 0xc))(uVar4,"\n",1);
            if (iVar6 != 0) goto LAB_015e8a80;
            uVar4 = *param_2;
            iVar6 = param_2[1];
          }
          local_2c = param_2[2];
          uStack_28 = param_2[3];
          puStack_3c = &local_35;
          local_35 = 1;
          local_30 = &DAT_01ce45f8;
          local_34 = &uStack_44;
          uStack_44 = uVar4;
          iStack_40 = iVar6;
          iVar6 = (**(code **)(*piVar7 + 0xc))(piVar7[-1],&local_34);
          if (iVar6 == 0) {
            uVar3 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
          }
          else {
            uVar3 = 1;
          }
        }
      }
LAB_015e8a80:
      piVar7 = piVar7 + 2;
      iVar8 = iVar8 + -8;
      bVar2 = true;
    } while (iVar8 != 0);
  }
  if (uVar3 == 0) {
    uVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,"]",1);
  }
  return uVar5;
}

