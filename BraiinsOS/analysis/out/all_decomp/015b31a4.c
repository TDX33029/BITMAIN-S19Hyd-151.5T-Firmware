// FUN_015b31a4 @ 015b31a4 size=1360 calls_out=1 calls_in=1
// strings: 

uint FUN_015b31a4(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  switch(param_2) {
  case 1:
    cVar1 = (char)*param_1;
    uVar4 = 7;
    if (cVar1 == 'K') {
      return 0x207;
    }
    if (cVar1 == 'N') {
      return 7;
    }
    if (cVar1 != 'X') {
      uVar4 = 0;
    }
    return uVar4 | 0x100;
  case 2:
    if ((short)*param_1 == 0x4e4e) {
      return 0x307;
    }
    if ((short)*param_1 == 0x4b4e) {
      return 0x407;
    }
    if ((short)*param_1 == 0x584e) {
      return 0x507;
    }
    if ((short)*param_1 == 0x4e58) {
      return 0x607;
    }
    if ((short)*param_1 == 0x4b58) {
      return 0x707;
    }
    if ((short)*param_1 == 0x5858) {
      return 0x807;
    }
    if ((short)*param_1 == 0x4e4b) {
      return 0x907;
    }
    if ((short)*param_1 == 0x4b4b) {
      return 0xa07;
    }
    if ((short)*param_1 == 0x584b) {
      return 0xb07;
    }
    if ((short)*param_1 == 0x4e49) {
      return 0xc07;
    }
    if ((short)*param_1 == 0x4b49) {
      return 0xd07;
    }
    if ((short)*param_1 == 0x5849) {
      return 0xe07;
    }
    return 0x100;
  case 3:
    break;
  case 4:
    if (*param_1 == 0x314b3158) {
      return 0x1407;
    }
    if (*param_1 == 0x31583158) {
      return 0x1707;
    }
    if (*param_1 == 0x314b314b) {
      return 0x1b07;
    }
    if (*param_1 == 0x3158314b) {
      return 0x1e07;
    }
    if (*param_1 == 0x314b3149) {
      return 0x2207;
    }
    iVar2 = thunk_FUN_016dd50a(param_1,&DAT_00568af4,4);
    iVar3 = 1;
    uVar4 = 0;
    if (iVar2 == 0) {
      iVar3 = 0x25;
      uVar4 = 7;
    }
    return uVar4 | iVar3 << 8;
  default:
    return 0x100;
  }
  iVar3 = thunk_FUN_016dd50a(param_1,&DAT_0040f721,3);
  if (iVar3 == 0) {
    return 0xf07;
  }
  iVar3 = thunk_FUN_016dd50a(param_1,&DAT_0040f724,3);
  if (iVar3 == 0) {
    return 0x1007;
  }
  iVar3 = thunk_FUN_016dd50a(param_1,&DAT_0040f727,3);
  if (iVar3 == 0) {
    return 0x1107;
  }
  iVar3 = thunk_FUN_016dd50a(param_1,&DAT_0040f72a,3);
  if (iVar3 == 0) {
    return 0x1207;
  }
  iVar3 = thunk_FUN_016dd50a(param_1,&DAT_0040f72d,3);
  if (iVar3 == 0) {
    return 0x1307;
  }
  iVar3 = thunk_FUN_016dd50a(param_1,&DAT_0040f730,3);
  if (iVar3 == 0) {
    return 0x1507;
  }
  iVar3 = thunk_FUN_016dd50a(param_1,&DAT_0040f733,3);
  if (iVar3 == 0) {
    return 0x1607;
  }
  iVar3 = thunk_FUN_016dd50a(param_1,&DAT_0040f736,3);
  if (iVar3 == 0) {
    return 0x1807;
  }
  iVar3 = thunk_FUN_016dd50a(param_1,&DAT_0040f739,3);
  if (iVar3 == 0) {
    return 0x1907;
  }
  iVar3 = thunk_FUN_016dd50a(param_1,&DAT_0040f73c,3);
  if (iVar3 == 0) {
    return 0x1a07;
  }
  iVar3 = thunk_FUN_016dd50a(param_1,&DAT_0040f73f,3);
  if (iVar3 == 0) {
    return 0x1c07;
  }
  iVar3 = thunk_FUN_016dd50a(param_1,&DAT_0040f742,3);
  if (iVar3 == 0) {
    return 0x1d07;
  }
  iVar3 = thunk_FUN_016dd50a(param_1,&DAT_0040f745,3);
  if (iVar3 == 0) {
    return 0x1f07;
  }
  iVar3 = thunk_FUN_016dd50a(param_1,&DAT_0040f748,3);
  if (iVar3 == 0) {
    return 0x2007;
  }
  iVar3 = thunk_FUN_016dd50a(param_1,&DAT_0040f74b,3);
  if (iVar3 == 0) {
    return 0x2107;
  }
  iVar3 = thunk_FUN_016dd50a(param_1,&DAT_0040f74e,3);
  if (iVar3 == 0) {
    return 0x2307;
  }
  iVar2 = thunk_FUN_016dd50a(param_1,&DAT_0040f751,3);
  iVar3 = 1;
  uVar4 = 0;
  if (iVar2 == 0) {
    iVar3 = 0x24;
    uVar4 = 7;
  }
  return uVar4 | iVar3 << 8;
}

