// FUN_01735eac @ 01735eac size=204 calls_out=4 calls_in=1
// strings: 

void FUN_01735eac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [68];
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  uVar4 = FUN_017345b8();
  puVar2 = (undefined1 *)((ulonglong)uVar4 >> 0x20);
  if ((int)uVar4 == 0) {
    puVar2 = auStack_60;
    iVar1 = FUN_0172e928(param_1,puVar2,param_2);
    if (iVar1 != 0) {
      uVar4 = FUN_017331a0(param_1,puVar2,param_3);
      puVar2 = (undefined1 *)((ulonglong)uVar4 >> 0x20);
      bVar3 = (int)uVar4 != 0;
      goto LAB_01735efc;
    }
  }
  bVar3 = false;
LAB_01735efc:
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(bVar3,puVar2,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

