// FUN_01abae18 @ 01abae18 size=528 calls_out=2 calls_in=0
// strings: 

void FUN_01abae18(undefined8 *param_1,undefined **param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_6c;
  undefined **local_64;
  undefined *local_60;
  int **local_5c;
  int *local_58;
  undefined1 *local_54;
  undefined **local_50;
  undefined *local_4c;
  undefined1 *local_48;
  undefined1 local_41;
  undefined ***local_40;
  code *local_3c;
  undefined *local_38;
  undefined *puStack_34;
  undefined ****local_30;
  undefined ***local_2c;
  code *local_28;
  
  uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053340d,1);
  uVar7 = *param_1;
  bVar2 = false;
  do {
    local_54 = &LAB_012c1d70;
    local_64 = &local_60;
    uVar1 = uVar3 & 1;
    uVar3 = 1;
    local_5c = &local_58;
    local_60 = &DAT_00590e5f;
    local_58 = (int *)&uStack_6c;
    uStack_6c = uVar7;
    if (uVar1 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        if (bVar2) {
          iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00533bc1,2);
          uVar3 = 1;
          if (iVar4 != 0) goto LAB_01abafe0;
        }
        local_3c = FUN_01ac297c;
        local_40 = &local_64;
        local_50 = param_2;
        uVar3 = FUN_012fa178(&local_50,&DAT_01d2f118,&DAT_00590e5f,&local_40);
      }
      else {
        ppuVar5 = (undefined **)*param_2;
        puVar6 = param_2[1];
        if (!bVar2) {
          iVar4 = (**(code **)(puVar6 + 0xc))(ppuVar5,"\n",1);
          if (iVar4 != 0) goto LAB_01abafe0;
          ppuVar5 = (undefined **)*param_2;
          puVar6 = param_2[1];
        }
        local_41 = 1;
        local_38 = param_2[2];
        puStack_34 = param_2[3];
        local_48 = &local_41;
        local_3c = (code *)&DAT_01ce45f8;
        local_40 = &local_50;
        local_30 = &local_40;
        local_28 = FUN_01ac297c;
        local_2c = &local_64;
        local_50 = ppuVar5;
        local_4c = puVar6;
        iVar4 = FUN_012fa178(&local_30,&DAT_01d2f118,&DAT_00590e5f,&local_2c);
        if (iVar4 == 0) {
          uVar3 = (**(code **)(local_3c + 0xc))(local_40,&DAT_005312e2,2);
        }
        else {
          uVar3 = 1;
        }
      }
    }
LAB_01abafe0:
    uVar7 = (**(code **)((int)((ulonglong)uVar7 >> 0x20) + 0x18))((int)uVar7);
    bVar2 = true;
    if ((int)uVar7 == 0) {
      if (uVar3 == 0) {
        (**(code **)(param_2[1] + 0xc))(*param_2,"]",1);
      }
      return;
    }
  } while( true );
}

