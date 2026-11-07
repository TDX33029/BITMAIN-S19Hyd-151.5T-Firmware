// FUN_015345a4 @ 015345a4 size=332 calls_out=7 calls_in=65
// strings: 

undefined8 FUN_015345a4(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint local_30;
  int local_2c;
  uint local_28;
  
  uVar4 = param_2 + param_4 + 1;
  uVar1 = 0;
  if ((int)uVar4 < 0) {
LAB_015345c4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar1,uVar4);
  }
  if (uVar4 == 0) {
    local_2c = 1;
    uVar4 = 0;
  }
  else {
    uVar1 = 1;
    local_2c = FUN_01298504(uVar4,1);
    if (local_2c == 0) goto LAB_015345c4;
  }
  local_28 = 0;
  local_30 = uVar4;
  if (uVar4 < param_2) {
    FUN_01af7b44(&local_30,0,param_2,1,1);
  }
  uVar2 = local_28;
  iVar3 = local_2c;
  uVar4 = local_30;
  FUN_01bed4e2(local_2c + local_28,param_1 + 8,param_2);
  uVar2 = uVar2 + param_2;
  local_28 = uVar2;
  if (uVar4 == uVar2) {
    FUN_01af7b44(&local_30,uVar4,1,1,1);
    iVar3 = local_2c;
  }
  *(undefined1 *)(iVar3 + local_28) = 0x2f;
  local_28 = uVar2 + 1;
  FUN_015321f0(&local_30,param_3,param_4);
  iVar3 = local_2c;
  uVar4 = local_30;
  uVar5 = FUN_016bc0ec(local_2c,local_28);
  FUN_019bb7e0(uVar4,iVar3);
  return uVar5;
}

