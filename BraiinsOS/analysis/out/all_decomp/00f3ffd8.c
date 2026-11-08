// FUN_00f3ffd8 @ 00f3ffd8 size=632 calls_out=10 calls_in=1
// strings: 

int FUN_00f3ffd8(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint local_68;
  int local_64;
  uint local_60;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_1 != 0) {
    local_40 = 10;
    iVar2 = FUN_0157c50c(&local_40,0,0);
    return iVar2;
  }
  iVar2 = FUN_00f3f38c(param_1,&DAT_00566ed8,4);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_01887458);
  }
  local_4c = param_1[4];
  local_48 = param_1[5];
  local_44 = param_1[6];
  param_1[4] = -0x80000000;
  if (local_4c == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0038a142,0x2b,&DAT_01887448);
  }
  local_68 = 0;
  iVar2 = param_3 * 0x18;
  if (0x5555555 < param_3) {
LAB_00f4006c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(local_68,iVar2);
  }
  if (iVar2 == 0) {
    iVar3 = 8;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(iVar2);
    local_68 = param_3;
    if (iVar3 == 0) {
      local_68 = 8;
      goto LAB_00f4006c;
    }
  }
  local_60 = 0;
  local_64 = iVar3;
  if (param_3 != 0) {
    iVar7 = 0;
    iVar2 = param_2;
    do {
      uVar1 = local_60;
      uVar4 = 0;
      iVar5 = *(int *)(param_2 + iVar7 + 8);
      if (iVar5 < 0) {
LAB_00f401ec:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar4,iVar2);
      }
      uVar4 = *(undefined4 *)(param_2 + iVar7 + 4);
      if (iVar5 == 0) {
        iVar2 = 1;
        iVar6 = 0;
      }
      else {
        iVar2 = thunk_FUN_016d4a50(iVar5,uVar4);
        if (iVar2 == 0) {
          uVar4 = 1;
          iVar2 = iVar5;
          goto LAB_00f401ec;
        }
        iVar6 = iVar5;
      }
      FUN_016dd1aa(iVar2,uVar4,iVar5);
      local_40 = CONCAT31(local_40._1_3_,3);
      local_3c = iVar6;
      local_38 = iVar2;
      local_34 = iVar5;
      if (uVar1 == local_68) {
        FUN_0157eb1c(&local_68);
        iVar3 = local_64;
      }
      puVar8 = (undefined4 *)(iVar3 + iVar7 * 2);
      local_60 = uVar1 + 1;
      iVar7 = iVar7 + 0xc;
      *puVar8 = local_40;
      puVar8[1] = local_3c;
      puVar8[2] = local_38;
      puVar8[3] = local_34;
      puVar8[4] = uStack_30;
      puVar8[5] = uStack_2c;
    } while (param_3 * 0xc != iVar7);
  }
  local_40 = CONCAT31(local_40._1_3_,4);
  local_38 = local_64;
  local_34 = local_60;
  local_3c = local_68;
  FUN_00f45bb4(&local_68,param_1 + 1,&local_4c,&local_40);
  if ((local_68 & 0xff) != 6) {
    FUN_00f3732c(&local_68);
  }
  return 0;
}

