// FUN_019bb418 @ 019bb418 size=700 calls_out=11 calls_in=2
// strings: 

void FUN_019bb418(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  ushort *puVar4;
  undefined4 uVar5;
  int *piVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  int local_1f8;
  undefined4 *local_1f4;
  int local_1f0;
  byte local_1e8 [2];
  undefined2 uStack_1e6;
  int iStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  int local_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int local_64;
  int *local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 *local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  undefined4 *local_34;
  int iStack_30;
  
  uVar5 = *param_2;
  uVar8 = param_2[1];
  uVar1 = *(ushort *)(param_2 + 2);
  FUN_01304dac(local_1e8,uVar5,uVar8);
  if (local_1e8[0] == 2) {
    local_64 = CONCAT22(local_64._2_2_,uVar1);
    if (uVar8 >> 7 < 3) {
      FUN_01bed4e2(local_1e8,uVar5,uVar8);
      local_1e8[uVar8] = 0;
      FUN_012fbc58(&local_38,local_1e8,uVar8 + 1);
      if (local_38 == 1) {
        local_54 = 2;
        local_50 = &DAT_01d27a70;
        local_58 = 1;
      }
      else {
        FUN_019ba7f8(&local_58,&local_64,local_34);
      }
    }
    else {
      FUN_019ba98c(&local_58,uVar5,uVar8,&local_64);
    }
    if (local_58 == 1) {
      param_1[1] = local_54;
      *param_1 = 0;
      param_1[2] = local_50;
      return;
    }
    local_1f8 = local_54;
    local_1f0 = local_4c;
    local_1f4 = local_50;
    FUN_019a48b0(&local_58,&local_1f8);
    if ((short)local_58 == 2) {
      FUN_01be7384(local_1f8);
      local_64 = 0;
      piVar6 = (int *)&SUB_00000004;
      iVar9 = 0;
    }
    else {
      piVar6 = (int *)thunk_FUN_01be5118(0x80);
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x80);
      }
      *piVar6 = local_58;
      piVar6[1] = local_54;
      piVar6[2] = (int)local_50;
      piVar6[3] = local_4c;
      piVar6[4] = local_48;
      piVar6[5] = iStack_44;
      piVar6[6] = iStack_40;
      piVar6[7] = iStack_3c;
      local_64 = 4;
      local_5c = 1;
      local_38 = local_1f8;
      local_34 = local_1f4;
      iStack_30 = local_1f0;
      local_60 = piVar6;
      while (iVar9 = local_5c, FUN_019a48b0(local_1e8,&local_38),
            CONCAT11(local_1e8[1],local_1e8[0]) != 2) {
        if (iVar9 == local_64) {
          FUN_0197ac30(&local_64,iVar9,1,4,0x20);
          piVar6 = local_60;
        }
        piVar3 = piVar6 + iVar9 * 8;
        local_5c = iVar9 + 1;
        *piVar3 = CONCAT22(uStack_1e6,CONCAT11(local_1e8[1],local_1e8[0]));
        piVar3[1] = iStack_1e4;
        piVar3[2] = iStack_1e0;
        piVar3[3] = iStack_1dc;
        piVar3[4] = local_1d8;
        piVar3[5] = iStack_1d4;
        piVar3[6] = iStack_1d0;
        piVar3[7] = iStack_1cc;
      }
      FUN_01be7384(local_38);
    }
    puVar4 = (ushort *)(piVar6 + iVar9 * 8);
    *param_1 = piVar6;
    param_1[1] = piVar6;
    param_1[2] = local_64;
  }
  else {
    iVar9 = CONCAT13((undefined1)iStack_1e4,CONCAT21(uStack_1e6,local_1e8[1]));
    bVar10 = (local_1e8[0] & 1) == 0;
    if (bVar10) {
      uVar7 = uVar1;
    }
    else {
      local_208 = CONCAT13((undefined1)iStack_1e0,iStack_1e4._1_3_);
      uVar8 = (uint)iVar9 >> 0x10;
      iVar9 = iVar9 << 0x10;
      uStack_204 = CONCAT13((undefined1)iStack_1dc,iStack_1e0._1_3_);
      uStack_200 = CONCAT13((undefined1)local_1d8,iStack_1dc._1_3_);
      uVar7 = (ushort)uVar8;
    }
    puVar2 = (ushort *)thunk_FUN_01be5118(0x20);
    if (puVar2 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x20);
    }
    puVar2[3] = uVar7;
    *(int *)(puVar2 + 1) = iVar9;
    *(undefined4 *)(puVar2 + 4) = local_208;
    *(undefined4 *)(puVar2 + 6) = uStack_204;
    *(undefined4 *)(puVar2 + 8) = uStack_200;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar4 = puVar2 + 0x10;
    *puVar2 = (ushort)!bVar10;
    puVar2[0xe] = uVar1;
    *param_1 = puVar2;
    param_1[1] = puVar2;
    param_1[2] = 1;
  }
  param_1[3] = puVar4;
  return;
}

