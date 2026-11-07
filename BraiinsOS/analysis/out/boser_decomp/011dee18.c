// FUN_011dee18 @ 011dee18 size=200 calls_out=3 calls_in=1
// strings: 

void FUN_011dee18(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  if (param_2 != 0) {
    uVar5 = FUN_0178e3fc(param_2,&DAT_00568e78);
    if ((int)uVar5 != 0) {
      uVar5 = (**(code **)((int)((ulonglong)uVar5 >> 0x20) + 0x1c))();
      iVar2 = (int)((ulonglong)uVar5 >> 0x20);
      puVar1 = (undefined4 *)uVar5;
      (**(code **)(iVar2 + 0xc))(&local_28,puVar1);
      if ((local_28 == 0x2013be2f && iStack_20 == -0x289fa449) &&
          (iStack_24 == 0x73eea1a5 && iStack_1c == 0x1741e319)) {
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        *param_1 = *puVar1;
        param_1[1] = uVar3;
        param_1[2] = uVar4;
        thunk_FUN_01be4678(puVar1);
        return;
      }
      FUN_00f80320(puVar1,iVar2);
    }
  }
  *param_1 = 0x80000000;
  return;
}

