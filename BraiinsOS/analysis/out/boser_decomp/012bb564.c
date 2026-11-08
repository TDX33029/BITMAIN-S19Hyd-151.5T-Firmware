// FUN_012bb564 @ 012bb564 size=476 calls_out=2 calls_in=1
// strings: 

void FUN_012bb564(undefined4 param_1,int param_2,int *param_3,undefined4 param_4,char *param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *local_50;
  undefined4 uStack_4c;
  int *local_48;
  int local_44;
  int **local_40;
  undefined1 *local_3c;
  int **local_38;
  undefined *local_34;
  int **local_30;
  undefined1 *local_2c;
  int *local_28;
  
  local_44 = param_2 + 0x46;
  local_48 = &local_44;
  local_38 = &local_48;
  local_40 = (int **)&DAT_01ce271c;
  local_34 = &DAT_012b59c8;
  local_3c = &LAB_018a13b8;
  local_50 = param_3;
  uStack_4c = param_4;
  FUN_012fa178(param_1,&DAT_01ce25b4,&DAT_00420089,&local_40);
  if (*param_5 == '\x03') {
    iVar1 = *(int *)(param_5 + 0xc);
    if (iVar1 == 1) {
      local_3c = &LAB_018a13b8;
      local_40 = &local_50;
      FUN_012fa178(param_1,&DAT_01ce25b4,&DAT_0058ef5a,&local_40);
    }
    else {
      local_3c = &LAB_018a13b8;
      local_40 = &local_50;
      FUN_012fa178(param_1,&DAT_01ce25b4,&DAT_00576233,&local_40);
      if (iVar1 == 0) {
        return;
      }
    }
    piVar2 = *(int **)(param_5 + 8);
    iVar1 = iVar1 * 0xc;
    iVar3 = 0;
    do {
      local_28 = piVar2;
      if (iVar3 != 0) {
        FUN_012b2fd4(param_1,&DAT_00533bc1,2);
      }
      local_40 = &local_48;
      piVar2 = piVar2 + 3;
      local_34 = &LAB_0193a90c;
      local_3c = &DAT_012b59c8;
      local_38 = &local_28;
      FUN_012fa178(param_1,&DAT_01ce25b4,&DAT_004200bc,&local_40);
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + -0xc;
    } while (iVar1 != 0);
  }
  else if (*param_5 == '\x02') {
    local_28 = (int *)(param_5 + 4);
    local_2c = &LAB_0193a90c;
    local_30 = &local_28;
    local_3c = &LAB_018a13b8;
    local_34 = &DAT_012b59c8;
    local_38 = &local_48;
    local_40 = &local_50;
    FUN_012fa178(param_1,&DAT_01ce25b4,&DAT_00420098,&local_40);
  }
  return;
}

