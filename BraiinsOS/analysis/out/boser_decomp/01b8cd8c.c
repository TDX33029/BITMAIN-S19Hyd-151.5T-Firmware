// FUN_01b8cd8c @ 01b8cd8c size=244 calls_out=2 calls_in=1
// strings: 

void FUN_01b8cd8c(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_01d53560;
  if (*(int *)(param_1 + 300) == 1) {
    local_20 = *(undefined4 *)(param_1 + 0x97c);
    local_1c = *(undefined4 *)(param_1 + 0x980);
    local_18 = *(undefined4 *)(param_1 + 0x984);
  }
  else {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
  }
  uVar5 = FUN_01b8c6b8(param_1,param_2,&local_20,2);
  uVar1 = (uint)uVar5;
  if ((uVar1 < 0xffffff89) && (*(int *)(param_1 + 0x100) < 1)) {
    bVar4 = *(int *)(param_1 + 0x978) != 0;
    if (bVar4) {
      iVar2 = 0;
    }
    else {
      iVar2 = 3;
    }
    iVar3 = 0;
    if (!bVar4) {
      iVar3 = *(int *)(param_1 + 0xe0) << 2;
    }
    uVar1 = uVar1 + iVar2 + iVar3;
  }
  if ((local_14 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,(int)((ulonglong)uVar5 >> 0x20),local_14 ^ DAT_01d53560,0);
  }
  return;
}

