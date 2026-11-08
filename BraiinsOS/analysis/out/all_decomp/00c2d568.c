// FUN_00c2d568 @ 00c2d568 size=656 calls_out=8 calls_in=1
// strings: a Display implementation returned an error unexpectedly

void FUN_00c2d568(uint *param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined1 extraout_r1;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint local_74;
  uint local_58;
  undefined4 *local_54;
  undefined **local_48;
  undefined1 *local_44;
  undefined4 uStack_40;
  undefined **local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined *local_28;
  
  uVar9 = *(uint *)(param_2 + 0x220);
  iVar2 = uVar9 * 0xc;
  if (0xaaaaaaa < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  iVar8 = *(int *)(param_2 + 0x21c);
  uVar5 = 0;
  if (iVar2 == 0) {
    local_54 = (undefined4 *)&DAT_00000004;
    local_58 = 0;
  }
  else {
    local_54 = (undefined4 *)thunk_FUN_016d4a50(iVar2);
    local_58 = uVar9;
    if (local_54 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar2);
    }
  }
  if (uVar9 != 0) {
    uVar5 = 0;
    puVar7 = local_54;
    do {
      local_30 = 0;
      local_34 = 1;
      local_38 = (undefined **)0x0;
      local_28 = (&PTR_DAT_018b0dc0)[*(byte *)(iVar8 + 0xc + uVar5 * 0x10)];
      local_44 = &LAB_00640850;
      local_48 = &local_28;
      iVar2 = FUN_00fa948c(&local_38,&DAT_01870f94,&DAT_00590e71,&local_48);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_48,
                     &DAT_01870fac,&DAT_018af130);
      }
      uVar5 = uVar5 + 1;
      local_48 = local_38;
      local_44 = (undefined1 *)local_34;
      uStack_40 = local_30;
      *puVar7 = local_38;
      puVar7[1] = local_34;
      puVar7[2] = local_30;
      puVar7 = puVar7 + 3;
    } while (uVar9 != uVar5);
    uVar5 = uVar9;
  }
  iVar8 = *(int *)(param_2 + 0x204);
  bVar1 = FUN_009b670c(iVar8);
  iVar2 = param_4 << 3;
  if (param_4 == 0) {
    uVar9 = 4;
    local_74 = 0;
  }
  else {
    uVar9 = thunk_FUN_016d4a50(iVar2);
    if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar2);
    }
    local_74 = param_4;
  }
  FUN_016dd1aa(uVar9,param_3,iVar2);
  uVar10 = *(uint *)(iVar8 + 0x40);
  uVar6 = *(undefined4 *)(iVar8 + 0x3c);
  if (uVar10 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = thunk_FUN_016d4a50(uVar10);
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar10);
    }
  }
  FUN_016dd1aa(uVar3,uVar6,uVar10);
  uVar4 = *(uint *)(iVar8 + 0xbc);
  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faf2a4(&DAT_01879bd0);
  }
  *(byte *)(param_1 + 0xc) = bVar1 & 1;
  param_1[8] = uVar10;
  *param_1 = local_58;
  param_1[1] = (uint)local_54;
  param_1[2] = uVar5;
  param_1[3] = local_74;
  param_1[5] = param_4;
  uVar5 = *(uint *)(iVar8 + 0xb8);
  param_1[4] = uVar9;
  param_1[6] = uVar10;
  param_1[7] = uVar3;
  *(undefined1 *)((int)param_1 + 0x31) = extraout_r1;
  param_1[10] = uVar5;
  param_1[0xb] = uVar4;
  uVar9 = FUN_018462e8();
  param_1[9] = uVar9;
  return;
}

