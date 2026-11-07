// FUN_01667e8c @ 01667e8c size=608 calls_out=8 calls_in=6
// strings: expected empty array

void FUN_01667e8c(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined **local_2c;
  undefined4 *local_28;
  
  uVar4 = *param_2;
  iVar1 = 4;
  if (1 < uVar4) {
    iVar1 = uVar4 - 2;
  }
  if (iVar1 == 5) {
    uVar6 = param_2[1];
    uVar7 = param_2[3];
    uVar5 = param_2[2];
    if (uVar7 == 0) {
      *param_1 = 2;
    }
    else {
      iVar1 = thunk_FUN_016d4a50(0x14);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x14);
      }
      FUN_016dd1aa(iVar1,"expected empty array",0x14);
      param_1[3] = 0x14;
      param_1[4] = iVar1;
      param_1[5] = 0x14;
      param_1[6] = 0;
      param_1[7] = 4;
      param_1[8] = 0;
      param_1[9] = 0x80000000;
      *param_1 = 0;
    }
    FUN_01667914(uVar5,uVar7);
    if (uVar6 != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
  }
  else {
    if (iVar1 != 6) {
      local_30 = *(undefined4 *)(&DAT_00424414 + iVar1 * 4);
      local_34 = (&PTR_DAT_018b5670)[iVar1];
      local_2c = &local_34;
      local_28 = &DAT_0157d360;
      FUN_00600d2c(&local_40,&DAT_0058258c,&local_2c);
      uVar2 = 0;
      if (local_38 < 0) {
LAB_01667ff0:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar2,local_38);
      }
      if (local_38 == 0) {
        iVar3 = 1;
        iVar1 = 0;
      }
      else {
        iVar3 = thunk_FUN_016d4a50(local_38);
        iVar1 = local_38;
        if (iVar3 == 0) {
          uVar2 = 1;
          goto LAB_01667ff0;
        }
      }
      FUN_016dd1aa(iVar3,local_3c,local_38);
      if (local_40 != 0) {
        thunk_FUN_016d3fb4(local_3c);
      }
      param_1[9] = 0x80000000;
      param_1[3] = iVar1;
      param_1[4] = iVar3;
      param_1[5] = local_38;
      param_1[6] = 0;
      param_1[7] = 4;
      param_1[8] = 0;
      *param_1 = 0;
      FUN_01667d94(param_2);
      return;
    }
    if (param_2[3] == 0) {
      *param_1 = 2;
    }
    else {
      iVar1 = thunk_FUN_016d4a50(0x14);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x14);
      }
      FUN_016dd1aa(iVar1,&DAT_004140d8,0x14);
      param_1[3] = 0x14;
      param_1[4] = iVar1;
      param_1[5] = 0x14;
      param_1[6] = 0;
      param_1[7] = 4;
      param_1[8] = 0;
      param_1[9] = 0x80000000;
      *param_1 = 0;
    }
    FUN_016676ec(param_2 + 1);
  }
  if (uVar4 - 7 < 2) {
    return;
  }
  FUN_01667d94(param_2);
  return;
}

