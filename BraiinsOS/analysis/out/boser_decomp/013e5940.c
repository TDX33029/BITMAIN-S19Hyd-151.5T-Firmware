// FUN_013e5940 @ 013e5940 size=372 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_013e5940(undefined1 *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 local_7c [4];
  undefined *local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined *local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined *local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined *local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined *local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined *local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined1 **local_30;
  undefined1 *local_2c;
  undefined1 **local_28;
  
  local_58 = *param_1;
  local_38 = 2;
  local_44 = 2;
  local_50 = 2;
  local_5c = 2;
  local_68 = 2;
  local_74 = 2;
  local_64 = param_1[1];
  local_7c[0] = param_1[2];
  local_4c = param_1[3];
  local_70 = param_1[5];
  local_40 = param_1[4];
  local_3c = &DAT_00474f40;
  local_48 = &DAT_00474f3e;
  local_60 = &DAT_00474f3a;
  local_34 = local_7c;
  local_6c = &DAT_00474f38;
  local_30 = &local_34;
  local_54 = &DAT_00474f3c;
  local_78 = &DAT_00474f36;
  uVar5 = FUN_013cb214(&local_34);
  uVar4 = *param_2;
  if ((int)uVar5 == 0) {
    iVar3 = param_2[1];
  }
  else {
    iVar3 = param_2[1];
    iVar1 = (**(code **)(iVar3 + 0xc))(uVar4,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    if (iVar1 != 0) {
      return 1;
    }
  }
  local_28 = local_30;
  local_2c = local_34;
  while( true ) {
    uVar5 = FUN_013cb214(&local_2c);
    if ((int)uVar5 == 0) {
      return 0;
    }
    pcVar2 = *(code **)(iVar3 + 0xc);
    iVar1 = (*pcVar2)(uVar4,",",1);
    if (iVar1 != 0) break;
    iVar1 = (*pcVar2)(uVar4,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 1;
}

