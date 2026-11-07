// FUN_0135ccac @ 0135ccac size=316 calls_out=4 calls_in=2
// strings: 

void FUN_0135ccac(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 *local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_4c;
  undefined1 local_48;
  undefined4 local_46;
  undefined4 local_42;
  undefined1 local_3e;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_2b;
  undefined4 local_27;
  undefined1 local_23;
  
  uVar4 = 0;
  local_42 = 0x2020202;
  local_46 = 0x2020202;
  local_38 = 4;
  local_2c = 10;
  local_30 = 0xfa;
  local_3e = 3;
  local_4c = 3;
  local_60 = 2;
  local_68 = 2;
  local_70 = 2;
  local_74 = &LAB_00a00000;
  local_78 = 1;
  local_80 = 1;
  local_34 = 0;
  local_3c = 0;
  local_2b = 0;
  local_48 = 0;
  local_7c = 0x200000;
  local_23 = 0;
  local_27 = 0x1010000;
  FUN_0135c828(&local_3c,0,1,4,0xc);
  iVar2 = local_34;
  iVar1 = local_38;
  if (param_3 < 0) {
LAB_0135cd70:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar4,param_3);
  }
  if (param_3 == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(param_3);
    if (iVar3 == 0) {
      uVar4 = 1;
      goto LAB_0135cd70;
    }
  }
  FUN_016dd1aa(iVar3,param_2,param_3);
  piVar5 = (int *)(iVar1 + iVar2 * 0xc);
  *piVar5 = param_3;
  local_34 = iVar2 + 1;
  piVar5[1] = iVar3;
  piVar5[2] = param_3;
  FUN_016dd1aa(param_1,&local_80,0x60);
  return;
}

