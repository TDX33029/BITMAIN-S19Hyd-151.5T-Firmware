// FUN_00b22f80 @ 00b22f80 size=724 calls_out=7 calls_in=1
// strings: 

void FUN_00b22f80(int *param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return;
    }
    if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00b22fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)param_1[1])();
    return;
  }
  cVar1 = (char)param_1[0x5d];
  bVar6 = cVar1 == '\x03';
  if (bVar6) {
    cVar1 = (char)param_1[0x58];
  }
  if (!bVar6 || cVar1 != '\x03') {
    return;
  }
  if ((char)param_1[0xe] != '\x04') {
    if (((char)param_1[0xe] == '\x03') && (param_1[0xf] != 0)) {
      FUN_00c8204c(param_1[0xf],param_1[0x10],1);
    }
    goto LAB_00b231f4;
  }
  switch((char)param_1[0x20]) {
  case '\x03':
    if (param_1[0x22] != 0) {
      FUN_00c8204c(param_1[0x22],param_1[0x23],1);
    }
    goto switchD_00b23018_default;
  case '\x04':
    if ((char)param_1[0x2a] == '\x04') {
      iVar4 = param_1[0x2c];
      puVar5 = (undefined4 *)param_1[0x2d];
      if ((code *)*puVar5 != (code *)0x0) {
        (*(code *)*puVar5)(iVar4);
      }
LAB_00b231a0:
      if (puVar5[1] != 0) goto LAB_00b231b0;
    }
    else if ((char)param_1[0x2a] == '\x03') {
      cVar1 = (char)param_1[0x53];
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = (char)param_1[0x51];
      }
      if (bVar6 && cVar1 == '\x03') {
        if (*(char *)((int)param_1 + 0xfd) == '\x04') {
          puVar5 = (undefined4 *)param_1[0x41];
          iVar4 = param_1[0x40];
          pcVar3 = (code *)*puVar5;
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(iVar4);
          }
          if (puVar5[1] != 0) {
            thunk_FUN_016d3fb4(iVar4);
          }
          FUN_008672e4(param_1[0x3c]);
        }
        else {
          if (*(char *)((int)param_1 + 0xfd) != '\x03') break;
          if ((char)param_1[0x4f] == '\x03') {
            cVar1 = (char)param_1[0x4e];
            bVar6 = cVar1 == '\x03';
            if (bVar6) {
              cVar1 = (char)param_1[0x45];
            }
            if (bVar6 && cVar1 == '\x04') {
              FUN_0163c790(param_1 + 0x46);
              if (param_1[0x47] != 0) {
                (**(code **)(param_1[0x47] + 0xc))(param_1[0x48]);
              }
            }
          }
        }
        *(undefined1 *)(param_1 + 0x3f) = 0;
      }
    }
    break;
  case '\x05':
    if ((char)param_1[0x2c] == '\x03') {
      iVar4 = param_1[0x2a];
      puVar5 = (undefined4 *)param_1[0x2b];
      if ((code *)*puVar5 != (code *)0x0) {
        (*(code *)*puVar5)(iVar4);
      }
      goto LAB_00b231a0;
    }
    break;
  case '\x06':
    if ((char)param_1[0x2c] == '\x03') {
      iVar4 = param_1[0x2a];
      puVar5 = (undefined4 *)param_1[0x2b];
      pcVar3 = (code *)*puVar5;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(iVar4);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(iVar4);
      }
    }
    if (param_1[0x2f] != 0) {
      iVar4 = param_1[0x2d];
LAB_00b231b0:
      thunk_FUN_016d3fb4(iVar4);
    }
    break;
  case '\a':
    if (param_1[0x25] != 0) {
      FUN_00c8204c(param_1[0x25],param_1[0x26],1);
    }
    if (param_1[0x22] != 0) {
      thunk_FUN_016d3fb4(param_1[0x23]);
    }
    *(undefined1 *)((int)param_1 + 0x7f) = 0;
    break;
  case '\b':
    FUN_00a07b4c(param_1 + 0x22);
    break;
  default:
    goto switchD_00b23018_default;
  }
  bVar6 = *(char *)((int)param_1 + 0x7e) != '\0';
  iVar4 = 0;
  if (bVar6) {
    iVar4 = param_1[0x1a];
  }
  if (bVar6 && iVar4 != 0) {
    thunk_FUN_016d3fb4(param_1[0x1b]);
  }
  *(undefined1 *)((int)param_1 + 0x7e) = 0;
  if (param_1[0x16] != 0) {
    thunk_FUN_016d3fb4(param_1[0x17]);
  }
switchD_00b23018_default:
  FUN_00c822ec(param_1[0xd]);
LAB_00b231f4:
  piVar2 = (int *)param_1[0x57];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f31e8(param_1[0x57]);
    return;
  }
  return;
}

