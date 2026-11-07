// FUN_01278434 @ 01278434 size=312 calls_out=5 calls_in=2
// strings: 

undefined4 FUN_01278434(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  ulonglong uVar5;
  undefined4 local_4c [3];
  int local_40;
  int local_3c;
  int local_30;
  int local_2c;
  undefined1 uStack_19;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 < *(uint *)(param_1 + 0x10)) {
    do {
      uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + uVar2);
      if ((0x17 < uVar3 - 9) || ((1 << (uVar3 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar3 == 0x2d) {
          piVar4 = &local_40;
          *(uint *)(param_1 + 0x14) = uVar2 + 1;
          FUN_012c751c(piVar4,param_1,0);
          if (local_40 == 3 && local_3c == 0) {
            return 1;
          }
        }
        else {
          if (9 < uVar3 - 0x30) {
            uVar1 = FUN_012c7788(param_1,&uStack_19,&DAT_01c258d0);
            goto LAB_0127855c;
          }
          piVar4 = &local_30;
          FUN_012c751c(piVar4,param_1,1);
          if (local_30 == 3 && local_2c == 0) {
            return 1;
          }
        }
        uVar5 = FUN_0127835c(piVar4);
        uVar1 = (undefined4)(uVar5 >> 0x20);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
LAB_0127855c:
        FUN_0127dee8(uVar1,param_1);
        return 1;
      }
      uVar2 = uVar2 + 1;
      *(uint *)(param_1 + 0x14) = uVar2;
    } while (*(uint *)(param_1 + 0x10) != uVar2);
  }
  local_4c[0] = 5;
  FUN_012c6b30(param_1,local_4c);
  return 1;
}

