// FUN_0116d144 @ 0116d144 size=420 calls_out=5 calls_in=1
// strings: 

void FUN_0116d144(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_a8;
  int local_a4;
  int local_a0 [4];
  int local_90 [4];
  int iStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int local_70;
  int local_6c;
  int local_68;
  int iStack_64;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  char local_50;
  undefined2 local_4f;
  undefined1 local_4d;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char local_28;
  undefined2 local_27;
  undefined1 local_25;
  
  local_a4 = 2;
  local_a0[0] = *param_2;
  local_a0[1] = param_2[1];
  local_a0[2] = param_2[2];
  local_a0[3] = param_2[3];
  iVar3 = param_2[4];
  local_90[1] = param_2[5];
  local_90[2] = param_2[6];
  local_90[3] = param_2[7];
  iStack_80 = param_2[8];
  iStack_7c = param_2[9];
  local_78 = param_2[10];
  iStack_74 = param_2[0xb];
  local_a8 = 1;
  iVar2 = 1;
  local_90[0] = iVar3;
  if (iVar3 != 0) {
    piVar1 = local_a0;
    do {
      local_70 = *piVar1;
      local_6c = piVar1[1];
      local_68 = piVar1[2];
      iStack_64 = piVar1[3];
      FUN_01ac61a4(&local_60,iVar3,piVar1[5]);
      if (local_50 == '\x02') {
        *param_1 = 3;
        param_1[1] = 0;
        if (local_70 != 0) {
          (**(code **)(local_70 + 0x10))(&iStack_64,local_6c,local_68);
        }
        FUN_00711e0c(local_a0,local_a8,2);
        FUN_0116bc84(param_3);
        return;
      }
      local_38 = local_60;
      uStack_34 = uStack_5c;
      uStack_30 = uStack_58;
      uStack_2c = uStack_54;
      local_25 = local_4d;
      local_27 = local_4f;
      local_48 = local_70;
      iStack_44 = local_6c;
      iStack_40 = local_68;
      iStack_3c = iStack_64;
      local_28 = local_50;
      FUN_00714c58(&local_60,param_3);
      if (local_50 != '\x02') {
        (**(code **)(local_60 + 0x10))(&uStack_54,uStack_5c,uStack_58);
      }
      if (local_a8 == 2) {
        iVar2 = local_a4;
        break;
      }
      iVar2 = local_a8 + 1;
      piVar1 = local_a0 + local_a8 * 6;
      iVar3 = local_90[local_a8 * 6];
      local_a8 = iVar2;
    } while (iVar3 != 0);
  }
  FUN_00711e0c(local_a0,iVar2);
  FUN_01bed4e2(param_1,param_3,0x50);
  return;
}

