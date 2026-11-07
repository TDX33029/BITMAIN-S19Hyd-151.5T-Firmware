// FUN_015de250 @ 015de250 size=484 calls_out=2 calls_in=0
// strings: DnsQuestion | entry | DnsQuestion | entry

undefined4 FUN_015de250(undefined4 *param_1,int param_2,undefined4 *param_3)

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
  undefined4 *local_28;
  
  uVar6 = 1;
  uVar3 = (**(code **)(param_3[1] + 0xc))(*param_3,&DAT_0053340d,1);
  if (param_2 != 0) {
    param_2 = param_2 * 0x14;
    bVar2 = false;
    do {
      uVar1 = uVar3 & 1;
      uVar3 = 1;
      if (uVar1 == 0) {
        if ((*(byte *)((int)param_3 + 10) & 0x80) == 0) {
          if (bVar2) {
            iVar4 = (**(code **)(param_3[1] + 0xc))(*param_3,&DAT_00533bc1,2);
            uVar3 = 1;
            if (iVar4 != 0) goto LAB_015de3f8;
          }
          local_38 = param_1;
          uVar3 = FUN_01303cdc(param_3,"DnsQuestion",0xb,"entry",5,&local_38,FUN_015de160);
        }
        else {
          uVar5 = *param_3;
          iVar4 = param_3[1];
          if (!bVar2) {
            iVar4 = (**(code **)(iVar4 + 0xc))(uVar5,"\n",1);
            if (iVar4 != 0) goto LAB_015de3f8;
            uVar5 = *param_3;
            iVar4 = param_3[1];
          }
          local_30 = param_3[2];
          uStack_2c = param_3[3];
          local_39 = 1;
          puStack_40 = &local_39;
          local_34 = &DAT_01ce45f8;
          local_38 = &local_48;
          local_48 = uVar5;
          iStack_44 = iVar4;
          local_28 = param_1;
          iVar4 = FUN_01303cdc(&local_38,"DnsQuestion",0xb,"entry",5,&local_28,FUN_015de160);
          if (iVar4 == 0) {
            uVar3 = (**(code **)(local_34 + 0xc))(local_38,&DAT_005312e2,2);
          }
          else {
            uVar3 = 1;
          }
        }
      }
LAB_015de3f8:
      param_1 = param_1 + 5;
      param_2 = param_2 + -0x14;
      bVar2 = true;
    } while (param_2 != 0);
  }
  if (uVar3 == 0) {
    uVar6 = (**(code **)(param_3[1] + 0xc))(*param_3,"]",1);
  }
  return uVar6;
}

