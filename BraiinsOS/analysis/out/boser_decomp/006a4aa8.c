// FUN_006a4aa8 @ 006a4aa8 size=184 calls_out=2 calls_in=1
// strings: 

void FUN_006a4aa8(int *param_1,int **param_2)

{
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  int **local_38;
  int iStack_34;
  int iStack_30;
  int ***local_28;
  undefined1 *local_24;
  int **local_20;
  undefined1 *local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  
  if (param_2[0xf] == (int *)0x80000000) {
    local_3c = 0;
    uStack_44 = 0;
    uStack_40 = 1;
  }
  else {
    local_28 = &local_38;
    local_24 = &LAB_0193a90c;
    local_38 = param_2 + 0xf;
    FUN_00664898(&uStack_44,&DAT_005b9171,&local_28);
  }
  local_18 = &uStack_44;
  local_20 = param_2 + 3;
  local_14 = &LAB_00632348;
  local_1c = &LAB_00632348;
  local_24 = &LAB_00632348;
  local_28 = (int ***)param_2;
  FUN_00664898(&local_38,&DAT_00599747,&local_28);
  *param_1 = (int)local_38;
  param_1[1] = iStack_34;
  param_1[2] = iStack_30;
  FUN_019bb7e0(uStack_44,uStack_40);
  return;
}

