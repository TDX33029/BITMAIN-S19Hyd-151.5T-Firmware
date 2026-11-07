// FUN_01b875ec @ 01b875ec size=560 calls_out=10 calls_in=1
// strings: 

undefined8
FUN_01b875ec(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,uint param_6,
            undefined4 param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_4 + 0x54);
  if (*(int *)(param_4 + 0x1c) - 1U < 2) {
    uVar1 = param_8 & 1;
  }
  else {
    uVar1 = 0;
  }
  uVar2 = 0xfffffe;
  iVar3 = param_5 + param_6;
  if (uVar1 == 0) {
    uVar2 = 0x9ffffffe;
  }
  if (uVar2 < param_6) {
    param_5 = iVar3 - uVar2;
    param_6 = uVar2;
  }
  FUN_01b85f50(param_1,param_5,param_6,0);
  if (param_2 != 0 && iVar4 == 1) {
    FUN_01b85f50(param_2,param_5,param_6,0);
    if (*(int *)(param_4 + 0x30) == 0) {
      iVar4 = iVar3 - *(int *)(param_2 + 4);
    }
    else {
      iVar4 = 0;
    }
    *(int *)(param_2 + 0x1c) = iVar4;
    FUN_01bbf618(param_2,param_5,iVar3,param_4 + 0x54);
  }
  if (*(uint *)(param_4 + 0x1c) < 8) {
    uVar1 = *(uint *)(param_4 + 8);
    if (*(uint *)(param_4 + 8) < *(uint *)(param_4 + 0xc)) {
      uVar1 = *(uint *)(param_4 + 0xc);
    }
    if (0x1b < uVar1) {
      uVar1 = 0x1c;
    }
    if ((uint)(8 << (uVar1 & 0xff)) < param_6) {
      param_5 = iVar3 - (8 << (uVar1 & 0xff));
      param_6 = 8 << (uVar1 & 0xff);
    }
  }
  *(int *)(param_1 + 0x1c) = param_5 - *(int *)(param_1 + 4);
  if (*(int *)(param_4 + 0x30) == 0) {
    iVar4 = iVar3 - *(int *)(param_1 + 4);
  }
  else {
    iVar4 = 0;
  }
  *(int *)(param_1 + 0x18) = iVar4;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_4 + 0x88);
  if (8 < param_6) {
    FUN_01b873e4(param_1,param_3,param_4,param_5,iVar3);
    switch(*(undefined4 *)(param_4 + 0x1c)) {
    case 1:
      FUN_01b95384(param_1,iVar3,param_7,param_8);
      break;
    case 2:
      FUN_01b8f014(param_1,iVar3,param_7,param_8);
      break;
    case 3:
    case 4:
    case 5:
      iVar4 = iVar3 + -8;
      if (*(int *)(param_1 + 0x6c) == 0) {
        if (*(int *)(param_4 + 0x84) == 1) {
          FUN_01bed93e(*(undefined4 *)(param_1 + 0x28),0,1 << (*(uint *)(param_4 + 0xc) & 0xff));
          FUN_01bb0298(param_1,iVar4);
        }
        else {
          FUN_01bb0068(param_1,iVar4);
        }
      }
      else {
        FUN_01bafc7c(param_1,iVar4);
      }
      break;
    case 6:
    case 7:
    case 8:
    case 9:
      FUN_01bc782c(param_1,iVar3 + -8,iVar3);
    }
    *(int *)(param_1 + 0x1c) = iVar3 - *(int *)(param_1 + 4);
  }
  return 0;
}

