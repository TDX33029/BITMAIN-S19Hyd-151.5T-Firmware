// FUN_0133e608 @ 0133e608 size=476 calls_out=8 calls_in=0
// strings: 

void FUN_0133e608(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int extraout_r1;
  int iVar4;
  int local_d0;
  int local_cc;
  char local_c8;
  
  if (param_4 == 0) {
    piVar2 = (int *)(param_2 + 200);
    if (*piVar2 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar2);
        if (bVar1) {
          *piVar2 = 1;
          DataMemoryBarrier(0xb);
          (**(code **)(*(int *)(param_2 + 0xc4) + 0x14))(&local_d0,*(undefined4 *)(param_2 + 0xc0));
          if (*(int *)(param_2 + 0xb0) != 2) {
            FUN_016a235c(param_2);
          }
          FUN_01bed4e2(param_2,&local_d0,0xc0);
          *(undefined1 *)(param_1 + 3) = 0;
          uVar3 = 1;
          goto LAB_0133e7ac;
        }
      } while (*piVar2 == 0);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  }
  if (*(int *)(param_2 + 0xd4) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013079d0(&DAT_01d06d00);
  }
  FUN_01bf0fd4(param_3);
  FUN_0069e2f4(&local_d0,*(int *)(param_2 + 0xd0) + extraout_r1 * 0x40);
  if (local_d0 == 0) {
    if (*(int *)(local_cc + 0x10) != 0) {
      iVar4 = *(int *)(local_cc + 0x10) + -1;
      *(int *)(local_cc + 0x10) = iVar4;
      uVar3 = *(undefined4 *)(*(int *)(local_cc + 0xc) + iVar4 * 4);
      *(undefined1 *)(param_1 + 3) = 0;
      *param_1 = 0;
      param_1[1] = uVar3;
      param_1[2] = param_2;
      FUN_00a97e8c(local_cc,local_c8);
      return;
    }
    FUN_00a97e8c(local_cc,local_c8);
    (**(code **)(*(int *)(param_2 + 0xc4) + 0x14))(&local_d0,*(undefined4 *)(param_2 + 0xc0));
    param_3 = thunk_FUN_01be5118(0xc0);
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0xc0);
    }
    FUN_01bed4e2(param_3,&local_d0,0xc0);
    uVar3 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    if (local_c8 != '\x02') {
      FUN_00a97e8c(local_cc);
    }
    (**(code **)(*(int *)(param_2 + 0xc4) + 0x14))(&local_d0,*(undefined4 *)(param_2 + 0xc0));
    param_3 = thunk_FUN_01be5118(0xc0);
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0xc0);
    }
    FUN_01bed4e2(param_3,&local_d0,0xc0);
    *(undefined1 *)(param_1 + 3) = 1;
    uVar3 = 0;
  }
LAB_0133e7ac:
  *param_1 = uVar3;
  param_1[1] = param_3;
  param_1[2] = param_2;
  return;
}

