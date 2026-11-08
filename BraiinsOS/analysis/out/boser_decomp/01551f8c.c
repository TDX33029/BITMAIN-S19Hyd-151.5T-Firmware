// FUN_01551f8c @ 01551f8c size=124 calls_out=3 calls_in=0
// strings: 

void FUN_01551f8c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_118 [128];
  undefined4 local_98 [32];
  
  iVar2 = 0;
  iVar1 = *(int *)*param_1;
  *(int *)*param_1 = 0;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d293f0);
  }
  do {
    uVar4 = FUN_015383f4(iVar2);
    local_98[iVar2 * 2] = (int)uVar4;
    iVar3 = iVar2 + 1;
    local_98[iVar2 * 2 + 1] = (int)((ulonglong)uVar4 >> 0x20);
    iVar2 = iVar3;
  } while (iVar3 != 0x10);
  FUN_01bed4e2(auStack_118,local_98,0x80);
  FUN_01bed4e2(iVar1,auStack_118,0x80);
  return;
}

