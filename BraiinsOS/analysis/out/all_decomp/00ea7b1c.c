// FUN_00ea7b1c @ 00ea7b1c size=1256 calls_out=5 calls_in=0
// strings: 

undefined4 * FUN_00ea7b1c(int *param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_40 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  
  FUN_00f09308(param_1,param_2,param_2,0);
  if (*param_3 == 1) {
    iVar3 = param_1[2];
    if (*param_1 == iVar3) {
      FUN_00edff4c(param_1,iVar3,1,1,1);
      iVar3 = param_1[2];
    }
    iVar9 = param_3[2];
    uVar12 = param_3[3];
    *(undefined1 *)(param_1[1] + iVar3) = 1;
    iVar3 = iVar3 + 1;
    param_1[2] = iVar3;
    if (*param_1 == iVar3) {
      FUN_00edff4c(param_1,iVar3,1,1,1);
      iVar3 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + iVar3) = 0;
    param_1[2] = iVar3 + 1;
    FUN_00f09308(param_1,iVar3,uVar12,0);
    iVar3 = param_1[2];
    if ((uint)(*param_1 - iVar3) < uVar12) {
      FUN_00edff4c(param_1,iVar3,uVar12,1,1);
      iVar3 = param_1[2];
    }
    FUN_016dd1aa(param_1[1] + iVar3,iVar9,uVar12);
    param_1[2] = iVar3 + uVar12;
  }
  else {
    iVar9 = param_3[2];
    iVar3 = param_1[2];
    iVar7 = param_3[3];
    if (*param_1 == iVar3) {
      FUN_00edff4c(param_1,iVar3,1,1,1);
      iVar3 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + iVar3) = 0;
    param_1[2] = iVar3 + 1;
    FUN_00f09308(param_1,iVar3,iVar7,0);
    for (iVar3 = 0; iVar7 * 0x68 != iVar3; iVar3 = iVar3 + 0x68) {
      iVar13 = iVar9 + iVar3;
      uVar12 = *(uint *)(iVar13 + 0x18);
      iVar4 = 2;
      if ((uint)(uVar12 < 5) <= (uint)-*(int *)(iVar13 + 0x1c)) {
        iVar4 = uVar12 - 5;
      }
      if (iVar4 == 0) {
        iVar4 = param_1[2];
        if (*param_1 == iVar4) {
          FUN_00edff4c(param_1,iVar4,1,1,1);
          iVar4 = param_1[2];
        }
        *(undefined1 *)(param_1[1] + iVar4) = 0;
        param_1[2] = iVar4 + 1;
      }
      else if (iVar4 == 1) {
        iVar4 = param_1[2];
        uVar10 = *(undefined4 *)(iVar13 + 0x20);
        uVar8 = *(undefined4 *)(iVar13 + 0x24);
        if (*param_1 == iVar4) {
          FUN_00edff4c(param_1,iVar4,1,1,1);
          iVar4 = param_1[2];
        }
        *(undefined1 *)(param_1[1] + iVar4) = 1;
        iVar4 = iVar4 + 1;
        param_1[2] = iVar4;
        if ((uint)(*param_1 - iVar4) < 8) {
          FUN_00edff4c(param_1,iVar4,8,1,1);
          iVar4 = param_1[2];
        }
        iVar2 = param_1[1];
        param_1[2] = iVar4 + 8;
        *(undefined4 *)(iVar2 + iVar4) = uVar10;
        ((undefined4 *)(iVar2 + iVar4))[1] = uVar8;
      }
      else {
        iVar4 = param_1[2];
        if (*param_1 == iVar4) {
          FUN_00edff4c(param_1,iVar4,1,1,1);
          iVar4 = param_1[2];
        }
        *(undefined1 *)(param_1[1] + iVar4) = 2;
        param_1[2] = iVar4 + 1;
        FUN_00efdc3c((uint *)(iVar13 + 0x18),param_1);
      }
      FUN_00efdc3c(iVar13,param_1);
      local_4c = 0;
      local_50 = 0;
      local_48 = 0;
      FUN_015f3c24(local_40,iVar13 + 0x30,&local_50);
      uVar8 = local_30;
      if ((local_40[0] & 1) != 0) {
        iVar3 = thunk_FUN_016d4a50(0x28);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,0x28);
        }
        FUN_016dd1aa(iVar3,&DAT_003594c0,0x28);
        puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
        if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        *puVar1 = 0x28;
        puVar1[1] = iVar3;
        puVar1[2] = 0x28;
        return puVar1;
      }
      FUN_00f09308(param_1,extraout_r1,local_38,uStack_34);
      FUN_00f09308(param_1,extraout_r1_00,uVar8,0);
      iVar4 = param_1[2];
      uVar10 = *(undefined4 *)(iVar13 + 0x50);
      uVar8 = *(undefined4 *)(iVar13 + 0x54);
      if ((uint)(*param_1 - iVar4) < 8) {
        FUN_00edff4c(param_1,iVar4,8,1,1);
        iVar4 = param_1[2];
      }
      param_1[2] = iVar4 + 8;
      iVar2 = param_1[1];
      uVar5 = *(undefined4 *)(iVar13 + 0x40);
      uVar6 = *(undefined4 *)(iVar13 + 0x44);
      uVar11 = *(undefined4 *)(iVar13 + 0x48);
      *(undefined4 *)(iVar2 + iVar4) = uVar10;
      ((undefined4 *)(iVar2 + iVar4))[1] = uVar8;
      FUN_00f09308(param_1,iVar4,uVar5,uVar6);
      FUN_00f09308(param_1,extraout_r1_01,uVar11,0);
      if (*(int *)(iVar13 + 0x58) == 1) {
        iVar4 = param_1[2];
        uVar8 = *(undefined4 *)(iVar13 + 0x5c);
        uVar10 = *(undefined4 *)(iVar13 + 0x60);
        if (*param_1 == iVar4) {
          FUN_00edff4c(param_1,iVar4,1,1,1);
          iVar4 = param_1[2];
        }
        *(undefined1 *)(param_1[1] + iVar4) = 1;
        iVar4 = iVar4 + 1;
        param_1[2] = iVar4;
        if ((uint)(*param_1 - iVar4) < 4) {
          FUN_00edff4c(param_1,iVar4,4,1,1);
          iVar4 = param_1[2];
        }
        *(undefined4 *)(param_1[1] + iVar4) = uVar8;
        iVar4 = iVar4 + 4;
        param_1[2] = iVar4;
        if ((uint)(*param_1 - iVar4) < 4) {
          FUN_00edff4c(param_1,iVar4,4,1,1);
          iVar4 = param_1[2];
        }
        *(undefined4 *)(param_1[1] + iVar4) = uVar10;
        iVar4 = iVar4 + 4;
      }
      else {
        iVar4 = param_1[2];
        if (*param_1 == iVar4) {
          FUN_00edff4c(param_1,iVar4,1,1,1);
          iVar4 = param_1[2];
        }
        *(undefined1 *)(param_1[1] + iVar4) = 0;
        iVar4 = iVar4 + 1;
      }
      param_1[2] = iVar4;
    }
  }
  return (undefined4 *)0x0;
}

