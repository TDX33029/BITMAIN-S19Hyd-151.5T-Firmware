// FUN_011a2838 @ 011a2838 size=200 calls_out=6 calls_in=1
// strings: 

void FUN_011a2838(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int *piVar2;
  undefined1 auStack_e0 [136];
  undefined1 local_58;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  FUN_0119d4b4(auStack_e0,param_2,&DAT_0056aa28,8);
  uVar1 = FUN_01352d48(local_58,param_3);
  FUN_0125acb4(&local_38,auStack_e0,param_3,uVar1);
  if (local_38 == 0) {
    *param_1 = 0;
    param_1[1] = local_34;
    FUN_01161600(auStack_e0);
    return;
  }
  local_50 = local_38;
  iStack_4c = local_34;
  iStack_48 = local_30;
  iStack_44 = iStack_2c;
  iStack_40 = iStack_28;
  piVar2 = (int *)thunk_FUN_016d4a50(0x14);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *piVar2 = local_50;
  piVar2[1] = iStack_4c;
  piVar2[2] = iStack_48;
  piVar2[3] = iStack_44;
  piVar2[4] = iStack_40;
  *param_1 = (int)piVar2;
  param_1[1] = (int)&DAT_01889ba8;
  FUN_01161600(auStack_e0);
  return;
}

