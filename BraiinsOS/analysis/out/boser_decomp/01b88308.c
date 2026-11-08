// FUN_01b88308 @ 01b88308 size=364 calls_out=3 calls_in=2
// strings: 

undefined4
FUN_01b88308(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_2c = DAT_01d53560;
  if ((param_4 == -1 && param_3 == -1) && (iVar4 = *(int *)(param_2 + 0x38), 0 < iVar4)) {
    param_4 = iVar4 >> 0x1f;
    param_3 = iVar4;
  }
  FUN_01b86d38(&local_48,*(undefined4 *)(param_2 + 0x2c),param_3,param_4,param_5,param_6);
  iVar4 = *(int *)(param_2 + 0x54);
  bVar7 = iVar4 == 1;
  if (bVar7) {
    iVar4 = 0x1b;
  }
  if (!bVar7) {
    iVar4 = local_48;
  }
  local_48 = iVar4;
  if (*(int *)(param_2 + 4) != 0) {
    local_48 = *(int *)(param_2 + 4);
  }
  iVar4 = *(int *)(param_2 + 0xc);
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar4 = local_40;
  }
  iVar5 = *(int *)(param_2 + 8);
  if (*(int *)(param_2 + 8) == 0) {
    iVar5 = local_44;
  }
  iVar6 = *(int *)(param_2 + 0x10);
  if (*(int *)(param_2 + 0x10) == 0) {
    iVar6 = local_3c;
  }
  iVar1 = *(int *)(param_2 + 0x14);
  if (*(int *)(param_2 + 0x14) == 0) {
    iVar1 = local_38;
  }
  iVar2 = *(int *)(param_2 + 0x18);
  if (*(int *)(param_2 + 0x18) == 0) {
    iVar2 = local_34;
  }
  iVar3 = *(int *)(param_2 + 0x1c);
  if (*(int *)(param_2 + 0x1c) == 0) {
    iVar3 = local_30;
  }
  local_44 = iVar5;
  local_40 = iVar4;
  local_3c = iVar6;
  local_38 = iVar1;
  local_34 = iVar2;
  local_30 = iVar3;
  FUN_01b86b50(param_1,local_48,iVar5,iVar4,iVar6,iVar1,iVar2,iVar3,param_3,param_4,param_5,param_6,
               *(undefined4 *)(param_2 + 0x84));
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return param_1;
}

