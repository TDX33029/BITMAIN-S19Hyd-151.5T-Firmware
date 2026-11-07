// FUN_01529868 @ 01529868 size=200 calls_out=6 calls_in=1
// strings: 

void FUN_01529868(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int *piVar2;
  undefined1 auStack_e0 [136];
  undefined1 local_58;
  int local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  FUN_01526248(auStack_e0,param_2,&DAT_005710a8,8);
  uVar1 = FUN_016731b0(local_58,param_3);
  FUN_0156aca8(&local_38,auStack_e0,param_3,uVar1);
  if (local_38 == 0) {
    *param_1 = 0;
    param_1[1] = local_34;
  }
  else {
    local_48 = local_30;
    iStack_44 = iStack_2c;
    iStack_40 = iStack_28;
    local_50 = local_38;
    local_4c = local_34;
    piVar2 = (int *)thunk_FUN_01be5118(0x14);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x14);
    }
    *piVar2 = local_50;
    piVar2[1] = local_4c;
    piVar2[2] = local_48;
    piVar2[3] = iStack_44;
    piVar2[4] = iStack_40;
    *param_1 = (int)piVar2;
    param_1[1] = (int)&DAT_01cfb4b0;
  }
  FUN_014ff9e0(auStack_e0);
  return;
}

