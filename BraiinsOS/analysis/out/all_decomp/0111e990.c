// FUN_0111e990 @ 0111e990 size=256 calls_out=4 calls_in=1
// strings: 

void FUN_0111e990(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  uint local_44;
  int local_40;
  undefined4 uStack_3c;
  uint uStack_38;
  int local_30;
  int *local_2c;
  code *local_28;
  
  if (param_3 == 0) {
    iVar4 = 1;
    iVar3 = 0;
    iVar5 = 0;
  }
  else {
    iVar4 = 1;
    iVar3 = 0;
    iVar5 = 0;
    do {
      local_28 = FUN_01576770;
      local_2c = &local_30;
      local_30 = param_2;
      FUN_00600d2c(&local_40,&DAT_00569c68,&local_2c);
      uVar2 = uStack_38;
      uVar1 = uStack_3c;
      local_4c = local_40;
      local_48 = uStack_3c;
      local_44 = uStack_38;
      local_58 = iVar3;
      local_54 = iVar4;
      local_50 = iVar5;
      if ((uint)(iVar3 - iVar5) < uStack_38) {
        FUN_00f58340(&local_58,iVar5,uStack_38);
      }
      iVar5 = local_50;
      FUN_016dd1aa(local_54 + local_50,uVar1,uVar2);
      iVar4 = local_54;
      iVar3 = local_58;
      if (local_4c != 0) {
        thunk_FUN_016d3fb4(local_48);
      }
      iVar5 = iVar5 + uVar2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  *param_1 = iVar3;
  param_1[1] = iVar4;
  param_1[2] = iVar5;
  return;
}

