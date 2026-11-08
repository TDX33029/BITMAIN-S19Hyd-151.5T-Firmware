// FUN_00c2edbc @ 00c2edbc size=64 calls_out=1 calls_in=0
// strings: 

void FUN_00c2edbc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xcc);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xb8);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00ba638c(param_1 + 0x60);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),param_3,param_4,
               unaff_r4,unaff_lr);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
  return;
}

