// FUN_00a887f0 @ 00a887f0 size=188 calls_out=3 calls_in=0
// strings: 

uint FUN_00a887f0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar2 = FUN_01265528();
  uVar6 = thunk_FUN_01bee35a(uVar2,uVar2);
  FUN_01ab2378((int)uVar6 + 0x60,(uint)((ulonglong)uVar6 >> 0x20) & 0xff);
  if (*(char *)(param_1 + 0x4b9) == '\0') {
    uVar5 = 2;
    if (*(char *)(param_1 + 0x4b4) != '\0') {
      uVar6 = thunk_FUN_01bee35a();
      uVar5 = (uint)((ulonglong)uVar6 >> 0x20);
      iVar3 = (int)uVar6;
      if (*(int *)(iVar3 + 0x68) == 0) {
        uVar4 = (uint)*(byte *)(iVar3 + 0x6c);
        *(undefined1 *)(iVar3 + 0x6c) = 3;
        if ((uVar4 != 3) && (uVar5 = uVar4, uVar4 == 0)) {
          uVar5 = (uint)*(byte *)(param_1 + 0x4ba);
        }
      }
    }
  }
  else {
    uVar5 = 2;
    if (*(char *)(param_1 + 0x4b4) != '\0') {
      iVar3 = thunk_FUN_01bee35a();
      if (*(int *)(iVar3 + 0x68) == 0) {
        bVar1 = *(byte *)(iVar3 + 0x6c);
        *(undefined1 *)(iVar3 + 0x6c) = 3;
        uVar5 = (uint)bVar1;
        if (bVar1 == 3) {
          uVar5 = 2;
        }
      }
      else {
        uVar5 = 2;
      }
    }
  }
  return uVar5;
}

