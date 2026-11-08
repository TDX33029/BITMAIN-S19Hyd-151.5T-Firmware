// FUN_017775c4 @ 017775c4 size=116 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_017775c4(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x1a);
  uVar2 = (uint)*(byte *)(param_1 + 0x1b);
  uVar4 = uVar2 - uVar1;
  if (*(uint *)(param_1 + 8) == 0 && (uVar4 & 0xff) == 0) {
    uVar4 = *(uint *)(param_1 + 0x20);
    iVar3 = *(int *)(param_1 + 0x1c);
  }
  else if (uVar2 == uVar1) {
    iVar3 = *(int *)(param_1 + 4);
    uVar4 = *(uint *)(param_1 + 8);
  }
  else {
    if ((uVar2 < uVar1) || (10 < uVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar1,uVar2,10,&DAT_01d1dbdc);
    }
    iVar3 = param_1 + 0x10 + uVar1;
  }
  return CONCAT44(uVar4,iVar3);
}

