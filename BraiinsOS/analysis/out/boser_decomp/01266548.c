// FUN_01266548 @ 01266548 size=80 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_01266548(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_14;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0xc);
  FUN_01264ff4();
  uVar1 = 0;
  if (iVar3 != iVar2) {
    local_14 = *(int *)(param_1 + 0x10);
    uVar1 = FUN_014dee0c(local_14 + ((uint)(iVar3 - iVar2) >> 4),&local_14,&DAT_01cfa01c);
  }
  return uVar1;
}

