// FUN_00aae598 @ 00aae598 size=620 calls_out=3 calls_in=1
// strings: 

byte FUN_00aae598(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *****pppppuVar5;
  int iVar6;
  int local_4c;
  int *local_48;
  byte local_44;
  byte local_43;
  undefined4 *****local_40;
  code *local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined4 *****local_30;
  undefined4 *****local_2c;
  code *local_28;
  
  iVar3 = *param_1;
  iVar6 = *param_2;
  pcVar4 = *(code **)(param_2[1] + 0xc);
  local_4c = iVar3;
  iVar2 = (*pcVar4)(iVar6,&DAT_0036dfc9,0xf);
  bVar1 = 1;
  local_48 = param_2;
  if (iVar2 == 0) {
    pppppuVar5 = (undefined4 *****)(iVar3 + 0x208);
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar4)(iVar6,&DAT_00414a79,3);
      bVar1 = 1;
      if (iVar2 == 0) {
        iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568d68,4);
        bVar1 = 1;
        if (iVar2 == 0) {
          iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
          bVar1 = 1;
          if (iVar2 == 0) {
            local_3c = FUN_00fc28a0;
            local_40 = &local_2c;
            local_2c = pppppuVar5;
            bVar1 = FUN_00fa948c(*param_2,param_2[1],&DAT_0058370d,&local_40);
          }
        }
      }
    }
    else {
      iVar2 = (*pcVar4)(iVar6,&DAT_00414a7e,3);
      bVar1 = 1;
      if (iVar2 == 0) {
        local_40 = (undefined4 *****)*param_2;
        local_3c = (code *)param_2[1];
        local_38 = &local_31;
        local_31 = 1;
        iVar2 = FUN_00fb1f64(&local_40,&DAT_00568d68,4);
        if ((iVar2 == 0) && (iVar2 = FUN_00fb1f64(&local_40,&DAT_00414a7c,2), iVar2 == 0)) {
          local_28 = FUN_00fc28a0;
          local_2c = &local_30;
          local_30 = pppppuVar5;
          iVar2 = FUN_00fa948c(&local_40,&DAT_01880dc4,&DAT_0058370d,&local_2c);
          if (iVar2 == 0) {
            bVar1 = FUN_00fb1f64(&local_40,&DAT_00414a81,2);
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
  FUN_00fb2258(&local_48,&DAT_00414725,5,&local_4c,FUN_00aae848);
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

