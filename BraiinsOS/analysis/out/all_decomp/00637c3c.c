// FUN_00637c3c @ 00637c3c size=376 calls_out=4 calls_in=6
// strings: 

int FUN_00637c3c(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x68);
  if (uVar3 == 0) {
LAB_00637ce8:
    uVar3 = 0;
    if (param_3 < 0x41) goto LAB_00637d5c;
    cVar2 = *(char *)(param_1 + 0x69);
    do {
      FUN_006387d8(param_1 + 0x40,param_2,0x40,*(undefined4 *)(param_1 + 100),
                   *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
                   *(byte *)(param_1 + 0x6a) | cVar2 == '\0');
      param_3 = param_3 - 0x40;
      param_2 = param_2 + 0x40;
      cVar2 = *(char *)(param_1 + 0x69) + '\x01';
      *(char *)(param_1 + 0x69) = cVar2;
    } while (0x40 < param_3);
    uVar3 = (uint)*(byte *)(param_1 + 0x68);
  }
  else {
    if (0x40 < uVar3) goto LAB_00637da0;
    uVar4 = 0x40 - uVar3;
    if (param_3 < 0x40 - uVar3) {
      uVar4 = param_3;
    }
    FUN_016dd1aa(param_1 + uVar3,param_2,uVar4);
    param_2 = param_2 + uVar4;
    param_3 = param_3 - uVar4;
    uVar4 = *(byte *)(param_1 + 0x68) + uVar4;
    *(char *)(param_1 + 0x68) = (char)uVar4;
    if (param_3 != 0) {
      bVar1 = *(char *)(param_1 + 0x69) == '\0';
      FUN_006387d8(param_1 + 0x40,param_1,0x40,bVar1,*(undefined4 *)(param_1 + 0x60),
                   *(undefined4 *)(param_1 + 100),*(byte *)(param_1 + 0x6a) | bVar1);
      *(undefined1 *)(param_1 + 0x68) = 0;
      FUN_016dd606(param_1,0,0x40);
      *(char *)(param_1 + 0x69) = *(char *)(param_1 + 0x69) + '\x01';
      goto LAB_00637ce8;
    }
    param_3 = 0;
    uVar3 = uVar4 & 0xff;
  }
  if (0x40 < uVar3) {
LAB_00637da0:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar3,0x40,0x40,&DAT_01857b68);
  }
LAB_00637d5c:
  uVar4 = 0x40 - uVar3;
  if (param_3 < 0x40 - uVar3) {
    uVar4 = param_3;
  }
  FUN_016dd1aa(param_1 + uVar3,param_2,uVar4);
  *(char *)(param_1 + 0x68) = *(char *)(param_1 + 0x68) + (char)uVar4;
  return param_1;
}

