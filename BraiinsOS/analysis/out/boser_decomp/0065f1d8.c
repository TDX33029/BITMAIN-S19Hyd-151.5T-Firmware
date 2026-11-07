// FUN_0065f1d8 @ 0065f1d8 size=492 calls_out=2 calls_in=0
// strings: maxfrom_wildcardinput_offset | maxfrom_wildcardinput_offset

undefined4 FUN_0065f1d8(int param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
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
  
  piVar6 = *(int **)(param_1 + 4);
  uVar7 = 1;
  iVar8 = *(int *)(param_1 + 8);
  uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053340d,1);
  if (iVar8 != 0) {
    iVar8 = iVar8 << 2;
    bVar2 = false;
    do {
      uVar1 = uVar3 & 1;
      uVar3 = 1;
      if (uVar1 == 0) {
        if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
          if (bVar2) {
            iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00533bc1,2);
            uVar3 = 1;
            if (iVar4 != 0) goto LAB_0065f388;
          }
          local_38 = (undefined4 *)*piVar6;
          uVar3 = FUN_01303cdc(param_2,&DAT_003d3fb4,0xe,"maxfrom_wildcardinput_offset",3,&local_38,
                               FUN_018a010c);
        }
        else {
          uVar5 = *param_2;
          iVar4 = param_2[1];
          if (!bVar2) {
            iVar4 = (**(code **)(iVar4 + 0xc))(uVar5,"\n",1);
            if (iVar4 != 0) goto LAB_0065f388;
            uVar5 = *param_2;
            iVar4 = param_2[1];
          }
          local_30 = param_2[2];
          uStack_2c = param_2[3];
          local_39 = 1;
          puStack_40 = &local_39;
          local_34 = &DAT_01ce45f8;
          local_38 = &local_48;
          local_28 = *piVar6;
          local_48 = uVar5;
          iStack_44 = iVar4;
          iVar4 = FUN_01303cdc(&local_38,&DAT_003d3fb4,0xe,"maxfrom_wildcardinput_offset",3,
                               &local_28,FUN_018a010c);
          if (iVar4 == 0) {
            uVar3 = (**(code **)(local_34 + 0xc))(local_38,&DAT_005312e2,2);
          }
          else {
            uVar3 = 1;
          }
        }
      }
LAB_0065f388:
      piVar6 = piVar6 + 1;
      iVar8 = iVar8 + -4;
      bVar2 = true;
    } while (iVar8 != 0);
  }
  if (uVar3 == 0) {
    uVar7 = (**(code **)(param_2[1] + 0xc))(*param_2,"]",1);
  }
  return uVar7;
}

