// FUN_01736790 @ 01736790 size=452 calls_out=3 calls_in=3
// strings: 

uint FUN_01736790(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  code *pcVar8;
  undefined1 auStack_13c [68];
  undefined1 auStack_f8 [68];
  undefined1 auStack_b4 [68];
  undefined1 auStack_70 [68];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  pcVar8 = *(code **)(*param_1 + 0x2c);
  pcVar7 = *(code **)(*param_1 + 0x30);
  iVar6 = param_3 + 0x88;
  (*pcVar7)(param_1,auStack_70,iVar6);
  (*pcVar8)(param_1,auStack_13c,param_2,auStack_70);
  iVar5 = param_2 + 0x88;
  (*pcVar7)(param_1,auStack_b4,iVar5);
  (*pcVar8)(param_1,auStack_f8,param_3,auStack_b4);
  FUN_0172ece8(param_1,auStack_13c,auStack_13c,auStack_f8);
  uVar1 = FUN_0172f2c0(param_1,auStack_13c);
  (*pcVar8)(param_1,auStack_70,auStack_70,iVar6);
  (*pcVar8)(param_1,auStack_13c,param_2 + 0x44,auStack_70);
  (*pcVar8)(param_1,auStack_b4,auStack_b4,iVar5);
  (*pcVar8)(param_1,auStack_f8,param_3 + 0x44,auStack_b4);
  FUN_0172ece8(param_1,auStack_13c,auStack_13c,auStack_f8);
  uVar2 = FUN_0172f2c0(param_1,auStack_13c);
  uVar3 = FUN_0172f2c0(param_1,iVar5);
  uVar4 = FUN_0172f2c0(param_1,iVar6);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return (uVar3 & uVar4 & ~(uVar1 | uVar2) | ~(uVar3 | uVar4)) & 1;
}

