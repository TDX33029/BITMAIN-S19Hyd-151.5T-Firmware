// FUN_0140ca38 @ 0140ca38 size=316 calls_out=2 calls_in=0
// strings: http::Error

void FUN_0140ca38(byte *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 local_50;
  undefined4 *local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar5 = *param_2;
  pcVar3 = *(code **)(param_2[1] + 0xc);
  iVar2 = (*pcVar3)(uVar5,"http::Error",0xb);
  uVar1 = 1;
  local_47 = 0;
  local_4c = param_2;
  if (iVar2 == 0) {
    puVar4 = (&PTR_DAT_01d32350)[*param_1];
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar3)(uVar5,"(",1);
      if (iVar2 == 0) {
        uVar1 = (**(code **)(puVar4 + 0xc))(param_1 + 1,param_2);
      }
    }
    else {
      iVar2 = (*pcVar3)(uVar5,"(\n",2);
      uVar1 = 1;
      if (iVar2 == 0) {
        local_44 = *param_2;
        uStack_40 = param_2[1];
        local_2c = param_2[2];
        local_28 = param_2[3];
        puStack_3c = &local_35;
        local_30 = &DAT_01ce45f8;
        local_34 = &local_44;
        local_35 = 1;
        iVar2 = (**(code **)(puVar4 + 0xc))(param_1 + 1,&local_34);
        if (iVar2 == 0) {
          uVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
        }
      }
    }
  }
  local_50 = 1;
  local_48 = uVar1;
  FUN_01302aa0(&local_50);
  return;
}

