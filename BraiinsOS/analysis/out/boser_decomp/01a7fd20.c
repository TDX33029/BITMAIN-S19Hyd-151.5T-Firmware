// FUN_01a7fd20 @ 01a7fd20 size=200 calls_out=3 calls_in=3
// strings: 

void FUN_01a7fd20(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  if (param_2 != 0) {
    uVar6 = FUN_0070bdb8(param_2,&DAT_00568fd8);
    if ((int)uVar6 != 0) {
      uVar6 = (**(code **)((int)((ulonglong)uVar6 >> 0x20) + 0x1c))();
      iVar2 = (int)((ulonglong)uVar6 >> 0x20);
      puVar1 = (undefined4 *)uVar6;
      (**(code **)(iVar2 + 0xc))(&local_28,puVar1);
      if ((local_28 == 0x178dbdce && iStack_20 == 0x43bc703d) &&
          (iStack_24 == -0x20d254ee && iStack_1c == 0x2d4cf703)) {
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *param_1 = *puVar1;
        param_1[1] = uVar3;
        param_1[2] = uVar4;
        param_1[3] = uVar5;
        thunk_FUN_01be4678(puVar1);
        return;
      }
      FUN_01443048(puVar1,iVar2);
    }
  }
  *param_1 = 0;
  return;
}

