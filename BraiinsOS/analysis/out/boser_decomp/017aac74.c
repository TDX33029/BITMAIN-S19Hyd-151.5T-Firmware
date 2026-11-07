// FUN_017aac74 @ 017aac74 size=532 calls_out=7 calls_in=3
// strings: 

void FUN_017aac74(undefined1 *param_1,int *param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  int iStack_50;
  uint uStack_4c;
  undefined4 local_48;
  int local_44;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  FUN_01933ff0(&local_48,*param_2 + 8);
  iVar2 = local_44;
  if (local_48 == 1) {
    local_5c = CONCAT31(local_5c._1_3_,(undefined1)local_40);
    local_60 = local_44;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_60,&DAT_01d1d434,&DAT_01d1d054);
  }
  uVar9 = local_40 & 0xff;
  iVar5 = FUN_0139f148(*(undefined4 *)(local_44 + 0x18c),*(undefined4 *)(local_44 + 400),param_2[1],
                       param_2[2]);
  bVar1 = *(byte *)(iVar5 + 0x20);
  if (bVar1 < 6) {
    cVar3 = '\x01';
    if (2 < bVar1) {
      cVar3 = bVar1 - 3;
    }
    iVar6 = 4;
    if (cVar3 == '\0') {
      uVar7 = 0;
      uVar8 = 0;
      goto LAB_017aad50;
    }
    if (cVar3 != '\x01') {
LAB_017aad40:
      uVar7 = *(undefined4 *)((byte *)(iVar5 + 0x20) + iVar6);
      uVar8 = 1;
      iVar6 = 8;
      local_5c = 1;
      goto LAB_017aad50;
    }
    if (bVar1 == 0) {
      iVar6 = 8;
      goto LAB_017aad40;
    }
    if (bVar1 != 2) goto LAB_017aad40;
    uVar4 = *(undefined1 *)(iVar5 + 0x21);
    if (*(int *)(iVar5 + 0x24) == -0x80000000) {
      local_30 = -0x80000000;
    }
    else {
      FUN_006666fc(&local_30,*(undefined4 *)(iVar5 + 0x28),*(undefined4 *)(iVar5 + 0x2c));
    }
    local_44 = local_30;
    local_40 = uStack_2c;
    uStack_3c = uStack_28;
    local_48 = CONCAT31(CONCAT21(local_48._2_2_,uVar4),2);
    FUN_013b8db0(&local_60,&local_48);
    if ((local_60 & 0xff) == 5) {
      uVar7 = local_58;
      uVar8 = local_5c;
      goto LAB_017aad58;
    }
    local_30 = CONCAT22(CONCAT11(local_30._3_1_,local_60._3_1_),local_60._1_2_);
    local_48 = local_54;
    local_44 = iStack_50;
    local_40 = uStack_4c;
    if ((local_60 & 0xff) != 6) {
      *param_1 = (undefined1)local_60;
      *(uint *)(param_1 + 4) = local_5c;
      *(undefined2 *)(param_1 + 1) = local_60._1_2_;
      param_1[3] = local_60._3_1_;
      *(undefined4 *)(param_1 + 8) = local_58;
      *(int *)(param_1 + 0xc) = local_54;
      *(int *)(param_1 + 0x10) = iStack_50;
      *(uint *)(param_1 + 0x14) = uStack_4c;
      goto LAB_017aad88;
    }
LAB_017aad80:
    uVar4 = 6;
  }
  else {
    uVar7 = 0;
    iVar6 = 4;
    uVar8 = 0;
LAB_017aad50:
    *(undefined4 *)((int)&local_60 + iVar6) = uVar7;
LAB_017aad58:
    if ((uVar8 & 1) == 0) {
      FUN_013bc270(iVar5,*param_3,param_3[1]);
      goto LAB_017aad80;
    }
    uVar4 = 5;
    *(undefined4 *)(param_1 + 4) = uVar7;
  }
  *param_1 = uVar4;
LAB_017aad88:
  FUN_00a97e8c(iVar2,uVar9);
  return;
}

