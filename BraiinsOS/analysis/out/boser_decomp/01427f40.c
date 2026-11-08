// FUN_01427f40 @ 01427f40 size=188 calls_out=0 calls_in=4
// strings: 

undefined4 FUN_01427f40(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (*param_1 != 0) {
    uVar3 = CONCAT44(param_1[1],*param_1);
    do {
      iVar2 = (int)((ulonglong)uVar3 >> 0x20);
      pbVar1 = (byte *)uVar3;
      (**(code **)(iVar2 + 0x1c))(&local_38,pbVar1);
      if ((local_38 == -0x5df0e1e4 && iStack_30 == -0x4e480163) &&
          (iStack_34 == -0x6318ae0d && iStack_2c == 0x716290ad)) {
        if (*pbVar1 < 3) {
          return *(undefined4 *)(pbVar1 + *(int *)(&DAT_00536f34 + (uint)*pbVar1 * 4));
        }
        return 2;
      }
      uVar3 = (**(code **)(iVar2 + 0x18))(pbVar1);
    } while ((int)uVar3 != 0);
  }
  return 2;
}

