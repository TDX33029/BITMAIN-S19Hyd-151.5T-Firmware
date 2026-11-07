// FUN_009bacb8 @ 009bacb8 size=592 calls_out=3 calls_in=0
// strings: counter | counter

byte FUN_009bacb8(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int local_50;
  undefined4 *local_4c;
  byte local_48;
  byte local_47;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar4 = *param_1;
  uVar5 = *param_2;
  local_50 = iVar4 + 8;
  pcVar3 = *(code **)(param_2[1] + 0xc);
  iVar2 = (*pcVar3)(uVar5,&DAT_0034a969,0xb);
  bVar1 = 1;
  local_47 = 0;
  local_48 = (byte)iVar2;
  local_4c = param_2;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar3)(uVar5,&DAT_00414a79,3);
      bVar1 = 1;
      if (iVar2 == 0) {
        iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"counter",7);
        bVar1 = 1;
        if (iVar2 == 0) {
          iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
          bVar1 = 1;
          if (iVar2 == 0) {
            bVar1 = FUN_00faabf8(*(undefined4 *)(iVar4 + 0xc),param_2);
          }
        }
      }
    }
    else {
      iVar2 = (*pcVar3)(uVar5,&DAT_00414a7e,3);
      bVar1 = 1;
      if (iVar2 == 0) {
        local_44 = *param_2;
        local_40 = param_2[1];
        local_2c = param_2[2];
        local_28 = param_2[3];
        local_3c = &local_35;
        local_34 = &local_44;
        local_35 = 1;
        local_30 = &DAT_01880dc4;
        iVar2 = FUN_00fb1f64(local_34,"counter",7);
        if ((iVar2 == 0) && (iVar2 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2), iVar2 == 0)) {
          iVar2 = FUN_00faabf8(*(undefined4 *)(iVar4 + 0xc),&local_34);
          if (iVar2 == 0) {
            bVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
          }
          else {
            bVar1 = 1;
          }
        }
      }
    }
  }
  local_47 = 1;
  local_48 = bVar1;
  FUN_00fb2258(&local_4c,&DAT_0056aa08,8,&local_50,FUN_009bd02c);
  if (local_47 != 1 || (local_48 & 1) != 0) {
    return (local_47 | local_48) & 1;
  }
  if ((*(byte *)((int)local_4c + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_4c[1] + 0xc))(*local_4c," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_4c[1] + 0xc))(*local_4c,"}",1);
  return bVar1 & 1;
}

