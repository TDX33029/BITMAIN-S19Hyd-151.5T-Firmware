// FUN_01b44980 @ 01b44980 size=448 calls_out=3 calls_in=3
// strings: 

uint FUN_01b44980(int *param_1,int param_2,int param_3)

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
  
  local_2c = DAT_01d53560;
  pcVar8 = *(code **)(*param_1 + 0x2c);
  pcVar7 = *(code **)(*param_1 + 0x30);
  iVar5 = param_3 + 0x88;
  (*pcVar7)(param_1,auStack_70,iVar5);
  (*pcVar8)(param_1,auStack_13c,param_2,auStack_70);
  iVar6 = param_2 + 0x88;
  (*pcVar7)(param_1,auStack_b4,iVar6);
  (*pcVar8)(param_1,auStack_f8,param_3,auStack_b4);
  FUN_01b3ed6c(param_1,auStack_13c,auStack_13c,auStack_f8);
  uVar1 = FUN_01b3f320(param_1,auStack_13c);
  (*pcVar8)(param_1,auStack_70,auStack_70,iVar5);
  (*pcVar8)(param_1,auStack_13c,param_2 + 0x44,auStack_70);
  (*pcVar8)(param_1,auStack_b4,auStack_b4,iVar6);
  (*pcVar8)(param_1,auStack_f8,param_3 + 0x44,auStack_b4);
  FUN_01b3ed6c(param_1,auStack_13c,auStack_13c,auStack_f8);
  uVar2 = FUN_01b3f320(param_1,auStack_13c);
  uVar3 = FUN_01b3f320(param_1,iVar6);
  uVar4 = FUN_01b3f320(param_1,iVar5);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return (uVar3 & uVar4 & ~(uVar1 | uVar2) | ~(uVar3 | uVar4)) & 1;
}

