// FUN_00f6f444 @ 00f6f444 size=492 calls_out=6 calls_in=1
// strings: a Display implementation returned an error unexpectedly

void FUN_00f6f444(uint *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint local_60;
  uint local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  
  iVar5 = *param_2;
  iVar9 = param_2[1];
  uVar3 = iVar9 - iVar5;
  if (0x55555550 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  uVar3 = uVar3 >> 3;
  uVar7 = 0;
  iVar4 = uVar3 * 0xc;
  if (iVar4 == 0) {
    local_5c = 4;
    local_60 = 0;
  }
  else {
    local_5c = thunk_FUN_016d4a50(iVar4);
    local_60 = uVar3;
    if (local_5c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar4);
    }
  }
  if (iVar5 != iVar9) {
    iVar9 = param_2[2];
    uVar8 = 0;
    do {
      iVar4 = *(int *)(iVar9 + 0x48);
      puVar1 = (undefined4 *)(iVar5 + uVar8 * 8);
      uVar6 = *puVar1;
      iVar10 = *(int *)(iVar9 + 0x4c) * 0x134;
      iVar11 = puVar1[1];
      while( true ) {
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_0035e2fc,99,&DAT_018808fc);
        }
        if ((*(int *)(iVar4 + 0x118) == iVar11) &&
           (iVar2 = thunk_FUN_016dd50a(*(undefined4 *)(iVar4 + 0x114),uVar6,iVar11), iVar2 == 0))
        break;
        iVar4 = iVar4 + 0x134;
        iVar10 = iVar10 + -0x134;
      }
      local_38 = 0;
      local_40 = 0;
      local_28 = 0;
      local_3c = 1;
      local_2c = &DAT_60000020;
      local_30 = &DAT_0188090c;
      local_34 = &local_40;
      iVar4 = FUN_00f9d654(iVar4,&local_34);
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_50,
                     &DAT_01880924,&DAT_018af130);
      }
      uVar7 = uVar8 + 1;
      local_50 = local_40;
      local_4c = local_3c;
      local_48 = local_38;
      puVar1 = (undefined4 *)(local_5c + uVar8 * 0xc);
      *puVar1 = local_40;
      puVar1[1] = local_3c;
      puVar1[2] = local_38;
      uVar8 = uVar7;
    } while (uVar7 != uVar3);
  }
  *param_1 = local_60;
  param_1[1] = local_5c;
  param_1[2] = uVar7;
  return;
}

