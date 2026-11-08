// FUN_014ca838 @ 014ca838 size=80 calls_out=2 calls_in=19
// strings: 

undefined4 FUN_014ca838(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_14;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0xc);
  FUN_014deb6c();
  uVar1 = 0;
  if (iVar3 != iVar2) {
    local_14 = *(int *)(param_1 + 0x10);
    uVar1 = FUN_014dee0c(local_14 + ((uint)(iVar3 - iVar2) >> 4),&local_14,&DAT_01cfa01c);
  }
  return uVar1;
}

