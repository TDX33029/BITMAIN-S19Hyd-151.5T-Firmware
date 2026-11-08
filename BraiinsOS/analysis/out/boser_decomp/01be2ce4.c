// FUN_01be2ce4 @ 01be2ce4 size=100 calls_out=4 calls_in=1
// strings: 

int FUN_01be2ce4(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 auStack_a8 [16];
  uint local_98;
  
  iVar1 = FUN_01beaa24(param_1,auStack_a8);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    uVar2 = FUN_01be3388(param_1,3);
    if ((uVar2 & 0x200000) == 0) {
      if ((local_98 & 0xf000) == 0x4000) {
        iVar1 = FUN_01be3f8c(1,0x818);
        if (iVar1 != 0) {
          FUN_01be3388(param_1,2,1);
          *(undefined4 *)(iVar1 + 8) = param_1;
        }
      }
      else {
        puVar3 = (undefined4 *)FUN_01be3244();
        *puVar3 = 0x14;
        iVar1 = 0;
      }
    }
    else {
      puVar3 = (undefined4 *)FUN_01be3244();
      iVar1 = 0;
      *puVar3 = 9;
    }
  }
  return iVar1;
}

