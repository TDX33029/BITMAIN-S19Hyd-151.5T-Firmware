// FUN_016f4b0c @ 016f4b0c size=132 calls_out=3 calls_in=1
// strings: 

void FUN_016f4b0c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined1 auStack_1c [12];
  
  uVar2 = FUN_016f486c(&DAT_01d17838,0xd,param_2,param_3);
  iVar1 = (int)uVar2;
  if (iVar1 != 0) {
    FUN_016e4448(auStack_1c,iVar1,iVar1 + (int)((ulonglong)uVar2 >> 0x20) * 8);
    FUN_016f68e8(&local_30,auStack_1c);
    if (local_30 != -0x80000000) {
      *param_1 = local_30;
      param_1[1] = iStack_2c;
      param_1[2] = iStack_28;
      param_1[3] = iStack_24;
      return;
    }
  }
  *param_1 = -0x80000000;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

