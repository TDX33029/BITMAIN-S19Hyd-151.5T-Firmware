// FUN_01417f04 @ 01417f04 size=172 calls_out=4 calls_in=3
// strings: 

void FUN_01417f04(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_28 [2];
  int local_20;
  undefined4 local_1c;
  
  local_28[0] = 0;
  local_1c = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    local_28[0] = 2;
  }
  local_20 = param_1;
  while (uVar2 = FUN_01414bbc(local_28), iVar1 = (int)((ulonglong)uVar2 >> 0x20), (int)uVar2 != 0) {
    uVar2 = FUN_00f80570();
    FUN_0142f0d0(param_2,(int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
    FUN_01ac6cbc(param_2,0x5312dd,2);
    FUN_01ac6cbc(param_2,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
    FUN_01ac6cbc(param_2,&DAT_00531047,2);
  }
  return;
}

