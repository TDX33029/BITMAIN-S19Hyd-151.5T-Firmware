// FUN_0152a6b0 @ 0152a6b0 size=368 calls_out=1 calls_in=5
// strings: 

void FUN_0152a6b0(undefined1 *param_1,int *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  if (uVar4 - uVar5 < 2) {
    *param_1 = 0xc;
    *(undefined **)(param_1 + 4) = &DAT_0040bcee;
    *(undefined4 *)(param_1 + 8) = 10;
    return;
  }
  uVar3 = uVar5 + 2;
  bVar7 = 0xfffffffc < uVar5;
  bVar6 = uVar5 == 0xfffffffd;
  if (uVar5 < 0xfffffffe) {
    bVar7 = uVar4 <= uVar3;
    bVar6 = uVar3 == uVar4;
  }
  param_2[2] = uVar3;
  if (!(!bVar7 || bVar6)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar5,uVar3,uVar4,&DAT_018a78f8);
  }
  uVar2 = 0xf;
  uVar1 = *(ushort *)(*param_2 + uVar5) << 8 | *(ushort *)(*param_2 + uVar5) >> 8;
  if (uVar1 < 0x100) {
    switch(uVar1) {
    case 0x17:
      uVar2 = 0;
      break;
    case 0x18:
      uVar2 = 1;
      break;
    case 0x19:
      uVar2 = 2;
      break;
    case 0x1d:
      uVar2 = 3;
      break;
    case 0x1e:
      uVar2 = 4;
    }
  }
  else if (uVar1 < 0x200) {
    switch(uVar1) {
    case 0x100:
      uVar2 = 5;
      break;
    case 0x101:
      uVar2 = 6;
      break;
    case 0x102:
      uVar2 = 7;
      break;
    case 0x103:
      uVar2 = 8;
      break;
    case 0x104:
      uVar2 = 9;
    }
  }
  else {
    uVar2 = 0xf;
    if (uVar1 < 0x202) {
      if (uVar1 == 0x200) {
        uVar2 = 10;
      }
      else if (uVar1 == 0x201) {
        uVar2 = 0xb;
      }
    }
    else if (uVar1 == 0x202) {
      uVar2 = 0xc;
    }
    else if (uVar1 == 0x11eb) {
      uVar2 = 0xd;
    }
    else if (uVar1 == 0x11ec) {
      uVar2 = 0xe;
    }
  }
  *(ushort *)(param_1 + 4) = uVar1;
  *(undefined2 *)(param_1 + 2) = uVar2;
  *param_1 = 0x18;
  return;
}

