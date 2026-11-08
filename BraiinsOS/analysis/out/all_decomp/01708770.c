// FUN_01708770 @ 01708770 size=320 calls_out=7 calls_in=0
// strings: 

bool FUN_01708770(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)FUN_0177a9c0(0x30);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_016e0ec4(puVar1 + 6,0);
    if (iVar2 != 0) {
      *(undefined4 **)(param_1 + 0x14) = puVar1;
      puVar5 = *(undefined4 **)(param_2 + 0x14);
      iVar2 = puVar5[3];
      uVar4 = puVar5[1];
      *puVar1 = *puVar5;
      puVar1[1] = uVar4;
      if (iVar2 == 0) {
        iVar2 = puVar5[5];
      }
      else {
        iVar2 = FUN_0177b624(puVar5[2]);
        puVar1[2] = iVar2;
        if (iVar2 == 0) {
          return false;
        }
        iVar2 = puVar5[5];
        puVar1[3] = puVar5[3];
      }
      if (iVar2 != 0) {
        iVar2 = FUN_0177b624(puVar5[4]);
        puVar1[4] = iVar2;
        if (iVar2 == 0) {
          return false;
        }
        puVar1[5] = puVar5[5];
      }
      uVar4 = FUN_016e145c(puVar5 + 6);
      uVar3 = FUN_016e14e0(puVar5 + 6);
      iVar2 = FUN_016e1700(puVar1 + 6,uVar4,uVar3);
      return iVar2 != 0;
    }
    FUN_0177aafc(puVar1);
  }
  return false;
}

