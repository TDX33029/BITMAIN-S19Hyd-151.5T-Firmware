// FUN_0110f46c @ 0110f46c size=580 calls_out=3 calls_in=0
// strings: 

byte FUN_0110f46c(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int local_4c;
  undefined4 *local_48;
  byte local_44;
  byte local_43;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined4 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_4c = param_1 + 0xc;
  uVar4 = *param_2;
  pcVar3 = *(code **)(param_2[1] + 0xc);
  iVar2 = (*pcVar3)(uVar4,&DAT_004147af,0xd);
  bVar1 = 1;
  local_48 = param_2;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar3)(uVar4,&DAT_00414a79,3);
      bVar1 = 1;
      if (iVar2 == 0) {
        iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_004147bc,5);
        bVar1 = 1;
        if (iVar2 == 0) {
          iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
          bVar1 = 1;
          if (iVar2 == 0) {
            bVar1 = FUN_0110eb30(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_2);
          }
        }
      }
    }
    else {
      iVar2 = (*pcVar3)(uVar4,&DAT_00414a7e,3);
      bVar1 = 1;
      if (iVar2 == 0) {
        local_40 = *param_2;
        local_3c = param_2[1];
        local_28 = param_2[2];
        local_24 = param_2[3];
        local_38 = &local_31;
        local_30 = &local_40;
        local_31 = 1;
        local_2c = &DAT_01880dc4;
        iVar2 = FUN_00fb1f64(local_30,&DAT_004147bc,5);
        if ((iVar2 == 0) && (iVar2 = FUN_00fb1f64(&local_40,&DAT_00414a7c,2), iVar2 == 0)) {
          iVar2 = FUN_0110eb30(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),&local_30);
          if (iVar2 == 0) {
            bVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
          }
          else {
            bVar1 = 1;
          }
        }
      }
    }
  }
  local_43 = 1;
  local_44 = bVar1;
  FUN_00fb2258(&local_48,&DAT_00418447,5,&local_4c,FUN_010903d8);
  if (local_43 != 1 || (local_44 & 1) != 0) {
    return (local_43 | local_44) & 1;
  }
  if ((*(byte *)((int)local_48 + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_48[1] + 0xc))(*local_48," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_48[1] + 0xc))(*local_48,"}",1);
  return bVar1 & 1;
}

