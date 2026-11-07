// FUN_019ee264 @ 019ee264 size=224 calls_out=4 calls_in=23
// strings: 

undefined4 FUN_019ee264(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined1 unaff_r8;
  undefined8 uVar5;
  
  bVar1 = FUN_019ec70c();
  if (((bVar1 == 2) || ((bVar1 & 1) != 0)) || (param_1 == 0)) {
    uVar2 = FUN_019e84a0(param_2,param_3);
    return uVar2;
  }
  uVar5 = thunk_FUN_01bee35a(bVar1,0x20);
  iVar3 = (int)uVar5 + (int)((ulonglong)uVar5 >> 0x20);
  if (*(char *)(iVar3 + 0x38) != '\x01') {
    if (*(char *)(iVar3 + 0x38) == '\x02') {
      cVar4 = '\x02';
      goto LAB_019ee2f0;
    }
    FUN_019a2bcc(iVar3,&LAB_019efb68);
    *(undefined1 *)(iVar3 + 0x38) = 1;
  }
  cVar4 = *(char *)(iVar3 + 0x30);
  unaff_r8 = *(undefined1 *)(iVar3 + 0x31);
  *(undefined1 *)(iVar3 + 0x30) = 0;
LAB_019ee2f0:
  uVar2 = FUN_019e84a0(param_2,param_3);
  if (cVar4 != '\x02') {
    if (*(char *)(iVar3 + 0x38) != '\x01') {
      if (*(char *)(iVar3 + 0x38) == '\x02') {
        return uVar2;
      }
      FUN_019a2bcc(iVar3,&LAB_019efb68);
      *(undefined1 *)(iVar3 + 0x38) = 1;
    }
    *(undefined1 *)(iVar3 + 0x31) = unaff_r8;
    *(char *)(iVar3 + 0x30) = cVar4;
  }
  return uVar2;
}

