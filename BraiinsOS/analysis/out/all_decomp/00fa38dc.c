// FUN_00fa38dc @ 00fa38dc size=612 calls_out=2 calls_in=1
// strings: 

void FUN_00fa38dc(int *param_1,int param_2,int *param_3,undefined4 param_4,char *param_5)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *local_50;
  undefined4 local_4c;
  int *local_48;
  int local_44;
  int **local_40;
  undefined4 *local_3c;
  int **local_38;
  undefined *local_34;
  char **local_30;
  undefined1 *local_2c;
  char *local_28;
  
  local_44 = param_2 + 0x46;
  local_48 = &local_44;
  local_38 = &local_48;
  local_40 = (int **)&DAT_018809d4;
  local_34 = &DAT_00fa02fc;
  local_3c = &DAT_0157d360;
  local_50 = param_3;
  local_4c = param_4;
  FUN_00fa948c(param_1,&DAT_018809bc,&DAT_0035df20,&local_40);
  if (*param_5 == '\x03') {
    iVar3 = *(int *)(param_5 + 0xc);
    if (iVar3 == 1) {
      local_40 = &local_50;
      local_3c = &DAT_0157d360;
      FUN_00fa948c(param_1,&DAT_018809bc,&DAT_0058e968,&local_40);
    }
    else {
      local_40 = &local_50;
      local_3c = &DAT_0157d360;
      FUN_00fa948c(param_1,&DAT_018809bc,&DAT_0057191a,&local_40);
      if (iVar3 == 0) {
        return;
      }
    }
    pcVar2 = *(char **)(param_5 + 8);
    local_34 = &LAB_01110b14;
    local_3c = (undefined4 *)&DAT_00fa02fc;
    local_40 = &local_48;
    local_38 = (int **)&local_28;
    local_28 = pcVar2;
    FUN_00fa948c(param_1,&DAT_018809bc,&DAT_0035df53,&local_40);
    if (iVar3 != 1) {
      iVar3 = iVar3 * 0xc + -0xc;
      do {
        pcVar2 = pcVar2 + 0xc;
        iVar1 = param_1[2];
        local_28 = pcVar2;
        if ((uint)(*param_1 - iVar1) < 2) {
          FUN_00f991dc(param_1,iVar1,2,1,1);
          iVar1 = param_1[2];
        }
        param_1[2] = iVar1 + 2;
        *(undefined2 *)(param_1[1] + iVar1) = 0x202c;
        local_34 = &LAB_01110b14;
        local_3c = (undefined4 *)&DAT_00fa02fc;
        local_40 = &local_48;
        local_38 = (int **)&local_28;
        FUN_00fa948c(param_1,&DAT_018809bc,&DAT_0035df53,&local_40);
        iVar3 = iVar3 + -0xc;
      } while (iVar3 != 0);
    }
  }
  else if (*param_5 == '\x02') {
    local_28 = param_5 + 4;
    local_2c = &LAB_01110b14;
    local_30 = &local_28;
    local_3c = &DAT_0157d360;
    local_34 = &DAT_00fa02fc;
    local_38 = &local_48;
    local_40 = &local_50;
    FUN_00fa948c(param_1,&DAT_018809bc,&DAT_0035df2f,&local_40);
    return;
  }
  return;
}

