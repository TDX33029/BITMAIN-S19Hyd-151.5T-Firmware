// FUN_00b17828 @ 00b17828 size=664 calls_out=13 calls_in=1
// strings: 

void FUN_00b17828(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  int local_870;
  int iStack_86c;
  
  switch(*(undefined1 *)(param_1 + 0xbbb)) {
  case 3:
    FUN_00b10e24(param_1 + 0xbc0);
    return;
  case 4:
    if (*(char *)(param_1 + 0xcb8) != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xca4);
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = *(char *)(param_1 + 0xc9c);
    }
    if (!bVar6 || cVar1 != '\x03') {
      return;
    }
    if (*(int *)(param_1 + 0xc90) == 0) {
      return;
    }
    FUN_00c81a4c(*(int *)(param_1 + 0xc90),*(undefined4 *)(param_1 + 0xc94),1);
    return;
  case 5:
    if (*(char *)(param_1 + 0xcd0) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xcbc);
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = *(char *)(param_1 + 0xcb4);
      }
      if ((bVar6 && cVar1 == '\x03') && (*(int *)(param_1 + 0xca8) != 0)) {
        FUN_00c81a4c(*(int *)(param_1 + 0xca8),*(undefined4 *)(param_1 + 0xcac),1);
      }
    }
    break;
  case 6:
    FUN_00b13014(param_1 + 0xbc0);
    break;
  case 7:
    FUN_00b1545c(param_1 + 0xbc0);
    goto LAB_00b17a20;
  case 8:
    goto switchD_00b17850_caseD_8;
  case 9:
    FUN_00a07b4c(param_1 + 0xbc8);
    goto LAB_00b1793c;
  case 10:
    FUN_00b1545c(param_1 + 0x1418);
LAB_00b1793c:
    iVar2 = *(int *)(param_1 + 0xb90);
    if (iVar2 != 0) {
      puVar4 = (uint *)(iVar2 + 0x870);
      do {
        uVar5 = *puVar4;
        bVar6 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar6);
      *puVar4 = uVar5 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar5 & 10) == 8) {
        (**(code **)(*(int *)(iVar2 + 0x860) + 8))(*(undefined4 *)(iVar2 + 0x864));
      }
      if ((uVar5 & 2) != 0) {
        FUN_016dd1aa(&local_870,(undefined4 *)(iVar2 + 8),0x858);
        *(undefined4 *)(iVar2 + 8) = 2;
        *(undefined4 *)(iVar2 + 0xc) = 0;
        if (local_870 != 2 || iStack_86c != 0) {
          FUN_00d054d0(&local_870);
        }
      }
      piVar3 = *(int **)(param_1 + 0xb90);
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar6 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar6);
        *piVar3 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00d0554c(*(undefined4 *)(param_1 + 0xb90));
        }
      }
    }
    *(undefined1 *)(param_1 + 2999) = 0;
    *(undefined1 *)(param_1 + 0xbb3) = 0;
switchD_00b17850_caseD_8:
    if (*(char *)(param_1 + 0xbb6) != '\0') {
      FUN_00ad1570(param_1 + 0xbd8);
    }
LAB_00b17a20:
    *(undefined1 *)(param_1 + 0xbb6) = 0;
    FUN_00c48cbc(param_1 + 0xb84);
    break;
  case 0xb:
    FUN_00b1545c(param_1 + 0xbc0);
    goto LAB_00b17a68;
  case 0xc:
    FUN_00b13014(param_1 + 0xbc0);
    goto LAB_00b17a68;
  case 0xd:
    FUN_00b1443c(param_1 + 0xbc0);
LAB_00b17a68:
    FUN_00b10314(param_1 + 0x2c0);
    *(undefined1 *)(param_1 + 0xbb1) = 0;
    if (*(char *)(param_1 + 0xbb2) != '\0') {
      FUN_00c48cbc(param_1 + 0xb98);
    }
    *(undefined1 *)(param_1 + 0xbb2) = 0;
    goto LAB_00b17a94;
  default:
    return;
  }
  if (*(char *)(param_1 + 0xbb4) != '\0') {
    FUN_00c48cbc(param_1 + 0xb50);
  }
  *(undefined1 *)(param_1 + 0xbb4) = 0;
LAB_00b17a94:
  *(undefined1 *)(param_1 + 0xbba) = 0;
  *(undefined2 *)(param_1 + 3000) = 0;
  if (*(char *)(param_1 + 0xbb5) != '\0') {
    FUN_00b17d48(param_1 + 0x590);
  }
  *(undefined1 *)(param_1 + 0xbb5) = 0;
  return;
}

