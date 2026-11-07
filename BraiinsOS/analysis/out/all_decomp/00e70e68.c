// FUN_00e70e68 @ 00e70e68 size=1124 calls_out=5 calls_in=2
// strings: 

undefined4 * FUN_00e70e68(uint *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 extraout_r1;
  int iVar2;
  int extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_40 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  uVar4 = param_1[8];
  FUN_00f09308(param_2,param_2,param_1[6],param_1[7]);
  FUN_00f09308(param_2,extraout_r1,uVar4,0);
  if ((undefined1 *)param_1[0x10] == &DAT_3b9aca00) {
    iVar2 = param_2[2];
    if (*param_2 == iVar2) {
      FUN_00edff4c(param_2,iVar2,1,1,1);
      iVar2 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar2) = 0;
    param_2[2] = iVar2 + 1;
    uVar4 = *param_1;
  }
  else {
    iVar2 = param_2[2];
    if (*param_2 == iVar2) {
      FUN_00edff4c(param_2,iVar2,1,1,1);
      iVar2 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar2) = 1;
    param_2[2] = iVar2 + 1;
    local_4c = 0;
    local_50 = 0;
    local_48 = 0;
    FUN_015f3c24(local_40,param_1 + 0xe,&local_50);
    if ((local_40[0] & 1) != 0) {
      iVar2 = thunk_FUN_016d4a50(0x28);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x28);
      }
      FUN_016dd1aa(iVar2,&DAT_003594c0,0x28);
      puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *puVar1 = 0x28;
      puVar1[1] = iVar2;
      puVar1[2] = 0x28;
      return puVar1;
    }
    FUN_00f09308(param_2,extraout_r1_01,local_38,uStack_34);
    FUN_00f09308(param_2,extraout_r1_02,uStack_30,0);
    FUN_00f09574(param_2,param_1[0xd],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd]);
    uVar4 = *param_1;
  }
  if ((uVar4 & 1) == 0) {
    iVar2 = param_2[2];
    if (*param_2 == iVar2) {
      FUN_00edff4c(param_2,iVar2,1,1,1);
      iVar2 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar2) = 0;
    param_2[2] = iVar2 + 1;
  }
  else {
    iVar2 = param_2[2];
    uVar5 = param_1[5];
    uVar4 = param_1[2];
    uVar3 = param_1[3];
    uVar6 = param_1[4];
    if (*param_2 == iVar2) {
      FUN_00edff4c(param_2,iVar2,1,1,1);
      iVar2 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar2) = 1;
    param_2[2] = iVar2 + 1;
    FUN_00f09574(param_2,iVar2,uVar4,uVar3,uVar6,uVar5);
    iVar2 = extraout_r1_00;
  }
  FUN_00f09308(param_2,iVar2,param_1[0x12],param_1[0x13]);
  FUN_00f09574(param_2,param_1[0x17],param_1[0x14],param_1[0x15],param_1[0x16],param_1[0x17]);
  if (param_1[0x18] == 0x80000000) {
    iVar2 = param_2[2];
    if (*param_2 == iVar2) {
      FUN_00edff4c(param_2,iVar2,1,1,1);
      iVar2 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar2) = 0;
    param_2[2] = iVar2 + 1;
  }
  else {
    FUN_00ea7944(param_2,param_1[0x19],param_1[0x1a]);
    iVar2 = extraout_r1_03;
  }
  FUN_00f09308(param_2,iVar2,param_1[0x1c],param_1[0x1d]);
  FUN_00f09574(param_2,param_1[0x21],param_1[0x1e],param_1[0x1f],param_1[0x20],param_1[0x21]);
  if (param_1[0x22] == 0x80000000) {
    iVar2 = param_2[2];
    if (*param_2 == iVar2) {
      FUN_00edff4c(param_2,iVar2,1,1,1);
      iVar2 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar2) = 0;
    param_2[2] = iVar2 + 1;
  }
  else {
    FUN_00ea7944(param_2,param_1[0x23],param_1[0x24]);
    iVar2 = extraout_r1_04;
  }
  FUN_00f09308(param_2,iVar2,param_1[0x26],param_1[0x27]);
  FUN_00f09574(param_2,param_1[0x2b],param_1[0x28],param_1[0x29],param_1[0x2a],param_1[0x2b]);
  if (param_1[0x2c] == 0x80000000) {
    iVar2 = param_2[2];
    if (*param_2 == iVar2) {
      FUN_00edff4c(param_2,iVar2,1,1,1);
      iVar2 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar2) = 0;
    param_2[2] = iVar2 + 1;
  }
  else {
    FUN_00ea7944(param_2,param_1[0x2d],param_1[0x2e]);
    iVar2 = extraout_r1_05;
  }
  FUN_00f09308(param_2,iVar2,param_1[0x30],param_1[0x31]);
  FUN_00f09574(param_2,param_1[0x35],param_1[0x32],param_1[0x33],param_1[0x34],param_1[0x35]);
  if (param_1[0x36] != 0x80000000) {
    FUN_00ea7944(param_2,param_1[0x37],param_1[0x38]);
    return (undefined4 *)0x0;
  }
  iVar2 = param_2[2];
  if (*param_2 == iVar2) {
    FUN_00edff4c(param_2,iVar2,1,1,1);
    iVar2 = param_2[2];
  }
  *(undefined1 *)(param_2[1] + iVar2) = 0;
  param_2[2] = iVar2 + 1;
  return (undefined4 *)0x0;
}

