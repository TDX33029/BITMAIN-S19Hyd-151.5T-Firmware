// FUN_018d92e0 @ 018d92e0 size=356 calls_out=6 calls_in=0
// strings: 

void FUN_018d92e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int unaff_r7;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  int local_30;
  int local_2c;
  uint local_28;
  
  FUN_01933ff0(&local_30);
  iVar2 = local_2c;
  if (local_30 == 1) {
    local_3c = CONCAT31(local_3c._1_3_,(undefined1)local_28);
    local_40 = local_2c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_40,&DAT_01d23088,&DAT_01d23028);
  }
  uVar12 = local_28 & 0xff;
  iVar3 = FUN_018c44d8(local_2c + 8,param_3);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 0x18);
    unaff_r7 = iVar3;
  }
  if (iVar3 != 0 && iVar4 != -0x80000000) {
    uVar1 = *(undefined1 *)(unaff_r7 + 0x68);
    uVar8 = *(undefined4 *)(unaff_r7 + 0x40);
    FUN_015e8ad4(&local_50,*(undefined4 *)(unaff_r7 + 0x1c),*(undefined4 *)(unaff_r7 + 0x20));
    FUN_015e8ad4(&local_40,*(undefined4 *)(unaff_r7 + 0x28),*(undefined4 *)(unaff_r7 + 0x2c));
    uVar5 = *(undefined4 *)(unaff_r7 + 0x10);
    uVar6 = *(undefined4 *)(unaff_r7 + 0x14);
    uVar13 = *(undefined4 *)(unaff_r7 + 0x3c);
    FUN_018a8174(&local_30,*(undefined4 *)(unaff_r7 + 0x34),*(undefined4 *)(unaff_r7 + 0x38));
    param_1[2] = local_50;
    param_1[3] = uStack_4c;
    param_1[4] = uStack_48;
    param_1[5] = local_40;
    param_1[6] = local_3c;
    param_1[7] = uStack_38;
    param_1[8] = local_30;
    param_1[9] = local_2c;
    param_1[10] = local_28;
    uVar7 = *(undefined4 *)(unaff_r7 + 0x48);
    uVar9 = *(undefined4 *)(unaff_r7 + 0x4c);
    uVar10 = *(undefined4 *)(unaff_r7 + 0x50);
    param_1[0xd] = *(undefined4 *)(unaff_r7 + 0x44);
    param_1[0xe] = uVar7;
    param_1[0xf] = uVar9;
    param_1[0x10] = uVar10;
    uVar7 = *(undefined4 *)(unaff_r7 + 0x58);
    uVar9 = *(undefined4 *)(unaff_r7 + 0x5c);
    uVar10 = *(undefined4 *)(unaff_r7 + 0x60);
    uVar11 = *(undefined4 *)(unaff_r7 + 100);
    param_1[0x11] = *(undefined4 *)(unaff_r7 + 0x54);
    param_1[0x12] = uVar7;
    param_1[0x13] = uVar9;
    param_1[0x14] = uVar10;
    param_1[0x15] = uVar11;
    param_1[0xb] = uVar13;
    *param_1 = uVar5;
    param_1[1] = uVar6;
    *(undefined1 *)(param_1 + 0x16) = uVar1;
    param_1[0xc] = uVar8;
  }
  else {
    param_1[2] = 0x80000000;
  }
  FUN_00a97e8c(iVar2,uVar12);
  return;
}

