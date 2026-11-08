// FUN_01224994 @ 01224994 size=296 calls_out=5 calls_in=3
// strings: 

undefined4 FUN_01224994(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int local_30;
  int iStack_2c;
  undefined1 uStack_19;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 < *(uint *)(param_1 + 0x10)) {
    do {
      uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + uVar2);
      if ((0x17 < uVar3 - 9) || ((1 << (uVar3 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar3 == 0x2d) {
          *(uint *)(param_1 + 0x14) = uVar2 + 1;
          FUN_01964ce0(&local_30,param_1,0);
          if (local_30 == 3 && iStack_2c == 0) {
            return 1;
          }
        }
        else {
          if (9 < uVar3 - 0x30) {
            uVar1 = FUN_019659c8(param_1,&uStack_19,&DAT_01c252f4);
            goto LAB_01224aac;
          }
          FUN_01964ce0(&local_30,param_1,1);
          if (local_30 == 3 && iStack_2c == 0) {
            return 1;
          }
        }
        uVar4 = FUN_01224738(&local_30);
        uVar1 = (undefined4)(uVar4 >> 0x20);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
LAB_01224aac:
        FUN_01966f00(uVar1,param_1);
        return 1;
      }
      uVar2 = uVar2 + 1;
      *(uint *)(param_1 + 0x14) = uVar2;
    } while (*(uint *)(param_1 + 0x10) != uVar2);
  }
  local_30 = 5;
  FUN_01964674(param_1,&local_30);
  return 1;
}

