// FUN_0196a468 @ 0196a468 size=276 calls_out=3 calls_in=2
// strings: 

int FUN_0196a468(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  
  puVar3 = (undefined4 *)*param_1;
  iVar4 = *(int *)(param_2 + 4);
  iVar5 = *(int *)(param_2 + 8);
  FUN_01968ab4(&local_28,*puVar3,&DAT_0053340d,1);
  if ((char)local_28 != '\x04') {
LAB_0196a570:
    iVar5 = FUN_01966f50(local_28,uStack_24);
    return iVar5;
  }
  if (iVar5 == 0) {
    FUN_01968ab4(&local_28,*puVar3,"]",1);
    if ((char)local_28 != '\x04') goto LAB_0196a570;
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 * 0x18;
    bVar1 = true;
    do {
      if (!bVar1) {
        FUN_01968ab4(&local_28,*puVar3,",",1);
        if ((char)local_28 != '\x04') goto LAB_0196a570;
      }
      iVar2 = FUN_0196a58c(iVar4,param_1);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar4 = iVar4 + 0x18;
      iVar5 = iVar5 + -0x18;
      bVar1 = false;
    } while (iVar5 != 0);
    FUN_01968ab4(&local_28,*puVar3,"]",1);
    iVar5 = 0;
    if ((char)local_28 != '\x04') {
      iVar5 = FUN_01966f50(local_28,uStack_24);
    }
  }
  return iVar5;
}

