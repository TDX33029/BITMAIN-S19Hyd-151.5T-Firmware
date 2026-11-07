// FUN_01b07174 @ 01b07174 size=164 calls_out=1 calls_in=0
// strings: 

int FUN_01b07174(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_01b07108();
  if (iVar1 == 0) {
    return 0;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x14);
  puVar2 = *(undefined4 **)(param_2 + 0x14);
  if (puVar4 == (undefined4 *)0x0 || puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar4 = *puVar2;
  puVar4[1] = puVar2[1];
  uVar3 = puVar2[3];
  puVar4[2] = puVar2[2];
  puVar4[3] = uVar3;
  return iVar1;
}

