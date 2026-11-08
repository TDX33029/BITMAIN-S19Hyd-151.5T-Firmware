// FUN_01442d40 @ 01442d40 size=528 calls_out=2 calls_in=0
// strings: hyper_util::client::legacy::Error

void FUN_01442d40(int *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 local_4c;
  int *local_48;
  undefined1 local_44;
  undefined1 local_43;
  int local_40;
  int iStack_3c;
  undefined1 *puStack_38;
  undefined1 local_31;
  int *local_30;
  undefined *local_2c;
  int *local_28;
  int local_24;
  
  iVar5 = *param_2;
  pcVar4 = *(code **)(param_2[1] + 0xc);
  iVar2 = (*pcVar4)(iVar5,"hyper_util::client::legacy::Error",0x21);
  iVar3 = 1;
  local_43 = 0;
  local_48 = param_2;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar4)(iVar5,"(",1);
      if (iVar2 == 0) {
        iVar3 = (**(code **)(param_2[1] + 0xc))
                          (*param_2,(&PTR_DAT_01d32704)[*(byte *)(param_1 + 6)],
                           *(undefined4 *)(&DAT_00537030 + (uint)*(byte *)(param_1 + 6) * 4));
      }
    }
    else {
      iVar2 = (*pcVar4)(iVar5,"(\n",2);
      iVar3 = 1;
      if (iVar2 == 0) {
        local_30 = (int *)*param_2;
        local_2c = (undefined *)param_2[1];
        local_28 = &local_40;
        iVar3 = 1;
        local_40 = CONCAT31(local_40._1_3_,1);
        iVar2 = FUN_01302620(&local_30,(&PTR_DAT_01d32720)[*(byte *)(param_1 + 6)],
                             *(undefined4 *)(&DAT_0053704c + (uint)*(byte *)(param_1 + 6) * 4));
        if (iVar2 == 0) {
          iVar3 = FUN_01302620(&local_30,&DAT_005312e2,2);
        }
      }
    }
  }
  iVar2 = *param_1;
  local_4c = 1;
  local_44 = (undefined1)iVar3;
  if (iVar2 != 0) {
    uVar1 = 1;
    if (iVar3 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00533bc1,2);
        if (iVar3 == 0) {
          uVar1 = (**(code **)(param_1[1] + 0xc))(iVar2,param_2);
        }
      }
      else {
        local_40 = *param_2;
        iStack_3c = param_2[1];
        puStack_38 = &local_31;
        local_28 = (int *)param_2[2];
        local_24 = param_2[3];
        local_30 = &local_40;
        local_31 = 1;
        local_2c = &DAT_01ce45f8;
        iVar2 = (**(code **)(param_1[1] + 0xc))(iVar2,&local_30);
        if (iVar2 == 0) {
          uVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_005312e2,2);
        }
      }
    }
    local_4c = 2;
    local_44 = uVar1;
  }
  FUN_01302aa0(&local_4c);
  return;
}

