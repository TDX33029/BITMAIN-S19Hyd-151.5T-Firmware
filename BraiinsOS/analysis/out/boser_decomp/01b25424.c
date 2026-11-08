// FUN_01b25424 @ 01b25424 size=108 calls_out=1 calls_in=0
// strings: 

void FUN_01b25424(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_01b1fd38();
  if (iVar1 == 0) {
    return;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x14);
  uVar2 = (*(undefined4 **)(param_2 + 0x14))[1];
  *puVar3 = **(undefined4 **)(param_2 + 0x14);
  puVar3[1] = uVar2;
  return;
}

