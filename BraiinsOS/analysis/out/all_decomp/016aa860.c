// FUN_016aa860 @ 016aa860 size=312 calls_out=8 calls_in=2
// strings: 

void FUN_016aa860(undefined4 param_1,int param_2,undefined4 *param_3)

{
  char *pcVar1;
  int iVar2;
  int unaff_r7;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*(char *)(param_2 + 0x101) == '\0') {
    FUN_016a8a14(param_3[2],param_3[3]);
  }
  if (param_3[4] == -0x80000000) {
    iVar3 = param_3[2];
    iVar2 = 0;
    do {
      if (param_3[3] * 0x20 == iVar2) {
        FUN_0169c7a0(&local_30,iVar3,iVar3 + param_3[3] * 0x20);
        if (param_3[7] == -0x80000000) {
          iVar2 = -0x80000000;
        }
        else {
          uVar4 = param_3[8];
          iVar2 = param_3[9];
          if (iVar2 == 0) {
            unaff_r7 = 1;
          }
          else {
            unaff_r7 = thunk_FUN_016d4a50(iVar2);
            if (unaff_r7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar2);
            }
          }
          FUN_016dd1aa(unaff_r7,uVar4,iVar2);
        }
        local_48 = local_30;
        uStack_44 = uStack_2c;
        uStack_40 = uStack_28;
        local_4c = *param_3;
        iStack_3c = iVar2;
        local_38 = unaff_r7;
        local_34 = iVar2;
        FUN_00a066d8(param_2,&local_4c);
        FUN_016dd1aa(param_1,param_2,0x108);
        FUN_016a01b4(param_3);
        return;
      }
      pcVar1 = (char *)(iVar3 + iVar2);
      iVar2 = iVar2 + 0x20;
    } while (*pcVar1 == '\a');
  }
  *(undefined1 *)(param_2 + 0x100) = 1;
  FUN_0169ffa0(param_2 + 0x10,param_3);
  FUN_016dd1aa(param_1,param_2,0x108);
  return;
}

