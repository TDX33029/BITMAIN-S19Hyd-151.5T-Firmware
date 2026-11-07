// FUN_019ec670 @ 019ec670 size=148 calls_out=3 calls_in=76
// strings: 

uint FUN_019ec670(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint extraout_r1;
  uint uVar3;
  uint extraout_r2;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = thunk_FUN_01bee35a(param_1,0x20);
  uVar2 = (uint)((ulonglong)uVar6 >> 0x20);
  iVar5 = (int)uVar6 + uVar2;
  if (*(char *)(iVar5 + 0x38) != '\x01') {
    if (*(char *)(iVar5 + 0x38) == '\x02') {
      uVar1 = 2;
      goto LAB_019ec6ec;
    }
    FUN_019a2bcc(iVar5,&LAB_019efb68);
    *(undefined1 *)(iVar5 + 0x38) = 1;
  }
  bVar4 = *(byte *)(iVar5 + 0x31);
  uVar2 = (uint)bVar4;
  uVar1 = 0;
  uVar3 = 0;
  if (*(char *)(iVar5 + 0x30) == '\x01') {
    if (uVar2 != 0) {
      bVar4 = bVar4 - 1;
      uVar3 = 1;
      goto LAB_019ec6e0;
    }
    FUN_019ece98(*param_1,param_1[1]);
    uVar1 = 1;
    uVar2 = extraout_r1;
    uVar3 = extraout_r2;
  }
  else {
LAB_019ec6e0:
    *(byte *)(iVar5 + 0x31) = bVar4;
  }
  uVar2 = uVar3 & 0xff | uVar2 << 8;
LAB_019ec6ec:
  return uVar1 | uVar2 << 8;
}

