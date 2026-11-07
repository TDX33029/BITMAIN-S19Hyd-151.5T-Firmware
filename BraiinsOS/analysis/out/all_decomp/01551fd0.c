// FUN_01551fd0 @ 01551fd0 size=428 calls_out=10 calls_in=0
// strings: 

void FUN_01551fd0(undefined4 param_1,undefined1 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uStack_19;
  
  uVar5 = *(uint *)(param_2 + 0x20);
  if (0x20 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar5,0x20,&DAT_018a7f24);
  }
  if (uVar5 == 0x20) {
    uVar1 = FUN_016e3960();
    iVar2 = FUN_0177a6c0(0x248);
    if (iVar2 != 0) {
      FUN_017231fc();
      iVar3 = FUN_017232f0(iVar2,uVar1,param_2,0x20,0x10,0);
      if (iVar3 == 1) {
        if (param_4 != 0xc) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb7204(0xc,param_4,&DAT_018a7ed4);
        }
        puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x18);
        if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x18);
        }
        uVar7 = *param_3;
        uVar1 = param_3[1];
        uVar6 = param_3[2];
        *param_2 = 0;
        *puVar4 = 0xb;
        puVar4[1] = iVar2;
        puVar4[2] = &DAT_018a7fa8;
        puVar4[3] = uVar7;
        puVar4[4] = uVar1;
        puVar4[5] = uVar6;
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
      FUN_017233d4(iVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_19,&DAT_018a8014,&DAT_018a7fe0);
}

