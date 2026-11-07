// FUN_01427ac8 @ 01427ac8 size=172 calls_out=0 calls_in=2
// strings: 

undefined4 FUN_01427ac8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  uVar2 = 1;
  if ((char)param_1[2] != '\a') {
    if (*param_1 != 0) {
      uVar3 = CONCAT44(param_1[1],*param_1);
      do {
        iVar1 = (int)((ulonglong)uVar3 >> 0x20);
        (**(code **)(iVar1 + 0x1c))(&local_38,(int)uVar3);
        if ((local_38 == -0x2a7fc06 && iStack_30 == 0x491b3795) &&
            (iStack_34 == -0x3a63c8a1 && iStack_2c == 0x14db1363)) {
          return 1;
        }
        uVar3 = (**(code **)(iVar1 + 0x18))((int)uVar3);
      } while ((int)uVar3 != 0);
    }
    uVar2 = 0;
  }
  return uVar2;
}

