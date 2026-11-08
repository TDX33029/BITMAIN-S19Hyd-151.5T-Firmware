// FUN_00f7c6c0 @ 00f7c6c0 size=960 calls_out=10 calls_in=1
// strings: a Display implementation returned an error unexpectedly

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f7c6c0(uint *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,int *param_7,int param_8)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *local_60 [3];
  uint local_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined1 uStack_25;
  
  if ((param_8 == 0) && ((*(uint *)(param_6 + 0x11c) & 0x80) != 0)) {
    if ((*(uint *)(param_6 + 8) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_0035e2fc,99,&DAT_018808c4);
    }
    if (*(int *)(param_6 + 0xc) != 0) {
      local_30 = 0;
      local_60[1] = (uint *)&DAT_01880404;
      local_60[0] = &local_38;
      local_38 = 0;
      local_54 = 0;
      local_34 = 1;
      local_60[2] = (uint *)&DAT_60000020;
      iVar1 = FUN_00f9d654(param_6,local_60);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                     &DAT_0188041c);
      }
      *param_1 = 0x80000006;
      param_1[1] = local_38;
      param_1[2] = local_34;
      param_1[3] = local_30;
      return;
    }
    iVar1 = 4;
    FUN_00f7cacc(param_1,param_2,param_3,2);
    if (*param_1 != 0x80000009) {
      local_60[0] = (uint *)*param_1;
      local_60[1] = (uint *)param_1[1];
      local_60[2] = (uint *)param_1[2];
      local_54 = param_1[3];
      uStack_40 = param_1[8];
      uVar4 = 0x80000003;
      if (param_4 == 0) {
        uVar4 = 0x80000002;
      }
      local_50 = param_1[4];
      uStack_4c = param_1[5];
      uStack_48 = param_1[6];
      uStack_44 = param_1[7];
      *param_1 = uVar4;
      uVar4 = 4;
      if ((int)local_60[0] < 0) {
        uVar4 = (uint)local_60[0] ^ 0x80000000;
      }
      if (1 < uVar4 - 6) {
        if (uVar4 == 4) {
          if (local_60[0] != (uint *)0x0) {
            thunk_FUN_016d3fb4(param_1[1]);
          }
          iVar1 = 0x18;
          if (local_54 != 0) {
            thunk_FUN_016d3fb4(local_50);
          }
        }
        else if (uVar4 != 0) {
          return;
        }
      }
      if (*(int *)((int)local_60 + iVar1) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)((int)local_60 + iVar1 + 4));
        return;
      }
    }
  }
  else if (param_4 == 0) {
    uVar4 = FUN_00f7e5b4(param_2,param_7);
    if (uVar4 != 0) {
      *param_1 = 0x80000009;
      param_1[1] = uVar4;
      return;
    }
    uVar4 = *(uint *)(param_6 + 0x114);
    uVar5 = *(uint *)(param_6 + 0x118);
    if (*param_7 == 2) {
      *(char *)(param_7 + 7) = (char)param_3;
      param_7[2] = 0;
      param_7[3] = 4;
      param_7[4] = 0;
      param_7[5] = uVar4;
      param_7[6] = uVar5;
      *param_7 = 0;
    }
    param_1[1] = uVar4;
    param_1[2] = uVar5;
    *param_1 = 0x80000001;
  }
  else {
    piVar2 = (int *)thunk_FUN_016d4a50(0xc);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    if (param_5 < 0) {
      uVar3 = 0;
LAB_00f7c7cc:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar3,param_5);
    }
    iVar6 = 1;
    iVar1 = 0;
    if (param_5 != 0) {
      iVar6 = thunk_FUN_016d4a50(param_5);
      if (iVar6 == 0) {
        uVar3 = 1;
        goto LAB_00f7c7cc;
      }
      iVar1 = param_5;
    }
    FUN_016dd1aa(iVar6,param_4,param_5);
    *piVar2 = iVar1;
    piVar2[1] = iVar6;
    piVar2[2] = param_5;
    FUN_00f7cacc(param_1,param_2,param_3,2);
    if (*param_1 != 0x80000009) {
      local_60[0] = (uint *)*param_1;
      local_60[1] = (uint *)param_1[1];
      local_60[2] = (uint *)param_1[2];
      local_54 = param_1[3];
      uStack_40 = param_1[8];
      local_50 = param_1[4];
      uStack_4c = param_1[5];
      uStack_48 = param_1[6];
      uStack_44 = param_1[7];
      *param_1 = 0x80000002;
      uVar4 = 4;
      iVar1 = 4;
      if ((int)local_60[0] < 0) {
        uVar4 = (uint)local_60[0] ^ 0x80000000;
      }
      if (1 < uVar4 - 6) {
        if (uVar4 == 4) {
          if (local_60[0] != (uint *)0x0) {
            thunk_FUN_016d3fb4(param_1[1]);
          }
          iVar1 = 0x18;
          if (local_54 != 0) {
            thunk_FUN_016d3fb4(local_50);
          }
        }
        else if (uVar4 != 0) {
          return;
        }
      }
      if (*(int *)((int)local_60 + iVar1) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)((int)local_60 + iVar1 + 4));
        return;
      }
    }
  }
  return;
}

