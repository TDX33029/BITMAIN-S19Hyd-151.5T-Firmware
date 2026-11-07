// FUN_01426c68 @ 01426c68 size=120 calls_out=3 calls_in=0
// strings: 

void FUN_01426c68(undefined1 *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (*(char *)(param_2 + 0x2c) == '\x02') {
LAB_01426c94:
    uVar3 = FUN_0141fa74(param_2 + 0x20,param_3);
    if ((uVar3 & 1) == 0) {
      if ((int)(uVar3 >> 0x20) != 0) {
        FUN_01427298(param_1);
        return;
      }
LAB_01426cd4:
      uVar1 = 4;
      goto LAB_01426cd8;
    }
  }
  else {
    DataMemoryBarrier(0xb);
    if (-1 < *(int *)(*(int *)(param_2 + 0x24) + 0x1c)) goto LAB_01426c94;
    iVar2 = FUN_01421e44((int *)(param_2 + 0x24),param_3);
    if (iVar2 == 0) goto LAB_01426cd4;
  }
  uVar1 = 5;
LAB_01426cd8:
  *param_1 = uVar1;
  return;
}

