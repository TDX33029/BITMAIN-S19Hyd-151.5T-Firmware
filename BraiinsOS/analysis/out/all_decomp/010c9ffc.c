// FUN_010c9ffc @ 010c9ffc size=540 calls_out=1 calls_in=0
// strings: hyper_util::client::legacy::Error

undefined4 FUN_010c9ffc(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *local_40;
  undefined *local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  
  puVar5 = (undefined1 *)*param_2;
  puVar6 = (undefined *)param_2[1];
  pcVar3 = *(code **)(puVar6 + 0xc);
  iVar1 = (*pcVar3)(puVar5,"hyper_util::client::legacy::Error",0x21);
  iVar4 = 1;
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar3)(puVar5,"(",1);
      if (iVar1 == 0) {
        iVar4 = (*pcVar3)(puVar5,(&PTR_DAT_018b1fb4)[*(byte *)(param_1 + 6)],
                          *(undefined4 *)(&DAT_004200dc + (uint)*(byte *)(param_1 + 6) * 4));
      }
    }
    else {
      iVar1 = (*pcVar3)(puVar5,"(\n",2);
      if (iVar1 == 0) {
        iVar4 = 1;
        local_40 = (undefined1 *)CONCAT31(local_40._1_3_,1);
        local_30 = puVar5;
        local_2c = puVar6;
        local_28 = (undefined1 *)&local_40;
        iVar1 = FUN_00fb1f64(&local_30,(&PTR_DAT_018b1fd0)[*(byte *)(param_1 + 6)],
                             *(undefined4 *)(&DAT_004200f8 + (uint)*(byte *)(param_1 + 6) * 4));
        if (iVar1 == 0) {
          iVar4 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
        }
      }
    }
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (iVar4 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar4 = (*pcVar3)(puVar5,&DAT_0041950f,2);
      if (iVar4 != 0) {
        return 1;
      }
      iVar4 = (**(code **)(param_1[1] + 0xc))(iVar1,param_2);
    }
    else {
      local_38 = &local_31;
      local_31 = 1;
      local_2c = &DAT_01880dc4;
      local_28 = (undefined1 *)param_2[2];
      local_24 = param_2[3];
      local_40 = puVar5;
      local_3c = puVar6;
      local_30 = (undefined1 *)&local_40;
      iVar4 = (**(code **)(param_1[1] + 0xc))(iVar1,&local_30);
      if (iVar4 != 0) {
        return 1;
      }
      iVar4 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
    }
  }
  uVar2 = 1;
  if (iVar4 == 0) {
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
  }
  return uVar2;
}

