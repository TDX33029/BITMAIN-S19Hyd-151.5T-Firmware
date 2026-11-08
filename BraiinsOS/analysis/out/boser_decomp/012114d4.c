// FUN_012114d4 @ 012114d4 size=164 calls_out=1 calls_in=1
// strings: 

uint FUN_012114d4(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int extraout_r2;
  int extraout_r3;
  undefined8 uVar6;
  
  cVar1 = *(char *)(param_2 + 0x50c);
  uVar5 = 2;
  if (*(char *)(param_1 + 0x511) == '\x01') {
    if (cVar1 != '\0') {
      uVar6 = thunk_FUN_01bee35a(cVar1,0x60,param_1);
      iVar3 = (int)uVar6 + (int)((ulonglong)uVar6 >> 0x20);
      if (*(int *)(iVar3 + 8) == 0) {
        bVar2 = *(byte *)(iVar3 + 0xc);
        *(undefined1 *)(iVar3 + 0xc) = 3;
        uVar5 = (uint)bVar2;
        if (bVar2 == 3) {
          uVar5 = 2;
        }
      }
      else {
        uVar5 = 2;
      }
    }
  }
  else if (cVar1 != '\0') {
    uVar6 = thunk_FUN_01bee35a(cVar1,2,param_1,0x60);
    uVar5 = (uint)((ulonglong)uVar6 >> 0x20);
    iVar3 = (int)uVar6 + extraout_r3;
    if (*(int *)(iVar3 + 8) == 0) {
      uVar4 = (uint)*(byte *)(iVar3 + 0xc);
      *(undefined1 *)(iVar3 + 0xc) = 3;
      if ((uVar4 != 3) && (uVar5 = uVar4, uVar4 == 0)) {
        uVar5 = (uint)*(byte *)(extraout_r2 + 0x512);
      }
    }
  }
  return uVar5;
}

