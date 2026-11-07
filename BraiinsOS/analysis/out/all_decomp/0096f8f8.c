// FUN_0096f8f8 @ 0096f8f8 size=740 calls_out=12 calls_in=5
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_0096f8f8(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x104) == '\0') {
    piVar2 = *(int **)(param_1 + 0x100);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    goto LAB_0096fb7c;
  }
  if (*(char *)(param_1 + 0x104) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x54) == '\x04') {
    if ((*(uint *)(param_1 + 0x88) & 1) != 0) {
      iVar3 = 0x180;
      if (*(int *)(param_1 + 0xb8) != 0) {
        iVar3 = 0xb8;
      }
      iVar3 = *(int *)(param_1 + 0xbc) + iVar3;
      if (*(undefined1 **)(iVar3 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                     ,0x73,&DAT_018aceec);
      }
      FUN_0165b454(iVar3 + 0x58,param_1 + 0x90);
    }
    if (*(int *)(param_1 + 0xb8) == 0) {
      piVar2 = *(int **)(param_1 + 0xbc);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659344(*(undefined4 *)(param_1 + 0xbc));
      }
    }
    else {
      piVar2 = *(int **)(param_1 + 0xbc);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_016586fc(*(undefined4 *)(param_1 + 0xbc));
      }
    }
    bVar4 = *(uint *)(param_1 + 0x88) != 0 || *(int *)(param_1 + 0x8c) != 0;
    iVar3 = 0;
    if (bVar4) {
      iVar3 = *(int *)(param_1 + 0xa8);
    }
    if (bVar4 && iVar3 != 0) {
      (**(code **)(iVar3 + 0xc))(*(undefined4 *)(param_1 + 0xac));
    }
    FUN_008e7734(param_1 + 0x58);
LAB_0096fb58:
    FUN_007c50c4(param_1 + 4);
  }
  else if (*(char *)(param_1 + 0x54) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x68);
    if (cVar1 == '\x05') {
      if (*(char *)(param_1 + 0xfc) == '\x03') {
        if (*(int *)(param_1 + 0xf0) != 0) {
          FUN_0099a108(*(int *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf4),1);
        }
        *(undefined1 *)(param_1 + 0xfd) = 0;
      }
      FUN_008e7734(param_1 + 0x80);
      piVar2 = *(int **)(param_1 + 0x6c);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_007846b4(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70));
      }
    }
    else {
      if (cVar1 != '\x04') {
        if ((cVar1 == '\x03') && (*(int *)(param_1 + 0x6c) != 0)) {
          FUN_00999924(*(int *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),1);
        }
        goto LAB_0096fb58;
      }
      if (*(char *)(param_1 + 0xb9) == '\x03') {
        cVar1 = *(char *)(param_1 + 0xb0);
        bVar4 = cVar1 == '\x03';
        if (bVar4) {
          cVar1 = *(char *)(param_1 + 0x8d);
        }
        if (bVar4 && cVar1 == '\x04') {
          FUN_0163bdc0(param_1 + 0x90);
          if (*(int *)(param_1 + 0xa0) != 0) {
            (**(code **)(*(int *)(param_1 + 0xa0) + 0xc))(*(undefined4 *)(param_1 + 0xa4));
          }
          *(undefined1 *)(param_1 + 0x8c) = 0;
        }
        piVar2 = *(int **)(param_1 + 0x6c);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar4 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar4);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_007846b4(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70));
        }
        *(undefined1 *)(param_1 + 0xb8) = 0;
      }
    }
    piVar2 = *(int **)(param_1 + 0x60);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    }
    goto LAB_0096fb58;
  }
  piVar2 = *(int **)(param_1 + 0x100);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
LAB_0096fb7c:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0099b058(*(undefined4 *)(param_1 + 0x100));
    return;
  }
  return;
}

