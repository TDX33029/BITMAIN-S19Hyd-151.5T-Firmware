// FUN_018febd4 @ 018febd4 size=112 calls_out=3 calls_in=1
// strings: 

void FUN_018febd4(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_54 [68];
  
  FUN_018fec60(local_54,param_1,~*(byte *)(param_2 + 0x250) & 1);
  uVar2 = FUN_018fe374(*(undefined4 *)(param_1 + 8),local_54);
  FUN_0190afe8(param_2,(int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  iVar1 = 0;
  do {
    local_54[iVar1] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x40);
  return;
}

