// FUN_0138bc9c @ 0138bc9c size=200 calls_out=1 calls_in=6
// strings: 

void FUN_0138bc9c(undefined1 *param_1,uint *param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_2[1] == 0) && (*param_2 < *(uint *)(param_2[2] + 4))) {
    uVar4 = ~(-1 << (param_3 & 0xff)) & 0xff;
    uVar2 = FUN_013b4b1c(param_2);
    uVar2 = uVar4 & uVar2;
    if (uVar2 == uVar4) {
      uVar4 = 0;
      do {
        if ((param_2[1] != 0) || (*(uint *)(param_2[2] + 4) <= *param_2)) goto LAB_0138bd48;
        uVar3 = FUN_013b4b1c(param_2);
        uVar2 = uVar2 + ((uVar3 & 0x7f) << (uVar4 & 0xff));
        if (-1 < (char)uVar3) goto LAB_0138bd54;
        uVar4 = uVar4 + 7;
      } while (uVar4 != 0x1c);
      param_1[1] = 0xb;
      uVar1 = 1;
    }
    else {
LAB_0138bd54:
      *(uint *)(param_1 + 4) = uVar2;
      uVar1 = 0;
    }
  }
  else {
LAB_0138bd48:
    uVar1 = 1;
    param_1[1] = 1;
  }
  *param_1 = uVar1;
  return;
}

