// FUN_012f21c4 @ 012f21c4 size=628 calls_out=12 calls_in=1
// strings: 

void FUN_012f21c4(uint *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  iVar1 = 4;
  if (0x27 < uVar3) {
    iVar1 = uVar3 - 0x28;
  }
  switch(iVar1) {
  case 0:
  case 1:
  case 3:
    FUN_019bb7e0(param_1[1],param_1[2]);
    return;
  case 2:
    return;
  default:
    puVar2 = param_1 + 1;
    switch(uVar3) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      uVar3 = param_1[2];
      FUN_01631dd0(uVar3,param_1[3]);
      FUN_0134aee0(*puVar2,uVar3,8,0xd0);
      return;
    case 6:
    case 7:
    case 8:
      uVar3 = param_1[2];
      FUN_01632218(uVar3,param_1[3]);
      FUN_0134aee0(*puVar2,uVar3,4,0x14);
      return;
    case 9:
    case 10:
    case 0xb:
      uVar3 = param_1[2];
      FUN_016322c8(uVar3,param_1[3]);
      FUN_0134aee0(*puVar2,uVar3,4,0x14);
      return;
    case 0xc:
    case 0xd:
    case 0xe:
      uVar3 = param_1[2];
      FUN_01630cac(uVar3,param_1[3]);
      FUN_0134aee0(*puVar2,uVar3,8,0x60);
      return;
    case 0xf:
    case 0x10:
    case 0x11:
      uVar3 = param_1[2];
      FUN_01632130(uVar3,param_1[3]);
      FUN_0134aee0(*puVar2,uVar3,8,0x28);
      return;
    case 0x12:
      uVar3 = param_1[2];
      FUN_016321b0(uVar3,param_1[3]);
      FUN_0134aee0(param_1[1],uVar3,4,0x14);
      return;
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1f:
    case 0x20:
    case 0x21:
      uVar3 = param_1[2];
      FUN_01630e10(uVar3,param_1[3]);
      FUN_0134aee0(*puVar2,uVar3,8,0x30);
      return;
    case 0x1c:
    case 0x1d:
    case 0x1e:
      uVar3 = param_1[2];
      FUN_0162ecb4(uVar3,param_1[3]);
      FUN_0134aee0(*puVar2,uVar3,4,0x10);
      return;
    case 0x22:
    case 0x23:
    case 0x24:
      uVar3 = param_1[2];
      FUN_01631a4c(uVar3,param_1[3]);
      FUN_0134aee0(*puVar2,uVar3,4,0x10);
      return;
    default:
      uVar3 = param_1[2];
      FUN_01631e50(uVar3,param_1[3]);
      FUN_0134aee0(*puVar2,uVar3,4,0x14);
      return;
    }
  }
}

