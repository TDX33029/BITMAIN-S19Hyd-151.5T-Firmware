// FUN_00679384 @ 00679384 size=308 calls_out=7 calls_in=2
// strings: 

undefined4 FUN_00679384(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  ulonglong uVar3;
  char local_4c;
  char local_4b;
  byte local_4a;
  undefined4 local_44 [3];
  int local_38;
  int local_34;
  int local_28;
  int local_24;
  undefined1 uStack_11;
  
  FUN_00677900(&local_4c,param_1);
  if (local_4c == '\x01') {
    return 1;
  }
  if (local_4b != '\x01') {
    local_44[0] = 5;
    FUN_01966fbc(local_44,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
    return 1;
  }
  if (local_4a == 0x2d) {
    FUN_0157653c(param_1 + 0xc);
    piVar2 = &local_38;
    FUN_00678ac4(piVar2,param_1,0);
    if (local_38 == 3 && local_34 == 0) {
      return 1;
    }
  }
  else {
    if (9 < local_4a - 0x30) {
      uVar1 = FUN_00678df8(param_1,&uStack_11,&DAT_01c258d0);
      goto LAB_0067949c;
    }
    piVar2 = &local_28;
    FUN_00678ac4(piVar2,param_1,1);
    if (local_28 == 3 && local_24 == 0) {
      return 1;
    }
  }
  uVar3 = FUN_0127835c(piVar2);
  uVar1 = (undefined4)(uVar3 >> 0x20);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
LAB_0067949c:
  FUN_012c6694(uVar1,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  return 1;
}

