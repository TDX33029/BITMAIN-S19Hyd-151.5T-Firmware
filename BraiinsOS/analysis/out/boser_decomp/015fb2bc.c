// FUN_015fb2bc @ 015fb2bc size=256 calls_out=4 calls_in=1
// strings: 

void FUN_015fb2bc(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 extraout_r1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint *unaff_r8;
  int unaff_r9;
  int iVar5;
  uint uVar6;
  int local_58;
  int local_54;
  uint *local_50;
  uint *local_4c;
  uint local_48;
  uint *local_44;
  int local_40;
  uint local_3c;
  uint local_38 [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  
  puVar3 = (uint *)*param_2;
  iVar4 = param_2[1];
  uVar2 = param_2[3];
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 8;
    unaff_r8 = puVar3 + iVar4 * -2 + -2;
    unaff_r9 = iVar4 * 9 + 0xd;
  }
  uVar6 = *puVar3;
  uVar1 = uVar2;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = uVar2 + 1 >> 1;
  }
  if (*(uint *)(param_1 + 8) < uVar1) {
    FUN_015d4248(param_1,uVar1,param_1 + 0x10);
  }
  local_44 = puVar3 + 1;
  local_48 = ~uVar6 & 0x80808080;
  local_40 = (int)puVar3 + iVar4 + 1;
  local_58 = iVar5;
  local_54 = unaff_r9;
  local_50 = unaff_r8;
  local_4c = puVar3;
  local_3c = uVar2;
  while (FUN_015d2734(local_38,&local_58), (local_38[0] & 1) != 0) {
    FUN_015dc04c(param_1,extraout_r1,local_30,uStack_2c);
  }
  iVar4 = 0;
  if (local_58 != 0) {
    iVar4 = local_54;
  }
  if (local_58 != 0 && iVar4 != 0) {
    thunk_FUN_01be4678(local_50);
    return;
  }
  return;
}

