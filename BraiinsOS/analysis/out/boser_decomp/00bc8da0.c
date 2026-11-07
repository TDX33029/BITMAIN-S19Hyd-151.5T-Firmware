// FUN_00bc8da0 @ 00bc8da0 size=660 calls_out=13 calls_in=2
// strings: 

void FUN_00bc8da0(int *param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  
  switch(*(undefined1 *)((int)param_1 + 0x343)) {
  case 3:
    FUN_00bd08a8(param_1 + 0xd2);
    goto LAB_00bc9000;
  case 4:
    if ((char)param_1[0xdf] == '\x03') {
      cVar1 = (char)param_1[0xde];
      bVar3 = cVar1 == '\x03';
      if (bVar3) {
        cVar1 = (char)param_1[0xdd];
      }
      if (bVar3 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0xd5);
      }
    }
    break;
  case 5:
    if ((char)param_1[0xd4] == '\x03') {
      piVar2 = (int *)param_1[0xd3];
      if (*piVar2 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar3 = (bool)hasExclusiveAccess(piVar2);
        if (bVar3) {
          *piVar2 = 0x84;
          goto LAB_00bc8f8c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(*(int *)(param_1[0xd3] + 8) + 0x10))();
    }
    goto LAB_00bc8f8c;
  case 6:
    FUN_01139b38(param_1[0xd2],param_1[0xd3]);
    goto LAB_00bc8f78;
  case 7:
    FUN_005f49bc(param_1 + 0xd2);
    goto LAB_00bc8f78;
  case 8:
    if ((char)param_1[0xe0] == '\x03') {
      cVar1 = (char)param_1[0xdf];
      bVar3 = cVar1 == '\x03';
      if (bVar3) {
        cVar1 = (char)param_1[0xd6];
      }
      if (bVar3 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0xd7);
      }
    }
    goto LAB_00bc8f78;
  case 9:
    if ((char)param_1[0xe0] == '\x03') {
      cVar1 = (char)param_1[0xdf];
      bVar3 = cVar1 == '\x03';
      if (bVar3) {
        cVar1 = (char)param_1[0xde];
      }
      if (bVar3 && cVar1 == '\x03') {
        FUN_00b71be0(param_1 + 0xd9);
      }
    }
    goto LAB_00bc8f78;
  case 10:
    if ((char)param_1[0xe0] == '\x03') {
      cVar1 = (char)param_1[0xdf];
      bVar3 = cVar1 == '\x03';
      if (bVar3) {
        cVar1 = (char)param_1[0xd6];
      }
      if (bVar3 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0xd7);
      }
    }
LAB_00bc8f78:
    if (*(char *)((int)param_1 + 0x342) != '\0') {
      FUN_005f0d40(param_1 + 0x60);
    }
LAB_00bc8f8c:
    *(undefined1 *)((int)param_1 + 0x342) = 0;
    FUN_019f8c54(param_1[0xcc],1);
    break;
  case 0xb:
    if ((char)param_1[0xe0] == '\x03') {
      cVar1 = (char)param_1[0xdf];
      bVar3 = cVar1 == '\x03';
      if (bVar3) {
        cVar1 = (char)param_1[0xde];
      }
      if (bVar3 && cVar1 == '\x03') {
        FUN_00b71be0(param_1 + 0xd9);
      }
    }
    break;
  case 0xc:
    if ((char)param_1[0xe0] == '\x03') {
      cVar1 = (char)param_1[0xdf];
      bVar3 = cVar1 == '\x03';
      if (bVar3) {
        cVar1 = (char)param_1[0xd6];
      }
      if (bVar3 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0xd7);
      }
    }
    break;
  case 0xd:
    FUN_005f2928(param_1 + 0xd2);
    break;
  case 0xe:
    if ((char)param_1[0xe0] == '\x03') {
      cVar1 = (char)param_1[0xdf];
      bVar3 = cVar1 == '\x03';
      if (bVar3) {
        cVar1 = (char)param_1[0xde];
      }
      if (bVar3 && cVar1 == '\x03') {
        FUN_00b71be0(param_1 + 0xd9);
      }
    }
    break;
  case 0xf:
    if (*(char *)((int)param_1 + 0x455) == '\x03') {
      FUN_00bd0aac(param_1 + 0xd6);
    }
    break;
  case 0x10:
    FUN_00bd234c(param_1 + 0xd2);
    break;
  default:
    goto switchD_00bc8dc0_default;
  }
  if (*param_1 == 3 && param_1[1] == 0) {
    if ((char)param_1[0xd0] != '\0') {
      if (param_1[2] == 6) {
        if (*(char *)((int)param_1 + 0x341) != '\0') {
          FUN_00b9391c((char)param_1[3],param_1[4]);
        }
      }
      else {
        FUN_00bd205c();
      }
    }
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  else {
    FUN_00bd2110(param_1);
  }
LAB_00bc9000:
  *(undefined2 *)(param_1 + 0xd0) = 0;
switchD_00bc8dc0_default:
  return;
}

