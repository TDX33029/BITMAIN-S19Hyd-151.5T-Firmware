// FUN_0133e834 @ 0133e834 size=476 calls_out=8 calls_in=5
// strings: 

void FUN_0133e834(undefined4 *param_1,int *param_2,int param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int extraout_r1;
  int iVar4;
  int local_308;
  int local_304;
  char local_300;
  
  if (param_4 == 0) {
    piVar2 = param_2 + 0xbe;
    if (*piVar2 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar2);
        if (bVar1) {
          *piVar2 = 1;
          DataMemoryBarrier(0xb);
          (**(code **)(param_2[0xbd] + 0x14))(&local_308,param_2[0xbc]);
          if (*param_2 != 2) {
            FUN_01334b50(param_2);
          }
          FUN_01bed4e2(param_2,&local_308,0x2f0);
          *(undefined1 *)(param_1 + 3) = 0;
          uVar3 = 1;
          goto LAB_0133e9d8;
        }
      } while (*piVar2 == 0);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  }
  if (param_2[0xc1] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013079d0(&DAT_01d06d00);
  }
  FUN_01bf0fd4(param_3);
  FUN_0069e2f4(&local_308,param_2[0xc0] + extraout_r1 * 0x40);
  if (local_308 == 0) {
    if (*(int *)(local_304 + 0x10) != 0) {
      iVar4 = *(int *)(local_304 + 0x10) + -1;
      *(int *)(local_304 + 0x10) = iVar4;
      uVar3 = *(undefined4 *)(*(int *)(local_304 + 0xc) + iVar4 * 4);
      *(undefined1 *)(param_1 + 3) = 0;
      *param_1 = 0;
      param_1[1] = uVar3;
      param_1[2] = param_2;
      FUN_00a97e8c(local_304,local_300);
      return;
    }
    FUN_00a97e8c(local_304,local_300);
    (**(code **)(param_2[0xbd] + 0x14))(&local_308,param_2[0xbc]);
    param_3 = thunk_FUN_01be5118(0x2f0);
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x2f0);
    }
    FUN_01bed4e2(param_3,&local_308,0x2f0);
    uVar3 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    if (local_300 != '\x02') {
      FUN_00a97e8c(local_304);
    }
    (**(code **)(param_2[0xbd] + 0x14))(&local_308,param_2[0xbc]);
    param_3 = thunk_FUN_01be5118(0x2f0);
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x2f0);
    }
    FUN_01bed4e2(param_3,&local_308,0x2f0);
    *(undefined1 *)(param_1 + 3) = 1;
    uVar3 = 0;
  }
LAB_0133e9d8:
  *param_1 = uVar3;
  param_1[1] = param_3;
  param_1[2] = param_2;
  return;
}

