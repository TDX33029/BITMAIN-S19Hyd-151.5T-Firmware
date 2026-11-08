// FUN_016001d0 @ 016001d0 size=540 calls_out=8 calls_in=1
// strings: 

void FUN_016001d0(undefined4 *param_1,int *param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r1;
  uint uVar4;
  int *piVar5;
  undefined1 auStack_308 [752];
  
  if (param_4 == 0) {
    piVar5 = param_2 + 0xbe;
    if (*piVar5 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar5);
        if (bVar1) {
          *piVar5 = 1;
          DataMemoryBarrier(0xb);
          (**(code **)(param_2[0xbd] + 0x14))(auStack_308,param_2[0xbc]);
          if (*param_2 != 2) {
            FUN_01600440(param_2);
          }
          FUN_01bed4e2(param_2,auStack_308,0x2f0);
          *(undefined1 *)(param_1 + 3) = 0;
          uVar2 = 1;
          goto LAB_016002d8;
        }
      } while (*piVar5 == 0);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  }
  if (param_2[0xc1] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013079d0(&DAT_01d06d00);
  }
  FUN_01bf0fd4(param_3);
  piVar5 = (int *)(param_2[0xc0] + extraout_r1 * 0x40);
  do {
    if (*piVar5 != 0) {
      ClearExclusiveLocal();
      goto LAB_01600298;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = 1;
  DataMemoryBarrier(0xb);
  uVar4 = 0;
  if ((DAT_01d51b08 & 0x7fffffff) != 0) {
    uVar4 = FUN_0197ac0c(DAT_01d51b08,0);
    uVar4 = uVar4 ^ 1;
  }
  if ((char)piVar5[1] == '\0') {
    if (piVar5[4] != 0) {
      iVar3 = piVar5[4] + -1;
      piVar5[4] = iVar3;
      uVar2 = *(undefined4 *)(piVar5[3] + iVar3 * 4);
      *(undefined1 *)(param_1 + 3) = 0;
      param_1[1] = uVar2;
      param_1[2] = param_2;
      *param_1 = 0;
      FUN_00a97e8c(piVar5,uVar4);
      return;
    }
    FUN_00a97e8c(piVar5,uVar4);
    (**(code **)(param_2[0xbd] + 0x14))(auStack_308,param_2[0xbc]);
    param_3 = thunk_FUN_01be5118(0x2f0);
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x2f0);
    }
    FUN_01bed4e2(param_3,auStack_308,0x2f0);
    uVar2 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    FUN_00a97e8c(piVar5,uVar4);
LAB_01600298:
    (**(code **)(param_2[0xbd] + 0x14))(auStack_308,param_2[0xbc]);
    param_3 = thunk_FUN_01be5118(0x2f0);
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x2f0);
    }
    FUN_01bed4e2(param_3,auStack_308,0x2f0);
    *(undefined1 *)(param_1 + 3) = 1;
    uVar2 = 0;
  }
LAB_016002d8:
  *param_1 = uVar2;
  param_1[1] = param_3;
  param_1[2] = param_2;
  return;
}

