// FUN_01b4bd74 @ 01b4bd74 size=196 calls_out=5 calls_in=0
// strings: 

int FUN_01b4bd74(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = FUN_01b4a580();
  if (iVar1 != 0) {
    puVar5 = *(undefined4 **)(param_2 + 0x14);
    puVar3 = *(undefined4 **)(param_1 + 0x14);
    puVar4 = puVar3 + 2;
    *puVar3 = *puVar5;
    if ((puVar5[0x132] == 0) || (iVar2 = FUN_01b49b48(puVar3 + 0x132,puVar5 + 0x132), iVar2 != 0)) {
      iVar2 = FUN_01b4bd40(puVar4,puVar5 + 2);
      if (iVar2 != 0) {
        return iVar1;
      }
      FUN_01b4a5d4(puVar4);
      FUN_01b6b1c4(puVar3[0x132]);
      FUN_01b6b1c4(puVar3);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    else {
      FUN_01b4a5d4(puVar4);
      FUN_01b6b1c4(puVar3);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return 0;
}

