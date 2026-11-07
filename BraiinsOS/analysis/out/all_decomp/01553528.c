// FUN_01553528 @ 01553528 size=416 calls_out=6 calls_in=0
// strings: 

void FUN_01553528(int *param_1,undefined1 *param_2,int *param_3,int param_4,int *param_5,int param_6
                 )

{
  int *piVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 uStack_25;
  
  if (0x20 < *(uint *)(param_2 + 0x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,*(uint *)(param_2 + 0x20),0x20,&DAT_018a7f24);
  }
  FUN_006057a8(&local_38,*(undefined1 *)(*param_1 + 0x10),param_2);
  if (local_38 == 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_25,&DAT_018a8014,&DAT_018a7f74);
  }
  if (param_4 == 4) {
    if (param_6 == 8) {
      iVar6 = *param_3;
      iVar5 = *param_5;
      iVar4 = param_5[1];
      piVar1 = (int *)thunk_FUN_016d4a50(0x1c);
      if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x1c);
      }
      *piVar1 = local_38;
      piVar1[1] = local_34;
      piVar1[4] = iVar6;
      *param_2 = 0;
      piVar1[5] = iVar5;
      piVar1[2] = local_30;
      piVar1[3] = local_2c;
      piVar1[6] = iVar4;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      param_2[0x10] = 0;
      param_2[0x11] = 0;
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      param_2[0x14] = 0;
      param_2[0x15] = 0;
      param_2[0x16] = 0;
      param_2[0x17] = 0;
      param_2[0x18] = 0;
      param_2[0x19] = 0;
      param_2[0x1a] = 0;
      param_2[0x1b] = 0;
      param_2[0x1c] = 0;
      param_2[0x1d] = 0;
      param_2[0x1e] = 0;
      param_2[0x1f] = 0;
      return;
    }
    uVar2 = 8;
    puVar3 = &DAT_018a89e8;
  }
  else {
    uVar2 = 4;
    puVar3 = &DAT_018a89d8;
    param_6 = param_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb7204(uVar2,param_6,puVar3);
}

