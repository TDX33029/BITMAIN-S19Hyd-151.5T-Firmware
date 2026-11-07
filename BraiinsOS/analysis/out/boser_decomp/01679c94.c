// FUN_01679c94 @ 01679c94 size=328 calls_out=4 calls_in=2
// strings: 

void FUN_01679c94(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 local_54;
  undefined1 local_50;
  undefined4 local_4f;
  undefined4 local_4b;
  undefined2 local_47;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_33;
  undefined4 local_2f;
  undefined1 local_2b;
  
  local_40 = 4;
  local_4f = 0x2020202;
  local_4b = 0x2020202;
  local_54 = 3;
  local_2f = 0x1010000;
  local_68 = 2;
  local_34 = 10;
  local_70 = 2;
  uVar5 = 0;
  local_78 = 2;
  local_7c = 0xa00000;
  local_38 = 0xfa;
  local_3c = 0;
  local_44 = 0;
  local_50 = 0;
  local_80 = 1;
  local_84 = 0x200000;
  local_88 = 1;
  local_2b = 0;
  local_33 = 0;
  local_47 = 0x302;
  FUN_006520b4(&local_44,0,1,4,0xc);
  iVar2 = local_3c;
  iVar1 = local_40;
  if (param_3 < 0) {
LAB_01679d5c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,param_3);
  }
  if (param_3 == 0) {
    iVar3 = 1;
    iVar6 = 0;
  }
  else {
    uVar5 = 1;
    iVar3 = FUN_01298504(param_3,1);
    iVar6 = param_3;
    if (iVar3 == 0) goto LAB_01679d5c;
  }
  FUN_01bed4e2(iVar3,param_2,param_3);
  piVar4 = (int *)(iVar1 + iVar2 * 0xc);
  *piVar4 = iVar6;
  local_3c = iVar2 + 1;
  piVar4[1] = iVar3;
  piVar4[2] = param_3;
  FUN_01bed4e2(param_1,&local_88,0x60);
  return;
}

