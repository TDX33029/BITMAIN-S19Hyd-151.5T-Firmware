// FUN_01b20590 @ 01b20590 size=240 calls_out=5 calls_in=0
// strings: 

bool FUN_01b20590(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = FUN_01b20040();
  if (iVar1 == 0) {
    return false;
  }
  puVar4 = *(undefined4 **)(param_2 + 0x14);
  puVar5 = *(undefined4 **)(param_1 + 0x14);
  iVar1 = puVar4[3];
  *puVar5 = *puVar4;
  puVar5[1] = puVar4[1];
  if (iVar1 != 0) {
    iVar1 = FUN_01b6bc20(puVar4[2]);
    puVar5[2] = iVar1;
    if (iVar1 == 0) {
      return false;
    }
    puVar5[3] = puVar4[3];
  }
  if (puVar4[5] != 0) {
    iVar1 = FUN_01b6bc20(puVar4[4]);
    puVar5[4] = iVar1;
    if (iVar1 == 0) {
      return false;
    }
    puVar5[5] = puVar4[5];
  }
  uVar2 = FUN_01afcde4(puVar4 + 6);
  uVar3 = FUN_01afce6c(puVar4 + 6);
  iVar1 = FUN_01afcfcc(puVar5 + 6,uVar2,uVar3);
  return iVar1 != 0;
}

