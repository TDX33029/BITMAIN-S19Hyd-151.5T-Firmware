// FUN_01b85270 @ 01b85270 size=92 calls_out=0 calls_in=1
// strings: 

void FUN_01b85270(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar3;
  uint *puVar2;
  int iVar4;
  
  if (param_2 < 0) {
    param_2 = param_2 + 0xf;
  }
  for (iVar4 = 0; iVar4 < param_2 >> 4; iVar4 = iVar4 + 1) {
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 1;
      if (*puVar2 < param_3 + 2U) {
        uVar1 = 0;
      }
      else {
        uVar1 = *puVar2 - param_3;
      }
      *puVar2 = uVar1;
      puVar2 = puVar3;
    } while (puVar3 != param_1 + 0x10);
    param_1 = param_1 + 0x10;
  }
  return;
}

